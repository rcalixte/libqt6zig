#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGSKELETON_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGSKELETON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigSkeleton KConfigSkeleton;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KConfigSkeleton* KConfigSkeleton_new();
KConfigSkeleton* KConfigSkeleton_new2(const libqt_string configname);
KConfigSkeleton* KConfigSkeleton_new3(const libqt_string configname, QObject* parent);
QMetaObject* KConfigSkeleton_MetaObject(const KConfigSkeleton* self);
void* KConfigSkeleton_Metacast(KConfigSkeleton* self, const char* param1);
int KConfigSkeleton_Metacall(KConfigSkeleton* self, int param1, int param2, void** param3);
libqt_string KConfigSkeleton_Tr(const char* s);
libqt_string KConfigSkeleton_Tr2(const char* s, const char* c);
libqt_string KConfigSkeleton_Tr3(const char* s, const char* c, int n);
void KConfigSkeleton_OnMetacall(KConfigSkeleton* self, intptr_t slot);
int KConfigSkeleton_QBaseMetacall(KConfigSkeleton* self, int param1, int param2, void** param3);
void KConfigSkeleton_SetDefaults(KConfigSkeleton* self);
void KConfigSkeleton_OnSetDefaults(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseSetDefaults(KConfigSkeleton* self);
bool KConfigSkeleton_UseDefaults(KConfigSkeleton* self, bool b);
void KConfigSkeleton_OnUseDefaults(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseUseDefaults(KConfigSkeleton* self, bool b);
bool KConfigSkeleton_UsrUseDefaults(KConfigSkeleton* self, bool b);
void KConfigSkeleton_OnUsrUseDefaults(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseUsrUseDefaults(KConfigSkeleton* self, bool b);
void KConfigSkeleton_UsrSetDefaults(KConfigSkeleton* self);
void KConfigSkeleton_OnUsrSetDefaults(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseUsrSetDefaults(KConfigSkeleton* self);
void KConfigSkeleton_UsrRead(KConfigSkeleton* self);
void KConfigSkeleton_OnUsrRead(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseUsrRead(KConfigSkeleton* self);
bool KConfigSkeleton_UsrSave(KConfigSkeleton* self);
void KConfigSkeleton_OnUsrSave(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseUsrSave(KConfigSkeleton* self);
bool KConfigSkeleton_Event(KConfigSkeleton* self, QEvent* event);
void KConfigSkeleton_OnEvent(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseEvent(KConfigSkeleton* self, QEvent* event);
bool KConfigSkeleton_EventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event);
void KConfigSkeleton_OnEventFilter(KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseEventFilter(KConfigSkeleton* self, QObject* watched, QEvent* event);
void KConfigSkeleton_TimerEvent(KConfigSkeleton* self, QTimerEvent* event);
void KConfigSkeleton_OnTimerEvent(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseTimerEvent(KConfigSkeleton* self, QTimerEvent* event);
void KConfigSkeleton_ChildEvent(KConfigSkeleton* self, QChildEvent* event);
void KConfigSkeleton_OnChildEvent(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseChildEvent(KConfigSkeleton* self, QChildEvent* event);
void KConfigSkeleton_CustomEvent(KConfigSkeleton* self, QEvent* event);
void KConfigSkeleton_OnCustomEvent(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseCustomEvent(KConfigSkeleton* self, QEvent* event);
void KConfigSkeleton_ConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_OnConnectNotify(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseConnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_DisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_OnDisconnectNotify(KConfigSkeleton* self, intptr_t slot);
void KConfigSkeleton_QBaseDisconnectNotify(KConfigSkeleton* self, const QMetaMethod* signal);
QObject* KConfigSkeleton_Sender(const KConfigSkeleton* self);
void KConfigSkeleton_OnSender(const KConfigSkeleton* self, intptr_t slot);
QObject* KConfigSkeleton_QBaseSender(const KConfigSkeleton* self);
int KConfigSkeleton_SenderSignalIndex(const KConfigSkeleton* self);
void KConfigSkeleton_OnSenderSignalIndex(const KConfigSkeleton* self, intptr_t slot);
int KConfigSkeleton_QBaseSenderSignalIndex(const KConfigSkeleton* self);
int KConfigSkeleton_Receivers(const KConfigSkeleton* self, const char* signal);
void KConfigSkeleton_OnReceivers(const KConfigSkeleton* self, intptr_t slot);
int KConfigSkeleton_QBaseReceivers(const KConfigSkeleton* self, const char* signal);
bool KConfigSkeleton_IsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_OnIsSignalConnected(const KConfigSkeleton* self, intptr_t slot);
bool KConfigSkeleton_QBaseIsSignalConnected(const KConfigSkeleton* self, const QMetaMethod* signal);
void KConfigSkeleton_Delete(KConfigSkeleton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
