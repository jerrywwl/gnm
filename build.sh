rm -rf build_osx
mkdir build_osx
PATH="/Applications/CMake.app/Contents/bin":"$PATH"

cmake -E chdir build_osx cmake -G "Unix Makefiles" \
	-DCPU_X64=1 \
	-DGNM_ENABLE_CLANG=1 \
	..