#ifndef GNM_OPERATORS_MAT4X3_OPERATORS_H_
#define GNM_OPERATORS_MAT4X3_OPERATORS_H_

#include "../types/mat4x4_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat4x3& a, const mat4x3& b);

bool operator != (const mat4x3& a, const mat4x3& b);

mat4x3 operator + (const mat4x3& a, const mat4x3& b);

mat4x3 operator - (const mat4x3& a, const mat4x3& b);

mat4x3 operator * (const mat4x3& a, const mat4x4& b);

mat4x3 operator * (const mat3x3& a, const mat4x3& b);

vec3 operator * (const mat4x3& a, const vec4& b);

vec4 operator * (const vec3& a, const mat4x3& b);

mat4x3 operator * (const float a, const mat4x3& b);

mat4x3 operator * (const mat4x3& a, const float b);

mat4x3 operator / (const float a, const mat4x3& b);

mat4x3 operator / (const mat4x3& a, const float b);

mat4x3 operator + (const mat4x3& mat);

mat4x3 operator - (const mat4x3& mat);

mat4x3& operator += (mat4x3& a, const mat4x3& b);

mat4x3& operator -= (mat4x3& a, const mat4x3& b);

mat4x3& operator *= (mat4x3& a, const mat4x4& b);

mat4x3& operator *= (mat4x3& a, const float b);

mat4x3& operator /= (mat4x3& a, const float b);

GNM_NAMESPACE_END

#include "mat4x3_operators.inl"

#endif // GNM_OPERATORS_MAT4X3_OPERATORS_H_