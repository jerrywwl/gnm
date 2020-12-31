#ifndef GNM_COMMON_H_
#define GNM_COMMON_H_

#include <assert.h>
#include <limits>
#include <cmath>

#define GNM_NAMESPACE_BEGIN	namespace gnm {
#define GNM_NAMESPACE_END		}
#define GNM_DETAIL_NAMESPACE_BEGIN	namespace gnm { namespace detail {
#define GNM_DETAIL_NAMESPACE_END		}}

#define GNM_USING_NAMESPACE	using namespace gnm;

#if defined( __clang__ ) || defined( __GNUC__ ) 
# define GNM_INLINE inline __attribute__((always_inline))
#elif defined(_MSC_VER)
#	define GNM_INLINE __forceinline
#elif defined(__MINGW32__)
# define GNM_INLINE __inline
#else
# define GNM_INLINE __inline
#endif

#define GNM_SIMD_NATIVE 1 
#define GNM_SIMD_AVX 2
#define GNM_SIMD_NEON 3

#define ENABLE_GNM_SIMD

#if defined(ENABLE_GNM_SIMD)
# if defined(__AVX__) || defined(__AVX2__)
#   define GNM_SIMD GNM_SIMD_AVX
# else
#   define GNM_SIMD GNM_SIMD_NATIVE
# endif
#else
# define GNM_SIMD GNM_SIMD_NATIVE
#endif

typedef signed char        int8;
typedef short              int16;
typedef int                int32;
typedef long long          int64;
typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;
typedef unsigned long long uint64;

using uint = uint32;

#endif // GNM_COMMON_H_
