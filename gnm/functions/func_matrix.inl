GNM_NAMESPACE_BEGIN

GNM_INLINE mat2x2 matrixCompMult(const mat2x2& x, const mat2x2& y) {
  mat2x2 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  return x;
}

GNM_INLINE mat2x3 matrixCompMult(const mat2x3& x, const mat2x3& y) {
  mat2x3 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  return x;
}

GNM_INLINE mat2x4 matrixCompMult(const mat2x4& x, const mat2x4& y) {
  mat2x4 mat;
#if (GNM_SIMD)
  mat[0] = _mm_mul_ps(x[0]._v, y[0]._v);
  mat[1] = _mm_mul_ps(x[1]._v, y[1]._v);
#else
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
#endif
  return x;
}

GNM_INLINE mat3x2 matrixCompMult(const mat3x2& x, const mat3x2& y) {
  mat3x2 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  return x;
}

GNM_INLINE mat3x3 matrixCompMult(const mat3x3& x, const mat3x3& y) {
  mat3x3 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  return x;
}

GNM_INLINE mat3x4 matrixCompMult(const mat3x4& x, const mat3x4& y) {
  mat3x4 mat;
#if (GNM_SIMD)
  mat[0] = _mm_mul_ps(x[0]._v, y[0]._v);
  mat[1] = _mm_mul_ps(x[1]._v, y[1]._v);
  mat[2] = _mm_mul_ps(x[2]._v, y[2]._v);
#else
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
#endif
  return x;
}

GNM_INLINE mat4x2 matrixCompMult(const mat4x2& x, const mat4x2& y) {
  mat4x2 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  mat[3] = x[3] * y[3];
  return x;
}

GNM_INLINE mat4x3 matrixCompMult(const mat4x3& x, const mat4x3& y) {
  mat4x3 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  mat[3] = x[3] * y[3];
  return x;
}

GNM_INLINE mat4x4 matrixCompMult(const mat4x4& x, const mat4x4& y) {
  mat4x4 mat;
#if (GNM_SIMD)
  mat[0] = _mm_mul_ps(x[0]._v, y[0]._v);
  mat[1] = _mm_mul_ps(x[1]._v, y[1]._v);
  mat[2] = _mm_mul_ps(x[2]._v, y[2]._v);
  mat[3] = _mm_mul_ps(x[3]._v, y[3]._v);
#else
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  mat[3] = x[3] * y[3];
#endif
  return x;
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE mat2 outerProduct(const vec2& c, const vec2& r) {
  mat2 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  return mat;
}

GNM_INLINE mat3 outerProduct(const vec3& c, const vec3& r) {
  mat3 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  return mat;
}

GNM_INLINE mat4 outerProduct(const vec4& c, const vec4& r) {
  mat4 mat;
#if (GNM_SIMD)
  mat[0] = _mm_mul_ps(c._v, _mm_set_ps1(r.x));
  mat[1] = _mm_mul_ps(c._v, _mm_set_ps1(r.y));
  mat[2] = _mm_mul_ps(c._v, _mm_set_ps1(r.z));
  mat[3] = _mm_mul_ps(c._v, _mm_set_ps1(r.w));
#else
  mat[0] = c * r.x;
  mat[1] = c * r.y;
  mat[2] = c * r.z;
  mat[3] = c * r.w;
#endif
  return mat;
}

GNM_INLINE mat2x3 outerProduct(const vec3& c, const vec2& r) {
  mat2x3 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  return mat;
}

GNM_INLINE mat3x2 outerProduct(const vec2& c, const vec3& r) {
  mat3x2 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  return mat;
}

GNM_INLINE mat2x4 outerProduct(const vec4& c, const vec2& r) {
  mat2x4 mat;
#if (GNM_SIMD)
  mat[0] = _mm_mul_ps(c._v, _mm_set_ps1(r.x));
  mat[1] = _mm_mul_ps(c._v, _mm_set_ps1(r.y));
#else
  mat[0] = c * r.x;
  mat[1] = c * r.y;
#endif
  return mat;
}

GNM_INLINE mat4x2 outerProduct(const vec2& c, const vec4& r) {
  mat4x2 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  mat[3] = c * r[3];
  return mat;
}

GNM_INLINE mat3x4 outerProduct(const vec4& c, const vec3& r) {
  mat3x4 mat;
#if (GNM_SIMD)
  mat[0] = _mm_mul_ps(c._v, _mm_set_ps1(r.x));
  mat[1] = _mm_mul_ps(c._v, _mm_set_ps1(r.y));
  mat[2] = _mm_mul_ps(c._v, _mm_set_ps1(r.z));
#else
  mat[0] = c * r.x;
  mat[1] = c * r.y;
  mat[2] = c * r.z;
#endif
  return mat;
}

GNM_INLINE mat4x3 outerProduct(const vec3& c, const vec4& r) {
  mat4x3 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  mat[3] = c * r[3];
  return mat;
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE mat2 transpose(const mat2& m) {
  return mat2(m._m00, m._m01,
              m._m10, m._m11);
}

GNM_INLINE mat3 transpose(const mat3& m) {
  return mat3(m._m00, m._m01, m._m02,
              m._m10, m._m11, m._m12,
              m._m20, m._m21, m._m22);
}

GNM_INLINE mat4 transpose(const mat4& m) {
#if (GNM_SIMD)
  __m128 tmp0 = _mm_shuffle_ps(m[0]._v, m[1]._v, 0x44);
  __m128 tmp2 = _mm_shuffle_ps(m[0]._v, m[1]._v, 0xEE);
  __m128 tmp1 = _mm_shuffle_ps(m[2]._v, m[3]._v, 0x44);
  __m128 tmp3 = _mm_shuffle_ps(m[2]._v, m[3]._v, 0xEE);

  return mat4(_mm_shuffle_ps(tmp0, tmp1, 0x88),
              _mm_shuffle_ps(tmp0, tmp1, 0xDD),
              _mm_shuffle_ps(tmp2, tmp3, 0x88),
              _mm_shuffle_ps(tmp2, tmp3, 0xDD));
#else
  return mat4(m._m00, m._m01, m._m02, m._m03,
              m._m10, m._m11, m._m12, m._m13,
              m._m20, m._m21, m._m22, m._m23,
              m._m30, m._m31, m._m32, m._m33);
#endif
}

GNM_INLINE mat2x3 transpose(const mat3x2& m) {
  return mat2x3(m._m00, m._m01, m._m02,
                m._m10, m._m11, m._m12);
}

GNM_INLINE mat3x2 transpose(const mat2x3& m) {
  return mat3x2(m._m00, m._m01,
                m._m10, m._m11,
                m._m20, m._m21);
}

GNM_INLINE mat2x4 transpose(const mat4x2& m) {
  return mat2x4(m._m00, m._m01, m._m02, m._m03,
                m._m10, m._m11, m._m12, m._m13);
}

GNM_INLINE mat4x2 transpose(const mat2x4& m) {
  return mat4x2(m._m00, m._m01,
                m._m10, m._m11,
                m._m20, m._m21,
                m._m30, m._m31);
}

GNM_INLINE mat3x4 transpose(const mat4x3& m) {
  return mat3x4(m._m00, m._m01, m._m02, m._m03,
                m._m10, m._m11, m._m12, m._m13,
                m._m20, m._m21, m._m22, m._m23);
}

GNM_INLINE mat4x3 transpose(const mat3x4& m) {
  return mat4x3(m._m00, m._m01, m._m02,
                m._m10, m._m11, m._m12,
                m._m20, m._m21, m._m22,
                m._m30, m._m31, m._m32);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float determinant(const mat2& m) {
  return m._m00 * m._m11 - m._m10 * m._m01;
}

GNM_INLINE float determinant(const mat3& m) {
  return m._m00 * m._m11 * m._m22 - m._m21 * m._m12 -
        m._m10 * m._m01 * m._m22 - m._m21 * m._m02 +
        m._m20 * m._m01 * m._m12 - m._m11 * m._m02;
}

GNM_INLINE float determinant(const mat4& m) {

  float f00 = m._m22 * m._m33 - m._m32 * m._m23;
  float f01 = m._m21 * m._m33 - m._m31 * m._m23;
  float f02 = m._m21 * m._m32 - m._m31 * m._m22;
  float f03 = m._m20 * m._m33 - m._m30 * m._m23;
  float f04 = m._m20 * m._m32 - m._m30 * m._m22;
  float f05 = m._m20 * m._m31 - m._m30 * m._m21;

  return m._m00 * (m._m11 * f00 - m._m12 * f01 + m._m13 * f02) +
        m._m01 * -(m._m10 * f00 - m._m12 * f03 + m._m13 * f04) +
        m._m02 * (m._m10 * f01 - m._m11 * f03 + m._m13 * f05) +
        m._m03 * -(m._m10 * f02 - m._m11 * f04 + m._m12 * f05);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE mat2 inverse(const mat2& m) {
  float d = 1.0f / determinant(m);
  return mat2(m._m11 * d, -m._m01 * d,
              -m._m10 * d, m._m00 * d);
}

GNM_INLINE mat3 inverse(const mat3& m) {
  float d = 1.0f / determinant(m);

  return mat3((m._m11 * m._m22 - m._m21 * m._m12) * d, -(m._m10 * m._m22 - m._m20 * m._m12) * d, (m._m10 * m._m21 - m._m20 * m._m11) * d,
              -(m._m01 * m._m22 - m._m21 * m._m02) * d, (m._m00 * m._m22 - m._m20 * m._m02) * d, -(m._m00 * m._m21 - m._m20 * m._m01) * d,
              (m._m01 * m._m12 - m._m11 * m._m02) * d, -(m._m00 * m._m12 - m._m10 * m._m02) * d, (m._m00 * m._m11 - m._m10 * m._m01) * d);
}

GNM_INLINE mat4 inverse(const mat4& m) {

  const float f00 = m._m22 * m._m33 - m._m32 * m._m23;
  const float f02 = m._m12 * m._m33 - m._m32 * m._m13;
  const float f03 = m._m12 * m._m23 - m._m22 * m._m13;

  const float f04 = m._m21 * m._m33 - m._m31 * m._m23;
  const float f06 = m._m11 * m._m33 - m._m31 * m._m13;
  const float f07 = m._m11 * m._m23 - m._m21 * m._m13;

  const float f08 = m._m21 * m._m32 - m._m31 * m._m22;
  const float f10 = m._m11 * m._m32 - m._m31 * m._m12;
  const float f11 = m._m11 * m._m22 - m._m21 * m._m12;

  const float f12 = m._m20 * m._m33 - m._m30 * m._m23;
  const float f14 = m._m10 * m._m33 - m._m30 * m._m13;
  const float f15 = m._m10 * m._m23 - m._m20 * m._m13;

  const float f16 = m._m20 * m._m32 - m._m30 * m._m22;
  const float f18 = m._m10 * m._m32 - m._m30 * m._m12;
  const float f19 = m._m10 * m._m22 - m._m20 * m._m12;

  const float f20 = m._m20 * m._m31 - m._m30 * m._m21;
  const float f22 = m._m10 * m._m31 - m._m30 * m._m11;
  const float f23 = m._m10 * m._m21 - m._m20 * m._m11;

  const vec4 fac0(f00, f00, f02, f03);
  const vec4 fac1(f04, f04, f06, f07);
  const vec4 fac2(f08, f08, f10, f11);
  const vec4 fac3(f12, f12, f14, f15);
  const vec4 fac4(f16, f16, f18, f19);
  const vec4 fac5(f20, f20, f22, f23);

  const vec4 v0(m._m10, m._m00, m._m00, m._m00);
  const vec4 v1(m._m11, m._m01, m._m01, m._m01);
  const vec4 v2(m._m12, m._m02, m._m02, m._m02);
  const vec4 v3(m._m13, m._m03, m._m03, m._m03);
  
  const vec4 inv0 = v1 * fac0 - v2 * fac1 + v3 * fac2;
  const vec4 inv1 = v0 * fac0 - v2 * fac3 + v3 * fac4;
  const vec4 inv2 = v0 * fac1 - v1 * fac3 + v3 * fac5;
  const vec4 inv3 = v0 * fac2 - v1 * fac4 + v2 * fac5;

  const vec4 sign_a(1, -1, 1, -1);
  const vec4 sign_b(-1, 1, -1, 1);
  const mat4 mat_inv(inv0 * sign_a, inv1 * sign_b, inv2 * sign_a, inv3 * sign_b);
  const vec4 vr(mat_inv._m00, mat_inv._m10, mat_inv._m20, mat_inv._m30);
  const vec4& r0 = m[0];
  float d = 1.0f / (r0.x * vr.x + r0.y * vr.y + r0.z * vr.z + r0.w * vr.w);

  return mat_inv * d;
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
