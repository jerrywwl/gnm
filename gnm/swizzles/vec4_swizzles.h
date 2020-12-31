#ifndef GNM_SWIZZLES_VEC4_SWIZZLES_H_
#define GNM_SWIZZLES_VEC4_SWIZZLES_H_

#include "swizzles.h"

#define GNM_SWIZZLE_VEC4_T_2_X(T, X, P0, C0, T0) \
  GNM_SWIZZLE_T_2(T, 4, X, 0, P0##x, C0##r, T0##s) \
  GNM_SWIZZLE_T_2(T, 4, X, 1, P0##y, C0##g, T0##t) \
  GNM_SWIZZLE_T_2(T, 4, X, 2, P0##z, C0##b, T0##p) \
  GNM_SWIZZLE_T_2(T, 4, X, 3, P0##w, C0##a, T0##q)

#define GNM_VEC4_T_2_SWIZZLES(T) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 2, z, b, p) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 3, w, a, q)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_VEC4_T_3_XY(T, X, Y, P0, P1, C0, C1, T0, T1) \
  GNM_SWIZZLE_T_3(T, 4, X, Y, 0, P0##P1##x, C0##C1##r, T0##T1##s) \
  GNM_SWIZZLE_T_3(T, 4, X, Y, 1, P0##P1##y, C0##C1##g, T0##T1##t) \
  GNM_SWIZZLE_T_3(T, 4, X, Y, 2, P0##P1##z, C0##C1##b, T0##T1##p) \
  GNM_SWIZZLE_T_3(T, 4, X, Y, 3, P0##P1##w, C0##C1##a, T0##T1##q)

#define GNM_SWIZZLE_VEC4_T_3_X(T, X, P0, C0, T0) \
  GNM_SWIZZLE_VEC4_T_3_XY(T, X, 0, P0, x, C0, r, T0, s) \
  GNM_SWIZZLE_VEC4_T_3_XY(T, X, 1, P0, y, C0, g, T0, t) \
  GNM_SWIZZLE_VEC4_T_3_XY(T, X, 2, P0, z, C0, b, T0, p) \
  GNM_SWIZZLE_VEC4_T_3_XY(T, X, 3, P0, w, C0, a, T0, q)

#define GNM_VEC4_T_3_SWIZZLES(T) \
  GNM_SWIZZLE_VEC4_T_3_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC4_T_3_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC4_T_3_X(T, 2, z, b, p) \
  GNM_SWIZZLE_VEC4_T_3_X(T, 3, w, a, q)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_VEC4_T_4_XYZ(T, X, Y, Z, P0, P1, P2, C0, C1, C2, T0, T1, T2) \
  GNM_SWIZZLE_T_4(T, 4, X, Y, Z, 0, P0##P1##P2##x, C0##C1##C2##r, T0##T1##T2##s) \
  GNM_SWIZZLE_T_4(T, 4, X, Y, Z, 1, P0##P1##P2##y, C0##C1##C2##g, T0##T1##T2##t) \
  GNM_SWIZZLE_T_4(T, 4, X, Y, Z, 2, P0##P1##P2##z, C0##C1##C2##b, T0##T1##T2##p) \
  GNM_SWIZZLE_T_4(T, 4, X, Y, Z, 3, P0##P1##P2##w, C0##C1##C2##a, T0##T1##T2##q)

#define GNM_SWIZZLE_VEC4_T_4_XY(T, X, Y, P0, P1, C0, C1, T0, T1) \
  GNM_SWIZZLE_VEC4_T_4_XYZ(T, X, Y, 0, P0, P1, x, C0, C1, r, T0, T1, s) \
  GNM_SWIZZLE_VEC4_T_4_XYZ(T, X, Y, 1, P0, P1, y, C0, C1, g, T0, T1, t) \
  GNM_SWIZZLE_VEC4_T_4_XYZ(T, X, Y, 2, P0, P1, z, C0, C1, b, T0, T1, p) \
  GNM_SWIZZLE_VEC4_T_4_XYZ(T, X, Y, 3, P0, P1, w, C0, C1, a, T0, T1, q)

#define GNM_SWIZZLE_VEC4_T_4_X(T, X, P0, C0, T0) \
  GNM_SWIZZLE_VEC4_T_4_XY(T, X, 0, P0, x, C0, r, T0, s) \
  GNM_SWIZZLE_VEC4_T_4_XY(T, X, 1, P0, y, C0, g, T0, t) \
  GNM_SWIZZLE_VEC4_T_4_XY(T, X, 2, P0, z, C0, b, T0, p) \
  GNM_SWIZZLE_VEC4_T_4_XY(T, X, 3, P0, w, C0, a, T0, q)

#define GNM_VEC4_T_4_SWIZZLES(T) \
  GNM_SWIZZLE_VEC4_T_4_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC4_T_4_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC4_T_4_X(T, 2, z, b, p) \
  GNM_SWIZZLE_VEC4_T_4_X(T, 3, w, a, q)

#endif // GNM_SWIZZLES_VEC4_SWIZZLES_H_
