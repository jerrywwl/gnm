cmake_minimum_required(VERSION 3.15)

project(gnm)

set(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS TRUE)
set_property(GLOBAL PROPERTY USE_FOLDERS TRUE)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "")

message(STATUS "### GNM Building System ###")
message(STATUS "Configuring building system...")
message(STATUS "CMake version: ${CMAKE_VERSION}")

set(GNM_PLATFORM_WINDOWS FALSE)
set(GNM_PLATFORM_ANDROID FALSE)
set(GNM_PLATFORM_IOS FALSE)
set(GNM_PLATFORM_OSX FALSE)
set(GNM_PLATFORM_LINUX FALSE)

set(GNM_CPU_X64 FALSE)
set(GNM_CPU_X86 FALSE)
set(GNM_CPU_ARM64 FALSE)
set(GNM_CPU_ARM FALSE)

if(CPU_X64)
    set(GNM_CPU_X64 TRUE)
elseif(CPU_X86)
	set(GNM_CPU_X86 TRUE)
elseif(CPU_AARCH64)
    set(GNM_CPU_ARM64 TRUE)
elseif(CPU_ARM)
	set(GNM_CPU_ARM TRUE)
endif()

set(GNM_STATIC FALSE)

include(CheckCXXCompilerFlag)

if(WIN32)
	if(ANDROID)
		set(GNM_PLATFORM_ANDROID TRUE)
		message(STATUS "Platform: MSVC Android")
		set(GNM_PLATFORM_PATH android)

		set(CMAKE_CROSSCOMPILING TRUE)
		set(CMAKE_SYSTEM_NAME "Linux")
		#set(CMAKE_SYSTEM_NAME Android)
		set(CMAKE_SYSTEM_PROCESSOR arm)
		
		set(CMAKE_ANDROID_API "19")

	elseif(MSVC)
		set(GNM_PLATFORM_WINDOWS TRUE)
		set(GNM_PLATFORM_PATH windows)
		if(CPU_X64)
			message(STATUS "Platform: windows x64")
		else()
			message(STATUS "Platform: windows x86")
		endif()

		# compiler building setting

		# Flags used by the compiler during all build types.
		set(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /EHsc /W3 /fp:fast")
		# Flags used by the compiler during debug builds.
		set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} /D_DEBUG /MDd /Zi /Ob0 /Od /RTC1 /Oi")
		# Flags used by the compiler during release minsize builds.
		set(CMAKE_CXX_FLAGS_MINSIZEREL "${CMAKE_CXX_FLAGS} /MD /O1 /Ob1 /DNDEBUG")
		# Flags used by the compiler during release builds (/MD /Ob1 /Oi /Ot /Oy /Gs will produce slightly less optimized but smaller files).
		set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} /MD /O2 /Ob2 /DNDEBUG")
		# Flags used by the compiler during Release with Debug Info builds.
		set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS} /MD /Zi /O2 /Ob1 /DNDEBUG")
		# Flags used by the compiler during all build types.
		set(CMAKE_C_FLAGS "/DWIN32 /D_WINDOWS")
		# Flags used by the compiler during debug builds.
		set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} /D_DEBUG /MDd /Zi /Ob0 /Od /RTC1")
		# Flags used by the compiler during release minsize builds.
		set(CMAKE_C_FLAGS_MINSIZEREL "${CMAKE_C_FLAGS} /MD /O1 /Ob1 /DNDEBUG")
		# Flags used by the compiler during release builds (/MD /Ob1 /Oi /Ot /Oy /Gs will produce slightly less optimized but smaller files).
		set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} /MD /O2 /Ob2 /DNDEBUG")
		# Flags used by the compiler during Release with Debug Info builds.
		set(CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS} /MD /Zi /O2 /Ob1 /DNDEBUG")

		if(GNM_ENABLE_CLANG)
			add_compile_options("-Wno-string-plus-int")
			add_compile_options("-Wno-logical-op-parentheses")
			add_compile_options("-Wno-unused-command-line-argument")

			add_definitions("-D_XKEYCHECK_H -D_CRT_SECURE_NO_WARNINGS")
		else()	
			#[[
			# Enable intrinsics on MSVC in debug mode
			if (CMAKE_CL_64)
				# Visual Studio bails out on debug builds in 64bit mode unless
				# this flag is set...
				set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /bigobj")
				set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /bigobj")
			endif ()
			]]
		endif()

		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
	else()
		message(STATUS "Platform: Unknown")
	endif()
elseif(ANDROID)
	set(GNM_PLATFORM_ANDROID TRUE)
	set(GNM_PLATFORM_PATH android)
	message(STATUS "Platform: Android")
	set(GNM_STATIC TRUE CACHE BOOL "Forcing static build for android" FORCE)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fopenmp" CACHE STRING "" FORCE)
	#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fno-rtti -std=c++11" CACHE STRING "" FORCE)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -std=c++11 -fopenmp")
elseif(APPLE)
	# This seems to break Xcode projects so definitely don't enable on Apple builds
	set(CMAKE_USE_RELATIVE_PATHS true)
	# set(CMAKE_SUPPRESS_REGENERATION true)

	if(GNM_BUILD_PLATFORM_IOS)
		set(GNM_PLATFORM_IOS TRUE)
		set(GNM_PLATFORM_PATH ios)
		message(STATUS "Platform: Mac iOS")
		set(GNM_STATIC TRUE CACHE BOOL "Forcing static build for iPhone" FORCE)
		
		set(CMAKE_SYSTEM_NAME iOS)
		set(CMAKE_OSX_SYSROOT iphoneos)
		set(CMAKE_IOS_INSTALL_COMBINED 1)
		#set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
	else()
		set(GNM_PLATFORM_OSX TRUE)
		set(GNM_PLATFORM_PATH macos)
		#set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
		message(STATUS "Platform: Mac OSX")
	endif()

	set(CMAKE_CXX_FLAGS "-fstrict-aliasing -Wall -Wextra -Wno-string-plus-int -Wno-long-long -Wno-overloaded-virtual -Wno-unused-volatile-lvalue -Wno-deprecated-writable-strings -Wno-missing-field-initializers -Wno-logical-op-parentheses")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3 -msse3 -DNDEBUG")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -O0 -D_DEBUG_ -D_DEBUG -DFIPS_DEBUG=1 -ggdb")

	set(CMAKE_C_FLAGS "-fstrict-aliasing -Wall -Wextra -Wno-multichar -Wno-string-plus-int -Wno-long-long -Wno-overloaded-virtual -Wno-unused-volatile-lvalue -Wno-deprecated-writable-strings -Wno-missing-field-initializers -Wno-logical-op-parentheses")
	set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} -O3 -msse3 -DNDEBUG")
	set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} -O0 -D_DEBUG_ -D_DEBUG -DFIPS_DEBUG=1 -g")        	

	set(CMAKE_EXE_LINKER_FLAGS "-ObjC -dead_strip -lpthread")
	set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS}")
	set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS}")

	CHECK_CXX_COMPILER_FLAG("-std=c++17" SUPPORTS_CPP17)
	if (SUPPORTS_CPP17)
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
	endif()
else()
	message(STATUS "Platform: Linux")
	set(GNM_PLATFORM_PATH linux)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (GNM_PLATFORM_WIN32)
	if (GNM_CPU_X64)
		set(GNM_CPU_ARCH win64)
	elseif (GNM_CPU_X86)
		set(GNM_CPU_ARCH win32)
	endif()
elseif (GNM_PLATFORM_ANDROID)
	if (GNM_CPU_ARM64)
		set(GNM_CPU_ARCH arm64)
	elseif (GNM_CPU_ARM)
		set(GNM_CPU_ARCH armv7)
	elseif (GNM_CPU_X64)
		set(GNM_CPU_ARCH x64)
	elseif (GNM_CPU_X86)
		set(GNM_CPU_ARCH x86)
	endif()
elseif (GNM_PLATFORM_IOS)
	set(GNM_CPU_ARCH ios)
endif()

set(GNM_ROOT_PATH "${PROJECT_SOURCE_DIR}")
set(GNM_SRC_PATH "${PROJECT_SOURCE_DIR}/gnm")
set(GNM_BUILD_PATH "${PROJECT_BINARY_DIR}")
set(GNM_BIN_PATH "${GNM_BUILD_PATH}")
set(GNM_LIB_PATH "${GNM_BUILD_PATH}/lib")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${GNM_BIN_PATH}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${GNM_LIB_PATH}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${GNM_LIB_PATH}")

set(GNM_BIN_DEBUG "${GNM_BUILD_PATH}/Debug")
set(GNM_BIN_MINSIZEREL "${GNM_BUILD_PATH}/MinSizeRel")
set(GNM_BIN_RELEASE "${GNM_BUILD_PATH}/Release")
set(GNM_BIN_RELWITHDEBINFO "${GNM_BUILD_PATH}/RelWithDebInfo")
set(GNM_LIB_DEBUG "${GNM_BUILD_PATH}/Lib/Debug")
set(GNM_LIB_MINSIZEREL "${GNM_BUILD_PATH}/Lib/MinSizeRel")
set(GNM_LIB_RELEASE "${GNM_BUILD_PATH}/Lib/Release")
set(GNM_LIB_RELWITHDEBINFO "${GNM_BUILD_PATH}/Lib/RelWithDebInfo")

# output message
message(STATUS "\${GNM_ROOT_PATH}: ${GNM_ROOT_PATH}")
message(STATUS "\${GNM_SRC_PATH}: ${GNM_SRC_PATH}")
message(STATUS "\${GNM_BUILD_PATH}: ${GNM_BUILD_PATH}")
message(STATUS "\${GNM_BIN_PATH}: ${GNM_BIN_PATH}")
message(STATUS "\${GNM_LIB_PATH}: ${GNM_LIB_PATH}")

macro(use_precompiled_header PrecompiledHeader PrecompiledSource Sources)
endmacro(use_precompiled_header)

# add dependencies
set_property(GLOBAL PROPERTY USE_FOLDERS TRUE)

if(MSVC)
add_definitions("-D_CRT_SECURE_NO_WARNINGS")
endif()
# ---------------------------------------------------------------------
if(MSVC)
remove_definitions("-D_CRT_SECURE_NO_WARNINGS")
endif()

add_subdirectory(gnm)
add_subdirectory(test)