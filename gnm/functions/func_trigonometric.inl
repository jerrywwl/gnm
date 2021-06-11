GNM_NAMESPACE_BEGIN

GNM_INLINE float Radians(const float x) {
  return GNM_D2R * x;
}

GNM_INLINE vec2 Radians(const vec2& x) {
  return vec2(GNM_D2R * x.x, GNM_D2R * x.y);
}

GNM_INLINE vec3 Radians(const vec3& x) {
  return vec3(GNM_D2R * x.x, GNM_D2R * x.y, GNM_D2R * x.z);
}

GNM_INLINE vec4 Radians(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_mul_ps(_mm_set_ps1(GNM_D2R), x._v));
#else
  return vec4(GNM_D2R * x.x, GNM_D2R * x.y, GNM_D2R * x.z, GNM_D2R * x.w);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Degrees(const float x) {
  return GNM_R2D * x;
}

GNM_INLINE vec2 Degrees(const vec2& x) {
  return vec2(GNM_R2D * x.x, GNM_R2D * x.y);
}

GNM_INLINE vec3 Degrees(const vec3& x) {
  return vec3(GNM_R2D * x.x, GNM_R2D * x.y, GNM_R2D * x.z);
}

GNM_INLINE vec4 Degrees(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_mul_ps(_mm_set_ps1(GNM_R2D), x._v));
#else
  return vec4(GNM_R2D * x.x, GNM_R2D * x.y, GNM_R2D * x.z, GNM_R2D * x.w);
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Sin(const float x) {
  return std::sin(x);
}

GNM_INLINE vec2 Sin(const vec2& x) {
  return vec2(std::sin(x.x), std::sin(x.y));
}

GNM_INLINE vec3 Sin(const vec3& x) {
  return vec3(std::sin(x.x), std::sin(x.y), std::sin(x.z));
}

GNM_INLINE vec4 Sin(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_sin_ps(x._v));
#else
  return vec4(std::sin(x.x), std::sin(x.y), std::sin(x.z), std::sin(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Cos(const float x) {
  return std::cos(x);
}

GNM_INLINE vec2 Cos(const vec2& x) {
  return vec2(std::cos(x.x), std::cos(x.y));
}

GNM_INLINE vec3 Cos(const vec3& x) {
  return vec3(std::cos(x.x), std::cos(x.y), std::cos(x.z));
}

GNM_INLINE vec4 Cos(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_cos_ps(x._v));
#else
  return vec4(std::cos(x.x), std::cos(x.y), std::cos(x.z), std::cos(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Tan(const float x) {
  return std::tan(x);
}

GNM_INLINE vec2 Tan(const vec2& x) {
  return vec2(std::tan(x.x), std::tan(x.y));
}

GNM_INLINE vec3 Tan(const vec3& x) {
  return vec3(std::tan(x.x), std::tan(x.y), std::tan(x.z));
}

GNM_INLINE vec4 Tan(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_tan_ps(x._v));
#else
  return vec4(std::tan(x.x), std::tan(x.y), std::tan(x.z), std::tan(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Asin(const float x) {
  return std::asin(x);
}

GNM_INLINE vec2 Asin(const vec2& x) {
  return vec2(std::asin(x.x), std::asin(x.y));
}

GNM_INLINE vec3 Asin(const vec3& x) {
  return vec3(std::asin(x.x), std::asin(x.y), std::asin(x.z));
}

GNM_INLINE vec4 Asin(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_asin_ps(x._v));
#else
  return vec4(std::asin(x.x), std::asin(x.y), std::asin(x.z), std::asin(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Acos(const float x) {
  return std::acos(x);
}

GNM_INLINE vec2 Acos(const vec2& x) {
  return vec2(std::acos(x.x), std::acos(x.y));
}

GNM_INLINE vec3 Acos(const vec3& x) {
  return vec3(std::acos(x.x), std::acos(x.y), std::acos(x.z));
}

GNM_INLINE vec4 Acos(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_acos_ps(x._v));
#else
  return vec4(std::acos(x.x), std::acos(x.y), std::acos(x.z), std::acos(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Atan(const float y, const float x) {
  return std::atan2(y, x);
}

GNM_INLINE vec2 Atan(const vec2& y, const vec2& x) {
  return vec2(std::atan2(y.x, x.x), std::atan2(y.y, x.y));
}

GNM_INLINE vec3 Atan(const vec3& y, const vec3& x) {
  return vec3(std::atan2(y.x, x.x), std::atan2(y.y, x.y), std::atan2(y.z, x.z));
}

GNM_INLINE vec4 Atan(const vec4& y, const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_atan2_ps(y._v, x._v));
#else
  return vec4(std::atan2(y.x, x.x), std::atan2(y.y, x.y), std::atan2(y.z, x.z), std::atan2(y.w, x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Atan(const float x) {
  return std::atan(x);
}

GNM_INLINE vec2 Atan(const vec2& x) {
  return vec2(std::atan(x.x), std::atan(x.y));
}

GNM_INLINE vec3 Atan(const vec3& x) {
  return vec3(std::atan(x.x), std::atan(x.y), std::atan(x.z));
}

GNM_INLINE vec4 Atan(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_atan_ps(x._v));
#else
  return vec4(std::atan(x.x), std::atan(x.y), std::atan(x.z), std::atan(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Sinh(const float x) {
  return std::sinh(x);
}

GNM_INLINE vec2 Sinh(const vec2& x) {
  return vec2(std::sinh(x.x), std::sinh(x.y));
}

GNM_INLINE vec3 Sinh(const vec3& x) {
  return vec3(std::sinh(x.x), std::sinh(x.y), std::sinh(x.z));
}

GNM_INLINE vec4 Sinh(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_sinh_ps(x._v));
#else
  return vec4(std::sinh(x.x), std::sinh(x.y), std::sinh(x.z), std::sinh(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Cosh(const float x) {
  return std::cosh(x);
}

GNM_INLINE vec2 Cosh(const vec2& x) {
  return vec2(std::cosh(x.x), std::cosh(x.y));
}

GNM_INLINE vec3 Cosh(const vec3& x) {
  return vec3(std::cosh(x.x), std::cosh(x.y), std::cosh(x.z));
}

GNM_INLINE vec4 Cosh(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_cosh_ps(x._v));
#else
  return vec4(std::cosh(x.x), std::cosh(x.y), std::cosh(x.z), std::cosh(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Tanh(const float x) {
  return std::tanh(x);
}

GNM_INLINE vec2 Tanh(const vec2& x) {
  return vec2(std::tanh(x.x), std::tanh(x.y));
}

GNM_INLINE vec3 Tanh(const vec3& x) {
  return vec3(std::tanh(x.x), std::tanh(x.y), std::tanh(x.z));
}

GNM_INLINE vec4 Tanh(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_tanh_ps(x._v));
#else
  return vec4(std::tanh(x.x), std::tanh(x.y), std::tanh(x.z), std::tanh(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Asinh(const float x) {
  return std::asinh(x);
}

GNM_INLINE vec2 Asinh(const vec2& x) {
  return vec2(std::asinh(x.x), std::asinh(x.y));
}

GNM_INLINE vec3 Asinh(const vec3& x) {
  return vec3(std::asinh(x.x), std::asinh(x.y), std::asinh(x.z));
}

GNM_INLINE vec4 Asinh(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_asinh_ps(x._v));
#else
  return vec4(std::asinh(x.x), std::asinh(x.y), std::asinh(x.z), std::asinh(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Acosh(const float x) {
  return std::acosh(x);
}

GNM_INLINE vec2 Acosh(const vec2& x) {
  return vec2(std::acosh(x.x), std::acosh(x.y));
}

GNM_INLINE vec3 Acosh(const vec3& x) {
  return vec3(std::acosh(x.x), std::acosh(x.y), std::acosh(x.z));
}

GNM_INLINE vec4 Acosh(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_acosh_ps(x._v));
#else
  return vec4(std::acosh(x.x), std::acosh(x.y), std::acosh(x.z), std::acosh(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Atanh(const float x) {
  return std::atanh(x);
}

GNM_INLINE vec2 Atanh(const vec2& x) {
  return vec2(std::atanh(x.x), std::atanh(x.y));
}

GNM_INLINE vec3 Atanh(const vec3& x) {
  return vec3(std::atanh(x.x), std::atanh(x.y), std::atanh(x.z));
}

GNM_INLINE vec4 Atanh(const vec4& x) {
#if (GNM_SIMD)
  return vec4(_mm_atanh_ps(x._v));
#else
  return vec4(std::atanh(x.x), std::atanh(x.y), std::atanh(x.z), std::atanh(x.w));
#endif
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
