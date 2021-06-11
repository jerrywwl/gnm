#include "func_vector_relational.h"
#include "func_trigonometric.h"

GNM_NAMESPACE_BEGIN

GNM_INLINE bvec4 Equal(const quat& x, const quat& y) {
	return bvec4((Abs(x.w - y.w) <= GNM_EPSILON), (Abs(x.x - y.x) <= GNM_EPSILON), (Abs(x.y - y.y) <= GNM_EPSILON), (Abs(x.z - y.z) <= GNM_EPSILON));
}

GNM_INLINE float Dot(const quat& x, const quat& y) {
#if (GNM_SIMD)
	return _mm_cvtss_f32(_mm_dp_ps(x._v, y._v, 0xff));
#else
  return (x.w * y.w + x.x * y.x + x.y * y.y + x.z * y.z);
#endif
}

GNM_INLINE quat Cross(const quat& x, const quat& y) {
  return quat(x.w * y.z + x.z * y.w + x.x * y.y - x.y * y.x,
							x.w * y.w - x.x * y.x - x.y * y.y - x.z * y.z,
							x.w * y.x + x.x * y.w + x.y * y.z - x.z * y.y,
							x.w * y.y + x.y * y.w + x.z * y.x - x.x * y.z);
}

GNM_INLINE float Length(const quat& x) {
	return std::sqrt(x.w * x.w + x.x * x.x + x.y * x.y + x.z * x.z);
}

GNM_INLINE quat Normalize(const quat& x) {
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(x._v, _mm_rsqrt_ps(_mm_dp_ps(x._v, x._v, 0xFF))));
#else
	const float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(x.w * f, x.x * f, x.y * f, x.z * f);
#endif
}

GNM_INLINE quat Conjugate(const quat& x) {
#if (GNM_SIMD)
	return quat(_mm_set_ps(x.w, -x.z, -x.y, -x.x));
#else
	return quat(x.w, -x.x, -x.y, -x.z);
#endif
}

GNM_INLINE quat Inverse(const quat& x) {
#if (GNM_SIMD)
	return quat(_mm_div_ps(_mm_set_ps(-x.z, -x.y, -x.x, x.w), _mm_dp_ps(x._v, x._v, 0xFF)));
#else
	const float f = 1.0f / (x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(x.w * f, -x.x * f, -x.y * f, -x.z * f);
#endif
}

GNM_INLINE float Angle(const quat& x) {
	if (Abs(x.w) > 0.87758256f) {
		const float a = Asin(std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z)) * 2.0f;
		if (x.w < 0.0f) {
			return GNM_PI * 2.0f - a;
		}
		return a;
	}
	return Acos(x.w) * 2.0f;
}

GNM_INLINE vec3 Axis(const quat& x) {
	const float tmp1 = 1.0f - x.w * x.w;
	if (tmp1 <= 0.0f) {
		return vec3(0, 0, 1);
	}
	const float tmp2 = 1.0f / std::sqrt(tmp1);
	return vec3(x.x * tmp2, x.y * tmp2, x.z * tmp2);
}

GNM_INLINE quat Rotate(const quat& x, const vec3& Axis, const float Angle) {
	vec3 tmp = Axis;

	// Axis of rotation must be normalised
	float len = Length(tmp);
	if (Abs(len - 1.0f) > 0.001f) {
		float oneOverLen = 1.0f / len;
		tmp.x *= oneOverLen;
		tmp.y *= oneOverLen;
		tmp.z *= oneOverLen;
	}

	const float f = Sin(Angle * 0.5f);
	return x * quat(Cos(Angle * 0.5f), tmp.x * f, tmp.y * f, tmp.z * f);
}

// http://lolengine.net/blog/2013/09/18/beautiful-maths-quaternion-from-vectors
GNM_INLINE quat FromNormalizedAxis(const vec3& a, const vec3& b) {
	float norm_u_norm_v = std::sqrt(Dot(a, a) * Dot(b, b));
	float real_part = norm_u_norm_v + Dot(a, b);
	vec3 t;
	if (real_part < static_cast<float>(1.e-6f) * norm_u_norm_v) {
		// If u and v are exactly opposite, rotate 180 degrees
		// around an arbitrary orthogonal axis. Axis normalisation
		// can happen later, when we normalise the quaternion.
		real_part = 0.0f;
		t = Abs(a.x) > Abs(a.z) ? vec3(-a.y, a.x, 0.0f) : vec3(0.0f, -a.z, a.y);
	} else {
		// Otherwise, build quaternion the standard way.
		t = Cross(a, b);
	}

	return Normalize(quat(real_part, t));
}

GNM_INLINE float Roll(const quat& q) {
	const float y = 2.0f * (q.x * q.y + q.w * q.z);
	const float x = q.w * q.w + q.x * q.x - q.y * q.y - q.z * q.z;

	if (All(Equal(vec2(x, y), VEC2_ZERO, GNM_EPSILON))) 
		return 0.0f;

	return Atan(y, x);
}

GNM_INLINE float Pitch(const quat& q) {
	const float y = 2.0f * (q.y * q.z + q.w * q.x);
	const float x = q.w * q.w - q.x * q.x - q.y * q.y + q.z * q.z;

	if (All(Equal(vec2(x, y), VEC2_ZERO, GNM_EPSILON)))
		return 2.0f * Atan(q.x, q.w);

	return Atan(y, x);
}

GNM_INLINE float Yaw(const quat& q) {
	return Asin(Clamp(-2.0f * (q.x * q.z - q.w * q.y), -1.0f, 1.0f));
}

GNM_INLINE vec3 EulerAngles(const quat& q) {
	return vec3(Pitch(q), Yaw(q), Roll(q));
}

GNM_INLINE quat QuatAxisAngle(const vec3& Axis, const float Angle) {
	return quat(Cos(Angle * 0.5f), Axis * (Sin(Angle) * 0.5f));
}

GNM_INLINE quat QuatEulerAngles(const vec3& angles) {
	vec3 c = Cos(angles * 0.5f);
	vec3 s = Sin(angles * 0.5f);

	return quat(c.x * c.y * c.z + s.x * s.y * s.z,
							s.x * c.y * c.z - c.x * s.y * s.z,
							c.x * s.y * c.z + s.x * c.y * s.z,
							c.x * c.y * s.z - s.x * s.y * c.z);
}

GNM_NAMESPACE_END
