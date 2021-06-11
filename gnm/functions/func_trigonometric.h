#ifndef GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_
#define GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Angle and Trigonometry Functions

GNM_NAMESPACE_BEGIN

float Radians(const float x);
vec2 Radians(const vec2& x);
vec3 Radians(const vec3& x);
vec4 Radians(const vec4& x);

float Degrees(const float x);
vec2 Degrees(const vec2& x);
vec3 Degrees(const vec3& x);
vec4 Degrees(const vec4& x);

float Sin(const float x);
vec2 Sin(const vec2& x);
vec3 Sin(const vec3& x);
vec4 Sin(const vec4& x);

float Cos(const float x);
vec2 Cos(const vec2& x);
vec3 Cos(const vec3& x);
vec4 Cos(const vec4& x);

float Tan(const float x);
vec2 Tan(const vec2& x);
vec3 Tan(const vec3& x);
vec4 Tan(const vec4& x);

float Asin(const float x);
vec2 Asin(const vec2& x);
vec3 Asin(const vec3& x);
vec4 Asin(const vec4& x);

float Acos(const float x);
vec2 Acos(const vec2& x);
vec3 Acos(const vec3& x);
vec4 Acos(const vec4& x);

float Atan(const float y, const float x);
vec2 Atan(const vec2& y, const vec2& x);
vec3 Atan(const vec3& y, const vec3& x);
vec4 Atan(const vec4& y, const vec4& x);

float Atan(const float x);
vec2 Atan(const vec2& x);
vec3 Atan(const vec3& x);
vec4 Atan(const vec4& x);

float Sinh(const float x);
vec2 Sinh(const vec2& x);
vec3 Sinh(const vec3& x);
vec4 Sinh(const vec4& x);

float Cosh(const float x);
vec2 Cosh(const vec2& x);
vec3 Cosh(const vec3& x);
vec4 Cosh(const vec4& x);

float Tanh(const float x);
vec2 Tanh(const vec2& x);
vec3 Tanh(const vec3& x);
vec4 Tanh(const vec4& x);

float Asinh(const float x);
vec2 Asinh(const vec2& x);
vec3 Asinh(const vec3& x);
vec4 Asinh(const vec4& x);

float Acosh(const float x);
vec2 Acosh(const vec2& x);
vec3 Acosh(const vec3& x);
vec4 Acosh(const vec4& x);

float Atanh(const float x);
vec2 Atanh(const vec2& x);
vec3 Atanh(const vec3& x);
vec4 Atanh(const vec4& x);

GNM_NAMESPACE_END

#include "func_trigonometric.inl"

#endif // GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_