#ifndef GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_
#define GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Angle and Trigonometry Functions

GNM_NAMESPACE_BEGIN

float radians(const float x);
vec2 radians(const vec2& x);
vec3 radians(const vec3& x);
vec4 radians(const vec4& x);

float degrees(const float x);
vec2 degrees(const vec2& x);
vec3 degrees(const vec3& x);
vec4 degrees(const vec4& x);

float sin(const float x);
vec2 sin(const vec2& x);
vec3 sin(const vec3& x);
vec4 sin(const vec4& x);

float cos(const float x);
vec2 cos(const vec2& x);
vec3 cos(const vec3& x);
vec4 cos(const vec4& x);

float tan(const float x);
vec2 tan(const vec2& x);
vec3 tan(const vec3& x);
vec4 tan(const vec4& x);

float asin(const float x);
vec2 asin(const vec2& x);
vec3 asin(const vec3& x);
vec4 asin(const vec4& x);

float acos(const float x);
vec2 acos(const vec2& x);
vec3 acos(const vec3& x);
vec4 acos(const vec4& x);

float atan(const float y, const float x);
vec2 atan(const vec2& y, const vec2& x);
vec3 atan(const vec3& y, const vec3& x);
vec4 atan(const vec4& y, const vec4& x);

float atan(const float x);
vec2 atan(const vec2& x);
vec3 atan(const vec3& x);
vec4 atan(const vec4& x);

float sinh(const float x);
vec2 sinh(const vec2& x);
vec3 sinh(const vec3& x);
vec4 sinh(const vec4& x);

float cosh(const float x);
vec2 cosh(const vec2& x);
vec3 cosh(const vec3& x);
vec4 cosh(const vec4& x);

float tanh(const float x);
vec2 tanh(const vec2& x);
vec3 tanh(const vec3& x);
vec4 tanh(const vec4& x);

float asinh(const float x);
vec2 asinh(const vec2& x);
vec3 asinh(const vec3& x);
vec4 asinh(const vec4& x);

float acosh(const float x);
vec2 acosh(const vec2& x);
vec3 acosh(const vec3& x);
vec4 acosh(const vec4& x);

float atanh(const float x);
vec2 atanh(const vec2& x);
vec3 atanh(const vec3& x);
vec4 atanh(const vec4& x);

GNM_NAMESPACE_END

#include "func_trigonometric.inl"

#endif // GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_