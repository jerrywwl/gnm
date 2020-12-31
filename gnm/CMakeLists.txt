set(TARGET_NAME gnm)

message(STATUS "Target: ${TARGET_NAME}...")

# ---------------------------------------------------------------------

file(GLOB_RECURSE HEADER_FILES *.h *.hpp *.inl)
file(GLOB_RECURSE SOURCE_CPP_FILES *.cpp *.cc)
file(GLOB_RECURSE SOURCE_C_FILES *.c)

macro(GROUP_FILES src_files)
	set(cur_dir ${CMAKE_CURRENT_SOURCE_DIR})
	foreach(src_file ${${src_files}})
		string(REGEX REPLACE ${cur_dir}/\(.*\) \\1 sgbd_fpath ${src_file})
		string(REGEX REPLACE "\(.*\)/.*" \\1 sgbd_group_name ${sgbd_fpath})
		string(COMPARE EQUAL ${sgbd_fpath} ${sgbd_group_name} sgbd_nogroup)
			
		string(REPLACE "\\" "/" sgbd_group_name ${sgbd_group_name})

		if(sgbd_nogroup)
			set(sgbd_group_name "/")
		endif(sgbd_nogroup)

		#if(${GNM_PLATFORM_WIN32})
		string(REPLACE "/" "\\" sgbd_group_name ${sgbd_group_name})
		#endif()
		source_group(${sgbd_group_name} FILES ${src_file})

	endforeach(src_file)

endmacro(GROUP_FILES)

set(ALL_FILES ${HEADER_FILES} ${SOURCE_CPP_FILES} ${SOURCE_C_FILES})

GROUP_FILES(ALL_FILES)

if (GNM_STATIC)
	add_library(${TARGET_NAME} STATIC ${ALL_FILES})
else()
	add_library(${TARGET_NAME} SHARED ${ALL_FILES})
endif()

set_target_properties(${TARGET_NAME} PROPERTIES FOLDER gnm)

# ---------------------------------------------------------------------

message(STATUS "${TARGET_NAME} configuration completed.") 
