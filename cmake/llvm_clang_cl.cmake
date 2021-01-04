if(NOT DEFINED ENV{LLVM_HOME})
    message(FATAL_ERROR "Not defined environment variable: LLVM_HOME")
endif()

set(LLVM_BIN_PATH "$ENV{LLVM_HOME}/bin")

set(CMAKE_C_COMPILER "${LLVM_BIN_PATH}/clang")
set(CMAKE_CXX_COMPILER "${LLVM_BIN_PATH}/clang++")
set(CMAKE_LINKER "${LLVM_BIN_PATH}/lld-link")
SET(CMAKE_AR "${LLVM_BIN_PATH}/llvm-ar")

message(STATUS "Clang compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "Clang linker: ${CMAKE_LINKER}")

