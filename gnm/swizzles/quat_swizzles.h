#ifndef GNM_SWIZZLES_QUAT_SWIZZLES_H_
#define GNM_SWIZZLES_QUAT_SWIZZLES_H_

#include "swizzles.h"

#if (GNM_SIMD)
# define SWIZZLE_QUAT_2_T swizzle_2_simd_t
# define SWIZZLE_QUAT_3_T swizzle_3_simd_t
# define SWIZZLE_QUAT_4_T swizzle_4_simd_t
#else
# define SWIZZLE_QUAT_2_T swizzle_2_t
# define SWIZZLE_QUAT_3_T swizzle_3_t
# define SWIZZLE_QUAT_4_T swizzle_4_t
#endif

#define GNM_SWIZZLE_QUAT_T_2_X(T, X, P0) \
  SWIZZLE_QUAT_2_T<T, 4, X, 0, 0xFF, 0xFF> P0##w; \
  SWIZZLE_QUAT_2_T<T, 4, X, 1, 0xFF, 0xFF> P0##x; \
  SWIZZLE_QUAT_2_T<T, 4, X, 2, 0xFF, 0xFF> P0##y; \
  SWIZZLE_QUAT_2_T<T, 4, X, 3, 0xFF, 0xFF> P0##z;

#define GNM_QUAT_T_2_SWIZZLES(T) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 0, w) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 1, x) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 2, y) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 3, z)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_QUAT_T_3_XY(T, X, Y, P0, P1) \
  SWIZZLE_QUAT_3_T<T, 4, X, Y, 0, 0xFF> P0##P1##w; \
  SWIZZLE_QUAT_3_T<T, 4, X, Y, 1, 0xFF> P0##P1##x; \
  SWIZZLE_QUAT_3_T<T, 4, X, Y, 2, 0xFF> P0##P1##y; \
  SWIZZLE_QUAT_3_T<T, 4, X, Y, 3, 0xFF> P0##P1##z;

#define GNM_SWIZZLE_QUAT_T_3_X(T, X, P0) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 0, P0, w) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 1, P0, x) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 2, P0, y) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 3, P0, z)

#define GNM_QUAT_T_3_SWIZZLES(T) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 0, w) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 1, x) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 2, y) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 3, z)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, Z, P0, P1, P2) \
  SWIZZLE_QUAT_4_T<T, 4, X, Y, Z, 0> P0##P1##P2##w; \
  SWIZZLE_QUAT_4_T<T, 4, X, Y, Z, 1> P0##P1##P2##x; \
  SWIZZLE_QUAT_4_T<T, 4, X, Y, Z, 2> P0##P1##P2##y; \
  SWIZZLE_QUAT_4_T<T, 4, X, Y, Z, 3> P0##P1##P2##z;

#define GNM_SWIZZLE_QUAT_T_4_XY(T, X, Y, P0, P1) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 0, P0, P1, w) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 1, P0, P1, x) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 2, P0, P1, y) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 3, P0, P1, z)

#define GNM_SWIZZLE_QUAT_T_4_X(T, X, P0) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 0, P0, w) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 1, P0, x) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 2, P0, y) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 3, P0, z)

#define GNM_QUAT_T_4_SWIZZLES(T) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 0, w) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 1, x) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 2, y) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 3, z)

#endif // GNM_SWIZZLES_QUAT_SWIZZLES_H_
