#ifndef GNM_SWIZZLES_VEC3_SWIZZLES_H_
#define GNM_SWIZZLES_VEC3_SWIZZLES_H_

#include "swizzles.h"

#define GNM_SWIZZLE_VEC3_T_2_X(T, X, P0, C0, T0) \
  swizzle_2_t<T, 3, X, 0, 0xFF, 0xFF> P0##x; \
  swizzle_2_t<T, 3, X, 0, 0xFF, 0xFF> C0##r; \
  swizzle_2_t<T, 3, X, 0, 0xFF, 0xFF> T0##s; \
  swizzle_2_t<T, 3, X, 1, 0xFF, 0xFF> P0##y; \
  swizzle_2_t<T, 3, X, 1, 0xFF, 0xFF> C0##g; \
  swizzle_2_t<T, 3, X, 1, 0xFF, 0xFF> T0##t; \
  swizzle_2_t<T, 3, X, 2, 0xFF, 0xFF> P0##z; \
  swizzle_2_t<T, 3, X, 2, 0xFF, 0xFF> C0##b; \
  swizzle_2_t<T, 3, X, 2, 0xFF, 0xFF> T0##p;

#define GNM_VEC3_T_2_SWIZZLES(T) \
  GNM_SWIZZLE_VEC3_T_2_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC3_T_2_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC3_T_2_X(T, 2, z, b, p)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_VEC3_T_3_XY(T, X, Y, P0, P1, C0, C1, T0, T1) \
  swizzle_3_t<T, 3, X, Y, 0, 0xFF> P0##P1##x; \
  swizzle_3_t<T, 3, X, Y, 0, 0xFF> C0##C1##r; \
  swizzle_3_t<T, 3, X, Y, 0, 0xFF> T0##T1##s; \
  swizzle_3_t<T, 3, X, Y, 1, 0xFF> P0##P1##y; \
  swizzle_3_t<T, 3, X, Y, 1, 0xFF> C0##C1##g; \
  swizzle_3_t<T, 3, X, Y, 1, 0xFF> T0##T1##t; \
  swizzle_3_t<T, 3, X, Y, 2, 0xFF> P0##P1##z; \
  swizzle_3_t<T, 3, X, Y, 2, 0xFF> C0##C1##b; \
  swizzle_3_t<T, 3, X, Y, 2, 0xFF> T0##T1##p;

#define GNM_SWIZZLE_VEC3_T_3_X(T, X, P0, C0, T0) \
  GNM_SWIZZLE_VEC3_T_3_XY(T, X, 0, P0, x, C0, r, T0, s) \
  GNM_SWIZZLE_VEC3_T_3_XY(T, X, 1, P0, y, C0, g, T0, t) \
  GNM_SWIZZLE_VEC3_T_3_XY(T, X, 2, P0, z, C0, b, T0, p)

#define GNM_VEC3_T_3_SWIZZLES(T) \
  GNM_SWIZZLE_VEC3_T_3_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC3_T_3_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC3_T_3_X(T, 2, z, b, p)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_VEC3_T_4_XYZ(T, X, Y, Z, P0, P1, P2, C0, C1, C2, T0, T1, T2) \
  swizzle_4_t<T, 3, X, Y, Z, 0> P0##P1##P2##x; \
  swizzle_4_t<T, 3, X, Y, Z, 0> C0##C1##C2##r; \
  swizzle_4_t<T, 3, X, Y, Z, 0> T0##T1##T2##s; \
  swizzle_4_t<T, 3, X, Y, Z, 1> P0##P1##P2##y; \
  swizzle_4_t<T, 3, X, Y, Z, 1> C0##C1##C2##g; \
  swizzle_4_t<T, 3, X, Y, Z, 1> T0##T1##T2##t; \
  swizzle_4_t<T, 3, X, Y, Z, 2> P0##P1##P2##z; \
  swizzle_4_t<T, 3, X, Y, Z, 2> C0##C1##C2##b; \
  swizzle_4_t<T, 3, X, Y, Z, 2> T0##T1##T2##p;

#define GNM_SWIZZLE_VEC3_T_4_XY(T, X, Y, P0, P1, C0, C1, T0, T1) \
  GNM_SWIZZLE_VEC3_T_4_XYZ(T, X, Y, 0, P0, P1, x, C0, C1, r, T0, T1, s) \
  GNM_SWIZZLE_VEC3_T_4_XYZ(T, X, Y, 1, P0, P1, y, C0, C1, g, T0, T1, t) \
  GNM_SWIZZLE_VEC3_T_4_XYZ(T, X, Y, 2, P0, P1, z, C0, C1, b, T0, T1, p)

#define GNM_SWIZZLE_VEC3_T_4_X(T, X, P0, C0, T0) \
  GNM_SWIZZLE_VEC3_T_4_XY(T, X, 0, P0, x, C0, r, T0, s) \
  GNM_SWIZZLE_VEC3_T_4_XY(T, X, 1, P0, y, C0, g, T0, t) \
  GNM_SWIZZLE_VEC3_T_4_XY(T, X, 2, P0, z, C0, b, T0, p)

#define GNM_VEC3_T_4_SWIZZLES(T) \
  GNM_SWIZZLE_VEC3_T_4_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC3_T_4_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC3_T_4_X(T, 2, z, b, p)

#endif // GNM_SWIZZLES_VEC3_SWIZZLES_H_
