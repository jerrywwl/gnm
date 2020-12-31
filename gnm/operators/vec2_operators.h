#ifndef GNM_OPERATORS_VEC2_OPERATORS_H_
#define GNM_OPERATORS_VEC2_OPERATORS_H_

#include "../types/vec2_type.h"

GNM_NAMESPACE_BEGIN

// ----------------------------------------------------------------------------------------------------
// Expressions

vec2 operator + (const vec2& a, const vec2& b);
ivec2 operator + (const ivec2& a, const ivec2& b);
uvec2 operator + (const uvec2& a, const uvec2& b);

vec2 operator - (const vec2& a, const vec2& b);
ivec2 operator - (const ivec2& a, const ivec2& b);
uvec2 operator - (const uvec2& a, const uvec2& b);

vec2 operator * (const vec2& a, const vec2& b);
ivec2 operator * (const ivec2& a, const ivec2& b);
uvec2 operator * (const uvec2& a, const uvec2& b);
vec2 operator * (const float a, const vec2& b);
ivec2 operator * (const int a, const ivec2& b);
uvec2 operator * (const uint a, const uvec2& b);
vec2 operator * (const vec2& a, const float b);
ivec2 operator * (const ivec2& a, const int b);
uvec2 operator * (const uvec2& a, const uint b);

vec2 operator / (const vec2& a, const vec2& b);
ivec2 operator / (const ivec2& a, const ivec2& b);
uvec2 operator / (const uvec2& a, const uvec2& b);
vec2 operator / (const float a, const vec2& b);
ivec2 operator / (const int a, const ivec2& b);
uvec2 operator / (const uint a, const uvec2& b);
vec2 operator / (const vec2& a, const float b);
ivec2 operator / (const ivec2& a, const int b);
uvec2 operator / (const uvec2& a, const uint b);

ivec2 operator % (const ivec2& a, const ivec2& b);
uvec2 operator % (const uvec2& a, const uvec2& b);

ivec2 operator % (const int a, const ivec2& b);
uvec2 operator % (const uint a, const uvec2& b);
ivec2 operator % (const ivec2& a, const int b);
uvec2 operator % (const uvec2& a, const uint b);

vec2 operator + (const vec2& a);
ivec2 operator + (const ivec2& a);
uvec2 operator + (const uvec2& a);

vec2 operator - (const vec2& a);
ivec2 operator - (const ivec2& a);

ivec2& operator ++ (ivec2& a);
uvec2& operator ++ (uvec2& a);

ivec2& operator -- (ivec2& a);
uvec2& operator -- (uvec2& a);

ivec2 operator ++ (ivec2& a, int);
uvec2 operator ++ (uvec2& a, int);

ivec2 operator -- (ivec2& a, int);
uvec2 operator -- (uvec2& a, int);

bool operator == (const vec2& a, const vec2& b);
bool operator == (const bvec2& a, const bvec2& b);
bool operator == (const ivec2& a, const ivec2& b);
bool operator == (const uvec2& a, const uvec2& b);

bool operator != (const vec2& a, const vec2& b);
bool operator != (const bvec2& a, const bvec2& b);
bool operator != (const ivec2& a, const ivec2& b);
bool operator != (const uvec2& a, const uvec2& b);

ivec2 operator ~ (const ivec2& a);
uvec2 operator ~ (const uvec2& a);

ivec2 operator >> (const ivec2& a, const ivec2& b);
uvec2 operator >> (const uvec2& a, const uvec2& b);
ivec2 operator >> (const ivec2& a, const int b);
uvec2 operator >> (const uvec2& a, const uint b);
ivec2 operator >> (const int a, const ivec2& b);
uvec2 operator >> (const uint a, const uvec2& b);

ivec2 operator << (const ivec2& a, const ivec2& b);
uvec2 operator << (const uvec2& a, const uvec2& b);
ivec2 operator << (const ivec2& a, const int b);
uvec2 operator << (const uvec2& a, const uint b);
ivec2 operator << (const int a, const ivec2& b);
uvec2 operator << (const uint a, const uvec2& b);

ivec2 operator & (const ivec2& a, const ivec2& b);
uvec2 operator & (const uvec2& a, const uvec2& b);
ivec2 operator & (const ivec2& a, const int b);
uvec2 operator & (const uvec2& a, const uint b);
ivec2 operator & (const int a, const ivec2& b);
uvec2 operator & (const uint a, const uvec2& b);

ivec2 operator ^ (const ivec2& a, const ivec2& b);
uvec2 operator ^ (const uvec2& a, const uvec2& b);
ivec2 operator ^ (const ivec2& a, const int b);
uvec2 operator ^ (const uvec2& a, const uint b);
ivec2 operator ^ (const int a, const ivec2& b);
uvec2 operator ^ (const uint a, const uvec2& b);

ivec2 operator | (const ivec2& a, const ivec2& b);
uvec2 operator | (const uvec2& a, const uvec2& b);
ivec2 operator | (const ivec2& a, const int b);
uvec2 operator | (const uvec2& a, const uint b);
ivec2 operator | (const int a, const ivec2& b);
uvec2 operator | (const uint a, const uvec2& b);

// ----------------------------------------------------------------------------------------------------
// Assignments

vec2& operator += (vec2& a, const vec2& b);
ivec2& operator += (ivec2& a, const ivec2& b);
uvec2& operator += (uvec2& a, const uvec2& b);

vec2& operator -= (vec2& a, const vec2& b);
ivec2& operator -= (ivec2& a, const ivec2& b);
uvec2& operator -= (uvec2& a, const uvec2& b);

vec2& operator *= (vec2& a, const vec2& b);
ivec2& operator *= (ivec2& a, const ivec2& b);
uvec2& operator *= (uvec2& a, const uvec2& b);
vec2& operator *= (vec2& a, const float b);
ivec2& operator *= (ivec2& a, const int b);
uvec2& operator *= (uvec2& a, const uint b);

vec2& operator /= (vec2& a, const vec2& b);
ivec2& operator /= (ivec2& a, const ivec2& b);
uvec2& operator /= (uvec2& a, const uvec2& b);
vec2& operator /= (vec2& a, const float b);
ivec2& operator /= (ivec2& a, const int b);
uvec2& operator /= (uvec2& a, const uint b);

ivec2& operator %= (ivec2& a, const ivec2& b);
uvec2& operator %= (uvec2& a, const uvec2& b);
ivec2& operator %= (ivec2& a, const int b);
uvec2& operator %= (uvec2& a, const uint b);

ivec2& operator <<= (ivec2& a, const ivec2& b);
uvec2& operator <<= (uvec2& a, const uvec2& b);
ivec2& operator <<= (ivec2& a, const int b);
uvec2& operator <<= (uvec2& a, const uint b);

ivec2& operator >>= (ivec2& a, const ivec2& b);
uvec2& operator >>= (uvec2& a, const uvec2& b);
ivec2& operator >>= (ivec2& a, const int b);
uvec2& operator >>= (uvec2& a, const uint b);

ivec2& operator &= (ivec2& a, const ivec2& b);
uvec2& operator &= (uvec2& a, const uvec2& b);
ivec2& operator &= (ivec2& a, const int b);
uvec2& operator &= (uvec2& a, const uint b);

ivec2& operator |= (ivec2& a, const ivec2& b);
uvec2& operator |= (uvec2& a, const uvec2& b);
ivec2& operator |= (ivec2& a, const int b);
uvec2& operator |= (uvec2& a, const uint b);

ivec2& operator ^= (ivec2& a, const ivec2& b);
uvec2& operator ^= (uvec2& a, const uvec2& b);
ivec2& operator ^= (ivec2& a, const int b);
uvec2& operator ^= (uvec2& a, const uint b);

GNM_NAMESPACE_END

#include "vec2_operators.inl"

#endif // GNM_OPERATORS_VEC2_OPERATORS_H_
