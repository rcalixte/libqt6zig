#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBFORWARDINGWORKERBASE_H
#define SRC_EXTRAS_KIOC_LIBFORWARDINGWORKERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__ForwardingWorkerBase)
typedef KIO::ForwardingWorkerBase KIO__ForwardingWorkerBase;
#endif
typedef KIO::UDSEntry KIO__UDSEntry;
typedef KIO::WorkerBase KIO__WorkerBase;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerResult)
typedef KIO::WorkerResult KIO__WorkerResult;
#endif
#else
typedef struct KIO__ForwardingWorkerBase KIO__ForwardingWorkerBase;
typedef struct KIO__UDSEntry KIO__UDSEntry;
typedef struct KIO__WorkerBase KIO__WorkerBase;
typedef struct KIO__WorkerResult KIO__WorkerResult;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__ForwardingWorkerBase* KIO__ForwardingWorkerBase_new(const libqt_string protocol, const libqt_string poolSocket, const libqt_string appSocket);
QMetaObject* KIO__ForwardingWorkerBase_MetaObject(const KIO__ForwardingWorkerBase* self);
void* KIO__ForwardingWorkerBase_Metacast(KIO__ForwardingWorkerBase* self, const char* param1);
int KIO__ForwardingWorkerBase_Metacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Get(KIO__ForwardingWorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Put(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Stat(KIO__ForwardingWorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Mimetype(KIO__ForwardingWorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__ForwardingWorkerBase_ListDir(KIO__ForwardingWorkerBase* self, const QUrl* url);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Mkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Rename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Symlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Chmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Copy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Del(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile);
bool KIO__ForwardingWorkerBase_RewriteUrl(KIO__ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
void KIO__ForwardingWorkerBase_AdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
void KIO__ForwardingWorkerBase_OnMetaObject(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QMetaObject* KIO__ForwardingWorkerBase_SuperMetaObject(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnMetacast(KIO__ForwardingWorkerBase* self, intptr_t slot);
void* KIO__ForwardingWorkerBase_SuperMetacast(KIO__ForwardingWorkerBase* self, const char* param1);
void KIO__ForwardingWorkerBase_OnMetacall(KIO__ForwardingWorkerBase* self, intptr_t slot);
int KIO__ForwardingWorkerBase_SuperMetacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3);
void KIO__ForwardingWorkerBase_OnGet(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperGet(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnPut(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperPut(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags);
void KIO__ForwardingWorkerBase_OnStat(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperStat(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnMimetype(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperMimetype(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnListDir(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperListDir(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnMkdir(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperMkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions);
void KIO__ForwardingWorkerBase_OnRename(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperRename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags);
void KIO__ForwardingWorkerBase_OnSymlink(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSymlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags);
void KIO__ForwardingWorkerBase_OnChmod(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperChmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions);
void KIO__ForwardingWorkerBase_OnSetModificationTime(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime);
void KIO__ForwardingWorkerBase_OnCopy(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperCopy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags);
void KIO__ForwardingWorkerBase_OnDel(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperDel(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile);
void KIO__ForwardingWorkerBase_OnRewriteUrl(KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_SuperRewriteUrl(KIO__ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
void KIO__ForwardingWorkerBase_OnAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
bool KIO__ForwardingWorkerBase_Event(KIO__ForwardingWorkerBase* self, QEvent* event);
void KIO__ForwardingWorkerBase_OnEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_SuperEvent(KIO__ForwardingWorkerBase* self, QEvent* event);
bool KIO__ForwardingWorkerBase_EventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event);
void KIO__ForwardingWorkerBase_OnEventFilter(KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_SuperEventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event);
void KIO__ForwardingWorkerBase_TimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event);
void KIO__ForwardingWorkerBase_OnTimerEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperTimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event);
void KIO__ForwardingWorkerBase_ChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event);
void KIO__ForwardingWorkerBase_OnChildEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event);
void KIO__ForwardingWorkerBase_CustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event);
void KIO__ForwardingWorkerBase_OnCustomEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperCustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event);
void KIO__ForwardingWorkerBase_ConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_OnConnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_DisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_OnDisconnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperDisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_AppConnectionMade(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnAppConnectionMade(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperAppConnectionMade(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_SetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass);
void KIO__ForwardingWorkerBase_OnSetHost(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperSetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass);
KIO__WorkerResult* KIO__ForwardingWorkerBase_OpenConnection(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnOpenConnection(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperOpenConnection(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_CloseConnection(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnCloseConnection(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperCloseConnection(KIO__ForwardingWorkerBase* self);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Open(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode);
void KIO__ForwardingWorkerBase_OnOpen(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperOpen(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Read(KIO__ForwardingWorkerBase* self, unsigned long long size);
void KIO__ForwardingWorkerBase_OnRead(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperRead(KIO__ForwardingWorkerBase* self, unsigned long long size);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Write(KIO__ForwardingWorkerBase* self, const libqt_string data);
void KIO__ForwardingWorkerBase_OnWrite(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperWrite(KIO__ForwardingWorkerBase* self, const libqt_string data);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Seek(KIO__ForwardingWorkerBase* self, unsigned long long offset);
void KIO__ForwardingWorkerBase_OnSeek(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSeek(KIO__ForwardingWorkerBase* self, unsigned long long offset);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Truncate(KIO__ForwardingWorkerBase* self, unsigned long long size);
void KIO__ForwardingWorkerBase_OnTruncate(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperTruncate(KIO__ForwardingWorkerBase* self, unsigned long long size);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Close(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnClose(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperClose(KIO__ForwardingWorkerBase* self);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Chown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group);
void KIO__ForwardingWorkerBase_OnChown(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperChown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Special(KIO__ForwardingWorkerBase* self, const libqt_string data);
void KIO__ForwardingWorkerBase_OnSpecial(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSpecial(KIO__ForwardingWorkerBase* self, const libqt_string data);
KIO__WorkerResult* KIO__ForwardingWorkerBase_FileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_WorkerStatus2(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnWorkerStatus2(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperWorkerStatus2(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_ReparseConfiguration(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnReparseConfiguration(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_SuperReparseConfiguration(KIO__ForwardingWorkerBase* self);
QUrl* KIO__ForwardingWorkerBase_ProcessedUrl(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnProcessedUrl(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QUrl* KIO__ForwardingWorkerBase_SuperProcessedUrl(const KIO__ForwardingWorkerBase* self);
QUrl* KIO__ForwardingWorkerBase_RequestedUrl(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnRequestedUrl(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QUrl* KIO__ForwardingWorkerBase_SuperRequestedUrl(const KIO__ForwardingWorkerBase* self);
QObject* KIO__ForwardingWorkerBase_Sender(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnSender(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QObject* KIO__ForwardingWorkerBase_SuperSender(const KIO__ForwardingWorkerBase* self);
int KIO__ForwardingWorkerBase_SenderSignalIndex(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnSenderSignalIndex(const KIO__ForwardingWorkerBase* self, intptr_t slot);
int KIO__ForwardingWorkerBase_SuperSenderSignalIndex(const KIO__ForwardingWorkerBase* self);
int KIO__ForwardingWorkerBase_Receivers(const KIO__ForwardingWorkerBase* self, const char* signal);
void KIO__ForwardingWorkerBase_OnReceivers(const KIO__ForwardingWorkerBase* self, intptr_t slot);
int KIO__ForwardingWorkerBase_SuperReceivers(const KIO__ForwardingWorkerBase* self, const char* signal);
bool KIO__ForwardingWorkerBase_IsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_OnIsSignalConnected(const KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_SuperIsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_Delete(KIO__ForwardingWorkerBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
