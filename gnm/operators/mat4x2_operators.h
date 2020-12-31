#ifndef GNM_OPERATORS_MAT4X2_OPERATORS_H_
#define GNM_OPERATORS_MAT4X2_OPERATORS_H_

#include "../types/mat4x4_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat4x2& a, const mat4x2& b);

bool operator != (const mat4x2& a, const mat4x2& b);

mat4x2 operator + (const mat4x2& a, const mat4x2& b);

mat4x2 operator - (const mat4x2& a, const mat4x2& b);

mat4x2 operator * (const mat4x2& a, const mat4x4& b);

mat4x2 operator * (const mat2x2& a, const mat4x2& b);

vec2 operator * (const mat4x2& a, const vec4& b);

vec4 operator * (const vec2& a, const mat4x2& b);

mat4x2 operator * (const float a, const mat4x2& b);

mat4x2 operator * (const mat4x2& a, const float b);

mat4x2 operator / (const float a, const mat4x2& b);

mat4x2 operator / (const mat4x2& a, const float b);

mat4x2 operator + (const mat4x2& mat);

mat4x2 operator - (const mat4x2& mat);

mat4x2& operator += (mat4x2& a, const mat4x2& b);

mat4x2& operator -= (mat4x2& a, const mat4x2& b);

mat4x2& operator *= (mat4x2& a, const mat4x4& b);

mat4x2& operator *= (mat4x2& a, const float b);

mat4x2& operator /= (mat4x2& a, const float b);

GNM_NAMESPACE_END

#include "mat4x2_operators.inl"

#endif // GNM_OPERATORS_MAT4X2_OPERATORS_H_
