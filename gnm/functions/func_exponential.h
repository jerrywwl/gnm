#ifndef GNM_FUNCTIONS_FUNC_EXPONENTIAL_H_
#define GNM_FUNCTIONS_FUNC_EXPONENTIAL_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Exponential Functions

GNM_NAMESPACE_BEGIN

float Pow(const float x, const float y);
vec2 Pow(const vec2& x, const vec2& y);
vec3 Pow(const vec3& x, const vec3& y);
vec4 Pow(const vec4& x, const vec4& y);

float Exp(const float x);
vec2 Exp(const vec2& x);
vec3 Exp(const vec3& x);
vec4 Exp(const vec4& x);

float Log(const float x);
vec2 Log(const vec2& x);
vec3 Log(const vec3& x);
vec4 Log(const vec4& x);

float Exp2(const float x);
vec2 Exp2(const vec2& x);
vec3 Exp2(const vec3& x);
vec4 Exp2(const vec4& x);

float Log2(const float x);
vec2 Log2(const vec2& x);
vec3 Log2(const vec3& x);
vec4 Log2(const vec4& x);

float Sqrt(const float x);
vec2 Sqrt(const vec2& x);
vec3 Sqrt(const vec3& x);
vec4 Sqrt(const vec4& x);

float Inversesqrt(const float x);
vec2 Inversesqrt(const vec2& x);
vec3 Inversesqrt(const vec3& x);
vec4 Inversesqrt(const vec4& x);

GNM_NAMESPACE_END

#include "func_exponential.inl"

#endif // GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_