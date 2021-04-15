#ifndef GNM_FUNCTIONS_FUNC_GEOMETRIC_H_
#define GNM_FUNCTIONS_FUNC_GEOMETRIC_H_

#include "func_common.h"

// Geometric Functions

GNM_NAMESPACE_BEGIN

template <typename T>
T length(const T x);
float length(const vec2& x);
float length(const vec3& x);
float length(const vec4& x);

template <typename T>
T distance(const T p0, const T p1);
float distance(const vec2& p0, const vec2& p1);
float distance(const vec3& p0, const vec3& p1);
float distance(const vec4& p0, const vec4& p1);

template <typename T>
T dot(const T x, const T y);
float dot(const vec2& x, const vec2& y);
float dot(const vec3& x, const vec3& y);
float dot(const vec4& x, const vec4& y);

vec3 cross(const vec3& x, const vec3& y);

template <typename T>
T normalize(const T x);
vec2 normalize(const vec2& x);
vec3 normalize(const vec3& x);
vec4 normalize(const vec4& x);

template <typename T>
T faceforward(const T N, const T I, const T Nref);
vec2 faceforward(const vec2& N, const vec2& I, const vec2& Nref);
vec3 faceforward(const vec3& N, const vec3& I, const vec3& Nref);
vec4 faceforward(const vec4& N, const vec4& I, const vec4& Nref);

template <typename T>
T reflect(const T I, const T N);
vec2 reflect(const vec2& I, const vec2& N);
vec3 reflect(const vec3& I, const vec3& N);
vec4 reflect(const vec4& I, const vec4& N);

template <typename T>
T refract(const T I, const T N, const T eta);
vec2 refract(const vec2& I, const vec2& N, const float eta);
vec3 refract(const vec3& I, const vec3& N, const float eta);
vec4 refract(const vec4& I, const vec4& N, const float eta);

GNM_NAMESPACE_END

#include "func_geometric.inl"

#endif // GNM_FUNCTIONS_FUNC_GEOMETRIC_H_