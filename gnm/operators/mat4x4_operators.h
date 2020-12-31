#ifndef GNM_OPERATORS_MAT4X4_OPERATORS_H_
#define GNM_OPERATORS_MAT4X4_OPERATORS_H_

#include "../types/mat4x3_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat4x4& a, const mat4x4& b);

bool operator != (const mat4x4& a, const mat4x4& b);

mat4x4 operator + (const mat4x4& a, const mat4x4& b);

mat4x4 operator - (const mat4x4& a, const mat4x4& b);

mat4x4 operator * (const mat4x4& a, const mat4x4& b);

vec4 operator * (const mat4x4& a, const vec4& b);

vec4 operator * (const vec4& a, const mat4x4& b);

mat4x4 operator * (const float a, const mat4x4& b);

mat4x4 operator * (const mat4x4& a, const float b);

mat4x4 operator / (const float a, const mat4x4& b);

mat4x4 operator / (const mat4x4& a, const float b);

mat4x4 operator + (const mat4x4& mat);

mat4x4 operator - (const mat4x4& mat);

mat4x4& operator += (mat4x4& a, const mat4x4& b);

mat4x4& operator -= (mat4x4& a, const mat4x4& b);

mat4x4& operator *= (mat4x4& a, const mat4x4& b);

mat4x4& operator *= (mat4x4& a, const float b);

mat4x4& operator /= (mat4x4& a, const float b);

GNM_NAMESPACE_END

#include "mat4x4_operators.inl"

#endif // GNM_OPERATORS_MAT4X4_OPERATORS_H_
