#ifndef GNM_SWIZZLES_QUAT_SWIZZLES_H_
#define GNM_SWIZZLES_QUAT_SWIZZLES_H_

#include "swizzles.h"

#define GNM_SWIZZLE_QUAT_T_2_X(T, X, P0) \
  swizzle_2_t<T, 4, X, 0, 0xFF, 0xFF> P0##x; \
  swizzle_2_t<T, 4, X, 1, 0xFF, 0xFF> P0##y; \
  swizzle_2_t<T, 4, X, 2, 0xFF, 0xFF> P0##z; \
  swizzle_2_t<T, 4, X, 3, 0xFF, 0xFF> P0##w;

#define GNM_QUAT_T_2_SWIZZLES(T) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 0, x) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 1, y) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 2, z) \
  GNM_SWIZZLE_QUAT_T_2_X(T, 3, w)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_QUAT_T_3_XY(T, X, Y, P0, P1) \
  swizzle_3_t<T, 4, X, Y, 0, 0xFF> P0##P1##x; \
  swizzle_3_t<T, 4, X, Y, 1, 0xFF> P0##P1##y; \
  swizzle_3_t<T, 4, X, Y, 2, 0xFF> P0##P1##z; \
  swizzle_3_t<T, 4, X, Y, 3, 0xFF> P0##P1##w;

#define GNM_SWIZZLE_QUAT_T_3_X(T, X, P0) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 0, P0, x) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 1, P0, y) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 2, P0, z) \
  GNM_SWIZZLE_QUAT_T_3_XY(T, X, 3, P0, w)

#define GNM_QUAT_T_3_SWIZZLES(T) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 0, x) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 1, y) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 2, z) \
  GNM_SWIZZLE_QUAT_T_3_X(T, 3, w)

// ----------------------------------------------------------------------------------------------------

#define GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, Z, P0, P1, P2) \
  swizzle_4_t<T, 4, X, Y, Z, 0> P0##P1##P2##x; \
  swizzle_4_t<T, 4, X, Y, Z, 1> P0##P1##P2##y; \
  swizzle_4_t<T, 4, X, Y, Z, 2> P0##P1##P2##z; \
  swizzle_4_t<T, 4, X, Y, Z, 3> P0##P1##P2##w;

#define GNM_SWIZZLE_QUAT_T_4_XY(T, X, Y, P0, P1) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 0, P0, P1, x) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 1, P0, P1, y) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 2, P0, P1, z) \
  GNM_SWIZZLE_QUAT_T_4_XYZ(T, X, Y, 3, P0, P1, w)

#define GNM_SWIZZLE_QUAT_T_4_X(T, X, P0) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 0, P0, x) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 1, P0, y) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 2, P0, z) \
  GNM_SWIZZLE_QUAT_T_4_XY(T, X, 3, P0, w)

#define GNM_QUAT_T_4_SWIZZLES(T) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 0, x) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 1, y) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 2, z) \
  GNM_SWIZZLE_QUAT_T_4_X(T, 3, w)

#endif // GNM_SWIZZLES_QUAT_SWIZZLES_H_
