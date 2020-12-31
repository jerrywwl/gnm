set(TARGET_NAME test)

message(STATUS "Target: ${TARGET_NAME}...")

# ---------------------------------------------------------------------
# set include files

set(INCLUDE_FILES
  ${GNM_SRC_PATH}
  ./
)

include_directories( ${INCLUDE_FILES} )

# ---------------------------------------------------------------------

file(GLOB_RECURSE HEADER_FILES *.h)
file(GLOB_RECURSE SOURCE_CPP_FILES *.cpp *.cc)
file(GLOB_RECURSE SOURCE_C_FILES *.c)

set(ALL_FILES ${HEADER_FILES} ${SOURCE_CPP_FILES} ${SOURCE_C_FILES})

add_executable(${TARGET_NAME} ${ALL_FILES})

target_link_libraries(${TARGET_NAME})

set_target_properties(${TARGET_NAME} PROPERTIES FOLDER test)

message(STATUS "${TARGET_NAME} configuration completed.") 
