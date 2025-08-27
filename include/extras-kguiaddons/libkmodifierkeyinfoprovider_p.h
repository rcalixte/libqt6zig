#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKMODIFIERKEYINFOPROVIDER_P_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKMODIFIERKEYINFOPROVIDER_P_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KModifierKeyInfoProvider KModifierKeyInfoProvider;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSharedData QSharedData;
typedef struct QTimerEvent QTimerEvent;
#endif

KModifierKeyInfoProvider* KModifierKeyInfoProvider_new();
QMetaObject* KModifierKeyInfoProvider_MetaObject(const KModifierKeyInfoProvider* self);
void* KModifierKeyInfoProvider_Metacast(KModifierKeyInfoProvider* self, const char* param1);
int KModifierKeyInfoProvider_Metacall(KModifierKeyInfoProvider* self, int param1, int param2, void** param3);
void KModifierKeyInfoProvider_OnMetacall(KModifierKeyInfoProvider* self, intptr_t slot);
int KModifierKeyInfoProvider_QBaseMetacall(KModifierKeyInfoProvider* self, int param1, int param2, void** param3);
libqt_string KModifierKeyInfoProvider_Tr(const char* s);
bool KModifierKeyInfoProvider_IsKeyPressed(const KModifierKeyInfoProvider* self, int key);
bool KModifierKeyInfoProvider_IsKeyLatched(const KModifierKeyInfoProvider* self, int key);
bool KModifierKeyInfoProvider_SetKeyLatched(KModifierKeyInfoProvider* self, int key, bool latched);
void KModifierKeyInfoProvider_OnSetKeyLatched(KModifierKeyInfoProvider* self, intptr_t slot);
bool KModifierKeyInfoProvider_QBaseSetKeyLatched(KModifierKeyInfoProvider* self, int key, bool latched);
bool KModifierKeyInfoProvider_IsKeyLocked(const KModifierKeyInfoProvider* self, int key);
bool KModifierKeyInfoProvider_SetKeyLocked(KModifierKeyInfoProvider* self, int key, bool locked);
void KModifierKeyInfoProvider_OnSetKeyLocked(KModifierKeyInfoProvider* self, intptr_t slot);
bool KModifierKeyInfoProvider_QBaseSetKeyLocked(KModifierKeyInfoProvider* self, int key, bool locked);
bool KModifierKeyInfoProvider_IsButtonPressed(const KModifierKeyInfoProvider* self, int button);
bool KModifierKeyInfoProvider_KnowsKey(const KModifierKeyInfoProvider* self, int key);
libqt_list /* of int */ KModifierKeyInfoProvider_KnownKeys(const KModifierKeyInfoProvider* self);
void KModifierKeyInfoProvider_KeyLatched(KModifierKeyInfoProvider* self, int key, bool state);
void KModifierKeyInfoProvider_Connect_KeyLatched(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_KeyLocked(KModifierKeyInfoProvider* self, int key, bool state);
void KModifierKeyInfoProvider_Connect_KeyLocked(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_KeyPressed(KModifierKeyInfoProvider* self, int key, bool state);
void KModifierKeyInfoProvider_Connect_KeyPressed(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_ButtonPressed(KModifierKeyInfoProvider* self, int button, bool state);
void KModifierKeyInfoProvider_Connect_ButtonPressed(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_KeyAdded(KModifierKeyInfoProvider* self, int key);
void KModifierKeyInfoProvider_Connect_KeyAdded(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_KeyRemoved(KModifierKeyInfoProvider* self, int key);
void KModifierKeyInfoProvider_Connect_KeyRemoved(KModifierKeyInfoProvider* self, intptr_t slot);
libqt_string KModifierKeyInfoProvider_Tr2(const char* s, const char* c);
libqt_string KModifierKeyInfoProvider_Tr3(const char* s, const char* c, int n);
bool KModifierKeyInfoProvider_Event(KModifierKeyInfoProvider* self, QEvent* event);
void KModifierKeyInfoProvider_OnEvent(KModifierKeyInfoProvider* self, intptr_t slot);
bool KModifierKeyInfoProvider_QBaseEvent(KModifierKeyInfoProvider* self, QEvent* event);
bool KModifierKeyInfoProvider_EventFilter(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event);
void KModifierKeyInfoProvider_OnEventFilter(KModifierKeyInfoProvider* self, intptr_t slot);
bool KModifierKeyInfoProvider_QBaseEventFilter(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event);
void KModifierKeyInfoProvider_TimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event);
void KModifierKeyInfoProvider_OnTimerEvent(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_QBaseTimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event);
void KModifierKeyInfoProvider_ChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event);
void KModifierKeyInfoProvider_OnChildEvent(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_QBaseChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event);
void KModifierKeyInfoProvider_CustomEvent(KModifierKeyInfoProvider* self, QEvent* event);
void KModifierKeyInfoProvider_OnCustomEvent(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_QBaseCustomEvent(KModifierKeyInfoProvider* self, QEvent* event);
void KModifierKeyInfoProvider_ConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
void KModifierKeyInfoProvider_OnConnectNotify(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_QBaseConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
void KModifierKeyInfoProvider_DisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
void KModifierKeyInfoProvider_OnDisconnectNotify(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_QBaseDisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal);
void KModifierKeyInfoProvider_StateUpdated(KModifierKeyInfoProvider* self, int key, int state);
void KModifierKeyInfoProvider_OnStateUpdated(KModifierKeyInfoProvider* self, intptr_t slot);
void KModifierKeyInfoProvider_QBaseStateUpdated(KModifierKeyInfoProvider* self, int key, int state);
QObject* KModifierKeyInfoProvider_Sender(const KModifierKeyInfoProvider* self);
void KModifierKeyInfoProvider_OnSender(const KModifierKeyInfoProvider* self, intptr_t slot);
QObject* KModifierKeyInfoProvider_QBaseSender(const KModifierKeyInfoProvider* self);
int KModifierKeyInfoProvider_SenderSignalIndex(const KModifierKeyInfoProvider* self);
void KModifierKeyInfoProvider_OnSenderSignalIndex(const KModifierKeyInfoProvider* self, intptr_t slot);
int KModifierKeyInfoProvider_QBaseSenderSignalIndex(const KModifierKeyInfoProvider* self);
int KModifierKeyInfoProvider_Receivers(const KModifierKeyInfoProvider* self, const char* signal);
void KModifierKeyInfoProvider_OnReceivers(const KModifierKeyInfoProvider* self, intptr_t slot);
int KModifierKeyInfoProvider_QBaseReceivers(const KModifierKeyInfoProvider* self, const char* signal);
bool KModifierKeyInfoProvider_IsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal);
void KModifierKeyInfoProvider_OnIsSignalConnected(const KModifierKeyInfoProvider* self, intptr_t slot);
bool KModifierKeyInfoProvider_QBaseIsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal);
void KModifierKeyInfoProvider_Delete(KModifierKeyInfoProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
