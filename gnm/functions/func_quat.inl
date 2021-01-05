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

GNM_NAMESPACE_END
