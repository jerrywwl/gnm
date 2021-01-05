#ifndef GNM_MAT4X3_TYPE_H_
#define GNM_MAT4X3_TYPE_H_

#include "vec4_type.h"
#include "mat3x3_type.h"

GNM_NAMESPACE_BEGIN

struct mat4x3 {

	mat4x3() {}
	
	mat4x3(const float f) {
		_r[0] = f;
		_r[1] = f;
		_r[2] = f;
		_r[3] = f;
	}

	mat4x3(const float f00, const float f10, const float f20,
					const float f01, const float f11, const float f21,
					const float f02, const float f12, const float f22,
					const float f03, const float f13, const float f23) {
		_r[0] = vec3(f00, f10, f20);
		_r[1] = vec3(f01, f11, f21);
		_r[2] = vec3(f02, f12, f22);
		_r[3] = vec3(f03, f13, f23);
	}

	mat4x3(const mat4x3& mat) {
		_r[0] = mat._r[0];
		_r[1] = mat._r[1];
		_r[2] = mat._r[2];
		_r[3] = mat._r[3];
	}

	mat4x3(const vec3& v0, const vec3& v1, const vec3& v2, const vec3& v3) {
		_r[0] = v0;
		_r[1] = v1;
		_r[2] = v2;
		_r[3] = v3;
	}

	GNM_INLINE vec3& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec3& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	union {
		float _m[12];

		struct {
			float _m00, _m10, _m20;
			float _m01, _m11, _m21;
			float _m02, _m12, _m22;
			float _m03, _m13, _m23;
		};

		vec3 _r[4];
	};
};

GNM_NAMESPACE_END

#endif // GNM_MAT4X3_TYPE_H_
