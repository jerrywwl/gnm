#ifndef GNM_OPERATORS_MAT2X2_OPERATORS_H_
#define GNM_OPERATORS_MAT2X2_OPERATORS_H_

#include "../types/mat2x2_type.h"

GNM_NAMESPACE_BEGIN

bool operator == (const mat2x2& a, const mat2x2& b);

bool operator != (const mat2x2& a, const mat2x2& b);

mat2x2 operator + (const mat2x2& a, const mat2x2& b);

mat2x2 operator - (const mat2x2& a, const mat2x2& b);

mat2x2 operator * (const mat2x2& a, const mat2x2& b);

vec2 operator * (const mat2x2& a, const vec2& b);

vec2 operator * (const vec2& a, const mat2x2& b);

mat2x2 operator * (const float a, const mat2x2& b);

mat2x2 operator * (const mat2x2& a, const float b);

mat2x2 operator / (const float a, const mat2x2& b);

mat2x2 operator / (const mat2x2& a, const float b);

mat2x2 operator + (const mat2x2& mat);

mat2x2 operator - (const mat2x2& mat);

mat2x2& operator += (mat2x2& a, const mat2x2& b);

mat2x2& operator -= (mat2x2& a, const mat2x2& b);

mat2x2& operator *= (mat2x2& a, const mat2x2& b);

mat2x2& operator *= (mat2x2& a, const float b);

mat2x2& operator /= (mat2x2& a, const float b);

GNM_NAMESPACE_END

#include "mat2x2_operators.inl"

#endif // GNM_OPERATORS_MAT2X2_OPERATORS_H_