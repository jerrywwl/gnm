#ifndef GNM_FUNCTIONS_FUNC_COMMON_H_
#define GNM_FUNCTIONS_FUNC_COMMON_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Common Functions

GNM_NAMESPACE_BEGIN

template <typename T>
T Abs(const T x);
vec2 Abs(const vec2& x);
vec3 Abs(const vec3& x);
vec4 Abs(const vec4& x);
ivec2 Abs(const ivec2& x);
ivec3 Abs(const ivec3& x);
ivec4 Abs(const ivec4& x);

template <typename T>
T Sign(const T x);
vec2 Sign(const vec2& x);
vec3 Sign(const vec3& x);
vec4 Sign(const vec4& x);
ivec2 Sign(const ivec2& x);
ivec3 Sign(const ivec3& x);
ivec4 Sign(const ivec4& x);

float Floor(const float x);
vec2 Floor(const vec2& x);
vec3 Floor(const vec3& x);
vec4 Floor(const vec4& x);

float Trunc(const float x);
vec2 Trunc(const vec2& x);
vec3 Trunc(const vec3& x);
vec4 Trunc(const vec4& x);

float Round(const float x);
vec2 Round(const vec2& x);
vec3 Round(const vec3& x);
vec4 Round(const vec4& x);

float RoundEven(const float x);
vec2 RoundEven(const vec2& x);
vec3 RoundEven(const vec3& x);
vec4 RoundEven(const vec4& x);

float Ceil(const float x);
vec2 Ceil(const vec2& x);
vec3 Ceil(const vec3& x);
vec4 Ceil(const vec4& x);

float Fract(const float x);
vec2 Fract(const vec2& x);
vec3 Fract(const vec3& x);
vec4 Fract(const vec4& x);

float Mod(const float x, const float y);
vec2 Mod(const vec2& x, const float y);
vec3 Mod(const vec3& x, const float y);
vec4 Mod(const vec4& x, const float y);
vec2 Mod(const vec2& x, const vec2& y);
vec3 Mod(const vec3& x, const vec3& y);
vec4 Mod(const vec4& x, const vec4& y);

float Modf(const float x, float& i);
vec2 Modf(const vec2& x, vec2& i);
vec3 Modf(const vec3& x, vec3& i);
vec4 Modf(const vec4& x, vec4& i);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T Min(const T x, const T y);

vec2 Min(const vec2& x, const vec2& y);
vec2 Min(const vec2& x, const float y);
vec3 Min(const vec3& x, const vec3& y);
vec3 Min(const vec3& x, const float y);
vec4 Min(const vec4& x, const vec4& y);
vec4 Min(const vec4& x, const float y);
ivec2 Min(const ivec2& x, const ivec2& y);
ivec2 Min(const ivec2& x, const int y);
ivec3 Min(const ivec3& x, const ivec3& y);
ivec3 Min(const ivec3& x, const int y);
ivec4 Min(const ivec4& x, const ivec4& y);
ivec4 Min(const ivec4& x, const int y);
uvec2 Min(const uvec2& x, const uvec2& y);
uvec2 Min(const uvec2& x, const uint y);
uvec3 Min(const uvec3& x, const uvec3& y);
uvec3 Min(const uvec3& x, const uint y);
uvec4 Min(const uvec4& x, const uvec4& y);
uvec4 Min(const uvec4& x, const uint y);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T Max(const T x, const T y);
vec2 Max(const vec2& x, const vec2& y);
vec2 Max(const vec2& x, const float y);
vec3 Max(const vec3& x, const vec3& y);
vec3 Max(const vec3& x, const float y);
vec4 Max(const vec4& x, const vec4& y);
vec4 Max(const vec4& x, const float y);
ivec2 Max(const ivec2& x, const ivec2& y);
ivec2 Max(const ivec2& x, const int y);
ivec3 Max(const ivec3& x, const ivec3& y);
ivec3 Max(const ivec3& x, const int y);
ivec4 Max(const ivec4& x, const ivec4& y);
ivec4 Max(const ivec4& x, const int y);
uvec2 Max(const uvec2& x, const uvec2& y);
uvec2 Max(const uvec2& x, const uint y);
uvec3 Max(const uvec3& x, const uvec3& y);
uvec3 Max(const uvec3& x, const uint y);
uvec4 Max(const uvec4& x, const uvec4& y);
uvec4 Max(const uvec4& x, const uint y);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T Clamp(const T x, const T minVal, const T maxVal);
vec2 Clamp(const vec2& x, const vec2& minVal, const vec2& maxVal);
vec2 Clamp(const vec2& x, const float minVal, const float maxVal);
vec3 Clamp(const vec3& x, const vec3& minVal, const vec3& maxVal);
vec3 Clamp(const vec3& x, const float minVal, const float maxVal);
vec4 Clamp(const vec4& x, const vec4& minVal, const vec4& maxVal);
vec4 Clamp(const vec4& x, const float minVal, const float maxVal);
ivec2 Clamp(const ivec2& x, const ivec2& minVal, const ivec2& maxVal);
ivec2 Clamp(const ivec2& x, const int minVal, const int maxVal);
ivec3 Clamp(const ivec3& x, const ivec3& minVal, const ivec3& maxVal);
ivec3 Clamp(const ivec3& x, const int minVal, const int maxVal);
ivec4 Clamp(const ivec4& x, const ivec4& minVal, const ivec4& maxVal);
ivec4 Clamp(const ivec4& x, const int minVal, const int maxVal);
uvec2 Clamp(const uvec2& x, const uvec2& minVal, const uvec2& maxVal);
uvec2 Clamp(const uvec2& x, const uint minVal, const uint maxVal);
uvec3 Clamp(const uvec3& x, const uvec3& minVal, const uvec3& maxVal);
uvec3 Clamp(const uvec3& x, const uint minVal, const uint maxVal);
uvec4 Clamp(const uvec4& x, const uvec4& minVal, const uvec4& maxVal);
uvec4 Clamp(const uvec4& x, const uint minVal, const uint maxVal);

// ----------------------------------------------------------------------------------------------------

float Mix(const float x, const float y, const float a);
vec2 Mix(const vec2& x, const vec2& y, const vec2& a);
vec3 Mix(const vec3& x, const vec3& y, const vec3& a);
vec4 Mix(const vec4& x, const vec4& y, const vec4& a);
vec2 Mix(const vec2& x, const vec2& y, const float a);
vec3 Mix(const vec3& x, const vec3& y, const float a);
vec4 Mix(const vec4& x, const vec4& y, const float a);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T Mix(const T x, const T y, const bool a);
vec2 Mix(const vec2& x, const vec2& y, const bvec2& a);
vec3 Mix(const vec3& x, const vec3& y, const bvec3& a);
vec4 Mix(const vec4& x, const vec4& y, const bvec4& a);
ivec2 Mix(const ivec2& x, const ivec2& y, const bvec2& a);
ivec3 Mix(const ivec3& x, const ivec3& y, const bvec3& a);
ivec4 Mix(const ivec4& x, const ivec4& y, const bvec4& a);
uvec2 Mix(const uvec2& x, const uvec2& y, const bvec2& a);
uvec3 Mix(const uvec3& x, const uvec3& y, const bvec3& a);
uvec4 Mix(const uvec4& x, const uvec4& y, const bvec4& a);
bvec2 Mix(const bvec2& x, const bvec2& y, const bvec2& a);
bvec3 Mix(const bvec3& x, const bvec3& y, const bvec3& a);
bvec4 Mix(const bvec4& x, const bvec4& y, const bvec4& a);

// ----------------------------------------------------------------------------------------------------

float Step(const float edge, const float x);
vec2 Step(const vec2& edge, const vec2& x);
vec3 Step(const vec3& edge, const vec3& x);
vec4 Step(const vec4& edge, const vec4& x);
vec2 Step(const float edge, const vec2& x);
vec3 Step(const float edge, const vec3& x);
vec4 Step(const float edge, const vec4& x);

float Smoothstep(const float edge0, const float edge1, const float x);
vec2 Smoothstep(const vec2& edge0, const vec2& edge1, const vec2& x);
vec3 Smoothstep(const vec3& edge0, const vec3& edge1, const vec3& x);
vec4 Smoothstep(const vec4& edge0, const vec4& edge1, const vec4& x);
vec2 Smoothstep(const float edge0, const float edge1, const vec2& x);
vec3 Smoothstep(const float edge0, const float edge1, const vec3& x);
vec4 Smoothstep(const float edge0, const float edge1, const vec4& x);

float Isnan(const float x);
vec2 Isnan(const vec2& x);
vec3 Isnan(const vec3& x);
vec4 Isnan(const vec4& x);

float Isinf(const float x);
vec2 Isinf(const vec2& x);
vec3 Isinf(const vec3& x);
vec4 Isinf(const vec4& x);

int FloatBitsToInt(const float x);
ivec2 FloatBitsToInt(const vec2& x);
ivec3 FloatBitsToInt(const vec3& x);
ivec4 FloatBitsToInt(const vec4& x);

uint FloatBitsToUint(const float x);
uvec2 FloatBitsToUint(const vec2& x);
uvec3 FloatBitsToUint(const vec3& x);
uvec4 FloatBitsToUint(const vec4& x);

float IntBitsToFloat(const int x);
vec2 IntBitsToFloat(const ivec2& x);
vec3 IntBitsToFloat(const ivec3& x);
vec4 IntBitsToFloat(const ivec4& x);

float UintBitsToFloat(const uint x);
vec2 UintBitsToFloat(const uvec2& x);
vec3 UintBitsToFloat(const uvec3& x);
vec4 UintBitsToFloat(const uvec4& x);

float Frexp(const float x, int& Exp);
vec2 Frexp(const vec2& x, ivec2& Exp);
vec3 Frexp(const vec3& x, ivec3& Exp);
vec4 Frexp(const vec4& x, ivec4& Exp);

float Ldexp(const float x, const int Exp);
vec2 Ldexp(const vec2& x, const ivec2& Exp);
vec3 Ldexp(const vec3& x, const ivec3& Exp);
vec4 Ldexp(const vec4& x, const ivec4& Exp);

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END

#include "func_common.inl"

#endif // GNM_FUNCTIONS_FUNC_COMMON_H_