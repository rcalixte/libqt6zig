#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKDIRWATCH_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKDIRWATCH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDirWatch KDirWatch;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KDirWatch* KDirWatch_new();
KDirWatch* KDirWatch_new2(QObject* parent);
QMetaObject* KDirWatch_MetaObject(const KDirWatch* self);
void* KDirWatch_Metacast(KDirWatch* self, const char* param1);
int KDirWatch_Metacall(KDirWatch* self, int param1, int param2, void** param3);
libqt_string KDirWatch_Tr(const char* s);
void KDirWatch_AddDir(KDirWatch* self, const libqt_string path);
void KDirWatch_AddFile(KDirWatch* self, const libqt_string file);
QDateTime* KDirWatch_Ctime(const KDirWatch* self, const libqt_string path);
void KDirWatch_RemoveDir(KDirWatch* self, const libqt_string path);
void KDirWatch_RemoveFile(KDirWatch* self, const libqt_string file);
bool KDirWatch_StopDirScan(KDirWatch* self, const libqt_string path);
bool KDirWatch_RestartDirScan(KDirWatch* self, const libqt_string path);
void KDirWatch_StartScan(KDirWatch* self);
void KDirWatch_StopScan(KDirWatch* self);
bool KDirWatch_IsStopped(KDirWatch* self);
bool KDirWatch_Contains(const KDirWatch* self, const libqt_string path);
int KDirWatch_InternalMethod(const KDirWatch* self);
KDirWatch* KDirWatch_Self();
bool KDirWatch_Exists();
bool KDirWatch_Event(KDirWatch* self, QEvent* event);
void KDirWatch_SetCreated(KDirWatch* self, const libqt_string path);
void KDirWatch_SetDirty(KDirWatch* self, const libqt_string path);
void KDirWatch_SetDeleted(KDirWatch* self, const libqt_string path);
void KDirWatch_Dirty(KDirWatch* self, const libqt_string path);
void KDirWatch_Connect_Dirty(KDirWatch* self, intptr_t slot);
void KDirWatch_Created(KDirWatch* self, const libqt_string path);
void KDirWatch_Connect_Created(KDirWatch* self, intptr_t slot);
void KDirWatch_Deleted(KDirWatch* self, const libqt_string path);
void KDirWatch_Connect_Deleted(KDirWatch* self, intptr_t slot);
libqt_string KDirWatch_Tr2(const char* s, const char* c);
libqt_string KDirWatch_Tr3(const char* s, const char* c, int n);
void KDirWatch_AddDir2(KDirWatch* self, const libqt_string path, int watchModes);
void KDirWatch_StartScan1(KDirWatch* self, bool notify);
void KDirWatch_StartScan2(KDirWatch* self, bool notify, bool skippedToo);
void KDirWatch_OnMetacall(KDirWatch* self, intptr_t slot);
int KDirWatch_QBaseMetacall(KDirWatch* self, int param1, int param2, void** param3);
void KDirWatch_OnEvent(KDirWatch* self, intptr_t slot);
bool KDirWatch_QBaseEvent(KDirWatch* self, QEvent* event);
bool KDirWatch_EventFilter(KDirWatch* self, QObject* watched, QEvent* event);
void KDirWatch_OnEventFilter(KDirWatch* self, intptr_t slot);
bool KDirWatch_QBaseEventFilter(KDirWatch* self, QObject* watched, QEvent* event);
void KDirWatch_TimerEvent(KDirWatch* self, QTimerEvent* event);
void KDirWatch_OnTimerEvent(KDirWatch* self, intptr_t slot);
void KDirWatch_QBaseTimerEvent(KDirWatch* self, QTimerEvent* event);
void KDirWatch_ChildEvent(KDirWatch* self, QChildEvent* event);
void KDirWatch_OnChildEvent(KDirWatch* self, intptr_t slot);
void KDirWatch_QBaseChildEvent(KDirWatch* self, QChildEvent* event);
void KDirWatch_CustomEvent(KDirWatch* self, QEvent* event);
void KDirWatch_OnCustomEvent(KDirWatch* self, intptr_t slot);
void KDirWatch_QBaseCustomEvent(KDirWatch* self, QEvent* event);
void KDirWatch_ConnectNotify(KDirWatch* self, const QMetaMethod* signal);
void KDirWatch_OnConnectNotify(KDirWatch* self, intptr_t slot);
void KDirWatch_QBaseConnectNotify(KDirWatch* self, const QMetaMethod* signal);
void KDirWatch_DisconnectNotify(KDirWatch* self, const QMetaMethod* signal);
void KDirWatch_OnDisconnectNotify(KDirWatch* self, intptr_t slot);
void KDirWatch_QBaseDisconnectNotify(KDirWatch* self, const QMetaMethod* signal);
QObject* KDirWatch_Sender(const KDirWatch* self);
void KDirWatch_OnSender(const KDirWatch* self, intptr_t slot);
QObject* KDirWatch_QBaseSender(const KDirWatch* self);
int KDirWatch_SenderSignalIndex(const KDirWatch* self);
void KDirWatch_OnSenderSignalIndex(const KDirWatch* self, intptr_t slot);
int KDirWatch_QBaseSenderSignalIndex(const KDirWatch* self);
int KDirWatch_Receivers(const KDirWatch* self, const char* signal);
void KDirWatch_OnReceivers(const KDirWatch* self, intptr_t slot);
int KDirWatch_QBaseReceivers(const KDirWatch* self, const char* signal);
bool KDirWatch_IsSignalConnected(const KDirWatch* self, const QMetaMethod* signal);
void KDirWatch_OnIsSignalConnected(const KDirWatch* self, intptr_t slot);
bool KDirWatch_QBaseIsSignalConnected(const KDirWatch* self, const QMetaMethod* signal);
void KDirWatch_Delete(KDirWatch* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
