#ifndef GNM_VEC3_TYPE_H_
#define GNM_VEC3_TYPE_H_

#include "swizzles/vec3_swizzles.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct vec3_t {

	vec3_t() {}
	vec3_t(const T f) : x(f), y(f), z(f) {}
	vec3_t(const T _x, const T _y, const T _z) : x(_x), y(_y), z(_z) {}
	vec3_t(const vec3_t<T>& v) : x(v.x), y(v.y), z(v.z) {}

	vec3_t(const vec2_t<T>& _xy, const T _z) : x(_xy.x), y(_xy.y), z(_z) {}
	vec3_t(const T _x, const vec2_t<T>& _yz) : x(_x), y(_yz.x), z(_yz.y) {}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec3_t(const swizzle_3_t<T, N, X, Y, Z, W>& v)
		: x(v._m[X]), y(v._m[Y]), z(v._m[Z]) {}

	GNM_INLINE T& operator [] (int index) {
		assert(index >= 0 && index < 3 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const T& operator [] (int index) const {
		assert(index >= 0 && index < 3 && "Index out of bounds.");
		return _m[index];
	}

	union {
		T _m[3];

		T* _p;

		struct {
			T x, y, z;
		};

		struct {
			T r, g, b;
		};

		struct {
			T s, t, p;
		};

		GNM_VEC3_T_2_SWIZZLES(T)
		GNM_VEC3_T_3_SWIZZLES(T)
		GNM_VEC3_T_4_SWIZZLES(T)
	};
};

using vec3 = vec3_t<float>;
using bvec3 = vec3_t<bool>;
using ivec3 = vec3_t<int>;
using uvec3 = vec3_t<uint>;

static const vec3 VEC3_ZERO = vec3(0.0f, 0.0f, 0.0f);
static const vec3 VEC3_ONE = vec3(1.0f, 1.0f, 1.0f);

GNM_NAMESPACE_END

#endif // GNM_VEC3_TYPE_H_
