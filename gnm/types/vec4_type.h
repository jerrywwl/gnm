#ifndef GNM_VEC4_TYPE_H_
#define GNM_VEC4_TYPE_H_

#include "swizzles/vec4_swizzles.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct vec4_t {

	vec4_t() {}
	vec4_t(const T f) : x(f), y(f), z(f), w(f) {}
	vec4_t(const T _x, const T _y, const T _z, const T _w) : x(_x), y(_y), z(_z), w(_w) {}
	vec4_t(const vec4_t<T>& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	vec4_t(const vec2_t<T>& _xy, const T _z, const T _w) : x(_xy.x), y(_xy.y), z(_z), w(_w) {}
	vec4_t(const T _x, const vec2_t<T>& _yz, const T _w) : x(_x), y(_yz.x), z(_yz.y), w(_w) {}
	vec4_t(const T _x, const T _y, const vec2_t<T>& _zw) : x(_x), y(_y), z(_zw.x), w(_zw.y) {}
	vec4_t(const vec2_t<T>& _xy, const vec2_t<T>& _zw) : x(_xy.x), y(_xy.y), z(_zw.x), w(_zw.y) {}
	vec4_t(const T _x, const vec3_t<T>& _yzw) : x(_x), y(_yzw.x), z(_yzw.y), w(_yzw.z) {}
	vec4_t(const vec3_t<T>& _xyz, const T& _w) : x(_xyz.x), y(_xyz.y), z(_xyz.z), w(_w) {}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec4_t(const swizzle_4_t<T, N, X, Y, Z, W>& v)
		: x(v._m[X]), y(v._m[Y]), z(v._m[Z]), w(v._m[W]) {}

	GNM_INLINE T& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const T& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}

	union {
		T _m[4];

		T* _p;

		struct {
			T x, y, z, w;
		};

		struct {
			T r, g, b, a;
		};

		struct {
			T s, t, p, q;
		};

		GNM_VEC4_T_2_SWIZZLES(T)
		GNM_VEC4_T_3_SWIZZLES(T)
		GNM_VEC4_T_4_SWIZZLES(T)
	};
};

using vec4 = vec4_t<float>;
using bvec4 = vec4_t<bool>;
using ivec4 = vec4_t<int>;
using uvec4 = vec4_t<uint>;

static const vec4 VEC4_ZERO = vec4(0.0f, 0.0f, 0.0f, 0.0f);
static const vec4 VEC4_ONE = vec4(1.0f, 1.0f, 1.0f, 1.0f);

GNM_NAMESPACE_END

#endif // GNM_VEC4_TYPE_H_
