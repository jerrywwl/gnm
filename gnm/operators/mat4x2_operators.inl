GNM_NAMESPACE_BEGIN

GNM_INLINE bool operator == (const mat4x2& a, const mat4x2& b) {
	return memcmp(a._m, b._m, sizeof(mat4x2)) == 0;
}

GNM_INLINE bool operator != (const mat4x2& a, const mat4x2& b) {
	return memcmp(a._m, b._m, sizeof(mat4x2)) != 0;
}

GNM_INLINE mat4x2 operator + (const mat4x2& a, const mat4x2& b) {
	return mat4x2(a._m00 + b._m00, a._m10 + b._m10,
								a._m01 + b._m01, a._m11 + b._m11,
								a._m02 + b._m02, a._m12 + b._m12,
								a._m03 + b._m03, a._m13 + b._m13);
}

GNM_INLINE mat4x2 operator - (const mat4x2& a, const mat4x2& b) {
	return mat4x2(a._m00 - b._m00, a._m10 - b._m10,
								a._m01 - b._m01, a._m11 - b._m11,
								a._m02 - b._m02, a._m12 - b._m12,
								a._m03 - b._m03, a._m13 - b._m13);
}

GNM_INLINE mat4x2 operator * (const mat4x2& a, const mat4x4& b) {
	
	mat4x2 mat;

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10 + a._m02 * b._m20 + a._m03 * b._m30;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11 + a._m02 * b._m21 + a._m03 * b._m31;
	mat._m02 = a._m00 * b._m02 + a._m01 * b._m12 + a._m02 * b._m22 + a._m03 * b._m32;
	mat._m03 = a._m00 * b._m03 + a._m01 * b._m13 + a._m02 * b._m23 + a._m03 * b._m33;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10 + a._m12 * b._m20 + a._m13 * b._m30;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11 + a._m12 * b._m21 + a._m13 * b._m31;
	mat._m12 = a._m10 * b._m02 + a._m11 * b._m12 + a._m12 * b._m22 + a._m13 * b._m32;
	mat._m13 = a._m10 * b._m03 + a._m11 * b._m13 + a._m12 * b._m23 + a._m13 * b._m33;

	return mat;
}

GNM_INLINE mat4x2 operator * (const mat2x2& a, const mat4x2& b) {

	mat4x2 mat;

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11;
	mat._m02 = a._m00 * b._m02 + a._m01 * b._m12;
	mat._m03 = a._m00 * b._m03 + a._m01 * b._m13;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11;
	mat._m12 = a._m10 * b._m02 + a._m11 * b._m12;
	mat._m13 = a._m10 * b._m03 + a._m11 * b._m13;

	return mat;
}

GNM_INLINE vec2 operator * (const mat4x2& a, const vec4& b) {
	vec2 v;
	v.x = a._m00 * b.x + a._m01 * b.y + a._m02 * b.z + a._m03 * b.w;
	v.y = a._m10 * b.x + a._m11 * b.y + a._m12 * b.z + a._m13 * b.w;
	return v;
}

GNM_INLINE vec4 operator * (const vec2& a, const mat4x2& b) {
	vec4 v;
	v.x = a.x * b._m00 + a.y * b._m10;
	v.y = a.x * b._m01 + a.y * b._m11;
	v.z = a.x * b._m02 + a.y * b._m12;
	v.w = a.x * b._m03 + a.y * b._m13;
	return v;
}

GNM_INLINE mat4x2 operator * (const float a, const mat4x2& b) {
	return mat4x2(a * b._m00, a * b._m10,
								a * b._m01, a * b._m11,
								a * b._m02, a * b._m12,
								a * b._m03, a * b._m13);
}

GNM_INLINE mat4x2 operator * (const mat4x2& a, const float b) {
	return mat4x2(a._m00 * b, a._m10 * b,
								a._m01 * b, a._m11 * b,
								a._m02 * b, a._m12 * b,
								a._m03 * b, a._m13 * b);
}

GNM_INLINE mat4x2 operator / (const float a, const mat4x2& b) {
	return mat4x2(a / b._m00, a / b._m10,
								a / b._m01, a / b._m11,
								a / b._m02, a / b._m12,
								a / b._m03, a / b._m13);
}

GNM_INLINE mat4x2 operator / (const mat4x2& a, const float b) {
	return mat4x2(a._m00 / b, a._m10 / b,
								a._m01 / b, a._m11 / b,
								a._m02 / b, a._m12 / b,
								a._m03 / b, a._m13 / b);
}

GNM_INLINE mat4x2 operator + (const mat4x2& mat) {
	return mat;
}

GNM_INLINE mat4x2 operator - (const mat4x2& mat) {
	return mat4x2(-mat._m00, -mat._m01,
								-mat._m01, -mat._m11,
								-mat._m02, -mat._m12,
								-mat._m03, -mat._m13);
}

GNM_INLINE mat4x2& operator += (mat4x2& a, const mat4x2& b) {
	a._m00 += b._m00;
	a._m01 += b._m01;
	a._m02 += b._m02;
	a._m03 += b._m03;
	a._m10 += b._m10;
	a._m11 += b._m11;
	a._m12 += b._m12;
	a._m13 += b._m13;
	return a;
}

GNM_INLINE mat4x2& operator -= (mat4x2& a, const mat4x2& b) {
	a._m00 -= b._m00;
	a._m01 -= b._m01;
	a._m02 -= b._m02;
	a._m03 -= b._m03;
	a._m10 -= b._m10;
	a._m11 -= b._m11;
	a._m12 -= b._m12;
	a._m13 -= b._m13;
	return a;
}

GNM_INLINE mat4x2& operator *= (mat4x2& a, const mat4x4& b) {

	const float m00 = a._m00;
	const float m01 = a._m01;
	const float m02 = a._m02;
	const float m03 = a._m03;
	const float m10 = a._m10;
	const float m11 = a._m11;
	const float m12 = a._m12;
	const float m13 = a._m13;

	a._m00 = m00 * b._m00 + m01 * b._m10 + m02 * b._m20 + m03 * b._m30;
	a._m01 = m00 * b._m01 + m01 * b._m11 + m02 * b._m21 + m03 * b._m31;
	a._m02 = m00 * b._m02 + m01 * b._m12 + m02 * b._m22 + m03 * b._m32;
	a._m03 = m00 * b._m03 + m01 * b._m13 + m02 * b._m23 + m03 * b._m33;

	a._m10 = m10 * b._m00 + m11 * b._m10 + m12 * b._m20 + m13 * b._m30;
	a._m11 = m10 * b._m01 + m11 * b._m11 + m12 * b._m21 + m13 * b._m31;
	a._m12 = m10 * b._m02 + m11 * b._m12 + m12 * b._m22 + m13 * b._m32;
	a._m13 = m10 * b._m03 + m11 * b._m13 + m12 * b._m23 + m13 * b._m33;

	return a;
}

GNM_INLINE mat4x2& operator *= (mat4x2& a, const float b) {
	a._m00 *= b;
	a._m01 *= b;
	a._m02 *= b;
	a._m03 *= b;
	a._m10 *= b;
	a._m11 *= b;
	a._m12 *= b;
	a._m13 *= b;
	return a;
}

GNM_INLINE mat4x2& operator /= (mat4x2& a, const float b) {
	a._m00 /= b;
	a._m01 /= b;
	a._m02 /= b;
	a._m03 /= b;
	a._m10 /= b;
	a._m11 /= b;
	a._m12 /= b;
	a._m13 /= b;
	return a;
}

GNM_NAMESPACE_END
