#pragma once
#ifndef SRCC_LIBQGESTURE_H
#define SRCC_LIBQGESTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGesture QGesture;
typedef struct QGestureEvent QGestureEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QPanGesture QPanGesture;
typedef struct QPinchGesture QPinchGesture;
typedef struct QPointF QPointF;
typedef struct QSwipeGesture QSwipeGesture;
typedef struct QTapAndHoldGesture QTapAndHoldGesture;
typedef struct QTapGesture QTapGesture;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QGesture::GestureCancelPolicy GestureCancelPolicy; // C++ enum
typedef QPinchGesture::ChangeFlag ChangeFlag;              // C++ enum
typedef QPinchGesture::ChangeFlags ChangeFlags;            // C++ QFlags
typedef QSwipeGesture::SwipeDirection SwipeDirection;      // C++ enum
#else
typedef int ChangeFlag;          // C ABI enum
typedef int ChangeFlags;         // C ABI QFlags
typedef int GestureCancelPolicy; // C ABI enum
typedef int SwipeDirection;      // C ABI enum
#endif

QGesture* QGesture_new();
QGesture* QGesture_new2(QObject* parent);
QMetaObject* QGesture_MetaObject(const QGesture* self);
void* QGesture_Metacast(QGesture* self, const char* param1);
int QGesture_Metacall(QGesture* self, int param1, int param2, void** param3);
void QGesture_OnMetacall(QGesture* self, intptr_t slot);
int QGesture_QBaseMetacall(QGesture* self, int param1, int param2, void** param3);
libqt_string QGesture_Tr(const char* s);
int QGesture_GestureType(const QGesture* self);
int QGesture_State(const QGesture* self);
QPointF* QGesture_HotSpot(const QGesture* self);
void QGesture_SetHotSpot(QGesture* self, QPointF* value);
bool QGesture_HasHotSpot(const QGesture* self);
void QGesture_UnsetHotSpot(QGesture* self);
void QGesture_SetGestureCancelPolicy(QGesture* self, int policy);
int QGesture_GestureCancelPolicy(const QGesture* self);
libqt_string QGesture_Tr2(const char* s, const char* c);
libqt_string QGesture_Tr3(const char* s, const char* c, int n);
bool QGesture_Event(QGesture* self, QEvent* event);
void QGesture_OnEvent(QGesture* self, intptr_t slot);
bool QGesture_QBaseEvent(QGesture* self, QEvent* event);
bool QGesture_EventFilter(QGesture* self, QObject* watched, QEvent* event);
void QGesture_OnEventFilter(QGesture* self, intptr_t slot);
bool QGesture_QBaseEventFilter(QGesture* self, QObject* watched, QEvent* event);
void QGesture_TimerEvent(QGesture* self, QTimerEvent* event);
void QGesture_OnTimerEvent(QGesture* self, intptr_t slot);
void QGesture_QBaseTimerEvent(QGesture* self, QTimerEvent* event);
void QGesture_ChildEvent(QGesture* self, QChildEvent* event);
void QGesture_OnChildEvent(QGesture* self, intptr_t slot);
void QGesture_QBaseChildEvent(QGesture* self, QChildEvent* event);
void QGesture_CustomEvent(QGesture* self, QEvent* event);
void QGesture_OnCustomEvent(QGesture* self, intptr_t slot);
void QGesture_QBaseCustomEvent(QGesture* self, QEvent* event);
void QGesture_ConnectNotify(QGesture* self, QMetaMethod* signal);
void QGesture_OnConnectNotify(QGesture* self, intptr_t slot);
void QGesture_QBaseConnectNotify(QGesture* self, QMetaMethod* signal);
void QGesture_DisconnectNotify(QGesture* self, QMetaMethod* signal);
void QGesture_OnDisconnectNotify(QGesture* self, intptr_t slot);
void QGesture_QBaseDisconnectNotify(QGesture* self, QMetaMethod* signal);
QObject* QGesture_Sender(const QGesture* self);
void QGesture_OnSender(const QGesture* self, intptr_t slot);
QObject* QGesture_QBaseSender(const QGesture* self);
int QGesture_SenderSignalIndex(const QGesture* self);
void QGesture_OnSenderSignalIndex(const QGesture* self, intptr_t slot);
int QGesture_QBaseSenderSignalIndex(const QGesture* self);
int QGesture_Receivers(const QGesture* self, const char* signal);
void QGesture_OnReceivers(const QGesture* self, intptr_t slot);
int QGesture_QBaseReceivers(const QGesture* self, const char* signal);
bool QGesture_IsSignalConnected(const QGesture* self, QMetaMethod* signal);
void QGesture_OnIsSignalConnected(const QGesture* self, intptr_t slot);
bool QGesture_QBaseIsSignalConnected(const QGesture* self, QMetaMethod* signal);
void QGesture_Delete(QGesture* self);

QPanGesture* QPanGesture_new();
QPanGesture* QPanGesture_new2(QObject* parent);
QMetaObject* QPanGesture_MetaObject(const QPanGesture* self);
void* QPanGesture_Metacast(QPanGesture* self, const char* param1);
int QPanGesture_Metacall(QPanGesture* self, int param1, int param2, void** param3);
void QPanGesture_OnMetacall(QPanGesture* self, intptr_t slot);
int QPanGesture_QBaseMetacall(QPanGesture* self, int param1, int param2, void** param3);
libqt_string QPanGesture_Tr(const char* s);
QPointF* QPanGesture_LastOffset(const QPanGesture* self);
QPointF* QPanGesture_Offset(const QPanGesture* self);
QPointF* QPanGesture_Delta(const QPanGesture* self);
double QPanGesture_Acceleration(const QPanGesture* self);
void QPanGesture_SetLastOffset(QPanGesture* self, QPointF* value);
void QPanGesture_SetOffset(QPanGesture* self, QPointF* value);
void QPanGesture_SetAcceleration(QPanGesture* self, double value);
libqt_string QPanGesture_Tr2(const char* s, const char* c);
libqt_string QPanGesture_Tr3(const char* s, const char* c, int n);
bool QPanGesture_Event(QPanGesture* self, QEvent* event);
void QPanGesture_OnEvent(QPanGesture* self, intptr_t slot);
bool QPanGesture_QBaseEvent(QPanGesture* self, QEvent* event);
bool QPanGesture_EventFilter(QPanGesture* self, QObject* watched, QEvent* event);
void QPanGesture_OnEventFilter(QPanGesture* self, intptr_t slot);
bool QPanGesture_QBaseEventFilter(QPanGesture* self, QObject* watched, QEvent* event);
void QPanGesture_TimerEvent(QPanGesture* self, QTimerEvent* event);
void QPanGesture_OnTimerEvent(QPanGesture* self, intptr_t slot);
void QPanGesture_QBaseTimerEvent(QPanGesture* self, QTimerEvent* event);
void QPanGesture_ChildEvent(QPanGesture* self, QChildEvent* event);
void QPanGesture_OnChildEvent(QPanGesture* self, intptr_t slot);
void QPanGesture_QBaseChildEvent(QPanGesture* self, QChildEvent* event);
void QPanGesture_CustomEvent(QPanGesture* self, QEvent* event);
void QPanGesture_OnCustomEvent(QPanGesture* self, intptr_t slot);
void QPanGesture_QBaseCustomEvent(QPanGesture* self, QEvent* event);
void QPanGesture_ConnectNotify(QPanGesture* self, QMetaMethod* signal);
void QPanGesture_OnConnectNotify(QPanGesture* self, intptr_t slot);
void QPanGesture_QBaseConnectNotify(QPanGesture* self, QMetaMethod* signal);
void QPanGesture_DisconnectNotify(QPanGesture* self, QMetaMethod* signal);
void QPanGesture_OnDisconnectNotify(QPanGesture* self, intptr_t slot);
void QPanGesture_QBaseDisconnectNotify(QPanGesture* self, QMetaMethod* signal);
QObject* QPanGesture_Sender(const QPanGesture* self);
void QPanGesture_OnSender(const QPanGesture* self, intptr_t slot);
QObject* QPanGesture_QBaseSender(const QPanGesture* self);
int QPanGesture_SenderSignalIndex(const QPanGesture* self);
void QPanGesture_OnSenderSignalIndex(const QPanGesture* self, intptr_t slot);
int QPanGesture_QBaseSenderSignalIndex(const QPanGesture* self);
int QPanGesture_Receivers(const QPanGesture* self, const char* signal);
void QPanGesture_OnReceivers(const QPanGesture* self, intptr_t slot);
int QPanGesture_QBaseReceivers(const QPanGesture* self, const char* signal);
bool QPanGesture_IsSignalConnected(const QPanGesture* self, QMetaMethod* signal);
void QPanGesture_OnIsSignalConnected(const QPanGesture* self, intptr_t slot);
bool QPanGesture_QBaseIsSignalConnected(const QPanGesture* self, QMetaMethod* signal);
void QPanGesture_Delete(QPanGesture* self);

QPinchGesture* QPinchGesture_new();
QPinchGesture* QPinchGesture_new2(QObject* parent);
QMetaObject* QPinchGesture_MetaObject(const QPinchGesture* self);
void* QPinchGesture_Metacast(QPinchGesture* self, const char* param1);
int QPinchGesture_Metacall(QPinchGesture* self, int param1, int param2, void** param3);
void QPinchGesture_OnMetacall(QPinchGesture* self, intptr_t slot);
int QPinchGesture_QBaseMetacall(QPinchGesture* self, int param1, int param2, void** param3);
libqt_string QPinchGesture_Tr(const char* s);
int QPinchGesture_TotalChangeFlags(const QPinchGesture* self);
void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value);
int QPinchGesture_ChangeFlags(const QPinchGesture* self);
void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value);
QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self);
void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_SetCenterPoint(QPinchGesture* self, QPointF* value);
double QPinchGesture_TotalScaleFactor(const QPinchGesture* self);
double QPinchGesture_LastScaleFactor(const QPinchGesture* self);
double QPinchGesture_ScaleFactor(const QPinchGesture* self);
void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value);
double QPinchGesture_TotalRotationAngle(const QPinchGesture* self);
double QPinchGesture_LastRotationAngle(const QPinchGesture* self);
double QPinchGesture_RotationAngle(const QPinchGesture* self);
void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value);
libqt_string QPinchGesture_Tr2(const char* s, const char* c);
libqt_string QPinchGesture_Tr3(const char* s, const char* c, int n);
bool QPinchGesture_Event(QPinchGesture* self, QEvent* event);
void QPinchGesture_OnEvent(QPinchGesture* self, intptr_t slot);
bool QPinchGesture_QBaseEvent(QPinchGesture* self, QEvent* event);
bool QPinchGesture_EventFilter(QPinchGesture* self, QObject* watched, QEvent* event);
void QPinchGesture_OnEventFilter(QPinchGesture* self, intptr_t slot);
bool QPinchGesture_QBaseEventFilter(QPinchGesture* self, QObject* watched, QEvent* event);
void QPinchGesture_TimerEvent(QPinchGesture* self, QTimerEvent* event);
void QPinchGesture_OnTimerEvent(QPinchGesture* self, intptr_t slot);
void QPinchGesture_QBaseTimerEvent(QPinchGesture* self, QTimerEvent* event);
void QPinchGesture_ChildEvent(QPinchGesture* self, QChildEvent* event);
void QPinchGesture_OnChildEvent(QPinchGesture* self, intptr_t slot);
void QPinchGesture_QBaseChildEvent(QPinchGesture* self, QChildEvent* event);
void QPinchGesture_CustomEvent(QPinchGesture* self, QEvent* event);
void QPinchGesture_OnCustomEvent(QPinchGesture* self, intptr_t slot);
void QPinchGesture_QBaseCustomEvent(QPinchGesture* self, QEvent* event);
void QPinchGesture_ConnectNotify(QPinchGesture* self, QMetaMethod* signal);
void QPinchGesture_OnConnectNotify(QPinchGesture* self, intptr_t slot);
void QPinchGesture_QBaseConnectNotify(QPinchGesture* self, QMetaMethod* signal);
void QPinchGesture_DisconnectNotify(QPinchGesture* self, QMetaMethod* signal);
void QPinchGesture_OnDisconnectNotify(QPinchGesture* self, intptr_t slot);
void QPinchGesture_QBaseDisconnectNotify(QPinchGesture* self, QMetaMethod* signal);
QObject* QPinchGesture_Sender(const QPinchGesture* self);
void QPinchGesture_OnSender(const QPinchGesture* self, intptr_t slot);
QObject* QPinchGesture_QBaseSender(const QPinchGesture* self);
int QPinchGesture_SenderSignalIndex(const QPinchGesture* self);
void QPinchGesture_OnSenderSignalIndex(const QPinchGesture* self, intptr_t slot);
int QPinchGesture_QBaseSenderSignalIndex(const QPinchGesture* self);
int QPinchGesture_Receivers(const QPinchGesture* self, const char* signal);
void QPinchGesture_OnReceivers(const QPinchGesture* self, intptr_t slot);
int QPinchGesture_QBaseReceivers(const QPinchGesture* self, const char* signal);
bool QPinchGesture_IsSignalConnected(const QPinchGesture* self, QMetaMethod* signal);
void QPinchGesture_OnIsSignalConnected(const QPinchGesture* self, intptr_t slot);
bool QPinchGesture_QBaseIsSignalConnected(const QPinchGesture* self, QMetaMethod* signal);
void QPinchGesture_Delete(QPinchGesture* self);

QSwipeGesture* QSwipeGesture_new();
QSwipeGesture* QSwipeGesture_new2(QObject* parent);
QMetaObject* QSwipeGesture_MetaObject(const QSwipeGesture* self);
void* QSwipeGesture_Metacast(QSwipeGesture* self, const char* param1);
int QSwipeGesture_Metacall(QSwipeGesture* self, int param1, int param2, void** param3);
void QSwipeGesture_OnMetacall(QSwipeGesture* self, intptr_t slot);
int QSwipeGesture_QBaseMetacall(QSwipeGesture* self, int param1, int param2, void** param3);
libqt_string QSwipeGesture_Tr(const char* s);
int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self);
int QSwipeGesture_VerticalDirection(const QSwipeGesture* self);
double QSwipeGesture_SwipeAngle(const QSwipeGesture* self);
void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value);
libqt_string QSwipeGesture_Tr2(const char* s, const char* c);
libqt_string QSwipeGesture_Tr3(const char* s, const char* c, int n);
bool QSwipeGesture_Event(QSwipeGesture* self, QEvent* event);
void QSwipeGesture_OnEvent(QSwipeGesture* self, intptr_t slot);
bool QSwipeGesture_QBaseEvent(QSwipeGesture* self, QEvent* event);
bool QSwipeGesture_EventFilter(QSwipeGesture* self, QObject* watched, QEvent* event);
void QSwipeGesture_OnEventFilter(QSwipeGesture* self, intptr_t slot);
bool QSwipeGesture_QBaseEventFilter(QSwipeGesture* self, QObject* watched, QEvent* event);
void QSwipeGesture_TimerEvent(QSwipeGesture* self, QTimerEvent* event);
void QSwipeGesture_OnTimerEvent(QSwipeGesture* self, intptr_t slot);
void QSwipeGesture_QBaseTimerEvent(QSwipeGesture* self, QTimerEvent* event);
void QSwipeGesture_ChildEvent(QSwipeGesture* self, QChildEvent* event);
void QSwipeGesture_OnChildEvent(QSwipeGesture* self, intptr_t slot);
void QSwipeGesture_QBaseChildEvent(QSwipeGesture* self, QChildEvent* event);
void QSwipeGesture_CustomEvent(QSwipeGesture* self, QEvent* event);
void QSwipeGesture_OnCustomEvent(QSwipeGesture* self, intptr_t slot);
void QSwipeGesture_QBaseCustomEvent(QSwipeGesture* self, QEvent* event);
void QSwipeGesture_ConnectNotify(QSwipeGesture* self, QMetaMethod* signal);
void QSwipeGesture_OnConnectNotify(QSwipeGesture* self, intptr_t slot);
void QSwipeGesture_QBaseConnectNotify(QSwipeGesture* self, QMetaMethod* signal);
void QSwipeGesture_DisconnectNotify(QSwipeGesture* self, QMetaMethod* signal);
void QSwipeGesture_OnDisconnectNotify(QSwipeGesture* self, intptr_t slot);
void QSwipeGesture_QBaseDisconnectNotify(QSwipeGesture* self, QMetaMethod* signal);
QObject* QSwipeGesture_Sender(const QSwipeGesture* self);
void QSwipeGesture_OnSender(const QSwipeGesture* self, intptr_t slot);
QObject* QSwipeGesture_QBaseSender(const QSwipeGesture* self);
int QSwipeGesture_SenderSignalIndex(const QSwipeGesture* self);
void QSwipeGesture_OnSenderSignalIndex(const QSwipeGesture* self, intptr_t slot);
int QSwipeGesture_QBaseSenderSignalIndex(const QSwipeGesture* self);
int QSwipeGesture_Receivers(const QSwipeGesture* self, const char* signal);
void QSwipeGesture_OnReceivers(const QSwipeGesture* self, intptr_t slot);
int QSwipeGesture_QBaseReceivers(const QSwipeGesture* self, const char* signal);
bool QSwipeGesture_IsSignalConnected(const QSwipeGesture* self, QMetaMethod* signal);
void QSwipeGesture_OnIsSignalConnected(const QSwipeGesture* self, intptr_t slot);
bool QSwipeGesture_QBaseIsSignalConnected(const QSwipeGesture* self, QMetaMethod* signal);
void QSwipeGesture_Delete(QSwipeGesture* self);

QTapGesture* QTapGesture_new();
QTapGesture* QTapGesture_new2(QObject* parent);
QMetaObject* QTapGesture_MetaObject(const QTapGesture* self);
void* QTapGesture_Metacast(QTapGesture* self, const char* param1);
int QTapGesture_Metacall(QTapGesture* self, int param1, int param2, void** param3);
void QTapGesture_OnMetacall(QTapGesture* self, intptr_t slot);
int QTapGesture_QBaseMetacall(QTapGesture* self, int param1, int param2, void** param3);
libqt_string QTapGesture_Tr(const char* s);
QPointF* QTapGesture_Position(const QTapGesture* self);
void QTapGesture_SetPosition(QTapGesture* self, QPointF* pos);
libqt_string QTapGesture_Tr2(const char* s, const char* c);
libqt_string QTapGesture_Tr3(const char* s, const char* c, int n);
bool QTapGesture_Event(QTapGesture* self, QEvent* event);
void QTapGesture_OnEvent(QTapGesture* self, intptr_t slot);
bool QTapGesture_QBaseEvent(QTapGesture* self, QEvent* event);
bool QTapGesture_EventFilter(QTapGesture* self, QObject* watched, QEvent* event);
void QTapGesture_OnEventFilter(QTapGesture* self, intptr_t slot);
bool QTapGesture_QBaseEventFilter(QTapGesture* self, QObject* watched, QEvent* event);
void QTapGesture_TimerEvent(QTapGesture* self, QTimerEvent* event);
void QTapGesture_OnTimerEvent(QTapGesture* self, intptr_t slot);
void QTapGesture_QBaseTimerEvent(QTapGesture* self, QTimerEvent* event);
void QTapGesture_ChildEvent(QTapGesture* self, QChildEvent* event);
void QTapGesture_OnChildEvent(QTapGesture* self, intptr_t slot);
void QTapGesture_QBaseChildEvent(QTapGesture* self, QChildEvent* event);
void QTapGesture_CustomEvent(QTapGesture* self, QEvent* event);
void QTapGesture_OnCustomEvent(QTapGesture* self, intptr_t slot);
void QTapGesture_QBaseCustomEvent(QTapGesture* self, QEvent* event);
void QTapGesture_ConnectNotify(QTapGesture* self, QMetaMethod* signal);
void QTapGesture_OnConnectNotify(QTapGesture* self, intptr_t slot);
void QTapGesture_QBaseConnectNotify(QTapGesture* self, QMetaMethod* signal);
void QTapGesture_DisconnectNotify(QTapGesture* self, QMetaMethod* signal);
void QTapGesture_OnDisconnectNotify(QTapGesture* self, intptr_t slot);
void QTapGesture_QBaseDisconnectNotify(QTapGesture* self, QMetaMethod* signal);
QObject* QTapGesture_Sender(const QTapGesture* self);
void QTapGesture_OnSender(const QTapGesture* self, intptr_t slot);
QObject* QTapGesture_QBaseSender(const QTapGesture* self);
int QTapGesture_SenderSignalIndex(const QTapGesture* self);
void QTapGesture_OnSenderSignalIndex(const QTapGesture* self, intptr_t slot);
int QTapGesture_QBaseSenderSignalIndex(const QTapGesture* self);
int QTapGesture_Receivers(const QTapGesture* self, const char* signal);
void QTapGesture_OnReceivers(const QTapGesture* self, intptr_t slot);
int QTapGesture_QBaseReceivers(const QTapGesture* self, const char* signal);
bool QTapGesture_IsSignalConnected(const QTapGesture* self, QMetaMethod* signal);
void QTapGesture_OnIsSignalConnected(const QTapGesture* self, intptr_t slot);
bool QTapGesture_QBaseIsSignalConnected(const QTapGesture* self, QMetaMethod* signal);
void QTapGesture_Delete(QTapGesture* self);

QTapAndHoldGesture* QTapAndHoldGesture_new();
QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent);
QMetaObject* QTapAndHoldGesture_MetaObject(const QTapAndHoldGesture* self);
void* QTapAndHoldGesture_Metacast(QTapAndHoldGesture* self, const char* param1);
int QTapAndHoldGesture_Metacall(QTapAndHoldGesture* self, int param1, int param2, void** param3);
void QTapAndHoldGesture_OnMetacall(QTapAndHoldGesture* self, intptr_t slot);
int QTapAndHoldGesture_QBaseMetacall(QTapAndHoldGesture* self, int param1, int param2, void** param3);
libqt_string QTapAndHoldGesture_Tr(const char* s);
QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self);
void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, QPointF* pos);
void QTapAndHoldGesture_SetTimeout(int msecs);
int QTapAndHoldGesture_Timeout();
libqt_string QTapAndHoldGesture_Tr2(const char* s, const char* c);
libqt_string QTapAndHoldGesture_Tr3(const char* s, const char* c, int n);
bool QTapAndHoldGesture_Event(QTapAndHoldGesture* self, QEvent* event);
void QTapAndHoldGesture_OnEvent(QTapAndHoldGesture* self, intptr_t slot);
bool QTapAndHoldGesture_QBaseEvent(QTapAndHoldGesture* self, QEvent* event);
bool QTapAndHoldGesture_EventFilter(QTapAndHoldGesture* self, QObject* watched, QEvent* event);
void QTapAndHoldGesture_OnEventFilter(QTapAndHoldGesture* self, intptr_t slot);
bool QTapAndHoldGesture_QBaseEventFilter(QTapAndHoldGesture* self, QObject* watched, QEvent* event);
void QTapAndHoldGesture_TimerEvent(QTapAndHoldGesture* self, QTimerEvent* event);
void QTapAndHoldGesture_OnTimerEvent(QTapAndHoldGesture* self, intptr_t slot);
void QTapAndHoldGesture_QBaseTimerEvent(QTapAndHoldGesture* self, QTimerEvent* event);
void QTapAndHoldGesture_ChildEvent(QTapAndHoldGesture* self, QChildEvent* event);
void QTapAndHoldGesture_OnChildEvent(QTapAndHoldGesture* self, intptr_t slot);
void QTapAndHoldGesture_QBaseChildEvent(QTapAndHoldGesture* self, QChildEvent* event);
void QTapAndHoldGesture_CustomEvent(QTapAndHoldGesture* self, QEvent* event);
void QTapAndHoldGesture_OnCustomEvent(QTapAndHoldGesture* self, intptr_t slot);
void QTapAndHoldGesture_QBaseCustomEvent(QTapAndHoldGesture* self, QEvent* event);
void QTapAndHoldGesture_ConnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal);
void QTapAndHoldGesture_OnConnectNotify(QTapAndHoldGesture* self, intptr_t slot);
void QTapAndHoldGesture_QBaseConnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal);
void QTapAndHoldGesture_DisconnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal);
void QTapAndHoldGesture_OnDisconnectNotify(QTapAndHoldGesture* self, intptr_t slot);
void QTapAndHoldGesture_QBaseDisconnectNotify(QTapAndHoldGesture* self, QMetaMethod* signal);
QObject* QTapAndHoldGesture_Sender(const QTapAndHoldGesture* self);
void QTapAndHoldGesture_OnSender(const QTapAndHoldGesture* self, intptr_t slot);
QObject* QTapAndHoldGesture_QBaseSender(const QTapAndHoldGesture* self);
int QTapAndHoldGesture_SenderSignalIndex(const QTapAndHoldGesture* self);
void QTapAndHoldGesture_OnSenderSignalIndex(const QTapAndHoldGesture* self, intptr_t slot);
int QTapAndHoldGesture_QBaseSenderSignalIndex(const QTapAndHoldGesture* self);
int QTapAndHoldGesture_Receivers(const QTapAndHoldGesture* self, const char* signal);
void QTapAndHoldGesture_OnReceivers(const QTapAndHoldGesture* self, intptr_t slot);
int QTapAndHoldGesture_QBaseReceivers(const QTapAndHoldGesture* self, const char* signal);
bool QTapAndHoldGesture_IsSignalConnected(const QTapAndHoldGesture* self, QMetaMethod* signal);
void QTapAndHoldGesture_OnIsSignalConnected(const QTapAndHoldGesture* self, intptr_t slot);
bool QTapAndHoldGesture_QBaseIsSignalConnected(const QTapAndHoldGesture* self, QMetaMethod* signal);
void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self);

QGestureEvent* QGestureEvent_new(libqt_list /* of QGesture* */ gestures);
QGestureEvent* QGestureEvent_new2(QGestureEvent* param1);
libqt_list /* of QGesture* */ QGestureEvent_Gestures(const QGestureEvent* self);
QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal);
libqt_list /* of QGesture* */ QGestureEvent_ActiveGestures(const QGestureEvent* self);
libqt_list /* of QGesture* */ QGestureEvent_CanceledGestures(const QGestureEvent* self);
void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2);
void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1);
void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1);
bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1);
void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2);
void QGestureEvent_AcceptWithQtGestureType(QGestureEvent* self, int param1);
void QGestureEvent_IgnoreWithQtGestureType(QGestureEvent* self, int param1);
bool QGestureEvent_IsAcceptedWithQtGestureType(const QGestureEvent* self, int param1);
void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget);
QWidget* QGestureEvent_Widget(const QGestureEvent* self);
QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint);
QEvent* QGestureEvent_Clone(const QGestureEvent* self);
void QGestureEvent_OnClone(const QGestureEvent* self, intptr_t slot);
QEvent* QGestureEvent_QBaseClone(const QGestureEvent* self);
void QGestureEvent_Delete(QGestureEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
