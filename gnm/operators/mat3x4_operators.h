#ifndef GNM_OPERATORS_MAT3X4_OPERATORS_H_
#define GNM_OPERATORS_MAT3X4_OPERATORS_H_

#include "../types/mat4x4_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat3x4& a, const mat3x4& b);

bool operator != (const mat3x4& a, const mat3x4& b);

mat3x4 operator + (const mat3x4& a, const mat3x4& b);

mat3x4 operator - (const mat3x4& a, const mat3x4& b);

mat3x4 operator * (const mat4x4& a, const mat3x4& b);

mat3x4 operator * (const mat3x4& a, const mat3x3& b);

mat3x4 operator * (const mat3x4& a, const mat3x3& b);

vec4 operator * (const mat3x4& a, const vec3& b);

vec3 operator * (const vec4& a, const mat3x4& b);

mat3x4 operator * (const float a, const mat3x4& b);

mat3x4 operator * (const mat3x4& a, const float b);

mat3x4 operator / (const float a, const mat3x4& b);

mat3x4 operator / (const mat3x4& a, const float b);

mat3x4 operator + (const mat3x4& mat);

mat3x4 operator - (const mat3x4& mat);

mat3x4& operator += (mat3x4& a, const mat3x4& b);

mat3x4& operator -= (mat3x4& a, const mat3x4& b);

mat3x4& operator *= (mat3x4& a, const mat3x3& b);

mat3x4& operator *= (mat3x4& a, const float b);

mat3x4& operator /= (mat3x4& a, const float b);

GNM_NAMESPACE_END

#include "mat3x4_operators.inl"

#endif // GNM_OPERATORS_MAT3X4_OPERATORS_H_
