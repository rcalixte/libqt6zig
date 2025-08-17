#pragma once
#ifndef SRCC_LIBQQUATERNION_H
#define SRCC_LIBQQUATERNION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuaternion QQuaternion;
typedef struct QVariant QVariant;
typedef struct QVector3D QVector3D;
typedef struct QVector4D QVector4D;
#endif

QQuaternion* QQuaternion_new(const QQuaternion* other);
QQuaternion* QQuaternion_new2(QQuaternion* other);
QQuaternion* QQuaternion_new3();
QQuaternion* QQuaternion_new4(int param1);
QQuaternion* QQuaternion_new5(float scalar, float xpos, float ypos, float zpos);
QQuaternion* QQuaternion_new6(float scalar, const QVector3D* vector);
QQuaternion* QQuaternion_new7(const QVector4D* vector);
QQuaternion* QQuaternion_new8(const QQuaternion* param1);
void QQuaternion_CopyAssign(QQuaternion* self, QQuaternion* other);
void QQuaternion_MoveAssign(QQuaternion* self, QQuaternion* other);
bool QQuaternion_IsNull(const QQuaternion* self);
bool QQuaternion_IsIdentity(const QQuaternion* self);
QVector3D* QQuaternion_Vector(const QQuaternion* self);
void QQuaternion_SetVector(QQuaternion* self, const QVector3D* vector);
void QQuaternion_SetVector2(QQuaternion* self, float x, float y, float z);
float QQuaternion_X(const QQuaternion* self);
float QQuaternion_Y(const QQuaternion* self);
float QQuaternion_Z(const QQuaternion* self);
float QQuaternion_Scalar(const QQuaternion* self);
void QQuaternion_SetX(QQuaternion* self, float x);
void QQuaternion_SetY(QQuaternion* self, float y);
void QQuaternion_SetZ(QQuaternion* self, float z);
void QQuaternion_SetScalar(QQuaternion* self, float scalar);
float QQuaternion_DotProduct(const QQuaternion* q1, const QQuaternion* q2);
float QQuaternion_Length(const QQuaternion* self);
float QQuaternion_LengthSquared(const QQuaternion* self);
QQuaternion* QQuaternion_Normalized(const QQuaternion* self);
void QQuaternion_Normalize(QQuaternion* self);
QQuaternion* QQuaternion_Inverted(const QQuaternion* self);
QQuaternion* QQuaternion_Conjugated(const QQuaternion* self);
QVector3D* QQuaternion_RotatedVector(const QQuaternion* self, const QVector3D* vector);
QQuaternion* QQuaternion_OperatorPlusAssign(QQuaternion* self, const QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorMinusAssign(QQuaternion* self, const QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorMultiplyAssign(QQuaternion* self, float factor);
QQuaternion* QQuaternion_OperatorMultiplyAssign2(QQuaternion* self, const QQuaternion* quaternion);
QQuaternion* QQuaternion_OperatorDivideAssign(QQuaternion* self, float divisor);
QVector4D* QQuaternion_ToVector4D(const QQuaternion* self);
QVariant* QQuaternion_ToQVariant(const QQuaternion* self);
void QQuaternion_GetAxisAndAngle(const QQuaternion* self, QVector3D* axis, float* angle);
QQuaternion* QQuaternion_FromAxisAndAngle(const QVector3D* axis, float angle);
void QQuaternion_GetAxisAndAngle2(const QQuaternion* self, float* x, float* y, float* z, float* angle);
QQuaternion* QQuaternion_FromAxisAndAngle2(float x, float y, float z, float angle);
QVector3D* QQuaternion_ToEulerAngles(const QQuaternion* self);
QQuaternion* QQuaternion_FromEulerAngles(const QVector3D* eulerAngles);
void QQuaternion_GetEulerAngles(const QQuaternion* self, float* pitch, float* yaw, float* roll);
QQuaternion* QQuaternion_FromEulerAngles2(float pitch, float yaw, float roll);
void QQuaternion_GetAxes(const QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis);
QQuaternion* QQuaternion_FromAxes(const QVector3D* xAxis, const QVector3D* yAxis, const QVector3D* zAxis);
QQuaternion* QQuaternion_FromDirection(const QVector3D* direction, const QVector3D* up);
QQuaternion* QQuaternion_RotationTo(const QVector3D* from, const QVector3D* to);
QQuaternion* QQuaternion_Slerp(const QQuaternion* q1, const QQuaternion* q2, float t);
QQuaternion* QQuaternion_Nlerp(const QQuaternion* q1, const QQuaternion* q2, float t);
void QQuaternion_Delete(QQuaternion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
