#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DINPUTHANDLER_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DINPUTHANDLER_H

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
typedef struct QTouchEvent QTouchEvent;
typedef struct QWheelEvent QWheelEvent;
#endif

Q3DInputHandler* Q3DInputHandler_new();
Q3DInputHandler* Q3DInputHandler_new2(QObject* parent);
QMetaObject* Q3DInputHandler_MetaObject(const Q3DInputHandler* self);
void* Q3DInputHandler_Metacast(Q3DInputHandler* self, const char* param1);
int Q3DInputHandler_Metacall(Q3DInputHandler* self, int param1, int param2, void** param3);
libqt_string Q3DInputHandler_Tr(const char* s);
void Q3DInputHandler_SetRotationEnabled(Q3DInputHandler* self, bool enable);
bool Q3DInputHandler_IsRotationEnabled(const Q3DInputHandler* self);
void Q3DInputHandler_SetZoomEnabled(Q3DInputHandler* self, bool enable);
bool Q3DInputHandler_IsZoomEnabled(const Q3DInputHandler* self);
void Q3DInputHandler_SetSelectionEnabled(Q3DInputHandler* self, bool enable);
bool Q3DInputHandler_IsSelectionEnabled(const Q3DInputHandler* self);
void Q3DInputHandler_SetZoomAtTargetEnabled(Q3DInputHandler* self, bool enable);
bool Q3DInputHandler_IsZoomAtTargetEnabled(const Q3DInputHandler* self);
void Q3DInputHandler_MousePressEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void Q3DInputHandler_MouseReleaseEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void Q3DInputHandler_MouseMoveEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void Q3DInputHandler_WheelEvent(Q3DInputHandler* self, QWheelEvent* event);
void Q3DInputHandler_RotationEnabledChanged(Q3DInputHandler* self, bool enable);
void Q3DInputHandler_Connect_RotationEnabledChanged(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_ZoomEnabledChanged(Q3DInputHandler* self, bool enable);
void Q3DInputHandler_Connect_ZoomEnabledChanged(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SelectionEnabledChanged(Q3DInputHandler* self, bool enable);
void Q3DInputHandler_Connect_SelectionEnabledChanged(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_ZoomAtTargetEnabledChanged(Q3DInputHandler* self, bool enable);
void Q3DInputHandler_Connect_ZoomAtTargetEnabledChanged(Q3DInputHandler* self, intptr_t slot);
libqt_string Q3DInputHandler_Tr2(const char* s, const char* c);
libqt_string Q3DInputHandler_Tr3(const char* s, const char* c, int n);
void Q3DInputHandler_OnMetaObject(Q3DInputHandler* self, intptr_t slot);
QMetaObject* Q3DInputHandler_SuperMetaObject(const Q3DInputHandler* self);
void Q3DInputHandler_OnMetacast(Q3DInputHandler* self, intptr_t slot);
void* Q3DInputHandler_SuperMetacast(Q3DInputHandler* self, const char* param1);
void Q3DInputHandler_OnMetacall(Q3DInputHandler* self, intptr_t slot);
int Q3DInputHandler_SuperMetacall(Q3DInputHandler* self, int param1, int param2, void** param3);
void Q3DInputHandler_OnMousePressEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperMousePressEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void Q3DInputHandler_OnMouseReleaseEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperMouseReleaseEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void Q3DInputHandler_OnMouseMoveEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperMouseMoveEvent(Q3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos);
void Q3DInputHandler_OnWheelEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperWheelEvent(Q3DInputHandler* self, QWheelEvent* event);
void Q3DInputHandler_MouseDoubleClickEvent(Q3DInputHandler* self, QMouseEvent* event);
void Q3DInputHandler_OnMouseDoubleClickEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperMouseDoubleClickEvent(Q3DInputHandler* self, QMouseEvent* event);
void Q3DInputHandler_TouchEvent(Q3DInputHandler* self, QTouchEvent* event);
void Q3DInputHandler_OnTouchEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperTouchEvent(Q3DInputHandler* self, QTouchEvent* event);
bool Q3DInputHandler_Event(Q3DInputHandler* self, QEvent* event);
void Q3DInputHandler_OnEvent(Q3DInputHandler* self, intptr_t slot);
bool Q3DInputHandler_SuperEvent(Q3DInputHandler* self, QEvent* event);
bool Q3DInputHandler_EventFilter(Q3DInputHandler* self, QObject* watched, QEvent* event);
void Q3DInputHandler_OnEventFilter(Q3DInputHandler* self, intptr_t slot);
bool Q3DInputHandler_SuperEventFilter(Q3DInputHandler* self, QObject* watched, QEvent* event);
void Q3DInputHandler_TimerEvent(Q3DInputHandler* self, QTimerEvent* event);
void Q3DInputHandler_OnTimerEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperTimerEvent(Q3DInputHandler* self, QTimerEvent* event);
void Q3DInputHandler_ChildEvent(Q3DInputHandler* self, QChildEvent* event);
void Q3DInputHandler_OnChildEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperChildEvent(Q3DInputHandler* self, QChildEvent* event);
void Q3DInputHandler_CustomEvent(Q3DInputHandler* self, QEvent* event);
void Q3DInputHandler_OnCustomEvent(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperCustomEvent(Q3DInputHandler* self, QEvent* event);
void Q3DInputHandler_ConnectNotify(Q3DInputHandler* self, const QMetaMethod* signal);
void Q3DInputHandler_OnConnectNotify(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperConnectNotify(Q3DInputHandler* self, const QMetaMethod* signal);
void Q3DInputHandler_DisconnectNotify(Q3DInputHandler* self, const QMetaMethod* signal);
void Q3DInputHandler_OnDisconnectNotify(Q3DInputHandler* self, intptr_t slot);
void Q3DInputHandler_SuperDisconnectNotify(Q3DInputHandler* self, const QMetaMethod* signal);
void Q3DInputHandler_SetPrevDistance(Q3DInputHandler* self, int distance);
int Q3DInputHandler_PrevDistance(const Q3DInputHandler* self);
void Q3DInputHandler_SetPreviousInputPos(Q3DInputHandler* self, const QPoint* position);
QPoint* Q3DInputHandler_PreviousInputPos(const Q3DInputHandler* self);
QObject* Q3DInputHandler_Sender(const Q3DInputHandler* self);
int Q3DInputHandler_SenderSignalIndex(const Q3DInputHandler* self);
int Q3DInputHandler_Receivers(const Q3DInputHandler* self, const char* signal);
bool Q3DInputHandler_IsSignalConnected(const Q3DInputHandler* self, const QMetaMethod* signal);
void Q3DInputHandler_Delete(Q3DInputHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
