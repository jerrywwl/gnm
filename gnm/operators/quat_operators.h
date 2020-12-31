#ifndef GNM_OPERATORS_QUAT_OPERATORS_H_
#define GNM_OPERATORS_QUAT_OPERATORS_H_

#include "../types/quat_type.h"

GNM_NAMESPACE_BEGIN

// ----------------------------------------------------------------------------------------------------
// Expressions

quat operator + (const quat& a, const quat& b);

quat operator - (const quat& a, const quat& b);

quat operator * (const quat& a, const quat& b);
quat operator * (const quat& a, const float b);
quat operator * (const float a, const quat& b);

quat operator / (const quat& a, const float b);
quat operator / (const float a, const quat& b);

quat operator + (const quat& a);

quat operator - (const quat& a);

bool operator == (const quat& a, const quat& b);

bool operator != (const quat& a, const quat& b);

// ----------------------------------------------------------------------------------------------------
// Assignments

quat& operator += (quat& a, const quat& b);

quat& operator -= (quat& a, const quat& b);

quat& operator *= (quat& a, const quat& b);
quat& operator *= (quat& a, const float b);

quat& operator /= (quat& a, const float b);

GNM_NAMESPACE_END

#include "quat_operators.inl"

#endif // GNM_OPERATORS_VEC4_OPERATORS_H_
