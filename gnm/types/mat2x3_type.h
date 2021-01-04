#ifndef GNM_MAT2X3_TYPE_H_
#define GNM_MAT2X3_TYPE_H_

#include "vec3_type.h"
#include "mat2x2_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct mat2x3_t {

	mat2x3_t() {}
	
	mat2x3_t(const T f)
		: _m00(f), _m10(f), _m20(f),
			_m01(f), _m11(f), _m21(f) {}

	mat2x3_t(const T f00, const T f10, const T f20,
					const T f01, const T f11, const T f21)
		: _m00(f00), _m10(f01), _m20(f20),
			_m01(f01), _m11(f11), _m21(f21) {}

	mat2x3_t(const mat2x3_t& mat)
		: _m00(mat._m00), _m10(mat._m10), _m20(mat._m20),
			_m01(mat._m01), _m11(mat._m11), _m21(mat._m21) {}

	mat2x3_t(const vec3_t<T>& v0, const vec3_t<T>& v1)
		: _m00(v0.x), _m10(v0.y), _m20(v0.z),
			_m01(v1.x), _m11(v1.y), _m21(v1.z) {}

	GNM_INLINE vec3_t<T>& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec3_t<T>& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	union {
		T _m[6];

		struct {
			T _m00, _m10, _m20;
			T _m01, _m11, _m21;
		};

		vec3_t<T> _r[2];
	};
};

using mat2x3 = mat2x3_t<float>;

GNM_NAMESPACE_END

#endif // GNM_MAT2X3_TYPE_H_
