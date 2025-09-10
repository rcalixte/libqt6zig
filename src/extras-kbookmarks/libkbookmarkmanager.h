#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKMANAGER_H
#define SRC_EXTRAS_KBOOKMARKSC_LIBKBOOKMARKMANAGER_H

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
typedef struct KBookmarkGroup KBookmarkGroup;
typedef struct KBookmarkManager KBookmarkManager;
typedef struct QChildEvent QChildEvent;
typedef struct QDomDocument QDomDocument;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KBookmarkManager* KBookmarkManager_new(const libqt_string bookmarksFile);
KBookmarkManager* KBookmarkManager_new2(const libqt_string bookmarksFile, QObject* parent);
QMetaObject* KBookmarkManager_MetaObject(const KBookmarkManager* self);
void* KBookmarkManager_Metacast(KBookmarkManager* self, const char* param1);
int KBookmarkManager_Metacall(KBookmarkManager* self, int param1, int param2, void** param3);
libqt_string KBookmarkManager_Tr(const char* s);
bool KBookmarkManager_SaveAs(const KBookmarkManager* self, const libqt_string filename);
bool KBookmarkManager_UpdateAccessMetadata(KBookmarkManager* self, const libqt_string url);
libqt_string KBookmarkManager_Path(const KBookmarkManager* self);
KBookmarkGroup* KBookmarkManager_Root(const KBookmarkManager* self);
KBookmarkGroup* KBookmarkManager_Toolbar(KBookmarkManager* self);
KBookmark* KBookmarkManager_FindByAddress(KBookmarkManager* self, const libqt_string address);
void KBookmarkManager_EmitChanged(KBookmarkManager* self);
void KBookmarkManager_EmitChanged2(KBookmarkManager* self, const KBookmarkGroup* group);
bool KBookmarkManager_Save(const KBookmarkManager* self);
QDomDocument* KBookmarkManager_InternalDocument(const KBookmarkManager* self);
void KBookmarkManager_Changed(KBookmarkManager* self, const libqt_string groupAddress);
void KBookmarkManager_Connect_Changed(KBookmarkManager* self, intptr_t slot);
void KBookmarkManager_Error(KBookmarkManager* self, const libqt_string errorMessage);
void KBookmarkManager_Connect_Error(KBookmarkManager* self, intptr_t slot);
libqt_string KBookmarkManager_Tr2(const char* s, const char* c);
libqt_string KBookmarkManager_Tr3(const char* s, const char* c, int n);
bool KBookmarkManager_SaveAs2(const KBookmarkManager* self, const libqt_string filename, bool toolbarCache);
bool KBookmarkManager_Save1(const KBookmarkManager* self, bool toolbarCache);
void KBookmarkManager_OnMetacall(KBookmarkManager* self, intptr_t slot);
int KBookmarkManager_QBaseMetacall(KBookmarkManager* self, int param1, int param2, void** param3);
bool KBookmarkManager_Event(KBookmarkManager* self, QEvent* event);
void KBookmarkManager_OnEvent(KBookmarkManager* self, intptr_t slot);
bool KBookmarkManager_QBaseEvent(KBookmarkManager* self, QEvent* event);
bool KBookmarkManager_EventFilter(KBookmarkManager* self, QObject* watched, QEvent* event);
void KBookmarkManager_OnEventFilter(KBookmarkManager* self, intptr_t slot);
bool KBookmarkManager_QBaseEventFilter(KBookmarkManager* self, QObject* watched, QEvent* event);
void KBookmarkManager_TimerEvent(KBookmarkManager* self, QTimerEvent* event);
void KBookmarkManager_OnTimerEvent(KBookmarkManager* self, intptr_t slot);
void KBookmarkManager_QBaseTimerEvent(KBookmarkManager* self, QTimerEvent* event);
void KBookmarkManager_ChildEvent(KBookmarkManager* self, QChildEvent* event);
void KBookmarkManager_OnChildEvent(KBookmarkManager* self, intptr_t slot);
void KBookmarkManager_QBaseChildEvent(KBookmarkManager* self, QChildEvent* event);
void KBookmarkManager_CustomEvent(KBookmarkManager* self, QEvent* event);
void KBookmarkManager_OnCustomEvent(KBookmarkManager* self, intptr_t slot);
void KBookmarkManager_QBaseCustomEvent(KBookmarkManager* self, QEvent* event);
void KBookmarkManager_ConnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
void KBookmarkManager_OnConnectNotify(KBookmarkManager* self, intptr_t slot);
void KBookmarkManager_QBaseConnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
void KBookmarkManager_DisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
void KBookmarkManager_OnDisconnectNotify(KBookmarkManager* self, intptr_t slot);
void KBookmarkManager_QBaseDisconnectNotify(KBookmarkManager* self, const QMetaMethod* signal);
QObject* KBookmarkManager_Sender(const KBookmarkManager* self);
void KBookmarkManager_OnSender(const KBookmarkManager* self, intptr_t slot);
QObject* KBookmarkManager_QBaseSender(const KBookmarkManager* self);
int KBookmarkManager_SenderSignalIndex(const KBookmarkManager* self);
void KBookmarkManager_OnSenderSignalIndex(const KBookmarkManager* self, intptr_t slot);
int KBookmarkManager_QBaseSenderSignalIndex(const KBookmarkManager* self);
int KBookmarkManager_Receivers(const KBookmarkManager* self, const char* signal);
void KBookmarkManager_OnReceivers(const KBookmarkManager* self, intptr_t slot);
int KBookmarkManager_QBaseReceivers(const KBookmarkManager* self, const char* signal);
bool KBookmarkManager_IsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal);
void KBookmarkManager_OnIsSignalConnected(const KBookmarkManager* self, intptr_t slot);
bool KBookmarkManager_QBaseIsSignalConnected(const KBookmarkManager* self, const QMetaMethod* signal);
void KBookmarkManager_Delete(KBookmarkManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
