GNM_NAMESPACE_BEGIN

GNM_INLINE vec4 operator + (const vec4& a, const vec4& b) {
#if (GNM_SIMD)
	return vec4(_mm_add_ps(a._v, b._v));
#else
	return vec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
#endif
}

GNM_INLINE ivec4 operator + (const ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	return ivec4(_mm_add_epi32(a._vi, b._vi));
#else
	return ivec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
#endif
}

GNM_INLINE uvec4 operator + (const uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	return uvec4(_mm_add_epi32(a._vi, b._vi));
#else
	return uvec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
#endif
}

GNM_INLINE vec4 operator - (const vec4& a, const vec4& b) {
#if (GNM_SIMD)
	return vec4(_mm_sub_ps(a._v, b._v));
#else
	return vec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
#endif
}

GNM_INLINE ivec4 operator - (const ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	return ivec4(_mm_sub_epi32(a._vi, b._vi));
#else
	return ivec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
#endif
}

GNM_INLINE uvec4 operator - (const uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	return uvec4(_mm_sub_epi32(a._vi, b._vi));
#else
	return uvec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
#endif
}

GNM_INLINE vec4 operator * (const vec4& a, const vec4& b) {
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(a._v, b._v));
#else
	return vec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
#endif
}

GNM_INLINE ivec4 operator * (const ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	return ivec4(_mm_mul_epi32(a._vi, b._vi));
#else
	return ivec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
#endif
}

GNM_INLINE uvec4 operator * (const uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	return uvec4(_mm_mul_epu32(a._vi, b._vi));
#else
	return uvec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
#endif
}

GNM_INLINE vec4 operator * (const float a, const vec4& b) {
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(_mm_set_ps1(a), b._v));
#else
	return vec4(a * b.x, a * b.y, a * b.z, a * b.w);
#endif
}

GNM_INLINE ivec4 operator * (const int a, const ivec4& b) {
#if (GNM_SIMD)
	return ivec4(_mm_mul_epi32(_mm_set1_epi32(a), b._vi));
#else
	return ivec4(a * b.x, a * b.y, a * b.z, a * b.w);
#endif
}

GNM_INLINE uvec4 operator * (const uint a, const uvec4& b) {
#if (GNM_SIMD)
	return uvec4(_mm_mul_epu32(_mm_set1_epi32(a), b._vi));
#else
	return uvec4(a * b.x, a * b.y, a * b.z, a * b.w);
#endif
}

GNM_INLINE vec4 operator * (const vec4& a, const float b) {
#if (GNM_SIMD)
	return vec4(_mm_mul_ps(a._v, _mm_set_ps1(b)));
#else
	return vec4(a.x * b, a.y * b, a.z * b, a.w * b);
#endif
}

GNM_INLINE ivec4 operator * (const ivec4& a, const int b) {
#if (GNM_SIMD)
	return ivec4(_mm_mul_epi32(a._vi, _mm_set1_epi32(b)));
#else
	return ivec4(a.x * b, a.y * b, a.z * b, a.w * b);
#endif
}

GNM_INLINE uvec4 operator * (const uvec4& a, const uint b) {
#if (GNM_SIMD)
	return uvec4(_mm_mul_epu32(a._vi, _mm_set1_epi32(b)));
#else
	return uvec4(a.x * b, a.y * b, a.z * b, a.w * b);
#endif
}

GNM_INLINE vec4 operator / (const vec4& a, const vec4& b) {
#if (GNM_SIMD)
	return vec4(_mm_div_ps(a._v, b._v));
#else
	return vec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
#endif
}

GNM_INLINE ivec4 operator / (const ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	return ivec4(_mm_div_epi32(a._vi, b._vi));
#else
	return ivec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
#endif
}

GNM_INLINE uvec4 operator / (const uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	return uvec4(_mm_div_epu32(a._vi, b._vi));
#else
	return uvec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
#endif
}

GNM_INLINE vec4 operator / (const float a, const vec4& b) {
#if (GNM_SIMD)
	return vec4(_mm_div_ps(_mm_set_ps1(a), b._v));
#else
	return vec4(a / b.x, a / b.y, a / b.z, a / b.w);
#endif
}

GNM_INLINE ivec4 operator / (const int a, const ivec4& b) {
#if (GNM_SIMD)
	return ivec4(_mm_div_epi32(_mm_set1_epi32(a), b._vi));
#else
	return ivec4(a / b.x, a / b.y, a / b.z, a / b.w);
#endif
}

GNM_INLINE uvec4 operator / (const uint a, const uvec4& b) {
#if (GNM_SIMD)
	return uvec4(_mm_div_epu32(_mm_set1_epi32(a), b._vi));
#else
	return uvec4(a / b.x, a / b.y, a / b.z, a / b.w);
#endif
}

GNM_INLINE vec4 operator / (const vec4& a, const float b) {
#if (GNM_SIMD)
	return vec4(_mm_div_ps(a._v, _mm_set_ps1(b)));
#else
	return vec4(a.x / b, a.y / b, a.z / b, a.w / b);
#endif
}

GNM_INLINE ivec4 operator / (const ivec4& a, const int b) {
#if (GNM_SIMD)
	return ivec4(_mm_div_epi32(a._vi, _mm_set1_epi32(b)));
#else
	return ivec4(a.x / b, a.y / b, a.z / b, a.w / b);
#endif
}

GNM_INLINE uvec4 operator / (const uvec4& a, const uint b) {
#if (GNM_SIMD)
	return uvec4(_mm_div_epu32(a._vi, _mm_set1_epi32(b)));
#else
	return uvec4(a.x / b, a.y / b, a.z / b, a.w / b);
#endif
}

GNM_INLINE ivec4 operator % (const ivec4& a, const ivec4& b) {
	return ivec4(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
}

GNM_INLINE uvec4 operator % (const uvec4& a, const uvec4& b) {
	return uvec4(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
}

GNM_INLINE ivec4 operator % (const int a, const ivec4& b) {
	return ivec4(a % b.x, a % b.y, a % b.z, a % b.w);
}

GNM_INLINE uvec4 operator % (const uint a, const uvec4& b) {
	return uvec4(a % b.x, a % b.y, a % b.z, a % b.w);
}

GNM_INLINE ivec4 operator % (const ivec4& a, const int b) {
	return ivec4(a.x % b, a.y % b, a.z % b, a.z % b);
}

GNM_INLINE uvec4 operator % (const uvec4& a, const uint b) {
	return uvec4(a.x % b, a.y % b, a.z % b, a.w % b);
}

GNM_INLINE vec4 operator + (const vec4& a) {
	return a;
}

GNM_INLINE ivec4 operator + (const ivec4& a) {
	return a;
}

GNM_INLINE uvec4 operator + (const uvec4& a) {
	return a;
}

GNM_INLINE vec4 operator - (const vec4& a) {
#if (GNM_SIMD)
	return vec4(_mm_set_ps(-a.w, -a.z, -a.y, -a.x));
#else
	return vec4(-a.x, -a.y, -a.z, -a.w);
#endif
}

GNM_INLINE ivec4 operator - (const ivec4& a) {
#if (GNM_SIMD)
	return ivec4(_mm_set_epi32(-a.w, -a.z, -a.y, -a.x));
#else
	return ivec4(-a.x, -a.y, -a.z, -a.w);
#endif
}

GNM_INLINE ivec4& operator ++ (ivec4& a) {
	++a.x;
	++a.y;
	++a.z;
	++a.w;
	return a;
}

GNM_INLINE uvec4& operator ++ (uvec4& a) {
	++a.x;
	++a.y;
	++a.z;
	++a.w;
	return a;
}

GNM_INLINE ivec4& operator -- (ivec4& a) {
	--a.x;
	--a.y;
	--a.z;
	--a.w;
	return a;
}

GNM_INLINE uvec4& operator -- (uvec4& a) {
	--a.x;
	--a.y;
	--a.z;
	return a;
}

GNM_INLINE ivec4 operator ++ (ivec4& a, int) {
	++a.x;
	++a.y;
	++a.z;
	++a.w;
	return ivec4(a.x, a.y, a.z, a.w);
}

GNM_INLINE uvec4 operator ++ (uvec4& a, int) {
	++a.x;
	++a.y;
	++a.z;
	++a.w;
	return uvec4(a.x, a.y, a.z, a.w);
}

GNM_INLINE ivec4 operator -- (ivec4& a, int) {
	--a.x;
	--a.y;
	--a.z;
	--a.w;
	return ivec4(a.x, a.y, a.z, a.w);
}

GNM_INLINE uvec4 operator -- (uvec4& a, int) {
	--a.x;
	--a.y;
	--a.z;
	--a.w;
	return uvec4(a.x, a.y, a.z, a.w);
}

GNM_INLINE bool operator == (const vec4& a, const vec4& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GNM_INLINE bool operator == (const bvec4& a, const bvec4& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GNM_INLINE bool operator == (const ivec4& a, const ivec4& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GNM_INLINE bool operator == (const uvec4& a, const uvec4& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GNM_INLINE bool operator != (const vec4& a, const vec4& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}

GNM_INLINE bool operator != (const bvec4& a, const bvec4& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}

GNM_INLINE bool operator != (const ivec4& a, const ivec4& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}

GNM_INLINE bool operator != (const uvec4& a, const uvec4& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}

GNM_INLINE ivec4 operator ~ (const ivec4& a) {
	return ivec4(~a.x, ~a.y, ~a.z, ~a.w);
}

GNM_INLINE uvec4 operator ~ (const uvec4& a) {
	return uvec4(~a.x, ~a.y, ~a.z, ~a.w);
}

GNM_INLINE ivec4 operator >> (const ivec4& a, const ivec4& b) {
	return ivec4(a.x >> b.x, a.y >> b.y, a.z >> b.z, a.w >> b.w);
}

GNM_INLINE uvec4 operator >> (const uvec4& a, const uvec4& b) {
	return uvec4(a.x >> b.x, a.y >> b.y, a.z >> b.z, a.w >> b.w);
}

GNM_INLINE ivec4 operator >> (const ivec4& a, const int b) {
	return ivec4(a.x >> b, a.y >> b, a.z >> b, a.w >> b);
}

GNM_INLINE uvec4 operator >> (const uvec4& a, const uint b) {
	return uvec4(a.x >> b, a.y >> b, a.z >> b, a.w >> b);
}

GNM_INLINE ivec4 operator >> (const int a, const ivec4& b) {
	return ivec4(a >> b.x, a >> b.y, a >> b.z, a >> b.w);
}

GNM_INLINE uvec4 operator >> (const uint a, const uvec4& b) {
	return uvec4(a >> b.x, a >> b.y, a >> b.z, a >> b.w);
}

GNM_INLINE ivec4 operator << (const ivec4& a, const ivec4& b) {
	return ivec4(a.x << b.x, a.y << b.y, a.z << b.z, a.w << b.w);
}

GNM_INLINE uvec4 operator << (const uvec4& a, const uvec4& b) {
	return uvec4(a.x << b.x, a.y << b.y, a.z << b.z, a.w << b.w);
}

GNM_INLINE ivec4 operator << (const ivec4& a, const int b) {
	return ivec4(a.x << b, a.y << b, a.z << b, a.w << b);
}

GNM_INLINE uvec4 operator << (const uvec4& a, const uint b) {
	return uvec4(a.x << b, a.y << b, a.z << b, a.w << b);
}

GNM_INLINE ivec4 operator << (const int a, const ivec4& b) {
	return ivec4(a << b.x, a << b.y, a << b.z, a << b.w);
}

GNM_INLINE uvec4 operator << (const uint a, const uvec4& b) {
	return uvec4(a << b.x, a << b.y, a << b.z, a << b.w);
}

GNM_INLINE ivec4 operator & (const ivec4& a, const ivec4& b) {
	return ivec4(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
}

GNM_INLINE uvec4 operator & (const uvec4& a, const uvec4& b) {
	return uvec4(a.x & b.x, a.y & b.y, a.z & b.z, a.w & b.w);
}

GNM_INLINE ivec4 operator & (const ivec4& a, const int b) {
	return ivec4(a.x & b, a.y & b, a.z & b, a.w & b);
}

GNM_INLINE uvec4 operator & (const uvec4& a, const uint b) {
	return uvec4(a.x & b, a.y & b, a.z & b, a.w & b);
}

GNM_INLINE ivec4 operator & (const int a, const ivec4& b) {
	return ivec4(a & b.x, a & b.y, a & b.z, a & b.w);
}

GNM_INLINE uvec4 operator & (const uint a, const uvec4& b) {
	return uvec4(a & b.x, a & b.y, a & b.z, a & b.w);
}

GNM_INLINE ivec4 operator ^ (const ivec4& a, const ivec4& b) {
	return ivec4(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
}

GNM_INLINE uvec4 operator ^ (const uvec4& a, const uvec4& b) {
	return uvec4(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z, a.w ^ b.w);
}

GNM_INLINE ivec4 operator ^ (const ivec4& a, const int b) {
	return ivec4(a.x ^ b, a.y ^ b, a.z ^ b, a.w ^ b);
}

GNM_INLINE uvec4 operator ^ (const uvec4& a, const uint b) {
	return uvec4(a.x ^ b, a.y ^ b, a.z ^ b, a.w ^ b);
}

GNM_INLINE ivec4 operator ^ (const int a, const ivec4& b) {
	return ivec4(a ^ b.x, a ^ b.y, a ^ b.z, a ^ b.w);
}

GNM_INLINE uvec4 operator ^ (const uint a, const uvec4& b) {
	return uvec4(a ^ b.x, a ^ b.y, a ^ b.z, a ^ b.w);
}

GNM_INLINE ivec4 operator | (const ivec4& a, const ivec4& b) {
	return ivec4(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
}

GNM_INLINE uvec4 operator | (const uvec4& a, const uvec4& b) {
	return uvec4(a.x | b.x, a.y | b.y, a.z | b.z, a.w | b.w);
}

GNM_INLINE ivec4 operator | (const ivec4& a, const int b) {
	return ivec4(a.x | b, a.y | b, a.z | b, a.w | b);
}

GNM_INLINE uvec4 operator | (const uvec4& a, const uint b) {
	return uvec4(a.x | b, a.y | b, a.z | b, a.w | b);
}

GNM_INLINE ivec4 operator | (const int a, const ivec4& b) {
	return ivec4(a | b.x, a | b.y, a | b.z, a | b.w);
}

GNM_INLINE uvec4 operator | (const uint a, const uvec4& b) {
	return uvec4(a | b.x, a | b.y, a | b.z, a | b.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE vec4& operator += (vec4& a, const vec4& b) {
#if (GNM_SIMD)
	a._v = _mm_add_ps(a._v, b._v);
#else
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
#endif
	return a;
}

GNM_INLINE ivec4& operator += (ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_add_epi32(a._vi, b._vi);
#else
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
#endif
	return a;
}

GNM_INLINE uvec4& operator += (uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_add_epi32(a._vi, b._vi);
#else
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
#endif
	return a;
}

GNM_INLINE vec4& operator -= (vec4& a, const vec4& b) {
#if (GNM_SIMD)
	a._v = _mm_sub_ps(a._v, b._v);
#else
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
#endif
	return a;
}

GNM_INLINE ivec4& operator -= (ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_sub_epi32(a._vi, b._vi);
#else
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
#endif
	return a;
}

GNM_INLINE uvec4& operator -= (uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_sub_epi32(a._vi, b._vi);
#else
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
#endif
	return a;
}

GNM_INLINE vec4& operator *= (vec4& a, const vec4& b) {
#if (GNM_SIMD)
	a._v = _mm_mul_ps(a._v, b._v);
#else
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
#endif
	return a;
}

GNM_INLINE ivec4& operator *= (ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_mul_epi32(a._vi, b._vi);
#else
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
#endif
	return a;
}

GNM_INLINE uvec4& operator *= (uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_mul_epu32(a._vi, b._vi);
#else
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
#endif
	return a;
}

GNM_INLINE vec4& operator *= (vec4& a, const float b) {
#if (GNM_SIMD)
	a._v = _mm_add_ps(a._v, _mm_set_ps1(b));
#else
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
#endif
	return a;
}

GNM_INLINE ivec4& operator *= (ivec4& a, const int b) {
#if (GNM_SIMD)
	a._vi = _mm_add_epi32(a._vi, _mm_set1_epi32(b));
#else
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
#endif
	return a;
}

GNM_INLINE uvec4& operator *= (uvec4& a, const uint b) {
#if (GNM_SIMD)
	a._vi = _mm_add_epi32(a._vi, _mm_set1_epi32(b));
#else
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
#endif
	return a;
}

GNM_INLINE vec4& operator /= (vec4& a, const vec4& b) {
#if (GNM_SIMD)
	a._v = _mm_div_ps(a._v, b._v);
#else
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
#endif
	return a;
}

GNM_INLINE ivec4& operator /= (ivec4& a, const ivec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_div_epi32(a._vi, b._vi);
#else
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
#endif
	return a;
}

GNM_INLINE uvec4& operator /= (uvec4& a, const uvec4& b) {
#if (GNM_SIMD)
	a._vi = _mm_div_epu32(a._vi, b._vi);
#else
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
#endif
	return a;
}

GNM_INLINE vec4& operator /= (vec4& a, const float b) {
#if (GNM_SIMD)
	a._v = _mm_div_ps(a._v, _mm_set_ps1(b));
#else
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
#endif
	return a;
}

GNM_INLINE ivec4& operator /= (ivec4& a, const int b) {
#if (GNM_SIMD)
	a._vi = _mm_div_epi32(a._vi, _mm_set1_epi32(b));
#else
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
#endif
	return a;
}

GNM_INLINE uvec4& operator /= (uvec4& a, const uint b) {
#if (GNM_SIMD)
	a._vi = _mm_div_epu32(a._vi, _mm_set1_epi32(b));
#else
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
#endif
	return a;
}

GNM_INLINE ivec4& operator %= (ivec4& a, const ivec4& b) {
	a.x %= b.x;
	a.y %= b.y;
	a.z %= b.z;
	a.w %= b.w;
	return a;
}

GNM_INLINE uvec4& operator %= (uvec4& a, const uvec4& b) {
	a.x %= b.x;
	a.y %= b.y;
	a.z %= b.z;
	a.w %= b.w;
	return a;
}

GNM_INLINE ivec4& operator %= (ivec4& a, const int b) {
	a.x %= b;
	a.y %= b;
	a.z %= b;
	a.w %= b;
	return a;
}

GNM_INLINE uvec4& operator %= (uvec4& a, const uint b) {
	a.x %= b;
	a.y %= b;
	a.z %= b;
	a.w %= b;
	return a;
}

GNM_INLINE ivec4& operator <<= (ivec4& a, const ivec4& b) {
	a.x <<= b.x;
	a.y <<= b.y;
	a.z <<= b.z;
	a.w <<= b.w;
	return a;
}

GNM_INLINE uvec4& operator <<= (uvec4& a, const uvec4& b) {
	a.x <<= b.x;
	a.y <<= b.y;
	a.z <<= b.z;
	a.w <<= b.w;
	return a;
}

GNM_INLINE ivec4& operator <<= (ivec4& a, const int b) {
	a.x <<= b;
	a.y <<= b;
	a.z <<= b;
	a.w <<= b;
	return a;
}

GNM_INLINE uvec4& operator <<= (uvec4& a, const uint b) {
	a.x <<= b;
	a.y <<= b;
	a.z <<= b;
	a.w <<= b;
	return a;
}

GNM_INLINE ivec4& operator >>= (ivec4& a, const ivec4& b) {
	a.x >>= b.x;
	a.y >>= b.y;
	a.z >>= b.z;
	a.w >>= b.w;
	return a;
}

GNM_INLINE uvec4& operator >>= (uvec4& a, const uvec4& b) {
	a.x >>= b.x;
	a.y >>= b.y;
	a.z >>= b.z;
	a.w >>= b.w;
	return a;
}

GNM_INLINE ivec4& operator >>= (ivec4& a, const int b) {
	a.x >>= b;
	a.y >>= b;
	a.z >>= b;
	a.w >>= b;
	return a;
}

GNM_INLINE uvec4& operator >>= (uvec4& a, const uint b) {
	a.x >>= b;
	a.y >>= b;
	a.z >>= b;
	a.w >>= b;
	return a;
}

GNM_INLINE ivec4& operator &= (ivec4& a, const ivec4& b) {
	a.x &= b.x;
	a.y &= b.y;
	a.z &= b.z;
	a.w &= b.w;
	return a;
}

GNM_INLINE uvec4& operator &= (uvec4& a, const uvec4& b) {
	a.x &= b.x;
	a.y &= b.y;
	a.z &= b.z;
	a.w &= b.w;
	return a;
}

GNM_INLINE ivec4& operator &= (ivec4& a, const int b) {
	a.x &= b;
	a.y &= b;
	a.z &= b;
	a.w &= b;
	return a;
}

GNM_INLINE uvec4& operator &= (uvec4& a, const uint b) {
	a.x &= b;
	a.y &= b;
	a.z &= b;
	a.w &= b;
	return a;
}

GNM_INLINE ivec4& operator |= (ivec4& a, const ivec4& b) {
	a.x |= b.x;
	a.y |= b.y;
	a.z |= b.z;
	a.w |= b.w;
	return a;
}

GNM_INLINE uvec4& operator |= (uvec4& a, const uvec4& b) {
	a.x |= b.x;
	a.y |= b.y;
	a.z |= b.z;
	a.w |= b.w;
	return a;
}

GNM_INLINE ivec4& operator |= (ivec4& a, const int b) {
	a.x |= b;
	a.y |= b;
	a.z |= b;
	a.w |= b;
	return a;
}

GNM_INLINE uvec4& operator |= (uvec4& a, const uint b) {
	a.x |= b;
	a.y |= b;
	a.z |= b;
	a.w |= b;
	return a;
}

GNM_INLINE ivec4& operator ^= (ivec4& a, const ivec4& b) {
	a.x ^= b.x;
	a.y ^= b.y;
	a.z ^= b.z;
	a.w ^= b.w;
	return a;
}

GNM_INLINE uvec4& operator ^= (uvec4& a, const uvec4& b) {
	a.x ^= b.x;
	a.y ^= b.y;
	a.z ^= b.z;
	a.w ^= b.w;
	return a;
}

GNM_INLINE ivec4& operator ^= (ivec4& a, const int b) {
	a.x ^= b;
	a.y ^= b;
	a.z ^= b;
	a.w ^= b;
	return a;
}

GNM_INLINE uvec4& operator ^= (uvec4& a, const uint b) {
	a.x ^= b;
	a.y ^= b;
	a.z ^= b;
	a.w ^= b;
	return a;
}

GNM_NAMESPACE_END
