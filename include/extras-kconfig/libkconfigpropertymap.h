#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_H
#define EXTRAS_KCONFIG_LIBKCONFIGPROPERTYMAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigPropertyMap KConfigPropertyMap;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlPropertyMap QQmlPropertyMap;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KConfigPropertyMap* KConfigPropertyMap_new(KCoreConfigSkeleton* config);
KConfigPropertyMap* KConfigPropertyMap_new2(KCoreConfigSkeleton* config, QObject* parent);
QMetaObject* KConfigPropertyMap_MetaObject(const KConfigPropertyMap* self);
void* KConfigPropertyMap_Metacast(KConfigPropertyMap* self, const char* param1);
int KConfigPropertyMap_Metacall(KConfigPropertyMap* self, int param1, int param2, void** param3);
libqt_string KConfigPropertyMap_Tr(const char* s);
bool KConfigPropertyMap_IsNotify(const KConfigPropertyMap* self);
void KConfigPropertyMap_SetNotify(KConfigPropertyMap* self, bool notify);
bool KConfigPropertyMap_IsImmutable(const KConfigPropertyMap* self, const libqt_string key);
void KConfigPropertyMap_WriteConfig(KConfigPropertyMap* self);
QVariant* KConfigPropertyMap_UpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input);
libqt_string KConfigPropertyMap_Tr2(const char* s, const char* c);
libqt_string KConfigPropertyMap_Tr3(const char* s, const char* c, int n);
void KConfigPropertyMap_OnMetaObject(const KConfigPropertyMap* self, intptr_t slot);
QMetaObject* KConfigPropertyMap_SuperMetaObject(const KConfigPropertyMap* self);
void KConfigPropertyMap_OnMetacast(KConfigPropertyMap* self, intptr_t slot);
void* KConfigPropertyMap_SuperMetacast(KConfigPropertyMap* self, const char* param1);
void KConfigPropertyMap_OnMetacall(KConfigPropertyMap* self, intptr_t slot);
int KConfigPropertyMap_SuperMetacall(KConfigPropertyMap* self, int param1, int param2, void** param3);
void KConfigPropertyMap_OnUpdateValue(KConfigPropertyMap* self, intptr_t slot);
QVariant* KConfigPropertyMap_SuperUpdateValue(KConfigPropertyMap* self, const libqt_string key, const QVariant* input);
bool KConfigPropertyMap_Event(KConfigPropertyMap* self, QEvent* event);
void KConfigPropertyMap_OnEvent(KConfigPropertyMap* self, intptr_t slot);
bool KConfigPropertyMap_SuperEvent(KConfigPropertyMap* self, QEvent* event);
bool KConfigPropertyMap_EventFilter(KConfigPropertyMap* self, QObject* watched, QEvent* event);
void KConfigPropertyMap_OnEventFilter(KConfigPropertyMap* self, intptr_t slot);
bool KConfigPropertyMap_SuperEventFilter(KConfigPropertyMap* self, QObject* watched, QEvent* event);
void KConfigPropertyMap_TimerEvent(KConfigPropertyMap* self, QTimerEvent* event);
void KConfigPropertyMap_OnTimerEvent(KConfigPropertyMap* self, intptr_t slot);
void KConfigPropertyMap_SuperTimerEvent(KConfigPropertyMap* self, QTimerEvent* event);
void KConfigPropertyMap_ChildEvent(KConfigPropertyMap* self, QChildEvent* event);
void KConfigPropertyMap_OnChildEvent(KConfigPropertyMap* self, intptr_t slot);
void KConfigPropertyMap_SuperChildEvent(KConfigPropertyMap* self, QChildEvent* event);
void KConfigPropertyMap_CustomEvent(KConfigPropertyMap* self, QEvent* event);
void KConfigPropertyMap_OnCustomEvent(KConfigPropertyMap* self, intptr_t slot);
void KConfigPropertyMap_SuperCustomEvent(KConfigPropertyMap* self, QEvent* event);
void KConfigPropertyMap_ConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
void KConfigPropertyMap_OnConnectNotify(KConfigPropertyMap* self, intptr_t slot);
void KConfigPropertyMap_SuperConnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
void KConfigPropertyMap_DisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
void KConfigPropertyMap_OnDisconnectNotify(KConfigPropertyMap* self, intptr_t slot);
void KConfigPropertyMap_SuperDisconnectNotify(KConfigPropertyMap* self, const QMetaMethod* signal);
QObject* KConfigPropertyMap_Sender(const KConfigPropertyMap* self);
void KConfigPropertyMap_OnSender(const KConfigPropertyMap* self, intptr_t slot);
QObject* KConfigPropertyMap_SuperSender(const KConfigPropertyMap* self);
int KConfigPropertyMap_SenderSignalIndex(const KConfigPropertyMap* self);
void KConfigPropertyMap_OnSenderSignalIndex(const KConfigPropertyMap* self, intptr_t slot);
int KConfigPropertyMap_SuperSenderSignalIndex(const KConfigPropertyMap* self);
int KConfigPropertyMap_Receivers(const KConfigPropertyMap* self, const char* signal);
void KConfigPropertyMap_OnReceivers(const KConfigPropertyMap* self, intptr_t slot);
int KConfigPropertyMap_SuperReceivers(const KConfigPropertyMap* self, const char* signal);
bool KConfigPropertyMap_IsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal);
void KConfigPropertyMap_OnIsSignalConnected(const KConfigPropertyMap* self, intptr_t slot);
bool KConfigPropertyMap_SuperIsSignalConnected(const KConfigPropertyMap* self, const QMetaMethod* signal);
void KConfigPropertyMap_Delete(KConfigPropertyMap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
