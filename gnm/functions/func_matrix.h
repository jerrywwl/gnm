#ifndef GNM_FUNCTIONS_FUNC_MATRIX_H_
#define GNM_FUNCTIONS_FUNC_MATRIX_H_

#include "../mat4x4.h"

// Geometric Functions

GNM_NAMESPACE_BEGIN

mat2x2 MatrixCompMult(const mat2x2& x, const mat2x2& y);
mat2x3 MatrixCompMult(const mat2x3& x, const mat2x3& y);
mat2x4 MatrixCompMult(const mat2x4& x, const mat2x4& y);
mat3x2 MatrixCompMult(const mat3x2& x, const mat3x2& y);
mat3x3 MatrixCompMult(const mat3x3& x, const mat3x3& y);
mat3x4 MatrixCompMult(const mat3x4& x, const mat3x4& y);
mat4x2 MatrixCompMult(const mat4x2& x, const mat4x2& y);
mat4x3 MatrixCompMult(const mat4x3& x, const mat4x3& y);
mat4x4 MatrixCompMult(const mat4x4& x, const mat4x4& y);

mat2 OuterProduct(const vec2& c, const vec2& r);
mat3 OuterProduct(const vec3& c, const vec3& r);
mat4 OuterProduct(const vec4& c, const vec4& r);
mat2x3 OuterProduct(const vec3& c, const vec2& r);
mat3x2 OuterProduct(const vec2& c, const vec3& r);
mat2x4 OuterProduct(const vec4& c, const vec2& r);
mat4x2 OuterProduct(const vec2& c, const vec4& r);
mat3x4 OuterProduct(const vec4& c, const vec3& r);
mat4x3 OuterProduct(const vec3& c, const vec4& r);

mat2 Transpose(const mat2& m);
mat3 Transpose(const mat3& m);
mat4 Transpose(const mat4& m);
mat2x3 Transpose(const mat3x2& m);
mat3x2 Transpose(const mat2x3& m);
mat2x4 Transpose(const mat4x2& m);
mat4x2 Transpose(const mat2x4& m);
mat3x4 Transpose(const mat4x3& m);
mat4x3 Transpose(const mat3x4& m);

float Determinant(const mat2& m);
float Determinant(const mat3& m);
float Determinant(const mat4& m);

mat2 Inverse(const mat2& m);
mat3 Inverse(const mat3& m);
mat4 Inverse(const mat4& m);

// ----------------------------------------------------------------------------------------------------
// GNM_EXT_MATRIX_FUNCTIONS

mat4 Mat4Translation(const vec3& t);
mat3 Mat3Rotation(const quat& r);
mat4 Mat4Rotation(const quat& r);
mat3 Mat3Scale(const vec3& s);
mat4 Mat4Scale(const vec3& s);

mat4 Translate(const mat4& m, const vec3& t);
mat4 Rotate(const mat4& m, const vec3& Axis, float Angle);
mat4 Scale(const mat4& m, const vec3& s);
mat4 Compose(const vec3& t, const quat& r, const vec3& s);
vec3 DecomposeTranslation(const mat4& m);
quat DecomposeRotation(const mat4& m);
vec3 DecomposeScale(const mat4& m);

mat4 LookAtRH(const vec3& eye, const vec3& center, const vec3& up);
mat4 LookAtLH(const vec3& eye, const vec3& center, const vec3& up);
mat4 OrthoRHZO(float left, float right, float bottom, float top, float znear, float zfar);
mat4 OrthoRHNO(float left, float right, float bottom, float top, float znear, float zfar);
mat4 OrthoLHZO(float left, float right, float bottom, float top, float znear, float zfar);
mat4 OrthoLHNO(float left, float right, float bottom, float top, float znear, float zfar);
mat4 PerspectiveRHZO(float fovy, float aspect, float znear, float zfar);
mat4 PerspectiveRHNO(float fovy, float aspect, float znear, float zfar);
mat4 PerspectiveLHZO(float fovy, float aspect, float znear, float zfar);
mat4 PerspectiveLHNO(float fovy, float aspect, float znear, float zfar);

GNM_NAMESPACE_END

#include "func_matrix.inl"

#endif // GNM_FUNCTIONS_FUNC_MATRIX_H_