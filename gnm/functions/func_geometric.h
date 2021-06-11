#ifndef GNM_FUNCTIONS_FUNC_GEOMETRIC_H_
#define GNM_FUNCTIONS_FUNC_GEOMETRIC_H_

#include "func_common.h"

// Geometric Functions

GNM_NAMESPACE_BEGIN

float Length(const float x);
float Length(const vec2& x);
float Length(const vec3& x);
float Length(const vec4& x);

float Distance(const float p0, const float p1);
float Distance(const vec2& p0, const vec2& p1);
float Distance(const vec3& p0, const vec3& p1);
float Distance(const vec4& p0, const vec4& p1);

float Dot(const float x, const float y);
float Dot(const vec2& x, const vec2& y);
float Dot(const vec3& x, const vec3& y);
float Dot(const vec4& x, const vec4& y);

vec3 Cross(const vec3& x, const vec3& y);

float Normalize(const float x);
vec2 Normalize(const vec2& x);
vec3 Normalize(const vec3& x);
vec4 Normalize(const vec4& x);

float Faceforward(const float N, const float I, const float Nref);
vec2 Faceforward(const vec2& N, const vec2& I, const vec2& Nref);
vec3 Faceforward(const vec3& N, const vec3& I, const vec3& Nref);
vec4 Faceforward(const vec4& N, const vec4& I, const vec4& Nref);

float Reflect(const float I, const float N);
vec2 Reflect(const vec2& I, const vec2& N);
vec3 Reflect(const vec3& I, const vec3& N);
vec4 Reflect(const vec4& I, const vec4& N);

float Refract(const float I, const float N, const float eta);
vec2 Refract(const vec2& I, const vec2& N, const float eta);
vec3 Refract(const vec3& I, const vec3& N, const float eta);
vec4 Refract(const vec4& I, const vec4& N, const float eta);

GNM_NAMESPACE_END

#include "func_geometric.inl"

#endif // GNM_FUNCTIONS_FUNC_GEOMETRIC_H_