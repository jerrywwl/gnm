#ifndef GNM_OPERATORS_VEC3_OPERATORS_H_
#define GNM_OPERATORS_VEC3_OPERATORS_H_

#include "../types/vec3_type.h"

GNM_NAMESPACE_BEGIN

// ----------------------------------------------------------------------------------------------------
// Expressions

vec3 operator + (const vec3& a, const vec3& b);
ivec3 operator + (const ivec3& a, const ivec3& b);
uvec3 operator + (const uvec3& a, const uvec3& b);

vec3 operator - (const vec3& a, const vec3& b);
ivec3 operator - (const ivec3& a, const ivec3& b);
uvec3 operator - (const uvec3& a, const uvec3& b);

vec3 operator * (const vec3& a, const vec3& b);
ivec3 operator * (const ivec3& a, const ivec3& b);
uvec3 operator * (const uvec3& a, const uvec3& b);
vec3 operator * (const float a, const vec3& b);
ivec3 operator * (const int a, const ivec3& b);
uvec3 operator * (const uint a, const uvec3& b);
vec3 operator * (const vec3& a, const float b);
ivec3 operator * (const ivec3& a, const int b);
uvec3 operator * (const uvec3& a, const uint b);

vec3 operator / (const vec3& a, const vec3& b);
ivec3 operator / (const ivec3& a, const ivec3& b);
uvec3 operator / (const uvec3& a, const uvec3& b);
vec3 operator / (const float a, const vec3& b);
ivec3 operator / (const int a, const ivec3& b);
uvec3 operator / (const uint a, const uvec3& b);
vec3 operator / (const vec3& a, const float b);
ivec3 operator / (const ivec3& a, const int b);
uvec3 operator / (const uvec3& a, const uint b);

ivec3 operator % (const ivec3& a, const ivec3& b);
uvec3 operator % (const uvec3& a, const uvec3& b);

ivec3 operator % (const int a, const ivec3& b);
uvec3 operator % (const uint a, const uvec3& b);
ivec3 operator % (const ivec3& a, const int b);
uvec3 operator % (const uvec3& a, const uint b);

vec3 operator + (const vec3& a);
ivec3 operator + (const ivec3& a);
uvec3 operator + (const uvec3& a);

vec3 operator - (const vec3& a);
ivec3 operator - (const ivec3& a);

ivec3& operator ++ (ivec3& a);
uvec3& operator ++ (uvec3& a);

ivec3& operator -- (ivec3& a);
uvec3& operator -- (uvec3& a);

ivec3 operator ++ (ivec3& a, int);
uvec3 operator ++ (uvec3& a, int);

ivec3 operator -- (ivec3& a, int);
uvec3 operator -- (uvec3& a, int);

bool operator == (const vec3& a, const vec3& b);
bool operator == (const bvec3& a, const bvec3& b);
bool operator == (const ivec3& a, const ivec3& b);
bool operator == (const uvec3& a, const uvec3& b);

bool operator != (const vec3& a, const vec3& b);
bool operator != (const bvec3& a, const bvec3& b);
bool operator != (const ivec3& a, const ivec3& b);
bool operator != (const uvec3& a, const uvec3& b);

ivec3 operator ~ (const ivec3& a);
uvec3 operator ~ (const uvec3& a);

ivec3 operator >> (const ivec3& a, const ivec3& b);
uvec3 operator >> (const uvec3& a, const uvec3& b);
ivec3 operator >> (const ivec3& a, const int b);
uvec3 operator >> (const uvec3& a, const uint b);
ivec3 operator >> (const int a, const ivec3& b);
uvec3 operator >> (const uint a, const uvec3& b);

ivec3 operator << (const ivec3& a, const ivec3& b);
uvec3 operator << (const uvec3& a, const uvec3& b);
ivec3 operator << (const ivec3& a, const int b);
uvec3 operator << (const uvec3& a, const uint b);
ivec3 operator << (const int a, const ivec3& b);
uvec3 operator << (const uint a, const uvec3& b);

ivec3 operator & (const ivec3& a, const ivec3& b);
uvec3 operator & (const uvec3& a, const uvec3& b);
ivec3 operator & (const ivec3& a, const int b);
uvec3 operator & (const uvec3& a, const uint b);
ivec3 operator & (const int a, const ivec3& b);
uvec3 operator & (const uint a, const uvec3& b);

ivec3 operator ^ (const ivec3& a, const ivec3& b);
uvec3 operator ^ (const uvec3& a, const uvec3& b);
ivec3 operator ^ (const ivec3& a, const int b);
uvec3 operator ^ (const uvec3& a, const uint b);
ivec3 operator ^ (const int a, const ivec3& b);
uvec3 operator ^ (const uint a, const uvec3& b);

ivec3 operator | (const ivec3& a, const ivec3& b);
uvec3 operator | (const uvec3& a, const uvec3& b);
ivec3 operator | (const ivec3& a, const int b);
uvec3 operator | (const uvec3& a, const uint b);
ivec3 operator | (const int a, const ivec3& b);
uvec3 operator | (const uint a, const uvec3& b);

// ----------------------------------------------------------------------------------------------------
// Assignments

vec3& operator += (vec3& a, const vec3& b);
ivec3& operator += (ivec3& a, const ivec3& b);
uvec3& operator += (uvec3& a, const uvec3& b);

vec3& operator -= (vec3& a, const vec3& b);
ivec3& operator -= (ivec3& a, const ivec3& b);
uvec3& operator -= (uvec3& a, const uvec3& b);

vec3& operator *= (vec3& a, const vec3& b);
ivec3& operator *= (ivec3& a, const ivec3& b);
uvec3& operator *= (uvec3& a, const uvec3& b);
vec3& operator *= (vec3& a, const float b);
ivec3& operator *= (ivec3& a, const int b);
uvec3& operator *= (uvec3& a, const uint b);

vec3& operator /= (vec3& a, const vec3& b);
ivec3& operator /= (ivec3& a, const ivec3& b);
uvec3& operator /= (uvec3& a, const uvec3& b);
vec3& operator /= (vec3& a, const float b);
ivec3& operator /= (ivec3& a, const int b);
uvec3& operator /= (uvec3& a, const uint b);

ivec3& operator %= (ivec3& a, const ivec3& b);
uvec3& operator %= (uvec3& a, const uvec3& b);
ivec3& operator %= (ivec3& a, const int b);
uvec3& operator %= (uvec3& a, const uint b);

ivec3& operator <<= (ivec3& a, const ivec3& b);
uvec3& operator <<= (uvec3& a, const uvec3& b);
ivec3& operator <<= (ivec3& a, const int b);
uvec3& operator <<= (uvec3& a, const uint b);

ivec3& operator >>= (ivec3& a, const ivec3& b);
uvec3& operator >>= (uvec3& a, const uvec3& b);
ivec3& operator >>= (ivec3& a, const int b);
uvec3& operator >>= (uvec3& a, const uint b);

ivec3& operator &= (ivec3& a, const ivec3& b);
uvec3& operator &= (uvec3& a, const uvec3& b);
ivec3& operator &= (ivec3& a, const int b);
uvec3& operator &= (uvec3& a, const uint b);

ivec3& operator |= (ivec3& a, const ivec3& b);
uvec3& operator |= (uvec3& a, const uvec3& b);
ivec3& operator |= (ivec3& a, const int b);
uvec3& operator |= (uvec3& a, const uint b);

ivec3& operator ^= (ivec3& a, const ivec3& b);
uvec3& operator ^= (uvec3& a, const uvec3& b);
ivec3& operator ^= (ivec3& a, const int b);
uvec3& operator ^= (uvec3& a, const uint b);

GNM_NAMESPACE_END

#include "vec3_operators.inl"

#endif // GNM_OPERATORS_VEC3_OPERATORS_H_
