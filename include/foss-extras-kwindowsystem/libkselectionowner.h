#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKSELECTIONOWNER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKSELECTIONOWNER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSelectionOwner KSelectionOwner;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KSelectionOwner* KSelectionOwner_new(const char* selection);
KSelectionOwner* KSelectionOwner_new2(const char* selection, int screen);
KSelectionOwner* KSelectionOwner_new3(const char* selection, int screen, QObject* parent);
QMetaObject* KSelectionOwner_MetaObject(const KSelectionOwner* self);
void* KSelectionOwner_Metacast(KSelectionOwner* self, const char* param1);
int KSelectionOwner_Metacall(KSelectionOwner* self, int param1, int param2, void** param3);
libqt_string KSelectionOwner_Tr(const char* s);
void KSelectionOwner_Claim(KSelectionOwner* self, bool force);
void KSelectionOwner_Release(KSelectionOwner* self);
bool KSelectionOwner_FilterEvent(KSelectionOwner* self, void* ev_P);
void KSelectionOwner_TimerEvent(KSelectionOwner* self, QTimerEvent* event);
void KSelectionOwner_LostOwnership(KSelectionOwner* self);
void KSelectionOwner_Connect_LostOwnership(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_ClaimedOwnership(KSelectionOwner* self);
void KSelectionOwner_Connect_ClaimedOwnership(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_FailedToClaimOwnership(KSelectionOwner* self);
void KSelectionOwner_Connect_FailedToClaimOwnership(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_GetAtoms(KSelectionOwner* self);
libqt_string KSelectionOwner_Tr2(const char* s, const char* c);
libqt_string KSelectionOwner_Tr3(const char* s, const char* c, int n);
void KSelectionOwner_Claim2(KSelectionOwner* self, bool force, bool force_kill);
void KSelectionOwner_OnMetacall(KSelectionOwner* self, intptr_t slot);
int KSelectionOwner_QBaseMetacall(KSelectionOwner* self, int param1, int param2, void** param3);
void KSelectionOwner_OnTimerEvent(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseTimerEvent(KSelectionOwner* self, QTimerEvent* event);
void KSelectionOwner_OnGetAtoms(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseGetAtoms(KSelectionOwner* self);
bool KSelectionOwner_Event(KSelectionOwner* self, QEvent* event);
void KSelectionOwner_OnEvent(KSelectionOwner* self, intptr_t slot);
bool KSelectionOwner_QBaseEvent(KSelectionOwner* self, QEvent* event);
bool KSelectionOwner_EventFilter(KSelectionOwner* self, QObject* watched, QEvent* event);
void KSelectionOwner_OnEventFilter(KSelectionOwner* self, intptr_t slot);
bool KSelectionOwner_QBaseEventFilter(KSelectionOwner* self, QObject* watched, QEvent* event);
void KSelectionOwner_ChildEvent(KSelectionOwner* self, QChildEvent* event);
void KSelectionOwner_OnChildEvent(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseChildEvent(KSelectionOwner* self, QChildEvent* event);
void KSelectionOwner_CustomEvent(KSelectionOwner* self, QEvent* event);
void KSelectionOwner_OnCustomEvent(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseCustomEvent(KSelectionOwner* self, QEvent* event);
void KSelectionOwner_ConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_OnConnectNotify(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_DisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_OnDisconnectNotify(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseDisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_SetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2);
void KSelectionOwner_OnSetData(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_QBaseSetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2);
QObject* KSelectionOwner_Sender(const KSelectionOwner* self);
void KSelectionOwner_OnSender(const KSelectionOwner* self, intptr_t slot);
QObject* KSelectionOwner_QBaseSender(const KSelectionOwner* self);
int KSelectionOwner_SenderSignalIndex(const KSelectionOwner* self);
void KSelectionOwner_OnSenderSignalIndex(const KSelectionOwner* self, intptr_t slot);
int KSelectionOwner_QBaseSenderSignalIndex(const KSelectionOwner* self);
int KSelectionOwner_Receivers(const KSelectionOwner* self, const char* signal);
void KSelectionOwner_OnReceivers(const KSelectionOwner* self, intptr_t slot);
int KSelectionOwner_QBaseReceivers(const KSelectionOwner* self, const char* signal);
bool KSelectionOwner_IsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_OnIsSignalConnected(const KSelectionOwner* self, intptr_t slot);
bool KSelectionOwner_QBaseIsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_Delete(KSelectionOwner* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
