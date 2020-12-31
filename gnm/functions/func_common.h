#ifndef GNM_FUNCTIONS_FUNC_COMMON_H_
#define GNM_FUNCTIONS_FUNC_COMMON_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Common Functions

GNM_NAMESPACE_BEGIN

//float abs(const float x);
vec2 abs(const vec2& x);
vec3 abs(const vec3& x);
vec4 abs(const vec4& x);
int abs(const int x);
ivec2 abs(const ivec2& x);
ivec3 abs(const ivec3& x);
ivec4 abs(const ivec4& x);

float sign(const float x);
vec2 sign(const vec2& x);
vec3 sign(const vec3& x);
vec4 sign(const vec4& x);
int sign(const int x);
ivec2 sign(const ivec2& x);
ivec3 sign(const ivec3& x);
ivec4 sign(const ivec4& x);

float floor(const float x);
vec2 floor(const vec2& x);
vec3 floor(const vec3& x);
vec4 floor(const vec4& x);

float trunc(const float x);
vec2 trunc(const vec2& x);
vec3 trunc(const vec3& x);
vec4 trunc(const vec4& x);

float round(const float x);
vec2 round(const vec2& x);
vec3 round(const vec3& x);
vec4 round(const vec4& x);

float roundEven(const float x);
vec2 roundEven(const vec2& x);
vec3 roundEven(const vec3& x);
vec4 roundEven(const vec4& x);

float ceil(const float x);
vec2 ceil(const vec2& x);
vec3 ceil(const vec3& x);
vec4 ceil(const vec4& x);

float fract(const float x);
vec2 fract(const vec2& x);
vec3 fract(const vec3& x);
vec4 fract(const vec4& x);

float mod(const float x, const float y);
vec2 mod(const vec2& x, const float y);
vec3 mod(const vec3& x, const float y);
vec4 mod(const vec4& x, const float y);
vec2 mod(const vec2& x, const vec2& y);
vec3 mod(const vec3& x, const vec3& y);
vec4 mod(const vec4& x, const vec4& y);

float modf(const float x, float& i);
vec2 modf(const vec2& x, vec2& i);
vec3 modf(const vec3& x, vec3& i);
vec4 modf(const vec4& x, vec4& i);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T min(const T x, const T y);

template <typename T>
vec2_t<T> min(const vec2_t<T>& x, const vec2_t<T>& y);

template <typename T>
vec2_t<T> min(const vec2_t<T>& x, const T y);

template <typename T>
vec3_t<T> min(const vec3_t<T>& x, const vec3_t<T>& y);

template <typename T>
vec3_t<T> min(const vec3_t<T>& x, const T y);

template <typename T>
vec4_t<T> min(const vec4_t<T>& x, const vec4_t<T>& y);

template <typename T>
vec4_t<T> min(const vec4_t<T>& x, const T y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec2_t<T> min(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec2_t<T> min(const swizzle_2_t<T, N, X, Y, Z, W>& x, const T y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec3_t<T> min(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec3_t<T> min(const swizzle_3_t<T, N, X, Y, Z, W>& x, const T y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec4_t<T> min(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec4_t<T> min(const swizzle_4_t<T, N, X, Y, Z, W>& x, const T y);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T max(const T x, const T y);

template <typename T>
vec2_t<T> max(const vec2_t<T>& x, const vec2_t<T>& y);

template <typename T>
vec2_t<T> max(const vec2_t<T>& x, const T y);

template <typename T>
vec3_t<T> max(const vec3_t<T>& x, const vec3_t<T>& y);

template <typename T>
vec3_t<T> max(const vec3_t<T>& x, const T y);

template <typename T>
vec4_t<T> max(const vec4_t<T>& x, const vec4_t<T>& y);

template <typename T>
vec4_t<T> max(const vec4_t<T>& x, const T y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec2_t<T> max(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec2_t<T> max(const swizzle_2_t<T, N, X, Y, Z, W>& x, const T y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec3_t<T> max(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec3_t<T> max(const swizzle_3_t<T, N, X, Y, Z, W>& x, const T y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W>
vec4_t<T> max(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& y);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec4_t<T> max(const swizzle_4_t<T, N, X, Y, Z, W>& x, const T y);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T clamp(const T x, const T minVal, const T maxVal);

template <typename T>
vec2_t<T> clamp(const vec2_t<T>& x, const vec2_t<T>& minVal, const vec2_t<T>& maxVal);

template <typename T>
vec2_t<T> clamp(const vec2_t<T>& x, const T minVal, const T maxVal);

template <typename T>
vec3_t<T> clamp(const vec3_t<T>& x, const vec3_t<T>& minVal, const vec3_t<T>& maxVal);

template <typename T>
vec3_t<T> clamp(const vec3_t<T>& x, const T minVal, const T maxVal);

template <typename T>
vec4_t<T> clamp(const vec4_t<T>& x, const vec4_t<T>& minVal, const vec4_t<T>& maxVal);

template <typename T>
vec4_t<T> clamp(const vec4_t<T>& x, const T minVal, const T maxVal);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
vec2_t<T> clamp(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& minVal, const swizzle_2_t<T, _N1, _X1, _Y1, _Z1, _W1>& maxVal);

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec2_t<T> clamp(const swizzle_2_t<T, N, X, Y, Z, W>& x, const T minVal, const T maxVal);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
vec3_t<T> clamp(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& minVal, const swizzle_3_t<T, _N1, _X1, _Y1, _Z1, _W1>& maxVal);

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec3_t<T> clamp(const swizzle_3_t<T, N, X, Y, Z, W>& x, const T minVal, const T maxVal);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
vec4_t<T> clamp(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& minVal, const swizzle_4_t<T, _N1, _X1, _Y1, _Z1, _W1>& maxVal);

template <typename T, uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W>
vec4_t<T> clamp(const swizzle_4_t<T, N, X, Y, Z, W>& x, const T minVal, const T maxVal);

// ----------------------------------------------------------------------------------------------------

float mix(const float x, const float y, const float a);
vec2 mix(const vec2& x, const vec2& y, const vec2& a);
vec3 mix(const vec3& x, const vec3& y, const vec3& a);
vec4 mix(const vec4& x, const vec4& y, const vec4& a);
vec2 mix(const vec2& x, const vec2& y, const float a);
vec3 mix(const vec3& x, const vec3& y, const float a);
vec4 mix(const vec4& x, const vec4& y, const float a);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T mix(const T x, const T y, const bool a);

template <typename T>
vec2_t<T> mix(const vec2_t<T>& x, const vec2_t<T>& y, const bvec2& a);

template <typename T>
vec3_t<T> mix(const vec3_t<T>& x, const vec3_t<T>& y, const bvec3& a);

template <typename T>
vec4_t<T> mix(const vec4_t<T>& x, const vec4_t<T>& y, const bvec4& a);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
vec2_t<T> mix(const swizzle_2_t<T, N, X, Y, Z, W>& x, const swizzle_2_t<T, _N, _X, _Y, _Z, _W>& y, const swizzle_2_t<bool, _N1, _X1, _Y1, _Z1, _W1>& a);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
vec3_t<T> mix(const swizzle_3_t<T, N, X, Y, Z, W>& x, const swizzle_3_t<T, _N, _X, _Y, _Z, _W>& y, const swizzle_3_t<bool, _N1, _X1, _Y1, _Z1, _W1>& a);

template <typename T,
  uint8 N, uint8 X, uint8 Y, uint8 Z, uint8 W,
  uint8 _N, uint8 _X, uint8 _Y, uint8 _Z, uint8 _W,
  uint8 _N1, uint8 _X1, uint8 _Y1, uint8 _Z1, uint8 _W1>
vec4_t<T> mix(const swizzle_4_t<T, N, X, Y, Z, W>& x, const swizzle_4_t<T, _N, _X, _Y, _Z, _W>& y, const swizzle_4_t<bool, _N1, _X1, _Y1, _Z1, _W1>& a);

// ----------------------------------------------------------------------------------------------------

float step(const float edge, const float x);
vec2 step(const vec2& edge, const vec2& x);
vec3 step(const vec3& edge, const vec3& x);
vec4 step(const vec4& edge, const vec4& x);
vec2 step(const float edge, const vec2& x);
vec3 step(const float edge, const vec3& x);
vec4 step(const float edge, const vec4& x);

float smoothstep(const float edge0, const float edge1, const float x);
vec2 smoothstep(const vec2& edge0, const vec2& edge1, const vec2& x);
vec3 smoothstep(const vec3& edge0, const vec3& edge1, const vec3& x);
vec4 smoothstep(const vec4& edge0, const vec4& edge1, const vec4& x);
vec2 smoothstep(const float edge0, const float edge1, const vec2& x);
vec3 smoothstep(const float edge0, const float edge1, const vec3& x);
vec4 smoothstep(const float edge0, const float edge1, const vec4& x);

float isnan(const float x);
vec2 isnan(const vec2& x);
vec3 isnan(const vec3& x);
vec4 isnan(const vec4& x);

float isinf(const float x);
vec2 isinf(const vec2& x);
vec3 isinf(const vec3& x);
vec4 isinf(const vec4& x);

int floatBitsToInt(const float x);
ivec2 floatBitsToInt(const vec2& x);
ivec3 floatBitsToInt(const vec3& x);
ivec4 floatBitsToInt(const vec4& x);

uint floatBitsToUint(const float x);
uvec2 floatBitsToUint(const vec2& x);
uvec3 floatBitsToUint(const vec3& x);
uvec4 floatBitsToUint(const vec4& x);

float intBitsToFloat(const int x);
vec2 intBitsToFloat(const ivec2& x);
vec3 intBitsToFloat(const ivec3& x);
vec4 intBitsToFloat(const ivec4& x);

float uintBitsToFloat(const uint x);
vec2 uintBitsToFloat(const uvec2& x);
vec3 uintBitsToFloat(const uvec3& x);
vec4 uintBitsToFloat(const uvec4& x);

float frexp(const float x, int& exp);
vec2 frexp(const vec2& x, ivec2& exp);
vec3 frexp(const vec3& x, ivec3& exp);
vec4 frexp(const vec4& x, ivec4& exp);

float ldexp(const float x, const int exp);
vec2 ldexp(const vec2& x, const ivec2& exp);
vec3 ldexp(const vec3& x, const ivec3& exp);
vec4 ldexp(const vec4& x, const ivec4& exp);

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END

#include "func_common.inl"

#endif // GNM_FUNCTIONS_FUNC_COMMON_H_