#ifndef GNM_FUNCTIONS_FUNC_COMMON_H_
#define GNM_FUNCTIONS_FUNC_COMMON_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Common Functions

GNM_NAMESPACE_BEGIN

template <typename T>
T abs(const T x);
vec2 abs(const vec2& x);
vec3 abs(const vec3& x);
vec4 abs(const vec4& x);
ivec2 abs(const ivec2& x);
ivec3 abs(const ivec3& x);
ivec4 abs(const ivec4& x);

template <typename T>
T sign(const T x);
vec2 sign(const vec2& x);
vec3 sign(const vec3& x);
vec4 sign(const vec4& x);
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

vec2 min(const vec2& x, const vec2& y);
vec2 min(const vec2& x, const float y);
vec3 min(const vec3& x, const vec3& y);
vec3 min(const vec3& x, const float y);
vec4 min(const vec4& x, const vec4& y);
vec4 min(const vec4& x, const float y);
ivec2 min(const ivec2& x, const ivec2& y);
ivec2 min(const ivec2& x, const int y);
ivec3 min(const ivec3& x, const ivec3& y);
ivec3 min(const ivec3& x, const int y);
ivec4 min(const ivec4& x, const ivec4& y);
ivec4 min(const ivec4& x, const int y);
uvec2 min(const uvec2& x, const uvec2& y);
uvec2 min(const uvec2& x, const uint y);
uvec3 min(const uvec3& x, const uvec3& y);
uvec3 min(const uvec3& x, const uint y);
uvec4 min(const uvec4& x, const uvec4& y);
uvec4 min(const uvec4& x, const uint y);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T max(const T x, const T y);
vec2 max(const vec2& x, const vec2& y);
vec2 max(const vec2& x, const float y);
vec3 max(const vec3& x, const vec3& y);
vec3 max(const vec3& x, const float y);
vec4 max(const vec4& x, const vec4& y);
vec4 max(const vec4& x, const float y);
ivec2 max(const ivec2& x, const ivec2& y);
ivec2 max(const ivec2& x, const int y);
ivec3 max(const ivec3& x, const ivec3& y);
ivec3 max(const ivec3& x, const int y);
ivec4 max(const ivec4& x, const ivec4& y);
ivec4 max(const ivec4& x, const int y);
uvec2 max(const uvec2& x, const uvec2& y);
uvec2 max(const uvec2& x, const uint y);
uvec3 max(const uvec3& x, const uvec3& y);
uvec3 max(const uvec3& x, const uint y);
uvec4 max(const uvec4& x, const uvec4& y);
uvec4 max(const uvec4& x, const uint y);

// ----------------------------------------------------------------------------------------------------

template <typename T>
T clamp(const T x, const T minVal, const T maxVal);
vec2 clamp(const vec2& x, const vec2& minVal, const vec2& maxVal);
vec2 clamp(const vec2& x, const float minVal, const float maxVal);
vec3 clamp(const vec3& x, const vec3& minVal, const vec3& maxVal);
vec3 clamp(const vec3& x, const float minVal, const float maxVal);
vec4 clamp(const vec4& x, const vec4& minVal, const vec4& maxVal);
vec4 clamp(const vec4& x, const float minVal, const float maxVal);
ivec2 clamp(const ivec2& x, const ivec2& minVal, const ivec2& maxVal);
ivec2 clamp(const ivec2& x, const int minVal, const int maxVal);
ivec3 clamp(const ivec3& x, const ivec3& minVal, const ivec3& maxVal);
ivec3 clamp(const ivec3& x, const int minVal, const int maxVal);
ivec4 clamp(const ivec4& x, const ivec4& minVal, const ivec4& maxVal);
ivec4 clamp(const ivec4& x, const int minVal, const int maxVal);
uvec2 clamp(const uvec2& x, const uvec2& minVal, const uvec2& maxVal);
uvec2 clamp(const uvec2& x, const uint minVal, const uint maxVal);
uvec3 clamp(const uvec3& x, const uvec3& minVal, const uvec3& maxVal);
uvec3 clamp(const uvec3& x, const uint minVal, const uint maxVal);
uvec4 clamp(const uvec4& x, const uvec4& minVal, const uvec4& maxVal);
uvec4 clamp(const uvec4& x, const uint minVal, const uint maxVal);

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
vec2 mix(const vec2& x, const vec2& y, const bvec2& a);
vec3 mix(const vec3& x, const vec3& y, const bvec3& a);
vec4 mix(const vec4& x, const vec4& y, const bvec4& a);
ivec2 mix(const ivec2& x, const ivec2& y, const bvec2& a);
ivec3 mix(const ivec3& x, const ivec3& y, const bvec3& a);
ivec4 mix(const ivec4& x, const ivec4& y, const bvec4& a);
uvec2 mix(const uvec2& x, const uvec2& y, const bvec2& a);
uvec3 mix(const uvec3& x, const uvec3& y, const bvec3& a);
uvec4 mix(const uvec4& x, const uvec4& y, const bvec4& a);
bvec2 mix(const bvec2& x, const bvec2& y, const bvec2& a);
bvec3 mix(const bvec3& x, const bvec3& y, const bvec3& a);
bvec4 mix(const bvec4& x, const bvec4& y, const bvec4& a);

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