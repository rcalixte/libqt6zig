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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__UDSEntry)
typedef KIO::UDSEntry KIO__UDSEntry;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerBase)
typedef KIO::WorkerBase KIO__WorkerBase;
#endif
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
libqt_string KIO__ForwardingWorkerBase_Tr(const char* s);
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
libqt_string KIO__ForwardingWorkerBase_Tr2(const char* s, const char* c);
libqt_string KIO__ForwardingWorkerBase_Tr3(const char* s, const char* c, int n);
void KIO__ForwardingWorkerBase_OnMetacall(KIO__ForwardingWorkerBase* self, intptr_t slot);
int KIO__ForwardingWorkerBase_QBaseMetacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3);
void KIO__ForwardingWorkerBase_OnGet(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseGet(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnPut(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBasePut(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags);
void KIO__ForwardingWorkerBase_OnStat(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseStat(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnMimetype(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseMimetype(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnListDir(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseListDir(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnMkdir(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseMkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions);
void KIO__ForwardingWorkerBase_OnRename(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseRename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags);
void KIO__ForwardingWorkerBase_OnSymlink(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSymlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags);
void KIO__ForwardingWorkerBase_OnChmod(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseChmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions);
void KIO__ForwardingWorkerBase_OnSetModificationTime(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime);
void KIO__ForwardingWorkerBase_OnCopy(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseCopy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags);
void KIO__ForwardingWorkerBase_OnDel(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseDel(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile);
void KIO__ForwardingWorkerBase_OnRewriteUrl(KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_QBaseRewriteUrl(KIO__ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
void KIO__ForwardingWorkerBase_OnAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
bool KIO__ForwardingWorkerBase_Event(KIO__ForwardingWorkerBase* self, QEvent* event);
void KIO__ForwardingWorkerBase_OnEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_QBaseEvent(KIO__ForwardingWorkerBase* self, QEvent* event);
bool KIO__ForwardingWorkerBase_EventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event);
void KIO__ForwardingWorkerBase_OnEventFilter(KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_QBaseEventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event);
void KIO__ForwardingWorkerBase_TimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event);
void KIO__ForwardingWorkerBase_OnTimerEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseTimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event);
void KIO__ForwardingWorkerBase_ChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event);
void KIO__ForwardingWorkerBase_OnChildEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event);
void KIO__ForwardingWorkerBase_CustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event);
void KIO__ForwardingWorkerBase_OnCustomEvent(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseCustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event);
void KIO__ForwardingWorkerBase_ConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_OnConnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_DisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_OnDisconnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseDisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_AppConnectionMade(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnAppConnectionMade(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseAppConnectionMade(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_SetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass);
void KIO__ForwardingWorkerBase_OnSetHost(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseSetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass);
KIO__WorkerResult* KIO__ForwardingWorkerBase_OpenConnection(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnOpenConnection(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseOpenConnection(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_CloseConnection(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnCloseConnection(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseCloseConnection(KIO__ForwardingWorkerBase* self);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Open(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode);
void KIO__ForwardingWorkerBase_OnOpen(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseOpen(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Read(KIO__ForwardingWorkerBase* self, unsigned long long size);
void KIO__ForwardingWorkerBase_OnRead(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseRead(KIO__ForwardingWorkerBase* self, unsigned long long size);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Write(KIO__ForwardingWorkerBase* self, const libqt_string data);
void KIO__ForwardingWorkerBase_OnWrite(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseWrite(KIO__ForwardingWorkerBase* self, const libqt_string data);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Seek(KIO__ForwardingWorkerBase* self, unsigned long long offset);
void KIO__ForwardingWorkerBase_OnSeek(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSeek(KIO__ForwardingWorkerBase* self, unsigned long long offset);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Truncate(KIO__ForwardingWorkerBase* self, unsigned long long size);
void KIO__ForwardingWorkerBase_OnTruncate(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseTruncate(KIO__ForwardingWorkerBase* self, unsigned long long size);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Close(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnClose(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseClose(KIO__ForwardingWorkerBase* self);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Chown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group);
void KIO__ForwardingWorkerBase_OnChown(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseChown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group);
KIO__WorkerResult* KIO__ForwardingWorkerBase_Special(KIO__ForwardingWorkerBase* self, const libqt_string data);
void KIO__ForwardingWorkerBase_OnSpecial(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSpecial(KIO__ForwardingWorkerBase* self, const libqt_string data);
KIO__WorkerResult* KIO__ForwardingWorkerBase_FileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, intptr_t slot);
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url);
void KIO__ForwardingWorkerBase_WorkerStatus2(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnWorkerStatus2(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseWorkerStatus2(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_ReparseConfiguration(KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnReparseConfiguration(KIO__ForwardingWorkerBase* self, intptr_t slot);
void KIO__ForwardingWorkerBase_QBaseReparseConfiguration(KIO__ForwardingWorkerBase* self);
QUrl* KIO__ForwardingWorkerBase_ProcessedUrl(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnProcessedUrl(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QUrl* KIO__ForwardingWorkerBase_QBaseProcessedUrl(const KIO__ForwardingWorkerBase* self);
QUrl* KIO__ForwardingWorkerBase_RequestedUrl(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnRequestedUrl(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QUrl* KIO__ForwardingWorkerBase_QBaseRequestedUrl(const KIO__ForwardingWorkerBase* self);
QObject* KIO__ForwardingWorkerBase_Sender(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnSender(const KIO__ForwardingWorkerBase* self, intptr_t slot);
QObject* KIO__ForwardingWorkerBase_QBaseSender(const KIO__ForwardingWorkerBase* self);
int KIO__ForwardingWorkerBase_SenderSignalIndex(const KIO__ForwardingWorkerBase* self);
void KIO__ForwardingWorkerBase_OnSenderSignalIndex(const KIO__ForwardingWorkerBase* self, intptr_t slot);
int KIO__ForwardingWorkerBase_QBaseSenderSignalIndex(const KIO__ForwardingWorkerBase* self);
int KIO__ForwardingWorkerBase_Receivers(const KIO__ForwardingWorkerBase* self, const char* signal);
void KIO__ForwardingWorkerBase_OnReceivers(const KIO__ForwardingWorkerBase* self, intptr_t slot);
int KIO__ForwardingWorkerBase_QBaseReceivers(const KIO__ForwardingWorkerBase* self, const char* signal);
bool KIO__ForwardingWorkerBase_IsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_OnIsSignalConnected(const KIO__ForwardingWorkerBase* self, intptr_t slot);
bool KIO__ForwardingWorkerBase_QBaseIsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal);
void KIO__ForwardingWorkerBase_Delete(KIO__ForwardingWorkerBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
