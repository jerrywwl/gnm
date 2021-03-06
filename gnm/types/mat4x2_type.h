#ifndef GNM_MAT4X2_TYPE_H_
#define GNM_MAT4X2_TYPE_H_

#include "vec4_type.h"
#include "mat2x2_type.h"

GNM_NAMESPACE_BEGIN

struct mat4x2 {

	mat4x2() {}
	
	mat4x2(const float f) {
		_r[0] = f;
		_r[1] = f;
		_r[2] = f;
		_r[3] = f;
	}

	mat4x2(const float f00, const float f10,
				const float f01, const float f11,
				const float f02, const float f12,
				const float f03, const float f13) {
		_r[0] = vec2(f00, f10);
		_r[1] = vec2(f01, f11);
		_r[2] = vec2(f02, f12);
		_r[3] = vec2(f03, f13);
	}

	mat4x2(const mat4x2& mat) {
		_r[0] = mat._r[0];
		_r[1] = mat._r[1];
		_r[2] = mat._r[2];
		_r[3] = mat._r[3];
	}

	mat4x2(const vec2& v0, const vec2& v1, const vec2& v2, const vec2& v3) {
		_r[0] = v0;
		_r[1] = v1;
		_r[2] = v2;
		_r[3] = v3;
	}

	GNM_INLINE vec2& operator [] (int index) {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec2& operator [] (int index) const {
		assert(index >= 0 && index < 4 && "Index out of bounds.");
		return _r[index];
	}

	union {
		vec2 _r[4];

		float _m[8];

		struct {
			float _m00, _m10;
			float _m01, _m11;
			float _m02, _m12;
			float _m03, _m13;
		};
	};
};

GNM_NAMESPACE_END

#endif // GNM_MAT4X2_TYPE_H_
