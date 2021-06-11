#ifndef GNM_FUNCTIONS_FUNC_PACK_UNPACK_H_
#define GNM_FUNCTIONS_FUNC_PACK_UNPACK_H_

#include "func_common.h"

// Floating-Point Pack and Unpack Functions

GNM_NAMESPACE_BEGIN

uint PackSnorm2x16(const vec2& v);
vec2 UnpackSnorm2x16(const uint p);
uint PackUnorm2x16(const vec2& v);
vec2 UnpackUnorm2x16(const uint p);
uint PackHalf2x16(const vec2& v);
vec2 UnpackHalf2x16(const uint v);
uint PackUnorm4x8(const vec4& v);
uint PackSnorm4x8(const vec4& v);
vec4 UnpackUnorm4x8(const uint v);

GNM_NAMESPACE_END

#include "func_pack_unpack.inl"

#endif // GNM_FUNCTIONS_FUNC_PACK_UNPACK_H_