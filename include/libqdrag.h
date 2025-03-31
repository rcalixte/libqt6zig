#pragma once
#ifndef SRCC_LIBQDRAG_H
#define SRCC_LIBQDRAG_H

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
typedef struct QDrag QDrag;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QDrag* QDrag_new(QObject* dragSource);
QMetaObject* QDrag_MetaObject(const QDrag* self);
void* QDrag_Metacast(QDrag* self, const char* param1);
int QDrag_Metacall(QDrag* self, int param1, int param2, void** param3);
void QDrag_OnMetacall(QDrag* self, intptr_t slot);
int QDrag_QBaseMetacall(QDrag* self, int param1, int param2, void** param3);
libqt_string QDrag_Tr(const char* s);
void QDrag_SetMimeData(QDrag* self, QMimeData* data);
QMimeData* QDrag_MimeData(const QDrag* self);
void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap);
QPixmap* QDrag_Pixmap(const QDrag* self);
void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot);
QPoint* QDrag_HotSpot(const QDrag* self);
QObject* QDrag_Source(const QDrag* self);
QObject* QDrag_Target(const QDrag* self);
int QDrag_Exec(QDrag* self);
int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction);
void QDrag_SetDragCursor(QDrag* self, QPixmap* cursor, int action);
QPixmap* QDrag_DragCursor(const QDrag* self, int action);
int QDrag_SupportedActions(const QDrag* self);
int QDrag_DefaultAction(const QDrag* self);
void QDrag_Cancel();
void QDrag_ActionChanged(QDrag* self, int action);
void QDrag_Connect_ActionChanged(QDrag* self, intptr_t slot);
void QDrag_TargetChanged(QDrag* self, QObject* newTarget);
void QDrag_Connect_TargetChanged(QDrag* self, intptr_t slot);
libqt_string QDrag_Tr2(const char* s, const char* c);
libqt_string QDrag_Tr3(const char* s, const char* c, int n);
int QDrag_Exec1(QDrag* self, int supportedActions);
bool QDrag_Event(QDrag* self, QEvent* event);
void QDrag_OnEvent(QDrag* self, intptr_t slot);
bool QDrag_QBaseEvent(QDrag* self, QEvent* event);
bool QDrag_EventFilter(QDrag* self, QObject* watched, QEvent* event);
void QDrag_OnEventFilter(QDrag* self, intptr_t slot);
bool QDrag_QBaseEventFilter(QDrag* self, QObject* watched, QEvent* event);
void QDrag_TimerEvent(QDrag* self, QTimerEvent* event);
void QDrag_OnTimerEvent(QDrag* self, intptr_t slot);
void QDrag_QBaseTimerEvent(QDrag* self, QTimerEvent* event);
void QDrag_ChildEvent(QDrag* self, QChildEvent* event);
void QDrag_OnChildEvent(QDrag* self, intptr_t slot);
void QDrag_QBaseChildEvent(QDrag* self, QChildEvent* event);
void QDrag_CustomEvent(QDrag* self, QEvent* event);
void QDrag_OnCustomEvent(QDrag* self, intptr_t slot);
void QDrag_QBaseCustomEvent(QDrag* self, QEvent* event);
void QDrag_ConnectNotify(QDrag* self, QMetaMethod* signal);
void QDrag_OnConnectNotify(QDrag* self, intptr_t slot);
void QDrag_QBaseConnectNotify(QDrag* self, QMetaMethod* signal);
void QDrag_DisconnectNotify(QDrag* self, QMetaMethod* signal);
void QDrag_OnDisconnectNotify(QDrag* self, intptr_t slot);
void QDrag_QBaseDisconnectNotify(QDrag* self, QMetaMethod* signal);
QObject* QDrag_Sender(const QDrag* self);
void QDrag_OnSender(const QDrag* self, intptr_t slot);
QObject* QDrag_QBaseSender(const QDrag* self);
int QDrag_SenderSignalIndex(const QDrag* self);
void QDrag_OnSenderSignalIndex(const QDrag* self, intptr_t slot);
int QDrag_QBaseSenderSignalIndex(const QDrag* self);
int QDrag_Receivers(const QDrag* self, const char* signal);
void QDrag_OnReceivers(const QDrag* self, intptr_t slot);
int QDrag_QBaseReceivers(const QDrag* self, const char* signal);
bool QDrag_IsSignalConnected(const QDrag* self, QMetaMethod* signal);
void QDrag_OnIsSignalConnected(const QDrag* self, intptr_t slot);
bool QDrag_QBaseIsSignalConnected(const QDrag* self, QMetaMethod* signal);
void QDrag_Delete(QDrag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
