#ifndef GNM_OPERATORS_MAT3X3_OPERATORS_H_
#define GNM_OPERATORS_MAT3X3_OPERATORS_H_

#include "../types/vec3_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat3x3& a, const mat3x3& b);

bool operator != (const mat3x3& a, const mat3x3& b);

mat3x3 operator + (const mat3x3& a, const mat3x3& b);

mat3x3 operator - (const mat3x3& a, const mat3x3& b);

mat3x3 operator * (const mat3x3& a, const mat3x3& b);

vec3 operator * (const mat3x3& a, const vec3& b);

vec3 operator * (const vec3& a, const mat3x3& b);

mat3x3 operator * (const float a, const mat3x3& b);

mat3x3 operator * (const mat3x3& a, const float b);

mat3x3 operator / (const float a, const mat3x3& b);

mat3x3 operator / (const mat3x3& a, const float b);

mat3x3 operator + (const mat3x3& mat);

mat3x3 operator - (const mat3x3& mat);

mat3x3& operator += (mat3x3& a, const mat3x3& b);

mat3x3& operator -= (mat3x3& a, const mat3x3& b);

mat3x3& operator *= (mat3x3& a, const mat3x3& b);

mat3x3& operator *= (mat3x3& a, const float b);

mat3x3& operator /= (mat3x3& a, const float b);

GNM_NAMESPACE_END

#include "mat3x3_operators.inl"

#endif // GNM_OPERATORS_MAT3X3_OPERATORS_H_
