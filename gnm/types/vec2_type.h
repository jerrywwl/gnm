#ifndef GNM_VEC2_TYPE_H_
#define GNM_VEC2_TYPE_H_

#include "../swizzles/vec2_swizzles.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct vec2_t {

	vec2_t() {}
	vec2_t(const T f) : x(f), y(f) {}
	vec2_t(const T _x, const T _y) : x(_x), y(_y) {}
	vec2_t(const vec2_t<T>& v) : x(v.x), y(v.y) {}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec2_t(const swizzle_2_t<T, N, X, Y, Z, W>& v)
		: x(v._m[X]), y(v._m[Y]) {}

#if (GNM_SIMD)
	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec2_t(const swizzle_2_simd_t<float, N, X, Y, Z, W>& v) {
		_m[0] = v._m[X];
		_m[1] = v._m[Y];
	}
#endif

	GNM_INLINE T& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const T& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _m[index];
	}

	union {
		T _m[2];

		struct {
			T x, y;
		};

		struct {
			T r, g;
		};

		struct {
			T s, t;
		};

		GNM_VEC2_T_2_SWIZZLES(T)
		GNM_VEC2_T_3_SWIZZLES(T)
		GNM_VEC2_T_4_SWIZZLES(T)
	};
};

using vec2 = vec2_t<float>;
using bvec2 = vec2_t<bool>;
using ivec2 = vec2_t<int>;
using uvec2 = vec2_t<uint>;

static const vec2 VEC2_ZERO = vec2(0.0f);
static const vec2 VEC2_ONE = vec2(1.0f);
static const vec2 VEC2_NEG_ONE = vec2(-1.0f);
static const vec2 VEC2_UNIT_X = vec2(1.0f, 0.0f);
static const vec2 VEC2_UNIT_Y = vec2(0.0f, 1.0f);

static const ivec2 IVEC2_ZERO = ivec2(0);
static const ivec2 IVEC2_ONE = ivec2(1);
static const ivec2 IVEC2_NEG_ONE = ivec2(-1);
static const ivec2 IVEC2_UNIT_X = ivec2(1, 0);
static const ivec2 IVEC2_UNIT_Y = ivec2(0, 1);

static const uvec2 UVEC2_ZERO = uvec2(0);
static const uvec2 UVEC2_ONE = uvec2(1);
static const uvec2 UVEC2_UNIT_X = uvec2(1, 0);
static const uvec2 UVEC2_UNIT_Y = uvec2(0, 1);

GNM_NAMESPACE_END

#endif // GNM_VEC2_TYPE_H_
