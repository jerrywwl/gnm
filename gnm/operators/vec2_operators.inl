GNM_NAMESPACE_BEGIN

GNM_INLINE vec2 operator + (const vec2& a, const vec2& b) {
	return vec2(a.x + b.x, a.y + b.y);
}

GNM_INLINE ivec2 operator + (const ivec2& a, const ivec2& b) {
	return ivec2(a.x + b.x, a.y + b.y);
}

GNM_INLINE uvec2 operator + (const uvec2& a, const uvec2& b) {
	return uvec2(a.x + b.x, a.y + b.y);
}

GNM_INLINE vec2 operator - (const vec2& a, const vec2& b) {
	return vec2(a.x - b.x, a.y - b.y);
}

GNM_INLINE ivec2 operator - (const ivec2& a, const ivec2& b) {
	return ivec2(a.x - b.x, a.y - b.y);
}

GNM_INLINE uvec2 operator - (const uvec2& a, const uvec2& b) {
	return uvec2(a.x - b.x, a.y - b.y);
}

GNM_INLINE vec2 operator * (const vec2& a, const vec2& b) {
	return vec2(a.x * b.x, a.y * b.y);
}

GNM_INLINE ivec2 operator * (const ivec2& a, const ivec2& b) {
	return ivec2(a.x * b.x, a.y * b.y);
}

GNM_INLINE uvec2 operator * (const uvec2& a, const uvec2& b) {
	return uvec2(a.x * b.x, a.y * b.y);
}

GNM_INLINE vec2 operator * (const float a, const vec2& b) {
	return vec2(a * b.x, a * b.y);
}

GNM_INLINE ivec2 operator * (const int a, const ivec2& b) {
	return ivec2(a * b.x, a * b.y);
}

GNM_INLINE uvec2 operator * (const uint a, const uvec2& b) {
	return uvec2(a * b.x, a * b.y);
}

GNM_INLINE vec2 operator * (const vec2& a, const float b) {
	return vec2(a.x * b, a.y * b);
}

GNM_INLINE ivec2 operator * (const ivec2& a, const int b) {
	return ivec2(a.x * b, a.y * b);
}

GNM_INLINE uvec2 operator * (const uvec2& a, const uint b) {
	return uvec2(a.x * b, a.y * b);
}

GNM_INLINE vec2 operator / (const vec2& a, const vec2& b) {
	return vec2(a.x / b.x, a.y / b.y);
}

GNM_INLINE ivec2 operator / (const ivec2& a, const ivec2& b) {
	return ivec2(a.x / b.x, a.y / b.y);
}

GNM_INLINE uvec2 operator / (const uvec2& a, const uvec2& b) {
	return uvec2(a.x / b.x, a.y / b.y);
}

GNM_INLINE vec2 operator / (const float a, const vec2& b) {
	return vec2(a / b.x, a / b.y);
}

GNM_INLINE ivec2 operator / (const int a, const ivec2& b) {
	return ivec2(a / b.x, a / b.y);
}

GNM_INLINE uvec2 operator / (const uint a, const uvec2& b) {
	return uvec2(a / b.x, a / b.y);
}

GNM_INLINE vec2 operator / (const vec2& a, const float b) {
	return vec2(a.x / b, a.y / b);
}

GNM_INLINE ivec2 operator / (const ivec2& a, const int b) {
	return ivec2(a.x / b, a.y / b);
}

GNM_INLINE uvec2 operator / (const uvec2& a, const uint b) {
	return uvec2(a.x / b, a.y / b);
}

GNM_INLINE ivec2 operator % (const ivec2& a, const ivec2& b) {
	return ivec2(a.x % b.x, a.y % b.y);
}

GNM_INLINE uvec2 operator % (const uvec2& a, const uvec2& b) {
	return uvec2(a.x % b.x, a.y % b.y);
}

GNM_INLINE ivec2 operator % (const int a, const ivec2& b) {
	return ivec2(a % b.x, a % b.y);
}

GNM_INLINE uvec2 operator % (const uint a, const uvec2& b) {
	return uvec2(a % b.x, a % b.y);
}

GNM_INLINE ivec2 operator % (const ivec2& a, const int b) {
	return ivec2(a.x % b, a.y % b);
}

GNM_INLINE uvec2 operator % (const uvec2& a, const uint b) {
	return uvec2(a.x % b, a.y % b);
}

GNM_INLINE vec2 operator + (const vec2& a) {
	return a;
}

GNM_INLINE ivec2 operator + (const ivec2& a) {
	return a;
}

GNM_INLINE uvec2 operator + (const uvec2& a) {
	return a;
}

GNM_INLINE vec2 operator - (const vec2& a) {
	return vec2(-a.x, -a.y);
}

GNM_INLINE ivec2 operator - (const ivec2& a) {
	return ivec2(-a.x, -a.y);
}

GNM_INLINE ivec2& operator ++ (ivec2& a) {
	++a.x;
	++a.y;
	return a;
}

GNM_INLINE uvec2& operator ++ (uvec2& a) {
	++a.x;
	++a.y;
	return a;
}

GNM_INLINE ivec2& operator -- (ivec2& a) {
	--a.x;
	--a.y;
	return a;
}

GNM_INLINE uvec2& operator -- (uvec2& a) {
	--a.x;
	--a.y;
	return a;
}

GNM_INLINE ivec2 operator ++ (ivec2& a, int) {
	++a.x;
	++a.y;
	return ivec2(a.x, a.y);
}

GNM_INLINE uvec2 operator ++ (uvec2& a, int) {
	++a.x;
	++a.y;
	return uvec2(a.x, a.y);
}

GNM_INLINE ivec2 operator -- (ivec2& a, int) {
	--a.x;
	--a.y;
	return ivec2(a.x, a.y);
}

GNM_INLINE uvec2 operator -- (uvec2& a, int) {
	--a.x;
	--a.y;
	return uvec2(a.x, a.y);
}

GNM_INLINE bool operator == (const vec2& a, const vec2& b) {
	return a.x == b.x && a.y == b.y;
}

GNM_INLINE bool operator == (const bvec2& a, const bvec2& b) {
	return a.x == b.x && a.y == b.y;
}

GNM_INLINE bool operator == (const ivec2& a, const ivec2& b) {
	return a.x == b.x && a.y == b.y;
}

GNM_INLINE bool operator == (const uvec2& a, const uvec2& b) {
	return a.x == b.x && a.y == b.y;
}

GNM_INLINE bool operator != (const vec2& a, const vec2& b) {
	return a.x != b.x || a.y != b.y;
}

GNM_INLINE bool operator != (const bvec2& a, const bvec2& b) {
	return a.x != b.x || a.y != b.y;
}

GNM_INLINE bool operator != (const ivec2& a, const ivec2& b) {
	return a.x != b.x || a.y != b.y;
}

GNM_INLINE bool operator != (const uvec2& a, const uvec2& b) {
	return a.x != b.x || a.y != b.y;
}

GNM_INLINE ivec2 operator ~ (const ivec2& a) {
	return ivec2(~a.x, ~a.y);
}

GNM_INLINE uvec2 operator ~ (const uvec2& a) {
	return uvec2(~a.x, ~a.y);
}

GNM_INLINE ivec2 operator >> (const ivec2& a, const ivec2& b) {
	return ivec2(a.x >> b.x, a.y >> b.y);
}

GNM_INLINE uvec2 operator >> (const uvec2& a, const uvec2& b) {
	return uvec2(a.x >> b.x, a.y >> b.y);
}

GNM_INLINE ivec2 operator >> (const ivec2& a, const int b) {
	return ivec2(a.x >> b, a.y >> b);
}

GNM_INLINE uvec2 operator >> (const uvec2& a, const uint b) {
	return uvec2(a.x >> b, a.y >> b);
}

GNM_INLINE ivec2 operator >> (const int a, const ivec2& b) {
	return ivec2(a >> b.x, a >> b.y);
}

GNM_INLINE uvec2 operator >> (const uint a, const uvec2& b) {
	return uvec2(a >> b.x, a >> b.y);
}

GNM_INLINE ivec2 operator << (const ivec2& a, const ivec2& b) {
	return ivec2(a.x << b.x, a.y << b.y);
}

GNM_INLINE uvec2 operator << (const uvec2& a, const uvec2& b) {
	return uvec2(a.x << b.x, a.y << b.y);
}

GNM_INLINE ivec2 operator << (const ivec2& a, const int b) {
	return ivec2(a.x << b, a.y << b);
}

GNM_INLINE uvec2 operator << (const uvec2& a, const uint b) {
	return uvec2(a.x << b, a.y << b);
}

GNM_INLINE ivec2 operator << (const int a, const ivec2& b) {
	return ivec2(a << b.x, a << b.y);
}

GNM_INLINE uvec2 operator << (const uint a, const uvec2& b) {
	return uvec2(a << b.x, a << b.y);
}

GNM_INLINE ivec2 operator & (const ivec2& a, const ivec2& b) {
	return ivec2(a.x & b.x, a.y & b.y);
}

GNM_INLINE uvec2 operator & (const uvec2& a, const uvec2& b) {
	return uvec2(a.x & b.x, a.y & b.y);
}

GNM_INLINE ivec2 operator & (const ivec2& a, const int b) {
	return ivec2(a.x & b, a.y & b);
}

GNM_INLINE uvec2 operator & (const uvec2& a, const uint b) {
	return uvec2(a.x & b, a.y & b);
}

GNM_INLINE ivec2 operator & (const int a, const ivec2& b) {
	return ivec2(a & b.x, a & b.y);
}

GNM_INLINE uvec2 operator & (const uint a, const uvec2& b) {
	return uvec2(a & b.x, a & b.y);
}

GNM_INLINE ivec2 operator ^ (const ivec2& a, const ivec2& b) {
	return ivec2(a.x ^ b.x, a.y ^ b.y);
}

GNM_INLINE uvec2 operator ^ (const uvec2& a, const uvec2& b) {
	return uvec2(a.x ^ b.x, a.y ^ b.y);
}

GNM_INLINE ivec2 operator ^ (const ivec2& a, const int b) {
	return ivec2(a.x ^ b, a.y ^ b);
}

GNM_INLINE uvec2 operator ^ (const uvec2& a, const uint b) {
	return uvec2(a.x ^ b, a.y ^ b);
}

GNM_INLINE ivec2 operator ^ (const int a, const ivec2& b) {
	return ivec2(a ^ b.x, a ^ b.y);
}

GNM_INLINE uvec2 operator ^ (const uint a, const uvec2& b) {
	return uvec2(a ^ b.x, a ^ b.y);
}

GNM_INLINE ivec2 operator | (const ivec2& a, const ivec2& b) {
	return ivec2(a.x | b.x, a.y | b.y);
}

GNM_INLINE uvec2 operator | (const uvec2& a, const uvec2& b) {
	return uvec2(a.x | b.x, a.y | b.y);
}

GNM_INLINE ivec2 operator | (const ivec2& a, const int b) {
	return ivec2(a.x | b, a.y | b);
}

GNM_INLINE uvec2 operator | (const uvec2& a, const uint b) {
	return uvec2(a.x | b, a.y | b);
}

GNM_INLINE ivec2 operator | (const int a, const ivec2& b) {
	return ivec2(a | b.x, a | b.y);
}

GNM_INLINE uvec2 operator | (const uint a, const uvec2& b) {
	return uvec2(a | b.x, a | b.y);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE vec2& operator += (vec2& a, const vec2& b) {
	a.x += b.x;
	a.y += b.y;
	return a;
}

GNM_INLINE ivec2& operator += (ivec2& a, const ivec2& b) {
	a.x += b.x;
	a.y += b.y;
	return a;
}

GNM_INLINE uvec2& operator += (uvec2& a, const uvec2& b) {
	a.x += b.x;
	a.y += b.y;
	return a;
}

GNM_INLINE vec2& operator -= (vec2& a, const vec2& b) {
	a.x -= b.x;
	a.y -= b.y;
	return a;
}

GNM_INLINE ivec2& operator -= (ivec2& a, const ivec2& b) {
	a.x -= b.x;
	a.y -= b.y;
	return a;
}

GNM_INLINE uvec2& operator -= (uvec2& a, const uvec2& b) {
	a.x -= b.x;
	a.y -= b.y;
	return a;
}

GNM_INLINE vec2& operator *= (vec2& a, const vec2& b) {
	a.x *= b.x;
	a.y *= b.y;
	return a;
}

GNM_INLINE ivec2& operator *= (ivec2& a, const ivec2& b) {
	a.x *= b.x;
	a.y *= b.y;
	return a;
}

GNM_INLINE uvec2& operator *= (uvec2& a, const uvec2& b) {
	a.x *= b.x;
	a.y *= b.y;
	return a;
}

GNM_INLINE vec2& operator *= (vec2& a, const float b) {
	a.x *= b;
	a.y *= b;
	return a;
}

GNM_INLINE ivec2& operator *= (ivec2& a, const int b) {
	a.x *= b;
	a.y *= b;
	return a;
}

GNM_INLINE uvec2& operator *= (uvec2& a, const uint b) {
	a.x *= b;
	a.y *= b;
	return a;
}

GNM_INLINE vec2& operator /= (vec2& a, const vec2& b) {
	a.x /= b.x;
	a.y /= b.y;
	return a;
}

GNM_INLINE ivec2& operator /= (ivec2& a, const ivec2& b) {
	a.x /= b.x;
	a.y /= b.y;
	return a;
}

GNM_INLINE uvec2& operator /= (uvec2& a, const uvec2& b) {
	a.x /= b.x;
	a.y /= b.y;
	return a;
}

GNM_INLINE vec2& operator /= (vec2& a, const float b) {
	a.x /= b;
	a.y /= b;
	return a;
}

GNM_INLINE ivec2& operator /= (ivec2& a, const int b) {
	a.x /= b;
	a.y /= b;
	return a;
}

GNM_INLINE uvec2& operator /= (uvec2& a, const uint b) {
	a.x /= b;
	a.y /= b;
	return a;
}

GNM_INLINE ivec2& operator %= (ivec2& a, const ivec2& b) {
	a.x %= b.x;
	a.y %= b.y;
	return a;
}

GNM_INLINE uvec2& operator %= (uvec2& a, const uvec2& b) {
	a.x %= b.x;
	a.y %= b.y;
	return a;
}

GNM_INLINE ivec2& operator %= (ivec2& a, const int b) {
	a.x %= b;
	a.y %= b;
	return a;
}

GNM_INLINE uvec2& operator %= (uvec2& a, const uint b) {
	a.x %= b;
	a.y %= b;
	return a;
}

GNM_INLINE ivec2& operator <<= (ivec2& a, const ivec2& b) {
	a.x <<= b.x;
	a.y <<= b.y;
	return a;
}

GNM_INLINE uvec2& operator <<= (uvec2& a, const uvec2& b) {
	a.x <<= b.x;
	a.y <<= b.y;
	return a;
}

GNM_INLINE ivec2& operator <<= (ivec2& a, const int b) {
	a.x <<= b;
	a.y <<= b;
	return a;
}

GNM_INLINE uvec2& operator <<= (uvec2& a, const uint b) {
	a.x <<= b;
	a.y <<= b;
	return a;
}

GNM_INLINE ivec2& operator >>= (ivec2& a, const ivec2& b) {
	a.x >>= b.x;
	a.y >>= b.y;
	return a;
}

GNM_INLINE uvec2& operator >>= (uvec2& a, const uvec2& b) {
	a.x >>= b.x;
	a.y >>= b.y;
	return a;
}

GNM_INLINE ivec2& operator >>= (ivec2& a, const int b) {
	a.x >>= b;
	a.y >>= b;
	return a;
}

GNM_INLINE uvec2& operator >>= (uvec2& a, const uint b) {
	a.x >>= b;
	a.y >>= b;
	return a;
}

GNM_INLINE ivec2& operator &= (ivec2& a, const ivec2& b) {
	a.x &= b.x;
	a.y &= b.y;
	return a;
}

GNM_INLINE uvec2& operator &= (uvec2& a, const uvec2& b) {
	a.x &= b.x;
	a.y &= b.y;
	return a;
}

GNM_INLINE ivec2& operator &= (ivec2& a, const int b) {
	a.x &= b;
	a.y &= b;
	return a;
}

GNM_INLINE uvec2& operator &= (uvec2& a, const uint b) {
	a.x &= b;
	a.y &= b;
	return a;
}

GNM_INLINE ivec2& operator |= (ivec2& a, const ivec2& b) {
	a.x |= b.x;
	a.y |= b.y;
	return a;
}

GNM_INLINE uvec2& operator |= (uvec2& a, const uvec2& b) {
	a.x |= b.x;
	a.y |= b.y;
	return a;
}

GNM_INLINE ivec2& operator |= (ivec2& a, const int b) {
	a.x |= b;
	a.y |= b;
	return a;
}

GNM_INLINE uvec2& operator |= (uvec2& a, const uint b) {
	a.x |= b;
	a.y |= b;
	return a;
}

GNM_INLINE ivec2& operator ^= (ivec2& a, const ivec2& b) {
	a.x ^= b.x;
	a.y ^= b.y;
	return a;
}

GNM_INLINE uvec2& operator ^= (uvec2& a, const uvec2& b) {
	a.x ^= b.x;
	a.y ^= b.y;
	return a;
}

GNM_INLINE ivec2& operator ^= (ivec2& a, const int b) {
	a.x ^= b;
	a.y ^= b;
	return a;
}

GNM_INLINE uvec2& operator ^= (uvec2& a, const uint b) {
	a.x ^= b;
	a.y ^= b;
	return a;
}

GNM_NAMESPACE_END
