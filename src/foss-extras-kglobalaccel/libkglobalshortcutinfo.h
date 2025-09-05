#pragma once
#ifndef SRC_FOSS_EXTRAS_KGLOBALACCELC_LIBKGLOBALSHORTCUTINFO_H
#define SRC_FOSS_EXTRAS_KGLOBALACCELC_LIBKGLOBALSHORTCUTINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KGlobalShortcutInfo KGlobalShortcutInfo;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KGlobalShortcutInfo* KGlobalShortcutInfo_new();
KGlobalShortcutInfo* KGlobalShortcutInfo_new2(const KGlobalShortcutInfo* rhs);
QMetaObject* KGlobalShortcutInfo_MetaObject(const KGlobalShortcutInfo* self);
void* KGlobalShortcutInfo_Metacast(KGlobalShortcutInfo* self, const char* param1);
int KGlobalShortcutInfo_Metacall(KGlobalShortcutInfo* self, int param1, int param2, void** param3);
libqt_string KGlobalShortcutInfo_Tr(const char* s);
void KGlobalShortcutInfo_OperatorAssign(KGlobalShortcutInfo* self, const KGlobalShortcutInfo* rhs);
libqt_string KGlobalShortcutInfo_ContextFriendlyName(const KGlobalShortcutInfo* self);
libqt_string KGlobalShortcutInfo_ContextUniqueName(const KGlobalShortcutInfo* self);
libqt_string KGlobalShortcutInfo_ComponentFriendlyName(const KGlobalShortcutInfo* self);
libqt_string KGlobalShortcutInfo_ComponentUniqueName(const KGlobalShortcutInfo* self);
libqt_list /* of QKeySequence* */ KGlobalShortcutInfo_DefaultKeys(const KGlobalShortcutInfo* self);
libqt_string KGlobalShortcutInfo_FriendlyName(const KGlobalShortcutInfo* self);
libqt_list /* of QKeySequence* */ KGlobalShortcutInfo_Keys(const KGlobalShortcutInfo* self);
libqt_string KGlobalShortcutInfo_UniqueName(const KGlobalShortcutInfo* self);
libqt_string KGlobalShortcutInfo_Tr2(const char* s, const char* c);
libqt_string KGlobalShortcutInfo_Tr3(const char* s, const char* c, int n);
void KGlobalShortcutInfo_OnMetacall(KGlobalShortcutInfo* self, intptr_t slot);
int KGlobalShortcutInfo_QBaseMetacall(KGlobalShortcutInfo* self, int param1, int param2, void** param3);
bool KGlobalShortcutInfo_Event(KGlobalShortcutInfo* self, QEvent* event);
void KGlobalShortcutInfo_OnEvent(KGlobalShortcutInfo* self, intptr_t slot);
bool KGlobalShortcutInfo_QBaseEvent(KGlobalShortcutInfo* self, QEvent* event);
bool KGlobalShortcutInfo_EventFilter(KGlobalShortcutInfo* self, QObject* watched, QEvent* event);
void KGlobalShortcutInfo_OnEventFilter(KGlobalShortcutInfo* self, intptr_t slot);
bool KGlobalShortcutInfo_QBaseEventFilter(KGlobalShortcutInfo* self, QObject* watched, QEvent* event);
void KGlobalShortcutInfo_TimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event);
void KGlobalShortcutInfo_OnTimerEvent(KGlobalShortcutInfo* self, intptr_t slot);
void KGlobalShortcutInfo_QBaseTimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event);
void KGlobalShortcutInfo_ChildEvent(KGlobalShortcutInfo* self, QChildEvent* event);
void KGlobalShortcutInfo_OnChildEvent(KGlobalShortcutInfo* self, intptr_t slot);
void KGlobalShortcutInfo_QBaseChildEvent(KGlobalShortcutInfo* self, QChildEvent* event);
void KGlobalShortcutInfo_CustomEvent(KGlobalShortcutInfo* self, QEvent* event);
void KGlobalShortcutInfo_OnCustomEvent(KGlobalShortcutInfo* self, intptr_t slot);
void KGlobalShortcutInfo_QBaseCustomEvent(KGlobalShortcutInfo* self, QEvent* event);
void KGlobalShortcutInfo_ConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
void KGlobalShortcutInfo_OnConnectNotify(KGlobalShortcutInfo* self, intptr_t slot);
void KGlobalShortcutInfo_QBaseConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
void KGlobalShortcutInfo_DisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
void KGlobalShortcutInfo_OnDisconnectNotify(KGlobalShortcutInfo* self, intptr_t slot);
void KGlobalShortcutInfo_QBaseDisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal);
QObject* KGlobalShortcutInfo_Sender(const KGlobalShortcutInfo* self);
void KGlobalShortcutInfo_OnSender(const KGlobalShortcutInfo* self, intptr_t slot);
QObject* KGlobalShortcutInfo_QBaseSender(const KGlobalShortcutInfo* self);
int KGlobalShortcutInfo_SenderSignalIndex(const KGlobalShortcutInfo* self);
void KGlobalShortcutInfo_OnSenderSignalIndex(const KGlobalShortcutInfo* self, intptr_t slot);
int KGlobalShortcutInfo_QBaseSenderSignalIndex(const KGlobalShortcutInfo* self);
int KGlobalShortcutInfo_Receivers(const KGlobalShortcutInfo* self, const char* signal);
void KGlobalShortcutInfo_OnReceivers(const KGlobalShortcutInfo* self, intptr_t slot);
int KGlobalShortcutInfo_QBaseReceivers(const KGlobalShortcutInfo* self, const char* signal);
bool KGlobalShortcutInfo_IsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal);
void KGlobalShortcutInfo_OnIsSignalConnected(const KGlobalShortcutInfo* self, intptr_t slot);
bool KGlobalShortcutInfo_QBaseIsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal);
void KGlobalShortcutInfo_Delete(KGlobalShortcutInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
