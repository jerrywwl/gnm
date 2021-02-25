GNM_NAMESPACE_BEGIN

GNM_INLINE float dot(const quat& x, const quat& y) {
#if (GNM_SIMD)
	return _mm_cvtss_f32(_mm_dp_ps(x._v, y._v, 0xff));
#else
  return (x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w);
#endif
}

GNM_INLINE quat cross(const quat& x, const quat& y) {
  return quat(x.w * y.w - x.x * y.x - x.y * y.y - x.z * y.z,
							x.w * y.x + x.x * y.w + x.y * y.z - x.z * y.y,
							x.w * y.y + x.y * y.w + x.z * y.x - x.x * y.z,
							x.w * y.z + x.z * y.w + x.x * y.y - x.y * y.x);
}

GNM_INLINE float length(const quat& x) {
	return std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
}

GNM_INLINE quat normalize(const quat& x) {
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(x._v, _mm_rsqrt_ps(_mm_dp_ps(x._v, x._v, 0xFF))));
#else
	const float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(x.x * f, x.y * f, x.z * f, x.w * f);
#endif
}

GNM_INLINE quat conjugate(const quat& x) {
#if (GNM_SIMD)
	return quat(_mm_set_ps(x.w, -x.z, -x.y, -x.x));
#else
	return quat(-x.x, -x.y, -x.z, x.w);
#endif
}

GNM_INLINE quat inverse(const quat& x) {
#if (GNM_SIMD)
	return quat(_mm_div_ps(_mm_set_ps(x.w, -x.z, -x.y, -x.x), _mm_dp_ps(x._v, x._v, 0xFF)));
#else
	const float f = 1.0f / (x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(-x.x * f, -x.y * f, -x.z * f, x.w * f);
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

GNM_INLINE quat axis_angle(const vec3& axis, const float angle) {
	return quat(cos(angle * 0.5f), axis * (sin(angle) * 0.5f));
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
	return x * quat(tmp.x * Sin, tmp.y * Sin, tmp.z * Sin, cos(angle * 0.5f));
}

GNM_NAMESPACE_END
