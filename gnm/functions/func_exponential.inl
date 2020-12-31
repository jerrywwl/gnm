GNM_NAMESPACE_BEGIN

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float pow(const float x, const float y) {
  return std::pow(x, y);
}

GNM_INLINE vec2 pow(const vec2& x, const vec2& y) {
  return vec2(std::pow(x.x, y.x), std::pow(x.y, y.y));
}

GNM_INLINE vec3 pow(const vec3& x, const vec3& y) {
  return vec3(std::pow(x.x, y.x), std::pow(x.y, y.y), std::pow(x.z, y.z));
}

GNM_INLINE vec4 pow(const vec4& x, const vec4& y) {
  return vec4(std::pow(x.x, y.x), std::pow(x.y, y.y), std::pow(x.z, y.z), std::pow(x.w, y.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float exp(const float x) {
  return std::exp(x);
}

GNM_INLINE vec2 exp(const vec2& x) {
  return vec2(std::exp(x.x), std::exp(x.y));
}

GNM_INLINE vec3 exp(const vec3& x) {
  return vec3(std::exp(x.x), std::exp(x.y), std::exp(x.z));
}

GNM_INLINE vec4 exp(const vec4& x) {
  return vec4(std::exp(x.x), std::exp(x.y), std::exp(x.z), std::exp(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float log(const float x) {
  return std::log(x);
}

GNM_INLINE vec2 log(const vec2& x) {
  return vec2(std::log(x.x), std::log(x.y));
}

GNM_INLINE vec3 log(const vec3& x) {
  return vec3(std::log(x.x), std::log(x.y), std::log(x.z));
}

GNM_INLINE vec4 log(const vec4& x) {
  return vec4(std::log(x.x), std::log(x.y), std::log(x.z), std::log(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float exp2(const float x) {
  return std::exp2(x);
}

GNM_INLINE vec2 exp2(const vec2& x) {
  return vec2(std::exp2(x.x), std::exp2(x.y));
}

GNM_INLINE vec3 exp2(const vec3& x) {
  return vec3(std::exp2(x.x), std::exp2(x.y), std::exp2(x.z));
}

GNM_INLINE vec4 exp2(const vec4& x) {
  return vec4(std::exp2(x.x), std::exp2(x.y), std::exp2(x.z), std::exp2(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float log2(const float x) {
  return std::log2(x);
}

GNM_INLINE vec2 log2(const vec2& x) {
  return vec2(std::log2(x.x), std::log2(x.y));
}

GNM_INLINE vec3 log2(const vec3& x) {
  return vec3(std::log2(x.x), std::log2(x.y), std::log2(x.z));
}

GNM_INLINE vec4 log2(const vec4& x) {
  return vec4(std::log2(x.x), std::log2(x.y), std::log2(x.z), std::log2(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float sqrt(const float x) {
  return std::sqrt(x);
}

GNM_INLINE vec2 sqrt(const vec2& x) {
  return vec2(std::sqrt(x.x), std::sqrt(x.y));
}

GNM_INLINE vec3 sqrt(const vec3& x) {
  return vec3(std::sqrt(x.x), std::sqrt(x.y), std::sqrt(x.z));
}

GNM_INLINE vec4 sqrt(const vec4& x) {
  return vec4(std::sqrt(x.x), std::sqrt(x.y), std::sqrt(x.z), std::sqrt(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float inversesqrt(const float x) {
  return 1.0f / std::sqrt(x);
}

GNM_INLINE vec2 inversesqrt(const vec2& x) {
  return vec2(1.0f / std::sqrt(x.x), 1.0f / std::sqrt(x.y));
}

GNM_INLINE vec3 inversesqrt(const vec3& x) {
  return vec3(1.0f / std::sqrt(x.x), 1.0f / std::sqrt(x.y), 1.0f / std::sqrt(x.z));
}

GNM_INLINE vec4 inversesqrt(const vec4& x) {
  return vec4(1.0f / std::sqrt(x.x), 1.0f / std::sqrt(x.y), 1.0f / std::sqrt(x.z), 1.0f / std::sqrt(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
