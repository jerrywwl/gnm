#ifndef GNM_OPERATORS_MAT2X4_OPERATORS_H_
#define GNM_OPERATORS_MAT2X4_OPERATORS_H_

#include "../types/mat4x4_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat2x4& a, const mat2x4& b);

bool operator != (const mat2x4& a, const mat2x4& b);

mat2x4 operator + (const mat2x4& a, const mat2x4& b);

mat2x4 operator - (const mat2x4& a, const mat2x4& b);

mat2x4 operator * (const mat4x4& a, const mat2x4& b);

mat2x4 operator * (const mat2x4& a, const mat2x2& b);

vec4 operator * (const mat2x4& a, const vec2& b);

vec2 operator * (const vec4& a, const mat2x4& b);

mat2x4 operator * (const float a, const mat2x4& b);

mat2x4 operator * (const mat2x4& a, const float b);

mat2x4 operator / (const float a, const mat2x4& b);

mat2x4 operator / (const mat2x4& a, const float b);

mat2x4 operator + (const mat2x4& mat);

mat2x4 operator - (const mat2x4& mat);

mat2x4& operator += (mat2x4& a, const mat2x4& b);

mat2x4& operator -= (mat2x4& a, const mat2x4& b);

mat2x4& operator *= (mat2x4& a, const mat2x2& b);

mat2x4& operator *= (mat2x4& a, const float b);

mat2x4& operator /= (mat2x4& a, const float b);

GNM_NAMESPACE_END

#include "mat2x4_operators.inl"

#endif // GNM_OPERATORS_MAT2X4_OPERATORS_H_