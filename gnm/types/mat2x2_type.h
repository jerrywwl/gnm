#ifndef GNM_MAT2X2_TYPE_H_
#define GNM_MAT2X2_TYPE_H_

#include "vec2_type.h"

GNM_NAMESPACE_BEGIN

struct mat2x2 {

	mat2x2() {}
	
	mat2x2(const float f) {
		_r[0] = f;
		_r[1] = f;
	}

	mat2x2(const float f00, const float f10,
				const float f01, const float f11) {
		_r[0] = vec2(f00, f10);
		_r[1] = vec2(f01, f11);
	}

	mat2x2(const mat2x2& mat) {
		_r[0] = mat._r[0];
		_r[1] = mat._r[1];
	}

	mat2x2(const vec2& v0, const vec2& v1) {
		_r[0] = v0;
		_r[1] = v1;
	}

	GNM_INLINE vec2& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec2& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	union {
		float _m[4];

		struct {
			float _m00, _m10;
			float _m01, _m11;
		};

		vec2 _r[3];
	};
};

using mat2 = mat2x2;

static const mat2 MAT2_IDENTITY = mat2(
	1.0f, 0.0f,
	0.0f, 1.0f
);

GNM_NAMESPACE_END

#endif // GNM_MAT2X2_TYPE_H_