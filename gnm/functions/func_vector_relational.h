#ifndef GNM_FUNCTIONS_FUNC_VECTOR_RELATIONAL_H_
#define GNM_FUNCTIONS_FUNC_VECTOR_RELATIONAL_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Vector Relational Functions

GNM_NAMESPACE_BEGIN

bvec2 LessThan(const vec2& x, const vec2& y);
bvec3 LessThan(const vec3& x, const vec3& y);
bvec4 LessThan(const vec4& x, const vec4& y);
bvec2 LessThan(const ivec2& x, const ivec2& y);
bvec3 LessThan(const ivec3& x, const ivec3& y);
bvec4 LessThan(const ivec4& x, const ivec4& y);
bvec2 LessThan(const uvec2& x, const uvec2& y);
bvec3 LessThan(const uvec3& x, const uvec3& y);
bvec4 LessThan(const uvec4& x, const uvec4& y);

bvec2 LessThanEqual(const vec2& x, const vec2& y);
bvec3 LessThanEqual(const vec3& x, const vec3& y);
bvec4 LessThanEqual(const vec4& x, const vec4& y);
bvec2 LessThanEqual(const ivec2& x, const ivec2& y);
bvec3 LessThanEqual(const ivec3& x, const ivec3& y);
bvec4 LessThanEqual(const ivec4& x, const ivec4& y);
bvec2 LessThanEqual(const uvec2& x, const uvec2& y);
bvec3 LessThanEqual(const uvec3& x, const uvec3& y);
bvec4 LessThanEqual(const uvec4& x, const uvec4& y);

bvec2 GreaterThan(const vec2& x, const vec2& y);
bvec3 GreaterThan(const vec3& x, const vec3& y);
bvec4 GreaterThan(const vec4& x, const vec4& y);
bvec2 GreaterThan(const ivec2& x, const ivec2& y);
bvec3 GreaterThan(const ivec3& x, const ivec3& y);
bvec4 GreaterThan(const ivec4& x, const ivec4& y);
bvec2 GreaterThan(const uvec2& x, const uvec2& y);
bvec3 GreaterThan(const uvec3& x, const uvec3& y);
bvec4 GreaterThan(const uvec4& x, const uvec4& y);

bvec2 GreaterThanEqual(const vec2& x, const vec2& y);
bvec3 GreaterThanEqual(const vec3& x, const vec3& y);
bvec4 GreaterThanEqual(const vec4& x, const vec4& y);
bvec2 GreaterThanEqual(const ivec2& x, const ivec2& y);
bvec3 GreaterThanEqual(const ivec3& x, const ivec3& y);
bvec4 GreaterThanEqual(const ivec4& x, const ivec4& y);
bvec2 GreaterThanEqual(const uvec2& x, const uvec2& y);
bvec3 GreaterThanEqual(const uvec3& x, const uvec3& y);
bvec4 GreaterThanEqual(const uvec4& x, const uvec4& y);

bool Equal(const float x, const float y);
bvec2 Equal(const vec2& x, const vec2& y);
bvec3 Equal(const vec3& x, const vec3& y);
bvec4 Equal(const vec4& x, const vec4& y);
bvec2 Equal(const ivec2& x, const ivec2& y);
bvec3 Equal(const ivec3& x, const ivec3& y);
bvec4 Equal(const ivec4& x, const ivec4& y);
bvec2 Equal(const uvec2& x, const uvec2& y);
bvec3 Equal(const uvec3& x, const uvec3& y);
bvec4 Equal(const uvec4& x, const uvec4& y);
bvec2 Equal(const bvec2& x, const bvec2& y);
bvec3 Equal(const bvec3& x, const bvec3& y);
bvec4 Equal(const bvec4& x, const bvec4& y);

bool Equal(const float x, const float y, float epsilon);
bvec2 Equal(const vec2& x, const vec2& y, float epsilon);
bvec3 Equal(const vec3& x, const vec3& y, float epsilon);
bvec4 Equal(const vec4& x, const vec4& y, float epsilon);

bvec2 NotEqual(const vec2& x, const vec2& y);
bvec3 NotEqual(const vec3& x, const vec3& y);
bvec4 NotEqual(const vec4& x, const vec4& y);
bvec2 NotEqual(const ivec2& x, const ivec2& y);
bvec3 NotEqual(const ivec3& x, const ivec3& y);
bvec4 NotEqual(const ivec4& x, const ivec4& y);
bvec2 NotEqual(const uvec2& x, const uvec2& y);
bvec3 NotEqual(const uvec3& x, const uvec3& y);
bvec4 NotEqual(const uvec4& x, const uvec4& y);
bvec2 NotEqual(const bvec2& x, const bvec2& y);
bvec3 NotEqual(const bvec3& x, const bvec3& y);
bvec4 NotEqual(const bvec4& x, const bvec4& y);

bool NotEqual(const float x, const float y, float epsilon);
bvec2 NotEqual(const vec2& x, const vec2& y, float epsilon);
bvec3 NotEqual(const vec3& x, const vec3& y, float epsilon);
bvec4 NotEqual(const vec4& x, const vec4& y, float epsilon);

bool Any(const bvec2& x);
bool Any(const bvec3& x);
bool Any(const bvec4& x);

bool All(const bvec2& x);
bool All(const bvec3& x);
bool All(const bvec4& x);

bvec2 Not(const bvec2& x);
bvec3 Not(const bvec3& x);
bvec4 Not(const bvec4& x);

GNM_NAMESPACE_END

#include "func_vector_relational.inl"

#endif // GNM_FUNCTIONS_FUNC_VECTOR_RELATIONAL_H_