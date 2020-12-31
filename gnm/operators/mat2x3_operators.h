#ifndef GNM_OPERATORS_MAT2X3_OPERATORS_H_
#define GNM_OPERATORS_MAT2X3_OPERATORS_H_

#include "../types/mat3x3_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat2x3& a, const mat2x3& b);

bool operator != (const mat2x3& a, const mat2x3& b);

mat2x3 operator + (const mat2x3& a, const mat2x3& b);

mat2x3 operator - (const mat2x3& a, const mat2x3& b);

mat2x3 operator * (const mat2x3& a, const mat2x2& b);

mat2x3 operator * (const mat3x3& a, const mat2x3& b);

vec3 operator * (const mat2x3& a, const vec2& b);

vec2 operator * (const vec3& a, const mat2x3& b);

mat2x3 operator * (const float a, const mat2x3& b);

mat2x3 operator * (const mat2x3& a, const float b);

mat2x3 operator / (const float a, const mat2x3& b);

mat2x3 operator / (const mat2x3& a, const float b);

mat2x3 operator + (const mat2x3& mat);

mat2x3 operator - (const mat2x3& mat);

mat2x3& operator += (mat2x3& a, const mat2x3& b);

mat2x3& operator -= (mat2x3& a, const mat2x3& b);

mat2x3& operator *= (mat2x3& a, const mat2x2& b);

mat2x3& operator *= (mat2x3& a, const float b);

mat2x3& operator /= (mat2x3& a, const float b);

GNM_NAMESPACE_END

#include "mat2x3_operators.inl"

#endif // GNM_OPERATORS_MAT2X3_OPERATORS_H_