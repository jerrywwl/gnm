GNM_NAMESPACE_BEGIN

GNM_INLINE float dot(const quat& x, const quat& y) {
  return (x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w);
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
	const float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(x.x * f, x.y * f, x.z * f, x.w * f);
}

GNM_INLINE quat conjugate(const quat& x) {
	return quat(-x.x, -x.y, -x.z, x.w);
}

GNM_INLINE quat inverse(const quat& x) {
	const float inv_norm = 1.0f / (x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
	return quat(-x.x * inv_norm, -x.y * inv_norm, -x.z * inv_norm, x.w * inv_norm);
}

GNM_NAMESPACE_END
