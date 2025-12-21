#pragma once
#ifndef SRC_DESIGNERC_LIBDEFAULT_EXTENSIONFACTORY_H
#define SRC_DESIGNERC_LIBDEFAULT_EXTENSIONFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractExtensionFactory QAbstractExtensionFactory;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QExtensionFactory QExtensionFactory;
typedef struct QExtensionManager QExtensionManager;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QExtensionFactory* QExtensionFactory_new();
QExtensionFactory* QExtensionFactory_new2(QExtensionManager* parent);
QMetaObject* QExtensionFactory_MetaObject(const QExtensionFactory* self);
void* QExtensionFactory_Metacast(QExtensionFactory* self, const char* param1);
int QExtensionFactory_Metacall(QExtensionFactory* self, int param1, int param2, void** param3);
QObject* QExtensionFactory_Extension(const QExtensionFactory* self, QObject* object, const libqt_string iid);
QExtensionManager* QExtensionFactory_ExtensionManager(const QExtensionFactory* self);
QObject* QExtensionFactory_CreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent);
void QExtensionFactory_OnMetacall(QExtensionFactory* self, intptr_t slot);
int QExtensionFactory_QBaseMetacall(QExtensionFactory* self, int param1, int param2, void** param3);
void QExtensionFactory_OnExtension(const QExtensionFactory* self, intptr_t slot);
QObject* QExtensionFactory_QBaseExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid);
void QExtensionFactory_OnCreateExtension(const QExtensionFactory* self, intptr_t slot);
QObject* QExtensionFactory_QBaseCreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent);
bool QExtensionFactory_Event(QExtensionFactory* self, QEvent* event);
void QExtensionFactory_OnEvent(QExtensionFactory* self, intptr_t slot);
bool QExtensionFactory_QBaseEvent(QExtensionFactory* self, QEvent* event);
bool QExtensionFactory_EventFilter(QExtensionFactory* self, QObject* watched, QEvent* event);
void QExtensionFactory_OnEventFilter(QExtensionFactory* self, intptr_t slot);
bool QExtensionFactory_QBaseEventFilter(QExtensionFactory* self, QObject* watched, QEvent* event);
void QExtensionFactory_TimerEvent(QExtensionFactory* self, QTimerEvent* event);
void QExtensionFactory_OnTimerEvent(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_QBaseTimerEvent(QExtensionFactory* self, QTimerEvent* event);
void QExtensionFactory_ChildEvent(QExtensionFactory* self, QChildEvent* event);
void QExtensionFactory_OnChildEvent(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_QBaseChildEvent(QExtensionFactory* self, QChildEvent* event);
void QExtensionFactory_CustomEvent(QExtensionFactory* self, QEvent* event);
void QExtensionFactory_OnCustomEvent(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_QBaseCustomEvent(QExtensionFactory* self, QEvent* event);
void QExtensionFactory_ConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_OnConnectNotify(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_QBaseConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_DisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_OnDisconnectNotify(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_QBaseDisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
QObject* QExtensionFactory_Sender(const QExtensionFactory* self);
void QExtensionFactory_OnSender(const QExtensionFactory* self, intptr_t slot);
QObject* QExtensionFactory_QBaseSender(const QExtensionFactory* self);
int QExtensionFactory_SenderSignalIndex(const QExtensionFactory* self);
void QExtensionFactory_OnSenderSignalIndex(const QExtensionFactory* self, intptr_t slot);
int QExtensionFactory_QBaseSenderSignalIndex(const QExtensionFactory* self);
int QExtensionFactory_Receivers(const QExtensionFactory* self, const char* signal);
void QExtensionFactory_OnReceivers(const QExtensionFactory* self, intptr_t slot);
int QExtensionFactory_QBaseReceivers(const QExtensionFactory* self, const char* signal);
bool QExtensionFactory_IsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_OnIsSignalConnected(const QExtensionFactory* self, intptr_t slot);
bool QExtensionFactory_QBaseIsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_Delete(QExtensionFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
