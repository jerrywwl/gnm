GNM_NAMESPACE_BEGIN

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Pow(const float x, const float y) {
  return std::pow(x, y);
}

GNM_INLINE vec2 Pow(const vec2& x, const vec2& y) {
  return vec2(std::pow(x.x, y.x), std::pow(x.y, y.y));
}

GNM_INLINE vec3 Pow(const vec3& x, const vec3& y) {
  return vec3(std::pow(x.x, y.x), std::pow(x.y, y.y), std::pow(x.z, y.z));
}

GNM_INLINE vec4 Pow(const vec4& x, const vec4& y) {
#if (GNM_SIMD)
  return vec4(_mm_pow_ps(x._v, y._v));
#else
  return vec4(std::pow(x.x, y.x), std::pow(x.y, y.y), std::pow(x.z, y.z), std::pow(x.w, y.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Exp(const float x) {
  return std::exp(x);
}

GNM_INLINE vec2 Exp(const vec2& x) {
  return vec2(std::exp(x.x), std::exp(x.y));
}

GNM_INLINE vec3 Exp(const vec3& x) {
  return vec3(std::exp(x.x), std::exp(x.y), std::exp(x.z));
}

GNM_INLINE vec4 Exp(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_exp_ps(x._v));
#else
  return vec4(std::exp(x.x), std::exp(x.y), std::exp(x.z), std::exp(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Log(const float x) {
  return std::log(x);
}

GNM_INLINE vec2 Log(const vec2& x) {
  return vec2(std::log(x.x), std::log(x.y));
}

GNM_INLINE vec3 Log(const vec3& x) {
  return vec3(std::log(x.x), std::log(x.y), std::log(x.z));
}

GNM_INLINE vec4 Log(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_log_ps(x._v));
#else
  return vec4(std::log(x.x), std::log(x.y), std::log(x.z), std::log(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Exp2(const float x) {
  return std::exp2(x);
}

GNM_INLINE vec2 Exp2(const vec2& x) {
  return vec2(std::exp2(x.x), std::exp2(x.y));
}

GNM_INLINE vec3 Exp2(const vec3& x) {
  return vec3(std::exp2(x.x), std::exp2(x.y), std::exp2(x.z));
}

GNM_INLINE vec4 Exp2(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_exp2_ps(x._v));
#else
  return vec4(std::exp2(x.x), std::exp2(x.y), std::exp2(x.z), std::exp2(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Log2(const float x) {
  return std::log2(x);
}

GNM_INLINE vec2 Log2(const vec2& x) {
  return vec2(std::log2(x.x), std::log2(x.y));
}

GNM_INLINE vec3 Log2(const vec3& x) {
  return vec3(std::log2(x.x), std::log2(x.y), std::log2(x.z));
}

GNM_INLINE vec4 Log2(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_log2_ps(x._v));
#else
  return vec4(std::log2(x.x), std::log2(x.y), std::log2(x.z), std::log2(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Sqrt(const float x) {
  return std::sqrt(x);
}

GNM_INLINE vec2 Sqrt(const vec2& x) {
  return vec2(std::sqrt(x.x), std::sqrt(x.y));
}

GNM_INLINE vec3 Sqrt(const vec3& x) {
  return vec3(std::sqrt(x.x), std::sqrt(x.y), std::sqrt(x.z));
}

GNM_INLINE vec4 Sqrt(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_sqrt_ps(x._v));
#else
  return vec4(std::sqrt(x.x), std::sqrt(x.y), std::sqrt(x.z), std::sqrt(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Inversesqrt(const float x) {
  return 1.0f / std::sqrt(x);
}

GNM_INLINE vec2 Inversesqrt(const vec2& x) {
  return vec2(1.0f / std::sqrt(x.x), 1.0f / std::sqrt(x.y));
}

GNM_INLINE vec3 Inversesqrt(const vec3& x) {
  return vec3(1.0f / std::sqrt(x.x), 1.0f / std::sqrt(x.y), 1.0f / std::sqrt(x.z));
}

GNM_INLINE vec4 Inversesqrt(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_rsqrt_ps(x._v));
#else
  return vec4(1.0f / std::sqrt(x.x), 1.0f / std::sqrt(x.y), 1.0f / std::sqrt(x.z), 1.0f / std::sqrt(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
