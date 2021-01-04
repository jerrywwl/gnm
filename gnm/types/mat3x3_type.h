#ifndef GNM_MAT3X3_TYPE_H_
#define GNM_MAT3X3_TYPE_H_

#include "vec3_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct mat3x3_t {

	mat3x3_t() {}
	
	mat3x3_t(const T f)
		: _m00(f), _m10(f), _m20(f),
			_m01(f), _m11(f), _m21(f),
			_m02(f), _m12(f), _m22(f) {}

	mat3x3_t(const T f00, const T f10, const T f20,
				const T f01, const T f11, const T f21,
				const T f02, const T f12, const T f22)
		: _m00(f00), _m10(f10), _m20(f20),
			_m01(f01), _m11(f11), _m21(f21),
			_m02(f02), _m12(f12), _m22(f22) {}

	mat3x3_t(const mat3x3_t& mat)
		: _m00(mat._m00), _m10(mat._m10), _m20(mat._m20),
			_m01(mat._m01), _m11(mat._m11), _m21(mat._m21),
			_m02(mat._m02), _m12(mat._m12), _m22(mat._m22) {}

	mat3x3_t(const vec3_t<T>& v0, const vec3_t<T>& v1, const vec3_t<T>& v2)
		: _m00(v0.x), _m10(v0.y), _m20(v0.z),
			_m01(v1.x), _m11(v1.y), _m21(v1.z),
			_m02(v2.x), _m12(v2.y), _m22(v2.z) {}

	GNM_INLINE vec3_t<T>& operator [] (int index) {
		assert(index >= 0 && index < 3 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec3_t<T>& operator [] (int index) const {
		assert(index >= 0 && index < 3 && "Index out of bounds.");
		return _r[index];
	}

	union {
		T _m[9];

		struct {
			T _m00, _m10, _m20;
			T _m01, _m11, _m21;
			T _m02, _m12, _m22;
		};

		vec3_t<T> _r[3];
	};
};

using mat3 = mat3x3_t<float>;
using mat3x3 = mat3x3_t<float>;

static const mat3 MAT3_IDENTITY = mat3(
	1.0f, 0.0f, 0.0f,
	0.0f, 1.0f, 0.0f,
	0.0f, 0.0f, 1.0f
);

GNM_NAMESPACE_END

#endif // GNM_MAT3X3_TYPE_H_
