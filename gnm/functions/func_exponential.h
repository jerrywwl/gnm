#ifndef GNM_FUNCTIONS_FUNC_EXPONENTIAL_H_
#define GNM_FUNCTIONS_FUNC_EXPONENTIAL_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Exponential Functions

GNM_NAMESPACE_BEGIN

float pow(const float x, const float y);
vec2 pow(const vec2& x, const vec2& y);
vec3 pow(const vec3& x, const vec3& y);
vec4 pow(const vec4& x, const vec4& y);

float exp(const float x);
vec2 exp(const vec2& x);
vec3 exp(const vec3& x);
vec4 exp(const vec4& x);

float log(const float x);
vec2 log(const vec2& x);
vec3 log(const vec3& x);
vec4 log(const vec4& x);

float exp2(const float x);
vec2 exp2(const vec2& x);
vec3 exp2(const vec3& x);
vec4 exp2(const vec4& x);

float log2(const float x);
vec2 log2(const vec2& x);
vec3 log2(const vec3& x);
vec4 log2(const vec4& x);

float sqrt(const float x);
vec2 sqrt(const vec2& x);
vec3 sqrt(const vec3& x);
vec4 sqrt(const vec4& x);

float inversesqrt(const float x);
vec2 inversesqrt(const vec2& x);
vec3 inversesqrt(const vec3& x);
vec4 inversesqrt(const vec4& x);

GNM_NAMESPACE_END

#include "func_exponential.inl"

#endif // GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_