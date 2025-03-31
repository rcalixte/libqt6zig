#pragma once
#ifndef SRCC_LIBQICONENGINEPLUGIN_H
#define SRCC_LIBQICONENGINEPLUGIN_H

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
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QIconEnginePlugin* QIconEnginePlugin_new();
QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent);
QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self);
void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1);
int QIconEnginePlugin_Metacall(QIconEnginePlugin* self, int param1, int param2, void** param3);
void QIconEnginePlugin_OnMetacall(QIconEnginePlugin* self, intptr_t slot);
int QIconEnginePlugin_QBaseMetacall(QIconEnginePlugin* self, int param1, int param2, void** param3);
libqt_string QIconEnginePlugin_Tr(const char* s);
QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, libqt_string filename);
void QIconEnginePlugin_OnCreate(QIconEnginePlugin* self, intptr_t slot);
QIconEngine* QIconEnginePlugin_QBaseCreate(QIconEnginePlugin* self, libqt_string filename);
libqt_string QIconEnginePlugin_Tr2(const char* s, const char* c);
libqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n);
bool QIconEnginePlugin_Event(QIconEnginePlugin* self, QEvent* event);
void QIconEnginePlugin_OnEvent(QIconEnginePlugin* self, intptr_t slot);
bool QIconEnginePlugin_QBaseEvent(QIconEnginePlugin* self, QEvent* event);
bool QIconEnginePlugin_EventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event);
void QIconEnginePlugin_OnEventFilter(QIconEnginePlugin* self, intptr_t slot);
bool QIconEnginePlugin_QBaseEventFilter(QIconEnginePlugin* self, QObject* watched, QEvent* event);
void QIconEnginePlugin_TimerEvent(QIconEnginePlugin* self, QTimerEvent* event);
void QIconEnginePlugin_OnTimerEvent(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_QBaseTimerEvent(QIconEnginePlugin* self, QTimerEvent* event);
void QIconEnginePlugin_ChildEvent(QIconEnginePlugin* self, QChildEvent* event);
void QIconEnginePlugin_OnChildEvent(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_QBaseChildEvent(QIconEnginePlugin* self, QChildEvent* event);
void QIconEnginePlugin_CustomEvent(QIconEnginePlugin* self, QEvent* event);
void QIconEnginePlugin_OnCustomEvent(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_QBaseCustomEvent(QIconEnginePlugin* self, QEvent* event);
void QIconEnginePlugin_ConnectNotify(QIconEnginePlugin* self, QMetaMethod* signal);
void QIconEnginePlugin_OnConnectNotify(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_QBaseConnectNotify(QIconEnginePlugin* self, QMetaMethod* signal);
void QIconEnginePlugin_DisconnectNotify(QIconEnginePlugin* self, QMetaMethod* signal);
void QIconEnginePlugin_OnDisconnectNotify(QIconEnginePlugin* self, intptr_t slot);
void QIconEnginePlugin_QBaseDisconnectNotify(QIconEnginePlugin* self, QMetaMethod* signal);
QObject* QIconEnginePlugin_Sender(const QIconEnginePlugin* self);
void QIconEnginePlugin_OnSender(const QIconEnginePlugin* self, intptr_t slot);
QObject* QIconEnginePlugin_QBaseSender(const QIconEnginePlugin* self);
int QIconEnginePlugin_SenderSignalIndex(const QIconEnginePlugin* self);
void QIconEnginePlugin_OnSenderSignalIndex(const QIconEnginePlugin* self, intptr_t slot);
int QIconEnginePlugin_QBaseSenderSignalIndex(const QIconEnginePlugin* self);
int QIconEnginePlugin_Receivers(const QIconEnginePlugin* self, const char* signal);
void QIconEnginePlugin_OnReceivers(const QIconEnginePlugin* self, intptr_t slot);
int QIconEnginePlugin_QBaseReceivers(const QIconEnginePlugin* self, const char* signal);
bool QIconEnginePlugin_IsSignalConnected(const QIconEnginePlugin* self, QMetaMethod* signal);
void QIconEnginePlugin_OnIsSignalConnected(const QIconEnginePlugin* self, intptr_t slot);
bool QIconEnginePlugin_QBaseIsSignalConnected(const QIconEnginePlugin* self, QMetaMethod* signal);
void QIconEnginePlugin_Delete(QIconEnginePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
