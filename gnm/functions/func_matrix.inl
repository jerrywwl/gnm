GNM_NAMESPACE_BEGIN

GNM_INLINE mat2x2 MatrixCompMult(const mat2x2& x, const mat2x2& y) {
  mat2x2 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  return x;
}

GNM_INLINE mat2x3 MatrixCompMult(const mat2x3& x, const mat2x3& y) {
  mat2x3 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  return x;
}

GNM_INLINE mat2x4 MatrixCompMult(const mat2x4& x, const mat2x4& y) {
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

GNM_INLINE mat3x2 MatrixCompMult(const mat3x2& x, const mat3x2& y) {
  mat3x2 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  return x;
}

GNM_INLINE mat3x3 MatrixCompMult(const mat3x3& x, const mat3x3& y) {
  mat3x3 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  return x;
}

GNM_INLINE mat3x4 MatrixCompMult(const mat3x4& x, const mat3x4& y) {
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

GNM_INLINE mat4x2 MatrixCompMult(const mat4x2& x, const mat4x2& y) {
  mat4x2 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  mat[3] = x[3] * y[3];
  return x;
}

GNM_INLINE mat4x3 MatrixCompMult(const mat4x3& x, const mat4x3& y) {
  mat4x3 mat;
  mat[0] = x[0] * y[0];
  mat[1] = x[1] * y[1];
  mat[2] = x[2] * y[2];
  mat[3] = x[3] * y[3];
  return x;
}

GNM_INLINE mat4x4 MatrixCompMult(const mat4x4& x, const mat4x4& y) {
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

GNM_INLINE mat2 OuterProduct(const vec2& c, const vec2& r) {
  mat2 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  return mat;
}

GNM_INLINE mat3 OuterProduct(const vec3& c, const vec3& r) {
  mat3 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  return mat;
}

GNM_INLINE mat4 OuterProduct(const vec4& c, const vec4& r) {
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

GNM_INLINE mat2x3 OuterProduct(const vec3& c, const vec2& r) {
  mat2x3 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  return mat;
}

GNM_INLINE mat3x2 OuterProduct(const vec2& c, const vec3& r) {
  mat3x2 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  return mat;
}

GNM_INLINE mat2x4 OuterProduct(const vec4& c, const vec2& r) {
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

GNM_INLINE mat4x2 OuterProduct(const vec2& c, const vec4& r) {
  mat4x2 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  mat[3] = c * r[3];
  return mat;
}

GNM_INLINE mat3x4 OuterProduct(const vec4& c, const vec3& r) {
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

GNM_INLINE mat4x3 OuterProduct(const vec3& c, const vec4& r) {
  mat4x3 mat;
  mat[0] = c * r[0];
  mat[1] = c * r[1];
  mat[2] = c * r[2];
  mat[3] = c * r[3];
  return mat;
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE mat2 Transpose(const mat2& m) {
  return mat2(m._m00, m._m01,
              m._m10, m._m11);
}

GNM_INLINE mat3 Transpose(const mat3& m) {
  return mat3(m._m00, m._m01, m._m02,
              m._m10, m._m11, m._m12,
              m._m20, m._m21, m._m22);
}

GNM_INLINE mat4 Transpose(const mat4& m) {
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

GNM_INLINE mat2x3 Transpose(const mat3x2& m) {
  return mat2x3(m._m00, m._m01, m._m02,
                m._m10, m._m11, m._m12);
}

GNM_INLINE mat3x2 Transpose(const mat2x3& m) {
  return mat3x2(m._m00, m._m01,
                m._m10, m._m11,
                m._m20, m._m21);
}

GNM_INLINE mat2x4 Transpose(const mat4x2& m) {
  return mat2x4(m._m00, m._m01, m._m02, m._m03,
                m._m10, m._m11, m._m12, m._m13);
}

GNM_INLINE mat4x2 Transpose(const mat2x4& m) {
  return mat4x2(m._m00, m._m01,
                m._m10, m._m11,
                m._m20, m._m21,
                m._m30, m._m31);
}

GNM_INLINE mat3x4 Transpose(const mat4x3& m) {
  return mat3x4(m._m00, m._m01, m._m02, m._m03,
                m._m10, m._m11, m._m12, m._m13,
                m._m20, m._m21, m._m22, m._m23);
}

GNM_INLINE mat4x3 Transpose(const mat3x4& m) {
  return mat4x3(m._m00, m._m01, m._m02,
                m._m10, m._m11, m._m12,
                m._m20, m._m21, m._m22,
                m._m30, m._m31, m._m32);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE float Determinant(const mat2& m) {
  return m._m00 * m._m11 - m._m01 * m._m10;
}

GNM_INLINE float Determinant(const mat3& m) {
  return m._m00 * (m._m11 * m._m22 - m._m12 * m._m21) -
        m._m01 * (m._m10 * m._m22 - m._m12 * m._m20) +
        m._m02 * (m._m10 * m._m21 - m._m11 * m._m20);
}

GNM_INLINE float Determinant(const mat4& m) {

  float f00 = m._m22 * m._m33 - m._m23 * m._m32;
  float f01 = m._m12 * m._m33 - m._m13 * m._m32;
  float f02 = m._m12 * m._m23 - m._m13 * m._m22;
  float f03 = m._m02 * m._m33 - m._m03 * m._m32;
  float f04 = m._m02 * m._m23 - m._m03 * m._m22;
  float f05 = m._m02 * m._m13 - m._m03 * m._m12;

  return m._m00 * (m._m11 * f00 - m._m21 * f01 + m._m31 * f02) + 
        m._m10 * -(m._m01 * f00 - m._m21 * f03 + m._m31 * f04) + 
        m._m20 * (m._m01 * f01 - m._m11 * f03 + m._m31 * f05) + 
        m._m30 * -(m._m01 * f02 - m._m11 * f04 + m._m21 * f05);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE mat2 Inverse(const mat2& m) {
  float d = 1.0f / Determinant(m);
  return mat2(m._m11 * d, -m._m10 * d,
              -m._m01 * d, m._m00 * d);
}

GNM_INLINE mat3 Inverse(const mat3& m) {
  float d = 1.0f / Determinant(m);

  mat3 mat;
  mat._m00 = (m._m11 * m._m22 - m._m12 * m._m21) * d;
  mat._m01 = -(m._m01 * m._m22 - m._m02 * m._m21) * d;
  mat._m02 = (m._m01 * m._m12 - m._m02 * m._m11) * d;
  mat._m10 = -(m._m10 * m._m22 - m._m12 * m._m20) * d;
  mat._m11 = (m._m00 * m._m22 - m._m02 * m._m20) * d;
  mat._m12 = -(m._m00 * m._m12 - m._m02 * m._m10) * d;
  mat._m20 = (m._m10 * m._m21 - m._m11 * m._m20) * d;
  mat._m21 = -(m._m00 * m._m21 - m._m01 * m._m20) * d;
  mat._m22 = (m._m00 * m._m11 - m._m01 * m._m10) * d;

  return mat;
}

GNM_INLINE mat4 Inverse(const mat4& m) {

  const float f00 = m._m22 * m._m33 - m._m23 * m._m32;
  const float f02 = m._m21 * m._m33 - m._m23 * m._m31;
  const float f03 = m._m21 * m._m32 - m._m22 * m._m31;

  const float f04 = m._m12 * m._m33 - m._m13 * m._m32;
  const float f06 = m._m11 * m._m33 - m._m13 * m._m31;
  const float f07 = m._m11 * m._m32 - m._m12 * m._m31;

  const float f08 = m._m12 * m._m23 - m._m13 * m._m22;
  const float f10 = m._m11 * m._m23 - m._m13 * m._m21;
  const float f11 = m._m11 * m._m22 - m._m12 * m._m21;

  const float f12 = m._m02 * m._m33 - m._m03 * m._m32;
  const float f14 = m._m01 * m._m33 - m._m03 * m._m31;
  const float f15 = m._m01 * m._m32 - m._m02 * m._m31;

  const float f16 = m._m02 * m._m23 - m._m03 * m._m22;
  const float f18 = m._m01 * m._m23 - m._m03 * m._m21;
  const float f19 = m._m01 * m._m22 - m._m02 * m._m21;

  const float f20 = m._m02 * m._m13 - m._m03 * m._m12;
  const float f22 = m._m01 * m._m13 - m._m03 * m._m11;
  const float f23 = m._m01 * m._m12 - m._m02 * m._m11;

  const vec4 fac0(f00, f00, f02, f03);
  const vec4 fac1(f04, f04, f06, f07);
  const vec4 fac2(f08, f08, f10, f11);
  const vec4 fac3(f12, f12, f14, f15);
  const vec4 fac4(f16, f16, f18, f19);
  const vec4 fac5(f20, f20, f22, f23);

  const vec4 v0(m._m01, m._m00, m._m00, m._m00);
  const vec4 v1(m._m11, m._m10, m._m10, m._m10);
  const vec4 v2(m._m21, m._m20, m._m20, m._m20);
  const vec4 v3(m._m31, m._m30, m._m30, m._m30);
  
  const vec4 inv0 = v1 * fac0 - v2 * fac1 + v3 * fac2;
  const vec4 inv1 = v0 * fac0 - v2 * fac3 + v3 * fac4;
  const vec4 inv2 = v0 * fac1 - v1 * fac3 + v3 * fac5;
  const vec4 inv3 = v0 * fac2 - v1 * fac4 + v2 * fac5;

  const vec4 sign_a(+1, -1, +1, -1);
  const vec4 sign_b(-1, +1, -1, +1);
  const mat4 mat_inv(inv0 * sign_a, inv1 * sign_b, inv2 * sign_a, inv3 * sign_b);
  const vec4 vr(mat_inv._m00, mat_inv._m01, mat_inv._m02, mat_inv._m03);
  const vec4& r0 = m[0];
  float d = 1.0f / (r0.x * vr.x + r0.y * vr.y + r0.z * vr.z + r0.w * vr.w);

  return mat_inv * d;
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE mat4 Mat4Translation(const vec3& t) {
  return mat4(1.0f, 0.0f, 0.0f, 0.0f,
              0.0f, 1.0f, 0.0f, 0.0f,
              0.0f, 0.0f, 1.0f, 0.0f,
              t.x, t.y, t.z, 1.0f);
}

GNM_INLINE mat3 Mat3Rotation(const quat& r) {

  float qxx(r.x * r.x);
  float qyy(r.y * r.y);
  float qzz(r.z * r.z);
  float qxz(r.x * r.z);
  float qxy(r.x * r.y);
  float qyz(r.y * r.z);
  float qwx(r.w * r.x);
  float qwy(r.w * r.y);
  float qwz(r.w * r.z);

  return mat3(1.0f - 2.0f * (qyy + qzz), 2.0f * (qxy + qwz), 2.0f * (qxz - qwy),
              2.0f * (qxy - qwz), 1.0f - 2.0f * (qxx + qzz), 2.0f * (qyz + qwx),
              2.0f * (qxz + qwy), 2.0f * (qyz - qwx), 1.0f - 2.0f * (qxx + qyy));
}

GNM_INLINE mat4 Mat4Rotation(const quat& r) {

  float qxx(r.x * r.x);
  float qyy(r.y * r.y);
  float qzz(r.z * r.z);
  float qxz(r.x * r.z);
  float qxy(r.x * r.y);
  float qyz(r.y * r.z);
  float qwx(r.w * r.x);
  float qwy(r.w * r.y);
  float qwz(r.w * r.z);

  return mat4(1.0f - 2.0f * (qyy + qzz), 2.0f * (qxy + qwz), 2.0f * (qxz - qwy), 0.0f,
              2.0f * (qxy - qwz), 1.0f - 2.0f * (qxx + qzz), 2.0f * (qyz + qwx), 0.0f,
              2.0f * (qxz + qwy), 2.0f * (qyz - qwx), 1.0f - 2.0f * (qxx + qyy), 0.0f, 
              0.0f, 0.0f, 0.0f, 1.0f);
}

GNM_INLINE mat3 Mat3Scale(const vec3& s) {
  return mat3(s.x, s.x, s.x,
              s.y, s.y, s.y,
              s.z, s.z, s.z);
}

GNM_INLINE mat4 Mat4Scale(const vec3& s) {
  return mat4(s.x, s.x, s.x, 0.0f,
              s.y, s.y, s.y, 0.0f,
              s.z, s.z, s.z, 0.0f,
              0.0f, 0.0f, 0.0f, 1.0f);
}

GNM_INLINE mat4 Translate(const mat4& m, const vec3& t) {
  mat4 mat = m;
  mat[3] = m[0] * t.x + m[1] * t.y + m[2] * t.z + m[3];
  return mat;
}

GNM_INLINE mat4 Rotate(const mat4& m, const vec3& Axis, float Angle) {
  const float c = Cos(Angle);
  const float s = Sin(Angle);

  vec3 v(Normalize(Axis));
  vec3 temp((1.0f - c) * v);

  mat4 Rotate;
  Rotate._m00 = c + temp.x * v.x;
  Rotate._m10 = temp.x * v.y + s * v.z;
  Rotate._m20 = temp.x * v.z - s * v.y;

  Rotate._m01 = temp.y * v.x - s * v.z;
  Rotate._m11 = c + temp.y * v.y;
  Rotate._m21 = temp.y * v.z + s * v.x;

  Rotate._m02 = temp.z * v.x + s * v.y;
  Rotate._m12 = temp.z * v.y - s * v.x;
  Rotate._m22 = c + temp.z * v.z;

  mat4 mat;
  mat[0] = m[0] * Rotate._m00 + m[1] * Rotate._m10 + m[2] * Rotate._m20;
  mat[1] = m[0] * Rotate._m01 + m[1] * Rotate._m11 + m[2] * Rotate._m21;
  mat[2] = m[0] * Rotate._m02 + m[1] * Rotate._m12 + m[2] * Rotate._m22;
  mat[3] = m[3];
  return mat;
}

GNM_INLINE mat4 Scale(const mat4& m, const vec3& s) {
  mat4 mat;
  mat[0] = m[0] * s.x;
  mat[1] = m[1] * s.y;
  mat[2] = m[2] * s.z;
  mat[3] = m[3];
  return mat;
}

GNM_INLINE mat4 Compose(const vec3& t, const quat& r, const vec3& s) {
  mat4 mat = Mat4Rotation(r);
  mat[0] *= s.x;
  mat[1] *= s.y;
  mat[2] *= s.z;
  mat._m03 += t.x;
  mat._m13 += t.y;
  mat._m23 += t.z;
  return mat;
}

GNM_INLINE vec3 DecomposeTranslation(const mat4& m) {
  return vec3(m._m03, m._m13, m._m23);
}

GNM_INLINE quat DecomposeRotation(const mat3& m) {
  float fourXSquaredMinus1 = m._m00 - m._m11 - m._m22;
  float fourYSquaredMinus1 = m._m11 - m._m00 - m._m22;
  float fourZSquaredMinus1 = m._m22 - m._m00 - m._m11;
  float fourWSquaredMinus1 = m._m00 + m._m11 + m._m22;

  int biggestIndex = 0;
  float fourBiggestSquaredMinus1 = fourWSquaredMinus1;
  if (fourXSquaredMinus1 > fourBiggestSquaredMinus1) {
    fourBiggestSquaredMinus1 = fourXSquaredMinus1;
    biggestIndex = 1;
  }
  if (fourYSquaredMinus1 > fourBiggestSquaredMinus1) {
    fourBiggestSquaredMinus1 = fourYSquaredMinus1;
    biggestIndex = 2;
  }
  if (fourZSquaredMinus1 > fourBiggestSquaredMinus1) {
    fourBiggestSquaredMinus1 = fourZSquaredMinus1;
    biggestIndex = 3;
  }

  float biggestVal = Sqrt(fourBiggestSquaredMinus1 + 1.0f) * 0.5f;
  float mult = 0.25f / biggestVal;

  switch (biggestIndex) {
  case 0: return quat(biggestVal, (m._m21 - m._m12) * mult, (m._m02 - m._m20) * mult, (m._m10 - m._m01) * mult);
  case 1: return quat((m._m21 - m._m12) * mult, biggestVal, (m._m10 + m._m01) * mult, (m._m02 + m._m20) * mult);
  case 2: return quat((m._m02 - m._m20) * mult, (m._m10 + m._m01) * mult, biggestVal, (m._m21 + m._m12) * mult);
  case 3: return quat((m._m10 - m._m01) * mult, (m._m02 + m._m20) * mult, (m._m21 + m._m12) * mult, biggestVal);
  default: // Silence a -Wswitch-default warning in GCC. Should never actually get here. Assert is just for sanity.
    assert(false);
    return QUAT_IDENTITY;
  }
}

GNM_INLINE quat DecomposeRotation(const mat4& m) {
  float fourXSquaredMinus1 = m._m00 - m._m11 - m._m22;
  float fourYSquaredMinus1 = m._m11 - m._m00 - m._m22;
  float fourZSquaredMinus1 = m._m22 - m._m00 - m._m11;
  float fourWSquaredMinus1 = m._m00 + m._m11 + m._m22;

  int biggestIndex = 0;
  float fourBiggestSquaredMinus1 = fourWSquaredMinus1;
  if (fourXSquaredMinus1 > fourBiggestSquaredMinus1) {
    fourBiggestSquaredMinus1 = fourXSquaredMinus1;
    biggestIndex = 1;
  }
  if (fourYSquaredMinus1 > fourBiggestSquaredMinus1) {
    fourBiggestSquaredMinus1 = fourYSquaredMinus1;
    biggestIndex = 2;
  }
  if (fourZSquaredMinus1 > fourBiggestSquaredMinus1) {
    fourBiggestSquaredMinus1 = fourZSquaredMinus1;
    biggestIndex = 3;
  }

  float biggestVal = Sqrt(fourBiggestSquaredMinus1 + 1.0f) * 0.5f;
  float mult = 0.25f / biggestVal;

  switch (biggestIndex) {
  case 0: return quat(biggestVal, (m._m21 - m._m12) * mult, (m._m02 - m._m20) * mult, (m._m10 - m._m01) * mult);
  case 1: return quat((m._m21 - m._m12) * mult, biggestVal, (m._m10 + m._m01) * mult, (m._m02 + m._m20) * mult);
  case 2: return quat((m._m02 - m._m20) * mult, (m._m10 + m._m01) * mult, biggestVal, (m._m21 + m._m12) * mult);
  case 3: return quat((m._m10 - m._m01) * mult, (m._m02 + m._m20) * mult, (m._m21 + m._m12) * mult, biggestVal);
  default: // Silence a -Wswitch-default warning in GCC. Should never actually get here. Assert is just for sanity.
    assert(false);
    return QUAT_IDENTITY;
  }
}

GNM_INLINE vec3 DecomposeScale(const mat4& m) {
  return vec3(Sqrt(m._m00 * m._m00 + m._m10 * m._m10 + m._m20 * m._m20),
              Sqrt(m._m01 * m._m01 + m._m11 * m._m11 + m._m21 * m._m21),
              Sqrt(m._m02 * m._m02 + m._m12 * m._m12 + m._m22 * m._m22));
}

GNM_INLINE void decompose(const mat4& m, vec3& t, quat& r, vec3& s) {
  mat4 mat(m);

  // Next take care of translation (easy).
  t = mat[3].xyz;

  mat[3] = vec4(0, 0, 0, mat[3].w);

  vec3 rows[3];

  // Now get scale and shear.
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      rows[i][j] = mat[i][j];
    }
  }

  // Compute X scale factor and normalize first row.
  s.x = Length(rows[0]);

  rows[0] /= Length(rows[0]);

  // Compute XY shear factor and make 2nd row orthogonal to 1st.
  rows[1] = rows[1] - rows[0] * Dot(rows[0], rows[1]);

  // Now, compute Y scale and normalize 2nd row.
  s.y = Length(rows[1]);
  rows[1] /= Length(rows[1]);

  // Compute XZ and YZ shears, orthogonalize 3rd row.
  rows[2] = rows[2] - rows[0] * Dot(rows[0], rows[2]);
  rows[2] = rows[2] - rows[1] * Dot(rows[1], rows[2]);

  // Next, get Z scale and normalize 3rd row.
  s.z = Length(rows[2]);
  rows[2] /= Length(rows[2]);

  // At this point, the matrix (in rows[]) is orthonormal.
  // Check for a coordinate system flip.  If the determinant
  // is -1, then negate the matrix and the scaling factors.
  vec3 pdum3 = Cross(rows[1], rows[2]); // v3Cross(row[1], row[2], Pdum3);
  if (Dot(rows[0], pdum3) < 0) {
    s = -s;
    rows[0] = -rows[0];
    rows[1] = -rows[1];
    rows[2] = -rows[2];
  }

  // Now, get the rotations out, as described in the gem.

  // FIXME - Add the ability to return either quaternions (which are
  // easier to recompose with) or Euler angles (rx, ry, rz), which
  // are easier for authors to deal with. The latter will only be useful
  // when we fix https://bugs.webkit.org/show_bug.cgi?id=23799, so I
  // will leave the Euler angle code here for now.

  // ret.rotateY = asin(-Row[0][2]);
  // if (cos(ret.rotateY) != 0) {
  //     ret.rotateX = atan2(Row[1][2], Row[2][2]);
  //     ret.rotateZ = atan2(Row[0][1], Row[0][0]);
  // } else {
  //     ret.rotateX = atan2(-Row[2][0], Row[1][1]);
  //     ret.rotateZ = 0;
  // }

 
  float trace = rows[0].x + rows[1].y + rows[2].z;
  if (trace > 0.0f)  {
    float root = Sqrt(trace + 1.0f);
    r.w = 0.5f * root;
    root = 0.5f / root;
    r.x = root * (rows[1].z - rows[2].y);
    r.y = root * (rows[2].x - rows[0].z);
    r.z = root * (rows[0].y - rows[1].x);
  } else {
    static int Next[3] = { 1, 2, 0 };
    int i = 0;
    if (rows[1].y > rows[0].x) i = 1;
    if (rows[2].z > rows[i][i]) i = 2;
    int j = Next[i];
    int k = Next[j];

    float root = Sqrt(rows[i][i] - rows[j][j] - rows[k][k] + 1.0f);

    r[i] = 0.5f * root;
    root = 0.5f / root;
    r[j] = root * (rows[i][j] + rows[j][i]);
    r[k] = root * (rows[i][k] + rows[k][i]);
    r.w = root * (rows[j][k] - rows[k][j]);
  }
}

GNM_INLINE mat4 LookAtRH(const vec3& eye, const vec3& center, const vec3& up) {
  const vec3 f(Normalize(center - eye));
  const vec3 s(Normalize(Cross(f, up)));
  const vec3 u(Cross(s, f));

  return mat4(s.x, u.x, -f.x, 0,
              s.y, u.y, -f.y, 0,
              s.z, u.z, -f.z, 0,
              -Dot(s, eye), -Dot(u, eye), Dot(f, eye), 1);
}

GNM_INLINE mat4 LookAtLH(const vec3& eye, const vec3& center, const vec3& up) {
  const vec3 f(Normalize(center - eye));
  const vec3 s(Normalize(Cross(up, f)));
  const vec3 u(Cross(f, s));

  return mat4(s.x, u.x, f.x, 0,
              s.y, u.y, f.y, 0,
              s.z, u.z, f.z, 0,
              -Dot(s, eye), -Dot(u, eye), Dot(f, eye), 1);
}

GNM_INLINE mat4 OrthoRHZO(float left, float right, float bottom, float top, float znear, float zfar) {
  return mat4(2.0f / (right - left), 0, 0, 0,
              0, 2.0f / (top - bottom), 0, 0,
              0, 0, -1.0f / (zfar - znear), 0,
              -(right + left) / (right - left), -(top + bottom) / (top - bottom), -znear / (zfar - znear), 1);
}

GNM_INLINE mat4 OrthoRHNO(float left, float right, float bottom, float top, float znear, float zfar) {
  return mat4(2.0f / (right - left), 0, 0, 0,
              0, 2.0f / (top - bottom), 0, 0,
              0, 0, -2.0f / (zfar - znear), 0,
              -(right + left) / (right - left), -(top + bottom) / (top - bottom), -(zfar + znear) / (zfar - znear), 1);
}

GNM_INLINE mat4 OrthoLHZO(float left, float right, float bottom, float top, float znear, float zfar) {
  return mat4(2.0f / (right - left), 0, 0, 0,
              0, 2.0f / (top - bottom), 0, 0,
              0, 0, 1.0f / (zfar - znear), 0,
              -(right + left) / (right - left), -(top + bottom) / (top - bottom), -znear / (zfar - znear), 1);
}

GNM_INLINE mat4 OrthoLHNO(float left, float right, float bottom, float top, float znear, float zfar) {
  return mat4(2.0f / (right - left), 0, 0, 0,
              0, 2.0f / (top - bottom), 0, 0,
              0, 0, 2.0f / (zfar - znear), 0,
              -(right + left) / (right - left), -(top + bottom) / (top - bottom), -(zfar + znear) / (zfar - znear), 1);
}

GNM_INLINE mat4 PerspectiveRHZO(float fovy, float aspect, float znear, float zfar) {
  assert(Abs(aspect - GNM_EPSILON) > 0.0f);
  const float tanHalfFovy = Tan(fovy * 0.5f);
  return mat4(1.0f / (aspect * tanHalfFovy), 0, 0, 0,
              0, 1.0f / (tanHalfFovy), 0, 0,
              0, 0, zfar / (znear - zfar), -1,
              0, 0, -(zfar * znear) / (zfar - znear), 0);
}

GNM_INLINE mat4 PerspectiveRHNO(float fovy, float aspect, float znear, float zfar) {
  assert(Abs(aspect - GNM_EPSILON) > 0.0f);
  const float tanHalfFovy = Tan(fovy * 0.5f);
  return mat4(1.0f / (aspect * tanHalfFovy), 0, 0, 0,
              0, 1.0f / (tanHalfFovy), 0, 0,
              0, 0,  - (zfar + znear) / (znear - zfar), -1,
              0, 0, -(2.0f * zfar * znear) / (zfar - znear), 0);
}

GNM_INLINE mat4 PerspectiveLHZO(float fovy, float aspect, float znear, float zfar) {
  assert(Abs(aspect - GNM_EPSILON) > 0.0f);
  const float tanHalfFovy = Tan(fovy * 0.5f);
  return mat4(1.0f / (aspect * tanHalfFovy), 0, 0, 0,
              0, 1.0f / (tanHalfFovy), 0, 0,
              0, 0, zfar / (zfar - znear), 1,
              0, 0, -(zfar * znear) / (zfar - znear), 0);
}

GNM_INLINE mat4 PerspectiveLHNO(float fovy, float aspect, float znear, float zfar) {
  assert(Abs(aspect - GNM_EPSILON) > 0.0f);
  const float tanHalfFovy = Tan(fovy * 0.5f);
  return mat4(1.0f / (aspect * tanHalfFovy), 0, 0, 0,
              0, 1.0f / (tanHalfFovy), 0, 0,
              0, 0, (zfar + znear) / (znear - zfar), 1,
              0, 0, -(2.0f * zfar * znear) / (zfar - znear), 0);
}

GNM_NAMESPACE_END
