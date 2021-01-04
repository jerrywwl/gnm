#ifndef GNM_MAT2X4_TYPE_H_
#define GNM_MAT2X4_TYPE_H_

#include "vec4_type.h"
#include "mat2x2_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct mat2x4_t {

	mat2x4_t() {}
	
	mat2x4_t(const T f)
		: _m00(f), _m10(f), _m20(f), _m30(f),
			_m01(f), _m11(f), _m21(f), _m31(f) {}

	mat2x4_t(const T f00, const T f10, const T f20, const T f30,
		const T f01, const T f11, const T f21, const T f31)
		: _m00(f00), _m10(f10), _m20(f20), _m30(f30),
			_m01(f01), _m11(f11), _m21(f21), _m31(f31){}

	mat2x4_t(const mat2x4_t& mat)
		: _m00(mat._m00), _m10(mat._m10), _m20(mat._m20), _m30(mat._m30),
			_m01(mat._m01), _m11(mat._m11), _m21(mat._m21), _m31(mat._m31) {}

	mat2x4_t(const vec4_t<T>& v0, const vec4_t<T>& v1)
		: _m00(v0.x), _m10(v0.y), _m20(v0.z), _m30(v0.w),
			_m01(v1.x), _m11(v1.y), _m21(v1.z), _m31(v1.w) {}

	GNM_INLINE vec4_t<T>& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec4_t<T>& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	union {
		T _m[8];

		struct {
			T _m00, _m10, _m20, _m30;
			T _m01, _m11, _m21, _m31;
		};

		vec4_t<T> _r[2];
	};
};

using mat2x4 = mat2x4_t<float>;

GNM_NAMESPACE_END

#endif // GNM_MAT2X4_TYPE_H_
