#ifndef GNM_OPERATORS_MAT3X2_OPERATORS_H_
#define GNM_OPERATORS_MAT3X2_OPERATORS_H_

#include "../types/mat3x3_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat3x2& a, const mat3x2& b);

bool operator != (const mat3x2& a, const mat3x2& b);

mat3x2 operator + (const mat3x2& a, const mat3x2& b);

mat3x2 operator - (const mat3x2& a, const mat3x2& b);

mat3x2 operator * (const mat3x2& a, const mat3x3& b);

mat3x2 operator * (const mat2x2& a, const mat3x2& b);

vec2 operator * (const mat3x2& a, const vec3& b);

vec3 operator * (const vec2& a, const mat3x2& b);

mat3x2 operator * (const float a, const mat3x2& b);

mat3x2 operator * (const mat3x2& a, const float b);

mat3x2 operator / (const float a, const mat3x2& b);

mat3x2 operator / (const mat3x2& a, const float b);

mat3x2 operator + (const mat3x2& mat);

mat3x2 operator - (const mat3x2& mat);

mat3x2& operator += (mat3x2& a, const mat3x2& b);

mat3x2& operator -= (mat3x2& a, const mat3x2& b);

mat3x2& operator *= (mat3x2& a, const mat3x3& b);

mat3x2& operator *= (mat3x2& a, const float b);

mat3x2& operator /= (mat3x2& a, const float b);

GNM_NAMESPACE_END

#include "mat3x2_operators.inl"

#endif // GNM_OPERATORS_MAT3X2_OPERATORS_H_
