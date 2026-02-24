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
void QExtensionFactory_OnMetaObject(const QExtensionFactory* self, intptr_t slot);
QMetaObject* QExtensionFactory_SuperMetaObject(const QExtensionFactory* self);
void QExtensionFactory_OnMetacast(QExtensionFactory* self, intptr_t slot);
void* QExtensionFactory_SuperMetacast(QExtensionFactory* self, const char* param1);
void QExtensionFactory_OnMetacall(QExtensionFactory* self, intptr_t slot);
int QExtensionFactory_SuperMetacall(QExtensionFactory* self, int param1, int param2, void** param3);
void QExtensionFactory_OnExtension(const QExtensionFactory* self, intptr_t slot);
QObject* QExtensionFactory_SuperExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid);
void QExtensionFactory_OnCreateExtension(const QExtensionFactory* self, intptr_t slot);
QObject* QExtensionFactory_SuperCreateExtension(const QExtensionFactory* self, QObject* object, const libqt_string iid, QObject* parent);
bool QExtensionFactory_Event(QExtensionFactory* self, QEvent* event);
void QExtensionFactory_OnEvent(QExtensionFactory* self, intptr_t slot);
bool QExtensionFactory_SuperEvent(QExtensionFactory* self, QEvent* event);
bool QExtensionFactory_EventFilter(QExtensionFactory* self, QObject* watched, QEvent* event);
void QExtensionFactory_OnEventFilter(QExtensionFactory* self, intptr_t slot);
bool QExtensionFactory_SuperEventFilter(QExtensionFactory* self, QObject* watched, QEvent* event);
void QExtensionFactory_TimerEvent(QExtensionFactory* self, QTimerEvent* event);
void QExtensionFactory_OnTimerEvent(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_SuperTimerEvent(QExtensionFactory* self, QTimerEvent* event);
void QExtensionFactory_ChildEvent(QExtensionFactory* self, QChildEvent* event);
void QExtensionFactory_OnChildEvent(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_SuperChildEvent(QExtensionFactory* self, QChildEvent* event);
void QExtensionFactory_CustomEvent(QExtensionFactory* self, QEvent* event);
void QExtensionFactory_OnCustomEvent(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_SuperCustomEvent(QExtensionFactory* self, QEvent* event);
void QExtensionFactory_ConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_OnConnectNotify(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_SuperConnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_DisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_OnDisconnectNotify(QExtensionFactory* self, intptr_t slot);
void QExtensionFactory_SuperDisconnectNotify(QExtensionFactory* self, const QMetaMethod* signal);
QObject* QExtensionFactory_Sender(const QExtensionFactory* self);
void QExtensionFactory_OnSender(const QExtensionFactory* self, intptr_t slot);
QObject* QExtensionFactory_SuperSender(const QExtensionFactory* self);
int QExtensionFactory_SenderSignalIndex(const QExtensionFactory* self);
void QExtensionFactory_OnSenderSignalIndex(const QExtensionFactory* self, intptr_t slot);
int QExtensionFactory_SuperSenderSignalIndex(const QExtensionFactory* self);
int QExtensionFactory_Receivers(const QExtensionFactory* self, const char* signal);
void QExtensionFactory_OnReceivers(const QExtensionFactory* self, intptr_t slot);
int QExtensionFactory_SuperReceivers(const QExtensionFactory* self, const char* signal);
bool QExtensionFactory_IsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_OnIsSignalConnected(const QExtensionFactory* self, intptr_t slot);
bool QExtensionFactory_SuperIsSignalConnected(const QExtensionFactory* self, const QMetaMethod* signal);
void QExtensionFactory_Delete(QExtensionFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
