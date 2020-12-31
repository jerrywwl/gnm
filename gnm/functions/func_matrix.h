#ifndef GNM_FUNCTIONS_FUNC_MATRIX_H_
#define GNM_FUNCTIONS_FUNC_MATRIX_H_

#include "../mat4x4.h"

// Geometric Functions

GNM_NAMESPACE_BEGIN

mat2x2 matrixCompMult(const mat2x2& x, const mat2x2& y);
mat2x3 matrixCompMult(const mat2x3& x, const mat2x3& y);
mat2x4 matrixCompMult(const mat2x4& x, const mat2x4& y);
mat3x2 matrixCompMult(const mat3x2& x, const mat3x2& y);
mat3x3 matrixCompMult(const mat3x3& x, const mat3x3& y);
mat3x4 matrixCompMult(const mat3x4& x, const mat3x4& y);
mat4x2 matrixCompMult(const mat4x2& x, const mat4x2& y);
mat4x3 matrixCompMult(const mat4x3& x, const mat4x3& y);
mat4x4 matrixCompMult(const mat4x4& x, const mat4x4& y);

mat2 outerProduct(const vec2& c, const vec2& r);
mat3 outerProduct(const vec3& c, const vec3& r);
mat4 outerProduct(const vec4& c, const vec4& r);
mat2x3 outerProduct(const vec3& c, const vec2& r);
mat3x2 outerProduct(const vec2& c, const vec3& r);
mat2x4 outerProduct(const vec4& c, const vec2& r);
mat4x2 outerProduct(const vec2& c, const vec4& r);
mat3x4 outerProduct(const vec4& c, const vec3& r);
mat4x3 outerProduct(const vec3& c, const vec4& r);

mat2 transpose(const mat2& m);
mat3 transpose(const mat3& m);
mat4 transpose(const mat4& m);
mat2x3 transpose(const mat3x2& m);
mat3x2 transpose(const mat2x3& m);
mat2x4 transpose(const mat4x2& m);
mat4x2 transpose(const mat2x4& m);
mat3x4 transpose(const mat4x3& m);
mat4x3 transpose(const mat3x4& m);

float determinant(const mat2& m);
float determinant(const mat3& m);
float determinant(const mat4& m);

mat2 inverse(const mat2& m);
mat3 inverse(const mat3& m);
mat4 inverse(const mat4& m);

GNM_NAMESPACE_END

#include "func_matrix.inl"

#endif // GNM_FUNCTIONS_FUNC_MATRIX_H_