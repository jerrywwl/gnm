GNM_NAMESPACE_BEGIN

GNM_INLINE quat operator + (const quat& a, const quat& b) {
	return quat(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

GNM_INLINE quat operator - (const quat& a, const quat& b) {
	return quat(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

GNM_INLINE quat operator * (const quat& a, const quat& b) {
	quat q;
	q.w = a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z;
	q.x = a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y;
	q.y = a.w * b.y + a.y * b.w + a.z * b.x - a.x * b.z;
	q.z = a.w * b.z + a.z * b.w + a.x * b.y - a.y * b.x;
	return q;
}

GNM_INLINE quat operator * (const quat& a, const float b) {
	return quat(a.x * b, a.y * b, a.z * b, a.w * b);
}

GNM_INLINE quat operator * (const float a, const quat& b) {
	return quat(a * b.x, a * b.y, a * b.z, a * b.w);
}

GNM_INLINE quat operator / (const quat& a, const float b) {
	return quat(a.x / b, a.y / b, a.z / b, a.w / b);
}

GNM_INLINE quat operator / (const float a, const quat& b) {
	return quat(a / b.x, a / b.y, a / b.z, a / b.w);
}

GNM_INLINE quat operator + (const quat& a) {
	return a;
}

GNM_INLINE quat operator - (const quat& a) {
	return quat(-a.x, -a.y, -a.z, -a.w);
}

GNM_INLINE bool operator == (const quat& a, const quat& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GNM_INLINE bool operator != (const quat& a, const quat& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}

GNM_INLINE quat& operator += (quat& a, const quat& b) {
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
	return a;
}

GNM_INLINE quat& operator -= (quat& a, const quat& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
	return a;
}

GNM_INLINE quat& operator *= (quat& a, const quat& b) {

	const float x = a.x;
	const float y = a.y;
	const float z = a.z;

	a.x = a.w * b.x + x * b.w + y * b.z - z * b.y;
	a.y = a.w * b.y + y * b.w + z * b.x - x * b.z;
	a.z = a.w * b.z + z * b.w + x * b.y - y * b.x;
	a.w = a.w * b.w - x * b.x - y * b.y - z * b.z;
	return a;
}

GNM_INLINE quat& operator *= (quat& a, const float b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
	return a;
}

GNM_INLINE quat& operator /= (quat& a, const float b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
	return a;
}

GNM_NAMESPACE_END
