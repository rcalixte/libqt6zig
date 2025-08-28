#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKMODIFIERKEYINFO_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKMODIFIERKEYINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KModifierKeyInfo KModifierKeyInfo;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KModifierKeyInfo* KModifierKeyInfo_new();
KModifierKeyInfo* KModifierKeyInfo_new2(QObject* parent);
QMetaObject* KModifierKeyInfo_MetaObject(const KModifierKeyInfo* self);
void* KModifierKeyInfo_Metacast(KModifierKeyInfo* self, const char* param1);
int KModifierKeyInfo_Metacall(KModifierKeyInfo* self, int param1, int param2, void** param3);
libqt_string KModifierKeyInfo_Tr(const char* s);
bool KModifierKeyInfo_KnowsKey(const KModifierKeyInfo* self, int key);
libqt_list /* of int */ KModifierKeyInfo_KnownKeys(const KModifierKeyInfo* self);
bool KModifierKeyInfo_IsKeyPressed(const KModifierKeyInfo* self, int key);
bool KModifierKeyInfo_IsKeyLatched(const KModifierKeyInfo* self, int key);
bool KModifierKeyInfo_SetKeyLatched(KModifierKeyInfo* self, int key, bool latched);
bool KModifierKeyInfo_IsKeyLocked(const KModifierKeyInfo* self, int key);
bool KModifierKeyInfo_SetKeyLocked(KModifierKeyInfo* self, int key, bool locked);
bool KModifierKeyInfo_IsButtonPressed(const KModifierKeyInfo* self, int button);
void KModifierKeyInfo_KeyPressed(KModifierKeyInfo* self, int key, bool pressed);
void KModifierKeyInfo_Connect_KeyPressed(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_KeyLatched(KModifierKeyInfo* self, int key, bool latched);
void KModifierKeyInfo_Connect_KeyLatched(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_KeyLocked(KModifierKeyInfo* self, int key, bool locked);
void KModifierKeyInfo_Connect_KeyLocked(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_ButtonPressed(KModifierKeyInfo* self, int button, bool pressed);
void KModifierKeyInfo_Connect_ButtonPressed(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_KeyAdded(KModifierKeyInfo* self, int key);
void KModifierKeyInfo_Connect_KeyAdded(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_KeyRemoved(KModifierKeyInfo* self, int key);
void KModifierKeyInfo_Connect_KeyRemoved(KModifierKeyInfo* self, intptr_t slot);
libqt_string KModifierKeyInfo_Tr2(const char* s, const char* c);
libqt_string KModifierKeyInfo_Tr3(const char* s, const char* c, int n);
void KModifierKeyInfo_OnMetacall(KModifierKeyInfo* self, intptr_t slot);
int KModifierKeyInfo_QBaseMetacall(KModifierKeyInfo* self, int param1, int param2, void** param3);
bool KModifierKeyInfo_Event(KModifierKeyInfo* self, QEvent* event);
void KModifierKeyInfo_OnEvent(KModifierKeyInfo* self, intptr_t slot);
bool KModifierKeyInfo_QBaseEvent(KModifierKeyInfo* self, QEvent* event);
bool KModifierKeyInfo_EventFilter(KModifierKeyInfo* self, QObject* watched, QEvent* event);
void KModifierKeyInfo_OnEventFilter(KModifierKeyInfo* self, intptr_t slot);
bool KModifierKeyInfo_QBaseEventFilter(KModifierKeyInfo* self, QObject* watched, QEvent* event);
void KModifierKeyInfo_TimerEvent(KModifierKeyInfo* self, QTimerEvent* event);
void KModifierKeyInfo_OnTimerEvent(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_QBaseTimerEvent(KModifierKeyInfo* self, QTimerEvent* event);
void KModifierKeyInfo_ChildEvent(KModifierKeyInfo* self, QChildEvent* event);
void KModifierKeyInfo_OnChildEvent(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_QBaseChildEvent(KModifierKeyInfo* self, QChildEvent* event);
void KModifierKeyInfo_CustomEvent(KModifierKeyInfo* self, QEvent* event);
void KModifierKeyInfo_OnCustomEvent(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_QBaseCustomEvent(KModifierKeyInfo* self, QEvent* event);
void KModifierKeyInfo_ConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
void KModifierKeyInfo_OnConnectNotify(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_QBaseConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
void KModifierKeyInfo_DisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
void KModifierKeyInfo_OnDisconnectNotify(KModifierKeyInfo* self, intptr_t slot);
void KModifierKeyInfo_QBaseDisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal);
QObject* KModifierKeyInfo_Sender(const KModifierKeyInfo* self);
void KModifierKeyInfo_OnSender(const KModifierKeyInfo* self, intptr_t slot);
QObject* KModifierKeyInfo_QBaseSender(const KModifierKeyInfo* self);
int KModifierKeyInfo_SenderSignalIndex(const KModifierKeyInfo* self);
void KModifierKeyInfo_OnSenderSignalIndex(const KModifierKeyInfo* self, intptr_t slot);
int KModifierKeyInfo_QBaseSenderSignalIndex(const KModifierKeyInfo* self);
int KModifierKeyInfo_Receivers(const KModifierKeyInfo* self, const char* signal);
void KModifierKeyInfo_OnReceivers(const KModifierKeyInfo* self, intptr_t slot);
int KModifierKeyInfo_QBaseReceivers(const KModifierKeyInfo* self, const char* signal);
bool KModifierKeyInfo_IsSignalConnected(const KModifierKeyInfo* self, const QMetaMethod* signal);
void KModifierKeyInfo_OnIsSignalConnected(const KModifierKeyInfo* self, intptr_t slot);
bool KModifierKeyInfo_QBaseIsSignalConnected(const KModifierKeyInfo* self, const QMetaMethod* signal);
void KModifierKeyInfo_Delete(KModifierKeyInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
