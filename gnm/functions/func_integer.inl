GNM_NAMESPACE_BEGIN

#define GNM_MASK_I(x) (x > sizeof(int) * 8 ? ~0 : (1 << x) - 1 )
#define GNM_MASK_U(x) (x > sizeof(uint) * 8u ? ~0u : (1u << x) - 1u )
#define GNM_EXTRACT_I(x, offset, bits) ((x >> offset) & GNM_MASK_I(bits))
#define GNM_EXTRACT_U(x, offset, bits) ((x >> offset) & GNM_MASK_U(bits))
#define GNM_INSERT(x, y, offset, mask) ((x & ~mask) | ((y << offset) & mask))

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int BitfieldExtract(const int value, const int offset, const int bits) {
#if 0
  int mask = ~(0xffffffff << bits);
  if (offset > 0) {
    return (value >> (offset - 1)) & mask;
  } else {
    return value & mask;
  }
#endif
  return GNM_EXTRACT_I(value, offset, bits);
}

GNM_INLINE ivec2 BitfieldExtract(const ivec2& value, const int offset, const int bits) {
  return ivec2(GNM_EXTRACT_I(value.x, offset, bits), GNM_EXTRACT_I(value.y, offset, bits));
}

GNM_INLINE ivec3 BitfieldExtract(const ivec3& value, const int offset, const int bits) {
  return ivec3(GNM_EXTRACT_I(value.x, offset, bits), GNM_EXTRACT_I(value.y, offset, bits), GNM_EXTRACT_I(value.z, offset, bits));
}

GNM_INLINE ivec4 BitfieldExtract(const ivec4& value, const int offset, const int bits) {
  return ivec4(GNM_EXTRACT_I(value.x, offset, bits), GNM_EXTRACT_I(value.y, offset, bits), GNM_EXTRACT_I(value.z, offset, bits), GNM_EXTRACT_I(value.w, offset, bits));
}

GNM_INLINE uint BitfieldExtract(const uint value, const int offset, const int bits) {
  return GNM_EXTRACT_I(value, offset, bits);
}

GNM_INLINE uvec2 BitfieldExtract(const uvec2& value, const int offset, const int bits) {
  return uvec2(GNM_EXTRACT_U(value.x, offset, bits), GNM_EXTRACT_U(value.y, offset, bits));
}

GNM_INLINE uvec3 BitfieldExtract(const uvec3& value, const int offset, const int bits) {
  return uvec3(GNM_EXTRACT_U(value.x, offset, bits), GNM_EXTRACT_U(value.y, offset, bits), GNM_EXTRACT_U(value.z, offset, bits));
}

GNM_INLINE uvec4 BitfieldExtract(const uvec4& value, const int offset, const int bits) {
  return uvec4(GNM_EXTRACT_U(value.x, offset, bits), GNM_EXTRACT_U(value.y, offset, bits), GNM_EXTRACT_U(value.z, offset, bits), GNM_EXTRACT_U(value.w, offset, bits));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int BitfieldInsert(const int base, const int insert, const int offset, const int bits) {
#if 0
  int mask = ~(0xffffffff << bits) << offset;
  return (base & ~mask) | (insert << offset);
#endif
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return GNM_INSERT(base, insert, offset, mask);
}

GNM_INLINE ivec2 BitfieldInsert(const ivec2& base, const ivec2& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return ivec2(GNM_INSERT(base.x, insert.x, offset, mask), 
              GNM_INSERT(base.y, insert.y, offset, mask));
}

GNM_INLINE ivec3 BitfieldInsert(const ivec3& base, const ivec3& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return ivec3(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask));
}

GNM_INLINE ivec4 BitfieldInsert(const ivec4& base, const ivec4& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return ivec4(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask),
              GNM_INSERT(base.w, insert.w, offset, mask));
}

GNM_INLINE uint BitfieldInsert(const uint base, const uint insert, const int offset, const int bits) {
#if 0
  int mask = ~(0xffffffff << bits) << offset;
  return (base & ~mask) | (insert << offset);
#endif
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return GNM_INSERT(base, insert, offset, mask);
}

GNM_INLINE uvec2 BitfieldInsert(const uvec2& base, const uvec2& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_U(bits) << offset);
  return uvec2(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask));
}

GNM_INLINE uvec3 BitfieldInsert(const uvec3& base, const uvec3& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_U(bits) << offset);
  return uvec3(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask));

  
}

GNM_INLINE uvec4 BitfieldInsert(const uvec4& base, const uvec4& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_U(bits) << offset);
  return uvec4(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask),
              GNM_INSERT(base.w, insert.w, offset, mask));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int BitfieldReverse(const int value) {
  int res = 0;

  for (uint i = 0; i < 32; ++i) {
    int mask = 1 << i;
    int shift = 32 - 2 * i - 1;
    mask &= value;
    mask = (shift > 0) ? mask << shift : mask >> -shift;
    res |= mask;
  }

  return res;
}

GNM_INLINE ivec2 BitfieldReverse(const ivec2& value) {
  return ivec2(BitfieldReverse(value.x), BitfieldReverse(value.y));
}

GNM_INLINE ivec3 BitfieldReverse(const ivec3& value) {
  return ivec3(BitfieldReverse(value.x), BitfieldReverse(value.y), BitfieldReverse(value.z));
}

GNM_INLINE ivec4 BitfieldReverse(const ivec4& value) {
  return ivec4(BitfieldReverse(value.x), BitfieldReverse(value.y), BitfieldReverse(value.z), BitfieldReverse(value.w));
}

GNM_INLINE uint BitfieldReverse(const uint value) {
  uint res = 0;

  for (uint i = 0; i < 32; ++i) {
    int mask = 1 << i;
    int shift = 32 - 2 * i - 1;
    mask &= value;
    mask = (shift > 0) ? mask << shift : mask >> -shift;
    res |= mask;
  }

  return res;
}

GNM_INLINE uvec2 BitfieldReverse(const uvec2& value) {
  return uvec2(BitfieldReverse(value.x), BitfieldReverse(value.y));
}

GNM_INLINE uvec3 BitfieldReverse(const uvec3& value) {
  return uvec3(BitfieldReverse(value.x), BitfieldReverse(value.y), BitfieldReverse(value.z));
}

GNM_INLINE uvec4 BitfieldReverse(const uvec4& value) {
  return uvec4(BitfieldReverse(value.x), BitfieldReverse(value.y), BitfieldReverse(value.z), BitfieldReverse(value.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int BitCount(const int value) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    int mask = 1 << i;
    if (value & mask) {
      ++res;
    }
  }
  return res;
}

GNM_INLINE ivec2 BitCount(const ivec2& value) {
  return ivec2(BitCount(value.x), BitCount(value.y));
}

GNM_INLINE ivec3 BitCount(const ivec3& value) {
  return ivec3(BitCount(value.x), BitCount(value.y), BitCount(value.z));
}

GNM_INLINE ivec4 BitCount(const ivec4& value) {
  return ivec4(BitCount(value.x), BitCount(value.y), BitCount(value.z), BitCount(value.w));
}

GNM_INLINE int BitCount(const uint value) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    int mask = 1 << i;
    if (value & mask) {
      ++res;
    }
  }
  return res;
}

GNM_INLINE ivec2 BitCount(const uvec2& value) {
  return ivec2(BitCount(value.x), BitCount(value.y));
}

GNM_INLINE ivec3 BitCount(const uvec3& value) {
  return ivec3(BitCount(value.x), BitCount(value.y), BitCount(value.z));
}

GNM_INLINE ivec4 BitCount(const uvec4& value) {
  return ivec4(BitCount(value.x), BitCount(value.y), BitCount(value.z), BitCount(value.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int FindLSB(const int value) {
  int res = -1;
  for (int i = 0; i < 32; ++i) {
    int mask = 1 << i;
    if (value & mask) {
      res = i;
      break;
    }
  }
  return res;
}

GNM_INLINE ivec2 FindLSB(const ivec2& value) {
  return ivec2(FindLSB(value.x), FindLSB(value.y));
}

GNM_INLINE ivec3 FindLSB(const ivec3& value) {
  return ivec3(FindLSB(value.x), FindLSB(value.y), FindLSB(value.z));
}

GNM_INLINE ivec4 FindLSB(const ivec4& value) {
  return ivec4(FindLSB(value.x), FindLSB(value.y), FindLSB(value.z), FindLSB(value.w));
}

GNM_INLINE int FindLSB(const uint value) {
  int res = -1;
  for (uint i = 0; i < 32; ++i) {
    int mask = 1 << i;
    if (value & mask) {
      res = i;
      break;
    }
  }
  return res;
}

GNM_INLINE ivec2 FindLSB(const uvec2& value) {
  return ivec2(FindLSB(value.x), FindLSB(value.y));
}

GNM_INLINE ivec3 FindLSB(const uvec3& value) {
  return ivec3(FindLSB(value.x), FindLSB(value.y), FindLSB(value.z));
}

GNM_INLINE ivec4 FindLSB(const uvec4& value) {
  return ivec4(FindLSB(value.x), FindLSB(value.y), FindLSB(value.z), FindLSB(value.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE uint UaddCarry(const uint x, const uint y, uint& carry) {
  uint64 f64 = (uint64)x + (uint64)y;
  uint64 max32 = ((uint64)1 << (uint64)32) - (uint64)1;
  carry = f64 > max32? 1u : 0u;
  return (uint)(f64 % (max32 + (uint64)1));
}

GNM_INLINE uvec2 UaddCarry(const uvec2& x, const uvec2& y, uvec2& carry) {
  return uvec2(UaddCarry(x.x, y.x, carry.x), UaddCarry(x.y, y.y, carry.y));
}

GNM_INLINE uvec3 UaddCarry(const uvec3& x, const uvec3& y, uvec3& carry) {
  return uvec3(UaddCarry(x.x, y.x, carry.x), UaddCarry(x.y, y.y, carry.y), UaddCarry(x.z, y.z, carry.z));
}

GNM_INLINE uvec4 UaddCarry(const uvec4& x, const uvec4& y, uvec4& carry) {
  return uvec4(UaddCarry(x.x, y.x, carry.x), UaddCarry(x.y, y.y, carry.y), UaddCarry(x.z, y.z, carry.z), UaddCarry(x.w, y.w, carry.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE uint UsubBorrow(const uint x, const uint y, uint& borrow) {
  borrow = (x >= y ? 0u : 1u);
  return (uint)(y >= x? y - x : ((((uint64)1 << (uint64)32)) + (uint64)y - (uint64)x));
}

GNM_INLINE uvec2 UsubBorrow(const uvec2& x, const uvec2& y, uvec2& borrow) {
  return uvec2(UsubBorrow(x.x, y.x, borrow.x), UsubBorrow(x.y, y.y, borrow.y));
}

GNM_INLINE uvec3 UsubBorrow(const uvec3& x, const uvec3& y, uvec3& borrow) {
  return uvec3(UsubBorrow(x.x, y.x, borrow.x), UsubBorrow(x.y, y.y, borrow.y), UsubBorrow(x.z, y.z, borrow.z));
}

GNM_INLINE uvec4 UsubBorrow(const uvec4& x, const uvec4& y, uvec4& borrow) {
  return uvec4(UsubBorrow(x.x, y.x, borrow.x), UsubBorrow(x.y, y.y, borrow.y), UsubBorrow(x.z, y.z, borrow.z), UsubBorrow(x.w, y.w, borrow.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE void UmulExtended(const uint x, const uint y, uint& msb, uint& lsb) {
  uint64 f64 = (uint64)x * (uint64)y;
  msb = (uint)(f64 >> 32);
  lsb = (uint)f64;
}

GNM_INLINE void UmulExtended(const uvec2& x, const uvec2& y, uvec2& msb, uvec2& lsb) {
  UmulExtended(x.x, y.x, msb.x, lsb.x);
  UmulExtended(x.y, y.y, msb.y, lsb.y);
}

GNM_INLINE void UmulExtended(const uvec3& x, const uvec3& y, uvec3& msb, uvec3& lsb) {
  UmulExtended(x.x, y.x, msb.x, lsb.x);
  UmulExtended(x.y, y.y, msb.y, lsb.y);
  UmulExtended(x.z, y.z, msb.z, lsb.z);
}

GNM_INLINE void UmulExtended(const uvec4& x, const uvec4& y, uvec4& msb, uvec4& lsb) {
  UmulExtended(x.x, y.x, msb.x, lsb.x);
  UmulExtended(x.y, y.y, msb.y, lsb.y);
  UmulExtended(x.z, y.z, msb.z, lsb.z);
  UmulExtended(x.w, y.w, msb.w, lsb.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
