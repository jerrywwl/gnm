#ifndef GNM_SWIZZLES_SWIZZLES_H_
#define GNM_SWIZZLES_SWIZZLES_H_

#include "../common.h"

GNM_NAMESPACE_BEGIN

template<typename T, uint8 N, uint8 _X, uint8 _Y, uint8 _Z = 0xFF, uint8 _W = 0xFF>
struct swizzle_2_t {
  T _m[N];
};

template<typename T, uint8 N, uint8 _X, uint8 _Y, uint8 _Z = 0xFF, uint8 _W = 0xFF>
struct swizzle_3_t {
  T _m[N];
};

template<typename T, uint8 N, uint8 _X, uint8 _Y, uint8 _Z = 0xFF, uint8 _W = 0xFF>
struct swizzle_4_t {
  T _m[N];
};

#if (GNM_SIMD)
template<typename T, uint8 N, uint8 _X, uint8 _Y, uint8 _Z = 0xFF, uint8 _W = 0xFF>
struct swizzle_2_simd_t {
  union {
    __m128 vec;
    T _m[4];
  };
};

template<typename T, uint8 N, uint8 _X, uint8 _Y, uint8 _Z = 0xFF, uint8 _W = 0xFF>
struct swizzle_3_simd_t {
  union {
    __m128 vec;
    T _m[4];
  };
};

template<typename T, uint8 N, uint8 _X, uint8 _Y, uint8 _Z = 0xFF, uint8 _W = 0xFF>
struct swizzle_4_simd_t {
  union {
    __m128 vec;
    T _m[4];
  };
};
#endif

GNM_NAMESPACE_END

#endif // GNM_SWIZZLES_SWIZZLES_H_
