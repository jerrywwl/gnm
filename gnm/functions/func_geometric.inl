GNM_NAMESPACE_BEGIN

GNM_INLINE float Length(const float x) {
  return x;
}

GNM_INLINE float Length(const vec2& x) {
  return std::sqrt(x.x * x.x + x.y * x.y);
}

GNM_INLINE float Length(const vec3& x) {
#if (GNM_SIMD)
  __m128 v = _mm_set_ps(0.0f, x.z, x.y, x.x);
  return _mm_cvtss_f32(_mm_sqrt_ps(_mm_dp_ps(v, v, 0xFF)));
#else
  return std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z);
#endif
}

GNM_INLINE float Length(const vec4& x) {
#if (GNM_SIMD)
  return _mm_cvtss_f32(_mm_sqrt_ps(_mm_dp_ps(x._v, x._v, 0xFF)));
#else
  return std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Distance(const float p0, const float p1) {
  return GNM_ABS_F(p0 - p1);
}

GNM_INLINE float Distance(const vec2& p0, const vec2& p1) {
  float d0 = p0.x - p1.x;
  float d1 = p0.y - p1.y;
  return std::sqrt(d0 * d0 + d1 * d1);
}

GNM_INLINE float Distance(const vec3& p0, const vec3& p1) {
#if (GNM_SIMD)
  __m128 v = _mm_sub_ps(_mm_set_ps(0.0f, p0.z, p0.y, p0.x), _mm_set_ps(0.0f, p1.z, p1.y, p1.x));
  return _mm_cvtss_f32(_mm_sqrt_ps(_mm_dp_ps(v, v, 0xFF)));
#else
  float d0 = p0.x - p1.x;
  float d1 = p0.y - p1.y;
  float d2 = p0.z - p1.z;
  return std::sqrt(d0 * d0 + d1 * d1 + d2 * d2);
#endif
}

GNM_INLINE float Distance(const vec4& p0, const vec4& p1) {
#if (GNM_SIMD)
  __m128 v = _mm_sub_ps(p0._v, p1._v);
  return _mm_cvtss_f32(_mm_sqrt_ps(_mm_dp_ps(v, v, 0xFF)));
#else
  float d0 = p0.x - p1.x;
  float d1 = p0.y - p1.y;
  float d2 = p0.z - p1.z;
  float d3 = p0.w - p1.w;
  return std::sqrt(d0 * d0 + d1 * d1 + d2 * d2 + d3 * d3);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Dot(const float x, const float y) {
  return x * y;
}

GNM_INLINE float Dot(const vec2& x, const vec2& y) {
  return x.x * y.x + x.y * y.y;
}

GNM_INLINE float Dot(const vec3& x, const vec3& y) {
  return x.x * y.x + x.y * y.y + x.z * y.z;
}

GNM_INLINE float Dot(const vec4& x, const vec4& y) {
#if (GNM_SIMD)
  return _mm_cvtss_f32(_mm_dp_ps(x._v, y._v, 0xff));
#else
  return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w;
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE vec3 Cross(const vec3& x, const vec3& y) {
  return vec3(x.y * y.z - y.y * x.z,
              x.z * y.x - y.z * x.x,
              x.x * y.y - y.x * x.y);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Normalize(const float x) {
  return x;
}

GNM_INLINE vec2 Normalize(const vec2& x) {
  float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y);
  return vec2(x.x * f, x.y * f);
}

GNM_INLINE vec3 Normalize(const vec3& x) {
  float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z);
  return vec3(x.x * f, x.y * f, x.z * f);
}

GNM_INLINE vec4 Normalize(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_mul_ps(x._v, _mm_rsqrt_ps(_mm_dp_ps(x._v, x._v, 0xFF))));
#else
  float f = 1.0f / std::sqrt(x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w);
  return vec4(x.x * f, x.y * f, x.z * f, x.w * f);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Faceforward(const float N, const float I, const float Nref) {
  return (Nref * I < 0.0f) ? N : -N;
}

GNM_INLINE vec2 Faceforward(const vec2& N, const vec2& I, const vec2& Nref) {
  return (Nref.x * I.x + Nref.y * I.y < 0.0f) ? N : -N;
}

GNM_INLINE vec3 Faceforward(const vec3& N, const vec3& I, const vec3& Nref) {
  return (Nref.x * I.x + Nref.y * I.y + Nref.z * I.z < 0.0f) ? N : -N;
}

GNM_INLINE vec4 Faceforward(const vec4& N, const vec4& I, const vec4& Nref) {
#if (GNM_SIMD)
  __m128 dot0 = _mm_dp_ps(Nref._v, I._v, 0xFF);
  __m128 sgn0 = _mm_or_ps(_mm_and_ps(_mm_cmplt_ps(dot0, VEC4_ZERO._v), VEC4_NEG_ONE._v),
                          _mm_and_ps(_mm_cmpgt_ps(dot0, VEC4_ZERO._v), VEC4_ONE._v));

  return vec4(_mm_mul_ps(N._v, _mm_mul_ps(sgn0, VEC4_NEG_ONE._v)));
#else
  return (Nref.x* I.x + Nref.y * I.y + Nref.z * I.z + Nref.w * I.w < 0.0f)? N : -N;
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Reflect(const float I, const float N) {
  return (I - N * N * I * 2.0f);
}

GNM_INLINE vec2 Reflect(const vec2& I, const vec2& N) {
  const float d = N.x * I.x + N.y * I.y;
  return vec2(I.x - N.x * d * 2.0f, I.y - N.y * d * 2.0f);
}

GNM_INLINE vec3 Reflect(const vec3& I, const vec3& N) {
  const float d = N.x * I.x + N.y * I.y + N.z * I.z;
  return vec3(I.x - N.x * d * 2.0f, I.y - N.y * d * 2.0f, I.z - N.z * d * 2.0f);
}

GNM_INLINE vec4 Reflect(const vec4& I, const vec4& N) {
#if (GNM_SIMD)
  __m128 mul0 = _mm_mul_ps(N._v, _mm_dp_ps(N._v, I._v, 0xFF));
  return vec4(_mm_sub_ps(I._v, _mm_mul_ps(mul0, _mm_set1_ps(2.0f))));
#else
  const float d = N.x * I.x + N.y * I.y + N.z * I.z + N.w * I.w;
  return vec4(I.x - N.x * d * 2.0f, I.y - N.y * d * 2.0f, I.z - N.z * d * 2.0f, I.w - N.w * d * 2.0f);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Refract(const float I, const float N, const float eta) {
  const float d = N * I;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? 0.0f : eta * I - (eta * d + std::sqrt(k)) * N);
}

GNM_INLINE vec2 Refract(const vec2& I, const vec2& N, const float eta) {
  const float d = N.x * I.x + N.y * I.y;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? VEC2_ZERO : eta * I - (eta * d + std::sqrt(k)) * N);
}

GNM_INLINE vec3 Refract(const vec3& I, const vec3& N, const float eta) {
  const float d = N.x * I.x + N.y * I.y + N.z * I.z;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? VEC3_ZERO : eta * I - (eta * d + std::sqrt(k)) * N);
}

GNM_INLINE vec4 Refract(const vec4& I, const vec4& N, const float eta) {
#if (GNM_SIMD)
  __m128 dot0 = _mm_dp_ps(N._v, I._v, 0xFF);
  __m128 eta0 = _mm_set_ps1(eta);
  __m128 sub0 = _mm_sub_ps(VEC4_ONE._v, _mm_mul_ps(eta0, eta0));
  __m128 sub1 = _mm_sub_ps(VEC4_ONE._v, _mm_mul_ps(dot0, dot0));

  __m128 mul2 = _mm_mul_ps(sub0, sub1);

  if (_mm_movemask_ps(_mm_cmplt_ss(mul2, VEC4_ZERO._v)) == 0)
    return VEC4_ZERO._v;

  __m128 mad0 = _mm_fmadd_ps(eta0, dot0, _mm_sqrt_ps(mul2));
  return vec4(_mm_sub_ps(_mm_mul_ps(eta0, I._v), _mm_mul_ps(mad0, N._v)));
#else
  const float d = N.x * I.x + N.y * I.y + N.z * I.z + N.w * I.w;
  const float k = 1.0f - eta * eta * (1.0f - d * d);
  return (k < 0.0f ? VEC4_ZERO : eta * I - (eta * d + std::sqrt(k)) * N);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
