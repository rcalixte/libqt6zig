#pragma once
#ifndef SRCC_LIBQGENERICPLUGIN_H
#define SRCC_LIBQGENERICPLUGIN_H

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
typedef struct QGenericPlugin QGenericPlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGenericPlugin* QGenericPlugin_new();
QGenericPlugin* QGenericPlugin_new2(QObject* parent);
QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self);
void* QGenericPlugin_Metacast(QGenericPlugin* self, const char* param1);
int QGenericPlugin_Metacall(QGenericPlugin* self, int param1, int param2, void** param3);
void QGenericPlugin_OnMetacall(QGenericPlugin* self, intptr_t slot);
int QGenericPlugin_QBaseMetacall(QGenericPlugin* self, int param1, int param2, void** param3);
libqt_string QGenericPlugin_Tr(const char* s);
QObject* QGenericPlugin_Create(QGenericPlugin* self, libqt_string name, libqt_string spec);
void QGenericPlugin_OnCreate(QGenericPlugin* self, intptr_t slot);
QObject* QGenericPlugin_QBaseCreate(QGenericPlugin* self, libqt_string name, libqt_string spec);
libqt_string QGenericPlugin_Tr2(const char* s, const char* c);
libqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n);
bool QGenericPlugin_Event(QGenericPlugin* self, QEvent* event);
void QGenericPlugin_OnEvent(QGenericPlugin* self, intptr_t slot);
bool QGenericPlugin_QBaseEvent(QGenericPlugin* self, QEvent* event);
bool QGenericPlugin_EventFilter(QGenericPlugin* self, QObject* watched, QEvent* event);
void QGenericPlugin_OnEventFilter(QGenericPlugin* self, intptr_t slot);
bool QGenericPlugin_QBaseEventFilter(QGenericPlugin* self, QObject* watched, QEvent* event);
void QGenericPlugin_TimerEvent(QGenericPlugin* self, QTimerEvent* event);
void QGenericPlugin_OnTimerEvent(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_QBaseTimerEvent(QGenericPlugin* self, QTimerEvent* event);
void QGenericPlugin_ChildEvent(QGenericPlugin* self, QChildEvent* event);
void QGenericPlugin_OnChildEvent(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_QBaseChildEvent(QGenericPlugin* self, QChildEvent* event);
void QGenericPlugin_CustomEvent(QGenericPlugin* self, QEvent* event);
void QGenericPlugin_OnCustomEvent(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_QBaseCustomEvent(QGenericPlugin* self, QEvent* event);
void QGenericPlugin_ConnectNotify(QGenericPlugin* self, QMetaMethod* signal);
void QGenericPlugin_OnConnectNotify(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_QBaseConnectNotify(QGenericPlugin* self, QMetaMethod* signal);
void QGenericPlugin_DisconnectNotify(QGenericPlugin* self, QMetaMethod* signal);
void QGenericPlugin_OnDisconnectNotify(QGenericPlugin* self, intptr_t slot);
void QGenericPlugin_QBaseDisconnectNotify(QGenericPlugin* self, QMetaMethod* signal);
QObject* QGenericPlugin_Sender(const QGenericPlugin* self);
void QGenericPlugin_OnSender(const QGenericPlugin* self, intptr_t slot);
QObject* QGenericPlugin_QBaseSender(const QGenericPlugin* self);
int QGenericPlugin_SenderSignalIndex(const QGenericPlugin* self);
void QGenericPlugin_OnSenderSignalIndex(const QGenericPlugin* self, intptr_t slot);
int QGenericPlugin_QBaseSenderSignalIndex(const QGenericPlugin* self);
int QGenericPlugin_Receivers(const QGenericPlugin* self, const char* signal);
void QGenericPlugin_OnReceivers(const QGenericPlugin* self, intptr_t slot);
int QGenericPlugin_QBaseReceivers(const QGenericPlugin* self, const char* signal);
bool QGenericPlugin_IsSignalConnected(const QGenericPlugin* self, QMetaMethod* signal);
void QGenericPlugin_OnIsSignalConnected(const QGenericPlugin* self, intptr_t slot);
bool QGenericPlugin_QBaseIsSignalConnected(const QGenericPlugin* self, QMetaMethod* signal);
void QGenericPlugin_Delete(QGenericPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
