#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKCOREDIRLISTER_H
#define SRC_EXTRAS_KIOC_LIBKCOREDIRLISTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KIO::Job KIO__Job;
typedef KIO::ListJob KIO__ListJob;
#else
typedef struct KCoreDirLister KCoreDirLister;
typedef struct KFileItem KFileItem;
typedef struct KFileItemList KFileItemList;
typedef struct KIO__Job KIO__Job;
typedef struct KIO__ListJob KIO__ListJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KCoreDirLister* KCoreDirLister_new();
KCoreDirLister* KCoreDirLister_new2(QObject* parent);
QMetaObject* KCoreDirLister_MetaObject(const KCoreDirLister* self);
void* KCoreDirLister_Metacast(KCoreDirLister* self, const char* param1);
int KCoreDirLister_Metacall(KCoreDirLister* self, int param1, int param2, void** param3);
libqt_string KCoreDirLister_Tr(const char* s);
bool KCoreDirLister_OpenUrl(KCoreDirLister* self, const QUrl* dirUrl);
void KCoreDirLister_Stop(KCoreDirLister* self);
void KCoreDirLister_Stop2(KCoreDirLister* self, const QUrl* dirUrl);
void KCoreDirLister_ForgetDirs(KCoreDirLister* self, const QUrl* dirUrl);
bool KCoreDirLister_DelayedMimeTypes(const KCoreDirLister* self);
void KCoreDirLister_SetDelayedMimeTypes(KCoreDirLister* self, bool delayedMimeTypes);
bool KCoreDirLister_AutoUpdate(const KCoreDirLister* self);
void KCoreDirLister_SetAutoUpdate(KCoreDirLister* self, bool enable);
bool KCoreDirLister_ShowHiddenFiles(const KCoreDirLister* self);
void KCoreDirLister_SetShowHiddenFiles(KCoreDirLister* self, bool showHiddenFiles);
bool KCoreDirLister_DirOnlyMode(const KCoreDirLister* self);
void KCoreDirLister_SetDirOnlyMode(KCoreDirLister* self, bool dirsOnly);
bool KCoreDirLister_RequestMimeTypeWhileListing(const KCoreDirLister* self);
void KCoreDirLister_SetRequestMimeTypeWhileListing(KCoreDirLister* self, bool request);
QUrl* KCoreDirLister_Url(const KCoreDirLister* self);
libqt_list /* of QUrl* */ KCoreDirLister_Directories(const KCoreDirLister* self);
void KCoreDirLister_EmitChanges(KCoreDirLister* self);
void KCoreDirLister_UpdateDirectory(KCoreDirLister* self, const QUrl* dirUrl);
bool KCoreDirLister_IsFinished(const KCoreDirLister* self);
KFileItem* KCoreDirLister_RootItem(const KCoreDirLister* self);
KFileItem* KCoreDirLister_FindByUrl(const KCoreDirLister* self, const QUrl* url);
KFileItem* KCoreDirLister_FindByName(const KCoreDirLister* self, const libqt_string name);
void KCoreDirLister_SetNameFilter(KCoreDirLister* self, const libqt_string filter);
libqt_string KCoreDirLister_NameFilter(const KCoreDirLister* self);
void KCoreDirLister_SetMimeFilter(KCoreDirLister* self, const libqt_list /* of libqt_string */ mimeList);
void KCoreDirLister_SetMimeExcludeFilter(KCoreDirLister* self, const libqt_list /* of libqt_string */ mimeList);
void KCoreDirLister_ClearMimeFilter(KCoreDirLister* self);
libqt_list /* of libqt_string */ KCoreDirLister_MimeFilters(const KCoreDirLister* self);
KFileItemList* KCoreDirLister_Items(const KCoreDirLister* self);
KFileItemList* KCoreDirLister_ItemsForDir(const KCoreDirLister* self, const QUrl* dirUrl);
KFileItem* KCoreDirLister_CachedItemForUrl(const QUrl* url);
bool KCoreDirLister_AutoErrorHandlingEnabled(const KCoreDirLister* self);
void KCoreDirLister_SetAutoErrorHandlingEnabled(KCoreDirLister* self, bool enable);
void KCoreDirLister_Started(KCoreDirLister* self, const QUrl* dirUrl);
void KCoreDirLister_Connect_Started(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_Completed(KCoreDirLister* self);
void KCoreDirLister_Connect_Completed(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ListingDirCompleted(KCoreDirLister* self, const QUrl* dirUrl);
void KCoreDirLister_Connect_ListingDirCompleted(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_Canceled(KCoreDirLister* self);
void KCoreDirLister_Connect_Canceled(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ListingDirCanceled(KCoreDirLister* self, const QUrl* dirUrl);
void KCoreDirLister_Connect_ListingDirCanceled(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_Redirection(KCoreDirLister* self, const QUrl* oldUrl, const QUrl* newUrl);
void KCoreDirLister_Connect_Redirection(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_Clear(KCoreDirLister* self);
void KCoreDirLister_Connect_Clear(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ClearDir(KCoreDirLister* self, const QUrl* dirUrl);
void KCoreDirLister_Connect_ClearDir(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_NewItems(KCoreDirLister* self, const KFileItemList* items);
void KCoreDirLister_Connect_NewItems(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ItemsAdded(KCoreDirLister* self, const QUrl* directoryUrl, const KFileItemList* items);
void KCoreDirLister_Connect_ItemsAdded(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ItemsFilteredByMime(KCoreDirLister* self, const KFileItemList* items);
void KCoreDirLister_Connect_ItemsFilteredByMime(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ItemsDeleted(KCoreDirLister* self, const KFileItemList* items);
void KCoreDirLister_Connect_ItemsDeleted(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_RefreshItems(KCoreDirLister* self, const libqt_list /* of libqt_pair  tuple of KFileItem* and KFileItem*  */ items);
void KCoreDirLister_InfoMessage(KCoreDirLister* self, const libqt_string msg);
void KCoreDirLister_Connect_InfoMessage(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_Percent(KCoreDirLister* self, int percent);
void KCoreDirLister_Connect_Percent(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_TotalSize(KCoreDirLister* self, unsigned long long size);
void KCoreDirLister_Connect_TotalSize(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_ProcessedSize(KCoreDirLister* self, unsigned long long size);
void KCoreDirLister_Connect_ProcessedSize(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_Speed(KCoreDirLister* self, int bytes_per_second);
void KCoreDirLister_Connect_Speed(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_JobError(KCoreDirLister* self, KIO__Job* job);
void KCoreDirLister_Connect_JobError(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_JobStarted(KCoreDirLister* self, KIO__ListJob* param1);
libqt_string KCoreDirLister_Tr2(const char* s, const char* c);
libqt_string KCoreDirLister_Tr3(const char* s, const char* c, int n);
bool KCoreDirLister_OpenUrl2(KCoreDirLister* self, const QUrl* dirUrl, int flags);
KFileItemList* KCoreDirLister_Items1(const KCoreDirLister* self, int which);
KFileItemList* KCoreDirLister_ItemsForDir2(const KCoreDirLister* self, const QUrl* dirUrl, int which);
void KCoreDirLister_OnMetacall(KCoreDirLister* self, intptr_t slot);
int KCoreDirLister_QBaseMetacall(KCoreDirLister* self, int param1, int param2, void** param3);
void KCoreDirLister_OnJobStarted(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_QBaseJobStarted(KCoreDirLister* self, KIO__ListJob* param1);
bool KCoreDirLister_Event(KCoreDirLister* self, QEvent* event);
void KCoreDirLister_OnEvent(KCoreDirLister* self, intptr_t slot);
bool KCoreDirLister_QBaseEvent(KCoreDirLister* self, QEvent* event);
bool KCoreDirLister_EventFilter(KCoreDirLister* self, QObject* watched, QEvent* event);
void KCoreDirLister_OnEventFilter(KCoreDirLister* self, intptr_t slot);
bool KCoreDirLister_QBaseEventFilter(KCoreDirLister* self, QObject* watched, QEvent* event);
void KCoreDirLister_TimerEvent(KCoreDirLister* self, QTimerEvent* event);
void KCoreDirLister_OnTimerEvent(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_QBaseTimerEvent(KCoreDirLister* self, QTimerEvent* event);
void KCoreDirLister_ChildEvent(KCoreDirLister* self, QChildEvent* event);
void KCoreDirLister_OnChildEvent(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_QBaseChildEvent(KCoreDirLister* self, QChildEvent* event);
void KCoreDirLister_CustomEvent(KCoreDirLister* self, QEvent* event);
void KCoreDirLister_OnCustomEvent(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_QBaseCustomEvent(KCoreDirLister* self, QEvent* event);
void KCoreDirLister_ConnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
void KCoreDirLister_OnConnectNotify(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_QBaseConnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
void KCoreDirLister_DisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
void KCoreDirLister_OnDisconnectNotify(KCoreDirLister* self, intptr_t slot);
void KCoreDirLister_QBaseDisconnectNotify(KCoreDirLister* self, const QMetaMethod* signal);
QObject* KCoreDirLister_Sender(const KCoreDirLister* self);
void KCoreDirLister_OnSender(const KCoreDirLister* self, intptr_t slot);
QObject* KCoreDirLister_QBaseSender(const KCoreDirLister* self);
int KCoreDirLister_SenderSignalIndex(const KCoreDirLister* self);
void KCoreDirLister_OnSenderSignalIndex(const KCoreDirLister* self, intptr_t slot);
int KCoreDirLister_QBaseSenderSignalIndex(const KCoreDirLister* self);
int KCoreDirLister_Receivers(const KCoreDirLister* self, const char* signal);
void KCoreDirLister_OnReceivers(const KCoreDirLister* self, intptr_t slot);
int KCoreDirLister_QBaseReceivers(const KCoreDirLister* self, const char* signal);
bool KCoreDirLister_IsSignalConnected(const KCoreDirLister* self, const QMetaMethod* signal);
void KCoreDirLister_OnIsSignalConnected(const KCoreDirLister* self, intptr_t slot);
bool KCoreDirLister_QBaseIsSignalConnected(const KCoreDirLister* self, const QMetaMethod* signal);
void KCoreDirLister_Delete(KCoreDirLister* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
