#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONOWNER_H
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKSELECTIONOWNER_H

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
typedef struct xcb_window_t xcb_window_t;
#endif

#ifdef __linux__
KSelectionOwner* KSelectionOwner_new(uint32_t selection);
#endif
KSelectionOwner* KSelectionOwner_new2(const char* selection);
#ifdef __linux__
KSelectionOwner* KSelectionOwner_new3(uint32_t selection, xcb_connection_t* c, uint32_t root);
#endif
#ifdef __linux__
KSelectionOwner* KSelectionOwner_new4(const char* selection, xcb_connection_t* c, uint32_t root);
#endif
#ifdef __linux__
KSelectionOwner* KSelectionOwner_new5(uint32_t selection, int screen);
#endif
#ifdef __linux__
KSelectionOwner* KSelectionOwner_new6(uint32_t selection, int screen, QObject* parent);
#endif
KSelectionOwner* KSelectionOwner_new7(const char* selection, int screen);
KSelectionOwner* KSelectionOwner_new8(const char* selection, int screen, QObject* parent);
#ifdef __linux__
KSelectionOwner* KSelectionOwner_new9(uint32_t selection, xcb_connection_t* c, uint32_t root, QObject* parent);
#endif
#ifdef __linux__
KSelectionOwner* KSelectionOwner_new10(const char* selection, xcb_connection_t* c, uint32_t root, QObject* parent);
#endif
QMetaObject* KSelectionOwner_MetaObject(const KSelectionOwner* self);
void* KSelectionOwner_Metacast(KSelectionOwner* self, const char* param1);
int KSelectionOwner_Metacall(KSelectionOwner* self, int param1, int param2, void** param3);
libqt_string KSelectionOwner_Tr(const char* s);
void KSelectionOwner_Claim(KSelectionOwner* self, bool force);
void KSelectionOwner_Release(KSelectionOwner* self);
#ifdef __linux__
uint32_t KSelectionOwner_OwnerWindow(const KSelectionOwner* self);
#endif
bool KSelectionOwner_FilterEvent(KSelectionOwner* self, void* ev_P);
void KSelectionOwner_TimerEvent(KSelectionOwner* self, QTimerEvent* event);
void KSelectionOwner_LostOwnership(KSelectionOwner* self);
void KSelectionOwner_Connect_LostOwnership(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_ClaimedOwnership(KSelectionOwner* self);
void KSelectionOwner_Connect_ClaimedOwnership(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_FailedToClaimOwnership(KSelectionOwner* self);
void KSelectionOwner_Connect_FailedToClaimOwnership(KSelectionOwner* self, intptr_t slot);
#ifdef __linux__
bool KSelectionOwner_GenericReply(KSelectionOwner* self, uint32_t target, uint32_t property, uint32_t requestor);
#endif
#ifdef __linux__
void KSelectionOwner_ReplyTargets(KSelectionOwner* self, uint32_t property, uint32_t requestor);
#endif
void KSelectionOwner_GetAtoms(KSelectionOwner* self);
libqt_string KSelectionOwner_Tr2(const char* s, const char* c);
libqt_string KSelectionOwner_Tr3(const char* s, const char* c, int n);
void KSelectionOwner_Claim2(KSelectionOwner* self, bool force, bool force_kill);
void KSelectionOwner_OnMetaObject(const KSelectionOwner* self, intptr_t slot);
QMetaObject* KSelectionOwner_SuperMetaObject(const KSelectionOwner* self);
void KSelectionOwner_OnMetacast(KSelectionOwner* self, intptr_t slot);
void* KSelectionOwner_SuperMetacast(KSelectionOwner* self, const char* param1);
void KSelectionOwner_OnMetacall(KSelectionOwner* self, intptr_t slot);
int KSelectionOwner_SuperMetacall(KSelectionOwner* self, int param1, int param2, void** param3);
void KSelectionOwner_OnTimerEvent(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperTimerEvent(KSelectionOwner* self, QTimerEvent* event);
#ifdef __linux__
void KSelectionOwner_OnGenericReply(KSelectionOwner* self, intptr_t slot);
#endif
#ifdef __linux__
bool KSelectionOwner_SuperGenericReply(KSelectionOwner* self, uint32_t target, uint32_t property, uint32_t requestor);
#endif
#ifdef __linux__
void KSelectionOwner_OnReplyTargets(KSelectionOwner* self, intptr_t slot);
#endif
#ifdef __linux__
void KSelectionOwner_SuperReplyTargets(KSelectionOwner* self, uint32_t property, uint32_t requestor);
#endif
void KSelectionOwner_OnGetAtoms(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperGetAtoms(KSelectionOwner* self);
bool KSelectionOwner_Event(KSelectionOwner* self, QEvent* event);
void KSelectionOwner_OnEvent(KSelectionOwner* self, intptr_t slot);
bool KSelectionOwner_SuperEvent(KSelectionOwner* self, QEvent* event);
bool KSelectionOwner_EventFilter(KSelectionOwner* self, QObject* watched, QEvent* event);
void KSelectionOwner_OnEventFilter(KSelectionOwner* self, intptr_t slot);
bool KSelectionOwner_SuperEventFilter(KSelectionOwner* self, QObject* watched, QEvent* event);
void KSelectionOwner_ChildEvent(KSelectionOwner* self, QChildEvent* event);
void KSelectionOwner_OnChildEvent(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperChildEvent(KSelectionOwner* self, QChildEvent* event);
void KSelectionOwner_CustomEvent(KSelectionOwner* self, QEvent* event);
void KSelectionOwner_OnCustomEvent(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperCustomEvent(KSelectionOwner* self, QEvent* event);
void KSelectionOwner_ConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_OnConnectNotify(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperConnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_DisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_OnDisconnectNotify(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperDisconnectNotify(KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_SetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2);
void KSelectionOwner_OnSetData(KSelectionOwner* self, intptr_t slot);
void KSelectionOwner_SuperSetData(KSelectionOwner* self, uint32_t extra1, uint32_t extra2);
QObject* KSelectionOwner_Sender(const KSelectionOwner* self);
void KSelectionOwner_OnSender(const KSelectionOwner* self, intptr_t slot);
QObject* KSelectionOwner_SuperSender(const KSelectionOwner* self);
int KSelectionOwner_SenderSignalIndex(const KSelectionOwner* self);
void KSelectionOwner_OnSenderSignalIndex(const KSelectionOwner* self, intptr_t slot);
int KSelectionOwner_SuperSenderSignalIndex(const KSelectionOwner* self);
int KSelectionOwner_Receivers(const KSelectionOwner* self, const char* signal);
void KSelectionOwner_OnReceivers(const KSelectionOwner* self, intptr_t slot);
int KSelectionOwner_SuperReceivers(const KSelectionOwner* self, const char* signal);
bool KSelectionOwner_IsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_OnIsSignalConnected(const KSelectionOwner* self, intptr_t slot);
bool KSelectionOwner_SuperIsSignalConnected(const KSelectionOwner* self, const QMetaMethod* signal);
void KSelectionOwner_Delete(KSelectionOwner* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
