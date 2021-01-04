#ifndef GNM_MAT4X4_TYPE_H_
#define GNM_MAT4X4_TYPE_H_

#include "mat4x3_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct mat4x4_t {

	mat4x4_t() {}
	
	mat4x4_t(const T f)
		: _m00(f), _m10(f), _m20(f), _m30(f),
			_m01(f), _m11(f), _m21(f), _m31(f),
			_m02(f), _m12(f), _m22(f), _m32(f),
			_m03(f), _m13(f), _m23(f), _m33(f) {}

	mat4x4_t(const T f00, const T f10, const T f20, const T f30,
		const T f01, const T f11, const T f21, const T f31,
		const T f02, const T f12, const T f22, const T f32,
		const T f03, const T f13, const T f23, const T f33)
		: _m00(f00), _m10(f10), _m20(f20), _m30(f30),
			_m01(f01), _m11(f11), _m21(f21), _m31(f31),
			_m02(f02), _m12(f12), _m22(f22), _m32(f32),
			_m03(f03), _m13(f13), _m23(f23), _m33(f33) {}

	mat4x4_t(const mat4x4_t& mat)
		: _m00(mat._m00), _m10(mat._m10), _m20(mat._m20), _m30(mat._m30),
			_m01(mat._m01), _m11(mat._m11), _m21(mat._m21), _m31(mat._m31),
			_m02(mat._m02), _m12(mat._m12), _m22(mat._m22), _m32(mat._m32),
			_m03(mat._m03), _m13(mat._m13), _m23(mat._m23), _m33(mat._m33) {}

	mat4x4_t(const vec4_t<T>& v0, const vec4_t<T>& v1, const vec4_t<T>& v2, const vec4_t<T>& v3)
		: _m00(v0.x), _m10(v0.y), _m20(v0.z), _m30(v0.w),
		_m01(v1.x), _m11(v1.y), _m21(v1.z), _m31(v1.w),
		_m02(v2.x), _m12(v2.y), _m22(v2.z), _m32(v2.w),
		_m03(v3.x), _m13(v3.y), _m23(v3.z), _m33(v3.w) {}

	GNM_INLINE vec4_t<T>& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec4_t<T>& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	union {
		T _m[16];

		struct {
			T _m00, _m10, _m20, _m30;
			T _m01, _m11, _m21, _m31;
			T _m02, _m12, _m22, _m32;
			T _m03, _m13, _m23, _m33;
		};

		vec4_t<T> _r[4];
	};
};

using mat4 = mat4x4_t<float>;
using mat4x4 = mat4x4_t<float>;

static const mat4 MAT4_IDENTITY = mat4(
	1.0f, 0.0f, 0.0f, 0.0f,
	0.0f, 1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 1.0f, 0.0f,
	0.0f, 0.0f, 0.0f, 1.0f
);

GNM_NAMESPACE_END

#endif // GNM_MAT4X4_TYPE_H_
