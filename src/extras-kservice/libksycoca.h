#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBKSYCOCA_H
#define SRC_EXTRAS_KSERVICEC_LIBKSYCOCA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSycoca KSycoca;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KSycoca* KSycoca_new();
QMetaObject* KSycoca_MetaObject(const KSycoca* self);
void* KSycoca_Metacast(KSycoca* self, const char* param1);
int KSycoca_Metacall(KSycoca* self, int param1, int param2, void** param3);
libqt_string KSycoca_Tr(const char* s);
KSycoca* KSycoca_Self();
int KSycoca_Version();
bool KSycoca_IsAvailable();
QDataStream* KSycoca_FindEntry(KSycoca* self, int offset, int* typeVal);
QDataStream* KSycoca_FindFactory(KSycoca* self, int id);
libqt_string KSycoca_AbsoluteFilePath();
libqt_list /* of libqt_string */ KSycoca_AllResourceDirs(KSycoca* self);
bool KSycoca_IsBuilding(KSycoca* self);
void KSycoca_DisableAutoRebuild();
void KSycoca_FlagError();
void KSycoca_EnsureCacheValid(KSycoca* self);
void KSycoca_SetupTestMenu();
void KSycoca_DatabaseChanged(KSycoca* self);
void KSycoca_ConnectNotify(KSycoca* self, const QMetaMethod* signal);
libqt_string KSycoca_Tr2(const char* s, const char* c);
libqt_string KSycoca_Tr3(const char* s, const char* c, int n);
void KSycoca_OnMetacall(KSycoca* self, intptr_t slot);
int KSycoca_QBaseMetacall(KSycoca* self, int param1, int param2, void** param3);
void KSycoca_OnIsBuilding(KSycoca* self, intptr_t slot);
bool KSycoca_QBaseIsBuilding(KSycoca* self);
void KSycoca_OnConnectNotify(KSycoca* self, intptr_t slot);
void KSycoca_QBaseConnectNotify(KSycoca* self, const QMetaMethod* signal);
bool KSycoca_Event(KSycoca* self, QEvent* event);
void KSycoca_OnEvent(KSycoca* self, intptr_t slot);
bool KSycoca_QBaseEvent(KSycoca* self, QEvent* event);
bool KSycoca_EventFilter(KSycoca* self, QObject* watched, QEvent* event);
void KSycoca_OnEventFilter(KSycoca* self, intptr_t slot);
bool KSycoca_QBaseEventFilter(KSycoca* self, QObject* watched, QEvent* event);
void KSycoca_TimerEvent(KSycoca* self, QTimerEvent* event);
void KSycoca_OnTimerEvent(KSycoca* self, intptr_t slot);
void KSycoca_QBaseTimerEvent(KSycoca* self, QTimerEvent* event);
void KSycoca_ChildEvent(KSycoca* self, QChildEvent* event);
void KSycoca_OnChildEvent(KSycoca* self, intptr_t slot);
void KSycoca_QBaseChildEvent(KSycoca* self, QChildEvent* event);
void KSycoca_CustomEvent(KSycoca* self, QEvent* event);
void KSycoca_OnCustomEvent(KSycoca* self, intptr_t slot);
void KSycoca_QBaseCustomEvent(KSycoca* self, QEvent* event);
void KSycoca_DisconnectNotify(KSycoca* self, const QMetaMethod* signal);
void KSycoca_OnDisconnectNotify(KSycoca* self, intptr_t slot);
void KSycoca_QBaseDisconnectNotify(KSycoca* self, const QMetaMethod* signal);
QDataStream** KSycoca_Stream(KSycoca* self);
void KSycoca_OnStream(KSycoca* self, intptr_t slot);
QDataStream** KSycoca_QBaseStream(KSycoca* self);
QObject* KSycoca_Sender(const KSycoca* self);
void KSycoca_OnSender(const KSycoca* self, intptr_t slot);
QObject* KSycoca_QBaseSender(const KSycoca* self);
int KSycoca_SenderSignalIndex(const KSycoca* self);
void KSycoca_OnSenderSignalIndex(const KSycoca* self, intptr_t slot);
int KSycoca_QBaseSenderSignalIndex(const KSycoca* self);
int KSycoca_Receivers(const KSycoca* self, const char* signal);
void KSycoca_OnReceivers(const KSycoca* self, intptr_t slot);
int KSycoca_QBaseReceivers(const KSycoca* self, const char* signal);
bool KSycoca_IsSignalConnected(const KSycoca* self, const QMetaMethod* signal);
void KSycoca_OnIsSignalConnected(const KSycoca* self, intptr_t slot);
bool KSycoca_QBaseIsSignalConnected(const KSycoca* self, const QMetaMethod* signal);
void KSycoca_Delete(KSycoca* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
