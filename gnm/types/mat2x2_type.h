#ifndef GNM_MAT2X2_TYPE_H_
#define GNM_MAT2X2_TYPE_H_

#include "vec2_type.h"

GNM_NAMESPACE_BEGIN

template <typename T>
struct mat2x2_t {

	mat2x2_t() {}
	
	mat2x2_t(const T f)
		: _m00(f), _m10(f),
		_m01(f), _m11(f) {}

	mat2x2_t(const T f00, const T f10,
				const T f01, const T f11)
		: _m00(f00), _m10(f10),
		_m01(f01), _m11(f11) {}

	mat2x2_t(const mat2x2_t& mat) {
		memcpy(_m, mat._m, sizeof(mat2x2_t));
	}

	mat2x2_t(const vec2_t<T>& v0, const vec2_t<T>& v1)
		: _m00(v0.x), _m10(v0.y),
		_m01(v1.x), _m11(v1.y) {}

	GNM_INLINE vec2_t<T>& operator [] (int index) {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	GNM_INLINE const vec2_t<T>& operator [] (int index) const {
		assert(index >= 0 && index < 2 && "Index out of bounds.");
		return _r[index];
	}

	union {
		T _m[4];

		struct {
			T _m00, _m10;
			T _m01, _m11;
		};

		vec2_t<T> _r[3];
	};
};

using mat2 = mat2x2_t<float>;
using mat2x2 = mat2x2_t<float>;

static const mat2 MAT2_IDENTITY = mat2(
	1.0f, 0.0f,
	0.0f, 1.0f
);

GNM_NAMESPACE_END

#endif // GNM_MAT2X2_TYPE_H_