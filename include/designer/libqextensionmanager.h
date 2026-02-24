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
void QExtensionManager_OnMetaObject(const QExtensionManager* self, intptr_t slot);
QMetaObject* QExtensionManager_SuperMetaObject(const QExtensionManager* self);
void QExtensionManager_OnMetacast(QExtensionManager* self, intptr_t slot);
void* QExtensionManager_SuperMetacast(QExtensionManager* self, const char* param1);
void QExtensionManager_OnMetacall(QExtensionManager* self, intptr_t slot);
int QExtensionManager_SuperMetacall(QExtensionManager* self, int param1, int param2, void** param3);
void QExtensionManager_OnRegisterExtensions(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperRegisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
void QExtensionManager_OnUnregisterExtensions(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperUnregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, const libqt_string iid);
void QExtensionManager_OnExtension(const QExtensionManager* self, intptr_t slot);
QObject* QExtensionManager_SuperExtension(const QExtensionManager* self, QObject* object, const libqt_string iid);
bool QExtensionManager_Event(QExtensionManager* self, QEvent* event);
void QExtensionManager_OnEvent(QExtensionManager* self, intptr_t slot);
bool QExtensionManager_SuperEvent(QExtensionManager* self, QEvent* event);
bool QExtensionManager_EventFilter(QExtensionManager* self, QObject* watched, QEvent* event);
void QExtensionManager_OnEventFilter(QExtensionManager* self, intptr_t slot);
bool QExtensionManager_SuperEventFilter(QExtensionManager* self, QObject* watched, QEvent* event);
void QExtensionManager_TimerEvent(QExtensionManager* self, QTimerEvent* event);
void QExtensionManager_OnTimerEvent(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperTimerEvent(QExtensionManager* self, QTimerEvent* event);
void QExtensionManager_ChildEvent(QExtensionManager* self, QChildEvent* event);
void QExtensionManager_OnChildEvent(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperChildEvent(QExtensionManager* self, QChildEvent* event);
void QExtensionManager_CustomEvent(QExtensionManager* self, QEvent* event);
void QExtensionManager_OnCustomEvent(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperCustomEvent(QExtensionManager* self, QEvent* event);
void QExtensionManager_ConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_OnConnectNotify(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperConnectNotify(QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_DisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_OnDisconnectNotify(QExtensionManager* self, intptr_t slot);
void QExtensionManager_SuperDisconnectNotify(QExtensionManager* self, const QMetaMethod* signal);
QObject* QExtensionManager_Sender(const QExtensionManager* self);
void QExtensionManager_OnSender(const QExtensionManager* self, intptr_t slot);
QObject* QExtensionManager_SuperSender(const QExtensionManager* self);
int QExtensionManager_SenderSignalIndex(const QExtensionManager* self);
void QExtensionManager_OnSenderSignalIndex(const QExtensionManager* self, intptr_t slot);
int QExtensionManager_SuperSenderSignalIndex(const QExtensionManager* self);
int QExtensionManager_Receivers(const QExtensionManager* self, const char* signal);
void QExtensionManager_OnReceivers(const QExtensionManager* self, intptr_t slot);
int QExtensionManager_SuperReceivers(const QExtensionManager* self, const char* signal);
bool QExtensionManager_IsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_OnIsSignalConnected(const QExtensionManager* self, intptr_t slot);
bool QExtensionManager_SuperIsSignalConnected(const QExtensionManager* self, const QMetaMethod* signal);
void QExtensionManager_Delete(QExtensionManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
