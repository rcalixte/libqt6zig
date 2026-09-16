#pragma once
#ifndef QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_H
#define QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuickAttachedPropertyPropagator QQuickAttachedPropertyPropagator;
typedef struct QTimerEvent QTimerEvent;
#endif

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_new();
QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_new2(QObject* parent);
QMetaObject* QQuickAttachedPropertyPropagator_MetaObject(const QQuickAttachedPropertyPropagator* self);
void* QQuickAttachedPropertyPropagator_Metacast(QQuickAttachedPropertyPropagator* self, const char* param1);
int QQuickAttachedPropertyPropagator_Metacall(QQuickAttachedPropertyPropagator* self, int param1, int param2, void** param3);
libqt_string QQuickAttachedPropertyPropagator_Tr(const char* s);
libqt_list /* of QQuickAttachedPropertyPropagator* */ QQuickAttachedPropertyPropagator_AttachedChildren(const QQuickAttachedPropertyPropagator* self);
QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_AttachedParent(const QQuickAttachedPropertyPropagator* self);
void QQuickAttachedPropertyPropagator_AttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent);
libqt_string QQuickAttachedPropertyPropagator_Tr2(const char* s, const char* c);
libqt_string QQuickAttachedPropertyPropagator_Tr3(const char* s, const char* c, int n);
void QQuickAttachedPropertyPropagator_OnMetaObject(const QQuickAttachedPropertyPropagator* self, intptr_t slot);
QMetaObject* QQuickAttachedPropertyPropagator_SuperMetaObject(const QQuickAttachedPropertyPropagator* self);
void QQuickAttachedPropertyPropagator_OnMetacast(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void* QQuickAttachedPropertyPropagator_SuperMetacast(QQuickAttachedPropertyPropagator* self, const char* param1);
void QQuickAttachedPropertyPropagator_OnMetacall(QQuickAttachedPropertyPropagator* self, intptr_t slot);
int QQuickAttachedPropertyPropagator_SuperMetacall(QQuickAttachedPropertyPropagator* self, int param1, int param2, void** param3);
void QQuickAttachedPropertyPropagator_OnAttachedParentChange(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperAttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent);
bool QQuickAttachedPropertyPropagator_Event(QQuickAttachedPropertyPropagator* self, QEvent* event);
void QQuickAttachedPropertyPropagator_OnEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot);
bool QQuickAttachedPropertyPropagator_SuperEvent(QQuickAttachedPropertyPropagator* self, QEvent* event);
bool QQuickAttachedPropertyPropagator_EventFilter(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event);
void QQuickAttachedPropertyPropagator_OnEventFilter(QQuickAttachedPropertyPropagator* self, intptr_t slot);
bool QQuickAttachedPropertyPropagator_SuperEventFilter(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event);
void QQuickAttachedPropertyPropagator_TimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event);
void QQuickAttachedPropertyPropagator_OnTimerEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperTimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event);
void QQuickAttachedPropertyPropagator_ChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event);
void QQuickAttachedPropertyPropagator_OnChildEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event);
void QQuickAttachedPropertyPropagator_CustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event);
void QQuickAttachedPropertyPropagator_OnCustomEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperCustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event);
void QQuickAttachedPropertyPropagator_ConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
void QQuickAttachedPropertyPropagator_OnConnectNotify(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
void QQuickAttachedPropertyPropagator_DisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
void QQuickAttachedPropertyPropagator_OnDisconnectNotify(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperDisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
void QQuickAttachedPropertyPropagator_Initialize(QQuickAttachedPropertyPropagator* self);
void QQuickAttachedPropertyPropagator_OnInitialize(QQuickAttachedPropertyPropagator* self, intptr_t slot);
void QQuickAttachedPropertyPropagator_SuperInitialize(QQuickAttachedPropertyPropagator* self);
QObject* QQuickAttachedPropertyPropagator_Sender(const QQuickAttachedPropertyPropagator* self);
void QQuickAttachedPropertyPropagator_OnSender(const QQuickAttachedPropertyPropagator* self, intptr_t slot);
QObject* QQuickAttachedPropertyPropagator_SuperSender(const QQuickAttachedPropertyPropagator* self);
int QQuickAttachedPropertyPropagator_SenderSignalIndex(const QQuickAttachedPropertyPropagator* self);
void QQuickAttachedPropertyPropagator_OnSenderSignalIndex(const QQuickAttachedPropertyPropagator* self, intptr_t slot);
int QQuickAttachedPropertyPropagator_SuperSenderSignalIndex(const QQuickAttachedPropertyPropagator* self);
int QQuickAttachedPropertyPropagator_Receivers(const QQuickAttachedPropertyPropagator* self, const char* signal);
void QQuickAttachedPropertyPropagator_OnReceivers(const QQuickAttachedPropertyPropagator* self, intptr_t slot);
int QQuickAttachedPropertyPropagator_SuperReceivers(const QQuickAttachedPropertyPropagator* self, const char* signal);
bool QQuickAttachedPropertyPropagator_IsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
void QQuickAttachedPropertyPropagator_OnIsSignalConnected(const QQuickAttachedPropertyPropagator* self, intptr_t slot);
bool QQuickAttachedPropertyPropagator_SuperIsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal);
void QQuickAttachedPropertyPropagator_Delete(QQuickAttachedPropertyPropagator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
