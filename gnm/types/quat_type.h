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
			float w, x, y, z;
		};

		GNM_QUAT_T_2_SWIZZLES(float)
		GNM_QUAT_T_3_SWIZZLES(float)
		GNM_QUAT_T_4_SWIZZLES(float)
	};

	quat() {}
	quat(const float f) {
		_v = _mm_set_ps1(f);
	}

	quat(const float _w, const float _x, const float _y, const float _z) {
		_v = _mm_set_ps(_z, _y, _x, _w);
	}

	quat(const __m128 v) {
		_v = v;
	}

	quat(const quat& v) {
		_v = v._v;
	}

	quat(const float _w, const vec2& _xy, const float _z) {
		_v = _mm_set_ps(_z, _xy.y, _xy.x, _w);
	}

	quat(const float _w, const float _x, const vec2& _yz) {
		_v = _mm_set_ps(_yz.y, _yz.x, _x, _w);
	}

	quat(const float _w, const vec3& _xyz) {
		_v = _mm_set_ps(_xyz.z, _xyz.y, _xyz.x, _w);
	}

	quat(const vec4& v) {
		_v = v._v;
	}

	template<uint8 N, uint8 W, uint8 X, uint8 Y, uint8 Z>
	quat(const swizzle_4_t<float, N, W, X, Y, Z>& v) {
		_v = _mm_set_ps(v._m[Z], v._m[Y], v._m[X], v._m[W]);
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
			float w, x, y, z;
		};

		GNM_QUAT_T_2_SWIZZLES(float)
		GNM_QUAT_T_3_SWIZZLES(float)
		GNM_QUAT_T_4_SWIZZLES(float)
	};

	quat() {}
	quat(const float f) : w(f), x(f), y(f), z(f) {}
	quat(const float _w, const float _x, const float _y, const float _z) : w(_w), x(_x), y(_y), z(_z) {}
	quat(const quat& v) : w(v.w), x(v.x), y(v.y), z(v.z) {}

	quat(const float _w, const vec2& _xy, const float _z) : w(_w), x(_xy.x), y(_xy.y), z(_z) {}
	quat(const float _w, const float _x, const vec2& _yz) : w(_w), x(_x), y(_yz.x), z(_yz.y) {}
	quat(const float _w, const vec3& _xyz) : w(_w), x(_xyz.x), y(_xyz.y), z(_xyz.z) {}
	quat(const vec4& v) : w(v.x), x(v.y), y(v.z), z(v.w) {}

	template<uint8 N, uint8 W, uint8 X, uint8 Y, uint8 Z>
	quat(const swizzle_4_t<float, N, W, X, Y, Z>& v)
		: w(v._m[W]), x(v._m[X]), y(v._m[Y]), z(v._m[Z]) {}

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
