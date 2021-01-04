#ifndef GNM_QUAT_TYPE_H_
#define GNM_QUAT_TYPE_H_

#include "../swizzles/quat_swizzles.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct quat_t {

	quat_t() {}
	quat_t(const T f) : x(f), y(f), z(f), w(f) {}
	quat_t(const T _x, const T _y, const T _z, const T _w) : x(_x), y(_y), z(_z), w(_w) {}
	quat_t(const quat_t<T>& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	quat_t(const vec2_t<T>& _xy, const T _z, const T _w) : x(_xy.x), y(_xy.y), z(_z), w(_w) {}
	quat_t(const T _x, const vec2_t<T>& _yz, const T _w) : x(_x), y(_yz.x), z(_yz.y), w(_w) {}
	quat_t(const T _x, const T _y, const vec2_t<T>& _zw) : x(_x), y(_y), z(_zw.x), w(_zw.y) {}
	quat_t(const vec2_t<T>& _xy, const vec2_t<T>& _zw) : x(_xy.x), y(_xy.y), z(_zw.x), w(_zw.y) {}
	quat_t(const T _x, const vec3_t<T>& _yzw) : x(_x), y(_yzw.x), z(_yzw.y), w(_yzw.z) {}
	quat_t(const vec3_t<T>& _xyz, const T& _w) : x(_xyz.x), y(_xyz.y), z(_xyz.z), w(_w) {}
	quat_t(const vec4_t<T>& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	quat_t(const swizzle_4_t<T, N, X, Y, Z, W>& v)
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
			T s, t, p, q;
		};

		GNM_QUAT_T_2_SWIZZLES(T)
		GNM_QUAT_T_3_SWIZZLES(T)
		GNM_QUAT_T_4_SWIZZLES(T)
	};
};

using quat = quat_t<float>;

static const quat QUAT_ZERO = quat(0.0f, 0.0f, 0.0f, 0.0f);
static const quat QUAT_ONE = quat(1.0f, 1.0f, 1.0f, 1.0f);
static const quat QUAT_IDENTITY = quat(1.0f, 0.0f, 0.0f, 0.0f);

GNM_NAMESPACE_END

#endif // GNM_QUAT_TYPE_H_
