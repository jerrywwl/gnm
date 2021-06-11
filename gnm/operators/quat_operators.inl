#include "../functions/func_geometric.h"
#include "../functions/func_quat.h"

GNM_NAMESPACE_BEGIN

GNM_INLINE quat operator + (const quat& a, const quat& b) {
#if (GNM_SIMD)
	return vec4(_mm_add_ps(a._v, b._v));
#else
	return quat(a.w + b.w, a.x + b.x, a.y + b.y, a.z + b.z);
#endif
}

GNM_INLINE quat operator - (const quat& a, const quat& b) {
#if (GNM_SIMD)
	return vec4(_mm_sub_ps(a._v, b._v));
#else
	return quat(a.w - b.w, a.x - b.x, a.y - b.y, a.z - b.z);
#endif
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
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(a._v, _mm_set_ps1(b)));
#else
	return quat(a.w * b, a.x * b, a.y * b, a.z * b);
#endif
}

GNM_INLINE quat operator * (const float a, const quat& b) {
#if (GNM_SIMD)
	return quat(_mm_mul_ps(_mm_set_ps1(a), b._v));
#else
	return quat(a * b.w, a * b.x, a * b.y, a * b.z);
#endif
}

GNM_INLINE vec3 operator * (const quat& a, const vec3& b) {
	vec3 uv = Cross(a.xyz, b);
	vec3 uvv = Cross(a.xyz, uv);
	return b + ((uv * a.w) + uvv) * 2.0f;
}

GNM_INLINE vec3 operator * (const vec3& a, const quat& b) {
	return Inverse(b) * a;
}

GNM_INLINE vec4 operator * (const quat& a, const vec4& b) {
	return vec4(a * b.xyz, b.w);
}

GNM_INLINE vec4 operator * (const vec4& a, const quat& b) {
	return Inverse(b) * a;
}

GNM_INLINE quat operator / (const quat& a, const float b) {
#if (GNM_SIMD)
	return quat(_mm_div_ps(a._v, _mm_set_ps1(b)));
#else
	return quat(a.w / b, a.x / b, a.y / b, a.z / b);
#endif
}

GNM_INLINE quat operator / (const float a, const quat& b) {
#if (GNM_SIMD)
	return quat(_mm_div_ps(_mm_set_ps1(a), b._v));
#else
	return quat(a / b.w, a / b.x, a / b.y, a / b.z);
#endif
}

GNM_INLINE quat operator + (const quat& a) {
	return a;
}

GNM_INLINE quat operator - (const quat& a) {
#if (GNM_SIMD)
	return quat(_mm_set_ps(-a.z, -a.y, -a.x, -a.w));
#else
	return quat(-a.w, -a.x, -a.y, -a.z);
#endif
}

GNM_INLINE bool operator == (const quat& a, const quat& b) {
	return a.w == b.w && a.x == b.x && a.y == b.y && a.z == b.z;
}

GNM_INLINE bool operator != (const quat& a, const quat& b) {
	return a.w != b.w || a.x != b.x || a.y != b.y || a.z != b.z;
}

GNM_INLINE quat& operator += (quat& a, const quat& b) {
#if (GNM_SIMD)
	a._v = _mm_add_ps(a._v, b._v);
#else
	a.w += b.w;
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
#endif
	return a;
}

GNM_INLINE quat& operator -= (quat& a, const quat& b) {
#if (GNM_SIMD)
	a._v = _mm_sub_ps(a._v, b._v);
#else
	a.w -= b.w;
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
#endif
	return a;
}

GNM_INLINE quat& operator *= (quat& a, const quat& b) {

	const float x = a.x;
	const float y = a.y;
	const float z = a.z;
	a.w = a.w * b.w - x * b.x - y * b.y - z * b.z;
	a.x = a.w * b.x + x * b.w + y * b.z - z * b.y;
	a.y = a.w * b.y + y * b.w + z * b.x - x * b.z;
	a.z = a.w * b.z + z * b.w + x * b.y - y * b.x;
	return a;
}

GNM_INLINE quat& operator *= (quat& a, const float b) {
#if (GNM_SIMD)
	a._v = _mm_add_ps(a._v, _mm_set_ps1(b));
#else
	a.w *= b;
	a.x *= b;
	a.y *= b;
	a.z *= b;
#endif
	return a;
}

GNM_INLINE quat& operator /= (quat& a, const float b) {
#if (GNM_SIMD)
	a._v = _mm_div_ps(a._v, _mm_set_ps1(b));
#else
	a.w /= b;
	a.x /= b;
	a.y /= b;
	a.z /= b;
#endif
	return a;
}

GNM_NAMESPACE_END
