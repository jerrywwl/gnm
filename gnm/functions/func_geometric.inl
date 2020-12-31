GNM_NAMESPACE_BEGIN

GNM_INLINE float length(const float x) {
  return x;
}

GNM_INLINE float length(const vec2& x) {
  return std::sqrt(x.x * x.x + x.y * x.y);
}

GNM_INLINE float length(const vec3& x) {
  return std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z);
}

GNM_INLINE float length(const vec4& x) {
  return std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float distance(const float p0, const float p1) {
  return GNM_ABS_F(p0 - p1);
}

GNM_INLINE float distance(const vec2& p0, const vec2& p1) {
  float d0 = p0.x - p1.x;
  float d1 = p0.y - p1.y;
  return std::sqrt(d0 * d0 + d1 * d1);
}

GNM_INLINE float distance(const vec3& p0, const vec3& p1) {
  float d0 = p0.x - p1.x;
  float d1 = p0.y - p1.y;
  float d2 = p0.z - p1.z;
  return std::sqrt(d0 * d0 + d1 * d1 + d2 * d2);
}

GNM_INLINE float distance(const vec4& p0, const vec4& p1) {
  float d0 = p0.x - p1.x;
  float d1 = p0.y - p1.y;
  float d2 = p0.z - p1.z;
  float d3 = p0.w - p1.w;
  return std::sqrt(d0 * d0 + d1 * d1 + d2 * d2 + d3 * d3);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float dot(const float x, const float y) {
  return x * y;
}

GNM_INLINE float dot(const vec2& x, const vec2& y) {
  return x.x * y.x + x.y * y.y;
}

GNM_INLINE float dot(const vec3& x, const vec3& y) {
  return x.x * y.x + x.y * y.y + x.z * y.z;
}

GNM_INLINE float dot(const vec4& x, const vec4& y) {
  return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w;
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE vec3 cross(const vec3& x, const vec3& y) {
  return vec3(x.y * y.z - y.y * x.z,
              x.z * y.x - y.z * x.x,
              x.x * y.y - y.x * x.y);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float normalize(const float x) {
  return x;
}

GNM_INLINE vec2 normalize(const vec2& x) {
  float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y);
  return vec2(x.x * f, x.y * f);
}

GNM_INLINE vec3 normalize(const vec3& x) {
  float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z);
  return vec3(x.x * f, x.y * f, x.z * f);
}

GNM_INLINE vec4 normalize(const vec4& x) {
  float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
  return vec4(x.x * f, x.y * f, x.z * f, x.w * f);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float faceforward(const float N, const float I, const float Nref) {
  return (Nref * I < 0.0f) ? N : -N;
}

GNM_INLINE vec2 faceforward(const vec2& N, const vec2& I, const vec2& Nref) {
  return (Nref.x * I.x + Nref.y * I.y < 0.0f) ? N : -N;
}

GNM_INLINE vec3 faceforward(const vec3& N, const vec3& I, const vec3& Nref) {
  return (Nref.x * I.x + Nref.y * I.y + Nref.z * I.z < 0.0f) ? N : -N;
}

GNM_INLINE vec4 faceforward(const vec4& N, const vec4& I, const vec4& Nref) {
  return (Nref.x* I.x + Nref.y * I.y + Nref.z * I.z + Nref.w * I.w < 0.0f)? N : -N;
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float reflect(const float I, const float N) {
  return (I - N * N * I * 2.0f);
}

GNM_INLINE vec2 reflect(const vec2& I, const vec2& N) {
  const float d = N.x * I.x + N.y * I.y;
  return vec2(I.x - N.x * d * 2.0f, I.y - N.y * d * 2.0f);
}

GNM_INLINE vec3 reflect(const vec3& I, const vec3& N) {
  const float d = N.x * I.x + N.y * I.y + N.z * I.z;
  return vec3(I.x - N.x * d * 2.0f, I.y - N.y * d * 2.0f, I.z - N.z * d * 2.0f);
}

GNM_INLINE vec4 reflect(const vec4& I, const vec4& N) {
  const float d = N.x * I.x + N.y * I.y + N.z * I.z + N.w * I.w;
  return vec4(I.x - N.x * d * 2.0f, I.y - N.y * d * 2.0f, I.z - N.z * d * 2.0f, I.w - N.w * d * 2.0f);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float refract(const float I, const float N, const float eta) {
  const float d = N * I;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? 0.0f : eta * I - (eta * d + std::sqrt(k)) * N);
}

GNM_INLINE vec2 refract(const vec2& I, const vec2& N, const float eta) {
  const float d = N.x * I.x + N.y * I.y;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? VEC2_ZERO : eta * I - (eta * d + std::sqrt(k)) * N);
}

GNM_INLINE vec3 refract(const vec3& I, const vec3& N, const float eta) {
  const float d = N.x * I.x + N.y * I.y + N.z * I.z;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? VEC3_ZERO : eta * I - (eta * d + std::sqrt(k)) * N);
}

GNM_INLINE vec4 refract(const vec4& I, const vec4& N, const float eta) {
  const float d = N.x * I.x + N.y * I.y + N.z * I.z + N.w * I.w;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? VEC4_ZERO : eta * I - (eta * d + std::sqrt(k)) * N);
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
