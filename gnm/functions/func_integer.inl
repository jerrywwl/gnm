GNM_NAMESPACE_BEGIN

#define GNM_MASK_I(x) (x > sizeof(int) * 8 ? ~0 : (1 << x) - 1 )
#define GNM_MASK_U(x) (x > sizeof(uint) * 8u ? ~0u : (1u << x) - 1u )
#define GNM_EXTRACT_I(x, offset, bits) ((x >> offset) & GNM_MASK_I(bits))
#define GNM_EXTRACT_U(x, offset, bits) ((x >> offset) & GNM_MASK_U(bits))
#define GNM_INSERT(x, y, offset, mask) ((x & ~mask) | ((y << offset) & mask))

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int bitfieldExtract(const int value, const int offset, const int bits) {
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

GNM_INLINE ivec2 bitfieldExtract(const ivec2& value, const int offset, const int bits) {
  return ivec2(GNM_EXTRACT_I(value.x, offset, bits), GNM_EXTRACT_I(value.y, offset, bits));
}

GNM_INLINE ivec3 bitfieldExtract(const ivec3& value, const int offset, const int bits) {
  return ivec3(GNM_EXTRACT_I(value.x, offset, bits), GNM_EXTRACT_I(value.y, offset, bits), GNM_EXTRACT_I(value.z, offset, bits));
}

GNM_INLINE ivec4 bitfieldExtract(const ivec4& value, const int offset, const int bits) {
  return ivec4(GNM_EXTRACT_I(value.x, offset, bits), GNM_EXTRACT_I(value.y, offset, bits), GNM_EXTRACT_I(value.z, offset, bits), GNM_EXTRACT_I(value.w, offset, bits));
}

GNM_INLINE uint bitfieldExtract(const uint value, const int offset, const int bits) {
  return GNM_EXTRACT_I(value, offset, bits);
}

GNM_INLINE uvec2 bitfieldExtract(const uvec2& value, const int offset, const int bits) {
  return uvec2(GNM_EXTRACT_U(value.x, offset, bits), GNM_EXTRACT_U(value.y, offset, bits));
}

GNM_INLINE uvec3 bitfieldExtract(const uvec3& value, const int offset, const int bits) {
  return uvec3(GNM_EXTRACT_U(value.x, offset, bits), GNM_EXTRACT_U(value.y, offset, bits), GNM_EXTRACT_U(value.z, offset, bits));
}

GNM_INLINE uvec4 bitfieldExtract(const uvec4& value, const int offset, const int bits) {
  return uvec4(GNM_EXTRACT_U(value.x, offset, bits), GNM_EXTRACT_U(value.y, offset, bits), GNM_EXTRACT_U(value.z, offset, bits), GNM_EXTRACT_U(value.w, offset, bits));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int bitfieldInsert(const int base, const int insert, const int offset, const int bits) {
#if 0
  int mask = ~(0xffffffff << bits) << offset;
  return (base & ~mask) | (insert << offset);
#endif
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return GNM_INSERT(base, insert, offset, mask);
}

GNM_INLINE ivec2 bitfieldInsert(const ivec2& base, const ivec2& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return ivec2(GNM_INSERT(base.x, insert.x, offset, mask), 
              GNM_INSERT(base.y, insert.y, offset, mask));
}

GNM_INLINE ivec3 bitfieldInsert(const ivec3& base, const ivec3& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return ivec3(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask));
}

GNM_INLINE ivec4 bitfieldInsert(const ivec4& base, const ivec4& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return ivec4(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask),
              GNM_INSERT(base.w, insert.w, offset, mask));
}

GNM_INLINE uint bitfieldInsert(const uint base, const uint insert, const int offset, const int bits) {
#if 0
  int mask = ~(0xffffffff << bits) << offset;
  return (base & ~mask) | (insert << offset);
#endif
  const int mask = (int)(GNM_MASK_I(bits) << offset);
  return GNM_INSERT(base, insert, offset, mask);
}

GNM_INLINE uvec2 bitfieldInsert(const uvec2& base, const uvec2& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_U(bits) << offset);
  return uvec2(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask));
}

GNM_INLINE uvec3 bitfieldInsert(const uvec3& base, const uvec3& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_U(bits) << offset);
  return uvec3(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask));

  
}

GNM_INLINE uvec4 bitfieldInsert(const uvec4& base, const uvec4& insert, const int offset, const int bits) {
  const int mask = (int)(GNM_MASK_U(bits) << offset);
  return uvec4(GNM_INSERT(base.x, insert.x, offset, mask),
              GNM_INSERT(base.y, insert.y, offset, mask),
              GNM_INSERT(base.z, insert.z, offset, mask),
              GNM_INSERT(base.w, insert.w, offset, mask));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int bitfieldReverse(const int value) {
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

GNM_INLINE ivec2 bitfieldReverse(const ivec2& value) {
  return ivec2(bitfieldReverse(value.x), bitfieldReverse(value.y));
}

GNM_INLINE ivec3 bitfieldReverse(const ivec3& value) {
  return ivec3(bitfieldReverse(value.x), bitfieldReverse(value.y), bitfieldReverse(value.z));
}

GNM_INLINE ivec4 bitfieldReverse(const ivec4& value) {
  return ivec4(bitfieldReverse(value.x), bitfieldReverse(value.y), bitfieldReverse(value.z), bitfieldReverse(value.w));
}

GNM_INLINE uint bitfieldReverse(const uint value) {
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

GNM_INLINE uvec2 bitfieldReverse(const uvec2& value) {
  return uvec2(bitfieldReverse(value.x), bitfieldReverse(value.y));
}

GNM_INLINE uvec3 bitfieldReverse(const uvec3& value) {
  return uvec3(bitfieldReverse(value.x), bitfieldReverse(value.y), bitfieldReverse(value.z));
}

GNM_INLINE uvec4 bitfieldReverse(const uvec4& value) {
  return uvec4(bitfieldReverse(value.x), bitfieldReverse(value.y), bitfieldReverse(value.z), bitfieldReverse(value.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int bitCount(const int value) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    int mask = 1 << i;
    if (value & mask) {
      ++res;
    }
  }
  return res;
}

GNM_INLINE ivec2 bitCount(const ivec2& value) {
  return ivec2(bitCount(value.x), bitCount(value.y));
}

GNM_INLINE ivec3 bitCount(const ivec3& value) {
  return ivec3(bitCount(value.x), bitCount(value.y), bitCount(value.z));
}

GNM_INLINE ivec4 bitCount(const ivec4& value) {
  return ivec4(bitCount(value.x), bitCount(value.y), bitCount(value.z), bitCount(value.w));
}

GNM_INLINE int bitCount(const uint value) {
  int res = 0;
  for (int i = 0; i < 32; ++i) {
    int mask = 1 << i;
    if (value & mask) {
      ++res;
    }
  }
  return res;
}

GNM_INLINE ivec2 bitCount(const uvec2& value) {
  return ivec2(bitCount(value.x), bitCount(value.y));
}

GNM_INLINE ivec3 bitCount(const uvec3& value) {
  return ivec3(bitCount(value.x), bitCount(value.y), bitCount(value.z));
}

GNM_INLINE ivec4 bitCount(const uvec4& value) {
  return ivec4(bitCount(value.x), bitCount(value.y), bitCount(value.z), bitCount(value.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE int findLSB(const int value) {
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

GNM_INLINE ivec2 findLSB(const ivec2& value) {
  return ivec2(findLSB(value.x), findLSB(value.y));
}

GNM_INLINE ivec3 findLSB(const ivec3& value) {
  return ivec3(findLSB(value.x), findLSB(value.y), findLSB(value.z));
}

GNM_INLINE ivec4 findLSB(const ivec4& value) {
  return ivec4(findLSB(value.x), findLSB(value.y), findLSB(value.z), findLSB(value.w));
}

GNM_INLINE int findLSB(const uint value) {
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

GNM_INLINE ivec2 findLSB(const uvec2& value) {
  return ivec2(findLSB(value.x), findLSB(value.y));
}

GNM_INLINE ivec3 findLSB(const uvec3& value) {
  return ivec3(findLSB(value.x), findLSB(value.y), findLSB(value.z));
}

GNM_INLINE ivec4 findLSB(const uvec4& value) {
  return ivec4(findLSB(value.x), findLSB(value.y), findLSB(value.z), findLSB(value.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE uint uaddCarry(const uint x, const uint y, uint& carry) {
  uint64 f64 = (uint64)x + (uint64)y;
  uint64 max32 = ((uint64)1 << (uint64)32) - (uint64)1;
  carry = f64 > max32? 1u : 0u;
  return (uint)(f64 % (max32 + (uint64)1));
}

GNM_INLINE uvec2 uaddCarry(const uvec2& x, const uvec2& y, uvec2& carry) {
  return uvec2(uaddCarry(x.x, y.x, carry.x), uaddCarry(x.y, y.y, carry.y));
}

GNM_INLINE uvec3 uaddCarry(const uvec3& x, const uvec3& y, uvec3& carry) {
  return uvec3(uaddCarry(x.x, y.x, carry.x), uaddCarry(x.y, y.y, carry.y), uaddCarry(x.z, y.z, carry.z));
}

GNM_INLINE uvec4 uaddCarry(const uvec4& x, const uvec4& y, uvec4& carry) {
  return uvec4(uaddCarry(x.x, y.x, carry.x), uaddCarry(x.y, y.y, carry.y), uaddCarry(x.z, y.z, carry.z), uaddCarry(x.w, y.w, carry.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE uint usubBorrow(const uint x, const uint y, uint& borrow) {
  borrow = (x >= y ? 0u : 1u);
  return (uint)(y >= x? y - x : ((((uint64)1 << (uint64)32)) + (uint64)y - (uint64)x));
}

GNM_INLINE uvec2 usubBorrow(const uvec2& x, const uvec2& y, uvec2& borrow) {
  return uvec2(usubBorrow(x.x, y.x, borrow.x), usubBorrow(x.y, y.y, borrow.y));
}

GNM_INLINE uvec3 usubBorrow(const uvec3& x, const uvec3& y, uvec3& borrow) {
  return uvec3(usubBorrow(x.x, y.x, borrow.x), usubBorrow(x.y, y.y, borrow.y), usubBorrow(x.z, y.z, borrow.z));
}

GNM_INLINE uvec4 usubBorrow(const uvec4& x, const uvec4& y, uvec4& borrow) {
  return uvec4(usubBorrow(x.x, y.x, borrow.x), usubBorrow(x.y, y.y, borrow.y), usubBorrow(x.z, y.z, borrow.z), usubBorrow(x.w, y.w, borrow.w));
}

// ----------------------------------------------------------------------------------------------------

GNM_INLINE void umulExtended(const uint x, const uint y, uint& msb, uint& lsb) {
  uint64 f64 = (uint64)x * (uint64)y;
  msb = (uint)(f64 >> 32);
  lsb = (uint)f64;
}

GNM_INLINE void umulExtended(const uvec2& x, const uvec2& y, uvec2& msb, uvec2& lsb) {
  umulExtended(x.x, y.x, msb.x, lsb.x);
  umulExtended(x.y, y.y, msb.y, lsb.y);
}

GNM_INLINE void umulExtended(const uvec3& x, const uvec3& y, uvec3& msb, uvec3& lsb) {
  umulExtended(x.x, y.x, msb.x, lsb.x);
  umulExtended(x.y, y.y, msb.y, lsb.y);
  umulExtended(x.z, y.z, msb.z, lsb.z);
}

GNM_INLINE void umulExtended(const uvec4& x, const uvec4& y, uvec4& msb, uvec4& lsb) {
  umulExtended(x.x, y.x, msb.x, lsb.x);
  umulExtended(x.y, y.y, msb.y, lsb.y);
  umulExtended(x.z, y.z, msb.z, lsb.z);
  umulExtended(x.w, y.w, msb.w, lsb.w);
}

// ----------------------------------------------------------------------------------------------------

GNM_NAMESPACE_END
