GNM_NAMESPACE_BEGIN

GNM_INLINE vec3 operator + (const vec3& a, const vec3& b) {
	return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

GNM_INLINE ivec3 operator + (const ivec3& a, const ivec3& b) {
	return ivec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

GNM_INLINE uvec3 operator + (const uvec3& a, const uvec3& b) {
	return uvec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

GNM_INLINE vec3 operator - (const vec3& a, const vec3& b) {
	return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GNM_INLINE ivec3 operator - (const ivec3& a, const ivec3& b) {
	return ivec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GNM_INLINE uvec3 operator - (const uvec3& a, const uvec3& b) {
	return uvec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GNM_INLINE vec3 operator * (const vec3& a, const vec3& b) {
	return vec3(a.x * b.x, a.y * b.y, a.z * b.z);
}

GNM_INLINE ivec3 operator * (const ivec3& a, const ivec3& b) {
	return ivec3(a.x * b.x, a.y * b.y, a.z * b.z);
}

GNM_INLINE uvec3 operator * (const uvec3& a, const uvec3& b) {
	return uvec3(a.x * b.x, a.y * b.y, a.z * b.z);
}

GNM_INLINE vec3 operator * (const float a, const vec3& b) {
	return vec3(a * b.x, a * b.y, a * b.z);
}

GNM_INLINE ivec3 operator * (const int a, const ivec3& b) {
	return ivec3(a * b.x, a * b.y, a * b.z);
}

GNM_INLINE uvec3 operator * (const uint a, const uvec3& b) {
	return uvec3(a * b.x, a * b.y, a * b.z);
}

GNM_INLINE vec3 operator * (const vec3& a, const float b) {
	return vec3(a.x * b, a.y * b, a.z * b);
}

GNM_INLINE ivec3 operator * (const ivec3& a, const int b) {
	return ivec3(a.x * b, a.y * b, a.z * b);
}

GNM_INLINE uvec3 operator * (const uvec3& a, const uint b) {
	return uvec3(a.x * b, a.y * b, a.z * b);
}

GNM_INLINE vec3 operator / (const vec3& a, const vec3& b) {
	return vec3(a.x / b.x, a.y / b.y, a.z / b.z);
}

GNM_INLINE ivec3 operator / (const ivec3& a, const ivec3& b) {
	return ivec3(a.x / b.x, a.y / b.y, a.z / b.z);
}

GNM_INLINE uvec3 operator / (const uvec3& a, const uvec3& b) {
	return uvec3(a.x / b.x, a.y / b.y, a.z / b.z);
}

GNM_INLINE vec3 operator / (const float a, const vec3& b) {
	return vec3(a / b.x, a / b.y, a / b.z);
}

GNM_INLINE ivec3 operator / (const int a, const ivec3& b) {
	return ivec3(a / b.x, a / b.y, a / b.z);
}

GNM_INLINE uvec3 operator / (const uint a, const uvec3& b) {
	return uvec3(a / b.x, a / b.y, a / b.z);
}

GNM_INLINE vec3 operator / (const vec3& a, const float b) {
	return vec3(a.x / b, a.y / b, a.z / b);
}

GNM_INLINE ivec3 operator / (const ivec3& a, const int b) {
	return ivec3(a.x / b, a.y / b, a.z / b);
}

GNM_INLINE uvec3 operator / (const uvec3& a, const uint b) {
	return uvec3(a.x / b, a.y / b, a.z / b);
}

GNM_INLINE ivec3 operator % (const ivec3& a, const ivec3& b) {
	return ivec3(a.x % b.x, a.y % b.y, a.z % b.z);
}

GNM_INLINE uvec3 operator % (const uvec3& a, const uvec3& b) {
	return uvec3(a.x % b.x, a.y % b.y, a.z % b.z);
}

GNM_INLINE ivec3 operator % (const int a, const ivec3& b) {
	return ivec3(a % b.x, a % b.y, a % b.z);
}

GNM_INLINE uvec3 operator % (const uint a, const uvec3& b) {
	return uvec3(a % b.x, a % b.y, a % b.z);
}

GNM_INLINE ivec3 operator % (const ivec3& a, const int b) {
	return ivec3(a.x % b, a.y % b, a.z % b);
}

GNM_INLINE uvec3 operator % (const uvec3& a, const uint b) {
	return uvec3(a.x % b, a.y % b, a.z % b);
}

GNM_INLINE vec3 operator + (const vec3& a) {
	return a;
}

GNM_INLINE ivec3 operator + (const ivec3& a) {
	return a;
}

GNM_INLINE uvec3 operator + (const uvec3& a) {
	return a;
}

GNM_INLINE vec3 operator - (const vec3& a) {
	return vec3(-a.x, -a.y, -a.z);
}

GNM_INLINE ivec3 operator - (const ivec3& a) {
	return ivec3(-a.x, -a.y, -a.z);
}

GNM_INLINE ivec3& operator ++ (ivec3& a) {
	++a.x;
	++a.y;
	++a.z;
	return a;
}

GNM_INLINE uvec3& operator ++ (uvec3& a) {
	++a.x;
	++a.y;
	++a.z;
	return a;
}

GNM_INLINE ivec3& operator -- (ivec3& a) {
	--a.x;
	--a.y;
	--a.z;
	return a;
}

GNM_INLINE uvec3& operator -- (uvec3& a) {
	--a.x;
	--a.y;
	--a.z;
	return a;
}

GNM_INLINE ivec3 operator ++ (ivec3& a, int) {
	++a.x;
	++a.y;
	++a.z;
	return ivec3(a.x, a.y, a.z);
}

GNM_INLINE uvec3 operator ++ (uvec3& a, int) {
	++a.x;
	++a.y;
	++a.z;
	return uvec3(a.x, a.y, a.z);
}

GNM_INLINE ivec3 operator -- (ivec3& a, int) {
	--a.x;
	--a.y;
	--a.z;
	return ivec3(a.x, a.y, a.z);
}

GNM_INLINE uvec3 operator -- (uvec3& a, int) {
	--a.x;
	--a.y;
	--a.z;
	return uvec3(a.x, a.y, a.z);
}

GNM_INLINE bool operator == (const vec3& a, const vec3& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GNM_INLINE bool operator == (const bvec3& a, const bvec3& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GNM_INLINE bool operator == (const ivec3& a, const ivec3& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GNM_INLINE bool operator == (const uvec3& a, const uvec3& b) {
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GNM_INLINE bool operator != (const vec3& a, const vec3& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z;
}

GNM_INLINE bool operator != (const bvec3& a, const bvec3& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z;
}

GNM_INLINE bool operator != (const ivec3& a, const ivec3& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z;
}

GNM_INLINE bool operator != (const uvec3& a, const uvec3& b) {
	return a.x != b.x || a.y != b.y || a.z != b.z;
}

GNM_INLINE ivec3 operator ~ (const ivec3& a) {
	return ivec3(~a.x, ~a.y, ~a.z);
}

GNM_INLINE uvec3 operator ~ (const uvec3& a) {
	return uvec3(~a.x, ~a.y, ~a.z);
}

GNM_INLINE ivec3 operator >> (const ivec3& a, const ivec3& b) {
	return ivec3(a.x >> b.x, a.y >> b.y, a.z >> b.z);
}

GNM_INLINE uvec3 operator >> (const uvec3& a, const uvec3& b) {
	return uvec3(a.x >> b.x, a.y >> b.y, a.z >> b.z);
}

GNM_INLINE ivec3 operator >> (const ivec3& a, const int b) {
	return ivec3(a.x >> b, a.y >> b, a.z >> b);
}

GNM_INLINE uvec3 operator >> (const uvec3& a, const uint b) {
	return uvec3(a.x >> b, a.y >> b, a.z >> b);
}

GNM_INLINE ivec3 operator >> (const int a, const ivec3& b) {
	return ivec3(a >> b.x, a >> b.y, a >> b.z);
}

GNM_INLINE uvec3 operator >> (const uint a, const uvec3& b) {
	return uvec3(a >> b.x, a >> b.y, a >> b.z);
}

GNM_INLINE ivec3 operator << (const ivec3& a, const ivec3& b) {
	return ivec3(a.x << b.x, a.y << b.y, a.z << b.z);
}

GNM_INLINE uvec3 operator << (const uvec3& a, const uvec3& b) {
	return uvec3(a.x << b.x, a.y << b.y, a.z << b.z);
}

GNM_INLINE ivec3 operator << (const ivec3& a, const int b) {
	return ivec3(a.x << b, a.y << b, a.z << b);
}

GNM_INLINE uvec3 operator << (const uvec3& a, const uint b) {
	return uvec3(a.x << b, a.y << b, a.z << b);
}

GNM_INLINE ivec3 operator << (const int a, const ivec3& b) {
	return ivec3(a << b.x, a << b.y, a << b.z);
}

GNM_INLINE uvec3 operator << (const uint a, const uvec3& b) {
	return uvec3(a << b.x, a << b.y, a << b.z);
}

GNM_INLINE ivec3 operator & (const ivec3& a, const ivec3& b) {
	return ivec3(a.x & b.x, a.y & b.y, a.z & b.z);
}

GNM_INLINE uvec3 operator & (const uvec3& a, const uvec3& b) {
	return uvec3(a.x & b.x, a.y & b.y, a.z & b.z);
}

GNM_INLINE ivec3 operator & (const ivec3& a, const int b) {
	return ivec3(a.x & b, a.y & b, a.z & b);
}

GNM_INLINE uvec3 operator & (const uvec3& a, const uint b) {
	return uvec3(a.x & b, a.y & b, a.z & b);
}

GNM_INLINE ivec3 operator & (const int a, const ivec3& b) {
	return ivec3(a & b.x, a & b.y, a & b.z);
}

GNM_INLINE uvec3 operator & (const uint a, const uvec3& b) {
	return uvec3(a & b.x, a & b.y, a & b.z);
}

GNM_INLINE ivec3 operator ^ (const ivec3& a, const ivec3& b) {
	return ivec3(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z);
}

GNM_INLINE uvec3 operator ^ (const uvec3& a, const uvec3& b) {
	return uvec3(a.x ^ b.x, a.y ^ b.y, a.z ^ b.z);
}

GNM_INLINE ivec3 operator ^ (const ivec3& a, const int b) {
	return ivec3(a.x ^ b, a.y ^ b, a.z ^ b);
}

GNM_INLINE uvec3 operator ^ (const uvec3& a, const uint b) {
	return uvec3(a.x ^ b, a.y ^ b, a.z ^ b);
}

GNM_INLINE ivec3 operator ^ (const int a, const ivec3& b) {
	return ivec3(a ^ b.x, a ^ b.y, a ^ b.z);
}

GNM_INLINE uvec3 operator ^ (const uint a, const uvec3& b) {
	return uvec3(a ^ b.x, a ^ b.y, a ^ b.z);
}

GNM_INLINE ivec3 operator | (const ivec3& a, const ivec3& b) {
	return ivec3(a.x | b.x, a.y | b.y, a.z | b.z);
}

GNM_INLINE uvec3 operator | (const uvec3& a, const uvec3& b) {
	return uvec3(a.x | b.x, a.y | b.y, a.z | b.z);
}

GNM_INLINE ivec3 operator | (const ivec3& a, const int b) {
	return ivec3(a.x | b, a.y | b, a.z | b);
}

GNM_INLINE uvec3 operator | (const uvec3& a, const uint b) {
	return uvec3(a.x | b, a.y | b, a.z | b);
}

GNM_INLINE ivec3 operator | (const int a, const ivec3& b) {
	return ivec3(a | b.x, a | b.y, a | b.z);
}

GNM_INLINE uvec3 operator | (const uint a, const uvec3& b) {
	return uvec3(a | b.x, a | b.y, a | b.z);
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE vec3& operator += (vec3& a, const vec3& b) {
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	return a;
}

GNM_INLINE ivec3& operator += (ivec3& a, const ivec3& b) {
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	return a;
}

GNM_INLINE uvec3& operator += (uvec3& a, const uvec3& b) {
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	return a;
}

GNM_INLINE vec3& operator -= (vec3& a, const vec3& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	return a;
}

GNM_INLINE ivec3& operator -= (ivec3& a, const ivec3& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	return a;
}

GNM_INLINE uvec3& operator -= (uvec3& a, const uvec3& b) {
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	return a;
}

GNM_INLINE vec3& operator *= (vec3& a, const vec3& b) {
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	return a;
}

GNM_INLINE ivec3& operator *= (ivec3& a, const ivec3& b) {
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	return a;
}

GNM_INLINE uvec3& operator *= (uvec3& a, const uvec3& b) {
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	return a;
}

GNM_INLINE vec3& operator *= (vec3& a, const float b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	return a;
}

GNM_INLINE ivec3& operator *= (ivec3& a, const int b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	return a;
}

GNM_INLINE uvec3& operator *= (uvec3& a, const uint b) {
	a.x *= b;
	a.y *= b;
	a.z *= b;
	return a;
}

GNM_INLINE vec3& operator /= (vec3& a, const vec3& b) {
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	return a;
}

GNM_INLINE ivec3& operator /= (ivec3& a, const ivec3& b) {
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	return a;
}

GNM_INLINE uvec3& operator /= (uvec3& a, const uvec3& b) {
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	return a;
}

GNM_INLINE vec3& operator /= (vec3& a, const float b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	return a;
}

GNM_INLINE ivec3& operator /= (ivec3& a, const int b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	return a;
}

GNM_INLINE uvec3& operator /= (uvec3& a, const uint b) {
	a.x /= b;
	a.y /= b;
	a.z /= b;
	return a;
}

GNM_INLINE ivec3& operator %= (ivec3& a, const ivec3& b) {
	a.x %= b.x;
	a.y %= b.y;
	a.z %= b.z;
	return a;
}

GNM_INLINE uvec3& operator %= (uvec3& a, const uvec3& b) {
	a.x %= b.x;
	a.y %= b.y;
	a.z %= b.z;
	return a;
}

GNM_INLINE ivec3& operator %= (ivec3& a, const int b) {
	a.x %= b;
	a.y %= b;
	a.z %= b;
	return a;
}

GNM_INLINE uvec3& operator %= (uvec3& a, const uint b) {
	a.x %= b;
	a.y %= b;
	a.z %= b;
	return a;
}

GNM_INLINE ivec3& operator <<= (ivec3& a, const ivec3& b) {
	a.x <<= b.x;
	a.y <<= b.y;
	a.z <<= b.z;
	return a;
}

GNM_INLINE uvec3& operator <<= (uvec3& a, const uvec3& b) {
	a.x <<= b.x;
	a.y <<= b.y;
	a.z <<= b.z;
	return a;
}

GNM_INLINE ivec3& operator <<= (ivec3& a, const int b) {
	a.x <<= b;
	a.y <<= b;
	a.z <<= b;
	return a;
}

GNM_INLINE uvec3& operator <<= (uvec3& a, const uint b) {
	a.x <<= b;
	a.y <<= b;
	a.z <<= b;
	return a;
}

GNM_INLINE ivec3& operator >>= (ivec3& a, const ivec3& b) {
	a.x >>= b.x;
	a.y >>= b.y;
	a.z >>= b.z;
	return a;
}

GNM_INLINE uvec3& operator >>= (uvec3& a, const uvec3& b) {
	a.x >>= b.x;
	a.y >>= b.y;
	a.z >>= b.z;
	return a;
}

GNM_INLINE ivec3& operator >>= (ivec3& a, const int b) {
	a.x >>= b;
	a.y >>= b;
	a.z >>= b;
	return a;
}

GNM_INLINE uvec3& operator >>= (uvec3& a, const uint b) {
	a.x >>= b;
	a.y >>= b;
	a.z >>= b;
	return a;
}

GNM_INLINE ivec3& operator &= (ivec3& a, const ivec3& b) {
	a.x &= b.x;
	a.y &= b.y;
	a.z &= b.z;
	return a;
}

GNM_INLINE uvec3& operator &= (uvec3& a, const uvec3& b) {
	a.x &= b.x;
	a.y &= b.y;
	a.z &= b.z;
	return a;
}

GNM_INLINE ivec3& operator &= (ivec3& a, const int b) {
	a.x &= b;
	a.y &= b;
	a.z &= b;
	return a;
}

GNM_INLINE uvec3& operator &= (uvec3& a, const uint b) {
	a.x &= b;
	a.y &= b;
	a.z &= b;
	return a;
}

GNM_INLINE ivec3& operator |= (ivec3& a, const ivec3& b) {
	a.x |= b.x;
	a.y |= b.y;
	a.z |= b.z;
	return a;
}

GNM_INLINE uvec3& operator |= (uvec3& a, const uvec3& b) {
	a.x |= b.x;
	a.y |= b.y;
	a.z |= b.z;
	return a;
}

GNM_INLINE ivec3& operator |= (ivec3& a, const int b) {
	a.x |= b;
	a.y |= b;
	a.z |= b;
	return a;
}

GNM_INLINE uvec3& operator |= (uvec3& a, const uint b) {
	a.x |= b;
	a.y |= b;
	a.z |= b;
	return a;
}

GNM_INLINE ivec3& operator ^= (ivec3& a, const ivec3& b) {
	a.x ^= b.x;
	a.y ^= b.y;
	a.z ^= b.z;
	return a;
}

GNM_INLINE uvec3& operator ^= (uvec3& a, const uvec3& b) {
	a.x ^= b.x;
	a.y ^= b.y;
	a.z ^= b.z;
	return a;
}

GNM_INLINE ivec3& operator ^= (ivec3& a, const int b) {
	a.x ^= b;
	a.y ^= b;
	a.z ^= b;
	return a;
}

GNM_INLINE uvec3& operator ^= (uvec3& a, const uint b) {
	a.x ^= b;
	a.y ^= b;
	a.z ^= b;
	return a;
}

GNM_NAMESPACE_END
