#ifndef GNM_FUNCTIONS_FUNC_INTEGER_H_
#define GNM_FUNCTIONS_FUNC_INTEGER_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Integer Functions

GNM_NAMESPACE_BEGIN

int bitfieldExtract(const int value, const int offset, const int bits);
ivec2 bitfieldExtract(const ivec2& value, const int offset, const int bits);
ivec3 bitfieldExtract(const ivec3& value, const int offset, const int bits);
ivec4 bitfieldExtract(const ivec4& value, const int offset, const int bits);
uint bitfieldExtract(const uint value, const int offset, const int bits);
uvec2 bitfieldExtract(const uvec2& value, const int offset, const int bits);
uvec3 bitfieldExtract(const uvec3& value, const int offset, const int bits);
uvec4 bitfieldExtract(const uvec4& value, const int offset, const int bits);

ivec2 bitfieldInsert(const ivec2& base, const ivec2& insert, const int offset, const int bits);
ivec3 bitfieldInsert(const ivec3& base, const ivec3& insert, const int offset, const int bits);
ivec4 bitfieldInsert(const ivec4& base, const ivec4& insert, const int offset, const int bits);
uvec2 bitfieldInsert(const uvec2& base, const uvec2& insert, const int offset, const int bits);
uvec3 bitfieldInsert(const uvec3& base, const uvec3& insert, const int offset, const int bits);
uvec4 bitfieldInsert(const uvec4& base, const uvec4& insert, const int offset, const int bits);

int bitfieldReverse(const int value);
ivec2 bitfieldReverse(const ivec2& value);
ivec3 bitfieldReverse(const ivec3& value);
ivec4 bitfieldReverse(const ivec4& value);
uint bitfieldReverse(const uint value);
uvec2 bitfieldReverse(const uvec2& value);
uvec3 bitfieldReverse(const uvec3& value);
uvec4 bitfieldReverse(const uvec4& value);

int bitCount(const int value);
ivec2 bitCount(const ivec2& value);
ivec3 bitCount(const ivec3& value);
ivec4 bitCount(const ivec4& value);
int bitCount(const uint value);
ivec2 bitCount(const uvec2& value);
ivec3 bitCount(const uvec3& value);
ivec4 bitCount(const uvec4& value);

int findLSB(const int value);
ivec2 findLSB(const ivec2& value);
ivec3 findLSB(const ivec3& value);
ivec4 findLSB(const ivec4& value);
int findLSB(const uint value);
ivec2 findLSB(const uvec2& value);
ivec3 findLSB(const uvec3& value);
ivec4 findLSB(const uvec4& value);

uint uaddCarry(const uint x, const uint y, uint& carry);
uvec2 uaddCarry(const uvec2& x, const uvec2& y, uvec2& carry);
uvec3 uaddCarry(const uvec3& x, const uvec3& y, uvec3& carry);
uvec4 uaddCarry(const uvec4& x, const uvec4& y, uvec4& carry);

uint usubBorrow(const uint x, const uint y, uint& borrow);
uvec2 usubBorrow(const uvec2& x, const uvec2& y, uvec2& borrow);
uvec3 usubBorrow(const uvec3& x, const uvec3& y, uvec3& borrow);
uvec4 usubBorrow(const uvec4& x, const uvec4& y, uvec4& borrow);

void umulExtended(const uint x, const uint y, uint& msb, uint& lsb);
void umulExtended(const uvec2& x, const uvec2& y, uvec2& msb, uvec2& lsb);
void umulExtended(const uvec3& x, const uvec3& y, uvec3& msb, uvec3& lsb);
void umulExtended(const uvec4& x, const uvec4& y, uvec4& msb, uvec4& lsb);

GNM_NAMESPACE_END

#include "func_integer.inl"

#endif // GNM_FUNCTIONS_FUNC_INTEGER_H_