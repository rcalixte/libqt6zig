#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKWINDOWSTATESAVER_H
#define SRC_EXTRAS_KCONFIGC_LIBKWINDOWSTATESAVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KWindowStateSaver KWindowStateSaver;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWindow QWindow;
#endif

KWindowStateSaver* KWindowStateSaver_new(QWindow* window, const KConfigGroup* configGroup);
KWindowStateSaver* KWindowStateSaver_new2(QWindow* window, const libqt_string configGroupName);
QMetaObject* KWindowStateSaver_MetaObject(const KWindowStateSaver* self);
void* KWindowStateSaver_Metacast(KWindowStateSaver* self, const char* param1);
int KWindowStateSaver_Metacall(KWindowStateSaver* self, int param1, int param2, void** param3);
libqt_string KWindowStateSaver_Tr(const char* s);
libqt_string KWindowStateSaver_Tr2(const char* s, const char* c);
libqt_string KWindowStateSaver_Tr3(const char* s, const char* c, int n);
void KWindowStateSaver_OnMetacall(KWindowStateSaver* self, intptr_t slot);
int KWindowStateSaver_QBaseMetacall(KWindowStateSaver* self, int param1, int param2, void** param3);
bool KWindowStateSaver_Event(KWindowStateSaver* self, QEvent* event);
void KWindowStateSaver_OnEvent(KWindowStateSaver* self, intptr_t slot);
bool KWindowStateSaver_QBaseEvent(KWindowStateSaver* self, QEvent* event);
void KWindowStateSaver_ChildEvent(KWindowStateSaver* self, QChildEvent* event);
void KWindowStateSaver_OnChildEvent(KWindowStateSaver* self, intptr_t slot);
void KWindowStateSaver_QBaseChildEvent(KWindowStateSaver* self, QChildEvent* event);
void KWindowStateSaver_CustomEvent(KWindowStateSaver* self, QEvent* event);
void KWindowStateSaver_OnCustomEvent(KWindowStateSaver* self, intptr_t slot);
void KWindowStateSaver_QBaseCustomEvent(KWindowStateSaver* self, QEvent* event);
void KWindowStateSaver_ConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
void KWindowStateSaver_OnConnectNotify(KWindowStateSaver* self, intptr_t slot);
void KWindowStateSaver_QBaseConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
void KWindowStateSaver_DisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
void KWindowStateSaver_OnDisconnectNotify(KWindowStateSaver* self, intptr_t slot);
void KWindowStateSaver_QBaseDisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal);
QObject* KWindowStateSaver_Sender(const KWindowStateSaver* self);
void KWindowStateSaver_OnSender(const KWindowStateSaver* self, intptr_t slot);
QObject* KWindowStateSaver_QBaseSender(const KWindowStateSaver* self);
int KWindowStateSaver_SenderSignalIndex(const KWindowStateSaver* self);
void KWindowStateSaver_OnSenderSignalIndex(const KWindowStateSaver* self, intptr_t slot);
int KWindowStateSaver_QBaseSenderSignalIndex(const KWindowStateSaver* self);
int KWindowStateSaver_Receivers(const KWindowStateSaver* self, const char* signal);
void KWindowStateSaver_OnReceivers(const KWindowStateSaver* self, intptr_t slot);
int KWindowStateSaver_QBaseReceivers(const KWindowStateSaver* self, const char* signal);
bool KWindowStateSaver_IsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal);
void KWindowStateSaver_OnIsSignalConnected(const KWindowStateSaver* self, intptr_t slot);
bool KWindowStateSaver_QBaseIsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal);
void KWindowStateSaver_Delete(KWindowStateSaver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
