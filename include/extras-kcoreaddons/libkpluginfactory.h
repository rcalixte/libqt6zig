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
void KPluginFactory_OnMetacall(KPluginFactory* self, intptr_t slot);
int KPluginFactory_QBaseMetacall(KPluginFactory* self, int param1, int param2, void** param3);
libqt_string KPluginFactory_Tr(const char* s);
KPluginMetaData* KPluginFactory_MetaData(const KPluginFactory* self);
void KPluginFactory_SetMetaData(KPluginFactory* self, const KPluginMetaData* metaData);
QObject* KPluginFactory_Create(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
void KPluginFactory_OnCreate(KPluginFactory* self, intptr_t slot);
QObject* KPluginFactory_QBaseCreate(KPluginFactory* self, const char* iface, QWidget* parentWidget, QObject* parent, const libqt_list /* of QVariant* */ args);
libqt_string KPluginFactory_Tr2(const char* s, const char* c);
libqt_string KPluginFactory_Tr3(const char* s, const char* c, int n);
bool KPluginFactory_Event(KPluginFactory* self, QEvent* event);
void KPluginFactory_OnEvent(KPluginFactory* self, intptr_t slot);
bool KPluginFactory_QBaseEvent(KPluginFactory* self, QEvent* event);
bool KPluginFactory_EventFilter(KPluginFactory* self, QObject* watched, QEvent* event);
void KPluginFactory_OnEventFilter(KPluginFactory* self, intptr_t slot);
bool KPluginFactory_QBaseEventFilter(KPluginFactory* self, QObject* watched, QEvent* event);
void KPluginFactory_TimerEvent(KPluginFactory* self, QTimerEvent* event);
void KPluginFactory_OnTimerEvent(KPluginFactory* self, intptr_t slot);
void KPluginFactory_QBaseTimerEvent(KPluginFactory* self, QTimerEvent* event);
void KPluginFactory_ChildEvent(KPluginFactory* self, QChildEvent* event);
void KPluginFactory_OnChildEvent(KPluginFactory* self, intptr_t slot);
void KPluginFactory_QBaseChildEvent(KPluginFactory* self, QChildEvent* event);
void KPluginFactory_CustomEvent(KPluginFactory* self, QEvent* event);
void KPluginFactory_OnCustomEvent(KPluginFactory* self, intptr_t slot);
void KPluginFactory_QBaseCustomEvent(KPluginFactory* self, QEvent* event);
void KPluginFactory_ConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_OnConnectNotify(KPluginFactory* self, intptr_t slot);
void KPluginFactory_QBaseConnectNotify(KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_DisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_OnDisconnectNotify(KPluginFactory* self, intptr_t slot);
void KPluginFactory_QBaseDisconnectNotify(KPluginFactory* self, const QMetaMethod* signal);
QObject* KPluginFactory_Sender(const KPluginFactory* self);
void KPluginFactory_OnSender(const KPluginFactory* self, intptr_t slot);
QObject* KPluginFactory_QBaseSender(const KPluginFactory* self);
int KPluginFactory_SenderSignalIndex(const KPluginFactory* self);
void KPluginFactory_OnSenderSignalIndex(const KPluginFactory* self, intptr_t slot);
int KPluginFactory_QBaseSenderSignalIndex(const KPluginFactory* self);
int KPluginFactory_Receivers(const KPluginFactory* self, const char* signal);
void KPluginFactory_OnReceivers(const KPluginFactory* self, intptr_t slot);
int KPluginFactory_QBaseReceivers(const KPluginFactory* self, const char* signal);
bool KPluginFactory_IsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_OnIsSignalConnected(const KPluginFactory* self, intptr_t slot);
bool KPluginFactory_QBaseIsSignalConnected(const KPluginFactory* self, const QMetaMethod* signal);
void KPluginFactory_Delete(KPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
