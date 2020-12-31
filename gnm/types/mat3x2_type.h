#ifndef GNM_MAT3X2_TYPE_H_
#define GNM_MAT3X2_TYPE_H_

#include "vec3_type.h"
#include "mat2x2_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct mat3x2_t {

	mat3x2_t() {}
	
	mat3x2_t(const T f)
		: _m00(f), _m10(f),
		_m01(f), _m11(f),
		_m02(f), _m12(f) {}

	mat3x2_t(const T f00, const T f10,
					const T f01, const T f11,
					const T f02, const T f12)
		: _m00(f00), _m10(f01),
		_m01(f01), _m11(f11),
		_m02(f02), _m12(f12) {}

	mat3x2_t(const mat3x2_t& mat) {
		memcpy(_m, mat._m, sizeof(mat3x2_t));
	}

	mat3x2_t(const vec2_t<T>& v0, const vec2_t<T>& v1, const vec2_t<T>& v2)
		: _m00(v0.x), _m10(v0.y),
		_m01(v1.x), _m11(v1.y),
		_m02(v2.x), _m12(v2.z) {}

	GNM_INLINE vec2_t<T>& operator [] (int index) {
		assert(index >= 0 && index < 3 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec2_t<T>& operator [] (int index) const {
		assert(index >= 0 && index < 3 && "Index out of bounds.");
		return _r[index];
	}

	union {
		T _m[6];

		struct {
			T _m00, _m10;
			T _m01, _m11;
			T _m02, _m12;
		};

		vec2_t<T> _r[3];
	};
};

using mat3x2 = mat3x2_t<float>;

GNM_NAMESPACE_END

#endif // GNM_MAT3X2_TYPE_H_
