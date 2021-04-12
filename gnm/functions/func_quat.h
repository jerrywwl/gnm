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

float angle(const quat& x);

vec3 axis(const quat& x);

quat axisAngle(const vec3& axis, const float angle);

quat rotate(const quat& x, const vec3& axis, const float angle);

quat fromNormalizedAxis(const vec3& x, const vec3& y);

float roll(const quat& q);

float pitch(const quat& q);

float yaw(const quat& q);

vec3 eulerAngles(const quat& q);

GNM_NAMESPACE_END

#include "func_quat.inl"

#endif // GNM_FUNCTIONS_FUNC_QUAT_H_