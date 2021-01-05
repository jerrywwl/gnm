#ifndef GNM_MAT2X4_TYPE_H_
#define GNM_MAT2X4_TYPE_H_

#include "vec4_type.h"
#include "mat2x2_type.h"

GNM_NAMESPACE_BEGIN

struct mat2x4 {

	mat2x4() {}
	
	mat2x4(const float f) {
		_r[0] = f;
		_r[1] = f;
	}

	mat2x4(const float f00, const float f10, const float f20, const float f30,
				const float f01, const float f11, const float f21, const float f31) {
		_r[0] = vec4(f00, f10, f20, f30);
		_r[1] = vec4(f01, f11, f21, f31);
	}

	mat2x4(const mat2x4& mat) {
		_r[0] = mat._r[0];
		_r[1] = mat._r[1];
	}

	mat2x4(const vec4& v0, const vec4& v1) {
		_r[0] = v0;
		_r[1] = v1;
	}

	GNM_INLINE vec4& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec4& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	union {
		float _m[8];

		struct {
			float _m00, _m10, _m20, _m30;
			float _m01, _m11, _m21, _m31;
		};

		vec4 _r[2];
	};
};

GNM_NAMESPACE_END

#endif // GNM_MAT2X4_TYPE_H_
