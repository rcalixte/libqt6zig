#pragma once
#ifndef QML_LIBQQMLEXTENSIONPLUGIN_H
#define QML_LIBQQMLEXTENSIONPLUGIN_H

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
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlEngineExtensionInterface QQmlEngineExtensionInterface;
typedef struct QQmlEngineExtensionPlugin QQmlEngineExtensionPlugin;
typedef struct QQmlExtensionInterface QQmlExtensionInterface;
typedef struct QQmlExtensionPlugin QQmlExtensionPlugin;
typedef struct QQmlTypesExtensionInterface QQmlTypesExtensionInterface;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QQmlExtensionPlugin* QQmlExtensionPlugin_new();
QQmlExtensionPlugin* QQmlExtensionPlugin_new2(QObject* parent);
QQmlExtensionInterface* QQmlExtensionPlugin_AsQQmlExtensionInterface(QQmlExtensionPlugin* self);
QQmlExtensionPlugin* QQmlExtensionPlugin_FromQQmlExtensionInterface(QQmlExtensionInterface* _qqmlextensioninterface);
QMetaObject* QQmlExtensionPlugin_MetaObject(const QQmlExtensionPlugin* self);
void* QQmlExtensionPlugin_Metacast(QQmlExtensionPlugin* self, const char* param1);
int QQmlExtensionPlugin_Metacall(QQmlExtensionPlugin* self, int param1, int param2, void** param3);
libqt_string QQmlExtensionPlugin_Tr(const char* s);
QUrl* QQmlExtensionPlugin_BaseUrl(const QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_RegisterTypes(QQmlExtensionPlugin* self, const char* uri);
void QQmlExtensionPlugin_UnregisterTypes(QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_InitializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri);
libqt_string QQmlExtensionPlugin_Tr2(const char* s, const char* c);
libqt_string QQmlExtensionPlugin_Tr3(const char* s, const char* c, int n);
void QQmlExtensionPlugin_OnMetaObject(const QQmlExtensionPlugin* self, intptr_t slot);
QMetaObject* QQmlExtensionPlugin_SuperMetaObject(const QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_OnMetacast(QQmlExtensionPlugin* self, intptr_t slot);
void* QQmlExtensionPlugin_SuperMetacast(QQmlExtensionPlugin* self, const char* param1);
void QQmlExtensionPlugin_OnMetacall(QQmlExtensionPlugin* self, intptr_t slot);
int QQmlExtensionPlugin_SuperMetacall(QQmlExtensionPlugin* self, int param1, int param2, void** param3);
void QQmlExtensionPlugin_OnRegisterTypes(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperRegisterTypes(QQmlExtensionPlugin* self, const char* uri);
void QQmlExtensionPlugin_OnUnregisterTypes(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperUnregisterTypes(QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_OnInitializeEngine(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperInitializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri);
bool QQmlExtensionPlugin_Event(QQmlExtensionPlugin* self, QEvent* event);
void QQmlExtensionPlugin_OnEvent(QQmlExtensionPlugin* self, intptr_t slot);
bool QQmlExtensionPlugin_SuperEvent(QQmlExtensionPlugin* self, QEvent* event);
bool QQmlExtensionPlugin_EventFilter(QQmlExtensionPlugin* self, QObject* watched, QEvent* event);
void QQmlExtensionPlugin_OnEventFilter(QQmlExtensionPlugin* self, intptr_t slot);
bool QQmlExtensionPlugin_SuperEventFilter(QQmlExtensionPlugin* self, QObject* watched, QEvent* event);
void QQmlExtensionPlugin_TimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event);
void QQmlExtensionPlugin_OnTimerEvent(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperTimerEvent(QQmlExtensionPlugin* self, QTimerEvent* event);
void QQmlExtensionPlugin_ChildEvent(QQmlExtensionPlugin* self, QChildEvent* event);
void QQmlExtensionPlugin_OnChildEvent(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperChildEvent(QQmlExtensionPlugin* self, QChildEvent* event);
void QQmlExtensionPlugin_CustomEvent(QQmlExtensionPlugin* self, QEvent* event);
void QQmlExtensionPlugin_OnCustomEvent(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperCustomEvent(QQmlExtensionPlugin* self, QEvent* event);
void QQmlExtensionPlugin_ConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
void QQmlExtensionPlugin_OnConnectNotify(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperConnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
void QQmlExtensionPlugin_DisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
void QQmlExtensionPlugin_OnDisconnectNotify(QQmlExtensionPlugin* self, intptr_t slot);
void QQmlExtensionPlugin_SuperDisconnectNotify(QQmlExtensionPlugin* self, const QMetaMethod* signal);
QObject* QQmlExtensionPlugin_Sender(const QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_OnSender(const QQmlExtensionPlugin* self, intptr_t slot);
QObject* QQmlExtensionPlugin_SuperSender(const QQmlExtensionPlugin* self);
int QQmlExtensionPlugin_SenderSignalIndex(const QQmlExtensionPlugin* self);
void QQmlExtensionPlugin_OnSenderSignalIndex(const QQmlExtensionPlugin* self, intptr_t slot);
int QQmlExtensionPlugin_SuperSenderSignalIndex(const QQmlExtensionPlugin* self);
int QQmlExtensionPlugin_Receivers(const QQmlExtensionPlugin* self, const char* signal);
void QQmlExtensionPlugin_OnReceivers(const QQmlExtensionPlugin* self, intptr_t slot);
int QQmlExtensionPlugin_SuperReceivers(const QQmlExtensionPlugin* self, const char* signal);
bool QQmlExtensionPlugin_IsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal);
void QQmlExtensionPlugin_OnIsSignalConnected(const QQmlExtensionPlugin* self, intptr_t slot);
bool QQmlExtensionPlugin_SuperIsSignalConnected(const QQmlExtensionPlugin* self, const QMetaMethod* signal);
void QQmlExtensionPlugin_Delete(QQmlExtensionPlugin* self);

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new();
QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new2(QObject* parent);
QQmlEngineExtensionInterface* QQmlEngineExtensionPlugin_AsQQmlEngineExtensionInterface(QQmlEngineExtensionPlugin* self);
QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_FromQQmlEngineExtensionInterface(QQmlEngineExtensionInterface* _qqmlengineextensioninterface);
QMetaObject* QQmlEngineExtensionPlugin_MetaObject(const QQmlEngineExtensionPlugin* self);
void* QQmlEngineExtensionPlugin_Metacast(QQmlEngineExtensionPlugin* self, const char* param1);
int QQmlEngineExtensionPlugin_Metacall(QQmlEngineExtensionPlugin* self, int param1, int param2, void** param3);
libqt_string QQmlEngineExtensionPlugin_Tr(const char* s);
void QQmlEngineExtensionPlugin_InitializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri);
libqt_string QQmlEngineExtensionPlugin_Tr2(const char* s, const char* c);
libqt_string QQmlEngineExtensionPlugin_Tr3(const char* s, const char* c, int n);
void QQmlEngineExtensionPlugin_OnMetaObject(const QQmlEngineExtensionPlugin* self, intptr_t slot);
QMetaObject* QQmlEngineExtensionPlugin_SuperMetaObject(const QQmlEngineExtensionPlugin* self);
void QQmlEngineExtensionPlugin_OnMetacast(QQmlEngineExtensionPlugin* self, intptr_t slot);
void* QQmlEngineExtensionPlugin_SuperMetacast(QQmlEngineExtensionPlugin* self, const char* param1);
void QQmlEngineExtensionPlugin_OnMetacall(QQmlEngineExtensionPlugin* self, intptr_t slot);
int QQmlEngineExtensionPlugin_SuperMetacall(QQmlEngineExtensionPlugin* self, int param1, int param2, void** param3);
void QQmlEngineExtensionPlugin_OnInitializeEngine(QQmlEngineExtensionPlugin* self, intptr_t slot);
void QQmlEngineExtensionPlugin_SuperInitializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri);
bool QQmlEngineExtensionPlugin_Event(QQmlEngineExtensionPlugin* self, QEvent* event);
void QQmlEngineExtensionPlugin_OnEvent(QQmlEngineExtensionPlugin* self, intptr_t slot);
bool QQmlEngineExtensionPlugin_SuperEvent(QQmlEngineExtensionPlugin* self, QEvent* event);
bool QQmlEngineExtensionPlugin_EventFilter(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event);
void QQmlEngineExtensionPlugin_OnEventFilter(QQmlEngineExtensionPlugin* self, intptr_t slot);
bool QQmlEngineExtensionPlugin_SuperEventFilter(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event);
void QQmlEngineExtensionPlugin_TimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event);
void QQmlEngineExtensionPlugin_OnTimerEvent(QQmlEngineExtensionPlugin* self, intptr_t slot);
void QQmlEngineExtensionPlugin_SuperTimerEvent(QQmlEngineExtensionPlugin* self, QTimerEvent* event);
void QQmlEngineExtensionPlugin_ChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event);
void QQmlEngineExtensionPlugin_OnChildEvent(QQmlEngineExtensionPlugin* self, intptr_t slot);
void QQmlEngineExtensionPlugin_SuperChildEvent(QQmlEngineExtensionPlugin* self, QChildEvent* event);
void QQmlEngineExtensionPlugin_CustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event);
void QQmlEngineExtensionPlugin_OnCustomEvent(QQmlEngineExtensionPlugin* self, intptr_t slot);
void QQmlEngineExtensionPlugin_SuperCustomEvent(QQmlEngineExtensionPlugin* self, QEvent* event);
void QQmlEngineExtensionPlugin_ConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
void QQmlEngineExtensionPlugin_OnConnectNotify(QQmlEngineExtensionPlugin* self, intptr_t slot);
void QQmlEngineExtensionPlugin_SuperConnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
void QQmlEngineExtensionPlugin_DisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
void QQmlEngineExtensionPlugin_OnDisconnectNotify(QQmlEngineExtensionPlugin* self, intptr_t slot);
void QQmlEngineExtensionPlugin_SuperDisconnectNotify(QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
QObject* QQmlEngineExtensionPlugin_Sender(const QQmlEngineExtensionPlugin* self);
void QQmlEngineExtensionPlugin_OnSender(const QQmlEngineExtensionPlugin* self, intptr_t slot);
QObject* QQmlEngineExtensionPlugin_SuperSender(const QQmlEngineExtensionPlugin* self);
int QQmlEngineExtensionPlugin_SenderSignalIndex(const QQmlEngineExtensionPlugin* self);
void QQmlEngineExtensionPlugin_OnSenderSignalIndex(const QQmlEngineExtensionPlugin* self, intptr_t slot);
int QQmlEngineExtensionPlugin_SuperSenderSignalIndex(const QQmlEngineExtensionPlugin* self);
int QQmlEngineExtensionPlugin_Receivers(const QQmlEngineExtensionPlugin* self, const char* signal);
void QQmlEngineExtensionPlugin_OnReceivers(const QQmlEngineExtensionPlugin* self, intptr_t slot);
int QQmlEngineExtensionPlugin_SuperReceivers(const QQmlEngineExtensionPlugin* self, const char* signal);
bool QQmlEngineExtensionPlugin_IsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
void QQmlEngineExtensionPlugin_OnIsSignalConnected(const QQmlEngineExtensionPlugin* self, intptr_t slot);
bool QQmlEngineExtensionPlugin_SuperIsSignalConnected(const QQmlEngineExtensionPlugin* self, const QMetaMethod* signal);
void QQmlEngineExtensionPlugin_Delete(QQmlEngineExtensionPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
