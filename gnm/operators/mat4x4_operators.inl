GNM_NAMESPACE_BEGIN

GNM_INLINE bool operator == (const mat4x4& a, const mat4x4& b) {
	return a._m00 == b._m00 && a._m10 == b._m10 && a._m20 == b._m20 && a._m30 == b._m30 &&
				a._m01 == b._m01 && a._m11 == b._m11 && a._m21 == b._m21 && a._m31 == b._m31 &&
				a._m02 == b._m02 && a._m12 == b._m12 && a._m22 == b._m22 && a._m32 == b._m32 &&
				a._m03 == b._m03 && a._m13 == b._m13 && a._m23 == b._m23 && a._m33 == b._m33;
}

GNM_INLINE bool operator != (const mat4x4& a, const mat4x4& b) {
	return a._m00 != b._m00 || a._m10 != b._m10 || a._m20 != b._m20 || a._m30 != b._m30 ||
				a._m01 != b._m01 || a._m11 != b._m11 || a._m21 != b._m21 || a._m31 != b._m31 ||
				a._m02 != b._m02 || a._m12 != b._m12 || a._m22 != b._m22 || a._m32 != b._m32 ||
				a._m03 != b._m03 || a._m13 != b._m13 || a._m23 != b._m23 || a._m33 != b._m33;
}

GNM_INLINE mat4x4 operator + (const mat4x4& a, const mat4x4& b) {
#if (GNM_SIMD)
	return mat4x4(_mm_add_ps(a[0]._v, b[0]._v),
								_mm_add_ps(a[1]._v, b[1]._v),
								_mm_add_ps(a[2]._v, b[2]._v),
								_mm_add_ps(a[3]._v, b[3]._v));
#else
	return mat4x4(a._m00 + b._m00, a._m10 + b._m10, a._m20 + b._m20, a._m30 + b._m30,
								a._m01 + b._m01, a._m11 + b._m11, a._m12 + b._m12, a._m31 + b._m31,
								a._m02 + b._m02, a._m12 + b._m12, a._m22 + b._m22, a._m32 + b._m32,
								a._m03 + b._m03, a._m13 + b._m13, a._m23 + b._m23, a._m33 + b._m33);
#endif
}

GNM_INLINE mat4x4 operator - (const mat4x4& a, const mat4x4& b) {
#if (GNM_SIMD)
	return mat4x4(_mm_sub_ps(a[0]._v, b[0]._v),
								_mm_sub_ps(a[1]._v, b[1]._v),
								_mm_sub_ps(a[2]._v, b[2]._v),
								_mm_sub_ps(a[3]._v, b[3]._v));
#else
	return mat4x4(a._m00 - b._m00, a._m10 - b._m10, a._m20 - b._m20, a._m30 - b._m30,
								a._m01 - b._m01, a._m11 - b._m11, a._m12 - b._m12, a._m31 - b._m31,
								a._m02 - b._m02, a._m12 - b._m12, a._m22 - b._m22, a._m32 - b._m32,
								a._m03 - b._m03, a._m13 - b._m13, a._m23 - b._m23, a._m33 - b._m33);
#endif
}

GNM_INLINE mat4x4 operator * (const mat4x4& a, const mat4x4& b) {
	mat4x4 mat;

#if (GNM_SIMD)
	{
		__m128 e0 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		mat[0] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}

	{
		__m128 e0 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		mat[1] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}

	{
		__m128 e0 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		mat[2] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}

	{
		__m128 e0 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		mat[3] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}
#else

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10 + a._m02 * b._m20 + a._m03 * b._m30;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11 + a._m02 * b._m21 + a._m03 * b._m31;
	mat._m02 = a._m00 * b._m02 + a._m01 * b._m12 + a._m02 * b._m22 + a._m03 * b._m32;
	mat._m03 = a._m00 * b._m03 + a._m01 * b._m13 + a._m02 * b._m23 + a._m03 * b._m33;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10 + a._m12 * b._m20 + a._m13 * b._m30;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11 + a._m12 * b._m21 + a._m13 * b._m31;
	mat._m12 = a._m10 * b._m02 + a._m11 * b._m12 + a._m12 * b._m22 + a._m13 * b._m32;
	mat._m13 = a._m10 * b._m03 + a._m11 * b._m13 + a._m12 * b._m23 + a._m13 * b._m33;

	mat._m20 = a._m20 * b._m00 + a._m21 * b._m10 + a._m22 * b._m20 + a._m23 * b._m30;
	mat._m21 = a._m20 * b._m01 + a._m21 * b._m11 + a._m22 * b._m21 + a._m23 * b._m31;
	mat._m22 = a._m20 * b._m02 + a._m21 * b._m12 + a._m22 * b._m22 + a._m23 * b._m32;
	mat._m23 = a._m20 * b._m03 + a._m21 * b._m13 + a._m22 * b._m23 + a._m23 * b._m33;

	mat._m30 = a._m30 * b._m00 + a._m31 * b._m10 + a._m32 * b._m20 + a._m33 * b._m30;
	mat._m31 = a._m30 * b._m01 + a._m31 * b._m11 + a._m32 * b._m21 + a._m33 * b._m31;
	mat._m32 = a._m30 * b._m02 + a._m31 * b._m12 + a._m32 * b._m22 + a._m33 * b._m32;
	mat._m33 = a._m30 * b._m03 + a._m31 * b._m13 + a._m32 * b._m23 + a._m33 * b._m33;

	return mat;
#endif
}

GNM_INLINE vec4 operator * (const mat4x4& a, const vec4& b) {
#if (GNM_SIMD)
	__m128 v0 = _mm_shuffle_ps(b._v, b._v, _MM_SHUFFLE(0, 0, 0, 0));
	__m128 v1 = _mm_shuffle_ps(b._v, b._v, _MM_SHUFFLE(1, 1, 1, 1));
	__m128 v2 = _mm_shuffle_ps(b._v, b._v, _MM_SHUFFLE(2, 2, 2, 2));
	__m128 v3 = _mm_shuffle_ps(b._v, b._v, _MM_SHUFFLE(3, 3, 3, 3));

	__m128 m0 = _mm_mul_ps(a[0]._v, v0);
	__m128 m1 = _mm_mul_ps(a[1]._v, v1);
	__m128 m2 = _mm_mul_ps(a[2]._v, v2);
	__m128 m3 = _mm_mul_ps(a[3]._v, v3);

	return vec4(_mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3)));
#else
	vec4 v;
	v.x = a._m00 * b.x + a._m01 * b.y + a._m02 * b.z + a._m03 * b.w;
	v.y = a._m10 * b.x + a._m11 * b.y + a._m12 * b.z + a._m13 * b.w;
	v.z = a._m20 * b.x + a._m21 * b.y + a._m22 * b.z + a._m23 * b.w;
	v.w = a._m30 * b.x + a._m31 * b.y + a._m32 * b.z + a._m33 * b.w;
	return v;
#endif
}

GNM_INLINE vec4 operator * (const vec4& a, const mat4x4& b) {
#if (GNM_SIMD)
	__m128 m0 = _mm_mul_ps(a._v, b[0]._v);
	__m128 m1 = _mm_mul_ps(a._v, b[1]._v);
	__m128 m2 = _mm_mul_ps(a._v, b[2]._v);
	__m128 m3 = _mm_mul_ps(a._v, b[3]._v);

	__m128 a0 = _mm_add_ps(_mm_unpacklo_ps(m0, m1), _mm_unpackhi_ps(m0, m1));
	__m128 a1 = _mm_add_ps(_mm_unpacklo_ps(m2, m3), _mm_unpackhi_ps(m2, m3));

	return vec4(_mm_add_ps(_mm_movelh_ps(a0, a1), _mm_movehl_ps(a1, a0)));
#else
	vec4 v;
	v.x = a.x * b._m00 + a.y * b._m10 + a.z * b._m20 + a.w * b._m30;
	v.y = a.x * b._m01 + a.y * b._m11 + a.z * b._m21 + a.w * b._m31;
	v.z = a.x * b._m02 + a.y * b._m12 + a.z * b._m22 + a.w * b._m32;
	v.w = a.x * b._m03 + a.y * b._m13 + a.z * b._m23 + a.w * b._m33;
	return v;
#endif
}

GNM_INLINE mat4x4 operator * (const float a, const mat4x4& b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(a);
	return mat4x4(_mm_mul_ps(f, b[0]._v),
								_mm_mul_ps(f, b[1]._v),
								_mm_mul_ps(f, b[2]._v),
								_mm_mul_ps(f, b[3]._v));
#else
	return mat4x4(a * b._m00, a * b._m10, a * b._m20, a * b._m30,
								a * b._m01, a * b._m11, a * b._m21, a * b._m31,
								a * b._m02, a * b._m12, a * b._m22, a * b._m32,
								a * b._m03, a * b._m13, a * b._m23, a * b._m33);
#endif
}

GNM_INLINE mat4x4 operator * (const mat4x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	return mat4x4(_mm_mul_ps(a[0]._v, f),
								_mm_mul_ps(a[1]._v, f),
								_mm_mul_ps(a[2]._v, f),
								_mm_mul_ps(a[3]._v, f));
#else
	return mat4x4(a._m00 * b, a._m10 * b, a._m20 * b, a._m30 * b,
								a._m01 * b, a._m11 * b, a._m21 * b, a._m31 * b,
								a._m02 * b, a._m12 * b, a._m22 * b, a._m32 * b,
								a._m03 * b, a._m13 * b, a._m23 * b, a._m33 * b);
#endif
}

GNM_INLINE mat4x4 operator / (const float a, const mat4x4& b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(a);
	return mat4x4(_mm_div_ps(f, b[0]._v),
								_mm_div_ps(f, b[1]._v),
								_mm_div_ps(f, b[2]._v),
								_mm_div_ps(f, b[3]._v));
#else
	return mat4x4(a / b._m00, a / b._m10, a / b._m20, a / b._m30,
								a / b._m01, a / b._m11, a / b._m21, a / b._m31,
								a / b._m02, a / b._m12, a / b._m22, a / b._m32,
								a / b._m03, a / b._m13, a / b._m23, a / b._m33);
#endif
}

GNM_INLINE mat4x4 operator / (const mat4x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	return mat4x4(_mm_div_ps(a[0]._v, f),
								_mm_div_ps(a[1]._v, f),
								_mm_div_ps(a[2]._v, f),
								_mm_div_ps(a[3]._v, f));
#else
	return mat4x4(a._m00 / b, a._m10 / b, a._m20 / b, a._m30 / b,
								a._m01 / b, a._m11 / b, a._m21 / b, a._m31 / b,
								a._m02 / b, a._m12 / b, a._m22 / b, a._m32 / b,
								a._m03 / b, a._m13 / b, a._m23 / b, a._m33 / b);
#endif
}

GNM_INLINE mat4x4 operator + (const mat4x4& mat) {
	return mat;
}

GNM_INLINE mat4x4 operator - (const mat4x4& mat) {
#if (GNM_SIMD)
	return mat4x4(_mm_set_ps(-mat._m30, -mat._m20, -mat._m10, -mat._m00),
								_mm_set_ps(-mat._m31, -mat._m21, -mat._m11, -mat._m01),
								_mm_set_ps(-mat._m32, -mat._m22, -mat._m12, -mat._m02),
								_mm_set_ps(-mat._m33, -mat._m23, -mat._m13, -mat._m03));
#else
	return mat4x4(-mat._m00, -mat._m10, -mat._m20, -mat._m30,
								-mat._m01, -mat._m11, -mat._m21, -mat._m31,
								-mat._m02, -mat._m12, -mat._m22, -mat._m32,
								-mat._m03, -mat._m13, -mat._m23, -mat._m33);
#endif
}

GNM_INLINE mat4x4& operator += (mat4x4& a, const mat4x4& b) {
#if (GNM_SIMD)
	a[0]._v = _mm_add_ps(a[0]._v, b[0]._v);
	a[1]._v = _mm_add_ps(a[1]._v, b[1]._v);
	a[2]._v = _mm_add_ps(a[2]._v, b[2]._v);
	a[3]._v = _mm_add_ps(a[3]._v, b[3]._v);
#else
	a._m00 += b._m00; a._m10 += b._m10; a._m20 += b._m20; a._m30 += b._m30;
	a._m01 += b._m01; a._m11 += b._m11; a._m21 += b._m21; a._m31 += b._m31;
	a._m02 += b._m02; a._m12 += b._m12; a._m22 += b._m22; a._m32 += b._m32;
	a._m03 += b._m03; a._m13 += b._m13; a._m23 += b._m23; a._m33 += b._m33;
#endif
	return a;
}

GNM_INLINE mat4x4& operator -= (mat4x4& a, const mat4x4& b) {
#if (GNM_SIMD)
	a[0]._v = _mm_sub_ps(a[0]._v, b[0]._v);
	a[1]._v = _mm_sub_ps(a[1]._v, b[1]._v);
	a[2]._v = _mm_sub_ps(a[2]._v, b[2]._v);
	a[3]._v = _mm_sub_ps(a[3]._v, b[3]._v);
#else
	a._m00 -= b._m00; a._m10 -= b._m10; a._m20 -= b._m20; a._m30 -= b._m30;
	a._m01 -= b._m01; a._m11 -= b._m11; a._m21 -= b._m21; a._m31 -= b._m31;
	a._m02 -= b._m02; a._m12 -= b._m12; a._m22 -= b._m22; a._m32 -= b._m32;
	a._m03 -= b._m03; a._m13 -= b._m13; a._m23 -= b._m23; a._m33 -= b._m33;
#endif
	return a;
}

GNM_INLINE mat4x4& operator *= (mat4x4& a, const mat4x4& b) {
#if (GNM_SIMD)
	{
		__m128 e0 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[0]._v, b[0]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		a[0] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}

	{
		__m128 e0 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[1]._v, b[1]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		a[1] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}

	{
		__m128 e0 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[2]._v, b[2]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		a[2] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}

	{
		__m128 e0 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(0, 0, 0, 0));
		__m128 e1 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(1, 1, 1, 1));
		__m128 e2 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(2, 2, 2, 2));
		__m128 e3 = _mm_shuffle_ps(b[3]._v, b[3]._v, _MM_SHUFFLE(3, 3, 3, 3));

		__m128 m0 = _mm_mul_ps(a[0]._v, e0);
		__m128 m1 = _mm_mul_ps(a[1]._v, e1);
		__m128 m2 = _mm_mul_ps(a[2]._v, e2);
		__m128 m3 = _mm_mul_ps(a[3]._v, e3);

		a[3] = _mm_add_ps(_mm_add_ps(m0, m1), _mm_add_ps(m2, m3));
	}
#else
	const float m00 = a._m00;
	const float m01 = a._m01;
	const float m02 = a._m02;
	const float m03 = a._m03;
	const float m10 = a._m10;
	const float m11 = a._m11;
	const float m12 = a._m12;
	const float m13 = a._m13;
	const float m20 = a._m20;
	const float m21 = a._m21;
	const float m22 = a._m22;
	const float m23 = a._m23;
	const float m30 = a._m30;
	const float m31 = a._m31;
	const float m32 = a._m32;
	const float m33 = a._m33;

	a._m00 = m00 * b._m00 + m01 * b._m10 + m02 * b._m20 + m03 * b._m30;
	a._m01 = m00 * b._m01 + m01 * b._m11 + m02 * b._m21 + m03 * b._m31;
	a._m02 = m00 * b._m02 + m01 * b._m12 + m02 * b._m22 + m03 * b._m32;
	a._m03 = m00 * b._m03 + m01 * b._m13 + m02 * b._m23 + m03 * b._m33;

	a._m10 = m10 * b._m00 + m11 * b._m10 + m12 * b._m20 + m13 * b._m30;
	a._m11 = m10 * b._m01 + m11 * b._m11 + m12 * b._m21 + m13 * b._m31;
	a._m12 = m10 * b._m02 + m11 * b._m12 + m12 * b._m22 + m13 * b._m32;
	a._m13 = m10 * b._m03 + m11 * b._m13 + m12 * b._m23 + m13 * b._m33;

	a._m20 = m20 * b._m00 + m21 * b._m10 + m22 * b._m20 + m23 * b._m30;
	a._m21 = m20 * b._m01 + m21 * b._m11 + m22 * b._m21 + m23 * b._m31;
	a._m22 = m20 * b._m02 + m21 * b._m12 + m22 * b._m22 + m23 * b._m32;
	a._m23 = m20 * b._m03 + m21 * b._m13 + m22 * b._m23 + m23 * b._m33;

	a._m30 = m30 * b._m00 + m31 * b._m10 + m32 * b._m20 + m33 * b._m30;
	a._m31 = m30 * b._m01 + m31 * b._m11 + m32 * b._m21 + m33 * b._m31;
	a._m32 = m30 * b._m02 + m31 * b._m12 + m32 * b._m22 + m33 * b._m32;
	a._m33 = m30 * b._m03 + m31 * b._m13 + m32 * b._m23 + m33 * b._m33;
#endif
	return a;
}

GNM_INLINE mat4x4& operator *= (mat4x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	a[0]._v = _mm_mul_ps(a[0]._v, f);
	a[1]._v = _mm_mul_ps(a[1]._v, f);
	a[2]._v = _mm_mul_ps(a[2]._v, f);
	a[3]._v = _mm_mul_ps(a[3]._v, f);
#else
	a._m00 *= b; a._m10 *= b; a._m20 *= b; a._m30 *= b;
	a._m01 *= b; a._m11 *= b; a._m21 *= b; a._m31 *= b;
	a._m02 *= b; a._m12 *= b; a._m22 *= b; a._m32 *= b;
	a._m03 *= b; a._m13 *= b; a._m23 *= b; a._m33 *= b;
#endif
	return a;
}

GNM_INLINE mat4x4& operator /= (mat4x4& a, const float b) {
#if (GNM_SIMD)
	const __m128 f = _mm_set_ps1(b);
	a[0]._v = _mm_div_ps(a[0]._v, f);
	a[1]._v = _mm_div_ps(a[1]._v, f);
	a[2]._v = _mm_div_ps(a[2]._v, f);
	a[3]._v = _mm_div_ps(a[3]._v, f);
#else
	a._m00 /= b; a._m10 /= b; a._m20 /= b; a._m30 /= b;
	a._m01 /= b; a._m11 /= b; a._m21 /= b; a._m31 /= b;
	a._m02 /= b; a._m12 /= b; a._m22 /= b; a._m32 /= b;
	a._m03 /= b; a._m13 /= b; a._m23 /= b; a._m33 /= b;
#endif
	return a;
}

GNM_NAMESPACE_END
