#ifndef GNM_MAT4X4_TYPE_H_
#define GNM_MAT4X4_TYPE_H_

#include "mat4x3_type.h"

GNM_NAMESPACE_BEGIN

struct mat4x4 {

	mat4x4() {}
	
	mat4x4(const float f) {
		_r[0] = f;
		_r[1] = f;
		_r[2] = f;
		_r[3] = f;
	}

	mat4x4(const float f00, const float f10, const float f20, const float f30,
				const float f01, const float f11, const float f21, const float f31,
				const float f02, const float f12, const float f22, const float f32,
				const float f03, const float f13, const float f23, const float f33) {
		_r[0] = vec4(f00, f10, f20, f30);
		_r[1] = vec4(f01, f11, f21, f31);
		_r[2] = vec4(f02, f12, f22, f32);
		_r[3] = vec4(f03, f13, f23, f33);
	}

	mat4x4(const mat4x4& mat) {
		_r[0] = mat._r[0];
		_r[1] = mat._r[1];
		_r[2] = mat._r[2];
		_r[3] = mat._r[3];
	}

	mat4x4(const vec4& v0, const vec4& v1, const vec4& v2, const vec4& v3) {
		_r[0] = v0;
		_r[1] = v1;
		_r[2] = v2;
		_r[3] = v3;
	}

	GNM_INLINE vec4& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec4& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	union {
		float _m[16];

		struct {
			float _m00, _m10, _m20, _m30;
			float _m01, _m11, _m21, _m31;
			float _m02, _m12, _m22, _m32;
			float _m03, _m13, _m23, _m33;
		};

		vec4 _r[4];
	};
};

using mat4 = mat4x4;

static const mat4 MAT4_IDENTITY = mat4(
	1.0f, 0.0f, 0.0f, 0.0f,
	0.0f, 1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 1.0f, 0.0f,
	0.0f, 0.0f, 0.0f, 1.0f
);

GNM_NAMESPACE_END

#endif // GNM_MAT4X4_TYPE_H_
