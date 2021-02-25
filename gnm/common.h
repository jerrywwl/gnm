#ifndef GNM_COMMON_H_
#define GNM_COMMON_H_

#include <assert.h>
#include <cmath>

#define GNM_NAMESPACE_BEGIN	namespace gnm {
#define GNM_NAMESPACE_END		}
#define GNM_DETAIL_NAMESPACE_BEGIN	namespace gnm { namespace detail {
#define GNM_DETAIL_NAMESPACE_END		}}

#define GNM_USING_NAMESPACE	using namespace gnm;

// Platform definition
#define GNM_PLATFORM_WINDOWS 1
#define GNM_PLATFORM_LINUX 2
#define GNM_PLATFORM_MAC_OSX 3
#define GNM_PLATFORM_MAC_IOS 4
#define GNM_PLATFORM_ANDROID 5
#define GNM_PLATFORM_NACL 6

// Platform recognition
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32) || defined(_WIN64) || defined(__WIN64__) || defined(WIN64)
#	define GNM_PLATFORM GNM_PLATFORM_WINDOWS
#elif defined(__APPLE_CC__)
# if __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 40000 || __IPHONE_OS_VERSION_MIN_REQUIRED >= 40000
#   define GNM_PLATFORM GNM_PLATFORM_MAC_IOS
# else
#   define GNM_PLATFORM GNM_PLATFORM_MAC_OSX
# endif
#elif defined(__ANDROID__)
#	define GNM_PLATFORM GNM_PLATFORM_ANDROID
#elif defined(linux) || defined(__linux) || defined(__linux__)
#	define GNM_PLATFORM GNM_PLATFORM_LINUX
#elif defined(__native_client__)
# define GNM_PLATFORM GNM_PLATFORM_NACL
#else
#	error "Couldn't recognize platform"
#endif


#if defined( __clang__ ) || defined( __GNUC__ ) 
# define GNM_INLINE inline __attribute__((always_inline))
#elif defined(_MSC_VER)
#	define GNM_INLINE __forceinline
#elif defined(__MINGW32__)
# define GNM_INLINE __inline
#else
# define GNM_INLINE __inline
#endif

#define GNM_SIMD_NATIVE 0 
#define GNM_SIMD_L1 1
#define GNM_SIMD_L2 2

#if (GNM_PLATFORM == GNM_PLATFORM_WINDOWS)
# if defined(__AVX__) || defined(__AVX2__)
#   include <immintrin.h>
#   define GNM_SIMD GNM_SIMD_L2
# else
#   define GNM_SIMD GNM_SIMD_NATIVE
# endif
#elif (GNM_PLATFORM == GNM_PLATFORM_MAC_IOS || GNM_PLATFORM == GNM_PLATFORM_ANDROID)
//#include <arm_neon.h>
//#define GNM_SIMD GNM_SIMD_NEON
#define GNM_SIMD GNM_SIMD_NATIVE
#else
#define GNM_SIMD GNM_SIMD_NATIVE
#endif

using int8 = signed char;
using int16 = short;
using int32 = int;
using int64 = long long;
using uint8 = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

using uint = uint32;

#define GNM_PI (float)(3.141592653589793f)
#define GNM_D2R (float)(0.017453292519943f)
#define GNM_R2D (float)(57.29577951308233f)
#define GNM_EPSILON (float)(1.1920929e-007)

#define GNM_PI_D (double)(3.141592653589793f)
#define GNM_D2R_D (double)(0.017453292519943f)
#define GNM_R2D_D (double)(57.29577951308233f)
#define GNM_EPSILON_D (double)(2.2204460492503131e-016)

#endif // GNM_COMMON_H_
