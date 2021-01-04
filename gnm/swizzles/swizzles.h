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

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_T_2(T, N, X, Y, PS, CS, TS) \
  swizzle_2_t<T, N, X, Y, 0xFF, 0xFF> PS; \
  swizzle_2_t<T, N, X, Y, 0xFF, 0xFF> CS; \
  swizzle_2_t<T, N, X, Y, 0xFF, 0xFF> TS;

#define GNM_SWIZZLE_T_3(T, N, X, Y, Z, PS, CS, TS) \
  swizzle_3_t<T, N, X, Y, Z, 0xFF> PS; \
  swizzle_3_t<T, N, X, Y, Z, 0xFF> CS; \
  swizzle_3_t<T, N, X, Y, Z, 0xFF> TS;

#define GNM_SWIZZLE_T_4(T, N, X, Y, Z, W, PS, CS, TS) \
  swizzle_4_t<T, N, X, Y, Z, W> PS; \
  swizzle_4_t<T, N, X, Y, Z, W> CS; \
  swizzle_4_t<T, N, X, Y, Z, W> TS;

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END

#endif // GNM_SWIZZLES_SWIZZLES_H_
