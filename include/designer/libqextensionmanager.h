#pragma once
#ifndef SRC_DESIGNERC_LIBQEXTENSIONMANAGER_H
#define SRC_DESIGNERC_LIBQEXTENSIONMANAGER_H

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
typedef struct QAbstractExtensionManager QAbstractExtensionManager;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QExtensionManager QExtensionManager;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QExtensionManager* QExtensionManager_new();
QExtensionManager* QExtensionManager_new2(QObject* parent);
QMetaObject* QExtensionManager_MetaObject(const QExtensionManager* self);
void* QExtensionManager_Metacast(QExtensionManager* self, const char* param1);
int QExtensionManager_Metacall(QExtensionManager* self, int param1, int param2, void** param3);
void QExtensionManager_RegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
void QExtensionManager_UnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
QObject* QExtensionManager_Extension(const QExtensionManager* self, QObject* object, const libqt_string iid);
void QExtensionManager_OnMetacall(QExtensionManager* self, intptr_t slot);
int QExtensionManager_QBaseMetacall(QExtensionManager* self, int param1, int param2, void** param3);
void QExtensionManager_OnRegisterExtensions(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseRegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
void QExtensionManager_OnUnregisterExtensions(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseUnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
void QExtensionManager_OnExtension(const QExtensionManager* self, intptr_t slot);
QObject* QExtensionManager_QBaseExtension(const QExtensionManager* self, QObject* object, const libqt_string iid);
bool QExtensionManager_Event(QExtensionManager* self, QEvent* event);
void QExtensionManager_OnEvent(QExtensionManager* self, intptr_t slot);
bool QExtensionManager_QBaseEvent(QExtensionManager* self, QEvent* event);
bool QExtensionManager_EventFilter(QExtensionManager* self, QObject* watched, QEvent* event);
void QExtensionManager_OnEventFilter(QExtensionManager* self, intptr_t slot);
bool QExtensionManager_QBaseEventFilter(QExtensionManager* self, QObject* watched, QEvent* event);
void QExtensionManager_TimerEvent(QExtensionManager* self, QTimerEvent* event);
void QExtensionManager_OnTimerEvent(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseTimerEvent(QExtensionManager* self, QTimerEvent* event);
void QExtensionManager_ChildEvent(QExtensionManager* self, QChildEvent* event);
void QExtensionManager_OnChildEvent(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseChildEvent(QExtensionManager* self, QChildEvent* event);
void QExtensionManager_CustomEvent(QExtensionManager* self, QEvent* event);
void QExtensionManager_OnCustomEvent(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseCustomEvent(QExtensionManager* self, QEvent* event);
void QExtensionManager_ConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_OnConnectNotify(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_DisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_OnDisconnectNotify(QExtensionManager* self, intptr_t slot);
void QExtensionManager_QBaseDisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
QObject* QExtensionManager_Sender(const QExtensionManager* self);
void QExtensionManager_OnSender(const QExtensionManager* self, intptr_t slot);
QObject* QExtensionManager_QBaseSender(const QExtensionManager* self);
int QExtensionManager_SenderSignalIndex(const QExtensionManager* self);
void QExtensionManager_OnSenderSignalIndex(const QExtensionManager* self, intptr_t slot);
int QExtensionManager_QBaseSenderSignalIndex(const QExtensionManager* self);
int QExtensionManager_Receivers(const QExtensionManager* self, const char* signal);
void QExtensionManager_OnReceivers(const QExtensionManager* self, intptr_t slot);
int QExtensionManager_QBaseReceivers(const QExtensionManager* self, const char* signal);
bool QExtensionManager_IsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_OnIsSignalConnected(const QExtensionManager* self, intptr_t slot);
bool QExtensionManager_QBaseIsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_Delete(QExtensionManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
