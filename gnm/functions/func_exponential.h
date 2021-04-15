#ifndef GNM_FUNCTIONS_FUNC_EXPONENTIAL_H_
#define GNM_FUNCTIONS_FUNC_EXPONENTIAL_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Exponential Functions

GNM_NAMESPACE_BEGIN

template <typename T>
T pow(const T x, const T y);
vec2 pow(const vec2& x, const vec2& y);
vec3 pow(const vec3& x, const vec3& y);
vec4 pow(const vec4& x, const vec4& y);

template <typename T>
T exp(const T x);
vec2 exp(const vec2& x);
vec3 exp(const vec3& x);
vec4 exp(const vec4& x);

template <typename T>
T log(const T x);
vec2 log(const vec2& x);
vec3 log(const vec3& x);
vec4 log(const vec4& x);

template <typename T>
T exp2(const T x);
vec2 exp2(const vec2& x);
vec3 exp2(const vec3& x);
vec4 exp2(const vec4& x);

template <typename T>
T log2(const T x);
vec2 log2(const vec2& x);
vec3 log2(const vec3& x);
vec4 log2(const vec4& x);

template <typename T>
T sqrt(const T x);
vec2 sqrt(const vec2& x);
vec3 sqrt(const vec3& x);
vec4 sqrt(const vec4& x);

template <typename T>
T inversesqrt(const T x);
vec2 inversesqrt(const vec2& x);
vec3 inversesqrt(const vec3& x);
vec4 inversesqrt(const vec4& x);

GNM_NAMESPACE_END

#include "func_exponential.inl"

#endif // GNM_FUNCTIONS_FUNC_TRIGONOMETRIC_H_