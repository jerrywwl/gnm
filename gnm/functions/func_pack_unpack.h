#ifndef GNM_FUNCTIONS_FUNC_PACK_UNPACK_H_
#define GNM_FUNCTIONS_FUNC_PACK_UNPACK_H_

#include "func_common.h"

// Floating-Point Pack and Unpack Functions

GNM_NAMESPACE_BEGIN

uint packSnorm2x16(const vec2& v);
vec2 unpackSnorm2x16(const uint p);
uint packUnorm2x16(const vec2& v);
vec2 unpackUnorm2x16(const uint p);
uint packHalf2x16(const vec2& v);
vec2 unpackHalf2x16(const uint v);
uint packUnorm4x8(const vec4& v);
uint packSnorm4x8(const vec4& v);
vec4 unpackUnorm4x8(const uint v);

GNM_NAMESPACE_END

#include "func_pack_unpack.inl"

#endif // GNM_FUNCTIONS_FUNC_PACK_UNPACK_H_