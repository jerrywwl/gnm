GNM_NAMESPACE_BEGIN

GNM_INLINE vec4 operator + (const vec4& a, const vec4& b) {
	return vec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

GNM_INLINE ivec4 operator + (const ivec4& a, const ivec4& b) {
	return ivec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

GNM_INLINE uvec4 operator + (const uvec4& a, const uvec4& b) {
	return uvec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

GNM_INLINE vec4 operator - (const vec4& a, const vec4& b) {
	return vec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

GNM_INLINE ivec4 operator - (const ivec4& a, const ivec4& b) {
	return ivec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

GNM_INLINE uvec4 operator - (const uvec4& a, const uvec4& b) {
	return uvec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

GNM_INLINE vec4 operator * (const vec4& a, const vec4& b) {
	return vec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

GNM_INLINE ivec4 operator * (const ivec4& a, const ivec4& b) {
	return ivec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

GNM_INLINE uvec4 operator * (const uvec4& a, const uvec4& b) {
	return uvec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

GNM_INLINE vec4 operator * (const float a, const vec4& b) {
	return vec4(a * b.x, a * b.y, a * b.z, a * b.w);
}

GNM_INLINE ivec4 operator * (const int a, const ivec4& b) {
	return ivec4(a * b.x, a * b.y, a * b.z, a * b.w);
}

GNM_INLINE uvec4 operator * (const uint a, const uvec4& b) {
	return uvec4(a * b.x, a * b.y, a * b.z, a * b.w);
}

GNM_INLINE vec4 operator * (const vec4& a, const float b) {
	return vec4(a.x * b, a.y * b, a.z * b, a.w * b);
}

GNM_INLINE ivec4 operator * (const ivec4& a, const int b) {
	return ivec4(a.x * b, a.y * b, a.z * b, a.w * b);
}

GNM_INLINE uvec4 operator * (const uvec4& a, const uint b) {
	return uvec4(a.x * b, a.y * b, a.z * b, a.w * b);
}

GNM_INLINE vec4 operator / (const vec4& a, const vec4& b) {
	return vec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

GNM_INLINE ivec4 operator / (const ivec4& a, const ivec4& b) {
	return ivec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

GNM_INLINE uvec4 operator / (const uvec4& a, const uvec4& b) {
	return uvec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

GNM_INLINE vec4 operator / (const float a, const vec4& b) {
	return vec4(a / b.x, a / b.y, a / b.z, a / b.w);
}

GNM_INLINE ivec4 operator / (const int a, const ivec4& b) {
	return ivec4(a / b.x, a / b.y, a / b.z, a / b.w);
}

GNM_INLINE uvec4 operator / (const uint a, const uvec4& b) {
	return uvec4(a / b.x, a / b.y, a / b.z, a / b.w);
}

GNM_INLINE vec4 operator / (const vec4& a, const float b) {
	return vec4(a.x / b, a.y / b, a.z / b, a.w / b);
}

GNM_INLINE ivec4 operator / (const ivec4& a, const int b) {
	return ivec4(a.x / b, a.y / b, a.z / b, a.w / b);
}

GNM_INLINE uvec4 operator / (const uvec4& a, const uint b) {
	return uvec4(a.x / b, a.y / b, a.z / b, a.w / b);
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
	return vec4(-a.x, -a.y, -a.z, -a.w);
}

GNM_INLINE ivec4 operator - (const ivec4& a) {
	return ivec4(-a.x, -a.y, -a.z, -a.w);
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
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
	return a;
}

GNM_INLINE ivec4& operator += (ivec4& a, const ivec4& b) {
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
	return a;
}

GNM_INLINE uvec4& operator += (uvec4& a, const uvec4& b) {
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
	return a;
}

GNM_INLINE vec4& operator -= (vec4& a, const vec4& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
	return a;
}

GNM_INLINE ivec4& operator -= (ivec4& a, const ivec4& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
	return a;
}

GNM_INLINE uvec4& operator -= (uvec4& a, const uvec4& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
	return a;
}

GNM_INLINE vec4& operator *= (vec4& a, const vec4& b) {
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
	return a;
}

GNM_INLINE ivec4& operator *= (ivec4& a, const ivec4& b) {
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
	return a;
}

GNM_INLINE uvec4& operator *= (uvec4& a, const uvec4& b) {
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
	return a;
}

GNM_INLINE vec4& operator *= (vec4& a, const float b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
	return a;
}

GNM_INLINE ivec4& operator *= (ivec4& a, const int b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
	return a;
}

GNM_INLINE uvec4& operator *= (uvec4& a, const uint b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	a.w *= b;
	return a;
}

GNM_INLINE vec4& operator /= (vec4& a, const vec4& b) {
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
	return a;
}

GNM_INLINE ivec4& operator /= (ivec4& a, const ivec4& b) {
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
	return a;
}

GNM_INLINE uvec4& operator /= (uvec4& a, const uvec4& b) {
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
	return a;
}

GNM_INLINE vec4& operator /= (vec4& a, const float b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
	return a;
}

GNM_INLINE ivec4& operator /= (ivec4& a, const int b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
	return a;
}

GNM_INLINE uvec4& operator /= (uvec4& a, const uint b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	a.w /= b;
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
