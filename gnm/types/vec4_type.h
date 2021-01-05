#ifndef GNM_VEC4_TYPE_H_
#define GNM_VEC4_TYPE_H_

#include "../swizzles/vec4_swizzles.h"
#include "vec3_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct vec4_t {

	union {
		T _m[4];

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

	vec4_t() {}
	vec4_t(const T f) : x(f), y(f), z(f), w(f) {}
	vec4_t(const T _x, const T _y, const T _z, const T _w) : x(_x), y(_y), z(_z), w(_w) {}
	vec4_t(const vec4_t<T>& v) : x(v.x), y(v.y), z(v.z), w(v.w) {}

	vec4_t(const vec2_t<T>& _xy, const T _z, const T _w) : x(_xy.x), y(_xy.y), z(_z), w(_w) {}
	vec4_t(const T _x, const vec2_t<T>& _yz, const T _w) : x(_x), y(_yz.x), z(_yz.y), w(_w) {}
	vec4_t(const T _x, const T _y, const vec2_t<T>& _zw) : x(_x), y(_y), z(_zw.x), w(_zw.y) {}
	vec4_t(const vec2_t<T>& _xy, const vec2_t<T>& _zw) : x(_xy.x), y(_xy.y), z(_zw.x), w(_zw.y) {}
	vec4_t(const T _x, const vec3_t<T>& _yzw) : x(_x), y(_yzw.x), z(_yzw.y), w(_yzw.z) {}
	vec4_t(const vec3_t<T>& _xyz, const T _w) : x(_xyz.x), y(_xyz.y), z(_xyz.z), w(_w) {}

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
};

// ----------------------------------------------------------------------------------------------------

#if (GNM_SIMD)

struct vec4 {

	union {

		float _m[4];

		__m128 _v;
		__m128i _vi;

		struct {
			float x, y, z, w;
		};

		struct {
			float r, g, b, a;
		};

		struct {
			float s, t, p, q;
		};

		GNM_VEC4_T_2_SWIZZLES(float)
		GNM_VEC4_T_3_SWIZZLES(float)
		GNM_VEC4_T_4_SWIZZLES(float)
	};

	vec4() {}
	vec4(const float f) {
		_v = _mm_set_ps1(f);
	}

	vec4(const float _x, const float _y, const float _z, const float _w) {
		_v = _mm_set_ps(_w, _z, _y, _x);
	}

	vec4(const __m128 v) {
		_v = v;
	}

	vec4(const vec4& v) {
		_v = v._v;
	}

	vec4(const vec2& _xy, const float _z, const float _w) {
		_v = _mm_set_ps(_w, _z, _xy.y, _xy.x);
	}

	vec4(const float _x, const vec2& _yz, const float _w) {
		_v = _mm_set_ps(_w, _yz.y, _yz.x, _x);
	}

	vec4(const float _x, const float _y, const vec2& _zw) {
		_v = _mm_set_ps(_zw.y, _zw.x, _y, _x);
	}

	vec4(const vec2& _xy, const vec2& _zw) {
		_v = _mm_set_ps(_zw.y, _zw.x, _xy.y, _xy.x);
	}

	vec4(const float _x, const vec3& _yzw) {
		_v = _mm_set_ps(_yzw.z, _yzw.y, _yzw.x, _x);
	}

	vec4(const vec3& _xyz, const float _w) {
		_v = _mm_set_ps(_w, _xyz.z, _xyz.y, _xyz.x);
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec4(const swizzle_4_t<float, N, X, Y, Z, W>& v) {
		_v = _mm_set_ps(v._m[W], v._m[Z], v._m[Y], v._m[X]);
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	vec4(const swizzle_4_simd_t<float, N, X, Y, Z, W>& v) {
		_v = v._v;
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

// ----------------------------------------------------------------------------------------------------

struct ivec4 {

	union {

		int _m[4];

		__m128 _v;
		__m128i _vi;

		struct {
			int x, y, z, w;
		};

		struct {
			int r, g, b, a;
		};

		struct {
			int s, t, p, q;
		};

		GNM_VEC4_T_2_SWIZZLES(int)
		GNM_VEC4_T_3_SWIZZLES(int)
		GNM_VEC4_T_4_SWIZZLES(int)
	};

	ivec4() {}
	ivec4(const int i) {
		_vi = _mm_set1_epi32(i);
	}

	ivec4(const int _x, const int _y, const int _z, const int _w) {
		_vi = _mm_set_epi32(_w, _z, _y, _x);
	}

	ivec4(const __m128i vi) {
		_vi = vi;
	}

	ivec4(const ivec4& v) {
		_vi = v._vi;
	}

	ivec4(const ivec2& _xy, const int _z, const int _w) {
		_vi = _mm_set_epi32(_w, _z, _xy.y, _xy.x);
	}

	ivec4(const int _x, const ivec2& _yz, const int _w) {
		_vi = _mm_set_epi32(_w, _yz.y, _yz.x, _x);
	}

	ivec4(const int _x, const int _y, const ivec2& _zw) {
		_vi = _mm_set_epi32(_zw.y, _zw.x, _y, _x);
	}

	ivec4(const ivec2& _xy, const ivec2& _zw) {
		_vi = _mm_set_epi32(_zw.y, _zw.x, _xy.y, _xy.x);
	}

	ivec4(const int _x, const ivec3& _yzw) {
		_vi = _mm_set_epi32(_yzw.z, _yzw.y, _yzw.x, _x);
	}

	ivec4(const ivec3& _xyz, const int _w) {
		_vi = _mm_set_epi32(_w, _xyz.z, _xyz.y, _xyz.x);
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	ivec4(const swizzle_4_t<int, N, X, Y, Z, W>& v) {
		_vi = _mm_set_epi32(v._m[W], v._m[Z], v._m[Y], v._m[X]);
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	ivec4(const swizzle_4_simd_t<int, N, X, Y, Z, W>& v) {
		_vi = v._vi;
	}

	GNM_INLINE int& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const int& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}
};

// ----------------------------------------------------------------------------------------------------

struct uvec4 {

	union {

		uint _m[4];

		__m128 _v;
		__m128i _vi;

		struct {
			uint x, y, z, w;
		};

		struct {
			uint r, g, b, a;
		};

		struct {
			uint s, t, p, q;
		};

		GNM_VEC4_T_2_SWIZZLES(uint)
		GNM_VEC4_T_3_SWIZZLES(uint)
		GNM_VEC4_T_4_SWIZZLES(uint)
	};

	uvec4() {}
	uvec4(const uint i) {
		_vi = _mm_set1_epi32(i);
	}

	uvec4(const int _x, const int _y, const int _z, const int _w) {
		_vi = _mm_set_epi32(_w, _z, _y, _x);
	}

	uvec4(const __m128i vi) {
		_vi = vi;
	}

	uvec4(const uvec4& v) {
		_vi = v._vi;
	}

	uvec4(const uvec4& _xy, const uint _z, const uint _w) {
		_vi = _mm_set_epi32(_w, _z, _xy.y, _xy.x);
	}

	uvec4(const uint _x, const uvec2& _yz, const uint _w) {
		_vi = _mm_set_epi32(_w, _yz.y, _yz.x, _x);
	}

	uvec4(const uint _x, const uint _y, const uvec2& _zw) {
		_vi = _mm_set_epi32(_zw.y, _zw.x, _y, _x);
	}

	uvec4(const uvec2& _xy, const uvec2& _zw) {
		_vi = _mm_set_epi32(_zw.y, _zw.x, _xy.y, _xy.x);
	}

	uvec4(const uint _x, const uvec3& _yzw) {
		_vi = _mm_set_epi32(_yzw.z, _yzw.y, _yzw.x, _x);
	}

	uvec4(const uvec3& _xyz, const uint _w) {
		_vi = _mm_set_epi32(_w, _xyz.z, _xyz.y, _xyz.x);
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	uvec4(const swizzle_4_t<uint, N, X, Y, Z, W>& v) {
		_vi = _mm_set_epi32(v._m[W], v._m[Z], v._m[Y], v._m[X]);
	}

	template<uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
	uvec4(const swizzle_4_simd_t<uint, N, X, Y, Z, W>& v) {
		_vi = v._vi;
	}

	GNM_INLINE uint& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}

	GNM_INLINE const uint& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _m[index];
	}
};

#endif

#if (GNM_SIMD)
using bvec4 = vec4_t<bool>;
#else
using vec4 = vec4_t<float>;
using bvec4 = vec4_t<bool>;
using ivec4 = vec4_t<int>;
using uvec4 = vec4_t<uint>;
#endif

static const vec4 VEC4_ZERO = vec4(0.0f);
static const vec4 VEC4_ONE = vec4(1.0f);
static const vec4 VEC4_NEG_ONE = vec4(-1.0f);
static const ivec4 IVEC4_ZERO = ivec4(0);
static const ivec4 IVEC4_ONE = ivec4(1);
static const ivec4 IVEC4_NEG_ONE = ivec4(-1);
static const uvec4 UVEC4_ZERO = uvec4(0);
static const uvec4 UVEC4_ONE = uvec4(1);

GNM_NAMESPACE_END

#endif // GNM_VEC4_TYPE_H_
