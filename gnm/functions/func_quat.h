#ifndef GNM_FUNCTIONS_FUNC_QUAT_H_
#define GNM_FUNCTIONS_FUNC_QUAT_H_

#include "../quat.h"

// Quaternion Functions

GNM_NAMESPACE_BEGIN

bvec4 Equal(const quat& x, const quat& y);

float Dot(const quat& x, const quat& y);

quat Cross(const quat& x, const quat& y);

float Length(const quat& x);

quat Normalize(const quat& x);

quat Conjugate(const quat& x);

quat Inverse(const quat& x);

float Angle(const quat& x);

vec3 Axis(const quat& x);

quat Rotate(const quat& x, const vec3& Axis, const float Angle);

quat FromNormalizedAxis(const vec3& x, const vec3& y);

float Roll(const quat& q);

float Pitch(const quat& q);

float Yaw(const quat& q);

vec3 EulerAngles(const quat& q);

quat QuatAxisAngle(const vec3& Axis, const float Angle);

quat QuatEulerAngles(const vec3& angles);

GNM_NAMESPACE_END

#include "func_quat.inl"

#endif // GNM_FUNCTIONS_FUNC_QUAT_H_