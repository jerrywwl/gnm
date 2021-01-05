#ifndef GNM_QUAT_TYPE_H_
#define GNM_QUAT_TYPE_H_

#include "../swizzles/quat_swizzles.h"
#include "vec4_type.h"

GNM_NAMESPACE_BEGIN

#if (GNM_SIMD)

struct quat {

	union {
		float _m[4];

		__m128 _v;
		__m128i _vi;

		struct {
			float x, y, z, w;
		};

		struct {
			float s, t, p, q;
		};

		GNM_QUAT_T_2_SWIZZLES(float)
		GNM_QUAT_T_3_SWIZZLES(float)
		GNM_QUAT_T_4_SWIZZLES(float)
	};

	quat() {}
	quat(const float f) {
		_v = _mm_set_ps1(f);
	}

	quat(const float _x, const float _y, const float _z, const float _w) {
		_v = _mm_set_ps(_w, _z, _y, _x);
	}

	quat(const __m128 v) {
		_v = v;
	}

	quat(const quat& v) {
		_v = v._v;
	}

	quat(const vec2& _xy, const float _z, const float _w) {
		_v = _mm_set_ps(_w, _z, _xy.y, _xy.x);
	}

	quat(const float _x, const vec2& _yz, const float _w) {
		_v = _mm_set_ps(_w, _yz.y, _yz.x, _x);
	}

	quat(const float _x, const float _y, const vec2& _zw) {
		_v = _mm_set_ps(_zw.y, _zw.x, _y, _x);
	}

	quat(const vec2& _xy, const vec2& _zw) {
		_v = _mm_set_ps(_zw.y, _zw.x, _xy.y, _xy.x);
	}

	quat(const float _x, const vec3& _yzw) {
		_v = _mm_set_ps(_yzw.z, _yzw.y, _yzw.x, _x);
	}

	quat(const vec3& _xyz, const float _w) {
		_v = _mm_set_ps(_w, _xyz.z, _xyz.y, _xyz.x);
	}

	quat(const vec4& v) {
		_v = v._v;
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	quat(const swizzle_4_t<float, N, X, Y, Z, W>& v) {
		_v = _mm_set_ps(v._m[W], v._m[Z], v._m[Y], v._m[X]);
	}

	GNM_INLINE float& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const float& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}
};

#else

struct quat {

	union {
		float _m[4];

		struct {
			float x, y, z, w;
		};

		struct {
			float s, t, p, q;
		};

		GNM_QUAT_T_2_SWIZZLES(float)
		GNM_QUAT_T_3_SWIZZLES(float)
		GNM_QUAT_T_4_SWIZZLES(float)
	};

	quat() {}
	quat(const float f) : x(f), y(f), z(f), w(f) {}
	quat(const float _x, const float _y, const float _z, const float _w) : x(_x), y(_y), z(_z), w(_w) {}
	quat(const quat& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	quat(const vec2& _xy, const float _z, const float _w) : x(_xy.x), y(_xy.y), z(_z), w(_w) {}
	quat(const float _x, const vec2& _yz, const float _w) : x(_x), y(_yz.x), z(_yz.y), w(_w) {}
	quat(const float _x, const float _y, const vec2& _zw) : x(_x), y(_y), z(_zw.x), w(_zw.y) {}
	quat(const vec2& _xy, const vec2& _zw) : x(_xy.x), y(_xy.y), z(_zw.x), w(_zw.y) {}
	quat(const float _x, const vec3& _yzw) : x(_x), y(_yzw.x), z(_yzw.y), w(_yzw.z) {}
	quat(const vec3& _xyz, const float _w) : x(_xyz.x), y(_xyz.y), z(_xyz.z), w(_w) {}
	quat(const vec4& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	quat(const swizzle_4_t<float, N, X, Y, Z, W>& v)
		: x(v._m[X]), y(v._m[Y]), z(v._m[Z]), w(v._m[W]) {}

	GNM_INLINE float& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const float& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}
};

#endif

static const quat QUAT_ZERO = quat(0.0f);
static const quat QUAT_ONE = quat(1.0f);
static const quat QUAT_IDENTITY = quat(1.0f, 0.0f, 0.0f, 0.0f);

GNM_NAMESPACE_END

#endif // GNM_QUAT_TYPE_H_
