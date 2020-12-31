GNM_NAMESPACE_BEGIN

#define GNM_PI (float)(3.141592653589793f)
#define GNM_D2R (float)(0.017453292519943f)
#define GNM_R2D (float)(57.29577951308233f)

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float radians(const float x) {
  return GNM_D2R * x;
}

GNM_INLINE vec2 radians(const vec2& x) {
  return vec2(GNM_D2R * x.x, GNM_D2R * x.y);
}

GNM_INLINE vec3 radians(const vec3& x) {
  return vec3(GNM_D2R * x.x, GNM_D2R * x.y, GNM_D2R * x.z);
}

GNM_INLINE vec4 radians(const vec4& x) {
  return vec4(GNM_D2R * x.x, GNM_D2R * x.y, GNM_D2R * x.z, GNM_D2R * x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float degrees(const float x) {
  return GNM_R2D * x;
}

GNM_INLINE vec2 degrees(const vec2& x) {
  return vec2(GNM_R2D * x.x, GNM_R2D * x.y);
}

GNM_INLINE vec3 degrees(const vec3& x) {
  return vec3(GNM_R2D * x.x, GNM_R2D * x.y, GNM_R2D * x.z);
}

GNM_INLINE vec4 degrees(const vec4& x) {
  return vec4(GNM_R2D * x.x, GNM_R2D * x.y, GNM_R2D * x.z, GNM_R2D * x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float sin(const float x) {
  return std::sin(x);
}

GNM_INLINE vec2 sin(const vec2& x) {
  return vec2(std::sin(x.x), std::sin(x.y));
}

GNM_INLINE vec3 sin(const vec3& x) {
  return vec3(std::sin(x.x), std::sin(x.y), std::sin(x.z));
}

GNM_INLINE vec4 sin(const vec4& x) {
  return vec4(std::sin(x.x), std::sin(x.y), std::sin(x.z), std::sin(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float cos(const float x) {
  return std::cos(x);
}

GNM_INLINE vec2 cos(const vec2& x) {
  return vec2(std::cos(x.x), std::cos(x.y));
}

GNM_INLINE vec3 cos(const vec3& x) {
  return vec3(std::cos(x.x), std::cos(x.y), std::cos(x.z));
}

GNM_INLINE vec4 cos(const vec4& x) {
  return vec4(std::cos(x.x), std::cos(x.y), std::cos(x.z), std::cos(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float tan(const float x) {
  return std::tan(x);
}

GNM_INLINE vec2 tan(const vec2& x) {
  return vec2(std::tan(x.x), std::tan(x.y));
}

GNM_INLINE vec3 tan(const vec3& x) {
  return vec3(std::tan(x.x), std::tan(x.y), std::tan(x.z));
}

GNM_INLINE vec4 tan(const vec4& x) {
  return vec4(std::tan(x.x), std::tan(x.y), std::tan(x.z), std::tan(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float asin(const float x) {
  return std::asin(x);
}

GNM_INLINE vec2 asin(const vec2& x) {
  return vec2(std::asin(x.x), std::asin(x.y));
}

GNM_INLINE vec3 asin(const vec3& x) {
  return vec3(std::asin(x.x), std::asin(x.y), std::asin(x.z));
}

GNM_INLINE vec4 asin(const vec4& x) {
  return vec4(std::asin(x.x), std::asin(x.y), std::asin(x.z), std::asin(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float acos(const float x) {
  return std::acos(x);
}

GNM_INLINE vec2 acos(const vec2& x) {
  return vec2(std::acos(x.x), std::acos(x.y));
}

GNM_INLINE vec3 acos(const vec3& x) {
  return vec3(std::acos(x.x), std::acos(x.y), std::acos(x.z));
}

GNM_INLINE vec4 acos(const vec4& x) {
  return vec4(std::acos(x.x), std::acos(x.y), std::acos(x.z), std::acos(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float atan(const float y, const float x) {
  return std::atan2(y, x);
}

GNM_INLINE vec2 atan(const vec2& y, const vec2& x) {
  return vec2(std::atan2(y.x, x.x), std::atan2(y.y, x.y));
}

GNM_INLINE vec3 atan(const vec3& y, const vec3& x) {
  return vec3(std::atan2(y.x, x.x), std::atan2(y.y, x.y), std::atan2(y.z, x.z));
}

GNM_INLINE vec4 atan(const vec4& y, const vec4& x) {
  return vec4(std::atan2(y.x, x.x), std::atan2(y.y, x.y), std::atan2(y.z, x.z), std::atan2(y.w, x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float atan(const float x) {
  return std::atan(x);
}

GNM_INLINE vec2 atan(const vec2& x) {
  return vec2(std::atan(x.x), std::atan(x.y));
}

GNM_INLINE vec3 atan(const vec3& x) {
  return vec3(std::atan(x.x), std::atan(x.y), std::atan(x.z));
}

GNM_INLINE vec4 atan(const vec4& x) {
  return vec4(std::atan(x.x), std::atan(x.y), std::atan(x.z), std::atan(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float sinh(const float x) {
  return std::sinh(x);
}

GNM_INLINE vec2 sinh(const vec2& x) {
  return vec2(std::sinh(x.x), std::sinh(x.y));
}

GNM_INLINE vec3 sinh(const vec3& x) {
  return vec3(std::sinh(x.x), std::sinh(x.y), std::sinh(x.z));
}

GNM_INLINE vec4 sinh(const vec4& x) {
  return vec4(std::sinh(x.x), std::sinh(x.y), std::sinh(x.z), std::sinh(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float cosh(const float x) {
  return std::cosh(x);
}

GNM_INLINE vec2 cosh(const vec2& x) {
  return vec2(std::cosh(x.x), std::cosh(x.y));
}

GNM_INLINE vec3 cosh(const vec3& x) {
  return vec3(std::cosh(x.x), std::cosh(x.y), std::cosh(x.z));
}

GNM_INLINE vec4 cosh(const vec4& x) {
  return vec4(std::cosh(x.x), std::cosh(x.y), std::cosh(x.z), std::cosh(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float tanh(const float x) {
  return std::tanh(x);
}

GNM_INLINE vec2 tanh(const vec2& x) {
  return vec2(std::tanh(x.x), std::tanh(x.y));
}

GNM_INLINE vec3 tanh(const vec3& x) {
  return vec3(std::tanh(x.x), std::tanh(x.y), std::tanh(x.z));
}

GNM_INLINE vec4 tanh(const vec4& x) {
  return vec4(std::tanh(x.x), std::tanh(x.y), std::tanh(x.z), std::tanh(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float asinh(const float x) {
  return std::asinh(x);
}

GNM_INLINE vec2 asinh(const vec2& x) {
  return vec2(std::asinh(x.x), std::asinh(x.y));
}

GNM_INLINE vec3 asinh(const vec3& x) {
  return vec3(std::asinh(x.x), std::asinh(x.y), std::asinh(x.z));
}

GNM_INLINE vec4 asinh(const vec4& x) {
  return vec4(std::asinh(x.x), std::asinh(x.y), std::asinh(x.z), std::asinh(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float acosh(const float x) {
  return std::acosh(x);
}

GNM_INLINE vec2 acosh(const vec2& x) {
  return vec2(std::acosh(x.x), std::acosh(x.y));
}

GNM_INLINE vec3 acosh(const vec3& x) {
  return vec3(std::acosh(x.x), std::acosh(x.y), std::acosh(x.z));
}

GNM_INLINE vec4 acosh(const vec4& x) {
  return vec4(std::acosh(x.x), std::acosh(x.y), std::acosh(x.z), std::acosh(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float atanh(const float x) {
  return std::atanh(x);
}

GNM_INLINE vec2 atanh(const vec2& x) {
  return vec2(std::atanh(x.x), std::atanh(x.y));
}

GNM_INLINE vec3 atanh(const vec3& x) {
  return vec3(std::atanh(x.x), std::atanh(x.y), std::atanh(x.z));
}

GNM_INLINE vec4 atanh(const vec4& x) {
  return vec4(std::atanh(x.x), std::atanh(x.y), std::atanh(x.z), std::atanh(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
