#ifndef GNM_FUNCTIONS_FUNC_VECTOR_RELATIONAL_H_
#define GNM_FUNCTIONS_FUNC_VECTOR_RELATIONAL_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Vector Relational Functions

GNM_NAMESPACE_BEGIN

bvec2 lessThan(const vec2& x, const vec2& y);
bvec3 lessThan(const vec3& x, const vec3& y);
bvec4 lessThan(const vec4& x, const vec4& y);
bvec2 lessThan(const ivec2& x, const ivec2& y);
bvec3 lessThan(const ivec3& x, const ivec3& y);
bvec4 lessThan(const ivec4& x, const ivec4& y);
bvec2 lessThan(const uvec2& x, const uvec2& y);
bvec3 lessThan(const uvec3& x, const uvec3& y);
bvec4 lessThan(const uvec4& x, const uvec4& y);

bvec2 lessThanEqual(const vec2& x, const vec2& y);
bvec3 lessThanEqual(const vec3& x, const vec3& y);
bvec4 lessThanEqual(const vec4& x, const vec4& y);
bvec2 lessThanEqual(const ivec2& x, const ivec2& y);
bvec3 lessThanEqual(const ivec3& x, const ivec3& y);
bvec4 lessThanEqual(const ivec4& x, const ivec4& y);
bvec2 lessThanEqual(const uvec2& x, const uvec2& y);
bvec3 lessThanEqual(const uvec3& x, const uvec3& y);
bvec4 lessThanEqual(const uvec4& x, const uvec4& y);

bvec2 greaterThan(const vec2& x, const vec2& y);
bvec3 greaterThan(const vec3& x, const vec3& y);
bvec4 greaterThan(const vec4& x, const vec4& y);
bvec2 greaterThan(const ivec2& x, const ivec2& y);
bvec3 greaterThan(const ivec3& x, const ivec3& y);
bvec4 greaterThan(const ivec4& x, const ivec4& y);
bvec2 greaterThan(const uvec2& x, const uvec2& y);
bvec3 greaterThan(const uvec3& x, const uvec3& y);
bvec4 greaterThan(const uvec4& x, const uvec4& y);

bvec2 greaterThanEqual(const vec2& x, const vec2& y);
bvec3 greaterThanEqual(const vec3& x, const vec3& y);
bvec4 greaterThanEqual(const vec4& x, const vec4& y);
bvec2 greaterThanEqual(const ivec2& x, const ivec2& y);
bvec3 greaterThanEqual(const ivec3& x, const ivec3& y);
bvec4 greaterThanEqual(const ivec4& x, const ivec4& y);
bvec2 greaterThanEqual(const uvec2& x, const uvec2& y);
bvec3 greaterThanEqual(const uvec3& x, const uvec3& y);
bvec4 greaterThanEqual(const uvec4& x, const uvec4& y);

bvec2 equal(const vec2& x, const vec2& y);
bvec3 equal(const vec3& x, const vec3& y);
bvec4 equal(const vec4& x, const vec4& y);
bvec2 equal(const ivec2& x, const ivec2& y);
bvec3 equal(const ivec3& x, const ivec3& y);
bvec4 equal(const ivec4& x, const ivec4& y);
bvec2 equal(const uvec2& x, const uvec2& y);
bvec3 equal(const uvec3& x, const uvec3& y);
bvec4 equal(const uvec4& x, const uvec4& y);
bvec2 equal(const bvec2& x, const bvec2& y);
bvec3 equal(const bvec3& x, const bvec3& y);
bvec4 equal(const bvec4& x, const bvec4& y);

bvec2 notEqual(const vec2& x, const vec2& y);
bvec3 notEqual(const vec3& x, const vec3& y);
bvec4 notEqual(const vec4& x, const vec4& y);
bvec2 notEqual(const ivec2& x, const ivec2& y);
bvec3 notEqual(const ivec3& x, const ivec3& y);
bvec4 notEqual(const ivec4& x, const ivec4& y);
bvec2 notEqual(const uvec2& x, const uvec2& y);
bvec3 notEqual(const uvec3& x, const uvec3& y);
bvec4 notEqual(const uvec4& x, const uvec4& y);
bvec2 notEqual(const bvec2& x, const bvec2& y);
bvec3 notEqual(const bvec3& x, const bvec3& y);
bvec4 notEqual(const bvec4& x, const bvec4& y);

bool any(const bvec2& x);
bool any(const bvec3& x);
bool any(const bvec4& x);

bool all(const bvec2& x);
bool all(const bvec3& x);
bool all(const bvec4& x);

bvec2 not(const bvec2& x);
bvec3 not(const bvec3& x);
bvec4 not(const bvec4& x);

GNM_NAMESPACE_END

#include "func_vector_relational.inl"

#endif // GNM_FUNCTIONS_FUNC_VECTOR_RELATIONAL_H_