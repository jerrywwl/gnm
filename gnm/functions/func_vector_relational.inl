GNM_NAMESPACE_BEGIN

GNM_INLINE bvec2 LessThan(const vec2& x, const vec2& y) {
  return bvec2(x.x < y.x, x.y < y.y);
}

GNM_INLINE bvec3 LessThan(const vec3& x, const vec3& y) {
  return bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
}

GNM_INLINE bvec4 LessThan(const vec4& x, const vec4& y) {
  return bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
}

GNM_INLINE bvec2 LessThan(const ivec2& x, const ivec2& y) {
  return bvec2(x.x < y.x, x.y < y.y);
}

GNM_INLINE bvec3 LessThan(const ivec3& x, const ivec3& y) {
  return bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
}

GNM_INLINE bvec4 LessThan(const ivec4& x, const ivec4& y) {
  return bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
}

GNM_INLINE bvec2 LessThan(const uvec2& x, const uvec2& y) {
  return bvec2(x.x < y.x, x.y < y.y);
}

GNM_INLINE bvec3 LessThan(const uvec3& x, const uvec3& y) {
  return bvec3(x.x < y.x, x.y < y.y, x.z < y.z);
}

GNM_INLINE bvec4 LessThan(const uvec4& x, const uvec4& y) {
  return bvec4(x.x < y.x, x.y < y.y, x.z < y.z, x.w < y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 LessThanEqual(const vec2& x, const vec2& y) {
  return bvec2(x.x <= y.x, x.y <= y.y);
}

GNM_INLINE bvec3 LessThanEqual(const vec3& x, const vec3& y) {
  return bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
}

GNM_INLINE bvec4 LessThanEqual(const vec4& x, const vec4& y) {
  return bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
}

GNM_INLINE bvec2 LessThanEqual(const ivec2& x, const ivec2& y) {
  return bvec2(x.x <= y.x, x.y <= y.y);
}

GNM_INLINE bvec3 LessThanEqual(const ivec3& x, const ivec3& y) {
  return bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
}

GNM_INLINE bvec4 LessThanEqual(const ivec4& x, const ivec4& y) {
  return bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
}

GNM_INLINE bvec2 LessThanEqual(const uvec2& x, const uvec2& y) {
  return bvec2(x.x <= y.x, x.y <= y.y);
}

GNM_INLINE bvec3 LessThanEqual(const uvec3& x, const uvec3& y) {
  return bvec3(x.x <= y.x, x.y <= y.y, x.z <= y.z);
}

GNM_INLINE bvec4 LessThanEqual(const uvec4& x, const uvec4& y) {
  return bvec4(x.x <= y.x, x.y <= y.y, x.z <= y.z, x.w <= y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 GreaterThan(const vec2& x, const vec2& y) {
  return bvec2(x.x > y.x, x.y > y.y);
}

GNM_INLINE bvec3 GreaterThan(const vec3& x, const vec3& y) {
  return bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
}

GNM_INLINE bvec4 GreaterThan(const vec4& x, const vec4& y) {
  return bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
}

GNM_INLINE bvec2 GreaterThan(const ivec2& x, const ivec2& y) {
  return bvec2(x.x > y.x, x.y > y.y);
}

GNM_INLINE bvec3 GreaterThan(const ivec3& x, const ivec3& y) {
  return bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
}

GNM_INLINE bvec4 GreaterThan(const ivec4& x, const ivec4& y) {
  return bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
}

GNM_INLINE bvec2 GreaterThan(const uvec2& x, const uvec2& y) {
  return bvec2(x.x > y.x, x.y > y.y);
}

GNM_INLINE bvec3 GreaterThan(const uvec3& x, const uvec3& y) {
  return bvec3(x.x > y.x, x.y > y.y, x.z > y.z);
}

GNM_INLINE bvec4 GreaterThan(const uvec4& x, const uvec4& y) {
  return bvec4(x.x > y.x, x.y > y.y, x.z > y.z, x.w > y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 GreaterThanEqual(const vec2& x, const vec2& y) {
  return bvec2(x.x >= y.x, x.y >= y.y);
}

GNM_INLINE bvec3 GreaterThanEqual(const vec3& x, const vec3& y) {
  return bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
}

GNM_INLINE bvec4 GreaterThanEqual(const vec4& x, const vec4& y) {
  return bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
}

GNM_INLINE bvec2 GreaterThanEqual(const ivec2& x, const ivec2& y) {
  return bvec2(x.x >= y.x, x.y >= y.y);
}

GNM_INLINE bvec3 GreaterThanEqual(const ivec3& x, const ivec3& y) {
  return bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
}

GNM_INLINE bvec4 GreaterThanEqual(const ivec4& x, const ivec4& y) {
  return bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
}

GNM_INLINE bvec2 GreaterThanEqual(const uvec2& x, const uvec2& y) {
  return bvec2(x.x >= y.x, x.y >= y.y);
}

GNM_INLINE bvec3 GreaterThanEqual(const uvec3& x, const uvec3& y) {
  return bvec3(x.x >= y.x, x.y >= y.y, x.z >= y.z);
}

GNM_INLINE bvec4 GreaterThanEqual(const uvec4& x, const uvec4& y) {
  return bvec4(x.x >= y.x, x.y >= y.y, x.z >= y.z, x.w >= y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool Equal(const float x, const float y) {
  return (Abs(x - y) <= GNM_EPSILON);
}

GNM_INLINE bvec2 Equal(const vec2& x, const vec2& y) {
  return bvec2((Abs(x.x - y.x) <= GNM_EPSILON), (Abs(x.y - y.y) <= GNM_EPSILON));
}

GNM_INLINE bvec3 Equal(const vec3& x, const vec3& y) {
  return bvec3((Abs(x.x - y.x) <= GNM_EPSILON), (Abs(x.y - y.y) <= GNM_EPSILON), (Abs(x.z - y.z) <= GNM_EPSILON));
}

GNM_INLINE bvec4 Equal(const vec4& x, const vec4& y) {
  return bvec4((Abs(x.x - y.x) <= GNM_EPSILON), (Abs(x.y - y.y) <= GNM_EPSILON), (Abs(x.z - y.z) <= GNM_EPSILON), (Abs(x.w - y.w) <= GNM_EPSILON));
}

GNM_INLINE bvec2 Equal(const ivec2& x, const ivec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 Equal(const ivec3& x, const ivec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 Equal(const ivec4& x, const ivec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

GNM_INLINE bvec2 Equal(const uvec2& x, const uvec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 Equal(const uvec3& x, const uvec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 Equal(const uvec4& x, const uvec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

GNM_INLINE bvec2 Equal(const bvec2& x, const bvec2& y) {
  return bvec2(x.x == y.x, x.y == y.y);
}

GNM_INLINE bvec3 Equal(const bvec3& x, const bvec3& y) {
  return bvec3(x.x == y.x, x.y == y.y, x.z == y.z);
}

GNM_INLINE bvec4 Equal(const bvec4& x, const bvec4& y) {
  return bvec4(x.x == y.x, x.y == y.y, x.z == y.z, x.w == y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool Equal(const float x, const float y, float epsilon) {
  return (Abs(x - y) <= epsilon);
}

GNM_INLINE bvec2 Equal(const vec2& x, const vec2& y, float epsilon) {
  return bvec2((Abs(x.x - y.x) <= epsilon), (Abs(x.y - y.y) <= epsilon));
}

GNM_INLINE bvec3 Equal(const vec3& x, const vec3& y, float epsilon) {
  return bvec3((Abs(x.x - y.x) <= epsilon), (Abs(x.y - y.y) <= epsilon), (Abs(x.z - y.z) <= epsilon));
}

GNM_INLINE bvec4 Equal(const vec4& x, const vec4& y, float epsilon) {
  return bvec4((Abs(x.x - y.x) <= epsilon), (Abs(x.y - y.y) <= epsilon), (Abs(x.z - y.z) <= epsilon), (Abs(x.w - y.w) <= epsilon));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 NotEqual(const vec2& x, const vec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 NotEqual(const vec3& x, const vec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 NotEqual(const vec4& x, const vec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

GNM_INLINE bvec2 NotEqual(const ivec2& x, const ivec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 NotEqual(const ivec3& x, const ivec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 NotEqual(const ivec4& x, const ivec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

GNM_INLINE bvec2 NotEqual(const uvec2& x, const uvec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 NotEqual(const uvec3& x, const uvec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 NotEqual(const uvec4& x, const uvec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

GNM_INLINE bvec2 NotEqual(const bvec2& x, const bvec2& y) {
  return bvec2(x.x != y.x, x.y != y.y);
}

GNM_INLINE bvec3 NotEqual(const bvec3& x, const bvec3& y) {
  return bvec3(x.x != y.x, x.y != y.y, x.z != y.z);
}

GNM_INLINE bvec4 NotEqual(const bvec4& x, const bvec4& y) {
  return bvec4(x.x != y.x, x.y != y.y, x.z != y.z, x.w != y.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool NotEqual(const float x, const float y, float epsilon) {
  return (Abs(x - y) > epsilon);
}

GNM_INLINE bvec2 NotEqual(const vec2& x, const vec2& y, float epsilon) {
  return bvec2((Abs(x.x - y.x) > epsilon), (Abs(x.y - y.y) > epsilon));
}

GNM_INLINE bvec3 NotEqual(const vec3& x, const vec3& y, float epsilon) {
  return bvec3((Abs(x.x - y.x) > epsilon), (Abs(x.y - y.y) > epsilon), (Abs(x.z - y.z) > epsilon));
}

GNM_INLINE bvec4 NotEqual(const vec4& x, const vec4& y, float epsilon) {
  return bvec4((Abs(x.x - y.x) > epsilon), (Abs(x.y - y.y) > epsilon), (Abs(x.z - y.z) > epsilon), (Abs(x.w - y.w) > epsilon));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool Any(const bvec2& x) {
  return (x.x || x.y);
}

GNM_INLINE bool Any(const bvec3& x) {
  return (x.x || x.y || x.z);
}

GNM_INLINE bool Any(const bvec4& x) {
  return (x.x || x.y || x.z || x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bool All(const bvec2& x) {
  return (x.x && x.y);
}

GNM_INLINE bool All(const bvec3& x) {
  return (x.x && x.y && x.z);
}

GNM_INLINE bool All(const bvec4& x) {
  return (x.x && x.y && x.z && x.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE bvec2 Not(const bvec2& x) {
  return bvec2(!x.x, !x.y);
}

GNM_INLINE bvec3 Not(const bvec3& x) {
  return bvec3(!x.x, !x.y, !x.z);
}

GNM_INLINE bvec4 Not(const bvec4& x) {
  return bvec4(!x.x, !x.y, !x.z, !x.w);
}

GNM_NAMESPACE_END
