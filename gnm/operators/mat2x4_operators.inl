GNM_NAMESPACE_BEGIN

GNM_INLINE bool operator == (const mat2x4& a, const mat2x4& b) {
	return a._m00 == b._m00 && a._m10 == b._m10 && a._m20 == b._m20 && a._m30 == b._m30 &&
				a._m01 == b._m01 && a._m11 == b._m11 && a._m21 == b._m21 && a._m31 == b._m31;
}

GNM_INLINE bool operator != (const mat2x4& a, const mat2x4& b) {
	return a._m00 != b._m00 || a._m10 != b._m10 || a._m20 != b._m20 || a._m30 != b._m30 ||
				a._m01 != b._m01 || a._m11 != b._m11 || a._m21 != b._m21 || a._m31 != b._m31;
}

GNM_INLINE mat2x4 operator + (const mat2x4& a, const mat2x4& b) {
#if (GNM_SIMD)
	return mat2x4(_mm_add_ps(a[0]._v, b[0]._v),
								_mm_add_ps(a[1]._v, b[1]._v));
#else
	return mat2x4(a._m00 + b._m00, a._m10 + b._m10, a._m20 + b._m20, a._m30 + b._m30,
								a._m01 + b._m01, a._m11 + b._m11, a._m21 + b._m21, a._m31 + b._m31);
#endif
}

GNM_INLINE mat2x4 operator - (const mat2x4& a, const mat2x4& b) {
#if (GNM_SIMD)
	return mat2x4(_mm_sub_ps(a[0]._v, b[0]._v),
								_mm_sub_ps(a[1]._v, b[1]._v));
#else
	return mat2x4(a._m00 - b._m00, a._m10 - b._m10, a._m20 - b._m20, a._m30 - b._m30,
								a._m01 - b._m01, a._m11 - b._m11, a._m21 - b._m21, a._m31 - b._m31);
#endif
}

GNM_INLINE mat2x4 operator * (const mat4x4& a, const mat2x4& b) {
	
	mat2x4 mat;

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10 + a._m02 * b._m20 + a._m03 * b._m30;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11 + a._m02 * b._m21 + a._m03 * b._m31;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10 + a._m12 * b._m20 + a._m13 * b._m30;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11 + a._m12 * b._m21 + a._m13 * b._m31;

	mat._m20 = a._m20 * b._m00 + a._m21 * b._m10 + a._m22 * b._m20 + a._m23 * b._m30;
	mat._m21 = a._m20 * b._m01 + a._m21 * b._m11 + a._m22 * b._m21 + a._m23 * b._m31;

	mat._m30 = a._m30 * b._m00 + a._m31 * b._m10 + a._m32 * b._m20 + a._m33 * b._m30;
	mat._m31 = a._m30 * b._m01 + a._m31 * b._m11 + a._m32 * b._m21 + a._m33 * b._m31;

	return mat;
}

GNM_INLINE mat2x4 operator * (const mat2x4& a, const mat2x2& b) {
	
	mat2x4 mat;

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11;

	mat._m20 = a._m20 * b._m00 + a._m21 * b._m10;
	mat._m21 = a._m20 * b._m01 + a._m21 * b._m11;

	mat._m30 = a._m30 * b._m00 + a._m31 * b._m10;
	mat._m31 = a._m30 * b._m01 + a._m31 * b._m11;

	return mat;
}

GNM_INLINE vec4 operator * (const mat2x4& a, const vec2& b) {
	vec4 v;
	v.x = a._m00 * b.x + a._m01 * b.y;
	v.y = a._m10 * b.x + a._m11 * b.y;
	v.z = a._m20 * b.x + a._m21 * b.y;
	v.w = a._m30 * b.x + a._m31 * b.y;
	return v;
}

GNM_INLINE vec2 operator * (const vec4& a, const mat2x4& b) {
	vec2 v;
	v.x = a.x * b._m00 + a.y * b._m10 + a.z * b._m20 + a.w * b._m30;
	v.y = a.x * b._m01 + a.y * b._m11 + a.z * b._m21 + a.w * b._m31;
	return v;
}

GNM_INLINE mat2x4 operator * (const float a, const mat2x4& b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(a);
	return mat2x4(_mm_mul_ps(f, b[0]._v),
								_mm_mul_ps(f, b[1]._v));
#else
	return mat2x4(a * b._m00, a * b._m10, a * b._m20, a * b._m30,
								a * b._m01, a * b._m11, a * b._m21, a * b._m31);
#endif
}

GNM_INLINE mat2x4 operator * (const mat2x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	return mat2x4(_mm_mul_ps(a[0]._v, f),
								_mm_mul_ps(a[1]._v, f));
#else
	return mat2x4(a._m00 * b, a._m10 * b, a._m20 * b, a._m30 * b,
								a._m01 * b, a._m11 * b, a._m21 * b, a._m31 * b);
#endif
}

GNM_INLINE mat2x4 operator / (const float a, const mat2x4& b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(a);
	return mat2x4(_mm_div_ps(f, b[0]._v),
								_mm_div_ps(f, b[1]._v));
#else
	return mat2x4(a / b._m00, a / b._m10, a / b._m20, a / b._m30,
								a / b._m01, a / b._m11, a / b._m21, a / b._m31);
#endif
}

GNM_INLINE mat2x4 operator / (const mat2x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	return mat2x4(_mm_div_ps(a[0]._v, f),
								_mm_div_ps(a[1]._v, f));
#else
	return mat2x4(a._m00 / b, a._m10 / b, a._m20 / b, a._m30 / b,
								a._m01 / b, a._m11 / b, a._m21 / b, a._m31 / b);
#endif
}

GNM_INLINE mat2x4 operator + (const mat2x4& mat) {
	return mat;
}

GNM_INLINE mat2x4 operator - (const mat2x4& mat) {
#if (GNM_SIMD)
	return mat2x4(_mm_set_ps(-mat._m30, -mat._m20, -mat._m10, -mat._m00),
								_mm_set_ps(-mat._m31, -mat._m21, -mat._m11, -mat._m01));
#else
	return mat2x4(-mat._m00, -mat._m10, -mat._m20, -mat._m30,
								-mat._m01, -mat._m11, -mat._m21, -mat._m31);
#endif
}

GNM_INLINE mat2x4& operator += (mat2x4& a, const mat2x4& b) {
#if (GNM_SIMD)
	a[0]._v = _mm_add_ps(a[0]._v, b[0]._v);
	a[1]._v = _mm_add_ps(a[1]._v, b[1]._v);
#else
	a._m00 += b._m00; a._m10 += b._m10; a._m20 += b._m20; a._m30 += b._m30;
	a._m01 += b._m01; a._m11 += b._m11; a._m21 += b._m21; a._m31 += b._m31;
#endif
	return a;
}

GNM_INLINE mat2x4& operator -= (mat2x4& a, const mat2x4& b) {
#if (GNM_SIMD)
	a[0]._v = _mm_sub_ps(a[0]._v, b[0]._v);
	a[1]._v = _mm_sub_ps(a[1]._v, b[1]._v);
#else
	a._m00 -= b._m00; a._m10 -= b._m10; a._m20 -= b._m20; a._m30 -= b._m30;
	a._m01 -= b._m01; a._m11 -= b._m11; a._m21 -= b._m21; a._m31 -= b._m31;
#endif
	return a;
}

GNM_INLINE mat2x4& operator *= (mat2x4& a, const mat2x2& b) {
	
	const float m00 = a._m00;
	const float m01 = a._m01;
	const float m10 = a._m10;
	const float m11 = a._m11;
	const float m20 = a._m20;
	const float m21 = a._m21;
	const float m30 = a._m30;
	const float m31 = a._m31;

	a._m00 = m00 * b._m00 + m01 * b._m10;
	a._m01 = m00 * b._m01 + m01 * b._m11;

	a._m10 = m10 * b._m00 + m11 * b._m10;
	a._m11 = m10 * b._m01 + m11 * b._m11;

	a._m20 = m20 * b._m00 + m21 * b._m10;
	a._m21 = m20 * b._m01 + m21 * b._m11;

	a._m30 = m30 * b._m00 + m31 * b._m10;
	a._m31 = m30 * b._m01 + m31 * b._m11;

	return a;
}

GNM_INLINE mat2x4& operator *= (mat2x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	a[0]._v = _mm_mul_ps(a[0]._v, f);
	a[1]._v = _mm_mul_ps(a[1]._v, f);
#else
	a._m00 *= b; a._m10 *= b; a._m20 *= b; a._m30 *= b;
	a._m01 *= b; a._m11 *= b; a._m21 *= b; a._m31 *= b;
#endif
	return a;
}

GNM_INLINE mat2x4& operator /= (mat2x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	a[0]._v = _mm_div_ps(a[0]._v, f);
	a[1]._v = _mm_div_ps(a[1]._v, f);
#else
	a._m00 /= b; a._m10 /= b; a._m20 /= b; a._m30 /= b;
	a._m01 /= b; a._m11 /= b; a._m21 /= b; a._m31 /= b;
#endif
	return a;
}

GNM_NAMESPACE_END
