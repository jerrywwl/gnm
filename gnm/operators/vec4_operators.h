#ifndef GNM_OPERATORS_VEC4_OPERATORS_H_
#define GNM_OPERATORS_VEC4_OPERATORS_H_

#include "../types/vec4_type.h"

GNM_NAMESPACE_BEGIN

// ----------------------------------------------------------------------------------------------------
// Expressions

vec4 operator + (const vec4& a, const vec4& b);
ivec4 operator + (const ivec4& a, const ivec4& b);
uvec4 operator + (const uvec4& a, const uvec4& b);

vec4 operator - (const vec4& a, const vec4& b);
ivec4 operator - (const ivec4& a, const ivec4& b);
uvec4 operator - (const uvec4& a, const uvec4& b);

vec4 operator * (const vec4& a, const vec4& b);
ivec4 operator * (const ivec4& a, const ivec4& b);
uvec4 operator * (const uvec4& a, const uvec4& b);
vec4 operator * (const float a, const vec4& b);
ivec4 operator * (const int a, const ivec4& b);
uvec4 operator * (const uint a, const uvec4& b);
vec4 operator * (const vec4& a, const float b);
ivec4 operator * (const ivec4& a, const int b);
uvec4 operator * (const uvec4& a, const uint b);

vec4 operator / (const vec4& a, const vec4& b);
ivec4 operator / (const ivec4& a, const ivec4& b);
uvec4 operator / (const uvec4& a, const uvec4& b);
vec4 operator / (const float a, const vec4& b);
ivec4 operator / (const int a, const ivec4& b);
uvec4 operator / (const uint a, const uvec4& b);
vec4 operator / (const vec4& a, const float b);
ivec4 operator / (const ivec4& a, const int b);
uvec4 operator / (const uvec4& a, const uint b);

ivec4 operator % (const ivec4& a, const ivec4& b);
uvec4 operator % (const uvec4& a, const uvec4& b);

ivec4 operator % (const int a, const ivec4& b);
uvec4 operator % (const uint a, const uvec4& b);
ivec4 operator % (const ivec4& a, const int b);
uvec4 operator % (const uvec4& a, const uint b);

vec4 operator + (const vec4& a);
ivec4 operator + (const ivec4& a);
uvec4 operator + (const uvec4& a);

vec4 operator - (const vec4& a);
ivec4 operator - (const ivec4& a);

ivec4& operator ++ (ivec4& a);
uvec4& operator ++ (uvec4& a);

ivec4& operator -- (ivec4& a);
uvec4& operator -- (uvec4& a);

ivec4 operator ++ (ivec4& a, int);
uvec4 operator ++ (uvec4& a, int);

ivec4 operator -- (ivec4& a, int);
uvec4 operator -- (uvec4& a, int);

bool operator == (const vec4& a, const vec4& b);
bool operator == (const bvec4& a, const bvec4& b);
bool operator == (const ivec4& a, const ivec4& b);
bool operator == (const uvec4& a, const uvec4& b);

bool operator != (const vec4& a, const vec4& b);
bool operator != (const bvec4& a, const bvec4& b);
bool operator != (const ivec4& a, const ivec4& b);
bool operator != (const uvec4& a, const uvec4& b);

ivec4 operator ~ (const ivec4& a);
uvec4 operator ~ (const uvec4& a);

ivec4 operator >> (const ivec4& a, const ivec4& b);
uvec4 operator >> (const uvec4& a, const uvec4& b);
ivec4 operator >> (const ivec4& a, const int b);
uvec4 operator >> (const uvec4& a, const uint b);
ivec4 operator >> (const int a, const ivec4& b);
uvec4 operator >> (const uint a, const uvec4& b);

ivec4 operator << (const ivec4& a, const ivec4& b);
uvec4 operator << (const uvec4& a, const uvec4& b);
ivec4 operator << (const ivec4& a, const int b);
uvec4 operator << (const uvec4& a, const uint b);
ivec4 operator << (const int a, const ivec4& b);
uvec4 operator << (const uint a, const uvec4& b);

ivec4 operator & (const ivec4& a, const ivec4& b);
uvec4 operator & (const uvec4& a, const uvec4& b);
ivec4 operator & (const ivec4& a, const int b);
uvec4 operator & (const uvec4& a, const uint b);
ivec4 operator & (const int a, const ivec4& b);
uvec4 operator & (const uint a, const uvec4& b);

ivec4 operator ^ (const ivec4& a, const ivec4& b);
uvec4 operator ^ (const uvec4& a, const uvec4& b);
ivec4 operator ^ (const ivec4& a, const int b);
uvec4 operator ^ (const uvec4& a, const uint b);
ivec4 operator ^ (const int a, const ivec4& b);
uvec4 operator ^ (const uint a, const uvec4& b);

ivec4 operator | (const ivec4& a, const ivec4& b);
uvec4 operator | (const uvec4& a, const uvec4& b);
ivec4 operator | (const ivec4& a, const int b);
uvec4 operator | (const uvec4& a, const uint b);
ivec4 operator | (const int a, const ivec4& b);
uvec4 operator | (const uint a, const uvec4& b);

// ----------------------------------------------------------------------------------------------------
// Assignments

vec4& operator += (vec4& a, const vec4& b);
ivec4& operator += (ivec4& a, const ivec4& b);
uvec4& operator += (uvec4& a, const uvec4& b);

vec4& operator -= (vec4& a, const vec4& b);
ivec4& operator -= (ivec4& a, const ivec4& b);
uvec4& operator -= (uvec4& a, const uvec4& b);

vec4& operator *= (vec4& a, const vec4& b);
ivec4& operator *= (ivec4& a, const ivec4& b);
uvec4& operator *= (uvec4& a, const uvec4& b);
vec4& operator *= (vec4& a, const float b);
ivec4& operator *= (ivec4& a, const int b);
uvec4& operator *= (uvec4& a, const uint b);

vec4& operator /= (vec4& a, const vec4& b);
ivec4& operator /= (ivec4& a, const ivec4& b);
uvec4& operator /= (uvec4& a, const uvec4& b);
vec4& operator /= (vec4& a, const float b);
ivec4& operator /= (ivec4& a, const int b);
uvec4& operator /= (uvec4& a, const uint b);

ivec4& operator %= (ivec4& a, const ivec4& b);
uvec4& operator %= (uvec4& a, const uvec4& b);
ivec4& operator %= (ivec4& a, const int b);
uvec4& operator %= (uvec4& a, const uint b);

ivec4& operator <<= (ivec4& a, const ivec4& b);
uvec4& operator <<= (uvec4& a, const uvec4& b);
ivec4& operator <<= (ivec4& a, const int b);
uvec4& operator <<= (uvec4& a, const uint b);

ivec4& operator >>= (ivec4& a, const ivec4& b);
uvec4& operator >>= (uvec4& a, const uvec4& b);
ivec4& operator >>= (ivec4& a, const int b);
uvec4& operator >>= (uvec4& a, const uint b);

ivec4& operator &= (ivec4& a, const ivec4& b);
uvec4& operator &= (uvec4& a, const uvec4& b);
ivec4& operator &= (ivec4& a, const int b);
uvec4& operator &= (uvec4& a, const uint b);

ivec4& operator |= (ivec4& a, const ivec4& b);
uvec4& operator |= (uvec4& a, const uvec4& b);
ivec4& operator |= (ivec4& a, const int b);
uvec4& operator |= (uvec4& a, const uint b);

ivec4& operator ^= (ivec4& a, const ivec4& b);
uvec4& operator ^= (uvec4& a, const uvec4& b);
ivec4& operator ^= (ivec4& a, const int b);
uvec4& operator ^= (uvec4& a, const uint b);

GNM_NAMESPACE_END

#include "vec4_operators.inl"

#endif // GNM_OPERATORS_VEC4_OPERATORS_H_
