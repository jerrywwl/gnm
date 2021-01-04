@echo off

echo Specify the generator for chi project
echo 1.Visual Studio 2019 MSVC x64
echo 2.Visual Studio 2019 LLVM (clang-cl) x64
echo 3.NMake Makefiles LLVM (clang-cl) x64


set /p a=select:
if %a%==1 goto vs16_msvc_x64
if %a%==2 goto vs16_llvm_x64
if %a%==3 goto vs16_nmake_x64

:vs16_msvc_x64
mkdir build_vs16_msvc_x64
cmake -E chdir build_vs16_msvc_x64 cmake -G "Visual Studio 16 2019" -A x64 ^
	-DMSVC=1 ^
	-DCPU_X64=1 ^
	..
goto end

:vs16_llvm_x64
mkdir build_vs16_llvm_x64
cmake -E chdir build_vs16_llvm_x64 cmake -G "Visual Studio 16 2019" -A x64 -T ClangCL ^
	-DMSVC=1 ^
	-DCPU_X64=1 ^
	-DGNM_ENABLE_CLANG=1 ^
	..
goto end

:vs16_nmake_x64
mkdir build_nmake_x64
cmake -E chdir build_nmake_x64 cmake -G "NMake Makefiles" ^
	-DMSVC=1 ^
	-DCPU_X64=1 ^
	-DGNM_ENABLE_CLANG=1 ^
	-DCMAKE_TOOLCHAIN_FILE=cmake\android.toolchain.cmake ^
	..
goto end

:end

pause
