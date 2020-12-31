#ifndef GNM_FUNCTIONS_FUNC_QUAT_H_
#define GNM_FUNCTIONS_FUNC_QUAT_H_

#include "../quat.h"

// Quaternion Functions

GNM_NAMESPACE_BEGIN

float dot(const quat& x, const quat& y);

quat cross(const quat& x, const quat& y);

float length(const quat& x);

quat normalize(const quat& x);

quat conjugate(const quat& x);

quat inverse(const quat& x);

GNM_NAMESPACE_END

#include "func_quat.inl"

#endif // GNM_FUNCTIONS_FUNC_QUAT_H_