GNM_NAMESPACE_BEGIN

GNM_INLINE bvec2 lessThan(const vec2& x, const vec2& y) {
  return bvec2(x.x < y.x, x.y < y.y);
}

GNM_INLINE bvec3 lessThan(const vec3& x, const vec3& y) {
  return bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
}

GNM_INLINE bvec4 lessThan(const vec4& x, const vec4& y) {
  return bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
}

GNM_INLINE bvec2 lessThan(const ivec2& x, const ivec2& y) {
  return bvec2(x.x < y.x, x.y < y.y);
}

GNM_INLINE bvec3 lessThan(const ivec3& x, const ivec3& y) {
  return bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
}

GNM_INLINE bvec4 lessThan(const ivec4& x, const ivec4& y) {
  return bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
}

GNM_INLINE bvec2 lessThan(const uvec2& x, const uvec2& y) {
  return bvec2(x.x < y.x, x.y < y.y);
}

GNM_INLINE bvec3 lessThan(const uvec3& x, const uvec3& y) {
  return bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
}

GNM_INLINE bvec4 lessThan(const uvec4& x, const uvec4& y) {
  return bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 lessThanEqual(const vec2& x, const vec2& y) {
  return bvec2(x.x <= y.x, x.y <= y.y);
}

GNM_INLINE bvec3 lessThanEqual(const vec3& x, const vec3& y) {
  return bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
}

GNM_INLINE bvec4 lessThanEqual(const vec4& x, const vec4& y) {
  return bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
}

GNM_INLINE bvec2 lessThanEqual(const ivec2& x, const ivec2& y) {
  return bvec2(x.x <= y.x, x.y <= y.y);
}

GNM_INLINE bvec3 lessThanEqual(const ivec3& x, const ivec3& y) {
  return bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
}

GNM_INLINE bvec4 lessThanEqual(const ivec4& x, const ivec4& y) {
  return bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
}

GNM_INLINE bvec2 lessThanEqual(const uvec2& x, const uvec2& y) {
  return bvec2(x.x <= y.x, x.y <= y.y);
}

GNM_INLINE bvec3 lessThanEqual(const uvec3& x, const uvec3& y) {
  return bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
}

GNM_INLINE bvec4 lessThanEqual(const uvec4& x, const uvec4& y) {
  return bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 greaterThan(const vec2& x, const vec2& y) {
  return bvec2(x.x > y.x, x.y > y.y);
}

GNM_INLINE bvec3 greaterThan(const vec3& x, const vec3& y) {
  return bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
}

GNM_INLINE bvec4 greaterThan(const vec4& x, const vec4& y) {
  return bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
}

GNM_INLINE bvec2 greaterThan(const ivec2& x, const ivec2& y) {
  return bvec2(x.x > y.x, x.y > y.y);
}

GNM_INLINE bvec3 greaterThan(const ivec3& x, const ivec3& y) {
  return bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
}

GNM_INLINE bvec4 greaterThan(const ivec4& x, const ivec4& y) {
  return bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
}

GNM_INLINE bvec2 greaterThan(const uvec2& x, const uvec2& y) {
  return bvec2(x.x > y.x, x.y > y.y);
}

GNM_INLINE bvec3 greaterThan(const uvec3& x, const uvec3& y) {
  return bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
}

GNM_INLINE bvec4 greaterThan(const uvec4& x, const uvec4& y) {
  return bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 greaterThanEqual(const vec2& x, const vec2& y) {
  return bvec2(x.x >= y.x, x.y >= y.y);
}

GNM_INLINE bvec3 greaterThanEqual(const vec3& x, const vec3& y) {
  return bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
}

GNM_INLINE bvec4 greaterThanEqual(const vec4& x, const vec4& y) {
  return bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
}

GNM_INLINE bvec2 greaterThanEqual(const ivec2& x, const ivec2& y) {
  return bvec2(x.x >= y.x, x.y >= y.y);
}

GNM_INLINE bvec3 greaterThanEqual(const ivec3& x, const ivec3& y) {
  return bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
}

GNM_INLINE bvec4 greaterThanEqual(const ivec4& x, const ivec4& y) {
  return bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
}

GNM_INLINE bvec2 greaterThanEqual(const uvec2& x, const uvec2& y) {
  return bvec2(x.x >= y.x, x.y >= y.y);
}

GNM_INLINE bvec3 greaterThanEqual(const uvec3& x, const uvec3& y) {
  return bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
}

GNM_INLINE bvec4 greaterThanEqual(const uvec4& x, const uvec4& y) {
  return bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 equal(const vec2& x, const vec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 equal(const vec3& x, const vec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 equal(const vec4& x, const vec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

GNM_INLINE bvec2 equal(const ivec2& x, const ivec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 equal(const ivec3& x, const ivec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 equal(const ivec4& x, const ivec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

GNM_INLINE bvec2 equal(const uvec2& x, const uvec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 equal(const uvec3& x, const uvec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 equal(const uvec4& x, const uvec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

GNM_INLINE bvec2 equal(const bvec2& x, const bvec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 equal(const bvec3& x, const bvec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 equal(const bvec4& x, const bvec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 notEqual(const vec2& x, const vec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 notEqual(const vec3& x, const vec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 notEqual(const vec4& x, const vec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

GNM_INLINE bvec2 notEqual(const ivec2& x, const ivec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 notEqual(const ivec3& x, const ivec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 notEqual(const ivec4& x, const ivec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

GNM_INLINE bvec2 notEqual(const uvec2& x, const uvec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 notEqual(const uvec3& x, const uvec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 notEqual(const uvec4& x, const uvec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

GNM_INLINE bvec2 notEqual(const bvec2& x, const bvec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 notEqual(const bvec3& x, const bvec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 notEqual(const bvec4& x, const bvec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool any(const bvec2& x) {
  return (x.x || x.y);
}

GNM_INLINE bool any(const bvec3& x) {
  return (x.x || x.y || x.z);
}

GNM_INLINE bool any(const bvec4& x) {
  return (x.x || x.y || x.z || x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool all(const bvec2& x) {
  return (x.x && x.y);
}

GNM_INLINE bool all(const bvec3& x) {
  return (x.x && x.y && x.z);
}

GNM_INLINE bool all(const bvec4& x) {
  return (x.x && x.y && x.z && x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 none(const bvec2& x) {
  return bvec2(!x.x, !x.y);
}

GNM_INLINE bvec3 none(const bvec3& x) {
  return bvec3(!x.x, !x.y, !x.z);
}

GNM_INLINE bvec4 none(const bvec4& x) {
  return bvec4(!x.x, !x.y, !x.z, !x.w);
}

GNM_NAMESPACE_END
