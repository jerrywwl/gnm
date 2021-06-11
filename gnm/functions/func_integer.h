#ifndef GNM_FUNCTIONS_FUNC_INTEGER_H_
#define GNM_FUNCTIONS_FUNC_INTEGER_H_

#include "../vec2.h"
#include "../vec3.h"
#include "../vec4.h"

// Integer Functions

GNM_NAMESPACE_BEGIN

int BitfieldExtract(const int value, const int offset, const int bits);
ivec2 BitfieldExtract(const ivec2& value, const int offset, const int bits);
ivec3 BitfieldExtract(const ivec3& value, const int offset, const int bits);
ivec4 BitfieldExtract(const ivec4& value, const int offset, const int bits);
uint BitfieldExtract(const uint value, const int offset, const int bits);
uvec2 BitfieldExtract(const uvec2& value, const int offset, const int bits);
uvec3 BitfieldExtract(const uvec3& value, const int offset, const int bits);
uvec4 BitfieldExtract(const uvec4& value, const int offset, const int bits);

ivec2 BitfieldInsert(const ivec2& base, const ivec2& insert, const int offset, const int bits);
ivec3 BitfieldInsert(const ivec3& base, const ivec3& insert, const int offset, const int bits);
ivec4 BitfieldInsert(const ivec4& base, const ivec4& insert, const int offset, const int bits);
uvec2 BitfieldInsert(const uvec2& base, const uvec2& insert, const int offset, const int bits);
uvec3 BitfieldInsert(const uvec3& base, const uvec3& insert, const int offset, const int bits);
uvec4 BitfieldInsert(const uvec4& base, const uvec4& insert, const int offset, const int bits);

int BitfieldReverse(const int value);
ivec2 BitfieldReverse(const ivec2& value);
ivec3 BitfieldReverse(const ivec3& value);
ivec4 BitfieldReverse(const ivec4& value);
uint BitfieldReverse(const uint value);
uvec2 BitfieldReverse(const uvec2& value);
uvec3 BitfieldReverse(const uvec3& value);
uvec4 BitfieldReverse(const uvec4& value);

int BitCount(const int value);
ivec2 BitCount(const ivec2& value);
ivec3 BitCount(const ivec3& value);
ivec4 BitCount(const ivec4& value);
int BitCount(const uint value);
ivec2 BitCount(const uvec2& value);
ivec3 BitCount(const uvec3& value);
ivec4 BitCount(const uvec4& value);

int FindLSB(const int value);
ivec2 FindLSB(const ivec2& value);
ivec3 FindLSB(const ivec3& value);
ivec4 FindLSB(const ivec4& value);
int FindLSB(const uint value);
ivec2 FindLSB(const uvec2& value);
ivec3 FindLSB(const uvec3& value);
ivec4 FindLSB(const uvec4& value);

uint UaddCarry(const uint x, const uint y, uint& carry);
uvec2 UaddCarry(const uvec2& x, const uvec2& y, uvec2& carry);
uvec3 UaddCarry(const uvec3& x, const uvec3& y, uvec3& carry);
uvec4 UaddCarry(const uvec4& x, const uvec4& y, uvec4& carry);

uint UsubBorrow(const uint x, const uint y, uint& borrow);
uvec2 UsubBorrow(const uvec2& x, const uvec2& y, uvec2& borrow);
uvec3 UsubBorrow(const uvec3& x, const uvec3& y, uvec3& borrow);
uvec4 UsubBorrow(const uvec4& x, const uvec4& y, uvec4& borrow);

void UmulExtended(const uint x, const uint y, uint& msb, uint& lsb);
void UmulExtended(const uvec2& x, const uvec2& y, uvec2& msb, uvec2& lsb);
void UmulExtended(const uvec3& x, const uvec3& y, uvec3& msb, uvec3& lsb);
void UmulExtended(const uvec4& x, const uvec4& y, uvec4& msb, uvec4& lsb);

GNM_NAMESPACE_END

#include "func_integer.inl"

#endif // GNM_FUNCTIONS_FUNC_INTEGER_H_