#include "func_vector_relational.h"
#include "func_trigonometric.h"

GNM_NAMESPACE_BEGIN

GNM_INLINE bvec4 equal(const quat& x, const quat& y) {
	return bvec4((abs(x.w - y.w) <= GNM_EPSILON), (abs(x.x - y.x) <= GNM_EPSILON), (abs(x.y - y.y) <= GNM_EPSILON), (abs(x.z - y.z) <= GNM_EPSILON));
}

GNM_INLINE float dot(const quat& x, const quat& y) {
#if (GNM_SIMD)
	return _mm_cvtss_f32(_mm_dp_ps(x._v, y._v, 0xff));
#else
  return (x.w * y.w + x.x * y.x + x.y * y.y + x.z * y.z);
#endif
}

GNM_INLINE quat cross(const quat& x, const quat& y) {
  return quat(x.w * y.z + x.z * y.w + x.x * y.y - x.y * y.x,
							x.w * y.w - x.x * y.x - x.y * y.y - x.z * y.z,
							x.w * y.x + x.x * y.w + x.y * y.z - x.z * y.y,
							x.w * y.y + x.y * y.w + x.z * y.x - x.x * y.z);
}

GNM_INLINE float length(const quat& x) {
	return std::sqrt(x.w * x.w + x.x * x.x + x.y * x.y + x.z * x.z);
}

GNM_INLINE quat normalize(const quat& x) {
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(x._v, _mm_rsqrt_ps(_mm_dp_ps(x._v, x._v, 0xFF))));
#else
	const float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(x.w * f, x.x * f, x.y * f, x.z * f);
#endif
}

GNM_INLINE quat conjugate(const quat& x) {
#if (GNM_SIMD)
	return quat(_mm_set_ps(x.w, -x.z, -x.y, -x.x));
#else
	return quat(x.w, -x.x, -x.y, -x.z);
#endif
}

GNM_INLINE quat inverse(const quat& x) {
#if (GNM_SIMD)
	return quat(_mm_div_ps(_mm_set_ps(-x.z, -x.y, -x.x, x.w), _mm_dp_ps(x._v, x._v, 0xFF)));
#else
	const float f = 1.0f / (x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(x.w * f, -x.x * f, -x.y * f, -x.z * f);
#endif
}

GNM_INLINE float angle(const quat& x) {
	if (abs(x.w) > 0.87758256f) {
		const float a = asin(sqrt(x.x * x.x + x.y * x.y + x.z * x.z)) * 2.0f;
		if (x.w < 0.0f) {
			return GNM_PI * 2.0f - a;
		}
		return a;
	}
	return acos(x.w) * 2.0f;
}

GNM_INLINE vec3 axis(const quat& x) {
	const float tmp1 = 1.0f - x.w * x.w;
	if (tmp1 <= 0.0f) {
		return vec3(0, 0, 1);
	}
	const float tmp2 = 1.0f / sqrt(tmp1);
	return vec3(x.x * tmp2, x.y * tmp2, x.z * tmp2);
}

GNM_INLINE quat rotate(const quat& x, const vec3& axis, const float angle) {
	vec3 tmp = axis;

	// Axis of rotation must be normalised
	float len = length(tmp);
	if (abs(len - 1.0f) > 0.001f) {
		float oneOverLen = 1.0f / len;
		tmp.x *= oneOverLen;
		tmp.y *= oneOverLen;
		tmp.z *= oneOverLen;
	}

	const float Sin = sin(angle * 0.5f);
	return x * quat(cos(angle * 0.5f), tmp.x * Sin, tmp.y * Sin, tmp.z * Sin);
}

// http://lolengine.net/blog/2013/09/18/beautiful-maths-quaternion-from-vectors
GNM_INLINE quat fromNormalizedAxis(const vec3& a, const vec3& b) {
	float norm_u_norm_v = sqrt(dot(a, a) * dot(b, b));
	float real_part = norm_u_norm_v + dot(a, b);
	vec3 t;
	if (real_part < static_cast<float>(1.e-6f) * norm_u_norm_v) {
		// If u and v are exactly opposite, rotate 180 degrees
		// around an arbitrary orthogonal axis. Axis normalisation
		// can happen later, when we normalise the quaternion.
		real_part = 0.0f;
		t = abs(a.x) > abs(a.z) ? vec3(-a.y, a.x, 0.0f) : vec3(0.0f, -a.z, a.y);
	} else {
		// Otherwise, build quaternion the standard way.
		t = cross(a, b);
	}

	return normalize(quat(real_part, t));
}

GNM_INLINE float roll(const quat& q) {
	const float y = 2.0f * (q.x * q.y + q.w * q.z);
	const float x = q.w * q.w + q.x * q.x - q.y * q.y - q.z * q.z;

	if (all(equal(vec2(x, y), VEC2_ZERO, GNM_EPSILON))) 
		return 0.0f;

	return atan(y, x);
}

GNM_INLINE float pitch(const quat& q) {
	const float y = 2.0f * (q.y * q.z + q.w * q.x);
	const float x = q.w * q.w - q.x * q.x - q.y * q.y + q.z * q.z;

	if (all(equal(vec2(x, y), VEC2_ZERO, GNM_EPSILON)))
		return 2.0f * atan(q.x, q.w);

	return atan(y, x);
}

GNM_INLINE float yaw(const quat& q) {
	return asin(clamp(-2.0f * (q.x * q.z - q.w * q.y), -1.0f, 1.0f));
}

GNM_INLINE vec3 eulerAngles(const quat& q) {
	return vec3(pitch(q), yaw(q), roll(q));
}

GNM_INLINE quat quatAxisAngle(const vec3& axis, const float angle) {
	return quat(cos(angle * 0.5f), axis * (sin(angle) * 0.5f));
}

GNM_INLINE quat quatEulerAngles(const vec3& angles) {
	vec3 c = cos(angles * 0.5f);
	vec3 s = sin(angles * 0.5f);

	return quat(c.x * c.y * c.z + s.x * s.y * s.z,
							s.x * c.y * c.z - c.x * s.y * s.z,
							c.x * s.y * c.z + s.x * c.y * s.z,
							c.x * c.y * s.z - s.x * s.y * c.z);
}

GNM_NAMESPACE_END
