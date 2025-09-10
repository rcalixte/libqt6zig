#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKACTION_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBookmark KBookmark;
typedef struct KBookmarkAction KBookmarkAction;
typedef struct KBookmarkActionInterface KBookmarkActionInterface;
typedef struct KBookmarkOwner KBookmarkOwner;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KBookmarkAction* KBookmarkAction_new(const KBookmark* bk, KBookmarkOwner* owner, QObject* parent);
QMetaObject* KBookmarkAction_MetaObject(const KBookmarkAction* self);
void* KBookmarkAction_Metacast(KBookmarkAction* self, const char* param1);
int KBookmarkAction_Metacall(KBookmarkAction* self, int param1, int param2, void** param3);
libqt_string KBookmarkAction_Tr(const char* s);
void KBookmarkAction_SlotSelected(KBookmarkAction* self, int mb, int km);
libqt_string KBookmarkAction_Tr2(const char* s, const char* c);
libqt_string KBookmarkAction_Tr3(const char* s, const char* c, int n);
void KBookmarkAction_OnMetacall(KBookmarkAction* self, intptr_t slot);
int KBookmarkAction_QBaseMetacall(KBookmarkAction* self, int param1, int param2, void** param3);
bool KBookmarkAction_Event(KBookmarkAction* self, QEvent* param1);
void KBookmarkAction_OnEvent(KBookmarkAction* self, intptr_t slot);
bool KBookmarkAction_QBaseEvent(KBookmarkAction* self, QEvent* param1);
bool KBookmarkAction_EventFilter(KBookmarkAction* self, QObject* watched, QEvent* event);
void KBookmarkAction_OnEventFilter(KBookmarkAction* self, intptr_t slot);
bool KBookmarkAction_QBaseEventFilter(KBookmarkAction* self, QObject* watched, QEvent* event);
void KBookmarkAction_TimerEvent(KBookmarkAction* self, QTimerEvent* event);
void KBookmarkAction_OnTimerEvent(KBookmarkAction* self, intptr_t slot);
void KBookmarkAction_QBaseTimerEvent(KBookmarkAction* self, QTimerEvent* event);
void KBookmarkAction_ChildEvent(KBookmarkAction* self, QChildEvent* event);
void KBookmarkAction_OnChildEvent(KBookmarkAction* self, intptr_t slot);
void KBookmarkAction_QBaseChildEvent(KBookmarkAction* self, QChildEvent* event);
void KBookmarkAction_CustomEvent(KBookmarkAction* self, QEvent* event);
void KBookmarkAction_OnCustomEvent(KBookmarkAction* self, intptr_t slot);
void KBookmarkAction_QBaseCustomEvent(KBookmarkAction* self, QEvent* event);
void KBookmarkAction_ConnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
void KBookmarkAction_OnConnectNotify(KBookmarkAction* self, intptr_t slot);
void KBookmarkAction_QBaseConnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
void KBookmarkAction_DisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
void KBookmarkAction_OnDisconnectNotify(KBookmarkAction* self, intptr_t slot);
void KBookmarkAction_QBaseDisconnectNotify(KBookmarkAction* self, const QMetaMethod* signal);
QObject* KBookmarkAction_Sender(const KBookmarkAction* self);
void KBookmarkAction_OnSender(const KBookmarkAction* self, intptr_t slot);
QObject* KBookmarkAction_QBaseSender(const KBookmarkAction* self);
int KBookmarkAction_SenderSignalIndex(const KBookmarkAction* self);
void KBookmarkAction_OnSenderSignalIndex(const KBookmarkAction* self, intptr_t slot);
int KBookmarkAction_QBaseSenderSignalIndex(const KBookmarkAction* self);
int KBookmarkAction_Receivers(const KBookmarkAction* self, const char* signal);
void KBookmarkAction_OnReceivers(const KBookmarkAction* self, intptr_t slot);
int KBookmarkAction_QBaseReceivers(const KBookmarkAction* self, const char* signal);
bool KBookmarkAction_IsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal);
void KBookmarkAction_OnIsSignalConnected(const KBookmarkAction* self, intptr_t slot);
bool KBookmarkAction_QBaseIsSignalConnected(const KBookmarkAction* self, const QMetaMethod* signal);
void KBookmarkAction_Delete(KBookmarkAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
