#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKPLUGINFACTORY_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPluginFactory KPluginFactory;
typedef struct KPluginMetaData KPluginMetaData;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

KPluginFactory* KPluginFactory_new();
QMetaObject* KPluginFactory_MetaObject(const KPluginFactory* self);
void* KPluginFactory_Metacast(KPluginFactory* self, const char* param1);
int KPluginFactory_Metacall(KPluginFactory* self, int param1, int param2, void** param3);
KPluginMetaData* KPluginFactory_MetaData(const KPluginFactory* self);
void KPluginFactory_SetMetaData(KPluginFactory* self, const KPluginMetaData* metaData);
QObject* KPluginFactory_Create(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
void KPluginFactory_OnMetaObject(const KPluginFactory* self, intptr_t slot);
QMetaObject* KPluginFactory_SuperMetaObject(const KPluginFactory* self);
void KPluginFactory_OnMetacast(KPluginFactory* self, intptr_t slot);
void* KPluginFactory_SuperMetacast(KPluginFactory* self, const char* param1);
void KPluginFactory_OnMetacall(KPluginFactory* self, intptr_t slot);
int KPluginFactory_SuperMetacall(KPluginFactory* self, int param1, int param2, void** param3);
void KPluginFactory_OnCreate(KPluginFactory* self, intptr_t slot);
QObject* KPluginFactory_SuperCreate(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
bool KPluginFactory_Event(KPluginFactory* self, QEvent* event);
void KPluginFactory_OnEvent(KPluginFactory* self, intptr_t slot);
bool KPluginFactory_SuperEvent(KPluginFactory* self, QEvent* event);
bool KPluginFactory_EventFilter(KPluginFactory* self, QObject* watched, QEvent* event);
void KPluginFactory_OnEventFilter(KPluginFactory* self, intptr_t slot);
bool KPluginFactory_SuperEventFilter(KPluginFactory* self, QObject* watched, QEvent* event);
void KPluginFactory_TimerEvent(KPluginFactory* self, QTimerEvent* event);
void KPluginFactory_OnTimerEvent(KPluginFactory* self, intptr_t slot);
void KPluginFactory_SuperTimerEvent(KPluginFactory* self, QTimerEvent* event);
void KPluginFactory_ChildEvent(KPluginFactory* self, QChildEvent* event);
void KPluginFactory_OnChildEvent(KPluginFactory* self, intptr_t slot);
void KPluginFactory_SuperChildEvent(KPluginFactory* self, QChildEvent* event);
void KPluginFactory_CustomEvent(KPluginFactory* self, QEvent* event);
void KPluginFactory_OnCustomEvent(KPluginFactory* self, intptr_t slot);
void KPluginFactory_SuperCustomEvent(KPluginFactory* self, QEvent* event);
void KPluginFactory_ConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_OnConnectNotify(KPluginFactory* self, intptr_t slot);
void KPluginFactory_SuperConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_DisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_OnDisconnectNotify(KPluginFactory* self, intptr_t slot);
void KPluginFactory_SuperDisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
QObject* KPluginFactory_Sender(const KPluginFactory* self);
void KPluginFactory_OnSender(const KPluginFactory* self, intptr_t slot);
QObject* KPluginFactory_SuperSender(const KPluginFactory* self);
int KPluginFactory_SenderSignalIndex(const KPluginFactory* self);
void KPluginFactory_OnSenderSignalIndex(const KPluginFactory* self, intptr_t slot);
int KPluginFactory_SuperSenderSignalIndex(const KPluginFactory* self);
int KPluginFactory_Receivers(const KPluginFactory* self, const char* signal);
void KPluginFactory_OnReceivers(const KPluginFactory* self, intptr_t slot);
int KPluginFactory_SuperReceivers(const KPluginFactory* self, const char* signal);
bool KPluginFactory_IsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_OnIsSignalConnected(const KPluginFactory* self, intptr_t slot);
bool KPluginFactory_SuperIsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_Delete(KPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
