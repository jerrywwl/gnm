GNM_NAMESPACE_BEGIN

#define GNM_ABS_T(T, x) (x > (T)0 ? x : -x)
#define GNM_ABS_F(x) (x > 0.0f ? x : -x)
#define GNM_ABS_I(x) (x > 0 ? x : -x)
#define GNM_SIGN_T(T, x) (x < (T)0 ? (T)-1 : (x > (T)0 ? (T)1 : (T)0))
#define GNM_SIGN_F(x) (x < 0.0f ? -1.0f : (x > 0.0f ? 1.0f : 0.0f))
#define GNM_SIGN_I(x) (x < 0 ? -1 : (x > 0 ? 1 : 0))
#define GNM_FRACT_F(x) (x - std::floor(x))
#define GNM_MOD_F(x, y) (x - y * std::floor(x / y))
#define GNM_MIN(x, y) ((y < x) ? y : x)
#define GNM_MAX(x, y) ((y > x) ? y : x)
#define GNM_CLAMP(x, minVal, maxVal) GNM_MIN(GNM_MAX(x, minVal), maxVal)
#define GNM_MIX_F(x, y, a) (x * (1 - a) + y * a)
#define GNM_MIX_B(x, y, a) (a? y : x)
#define GNM_STEP_F(edge, x) ((x < edge)? 0.0f : 1.0f)

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T Abs(const T x) {
  return GNM_ABS_T(T, x);
}

GNM_INLINE vec2 Abs(const vec2& x) {
  return vec2(GNM_ABS_F(x.x), GNM_ABS_F(x.y));
}

GNM_INLINE vec3 Abs(const vec3& x) {
  return vec3(GNM_ABS_F(x.x), GNM_ABS_F(x.y), GNM_ABS_F(x.z));
}

GNM_INLINE vec4 Abs(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_and_ps(x._v, _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))));
#else
  return vec4(GNM_ABS_F(x.x), GNM_ABS_F(x.y), GNM_ABS_F(x.z), GNM_ABS_F(x.w));
#endif
}

GNM_INLINE ivec2 Abs(const ivec2& x) {
  return ivec2(GNM_ABS_I(x.x), GNM_ABS_I(x.y));
}

GNM_INLINE ivec3 Abs(const ivec3& x) {
  return ivec3(GNM_ABS_I(x.x), GNM_ABS_I(x.y), GNM_ABS_I(x.z));
}

GNM_INLINE ivec4 Abs(const ivec4& x) {
#if (GNM_SIMD)
  return ivec4(_mm_sign_epi32(x._vi, x._vi));
#else
  return ivec4(GNM_ABS_I(x.x), GNM_ABS_I(x.y), GNM_ABS_I(x.z), GNM_ABS_I(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T Sign(const T x) {
  return GNM_SIGN_T(T, x);
}

GNM_INLINE vec2 Sign(const vec2& x) {
  return vec2(GNM_SIGN_F(x.x), GNM_SIGN_F(x.y));
}

GNM_INLINE vec3 Sign(const vec3& x) {
  return vec3(GNM_SIGN_F(x.x), GNM_SIGN_F(x.y), GNM_SIGN_F(x.z));
}

GNM_INLINE vec4 Sign(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_or_ps(_mm_and_ps(_mm_cmplt_ps(x._v, VEC4_ZERO._v), VEC4_NEG_ONE._v),
                        _mm_and_ps(_mm_cmpgt_ps(x._v, VEC4_ZERO._v), VEC4_ONE._v)));
#else
  return vec4(GNM_SIGN_F(x.x), GNM_SIGN_F(x.y), GNM_SIGN_F(x.z), GNM_SIGN_F(x.w));
#endif
}

GNM_INLINE ivec2 Sign(const ivec2& x) {
  return ivec2(GNM_SIGN_I(x.x), GNM_SIGN_I(x.y));
}

GNM_INLINE ivec3 Sign(const ivec3& x) {
  return ivec3(GNM_SIGN_I(x.x), GNM_SIGN_I(x.y), GNM_SIGN_I(x.z));
}

GNM_INLINE ivec4 Sign(const ivec4& x) {
#if (GNM_SIMD)
  return ivec4(_mm_or_si128(_mm_and_si128(_mm_cmplt_epi32(x._vi, IVEC4_ZERO._vi), IVEC4_NEG_ONE._vi),
                            _mm_and_si128(_mm_cmpgt_epi32(x._vi, IVEC4_ZERO._vi), IVEC4_ONE._vi)));
#else
  return ivec4(GNM_SIGN_I(x.x), GNM_SIGN_I(x.y), GNM_SIGN_I(x.z), GNM_SIGN_I(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Floor(const float x) {
  return std::floor(x);
}

GNM_INLINE vec2 Floor(const vec2& x) {
  return vec2(std::floor(x.x), std::floor(x.y));
}

GNM_INLINE vec3 Floor(const vec3& x) {
  return vec3(std::floor(x.x), std::floor(x.y), std::floor(x.z));
}

GNM_INLINE vec4 Floor(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_floor_ps(x._v));
#else
  return vec4(std::floor(x.x), std::floor(x.y), std::floor(x.z), std::floor(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Trunc(const float x) {
  return std::trunc(x);
}

GNM_INLINE vec2 Trunc(const vec2& x) {
  return vec2(std::trunc(x.x), std::trunc(x.y));
}

GNM_INLINE vec3 Trunc(const vec3& x) {
  return vec3(std::trunc(x.x), std::trunc(x.y), std::trunc(x.z));
}

GNM_INLINE vec4 Trunc(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_trunc_ps(x._v));
#else
  return vec4(std::trunc(x.x), std::trunc(x.y), std::trunc(x.z), std::trunc(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Round(const float x) {
  return std::round(x);
}

GNM_INLINE vec2 Round(const vec2& x) {
  return vec2(std::round(x.x), std::round(x.y));
}

GNM_INLINE vec3 Round(const vec3& x) {
  return vec3(std::round(x.x), std::round(x.y), std::round(x.z));
}

GNM_INLINE vec4 Round(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_round_ps(x._v, _MM_FROUND_TO_NEAREST_INT));
#else
  return vec4(std::round(x.x), std::round(x.y), std::round(x.z), std::round(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float RoundEven(const float x) {

  int i = static_cast<int>(x);
  float int_part = static_cast<float>(i);
  float fract_part = x - std::floor(x);

  if (fract_part > 0.5f || fract_part < 0.5f) {
    return std::round(x);
  } else if ((i % 2) == 0) {
    return int_part;
  } else if (x <= 0.0f) {
    return int_part - 1.0f;
  } else {
    return int_part + 1.0f;
  }
}

GNM_INLINE vec2 RoundEven(const vec2& x) {
  return vec2(RoundEven(x.x), RoundEven(x.y));
}

GNM_INLINE vec3 RoundEven(const vec3& x) {
  return vec3(RoundEven(x.x), RoundEven(x.y), RoundEven(x.z));
}

GNM_INLINE vec4 RoundEven(const vec4& x) {
#if (GNM_SIMD)
  __m128 sgn0 = _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)));
  __m128 or0 = _mm_or_ps(_mm_and_ps(sgn0, x._v), _mm_set_ps1(8388608.0f));
  return vec4(_mm_sub_ps(_mm_add_ps(x._v, or0), or0));
#else
  return vec4(RoundEven(x.x), RoundEven(x.y), RoundEven(x.z), RoundEven(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Ceil(const float x) {
  return std::ceil(x);
}

GNM_INLINE vec2 Ceil(const vec2& x) {
  return vec2(std::ceil(x.x), std::ceil(x.y));
}

GNM_INLINE vec3 Ceil(const vec3& x) {
  return vec3(std::ceil(x.x), std::ceil(x.y), std::ceil(x.z));
}

GNM_INLINE vec4 Ceil(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_ceil_ps(x._v));
#else
  return vec4(std::ceil(x.x), std::ceil(x.y), std::ceil(x.z), std::ceil(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Fract(const float x) {
  return GNM_FRACT_F(x);
}

GNM_INLINE vec2 Fract(const vec2& x) {
  return vec2(GNM_FRACT_F(x.x), GNM_FRACT_F(x.y));
}

GNM_INLINE vec3 Fract(const vec3& x) {
  return vec3(GNM_FRACT_F(x.x), GNM_FRACT_F(x.y), GNM_FRACT_F(x.z));
}

GNM_INLINE vec4 Fract(const vec4& x) {
  return vec4(GNM_FRACT_F(x.x), GNM_FRACT_F(x.y), GNM_FRACT_F(x.z), GNM_FRACT_F(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Mod(const float x, const float y) {
  return GNM_MOD_F(x, y);
}

GNM_INLINE vec2 Mod(const vec2& x, const float y) {
  return vec2(GNM_MOD_F(x.x, y), GNM_MOD_F(x.y, y));
}

GNM_INLINE vec3 Mod(const vec3& x, const float y) {
  return vec3(GNM_MOD_F(x.x, y), GNM_MOD_F(x.y, y), GNM_MOD_F(x.z, y));
}

GNM_INLINE vec4 Mod(const vec4& x, const float y) {
  return vec4(GNM_MOD_F(x.x, y), GNM_MOD_F(x.y, y), GNM_MOD_F(x.z, y), GNM_MOD_F(x.w, y));
}

GNM_INLINE vec2 Mod(const vec2& x, const vec2& y) {
  return vec2(GNM_MOD_F(x.x, y.x), GNM_MOD_F(x.y, y.y));
}

GNM_INLINE vec3 Mod(const vec3& x, const vec3& y) {
  return vec3(GNM_MOD_F(x.x, y.x), GNM_MOD_F(x.y, y.y), GNM_MOD_F(x.z, y.z));
}

GNM_INLINE vec4 Mod(const vec4& x, const vec4& y) {
  return vec4(GNM_MOD_F(x.x, y.x), GNM_MOD_F(x.y, y.y), GNM_MOD_F(x.z, y.z), GNM_MOD_F(x.w, y.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Modf(const float x, float& i) {
  return std::modf(x, &i);
}

GNM_INLINE vec2 Modf(const vec2& x, vec2& i) {
  return vec2(std::modf(x.x, &i.x), std::modf(x.y, &i.y));
}

GNM_INLINE vec3 Modf(const vec3& x, vec3& i) {
  return vec3(std::modf(x.x, &i.x), std::modf(x.y, &i.y), std::modf(x.z, &i.z));
}

GNM_INLINE vec4 Modf(const vec4& x, vec4& i) {
  return vec4(std::modf(x.x, &i.x), std::modf(x.y, &i.y), std::modf(x.z, &i.z), std::modf(x.w, &i.w));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T Min(const T x, const T y) {
  return GNM_MIN(x, y);
}

GNM_INLINE vec2 Min(const vec2& x, const vec2& y) {
  return vec2(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y));
}

GNM_INLINE vec2 Min(const vec2& x, const float y) {
  return vec2(GNM_MIN(x.x, y), GNM_MIN(x.y, y));
}

GNM_INLINE vec3 Min(const vec3& x, const vec3& y) {
  return vec3(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z));
}

GNM_INLINE vec3 Min(const vec3& x, const float y) {
  return vec3(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y));
}

GNM_INLINE vec4 Min(const vec4& x, const vec4& y) {
#if (GNM_SIMD)
  return vec4(_mm_min_ps(x._v, y._v));
#else
  return vec4(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z), GNM_MIN(x.w, y.w));
#endif
}

GNM_INLINE vec4 Min(const vec4& x, const float y) {
#if (GNM_SIMD)
  return vec4(_mm_min_ps(x._v, _mm_set_ps1(y)));
#else
  return vec4(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y), GNM_MIN(x.w, y));
#endif
}

GNM_INLINE ivec2 Min(const ivec2& x, const ivec2& y) {
  return ivec2(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y));
}

GNM_INLINE ivec2 Min(const ivec2& x, const int y) {
  return ivec2(GNM_MIN(x.x, y), GNM_MIN(x.y, y));
}

GNM_INLINE ivec3 Min(const ivec3& x, const ivec3& y) {
  return ivec3(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z));
}

GNM_INLINE ivec3 Min(const ivec3& x, const int y) {
  return ivec3(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y));
}

GNM_INLINE ivec4 Min(const ivec4& x, const ivec4& y) {
  return ivec4(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z), GNM_MIN(x.w, y.w));
}

GNM_INLINE ivec4 Min(const ivec4& x, const int y) {
  return ivec4(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y), GNM_MIN(x.w, y));
}

GNM_INLINE uvec2 Min(const uvec2& x, const uvec2& y) {
  return uvec2(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y));
}

GNM_INLINE uvec2 Min(const uvec2& x, const uint y) {
  return uvec2(GNM_MIN(x.x, y), GNM_MIN(x.y, y));
}

GNM_INLINE uvec3 Min(const uvec3& x, const uvec3& y) {
  return uvec3(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z));
}

GNM_INLINE uvec3 Min(const uvec3& x, const uint y) {
  return uvec3(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y));
}

GNM_INLINE uvec4 Min(const uvec4& x, const uvec4& y) {
  return uvec4(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z), GNM_MIN(x.w, y.w));
}

GNM_INLINE uvec4 Min(const uvec4& x, const uint y) {
  return uvec4(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y), GNM_MIN(x.w, y));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T Max(const T x, const T y) {
  return GNM_MAX(x, y);
}

GNM_INLINE vec2 Max(const vec2& x, const vec2& y) {
  return vec2(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y));
}

GNM_INLINE vec2 Max(const vec2& x, const float y) {
  return vec2(GNM_MAX(x.x, y), GNM_MAX(x.y, y));
}

GNM_INLINE vec3 Max(const vec3& x, const vec3& y) {
  return vec3(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z));
}

GNM_INLINE vec3 Max(const vec3& x, const float y) {
  return vec3(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y));
}

GNM_INLINE vec4 Max(const vec4& x, const vec4& y) {
#if (GNM_SIMD)
  return vec4(_mm_max_ps(x._v, y._v));
#else
  return vec4(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z), GNM_MAX(x.w, y.w));
#endif
}

GNM_INLINE vec4 Max(const vec4& x, const float y) {
#if (GNM_SIMD)
  return vec4(_mm_max_ps(x._v, _mm_set_ps1(y)));
#else
  return vec4(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y), GNM_MAX(x.w, y));
#endif
}

GNM_INLINE ivec2 Max(const ivec2& x, const ivec2& y) {
  return ivec2(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y));
}

GNM_INLINE ivec2 Max(const ivec2& x, const int y) {
  return ivec2(GNM_MAX(x.x, y), GNM_MAX(x.y, y));
}

GNM_INLINE ivec3 Max(const ivec3& x, const ivec3& y) {
  return ivec3(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z));
}

GNM_INLINE ivec3 Max(const ivec3& x, const int y) {
  return ivec3(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y));
}

GNM_INLINE ivec4 Max(const ivec4& x, const ivec4& y) {
  return ivec4(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z), GNM_MAX(x.w, y.w));
}

GNM_INLINE ivec4 Max(const ivec4& x, const int y) {
  return ivec4(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y), GNM_MAX(x.w, y));
}

GNM_INLINE uvec2 Max(const uvec2& x, const uvec2& y) {
  return uvec2(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y));
}

GNM_INLINE uvec2 Max(const uvec2& x, const uint y) {
  return uvec2(GNM_MAX(x.x, y), GNM_MAX(x.y, y));
}

GNM_INLINE uvec3 Max(const uvec3& x, const uvec3& y) {
  return uvec3(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z));
}

GNM_INLINE uvec3 Max(const uvec3& x, const uint y) {
  return uvec3(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y));
}

GNM_INLINE uvec4 Max(const uvec4& x, const uvec4& y) {
  return uvec4(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z), GNM_MAX(x.w, y.w));
}

GNM_INLINE uvec4 Max(const uvec4& x, const uint y) {
  return uvec4(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y), GNM_MAX(x.w, y));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T Clamp(const T x, const T minVal, const T maxVal){
  return GNM_CLAMP(x, minVal, maxVal);
}

GNM_INLINE vec2 Clamp(const vec2& x, const vec2& minVal, const vec2& maxVal) {
  return vec2(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y));
}

GNM_INLINE vec2 Clamp(const vec2& x, const float minVal, const float maxVal) {
  return vec2(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal));
}

GNM_INLINE vec3 Clamp(const vec3& x, const vec3& minVal, const vec3& maxVal) {
  return vec3(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z));
}

GNM_INLINE vec3 Clamp(const vec3& x, const float minVal, const float maxVal) {
  return vec3(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal));
}

GNM_INLINE vec4 Clamp(const vec4& x, const vec4& minVal, const vec4& maxVal) {
#if (GNM_SIMD)
  return vec4(_mm_min_ps(_mm_max_ps(x._v, minVal._v), maxVal._v));
#else
  return vec4(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z), GNM_CLAMP(x.w, minVal.w, maxVal.w));
#endif
}

GNM_INLINE vec4 Clamp(const vec4& x, const float minVal, const float maxVal) {
#if (GNM_SIMD)
  return vec4(_mm_min_ps(_mm_max_ps(x._v, _mm_set_ps1(minVal)), _mm_set_ps1(maxVal)));
#else
  return vec4(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal), GNM_CLAMP(x.w, minVal, maxVal));
#endif
}

GNM_INLINE ivec2 Clamp(const ivec2& x, const ivec2& minVal, const ivec2& maxVal) {
  return ivec2(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y));
}

GNM_INLINE ivec2 Clamp(const ivec2& x, const int minVal, const int maxVal) {
  return ivec2(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal));
}

GNM_INLINE ivec3 Clamp(const ivec3& x, const ivec3& minVal, const ivec3& maxVal) {
  return ivec3(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z));
}

GNM_INLINE ivec3 Clamp(const ivec3& x, const int minVal, const int maxVal) {
  return ivec3(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal));
}

GNM_INLINE ivec4 Clamp(const ivec4& x, const ivec4& minVal, const ivec4& maxVal) {
  return ivec4(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z), GNM_CLAMP(x.w, minVal.w, maxVal.w));
}

GNM_INLINE ivec4 Clamp(const ivec4& x, const int minVal, const int maxVal) {
  return ivec4(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal), GNM_CLAMP(x.w, minVal, maxVal));
}

GNM_INLINE uvec2 Clamp(const uvec2& x, const uvec2& minVal, const uvec2& maxVal) {
  return uvec2(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y));
}

GNM_INLINE uvec2 Clamp(const uvec2& x, const uint minVal, const uint maxVal) {
  return uvec2(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal));
}

GNM_INLINE uvec3 Clamp(const uvec3& x, const uvec3& minVal, const uvec3& maxVal) {
  return uvec3(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z));
}

GNM_INLINE uvec3 Clamp(const uvec3& x, const uint minVal, const uint maxVal) {
  return uvec3(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal));
}

GNM_INLINE uvec4 Clamp(const uvec4& x, const uvec4& minVal, const uvec4& maxVal) {
  return uvec4(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z), GNM_CLAMP(x.w, minVal.w, maxVal.w));
}

GNM_INLINE uvec4 Clamp(const uvec4& x, const uint minVal, const uint maxVal) {
  return uvec4(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal), GNM_CLAMP(x.w, minVal, maxVal));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Mix(const float x, const float y, const float a) {
  return GNM_MIX_F(x, y, a);
}

GNM_INLINE vec2 Mix(const vec2& x, const vec2& y, const vec2& a) {
  return vec2(GNM_MIX_F(x.x, y.x, a.x), GNM_MIX_F(x.y, y.y, a.y));
}

GNM_INLINE vec3 Mix(const vec3& x, const vec3& y, const vec3& a) {
  return vec3(GNM_MIX_F(x.x, y.x, a.x), GNM_MIX_F(x.y, y.y, a.y), GNM_MIX_F(x.z, y.z, a.z));
}

GNM_INLINE vec4 Mix(const vec4& x, const vec4& y, const vec4& a) {
#if (GNM_SIMD)
  return vec4(_mm_add_ps(x._v, _mm_scalef_ps(_mm_sub_ps(y._v, x._v), a._v)));
#else
  return vec4(GNM_MIX_F(x.x, y.x, a.x), GNM_MIX_F(x.y, y.y, a.y), GNM_MIX_F(x.z, y.z, a.z), GNM_MIX_F(x.w, y.w, a.w));
#endif
}

GNM_INLINE vec2 Mix(const vec2& x, const vec2& y, const float a) {
  return vec2(GNM_MIX_F(x.x, y.x, a), GNM_MIX_F(x.y, y.y, a));
}

GNM_INLINE vec3 Mix(const vec3& x, const vec3& y, const float a) {
  return vec3(GNM_MIX_F(x.x, y.x, a), GNM_MIX_F(x.y, y.y, a), GNM_MIX_F(x.z, y.z, a));
}

GNM_INLINE vec4 Mix(const vec4& x, const vec4& y, const float a) {
#if (GNM_SIMD)
  return vec4(_mm_add_ps(x._v, _mm_scalef_ps(_mm_sub_ps(y._v, x._v), _mm_set_ps1(a))));
#else
  return vec4(GNM_MIX_F(x.x, y.x, a), GNM_MIX_F(x.y, y.y, a), GNM_MIX_F(x.z, y.z, a), GNM_MIX_F(x.w, y.w, a));
#endif
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T Mix(const T x, const T y, const bool a) {
  return GNM_MIX_B(x, y, a);
}

GNM_INLINE vec2 Mix(const vec2& x, const vec2& y, const bvec2& a) {
  return vec2(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y));
}

GNM_INLINE vec3 Mix(const vec3& x, const vec3& y, const bvec3& a) {
  return vec3(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z));
}

GNM_INLINE vec4 Mix(const vec4& x, const vec4& y, const bvec4& a) {
  return vec4(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z), GNM_MIX_B(x.w, y.w, a.w));
}

GNM_INLINE ivec2 Mix(const ivec2& x, const ivec2& y, const bvec2& a) {
  return ivec2(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y));
}

GNM_INLINE ivec3 Mix(const ivec3& x, const ivec3& y, const bvec3& a) {
  return ivec3(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z));
}

GNM_INLINE ivec4 Mix(const ivec4& x, const ivec4& y, const bvec4& a) {
  return ivec4(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z), GNM_MIX_B(x.w, y.w, a.w));
}

GNM_INLINE uvec2 Mix(const uvec2& x, const uvec2& y, const bvec2& a) {
  return uvec2(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y));
}

GNM_INLINE uvec3 Mix(const uvec3& x, const uvec3& y, const bvec3& a) {
  return uvec3(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z));
}

GNM_INLINE uvec4 Mix(const uvec4& x, const uvec4& y, const bvec4& a) {
  return uvec4(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z), GNM_MIX_B(x.w, y.w, a.w));
}

GNM_INLINE bvec2 Mix(const bvec2& x, const bvec2& y, const bvec2& a) {
  return bvec2(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y));
}

GNM_INLINE bvec3 Mix(const bvec3& x, const bvec3& y, const bvec3& a) {
  return bvec3(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z));
}

GNM_INLINE bvec4 Mix(const bvec4& x, const bvec4& y, const bvec4& a) {
  return bvec4(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z), GNM_MIX_B(x.w, y.w, a.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Step(const float edge, const float x) {
  return GNM_STEP_F(edge, x);
}

GNM_INLINE vec2 Step(const vec2& edge, const vec2& x) {
  return vec2(GNM_STEP_F(edge.x, x.x), GNM_STEP_F(edge.y, x.y));
}

GNM_INLINE vec3 Step(const vec3& edge, const vec3& x) {
  return vec3(GNM_STEP_F(edge.x, x.x), GNM_STEP_F(edge.y, x.y), GNM_STEP_F(edge.z, x.z));
}

GNM_INLINE vec4 Step(const vec4& edge, const vec4& x) {
#if (GNM_SIMD)
  return _mm_movemask_ps(_mm_cmple_ps(x._v, edge._v)) == 0 ? VEC4_ONE._v : VEC4_ZERO._v;
#else
  return vec4(GNM_STEP_F(edge.x, x.x), GNM_STEP_F(edge.y, x.y), GNM_STEP_F(edge.z, x.z), GNM_STEP_F(edge.w, x.w));
#endif
}

GNM_INLINE vec2 Step(const float edge, const vec2& x) {
  return vec2(GNM_STEP_F(edge, x.x), GNM_STEP_F(edge, x.y));
}

GNM_INLINE vec3 Step(const float edge, const vec3& x) {
  return vec3(GNM_STEP_F(edge, x.x), GNM_STEP_F(edge, x.y), GNM_STEP_F(edge, x.z));
}

GNM_INLINE vec4 Step(const float edge, const vec4& x) {
#if (GNM_SIMD)
  return _mm_movemask_ps(_mm_cmple_ps(x._v, _mm_set_ps1(edge))) == 0 ? VEC4_ONE._v : VEC4_ZERO._v;
#else
  return vec4(GNM_STEP_F(edge, x.x), GNM_STEP_F(edge, x.y), GNM_STEP_F(edge, x.z), GNM_STEP_F(edge, x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Smoothstep(const float edge0, const float edge1, const float x) {
  const float t = GNM_CLAMP((x - edge0) / (edge1 - edge0), 0, 1);
  return t * t * (3.0f - 2.0f * t);
}

GNM_INLINE vec2 Smoothstep(const vec2& edge0, const vec2& edge1, const vec2& x) {
  return vec2(Smoothstep(edge0.x, edge1.x, x.x), Smoothstep(edge0.y, edge1.y, x.y));
}

GNM_INLINE vec3 Smoothstep(const vec3& edge0, const vec3& edge1, const vec3& x) {
  return vec3(Smoothstep(edge0.x, edge1.x, x.x), Smoothstep(edge0.y, edge1.y, x.y), Smoothstep(edge0.z, edge1.z, x.z));
}

GNM_INLINE vec4 Smoothstep(const vec4& edge0, const vec4& edge1, const vec4& x) {
#if (GNM_SIMD)
  __m128 div0 = _mm_sub_ps(_mm_sub_ps(x._v, edge0._v), _mm_sub_ps(edge1._v, edge0._v));

  // clamp
  __m128 min0 = _mm_min_ps(div0, VEC4_ONE._v);
  __m128 clp0 = _mm_max_ps(min0, VEC4_ZERO._v);

  __m128 sub0 = _mm_sub_ps(_mm_set_ps1(3.0f), _mm_mul_ps(_mm_set_ps1(2.0f), clp0));
  return vec4(_mm_mul_ps(_mm_mul_ps(clp0, clp0), sub0));
#else
  return vec4(Smoothstep(edge0.x, edge1.x, x.x), Smoothstep(edge0.y, edge1.y, x.y), Smoothstep(edge0.z, edge1.z, x.z), Smoothstep(edge0.w, edge1.w, x.w));
#endif
}

GNM_INLINE vec2 Smoothstep(const float edge0, const float edge1, const vec2& x) {
  return vec2(Smoothstep(edge0, edge1, x.x), Smoothstep(edge0, edge1, x.y));
}

GNM_INLINE vec3 Smoothstep(const float edge0, const float edge1, const vec3& x) {
  return vec3(Smoothstep(edge0, edge1, x.x), Smoothstep(edge0, edge1, x.y), Smoothstep(edge0, edge1, x.z));
}

GNM_INLINE vec4 Smoothstep(const float edge0, const float edge1, const vec4& x) {
#if (GNM_SIMD)
  __m128 ev0 = _mm_set_ps1(edge0);
  __m128 div0 = _mm_sub_ps(_mm_sub_ps(x._v, ev0), _mm_sub_ps(_mm_set_ps1(edge1), ev0));

  // clamp
  __m128 min0 = _mm_min_ps(div0, VEC4_ONE._v);
  __m128 clp0 = _mm_max_ps(min0, VEC4_ZERO._v);

  __m128 sub0 = _mm_sub_ps(_mm_set_ps1(3.0f), _mm_mul_ps(_mm_set_ps1(2.0f), clp0));
  return vec4(_mm_mul_ps(_mm_mul_ps(clp0, clp0), sub0));
#else
  return vec4(Smoothstep(edge0, edge1, x.x), Smoothstep(edge0, edge1, x.y), Smoothstep(edge0, edge1, x.z), Smoothstep(edge0, edge1, x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Isnan(const float x) {
  return std::isnan(x);
}

GNM_INLINE vec2 Isnan(const vec2& x) {
  return vec2(std::isnan(x.x), std::isnan(x.y));
}

GNM_INLINE vec3 Isnan(const vec3& x) {
  return vec3(std::isnan(x.x), std::isnan(x.y), std::isnan(x.z));
}

GNM_INLINE vec4 Isnan(const vec4& x) {
  return vec4(std::isnan(x.x), std::isnan(x.y), std::isnan(x.z), std::isnan(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Isinf(const float x) {
  return std::isinf(x);
}

GNM_INLINE vec2 Isinf(const vec2& x) {
  return vec2(std::isinf(x.x), std::isinf(x.y));
}

GNM_INLINE vec3 Isinf(const vec3& x) {
  return vec3(std::isinf(x.x), std::isinf(x.y), std::isinf(x.z));
}

GNM_INLINE vec4 Isinf(const vec4& x) {
  return vec4(std::isinf(x.x), std::isinf(x.y), std::isinf(x.z), std::isinf(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int FloatBitsToInt(const float x) {
  union {
    float in;
    int out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE ivec2 FloatBitsToInt(const vec2& x) {
  union {
    float in[2];
    int out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return ivec2(u.out[0], u.out[1]);
}

GNM_INLINE ivec3 FloatBitsToInt(const vec3& x) {
  union {
    float in[3];
    int out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return ivec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE ivec4 FloatBitsToInt(const vec4& x) {
#if (GNM_SIMD)
  return ivec4(x._vi);
#else
  union {
    float in[4];
    int out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return ivec4(u.out[0], u.out[1], u.out[2], u.out[3]);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE uint FloatBitsToUint(const float x) {
  union {
    float in;
    uint out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE uvec2 FloatBitsToUint(const vec2& x) {
  union {
    float in[2];
    uint out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return uvec2(u.out[0], u.out[1]);
}

GNM_INLINE uvec3 FloatBitsToUint(const vec3& x) {
  union {
    float in[3];
    uint out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return uvec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE uvec4 FloatBitsToUint(const vec4& x) {
#if (GNM_SIMD)
  return uvec4(x._vi);
#else
  union {
    float in[4];
    uint out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return uvec4(u.out[0], u.out[1], u.out[2], u.out[3]);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float IntBitsToFloat(const int x) {
  union {
    int in;
    float out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE vec2 IntBitsToFloat(const ivec2& x) {
  union {
    int in[2];
    float out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return vec2(u.out[0], u.out[1]);
}

GNM_INLINE vec3 IntBitsToFloat(const ivec3& x) {
  union {
    int in[3];
    float out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return vec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE vec4 IntBitsToFloat(const ivec4& x) {
#if (GNM_SIMD)
  return vec4(x._v);
#else
  union {
    int in[4];
    float out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return vec4(u.out[0], u.out[1], u.out[2], u.out[3]);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float UintBitsToFloat(const uint x) {
  union {
    uint in;
    float out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE vec2 UintBitsToFloat(const uvec2& x) {
  union {
    uint in[2];
    float out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return vec2(u.out[0], u.out[1]);
}

GNM_INLINE vec3 UintBitsToFloat(const uvec3& x) {
  union {
    uint in[3];
    float out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return vec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE vec4 UintBitsToFloat(const uvec4& x) {
#if (GNM_SIMD)
  return vec4(x._v);
#else
  union {
    uint in[4];
    float out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return vec4(u.out[0], u.out[1], u.out[2], u.out[3]);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Frexp(const float x, int& Exp) {
  return std::frexp(x, &Exp);
}

GNM_INLINE vec2 Frexp(const vec2& x, ivec2& Exp) {
  return vec2(std::frexp(x.x, &Exp.x), std::frexp(x.y, &Exp.y));
}

GNM_INLINE vec3 Frexp(const vec3& x, ivec3& Exp) {
  return vec3(std::frexp(x.x, &Exp.x), std::frexp(x.y, &Exp.y), std::frexp(x.z, &Exp.z));
}

GNM_INLINE vec4 Frexp(const vec4& x, ivec4& Exp) {
  return vec4(std::frexp(x.x, &Exp.x), std::frexp(x.y, &Exp.y), std::frexp(x.z, &Exp.z), std::frexp(x.w, &Exp.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Ldexp(const float x, const int Exp) {
  return std::ldexp(x, Exp);
}

GNM_INLINE vec2 Ldexp(const vec2& x, const ivec2& Exp) {
  return vec2(std::ldexp(x.x, Exp.x), std::ldexp(x.y, Exp.y));
}

GNM_INLINE vec3 Ldexp(const vec3& x, const ivec3& Exp) {
  return vec3(std::ldexp(x.x, Exp.x), std::ldexp(x.y, Exp.y), std::ldexp(x.z, Exp.z));
}

GNM_INLINE vec4 Ldexp(const vec4& x, const ivec4& Exp) {
  return vec4(std::ldexp(x.x, Exp.x), std::ldexp(x.y, Exp.y), std::ldexp(x.z, Exp.z), std::ldexp(x.w, Exp.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
