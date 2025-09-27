#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLVERTEXARRAYOBJECT_H
#define SRC_OPENGLC_LIBQOPENGLVERTEXARRAYOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLVertexArrayObject__Binder)
typedef QOpenGLVertexArrayObject::Binder QOpenGLVertexArrayObject__Binder;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QOpenGLVertexArrayObject QOpenGLVertexArrayObject;
typedef struct QOpenGLVertexArrayObject__Binder QOpenGLVertexArrayObject__Binder;
typedef struct QTimerEvent QTimerEvent;
#endif

QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new();
QOpenGLVertexArrayObject* QOpenGLVertexArrayObject_new2(QObject* parent);
QMetaObject* QOpenGLVertexArrayObject_MetaObject(const QOpenGLVertexArrayObject* self);
void* QOpenGLVertexArrayObject_Metacast(QOpenGLVertexArrayObject* self, const char* param1);
int QOpenGLVertexArrayObject_Metacall(QOpenGLVertexArrayObject* self, int param1, int param2, void** param3);
libqt_string QOpenGLVertexArrayObject_Tr(const char* s);
bool QOpenGLVertexArrayObject_Create(QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_Destroy(QOpenGLVertexArrayObject* self);
bool QOpenGLVertexArrayObject_IsCreated(const QOpenGLVertexArrayObject* self);
uint32_t QOpenGLVertexArrayObject_ObjectId(const QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_Bind(QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_Release(QOpenGLVertexArrayObject* self);
libqt_string QOpenGLVertexArrayObject_Tr2(const char* s, const char* c);
libqt_string QOpenGLVertexArrayObject_Tr3(const char* s, const char* c, int n);
void QOpenGLVertexArrayObject_OnMetacall(QOpenGLVertexArrayObject* self, intptr_t slot);
int QOpenGLVertexArrayObject_QBaseMetacall(QOpenGLVertexArrayObject* self, int param1, int param2, void** param3);
bool QOpenGLVertexArrayObject_Event(QOpenGLVertexArrayObject* self, QEvent* event);
void QOpenGLVertexArrayObject_OnEvent(QOpenGLVertexArrayObject* self, intptr_t slot);
bool QOpenGLVertexArrayObject_QBaseEvent(QOpenGLVertexArrayObject* self, QEvent* event);
bool QOpenGLVertexArrayObject_EventFilter(QOpenGLVertexArrayObject* self, QObject* watched, QEvent* event);
void QOpenGLVertexArrayObject_OnEventFilter(QOpenGLVertexArrayObject* self, intptr_t slot);
bool QOpenGLVertexArrayObject_QBaseEventFilter(QOpenGLVertexArrayObject* self, QObject* watched, QEvent* event);
void QOpenGLVertexArrayObject_TimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
void QOpenGLVertexArrayObject_OnTimerEvent(QOpenGLVertexArrayObject* self, intptr_t slot);
void QOpenGLVertexArrayObject_QBaseTimerEvent(QOpenGLVertexArrayObject* self, QTimerEvent* event);
void QOpenGLVertexArrayObject_ChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
void QOpenGLVertexArrayObject_OnChildEvent(QOpenGLVertexArrayObject* self, intptr_t slot);
void QOpenGLVertexArrayObject_QBaseChildEvent(QOpenGLVertexArrayObject* self, QChildEvent* event);
void QOpenGLVertexArrayObject_CustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
void QOpenGLVertexArrayObject_OnCustomEvent(QOpenGLVertexArrayObject* self, intptr_t slot);
void QOpenGLVertexArrayObject_QBaseCustomEvent(QOpenGLVertexArrayObject* self, QEvent* event);
void QOpenGLVertexArrayObject_ConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
void QOpenGLVertexArrayObject_OnConnectNotify(QOpenGLVertexArrayObject* self, intptr_t slot);
void QOpenGLVertexArrayObject_QBaseConnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
void QOpenGLVertexArrayObject_DisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
void QOpenGLVertexArrayObject_OnDisconnectNotify(QOpenGLVertexArrayObject* self, intptr_t slot);
void QOpenGLVertexArrayObject_QBaseDisconnectNotify(QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
QObject* QOpenGLVertexArrayObject_Sender(const QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_OnSender(const QOpenGLVertexArrayObject* self, intptr_t slot);
QObject* QOpenGLVertexArrayObject_QBaseSender(const QOpenGLVertexArrayObject* self);
int QOpenGLVertexArrayObject_SenderSignalIndex(const QOpenGLVertexArrayObject* self);
void QOpenGLVertexArrayObject_OnSenderSignalIndex(const QOpenGLVertexArrayObject* self, intptr_t slot);
int QOpenGLVertexArrayObject_QBaseSenderSignalIndex(const QOpenGLVertexArrayObject* self);
int QOpenGLVertexArrayObject_Receivers(const QOpenGLVertexArrayObject* self, const char* signal);
void QOpenGLVertexArrayObject_OnReceivers(const QOpenGLVertexArrayObject* self, intptr_t slot);
int QOpenGLVertexArrayObject_QBaseReceivers(const QOpenGLVertexArrayObject* self, const char* signal);
bool QOpenGLVertexArrayObject_IsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
void QOpenGLVertexArrayObject_OnIsSignalConnected(const QOpenGLVertexArrayObject* self, intptr_t slot);
bool QOpenGLVertexArrayObject_QBaseIsSignalConnected(const QOpenGLVertexArrayObject* self, const QMetaMethod* signal);
void QOpenGLVertexArrayObject_Delete(QOpenGLVertexArrayObject* self);

QOpenGLVertexArrayObject__Binder* QOpenGLVertexArrayObject__Binder_new(QOpenGLVertexArrayObject* v);
void QOpenGLVertexArrayObject__Binder_Release(QOpenGLVertexArrayObject__Binder* self);
void QOpenGLVertexArrayObject__Binder_Rebind(QOpenGLVertexArrayObject__Binder* self);
void QOpenGLVertexArrayObject__Binder_Delete(QOpenGLVertexArrayObject__Binder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
