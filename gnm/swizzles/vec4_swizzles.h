#ifndef GNM_SWIZZLES_VEC4_SWIZZLES_H_
#define GNM_SWIZZLES_VEC4_SWIZZLES_H_

#include "swizzles.h"

#if (GNM_SIMD)
# define SWIZZLE_2_T swizzle_2_simd_t
# define SWIZZLE_3_T swizzle_3_simd_t
# define SWIZZLE_4_T swizzle_4_simd_t
#else
# define SWIZZLE_2_T swizzle_2_t
# define SWIZZLE_3_T swizzle_3_t
# define SWIZZLE_4_T swizzle_4_t
#endif

#define GNM_SWIZZLE_VEC4_T_2_X(T, X, P0, C0, T0) \
  SWIZZLE_2_T<T, 4, X, 0, 0xFF, 0xFF> P0##x; \
  SWIZZLE_2_T<T, 4, X, 0, 0xFF, 0xFF> C0##r; \
  SWIZZLE_2_T<T, 4, X, 0, 0xFF, 0xFF> T0##s; \
  SWIZZLE_2_T<T, 4, X, 1, 0xFF, 0xFF> P0##y; \
  SWIZZLE_2_T<T, 4, X, 1, 0xFF, 0xFF> C0##g; \
  SWIZZLE_2_T<T, 4, X, 1, 0xFF, 0xFF> T0##t; \
  SWIZZLE_2_T<T, 4, X, 2, 0xFF, 0xFF> P0##z; \
  SWIZZLE_2_T<T, 4, X, 2, 0xFF, 0xFF> C0##b; \
  SWIZZLE_2_T<T, 4, X, 2, 0xFF, 0xFF> T0##p; \
  SWIZZLE_2_T<T, 4, X, 3, 0xFF, 0xFF> P0##w; \
  SWIZZLE_2_T<T, 4, X, 3, 0xFF, 0xFF> C0##a; \
  SWIZZLE_2_T<T, 4, X, 3, 0xFF, 0xFF> T0##q;

#define GNM_VEC4_T_2_SWIZZLES(T) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 0, x, r, s) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 1, y, g, t) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 2, z, b, p) \
  GNM_SWIZZLE_VEC4_T_2_X(T, 3, w, a, q)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_VEC4_T_3_XY(T, X, Y, P0, P1, C0, C1, T0, T1) \
  SWIZZLE_3_T<T, 4, X, Y, 0, 0xFF> P0##P1##x; \
  SWIZZLE_3_T<T, 4, X, Y, 0, 0xFF> C0##C1##r; \
  SWIZZLE_3_T<T, 4, X, Y, 0, 0xFF> T0##T1##s; \
  SWIZZLE_3_T<T, 4, X, Y, 1, 0xFF> P0##P1##y; \
  SWIZZLE_3_T<T, 4, X, Y, 1, 0xFF> C0##C1##g; \
  SWIZZLE_3_T<T, 4, X, Y, 1, 0xFF> T0##T1##t; \
  SWIZZLE_3_T<T, 4, X, Y, 2, 0xFF> P0##P1##z; \
  SWIZZLE_3_T<T, 4, X, Y, 2, 0xFF> C0##C1##b; \
  SWIZZLE_3_T<T, 4, X, Y, 2, 0xFF> T0##T1##p; \
  SWIZZLE_3_T<T, 4, X, Y, 3, 0xFF> P0##P1##w; \
  SWIZZLE_3_T<T, 4, X, Y, 3, 0xFF> C0##C1##a; \
  SWIZZLE_3_T<T, 4, X, Y, 3, 0xFF> T0##T1##q;

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
  SWIZZLE_4_T<T, 4, X, Y, Z, 0> P0##P1##P2##x; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 0> C0##C1##C2##r; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 0> T0##T1##T2##s; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 1> P0##P1##P2##y; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 1> C0##C1##C2##g; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 1> T0##T1##T2##t; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 2> P0##P1##P2##z; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 2> C0##C1##C2##b; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 2> T0##T1##T2##p; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 3> P0##P1##P2##w; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 3> C0##C1##C2##a; \
  SWIZZLE_4_T<T, 4, X, Y, Z, 3> T0##T1##T2##q;

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
