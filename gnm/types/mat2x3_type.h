#ifndef GNM_MAT2X3_TYPE_H_
#define GNM_MAT2X3_TYPE_H_

#include "vec3_type.h"
#include "mat2x2_type.h"

GNM_NAMESPACE_BEGIN

struct mat2x3 {

	mat2x3() {}
	
	mat2x3(const float f) {
		_r[0] = f;
		_r[1] = f;
	}

	mat2x3(const float f00, const float f10, const float f20,
					const float f01, const float f11, const float f21) {
		_r[0] = vec3(f00, f10, f20);
		_r[1] = vec3(f01, f11, f21);
	}

	mat2x3(const mat2x3& mat) {
		_r[0] = mat._r[0];
		_r[1] = mat._r[1];
	}

	mat2x3(const vec3& v0, const vec3& v1) {
		_r[0] = v0;
		_r[1] = v1;
	}

	GNM_INLINE vec3& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec3& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	union {
		vec3 _r[2];

		float _m[6];

		struct {
			float _m00, _m10, _m20;
			float _m01, _m11, _m21;
		};
	};
};

GNM_NAMESPACE_END

#endif // GNM_MAT2X3_TYPE_H_
