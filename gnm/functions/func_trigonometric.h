#ifndef GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_
#define GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Angle and Trigonometry Functions

GNM_NAMESPACE_BEGIN

template <typename T>
T radians(const T x);
vec2 radians(const vec2& x);
vec3 radians(const vec3& x);
vec4 radians(const vec4& x);

template <typename T>
T degrees(const T x);
vec2 degrees(const vec2& x);
vec3 degrees(const vec3& x);
vec4 degrees(const vec4& x);

template <typename T>
T sin(const T x);
vec2 sin(const vec2& x);
vec3 sin(const vec3& x);
vec4 sin(const vec4& x);

template <typename T>
T cos(const T x);
vec2 cos(const vec2& x);
vec3 cos(const vec3& x);
vec4 cos(const vec4& x);

template <typename T>
T tan(const T x);
vec2 tan(const vec2& x);
vec3 tan(const vec3& x);
vec4 tan(const vec4& x);

template <typename T>
T asin(const T x);
vec2 asin(const vec2& x);
vec3 asin(const vec3& x);
vec4 asin(const vec4& x);

template <typename T>
T acos(const T x);
vec2 acos(const vec2& x);
vec3 acos(const vec3& x);
vec4 acos(const vec4& x);

template <typename T>
T atan(const T y, const T x);
vec2 atan(const vec2& y, const vec2& x);
vec3 atan(const vec3& y, const vec3& x);
vec4 atan(const vec4& y, const vec4& x);

template <typename T>
T atan(const T x);
vec2 atan(const vec2& x);
vec3 atan(const vec3& x);
vec4 atan(const vec4& x);

template <typename T>
T sinh(const T x);
vec2 sinh(const vec2& x);
vec3 sinh(const vec3& x);
vec4 sinh(const vec4& x);

template <typename T>
T cosh(const T x);
vec2 cosh(const vec2& x);
vec3 cosh(const vec3& x);
vec4 cosh(const vec4& x);

template <typename T>
T tanh(const T x);
vec2 tanh(const vec2& x);
vec3 tanh(const vec3& x);
vec4 tanh(const vec4& x);

template <typename T>
T asinh(const T x);
vec2 asinh(const vec2& x);
vec3 asinh(const vec3& x);
vec4 asinh(const vec4& x);

template <typename T>
T acosh(const T x);
vec2 acosh(const vec2& x);
vec3 acosh(const vec3& x);
vec4 acosh(const vec4& x);

template <typename T>
T atanh(const T x);
vec2 atanh(const vec2& x);
vec3 atanh(const vec3& x);
vec4 atanh(const vec4& x);

GNM_NAMESPACE_END

#include "func_trigonometric.inl"

#endif // GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_