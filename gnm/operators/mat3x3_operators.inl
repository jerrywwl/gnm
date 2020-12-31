GNM_NAMESPACE_BEGIN

GNM_INLINE bool operator == (const mat3x3& a, const mat3x3& b) {
	return memcmp(a._m, b._m, sizeof(mat3x3)) == 0;
}

GNM_INLINE bool operator != (const mat3x3& a, const mat3x3& b) {
	return memcmp(a._m, b._m, sizeof(mat3x3)) != 0;
}

GNM_INLINE mat3x3 operator + (const mat3x3& a, const mat3x3& b) {
	return mat3x3(a._m00 + b._m00, a._m10 + b._m10, a._m20 + b._m20,
								a._m01 + b._m01, a._m11 + b._m11, a._m21 + b._m21,
								a._m02 + b._m02, a._m12 + b._m12, a._m22 + b._m22);
}

GNM_INLINE mat3x3 operator - (const mat3x3& a, const mat3x3& b) {
	return mat3x3(a._m00 - b._m00, a._m10 - b._m10, a._m20 - b._m20,
								a._m01 - b._m01, a._m11 - b._m11, a._m12 - b._m12,
								a._m02 - b._m02, a._m12 - b._m12, a._m22 - b._m22);
}

GNM_INLINE mat3x3 operator * (const mat3x3& a, const mat3x3& b) {

	mat3x3 mat;

	mat._m00 = a._m00 * b._m00 + a._m01 * b._m10 + a._m02 * b._m20;
	mat._m01 = a._m00 * b._m01 + a._m01 * b._m11 + a._m02 * b._m21;
	mat._m02 = a._m00 * b._m02 + a._m01 * b._m12 + a._m02 * b._m22;

	mat._m10 = a._m10 * b._m00 + a._m11 * b._m10 + a._m12 * b._m20;
	mat._m11 = a._m10 * b._m01 + a._m11 * b._m11 + a._m12 * b._m21;
	mat._m12 = a._m10 * b._m02 + a._m11 * b._m12 + a._m12 * b._m22;

	mat._m20 = a._m20 * b._m00 + a._m21 * b._m10 + a._m22 * b._m20;
	mat._m21 = a._m20 * b._m01 + a._m21 * b._m11 + a._m22 * b._m21;
	mat._m22 = a._m20 * b._m02 + a._m21 * b._m12 + a._m22 * b._m22;

	return mat;
}

GNM_INLINE vec3 operator * (const mat3x3& a, const vec3& b) {
	vec3 v;
	v.x = a._m00 * b.x + a._m01 * b.y + a._m02 * b.z;
	v.y = a._m10 * b.x + a._m11 * b.y + a._m12 * b.z;
	v.z = a._m20 * b.x + a._m21 * b.y + a._m22 * b.z;
	return v;
}

GNM_INLINE vec3 operator * (const vec3& a, const mat3x3& b) {
	vec3 v;
	v.x = a.x * b._m00 + a.y * b._m10 + a.z * b._m20;
	v.y = a.x * b._m01 + a.y * b._m11 + a.z * b._m21;
	v.z = a.x * b._m02 + a.y * b._m12 + a.z * b._m22;
	return v;
}

GNM_INLINE mat3x3 operator * (const float a, const mat3x3& b) {
	return mat3x3(a * b._m00, a * b._m10, a * b._m20,
								a * b._m01, a * b._m11, a * b._m21,
								a * b._m02, a * b._m12, a * b._m22);
}

GNM_INLINE mat3x3 operator * (const mat3x3& a, const float b) {
	return mat3x3(a._m00 * b, a._m10 * b, a._m20 * b,
								a._m01 * b, a._m11 * b, a._m21 * b,
								a._m02 * b, a._m12 * b, a._m22 * b);
}

GNM_INLINE mat3x3 operator / (const float a, const mat3x3& b) {
	return mat3x3(a / b._m00, a / b._m10, a / b._m20,
								a / b._m01, a / b._m11, a / b._m21,
								a / b._m02, a / b._m12, a / b._m22);
}

GNM_INLINE mat3x3 operator / (const mat3x3& a, const float b) {
	return mat3x3(a._m00 / b, a._m10 / b, a._m20 / b,
								a._m01 / b, a._m11 / b, a._m21 / b,
								a._m02 / b, a._m12 / b, a._m22 / b);
}

GNM_INLINE mat3x3 operator + (const mat3x3& mat) {
	return mat;
}

GNM_INLINE mat3x3 operator - (const mat3x3& mat) {
	return mat3x3(-mat._m00, -mat._m10, -mat._m20,
								-mat._m01, -mat._m11, -mat._m21,
								-mat._m02, -mat._m12, -mat._m22);
}

GNM_INLINE mat3x3& operator += (mat3x3& a, const mat3x3& b) {
	a._m00 += b._m00;
	a._m01 += b._m01;
	a._m02 += b._m02;
	a._m10 += b._m10;
	a._m11 += b._m11;
	a._m12 += b._m12;
	a._m20 += b._m20;
	a._m21 += b._m21;
	a._m22 += b._m22;
	return a;
}

GNM_INLINE mat3x3& operator -= (mat3x3& a, const mat3x3& b) {
	a._m00 -= b._m00;
	a._m01 -= b._m01;
	a._m02 -= b._m02;
	a._m10 -= b._m10;
	a._m11 -= b._m11;
	a._m12 -= b._m12;
	a._m20 -= b._m20;
	a._m21 -= b._m21;
	a._m22 -= b._m22;
	return a;
}

GNM_INLINE mat3x3& operator *= (mat3x3& a, const mat3x3& b) {

	const float m00 = a._m00;
	const float m01 = a._m01;
	const float m02 = a._m02;
	const float m10 = a._m10;
	const float m11 = a._m11;
	const float m12 = a._m12;
	const float m20 = a._m20;
	const float m21 = a._m21;
	const float m22 = a._m22;

	a._m00 = m00 * b._m00 + m01 * b._m10 + m02 * b._m20;
	a._m01 = m00 * b._m01 + m01 * b._m11 + m02 * b._m21;
	a._m02 = m00 * b._m02 + m01 * b._m12 + m02 * b._m22;

	a._m10 = m10 * b._m00 + m11 * b._m10 + m12 * b._m20;
	a._m11 = m10 * b._m01 + m11 * b._m11 + m12 * b._m21;
	a._m12 = m10 * b._m02 + m11 * b._m12 + m12 * b._m22;

	a._m20 = m20 * b._m00 + m21 * b._m10 + m22 * b._m20;
	a._m21 = m20 * b._m01 + m21 * b._m11 + m22 * b._m21;
	a._m22 = m20 * b._m02 + m21 * b._m12 + m22 * b._m22;

	return a;
}

GNM_INLINE mat3x3& operator *= (mat3x3& a, const float b) {
	a._m00 *= b;
	a._m01 *= b;
	a._m02 *= b;
	a._m10 *= b;
	a._m11 *= b;
	a._m12 *= b;
	a._m20 *= b;
	a._m21 *= b;
	a._m22 *= b;
	return a;
}

template <typename T>
GNM_INLINE mat3x3& operator /= (mat3x3& a, const float b) {
	a._m00 /= b;
	a._m01 /= b;
	a._m02 /= b;
	a._m10 /= b;
	a._m11 /= b;
	a._m12 /= b;
	a._m20 /= b;
	a._m21 /= b;
	a._m22 /= b;
	return a;
}

GNM_NAMESPACE_END
