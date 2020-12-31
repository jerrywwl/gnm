GNM_DETAIL_NAMESPACE_BEGIN

GNM_INLINE float overflow() {
	volatile float f = 1e10;

	for (int i = 0; i < 10; ++i)
		f = f * f; // this will overflow before the for loop terminates
	return f;
}

union uif32 {
	uif32() : i(0) {}
	uif32(float f_) : f(f_) {}
	uif32(uint i_) : i(i_) {}

	float f;
	unsigned int i;
};

int16 toFloat16(float const& f) {
	uif32 entry;
	entry.f = f;
	int i = static_cast<int>(entry.i);

	int s = (i >> 16) & 0x00008000;
	int e = ((i >> 23) & 0x000000ff) - (127 - 15);
	int m = i & 0x007fffff;

	if (e <= 0) {
		if (e < -10) {
			return int16(s);
		}

		m = (m | 0x00800000) >> (1 - e);

		if (m & 0x00001000) {
			m += 0x00002000;
		}

		return int16(s | (m >> 13));
	} else if (e == 0xff - (127 - 15)) {
		if (m == 0) {
			return int16(s | 0x7c00);
		} else {

			m >>= 13;

			return int16(s | 0x7c00 | m | (m == 0));
		}
	} else {
		if (m & 0x00001000) {
			m += 0x00002000;

			if (m & 0x00800000) {
				m = 0;
				e += 1;
			}
		}

		if (e > 30) {
			overflow();
			return int16(s | 0x7c00);
		} 

		return int16(s | (e << 10) | (m >> 13));
	}
}

float toFloat32(int16 value) {
	int s = (value >> 15) & 0x00000001;
	int e = (value >> 10) & 0x0000001f;
	int m = value & 0x000003ff;

	if (e == 0) {
		if (m == 0) {
			uif32 r;
			r.i = static_cast<unsigned int>(s << 31);
			return r.f;
		} else {
			while (!(m & 0x00000400)) {
				m <<= 1;
				e -= 1;
			}

			e += 1;
			m &= ~0x00000400;
		}
	} else if (e == 31) {
		if (m == 0) {
			uif32 r;
			r.i = static_cast<unsigned int>((s << 31) | 0x7f800000);
			return r.f;
		} else {
			uif32 r;
			r.i = static_cast<unsigned int>((s << 31) | 0x7f800000 | (m << 13));
			return r.f;
		}
	}

	e = e + (127 - 15);
	m = m << 13;

	uif32 r;
	r.i = static_cast<unsigned int>((s << 31) | (e << 23) | m);
	return r.f;
}

GNM_DETAIL_NAMESPACE_END

GNM_NAMESPACE_BEGIN

GNM_INLINE uint packSnorm2x16(const vec2& v) {

	union {
		int16 in[2];
		uint out;
	} u;

	u.in[0] = (int16)std::round(GNM_CLAMP(v.x, -1.0f, 1.0f) * 32767.0f);
	u.in[1] = (int16)std::round(GNM_CLAMP(v.y, -1.0f, 1.0f) * 32767.0f);

  return u.out;
}

GNM_INLINE vec2 unpackSnorm2x16(const uint p) {

	union {
		uint in;
		int16 out[2];
	} u;

	u.in = p;

	return vec2(GNM_CLAMP(u.out[0] * 3.0518509475997192297128208258309e-5f, -1.0f, 1.0f),
							GNM_CLAMP(u.out[1] * 3.0518509475997192297128208258309e-5f, -1.0f, 1.0f));
}

GNM_INLINE uint packUnorm2x16(const vec2& v) {

	union {
		uint16 in[2];
		uint out;
	} u;

	u.in[0] = (int16)std::round(GNM_CLAMP(v.x, -1.0f, 1.0f) * 65535.0f);
	u.in[1] = (int16)std::round(GNM_CLAMP(v.y, -1.0f, 1.0f) * 65535.0f);

	return u.out;
}

GNM_INLINE vec2 unpackUnorm2x16(const uint p) {

	union {
		uint in;
		int16 out[2];
	} u;

	u.in = p;

	return vec2(u.out[0] * 1.5259021896696421759365224689097e-5f,
							u.out[1] * 1.5259021896696421759365224689097e-5f);
}

GNM_INLINE uint packHalf2x16(const vec2& v) {

	union {
		int16 in[2];
		uint out;
	} u;

	u.in[0] = detail::toFloat16(v.x);
	u.in[1] = detail::toFloat16(v.y);

	return u.out;
}

GNM_INLINE vec2 unpackHalf2x16(const uint v) {

	union {
		uint in;
		int16 out[2];
	} u;

	u.in = v;

	return vec2(detail::toFloat32(u.out[0]), detail::toFloat32(u.out[1]));
}

GNM_INLINE uint packUnorm4x8(const vec4& v) {

	union {
		uint8 in[4];
		uint out;
	} u;

	u.in[0] = (uint8)std::round(GNM_CLAMP(v.x, -1.0f, 1.0f) * 255.0f);
	u.in[1] = (uint8)std::round(GNM_CLAMP(v.y, -1.0f, 1.0f) * 255.0f);
	u.in[2] = (uint8)std::round(GNM_CLAMP(v.z, -1.0f, 1.0f) * 255.0f);
	u.in[3] = (uint8)std::round(GNM_CLAMP(v.w, -1.0f, 1.0f) * 255.0f);

	return u.out;
}

GNM_INLINE uint packSnorm4x8(const vec4& v) {

	union {
		int8 in[4];
		uint out;
	} u;

	u.in[0] = (int8)std::round(GNM_CLAMP(v.x, -1.0f, 1.0f) * 127.0f);
	u.in[1] = (int8)std::round(GNM_CLAMP(v.y, -1.0f, 1.0f) * 127.0f);
	u.in[2] = (int8)std::round(GNM_CLAMP(v.z, -1.0f, 1.0f) * 127.0f);
	u.in[3] = (int8)std::round(GNM_CLAMP(v.w, -1.0f, 1.0f) * 127.0f);

	return u.out;
}

GNM_INLINE vec4 unpackUnorm4x8(const uint v) {

	union {
		uint in;
		uint8 out[4];
	} u;

	u.in = v;

	return vec4(u.out[0], u.out[1], u.out[2], u.out[3]) * 0.0039215686274509803921568627451f;
}

GNM_INLINE vec4 unpackSnorm4x8(const uint v) {

	union {
		uint in;
		int8 out[4];
	} u;

	u.in = v;

	return clamp(vec4(u.out[0], u.out[1], u.out[2], u.out[3]) * 0.0078740157480315f, -1.0f, 1.0f);
}

GNM_NAMESPACE_END
