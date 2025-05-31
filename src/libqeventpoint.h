#pragma once
#ifndef SRCC_LIBQEVENTPOINT_H
#define SRCC_LIBQEVENTPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEventPoint QEventPoint;
typedef struct QPointF QPointF;
typedef struct QPointingDevice QPointingDevice;
typedef struct QPointingDeviceUniqueId QPointingDeviceUniqueId;
typedef struct QSizeF QSizeF;
typedef struct QVector2D QVector2D;
#endif

#ifdef __cplusplus
typedef QEventPoint::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QEventPoint::State State;                   // C++ enum
typedef QEventPoint::States States;                 // C++ QFlags
#else
typedef int State;           // C ABI enum
typedef int States;          // C ABI QFlags
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QEventPoint* QEventPoint_new();
QEventPoint* QEventPoint_new2(int pointId, uint8_t state, const QPointF* scenePosition, const QPointF* globalPosition);
QEventPoint* QEventPoint_new3(const QEventPoint* other);
QEventPoint* QEventPoint_new4(int id);
QEventPoint* QEventPoint_new5(int id, const QPointingDevice* device);
void QEventPoint_OperatorAssign(QEventPoint* self, const QEventPoint* other);
bool QEventPoint_OperatorEqual(const QEventPoint* self, const QEventPoint* other);
bool QEventPoint_OperatorNotEqual(const QEventPoint* self, const QEventPoint* other);
void QEventPoint_Swap(QEventPoint* self, QEventPoint* other);
QPointF* QEventPoint_Position(const QEventPoint* self);
QPointF* QEventPoint_PressPosition(const QEventPoint* self);
QPointF* QEventPoint_GrabPosition(const QEventPoint* self);
QPointF* QEventPoint_LastPosition(const QEventPoint* self);
QPointF* QEventPoint_ScenePosition(const QEventPoint* self);
QPointF* QEventPoint_ScenePressPosition(const QEventPoint* self);
QPointF* QEventPoint_SceneGrabPosition(const QEventPoint* self);
QPointF* QEventPoint_SceneLastPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalPressPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalGrabPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalLastPosition(const QEventPoint* self);
QPointF* QEventPoint_NormalizedPosition(const QEventPoint* self);
QPointF* QEventPoint_Pos(const QEventPoint* self);
QPointF* QEventPoint_StartPos(const QEventPoint* self);
QPointF* QEventPoint_ScenePos(const QEventPoint* self);
QPointF* QEventPoint_StartScenePos(const QEventPoint* self);
QPointF* QEventPoint_ScreenPos(const QEventPoint* self);
QPointF* QEventPoint_StartScreenPos(const QEventPoint* self);
QPointF* QEventPoint_StartNormalizedPos(const QEventPoint* self);
QPointF* QEventPoint_NormalizedPos(const QEventPoint* self);
QPointF* QEventPoint_LastPos(const QEventPoint* self);
QPointF* QEventPoint_LastScenePos(const QEventPoint* self);
QPointF* QEventPoint_LastScreenPos(const QEventPoint* self);
QPointF* QEventPoint_LastNormalizedPos(const QEventPoint* self);
QVector2D* QEventPoint_Velocity(const QEventPoint* self);
uint8_t QEventPoint_State(const QEventPoint* self);
QPointingDevice* QEventPoint_Device(const QEventPoint* self);
int QEventPoint_Id(const QEventPoint* self);
QPointingDeviceUniqueId* QEventPoint_UniqueId(const QEventPoint* self);
unsigned long QEventPoint_Timestamp(const QEventPoint* self);
unsigned long QEventPoint_LastTimestamp(const QEventPoint* self);
unsigned long QEventPoint_PressTimestamp(const QEventPoint* self);
double QEventPoint_TimeHeld(const QEventPoint* self);
double QEventPoint_Pressure(const QEventPoint* self);
double QEventPoint_Rotation(const QEventPoint* self);
QSizeF* QEventPoint_EllipseDiameters(const QEventPoint* self);
bool QEventPoint_IsAccepted(const QEventPoint* self);
void QEventPoint_SetAccepted(QEventPoint* self);
void QEventPoint_SetAccepted1(QEventPoint* self, bool accepted);
void QEventPoint_Delete(QEventPoint* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
