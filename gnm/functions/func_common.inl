GNM_NAMESPACE_BEGIN

#define GNM_ABS_F(x) (x > 0.0f ? x : -x)
#define GNM_ABS_I(x) (x > 0 ? x : -x)
#define GNM_SIGN_F(x) (x < 0.0f ? -1.0f : (x > 0.0f ? 1.0f : 0.0f))
#define GNM_SIGN_I(x) (x < 0 ? -1 : (x > 0 ? 1 : 0))
#define GNM_FRACT_F(x) (x - std::floor(x))
#define GNM_MOD_F(x, y) (x - y * std::floor(x / y))
#define GNM_MIN(x, y) ((y < x) ? y : x)
#define GNM_MAX(x, y) ((y > x) ? y : x)
#define GNM_CLAMP(x, minVal, maxVal) GNM_MIN(GNM_MAX(x, minVal), maxVal)
#define GNM_MIX_F(x, y, a) (x * (1 - a) + y * a)
#define GNM_MIX(T, x, y, a) (x * (T(1) - a) + y * a)
#define GNM_MIX_B(x, y, a) (a? y : x)
#define GNM_STEP_F(edge, x) ((x < edge)? 0.0f : 1.0f)

// ----------------------------------------------------------------------------------------------------

#if 0
GNM_INLINE float abs(const float x) {
  return GNM_ABS_F(x);
}
#endif

GNM_INLINE vec2 abs(const vec2& x) {
  return vec2(GNM_ABS_F(x.x), GNM_ABS_F(x.y));
}

GNM_INLINE vec3 abs(const vec3& x) {
  return vec3(GNM_ABS_F(x.x), GNM_ABS_F(x.y), GNM_ABS_F(x.z));
}

GNM_INLINE vec4 abs(const vec4& x) {
  return vec4(GNM_ABS_F(x.x), GNM_ABS_F(x.y), GNM_ABS_F(x.z), GNM_ABS_F(x.w));
}

GNM_INLINE int abs(const int x) {
  return GNM_ABS_I(x);
}

GNM_INLINE ivec2 abs(const ivec2& x) {
  return ivec2(GNM_ABS_I(x.x), GNM_ABS_I(x.y));
}

GNM_INLINE ivec3 abs(const ivec3& x) {
  return ivec3(GNM_ABS_I(x.x), GNM_ABS_I(x.y), GNM_ABS_I(x.z));
}

GNM_INLINE ivec4 abs(const ivec4& x) {
  return ivec4(GNM_ABS_I(x.x), GNM_ABS_I(x.y), GNM_ABS_I(x.z), GNM_ABS_I(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float sign(const float x) {
  return GNM_SIGN_F(x);
}

GNM_INLINE vec2 sign(const vec2& x) {
  return vec2(GNM_SIGN_F(x.x), GNM_SIGN_F(x.y));
}

GNM_INLINE vec3 sign(const vec3& x) {
  return vec3(GNM_SIGN_F(x.x), GNM_SIGN_F(x.y), GNM_SIGN_F(x.z));
}

GNM_INLINE vec4 sign(const vec4& x) {
  return vec4(GNM_SIGN_F(x.x), GNM_SIGN_F(x.y), GNM_SIGN_F(x.z), GNM_SIGN_F(x.w));
}

GNM_INLINE int sign(const int x) {
  return GNM_SIGN_I(x);
}

GNM_INLINE ivec2 sign(const ivec2& x) {
  return ivec2(GNM_SIGN_I(x.x), GNM_SIGN_I(x.y));
}

GNM_INLINE ivec3 sign(const ivec3& x) {
  return ivec3(GNM_SIGN_I(x.x), GNM_SIGN_I(x.y), GNM_SIGN_I(x.z));
}

GNM_INLINE ivec4 sign(const ivec4& x) {
  return ivec4(GNM_SIGN_I(x.x), GNM_SIGN_I(x.y), GNM_SIGN_I(x.z), GNM_SIGN_I(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float floor(const float x) {
  return std::floor(x);
}

GNM_INLINE vec2 floor(const vec2& x) {
  return vec2(std::floor(x.x), std::floor(x.y));
}

GNM_INLINE vec3 floor(const vec3& x) {
  return vec3(std::floor(x.x), std::floor(x.y), std::floor(x.z));
}

GNM_INLINE vec4 floor(const vec4& x) {
  return vec4(std::floor(x.x), std::floor(x.y), std::floor(x.z), std::floor(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float trunc(const float x) {
  return std::trunc(x);
}

GNM_INLINE vec2 trunc(const vec2& x) {
  return vec2(std::trunc(x.x), std::trunc(x.y));
}

GNM_INLINE vec3 trunc(const vec3& x) {
  return vec3(std::trunc(x.x), std::trunc(x.y), std::trunc(x.z));
}

GNM_INLINE vec4 trunc(const vec4& x) {
  return vec4(std::trunc(x.x), std::trunc(x.y), std::trunc(x.z), std::trunc(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float round(const float x) {
  return std::round(x);
}

GNM_INLINE vec2 round(const vec2& x) {
  return vec2(std::round(x.x), std::round(x.y));
}

GNM_INLINE vec3 round(const vec3& x) {
  return vec3(std::round(x.x), std::round(x.y), std::round(x.z));
}

GNM_INLINE vec4 round(const vec4& x) {
  return vec4(std::round(x.x), std::round(x.y), std::round(x.z), std::round(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float roundEven(const float x) {
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

GNM_INLINE vec2 roundEven(const vec2& x) {
  return vec2(roundEven(x.x), roundEven(x.y));
}

GNM_INLINE vec3 roundEven(const vec3& x) {
  return vec3(roundEven(x.x), roundEven(x.y), roundEven(x.z));
}

GNM_INLINE vec4 roundEven(const vec4& x) {
  return vec4(roundEven(x.x), roundEven(x.y), roundEven(x.z), roundEven(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float ceil(const float x) {
  return std::ceil(x);
}

GNM_INLINE vec2 ceil(const vec2& x) {
  return vec2(std::ceil(x.x), std::ceil(x.y));
}

GNM_INLINE vec3 ceil(const vec3& x) {
  return vec3(std::ceil(x.x), std::ceil(x.y), std::ceil(x.z));
}

GNM_INLINE vec4 ceil(const vec4& x) {
  return vec4(std::ceil(x.x), std::ceil(x.y), std::ceil(x.z), std::ceil(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float fract(const float x) {
  return GNM_FRACT_F(x);
}

GNM_INLINE vec2 fract(const vec2& x) {
  return vec2(GNM_FRACT_F(x.x), GNM_FRACT_F(x.y));
}

GNM_INLINE vec3 fract(const vec3& x) {
  return vec3(GNM_FRACT_F(x.x), GNM_FRACT_F(x.y), GNM_FRACT_F(x.z));
}

GNM_INLINE vec4 fract(const vec4& x) {
  return vec4(GNM_FRACT_F(x.x), GNM_FRACT_F(x.y), GNM_FRACT_F(x.z), GNM_FRACT_F(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float mod(const float x, const float y) {
  return GNM_MOD_F(x, y);
}

GNM_INLINE vec2 mod(const vec2& x, const float y) {
  return vec2(GNM_MOD_F(x.x, y), GNM_MOD_F(x.y, y));
}

GNM_INLINE vec3 mod(const vec3& x, const float y) {
  return vec3(GNM_MOD_F(x.x, y), GNM_MOD_F(x.y, y), GNM_MOD_F(x.z, y));
}

GNM_INLINE vec4 mod(const vec4& x, const float y) {
  return vec4(GNM_MOD_F(x.x, y), GNM_MOD_F(x.y, y), GNM_MOD_F(x.z, y), GNM_MOD_F(x.w, y));
}

GNM_INLINE vec2 mod(const vec2& x, const vec2& y) {
  return vec2(GNM_MOD_F(x.x, y.x), GNM_MOD_F(x.y, y.y));
}

GNM_INLINE vec3 mod(const vec3& x, const vec3& y) {
  return vec3(GNM_MOD_F(x.x, y.x), GNM_MOD_F(x.y, y.y), GNM_MOD_F(x.z, y.z));
}

GNM_INLINE vec4 mod(const vec4& x, const vec4& y) {
  return vec4(GNM_MOD_F(x.x, y.x), GNM_MOD_F(x.y, y.y), GNM_MOD_F(x.z, y.z), GNM_MOD_F(x.w, y.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float modf(const float x, float& i) {
  return std::modf(x, &i);
}

GNM_INLINE vec2 modf(const vec2& x, vec2& i) {
  return vec2(std::modf(x.x, &i.x), std::modf(x.y, &i.y));
}

GNM_INLINE vec3 modf(const vec3& x, vec3& i) {
  return vec3(std::modf(x.x, &i.x), std::modf(x.y, &i.y), std::modf(x.z, &i.z));
}

GNM_INLINE vec4 modf(const vec4& x, vec4& i) {
  return vec4(std::modf(x.x, &i.x), std::modf(x.y, &i.y), std::modf(x.z, &i.z), std::modf(x.w, &i.w));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T min(const T x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return GNM_MIN(x, y);
}

template <typename T>
GNM_INLINE vec2_t<T> min(const vec2_t<T>& x, const vec2_t<T>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y));
}

template <typename T>
GNM_INLINE vec2_t<T> min(const vec2_t<T>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x.x, y), GNM_MIN(x.y, y));
}

template <typename T>
GNM_INLINE vec3_t<T> min(const vec3_t<T>& x, const vec3_t<T>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z));
}

template <typename T>
GNM_INLINE vec3_t<T> min(const vec3_t<T>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y));
}

template <typename T>
GNM_INLINE vec4_t<T> min(const vec4_t<T>& x, const vec4_t<T>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_MIN(x.x, y.x), GNM_MIN(x.y, y.y), GNM_MIN(x.z, y.z), GNM_MIN(x.w, y.w));
}

template <typename T>
GNM_INLINE vec4_t<T> min(const vec4_t<T>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_MIN(x.x, y), GNM_MIN(x.y, y), GNM_MIN(x.z, y), GNM_MIN(x.w, y));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
GNM_INLINE vec2_t<T> min(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x._m[X], y._m[_X]), GNM_MIN(x._m[Y], y._m[_Y]));
}

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec2_t<T> min(const swizzle_2_t<T, N, X, Y, Z, W>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x._m[X], y), GNM_MIN(x._m[Y], y));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
GNM_INLINE vec3_t<T> min(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x._m[X], y._m[_X]), GNM_MIN(x._m[Y], y._m[_Y]), GNM_MIN(x._m[Z], y._m[_Z]));
}

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec3_t<T> min(const swizzle_3_t<T, N, X, Y, Z, W>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x._m[X], y), GNM_MIN(x._m[Y], y), GNM_MIN(x._m[Z], y));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
GNM_INLINE vec4_t<T> min(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x._m[X], y._m[_X]), GNM_MIN(x._m[Y], y._m[_Y]), GNM_MIN(x._m[Z], y._m[_Z]), GNM_MIN(x._m[W], y._m[_W]));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec4_t<T> min(const swizzle_4_t<T, N, X, Y, Z, W>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIN(x._m[X], y), GNM_MIN(x._m[Y], y), GNM_MIN(x._m[Z], y), GNM_MIN(x._m[W], y));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T max(const T x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return GNM_MAX(x, y);
}

template <typename T>
GNM_INLINE vec2_t<T> max(const vec2_t<T>& x, const vec2_t<T>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y));
}

template <typename T>
GNM_INLINE vec2_t<T> max(const vec2_t<T>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x.x, y), GNM_MAX(x.y, y));
}

template <typename T>
GNM_INLINE vec3_t<T> max(const vec3_t<T>& x, const vec3_t<T>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z));
}

template <typename T>
GNM_INLINE vec3_t<T> max(const vec3_t<T>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y));
}

template <typename T>
GNM_INLINE vec4_t<T> max(const vec4_t<T>& x, const vec4_t<T>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_MAX(x.x, y.x), GNM_MAX(x.y, y.y), GNM_MAX(x.z, y.z), GNM_MAX(x.w, y.w));
}

template <typename T>
GNM_INLINE vec4_t<T> max(const vec4_t<T>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_MAX(x.x, y), GNM_MAX(x.y, y), GNM_MAX(x.z, y), GNM_MAX(x.w, y));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
GNM_INLINE vec2_t<T> max(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x._m[X], y._m[_X]), GNM_MAX(x._m[Y], y._m[_Y]));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec2_t<T> max(const swizzle_2_t<T, N, X, Y, Z, W>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x._m[X], y), GNM_MAX(x._m[Y], y));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
GNM_INLINE vec3_t<T> max(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x._m[X], y._m[_X]), GNM_MAX(x._m[Y], y._m[_Y]), GNM_MAX(x._m[Z], y._m[_Z]));
}

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec3_t<T> max(const swizzle_3_t<T, N, X, Y, Z, W>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x._m[X], y), GNM_MAX(x._m[Y], y), GNM_MAX(x._m[Z], y));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
GNM_INLINE vec4_t<T> max(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x._m[X], y._m[_X]), GNM_MAX(x._m[Y], y._m[_Y]), GNM_MAX(x._m[Z], y._m[_Z]), GNM_MAX(x._m[W], y._m[_W]));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec4_t<T> max(const swizzle_4_t<T, N, X, Y, Z, W>& x, const T y) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MAX(x._m[X], y), GNM_MAX(x._m[Y], y), GNM_MAX(x._m[Z], y), GNM_MAX(x._m[W], y));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T clamp(const T x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return GNM_CLAMP(x, minVal, maxVal);
}

template <typename T>
GNM_INLINE vec2_t<T> clamp(const vec2_t<T>& x, const vec2_t<T>& minVal, const vec2_t<T>& maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y));
}

template <typename T>
GNM_INLINE vec2_t<T> clamp(const vec2_t<T>& x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal));
}

template <typename T>
GNM_INLINE vec3_t<T> clamp(const vec3_t<T>& x, const vec3_t<T>& minVal, const vec3_t<T>& maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z));
}

template <typename T>
GNM_INLINE vec3_t<T> clamp(const vec3_t<T>& x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal));
}

template <typename T>
GNM_INLINE vec4_t<T> clamp(const vec4_t<T>& x, const vec4_t<T>& minVal, const vec4_t<T>& maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_CLAMP(x.x, minVal.x, maxVal.x), GNM_CLAMP(x.y, minVal.y, maxVal.y), GNM_CLAMP(x.z, minVal.z, maxVal.z), GNM_CLAMP(x.w, minVal.w, maxVal.w));
}

template <typename T>
GNM_INLINE vec4_t<T> clamp(const vec4_t<T>& x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_CLAMP(x.x, minVal, maxVal), GNM_CLAMP(x.y, minVal, maxVal), GNM_CLAMP(x.z, minVal, maxVal), GNM_CLAMP(x.w, minVal, maxVal));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
GNM_INLINE vec2_t<T> clamp(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& minVal, const swizzle_2_t<T, _N1, _X1, _Y1, _Z1, _W1>& maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_CLAMP(x._m[X], minVal._m[_X], maxVal._m[_X1]), GNM_CLAMP(x._m[Y], minVal._m[_Y], maxVal._m[_Y1]));
}

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec2_t<T> clamp(const swizzle_2_t<T, N, X, Y, Z, W>& x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_CLAMP(x._m[X], minVal, maxVal), GNM_CLAMP(x._m[Y], minVal, maxVal));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
GNM_INLINE vec3_t<T> clamp(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& minVal, const swizzle_3_t<T, _N1, _X1, _Y1, _Z1, _W1>& maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_CLAMP(x._m[X], minVal._m[_X], maxVal._m[_X1]), GNM_CLAMP(x._m[Y], minVal._m[_Y], maxVal._m[_Y1]), GNM_CLAMP(x._m[Z], minVal._m[_Z], maxVal._m[_Z1]));
}

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec3_t<T> clamp(const swizzle_3_t<T, N, X, Y, Z, W>& x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_CLAMP(x._m[X], minVal, maxVal), GNM_CLAMP(x._m[Y], minVal, maxVal), GNM_CLAMP(x._m[Z], minVal, maxVal));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
GNM_INLINE vec4_t<T> clamp(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& minVal, const swizzle_4_t<T, _N1, _X1, _Y1, _Z1, _W1>& maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_CLAMP(x._m[X], minVal._m[_X], maxVal._m[_X1]), GNM_CLAMP(x._m[Y], minVal._m[_Y], maxVal._m[_Y1]), GNM_CLAMP(x._m[Z], minVal._m[_Z], maxVal._m[_Z1]));
}

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
GNM_INLINE vec4_t<T> clamp(const swizzle_4_t<T, N, X, Y, Z, W>& x, const T minVal, const T maxVal) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_CLAMP(x._m[X], minVal, maxVal), GNM_CLAMP(x._m[Y], minVal, maxVal), GNM_CLAMP(x._m[Z], minVal, maxVal), GNM_CLAMP(x._m[W], minVal, maxVal));
}

// ----------------------------------------------------------------------------------------------------


GNM_INLINE float mix(const float x, const float y, const float a) {
  return GNM_MIX_F(x, y, a);
}

GNM_INLINE vec2 mix(const vec2& x, const vec2& y, const vec2& a) {
  return vec2(GNM_MIX_F(x.x, y.x, a.x), GNM_MIX_F(x.y, y.y, a.y));
}

GNM_INLINE vec3 mix(const vec3& x, const vec3& y, const vec3& a) {
  return vec3(GNM_MIX_F(x.x, y.x, a.x), GNM_MIX_F(x.y, y.y, a.y), GNM_MIX_F(x.z, y.z, a.z));
}

GNM_INLINE vec4 mix(const vec4& x, const vec4& y, const vec4& a) {
  return vec4(GNM_MIX_F(x.x, y.x, a.x), GNM_MIX_F(x.y, y.y, a.y), GNM_MIX_F(x.z, y.z, a.z), GNM_MIX_F(x.w, y.w, a.w));
}

GNM_INLINE vec2 mix(const vec2& x, const vec2& y, const float a) {
  return vec2(GNM_MIX_F(x.x, y.x, a), GNM_MIX_F(x.y, y.y, a));
}

GNM_INLINE vec3 mix(const vec3& x, const vec3& y, const float a) {
  return vec3(GNM_MIX_F(x.x, y.x, a), GNM_MIX_F(x.y, y.y, a), GNM_MIX_F(x.z, y.z, a));
}

GNM_INLINE vec4 mix(const vec4& x, const vec4& y, const float a) {
  return vec4(GNM_MIX_F(x.x, y.x, a), GNM_MIX_F(x.y, y.y, a), GNM_MIX_F(x.z, y.z, a), GNM_MIX_F(x.w, y.w, a));
}

// ----------------------------------------------------------------------------------------------------

template <typename T>
GNM_INLINE T mix(const T x, const T y, const bool a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return GNM_MIX_B(x, y, a);
}

template <typename T>
GNM_INLINE vec2_t<T> mix(const vec2_t<T>& x, const vec2_t<T>& y, const bvec2& a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y));
}

template <typename T>
GNM_INLINE vec3_t<T> mix(const vec3_t<T>& x, const vec3_t<T>& y, const bvec3& a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z));
}

template <typename T>
GNM_INLINE vec4_t<T> mix(const vec4_t<T>& x, const vec4_t<T>& y, const bvec4& a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_MIX_B(x.x, y.x, a.x), GNM_MIX_B(x.y, y.y, a.y), GNM_MIX_B(x.z, y.z, a.z), GNM_MIX_B(x.w, y.w, a.w));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
GNM_INLINE vec2_t<T> mix(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& y, const swizzle_2_t<bool, _N1, _X1, _Y1, _Z1, _W1>& a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec2_t<T>(GNM_MIX_B(x._m[X], y._m[_X], a._m[_X1]), GNM_MIX_B(x._m[Y], y._m[_Y], a._m[_Y1]));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
GNM_INLINE vec3_t<T> mix(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& y, const swizzle_3_t<bool, _N1, _X1, _Y1, _Z1, _W1>& a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec3_t<T>(GNM_MIX_B(x._m[X], y._m[_X], a._m[_X1]), GNM_MIX_B(x._m[Y], y._m[_Y], a._m[_Y1]), GNM_MIX_B(x._m[Z], y._m[_Z], a._m[_Z1]));
}

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
GNM_INLINE vec4_t<T> mix(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& y, const swizzle_4_t<bool, _N1, _X1, _Y1, _Z1, _W1>& a) {
  static_assert(std::numeric_limits<T>::is_iec559 || std::numeric_limits<T>::is_integer, "Arguments must be floating-point or integer.");
  return vec4_t<T>(GNM_MIX_B(x._m[X], y._m[_X], a._m[_X1]), GNM_MIX_B(x._m[Y], y._m[_Y], a._m[_Y1]), GNM_MIX_B(x._m[Z], y._m[_Z], a._m[_Z1]), GNM_MIX_B(x._m[W], y._m[_W], a._m[_W1]));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float step(const float edge, const float x) {
  return GNM_STEP_F(edge, x);
}

GNM_INLINE vec2 step(const vec2& edge, const vec2& x) {
  return vec2(GNM_STEP_F(edge.x, x.x), GNM_STEP_F(edge.y, x.y));
}

GNM_INLINE vec3 step(const vec3& edge, const vec3& x) {
  return vec3(GNM_STEP_F(edge.x, x.x), GNM_STEP_F(edge.y, x.y), GNM_STEP_F(edge.z, x.z));
}

GNM_INLINE vec4 step(const vec4& edge, const vec4& x) {
  return vec4(GNM_STEP_F(edge.x, x.x), GNM_STEP_F(edge.y, x.y), GNM_STEP_F(edge.z, x.z), GNM_STEP_F(edge.w, x.w));
}

GNM_INLINE vec2 step(const float edge, const vec2& x) {
  return vec2(GNM_STEP_F(edge, x.x), GNM_STEP_F(edge, x.y));
}

GNM_INLINE vec3 step(const float edge, const vec3& x) {
  return vec3(GNM_STEP_F(edge, x.x), GNM_STEP_F(edge, x.y), GNM_STEP_F(edge, x.z));
}

GNM_INLINE vec4 step(const float edge, const vec4& x) {
  return vec4(GNM_STEP_F(edge, x.x), GNM_STEP_F(edge, x.y), GNM_STEP_F(edge, x.z), GNM_STEP_F(edge, x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float smoothstep(const float edge0, const float edge1, const float x) {
  const float t = GNM_CLAMP((x - edge0) / (edge1 - edge0), 0, 1);
  return t * t * (3.0f - 2.0f * t);
}

GNM_INLINE vec2 smoothstep(const vec2& edge0, const vec2& edge1, const vec2& x) {
  return vec2(smoothstep(edge0.x, edge1.x, x.x), smoothstep(edge0.y, edge1.y, x.y));
}

GNM_INLINE vec3 smoothstep(const vec3& edge0, const vec3& edge1, const vec3& x) {
  return vec3(smoothstep(edge0.x, edge1.x, x.x), smoothstep(edge0.y, edge1.y, x.y), smoothstep(edge0.z, edge1.z, x.z));
}

GNM_INLINE vec4 smoothstep(const vec4& edge0, const vec4& edge1, const vec4& x) {
  return vec4(smoothstep(edge0.x, edge1.x, x.x), smoothstep(edge0.y, edge1.y, x.y), smoothstep(edge0.z, edge1.z, x.z), smoothstep(edge0.w, edge1.w, x.w));
}

GNM_INLINE vec2 smoothstep(const float edge0, const float edge1, const vec2& x) {
  return vec2(smoothstep(edge0, edge1, x.x), smoothstep(edge0, edge1, x.y));
}

GNM_INLINE vec3 smoothstep(const float edge0, const float edge1, const vec3& x) {
  return vec3(smoothstep(edge0, edge1, x.x), smoothstep(edge0, edge1, x.y), smoothstep(edge0, edge1, x.z));
}

GNM_INLINE vec4 smoothstep(const float edge0, const float edge1, const vec4& x) {
  return vec4(smoothstep(edge0, edge1, x.x), smoothstep(edge0, edge1, x.y), smoothstep(edge0, edge1, x.z), smoothstep(edge0, edge1, x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float isnan(const float x) {
  return std::isnan(x);
}

GNM_INLINE vec2 isnan(const vec2& x) {
  return vec2(std::isnan(x.x), std::isnan(x.y));
}

GNM_INLINE vec3 isnan(const vec3& x) {
  return vec3(std::isnan(x.x), std::isnan(x.y), std::isnan(x.z));
}

GNM_INLINE vec4 isnan(const vec4& x) {
  return vec4(std::isnan(x.x), std::isnan(x.y), std::isnan(x.z), std::isnan(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float isinf(const float x) {
  return std::isinf(x);
}

GNM_INLINE vec2 isinf(const vec2& x) {
  return vec2(std::isinf(x.x), std::isinf(x.y));
}

GNM_INLINE vec3 isinf(const vec3& x) {
  return vec3(std::isinf(x.x), std::isinf(x.y), std::isinf(x.z));
}

GNM_INLINE vec4 isinf(const vec4& x) {
  return vec4(std::isinf(x.x), std::isinf(x.y), std::isinf(x.z), std::isinf(x.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int floatBitsToInt(const float x) {
  union {
    float in;
    int out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE ivec2 floatBitsToInt(const vec2& x) {
  union {
    float in[2];
    int out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return ivec2(u.out[0], u.out[1]);
}

GNM_INLINE ivec3 floatBitsToInt(const vec3& x) {
  union {
    float in[3];
    int out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return ivec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE ivec4 floatBitsToInt(const vec4& x) {
  union {
    float in[4];
    int out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return ivec4(u.out[0], u.out[1], u.out[2], u.out[3]);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE uint floatBitsToUint(const float x) {
  union {
    float in;
    uint out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE uvec2 floatBitsToUint(const vec2& x) {
  union {
    float in[2];
    uint out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return uvec2(u.out[0], u.out[1]);
}

GNM_INLINE uvec3 floatBitsToUint(const vec3& x) {
  union {
    float in[3];
    uint out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return uvec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE uvec4 floatBitsToUint(const vec4& x) {
  union {
    float in[4];
    uint out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return uvec4(u.out[0], u.out[1], u.out[2], u.out[3]);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float intBitsToFloat(const int x) {
  union {
    int in;
    float out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE vec2 intBitsToFloat(const ivec2& x) {
  union {
    int in[2];
    float out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return vec2(u.out[0], u.out[1]);
}

GNM_INLINE vec3 intBitsToFloat(const ivec3& x) {
  union {
    int in[3];
    float out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return vec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE vec4 intBitsToFloat(const ivec4& x) {
  union {
    int in[4];
    float out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return vec4(u.out[0], u.out[1], u.out[2], u.out[3]);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float uintBitsToFloat(const uint x) {
  union {
    uint in;
    float out;
  } u;

  u.in = x;
  return u.out;
}

GNM_INLINE vec2 uintBitsToFloat(const uvec2& x) {
  union {
    uint in[2];
    float out[2];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;

  return vec2(u.out[0], u.out[1]);
}

GNM_INLINE vec3 uintBitsToFloat(const uvec3& x) {
  union {
    uint in[3];
    float out[3];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;

  return vec3(u.out[0], u.out[1], u.out[2]);
}

GNM_INLINE vec4 uintBitsToFloat(const uvec4& x) {
  union {
    uint in[4];
    float out[4];
  } u;

  u.in[0] = x.x;
  u.in[1] = x.y;
  u.in[2] = x.z;
  u.in[3] = x.w;

  return vec4(u.out[0], u.out[1], u.out[2], u.out[3]);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float frexp(const float x, int& exp) {
  return std::frexp(x, &exp);
}

GNM_INLINE vec2 frexp(const vec2& x, ivec2& exp) {
  return vec2(std::frexp(x.x, &exp.x), std::frexp(x.y, &exp.y));
}

GNM_INLINE vec3 frexp(const vec3& x, ivec3& exp) {
  return vec3(std::frexp(x.x, &exp.x), std::frexp(x.y, &exp.y), std::frexp(x.z, &exp.z));
}

GNM_INLINE vec4 frexp(const vec4& x, ivec4& exp) {
  return vec4(std::frexp(x.x, &exp.x), std::frexp(x.y, &exp.y), std::frexp(x.z, &exp.z), std::frexp(x.w, &exp.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float ldexp(const float x, const int exp) {
  return std::ldexp(x, exp);
}

GNM_INLINE vec2 ldexp(const vec2& x, const ivec2& exp) {
  return vec2(std::ldexp(x.x, exp.x), std::ldexp(x.y, exp.y));
}

GNM_INLINE vec3 ldexp(const vec3& x, const ivec3& exp) {
  return vec3(std::ldexp(x.x, exp.x), std::ldexp(x.y, exp.y), std::ldexp(x.z, exp.z));
}

GNM_INLINE vec4 ldexp(const vec4& x, const ivec4& exp) {
  return vec4(std::ldexp(x.x, exp.x), std::ldexp(x.y, exp.y), std::ldexp(x.z, exp.z), std::ldexp(x.w, exp.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
