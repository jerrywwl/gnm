#ifndef GNM_VEC2_TYPE_H_
#define GNM_VEC2_TYPE_H_

#include "swizzles/vec2_swizzles.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct vec2_t {

	vec2_t() {}
	vec2_t(const T f) : x(f), y(f), z(f) {}
	vec2_t(const T _x, const T _y) : x(_x), y(_y) {}
	vec2_t(const vec2_t<T>& v) : x(v.x), y(v.y) {}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec2_t(const swizzle_2_t<T, N, X, Y, Z, W>& v)
		: x(v._m[X]), y(v._m[Y]) {}

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

		T* _p;

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

static const vec2 VEC2_ZERO = vec2(0.0f, 0.0f);
static const vec2 VEC2_ONE = vec2(1.0f, 1.0f);

GNM_NAMESPACE_END

#endif // GNM_VEC2_TYPE_H_
