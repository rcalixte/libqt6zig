#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQTOUCH3DINPUTHANDLER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQTOUCH3DINPUTHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Q3DInputHandler Q3DInputHandler;
typedef struct QAbstract3DInputHandler QAbstract3DInputHandler;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouch3DInputHandler QTouch3DInputHandler;
typedef struct QTouchEvent QTouchEvent;
typedef struct QWheelEvent QWheelEvent;
#endif

QTouch3DInputHandler* QTouch3DInputHandler_new();
QTouch3DInputHandler* QTouch3DInputHandler_new2(QObject* parent);
QMetaObject* QTouch3DInputHandler_MetaObject(const QTouch3DInputHandler* self);
void* QTouch3DInputHandler_Metacast(QTouch3DInputHandler* self, const char* param1);
int QTouch3DInputHandler_Metacall(QTouch3DInputHandler* self, int param1, int param2, void** param3);
libqt_string QTouch3DInputHandler_Tr(const char* s);
void QTouch3DInputHandler_TouchEvent(QTouch3DInputHandler* self, QTouchEvent* event);
libqt_string QTouch3DInputHandler_Tr2(const char* s, const char* c);
libqt_string QTouch3DInputHandler_Tr3(const char* s, const char* c, int n);
void QTouch3DInputHandler_OnMetaObject(QTouch3DInputHandler* self, intptr_t slot);
QMetaObject* QTouch3DInputHandler_SuperMetaObject(const QTouch3DInputHandler* self);
void QTouch3DInputHandler_OnMetacast(QTouch3DInputHandler* self, intptr_t slot);
void* QTouch3DInputHandler_SuperMetacast(QTouch3DInputHandler* self, const char* param1);
void QTouch3DInputHandler_OnMetacall(QTouch3DInputHandler* self, intptr_t slot);
int QTouch3DInputHandler_SuperMetacall(QTouch3DInputHandler* self, int param1, int param2, void** param3);
void QTouch3DInputHandler_OnTouchEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperTouchEvent(QTouch3DInputHandler* self, QTouchEvent* event);
void QTouch3DInputHandler_MousePressEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QTouch3DInputHandler_OnMousePressEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperMousePressEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QTouch3DInputHandler_MouseReleaseEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QTouch3DInputHandler_OnMouseReleaseEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperMouseReleaseEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QTouch3DInputHandler_MouseMoveEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QTouch3DInputHandler_OnMouseMoveEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperMouseMoveEvent(QTouch3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void QTouch3DInputHandler_WheelEvent(QTouch3DInputHandler* self, QWheelEvent* event);
void QTouch3DInputHandler_OnWheelEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperWheelEvent(QTouch3DInputHandler* self, QWheelEvent* event);
void QTouch3DInputHandler_MouseDoubleClickEvent(QTouch3DInputHandler* self, QMouseEvent* event);
void QTouch3DInputHandler_OnMouseDoubleClickEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperMouseDoubleClickEvent(QTouch3DInputHandler* self, QMouseEvent* event);
bool QTouch3DInputHandler_Event(QTouch3DInputHandler* self, QEvent* event);
void QTouch3DInputHandler_OnEvent(QTouch3DInputHandler* self, intptr_t slot);
bool QTouch3DInputHandler_SuperEvent(QTouch3DInputHandler* self, QEvent* event);
bool QTouch3DInputHandler_EventFilter(QTouch3DInputHandler* self, QObject* watched, QEvent* event);
void QTouch3DInputHandler_OnEventFilter(QTouch3DInputHandler* self, intptr_t slot);
bool QTouch3DInputHandler_SuperEventFilter(QTouch3DInputHandler* self, QObject* watched, QEvent* event);
void QTouch3DInputHandler_TimerEvent(QTouch3DInputHandler* self, QTimerEvent* event);
void QTouch3DInputHandler_OnTimerEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperTimerEvent(QTouch3DInputHandler* self, QTimerEvent* event);
void QTouch3DInputHandler_ChildEvent(QTouch3DInputHandler* self, QChildEvent* event);
void QTouch3DInputHandler_OnChildEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperChildEvent(QTouch3DInputHandler* self, QChildEvent* event);
void QTouch3DInputHandler_CustomEvent(QTouch3DInputHandler* self, QEvent* event);
void QTouch3DInputHandler_OnCustomEvent(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperCustomEvent(QTouch3DInputHandler* self, QEvent* event);
void QTouch3DInputHandler_ConnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal);
void QTouch3DInputHandler_OnConnectNotify(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperConnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal);
void QTouch3DInputHandler_DisconnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal);
void QTouch3DInputHandler_OnDisconnectNotify(QTouch3DInputHandler* self, intptr_t slot);
void QTouch3DInputHandler_SuperDisconnectNotify(QTouch3DInputHandler* self, const QMetaMethod* signal);
void QTouch3DInputHandler_SetPrevDistance(QTouch3DInputHandler* self, int distance);
int QTouch3DInputHandler_PrevDistance(const QTouch3DInputHandler* self);
void QTouch3DInputHandler_SetPreviousInputPos(QTouch3DInputHandler* self, const QPoint* position);
QPoint* QTouch3DInputHandler_PreviousInputPos(const QTouch3DInputHandler* self);
QObject* QTouch3DInputHandler_Sender(const QTouch3DInputHandler* self);
int QTouch3DInputHandler_SenderSignalIndex(const QTouch3DInputHandler* self);
int QTouch3DInputHandler_Receivers(const QTouch3DInputHandler* self, const char* signal);
bool QTouch3DInputHandler_IsSignalConnected(const QTouch3DInputHandler* self, const QMetaMethod* signal);
void QTouch3DInputHandler_Delete(QTouch3DInputHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
