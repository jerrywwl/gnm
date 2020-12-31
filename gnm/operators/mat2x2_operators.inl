GNM_NAMESPACE_BEGIN

GNM_INLINE bool operator == (const mat2x2& a, const mat2x2& b) {
	return memcmp(a._m, b._m, sizeof(mat2x2)) == 0;
}

GNM_INLINE bool operator != (const mat2x2& a, const mat2x2& b) {
	return memcmp(a._m, b._m, sizeof(mat2x2)) != 0;
}

GNM_INLINE mat2x2 operator + (const mat2x2& a, const mat2x2& b) {
	return mat2x2(a._m00 + b._m00, a._m10 + b._m10,
								a._m01 + b._m01, a._m11 + b._m11);
}

GNM_INLINE mat2x2 operator - (const mat2x2& a, const mat2x2& b) {
	return mat2x2(a._m00 - b._m00, a._m10 - b._m10,
								a._m01 - b._m01, a._m11 - b._m11);
}

GNM_INLINE mat2x2 operator * (const mat2x2& a, const mat2x2& b) {

	mat2x2 mat;

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11;

	return mat;
}

GNM_INLINE vec2 operator * (const mat2x2& a, const vec2& b) {
	vec2 v;
	v.x = a._m00 * b.x + a._m01 * b.y;
	v.y = a._m10 * b.x + a._m11 * b.y;
	return v;
}

GNM_INLINE vec2 operator * (const vec2& a, const mat2x2& b) {
	vec2 v;
	v.x = a.x * b._m00 + a.y * b._m10;
	v.y = a.x * b._m01 + a.y * b._m11;
	return v;
}

GNM_INLINE mat2x2 operator * (const float a, const mat2x2& b) {
	return mat2x2(a * b._m00, a * b._m10,
								a * b._m01, a * b._m11);
}

GNM_INLINE mat2x2 operator * (const mat2x2& a, const float b) {
	return mat2x2(a._m00 * b, a._m10 * b,
								a._m01 * b, a._m11 * b);
}

GNM_INLINE mat2x2 operator / (const float a, const mat2x2& b) {
	return mat2x2(a / b._m00, a / b._m10,
								a / b._m01, a / b._m11);
}

GNM_INLINE mat2x2 operator / (const mat2x2& a, const float b) {
	return mat2x2(a._m00 / b, a._m10 / b,
								a._m01 / b, a._m11 / b);
}

GNM_INLINE mat2x2 operator + (const mat2x2& mat) {
	return mat;
}

GNM_INLINE mat2x2 operator - (const mat2x2& mat) {
	return mat2x2(-mat._m00, -mat._m10,
								-mat._m01, -mat._m11);
}

GNM_INLINE mat2x2& operator += (mat2x2& a, const mat2x2& b) {
	a._m00 += b._m00;
	a._m01 += b._m01;
	a._m10 += b._m10;
	a._m11 += b._m11;
	return a;
}

GNM_INLINE mat2x2& operator -= (mat2x2& a, const mat2x2& b) {
	a._m00 -= b._m00;
	a._m01 -= b._m01;
	a._m10 -= b._m10;
	a._m11 -= b._m11;
	return a;
}

GNM_INLINE mat2x2& operator *= (mat2x2& a, const mat2x2& b) {

	const float m00 = a._m00;
	const float m01 = a._m01;
	const float m10 = a._m10;
	const float m11 = a._m11;

	a._m00 = m00 * b._m00 + m01 * b._m10;
	a._m01 = m00 * b._m01 + m01 * b._m11;

	a._m10 = m10 * b._m00 + m11 * b._m10;
	a._m11 = m10 * b._m01 + m11 * b._m11;

	return a;
}

GNM_INLINE mat2x2& operator *= (mat2x2& a, const float b) {
	a._m00 *= b;
	a._m01 *= b;
	a._m10 *= b;
	a._m11 *= b;
	return a;
}

template <typename T>
GNM_INLINE mat2x2& operator /= (mat2x2& a, const float b) {
	a._m00 /= b;
	a._m01 /= b;
	a._m10 /= b;
	a._m11 /= b;
	return a;
}

GNM_NAMESPACE_END
