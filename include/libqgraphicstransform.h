#pragma once
#ifndef SRCC_LIBQGRAPHICSTRANSFORM_H
#define SRCC_LIBQGRAPHICSTRANSFORM_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGraphicsRotation QGraphicsRotation;
typedef struct QGraphicsScale QGraphicsScale;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QGraphicsTransform* QGraphicsTransform_new();
QGraphicsTransform* QGraphicsTransform_new2(QObject* parent);
QMetaObject* QGraphicsTransform_MetaObject(const QGraphicsTransform* self);
void* QGraphicsTransform_Metacast(QGraphicsTransform* self, const char* param1);
int QGraphicsTransform_Metacall(QGraphicsTransform* self, int param1, int param2, void** param3);
void QGraphicsTransform_OnMetacall(QGraphicsTransform* self, intptr_t slot);
int QGraphicsTransform_QBaseMetacall(QGraphicsTransform* self, int param1, int param2, void** param3);
libqt_string QGraphicsTransform_Tr(const char* s);
void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix);
void QGraphicsTransform_OnApplyTo(const QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix);
libqt_string QGraphicsTransform_Tr2(const char* s, const char* c);
libqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n);
bool QGraphicsTransform_Event(QGraphicsTransform* self, QEvent* event);
void QGraphicsTransform_OnEvent(QGraphicsTransform* self, intptr_t slot);
bool QGraphicsTransform_QBaseEvent(QGraphicsTransform* self, QEvent* event);
bool QGraphicsTransform_EventFilter(QGraphicsTransform* self, QObject* watched, QEvent* event);
void QGraphicsTransform_OnEventFilter(QGraphicsTransform* self, intptr_t slot);
bool QGraphicsTransform_QBaseEventFilter(QGraphicsTransform* self, QObject* watched, QEvent* event);
void QGraphicsTransform_TimerEvent(QGraphicsTransform* self, QTimerEvent* event);
void QGraphicsTransform_OnTimerEvent(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseTimerEvent(QGraphicsTransform* self, QTimerEvent* event);
void QGraphicsTransform_ChildEvent(QGraphicsTransform* self, QChildEvent* event);
void QGraphicsTransform_OnChildEvent(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseChildEvent(QGraphicsTransform* self, QChildEvent* event);
void QGraphicsTransform_CustomEvent(QGraphicsTransform* self, QEvent* event);
void QGraphicsTransform_OnCustomEvent(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseCustomEvent(QGraphicsTransform* self, QEvent* event);
void QGraphicsTransform_ConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
void QGraphicsTransform_OnConnectNotify(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseConnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
void QGraphicsTransform_DisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
void QGraphicsTransform_OnDisconnectNotify(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseDisconnectNotify(QGraphicsTransform* self, const QMetaMethod* signal);
void QGraphicsTransform_Update(QGraphicsTransform* self);
void QGraphicsTransform_OnUpdate(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseUpdate(QGraphicsTransform* self);
QObject* QGraphicsTransform_Sender(const QGraphicsTransform* self);
void QGraphicsTransform_OnSender(const QGraphicsTransform* self, intptr_t slot);
QObject* QGraphicsTransform_QBaseSender(const QGraphicsTransform* self);
int QGraphicsTransform_SenderSignalIndex(const QGraphicsTransform* self);
void QGraphicsTransform_OnSenderSignalIndex(const QGraphicsTransform* self, intptr_t slot);
int QGraphicsTransform_QBaseSenderSignalIndex(const QGraphicsTransform* self);
int QGraphicsTransform_Receivers(const QGraphicsTransform* self, const char* signal);
void QGraphicsTransform_OnReceivers(const QGraphicsTransform* self, intptr_t slot);
int QGraphicsTransform_QBaseReceivers(const QGraphicsTransform* self, const char* signal);
bool QGraphicsTransform_IsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal);
void QGraphicsTransform_OnIsSignalConnected(const QGraphicsTransform* self, intptr_t slot);
bool QGraphicsTransform_QBaseIsSignalConnected(const QGraphicsTransform* self, const QMetaMethod* signal);
void QGraphicsTransform_Delete(QGraphicsTransform* self);

QGraphicsScale* QGraphicsScale_new();
QGraphicsScale* QGraphicsScale_new2(QObject* parent);
QMetaObject* QGraphicsScale_MetaObject(const QGraphicsScale* self);
void* QGraphicsScale_Metacast(QGraphicsScale* self, const char* param1);
int QGraphicsScale_Metacall(QGraphicsScale* self, int param1, int param2, void** param3);
void QGraphicsScale_OnMetacall(QGraphicsScale* self, intptr_t slot);
int QGraphicsScale_QBaseMetacall(QGraphicsScale* self, int param1, int param2, void** param3);
libqt_string QGraphicsScale_Tr(const char* s);
QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self);
void QGraphicsScale_SetOrigin(QGraphicsScale* self, const QVector3D* point);
double QGraphicsScale_XScale(const QGraphicsScale* self);
void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale);
double QGraphicsScale_YScale(const QGraphicsScale* self);
void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale);
double QGraphicsScale_ZScale(const QGraphicsScale* self);
void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale);
void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_OnApplyTo(const QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_OriginChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_OriginChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_XScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_XScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_YScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_YScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_ZScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_ScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_ScaleChanged(QGraphicsScale* self, intptr_t slot);
libqt_string QGraphicsScale_Tr2(const char* s, const char* c);
libqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n);
bool QGraphicsScale_Event(QGraphicsScale* self, QEvent* event);
void QGraphicsScale_OnEvent(QGraphicsScale* self, intptr_t slot);
bool QGraphicsScale_QBaseEvent(QGraphicsScale* self, QEvent* event);
bool QGraphicsScale_EventFilter(QGraphicsScale* self, QObject* watched, QEvent* event);
void QGraphicsScale_OnEventFilter(QGraphicsScale* self, intptr_t slot);
bool QGraphicsScale_QBaseEventFilter(QGraphicsScale* self, QObject* watched, QEvent* event);
void QGraphicsScale_TimerEvent(QGraphicsScale* self, QTimerEvent* event);
void QGraphicsScale_OnTimerEvent(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseTimerEvent(QGraphicsScale* self, QTimerEvent* event);
void QGraphicsScale_ChildEvent(QGraphicsScale* self, QChildEvent* event);
void QGraphicsScale_OnChildEvent(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseChildEvent(QGraphicsScale* self, QChildEvent* event);
void QGraphicsScale_CustomEvent(QGraphicsScale* self, QEvent* event);
void QGraphicsScale_OnCustomEvent(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseCustomEvent(QGraphicsScale* self, QEvent* event);
void QGraphicsScale_ConnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
void QGraphicsScale_OnConnectNotify(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseConnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
void QGraphicsScale_DisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
void QGraphicsScale_OnDisconnectNotify(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseDisconnectNotify(QGraphicsScale* self, const QMetaMethod* signal);
void QGraphicsScale_Update(QGraphicsScale* self);
void QGraphicsScale_OnUpdate(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseUpdate(QGraphicsScale* self);
QObject* QGraphicsScale_Sender(const QGraphicsScale* self);
void QGraphicsScale_OnSender(const QGraphicsScale* self, intptr_t slot);
QObject* QGraphicsScale_QBaseSender(const QGraphicsScale* self);
int QGraphicsScale_SenderSignalIndex(const QGraphicsScale* self);
void QGraphicsScale_OnSenderSignalIndex(const QGraphicsScale* self, intptr_t slot);
int QGraphicsScale_QBaseSenderSignalIndex(const QGraphicsScale* self);
int QGraphicsScale_Receivers(const QGraphicsScale* self, const char* signal);
void QGraphicsScale_OnReceivers(const QGraphicsScale* self, intptr_t slot);
int QGraphicsScale_QBaseReceivers(const QGraphicsScale* self, const char* signal);
bool QGraphicsScale_IsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal);
void QGraphicsScale_OnIsSignalConnected(const QGraphicsScale* self, intptr_t slot);
bool QGraphicsScale_QBaseIsSignalConnected(const QGraphicsScale* self, const QMetaMethod* signal);
void QGraphicsScale_Delete(QGraphicsScale* self);

QGraphicsRotation* QGraphicsRotation_new();
QGraphicsRotation* QGraphicsRotation_new2(QObject* parent);
QMetaObject* QGraphicsRotation_MetaObject(const QGraphicsRotation* self);
void* QGraphicsRotation_Metacast(QGraphicsRotation* self, const char* param1);
int QGraphicsRotation_Metacall(QGraphicsRotation* self, int param1, int param2, void** param3);
void QGraphicsRotation_OnMetacall(QGraphicsRotation* self, intptr_t slot);
int QGraphicsRotation_QBaseMetacall(QGraphicsRotation* self, int param1, int param2, void** param3);
libqt_string QGraphicsRotation_Tr(const char* s);
QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self);
void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, const QVector3D* point);
double QGraphicsRotation_Angle(const QGraphicsRotation* self);
void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle);
QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self);
void QGraphicsRotation_SetAxis(QGraphicsRotation* self, const QVector3D* axis);
void QGraphicsRotation_SetAxisWithAxis(QGraphicsRotation* self, int axis);
void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_OnApplyTo(const QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_OriginChanged(QGraphicsRotation* self);
void QGraphicsRotation_Connect_OriginChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_AngleChanged(QGraphicsRotation* self);
void QGraphicsRotation_Connect_AngleChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_AxisChanged(QGraphicsRotation* self);
void QGraphicsRotation_Connect_AxisChanged(QGraphicsRotation* self, intptr_t slot);
libqt_string QGraphicsRotation_Tr2(const char* s, const char* c);
libqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n);
bool QGraphicsRotation_Event(QGraphicsRotation* self, QEvent* event);
void QGraphicsRotation_OnEvent(QGraphicsRotation* self, intptr_t slot);
bool QGraphicsRotation_QBaseEvent(QGraphicsRotation* self, QEvent* event);
bool QGraphicsRotation_EventFilter(QGraphicsRotation* self, QObject* watched, QEvent* event);
void QGraphicsRotation_OnEventFilter(QGraphicsRotation* self, intptr_t slot);
bool QGraphicsRotation_QBaseEventFilter(QGraphicsRotation* self, QObject* watched, QEvent* event);
void QGraphicsRotation_TimerEvent(QGraphicsRotation* self, QTimerEvent* event);
void QGraphicsRotation_OnTimerEvent(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseTimerEvent(QGraphicsRotation* self, QTimerEvent* event);
void QGraphicsRotation_ChildEvent(QGraphicsRotation* self, QChildEvent* event);
void QGraphicsRotation_OnChildEvent(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseChildEvent(QGraphicsRotation* self, QChildEvent* event);
void QGraphicsRotation_CustomEvent(QGraphicsRotation* self, QEvent* event);
void QGraphicsRotation_OnCustomEvent(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseCustomEvent(QGraphicsRotation* self, QEvent* event);
void QGraphicsRotation_ConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
void QGraphicsRotation_OnConnectNotify(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseConnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
void QGraphicsRotation_DisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
void QGraphicsRotation_OnDisconnectNotify(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseDisconnectNotify(QGraphicsRotation* self, const QMetaMethod* signal);
void QGraphicsRotation_Update(QGraphicsRotation* self);
void QGraphicsRotation_OnUpdate(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseUpdate(QGraphicsRotation* self);
QObject* QGraphicsRotation_Sender(const QGraphicsRotation* self);
void QGraphicsRotation_OnSender(const QGraphicsRotation* self, intptr_t slot);
QObject* QGraphicsRotation_QBaseSender(const QGraphicsRotation* self);
int QGraphicsRotation_SenderSignalIndex(const QGraphicsRotation* self);
void QGraphicsRotation_OnSenderSignalIndex(const QGraphicsRotation* self, intptr_t slot);
int QGraphicsRotation_QBaseSenderSignalIndex(const QGraphicsRotation* self);
int QGraphicsRotation_Receivers(const QGraphicsRotation* self, const char* signal);
void QGraphicsRotation_OnReceivers(const QGraphicsRotation* self, intptr_t slot);
int QGraphicsRotation_QBaseReceivers(const QGraphicsRotation* self, const char* signal);
bool QGraphicsRotation_IsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal);
void QGraphicsRotation_OnIsSignalConnected(const QGraphicsRotation* self, intptr_t slot);
bool QGraphicsRotation_QBaseIsSignalConnected(const QGraphicsRotation* self, const QMetaMethod* signal);
void QGraphicsRotation_Delete(QGraphicsRotation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
