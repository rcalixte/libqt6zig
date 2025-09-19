#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKDIRLISTER_H
#define SRC_EXTRAS_KIOC_LIBKDIRLISTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::ListJob KIO__ListJob;
#else
typedef struct KCoreDirLister KCoreDirLister;
typedef struct KDirLister KDirLister;
typedef struct KIO__ListJob KIO__ListJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KDirLister* KDirLister_new();
KDirLister* KDirLister_new2(QObject* parent);
QMetaObject* KDirLister_MetaObject(const KDirLister* self);
void* KDirLister_Metacast(KDirLister* self, const char* param1);
int KDirLister_Metacall(KDirLister* self, int param1, int param2, void** param3);
libqt_string KDirLister_Tr(const char* s);
bool KDirLister_AutoErrorHandlingEnabled(const KDirLister* self);
void KDirLister_SetMainWindow(KDirLister* self, QWidget* window);
QWidget* KDirLister_MainWindow(KDirLister* self);
void KDirLister_JobStarted(KDirLister* self, KIO__ListJob* param1);
libqt_string KDirLister_Tr2(const char* s, const char* c);
libqt_string KDirLister_Tr3(const char* s, const char* c, int n);
void KDirLister_OnMetacall(KDirLister* self, intptr_t slot);
int KDirLister_QBaseMetacall(KDirLister* self, int param1, int param2, void** param3);
void KDirLister_OnJobStarted(KDirLister* self, intptr_t slot);
void KDirLister_QBaseJobStarted(KDirLister* self, KIO__ListJob* param1);
bool KDirLister_Event(KDirLister* self, QEvent* event);
void KDirLister_OnEvent(KDirLister* self, intptr_t slot);
bool KDirLister_QBaseEvent(KDirLister* self, QEvent* event);
bool KDirLister_EventFilter(KDirLister* self, QObject* watched, QEvent* event);
void KDirLister_OnEventFilter(KDirLister* self, intptr_t slot);
bool KDirLister_QBaseEventFilter(KDirLister* self, QObject* watched, QEvent* event);
void KDirLister_TimerEvent(KDirLister* self, QTimerEvent* event);
void KDirLister_OnTimerEvent(KDirLister* self, intptr_t slot);
void KDirLister_QBaseTimerEvent(KDirLister* self, QTimerEvent* event);
void KDirLister_ChildEvent(KDirLister* self, QChildEvent* event);
void KDirLister_OnChildEvent(KDirLister* self, intptr_t slot);
void KDirLister_QBaseChildEvent(KDirLister* self, QChildEvent* event);
void KDirLister_CustomEvent(KDirLister* self, QEvent* event);
void KDirLister_OnCustomEvent(KDirLister* self, intptr_t slot);
void KDirLister_QBaseCustomEvent(KDirLister* self, QEvent* event);
void KDirLister_ConnectNotify(KDirLister* self, const QMetaMethod* signal);
void KDirLister_OnConnectNotify(KDirLister* self, intptr_t slot);
void KDirLister_QBaseConnectNotify(KDirLister* self, const QMetaMethod* signal);
void KDirLister_DisconnectNotify(KDirLister* self, const QMetaMethod* signal);
void KDirLister_OnDisconnectNotify(KDirLister* self, intptr_t slot);
void KDirLister_QBaseDisconnectNotify(KDirLister* self, const QMetaMethod* signal);
QObject* KDirLister_Sender(const KDirLister* self);
void KDirLister_OnSender(const KDirLister* self, intptr_t slot);
QObject* KDirLister_QBaseSender(const KDirLister* self);
int KDirLister_SenderSignalIndex(const KDirLister* self);
void KDirLister_OnSenderSignalIndex(const KDirLister* self, intptr_t slot);
int KDirLister_QBaseSenderSignalIndex(const KDirLister* self);
int KDirLister_Receivers(const KDirLister* self, const char* signal);
void KDirLister_OnReceivers(const KDirLister* self, intptr_t slot);
int KDirLister_QBaseReceivers(const KDirLister* self, const char* signal);
bool KDirLister_IsSignalConnected(const KDirLister* self, const QMetaMethod* signal);
void KDirLister_OnIsSignalConnected(const KDirLister* self, intptr_t slot);
bool KDirLister_QBaseIsSignalConnected(const KDirLister* self, const QMetaMethod* signal);
void KDirLister_Delete(KDirLister* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
