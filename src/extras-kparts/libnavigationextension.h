#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBNAVIGATIONEXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBNAVIGATIONEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__NavigationExtension)
typedef KParts::NavigationExtension KParts__NavigationExtension;
#endif
typedef KParts::OpenUrlArguments KParts__OpenUrlArguments;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#else
typedef struct KFileItem KFileItem;
typedef struct KFileItemList KFileItemList;
typedef struct KParts__NavigationExtension KParts__NavigationExtension;
typedef struct KParts__OpenUrlArguments KParts__OpenUrlArguments;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KParts__NavigationExtension* KParts__NavigationExtension_new(KParts__ReadOnlyPart* parent);
QMetaObject* KParts__NavigationExtension_MetaObject(const KParts__NavigationExtension* self);
void* KParts__NavigationExtension_Metacast(KParts__NavigationExtension* self, const char* param1);
int KParts__NavigationExtension_Metacall(KParts__NavigationExtension* self, int param1, int param2, void** param3);
libqt_string KParts__NavigationExtension_Tr(const char* s);
int KParts__NavigationExtension_XOffset(KParts__NavigationExtension* self);
int KParts__NavigationExtension_YOffset(KParts__NavigationExtension* self);
void KParts__NavigationExtension_SaveState(KParts__NavigationExtension* self, QDataStream* stream);
void KParts__NavigationExtension_RestoreState(KParts__NavigationExtension* self, QDataStream* stream);
bool KParts__NavigationExtension_IsURLDropHandlingEnabled(const KParts__NavigationExtension* self);
void KParts__NavigationExtension_SetURLDropHandlingEnabled(KParts__NavigationExtension* self, bool enable);
bool KParts__NavigationExtension_IsActionEnabled(const KParts__NavigationExtension* self, const char* name);
libqt_string KParts__NavigationExtension_ActionText(const KParts__NavigationExtension* self, const char* name);
KParts__NavigationExtension* KParts__NavigationExtension_ChildObject(QObject* obj);
void KParts__NavigationExtension_PasteRequest(KParts__NavigationExtension* self);
void KParts__NavigationExtension_EnableAction(KParts__NavigationExtension* self, const char* name, bool enabled);
void KParts__NavigationExtension_SetActionText(KParts__NavigationExtension* self, const char* name, const libqt_string text);
void KParts__NavigationExtension_OpenUrlRequest(KParts__NavigationExtension* self, const QUrl* url);
void KParts__NavigationExtension_OpenUrlRequestDelayed(KParts__NavigationExtension* self, const QUrl* url, const KParts__OpenUrlArguments* arguments);
void KParts__NavigationExtension_OpenUrlNotify(KParts__NavigationExtension* self);
void KParts__NavigationExtension_SetLocationBarUrl(KParts__NavigationExtension* self, const libqt_string url);
void KParts__NavigationExtension_SetIconUrl(KParts__NavigationExtension* self, const QUrl* url);
void KParts__NavigationExtension_CreateNewWindow(KParts__NavigationExtension* self, const QUrl* url);
void KParts__NavigationExtension_LoadingProgress(KParts__NavigationExtension* self, int percent);
void KParts__NavigationExtension_SpeedProgress(KParts__NavigationExtension* self, int bytesPerSecond);
void KParts__NavigationExtension_InfoMessage(KParts__NavigationExtension* self, const libqt_string param1);
void KParts__NavigationExtension_PopupMenu(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items);
void KParts__NavigationExtension_PopupMenu2(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url);
void KParts__NavigationExtension_SelectionInfo(KParts__NavigationExtension* self, const KFileItemList* items);
void KParts__NavigationExtension_MouseOverInfo(KParts__NavigationExtension* self, const KFileItem* item);
void KParts__NavigationExtension_AddWebSideBar(KParts__NavigationExtension* self, const QUrl* url, const libqt_string name);
void KParts__NavigationExtension_MoveTopLevelWidget(KParts__NavigationExtension* self, int x, int y);
void KParts__NavigationExtension_ResizeTopLevelWidget(KParts__NavigationExtension* self, int w, int h);
void KParts__NavigationExtension_RequestFocus(KParts__NavigationExtension* self, KParts__ReadOnlyPart* part);
void KParts__NavigationExtension_SetPageSecurity(KParts__NavigationExtension* self, int pageSecurity);
void KParts__NavigationExtension_ItemsRemoved(KParts__NavigationExtension* self, const KFileItemList* items);
libqt_string KParts__NavigationExtension_Tr2(const char* s, const char* c);
libqt_string KParts__NavigationExtension_Tr3(const char* s, const char* c, int n);
void KParts__NavigationExtension_OpenUrlRequest2(KParts__NavigationExtension* self, const QUrl* url, const KParts__OpenUrlArguments* arguments);
void KParts__NavigationExtension_PopupMenu3(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments);
void KParts__NavigationExtension_PopupMenu4(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments, int flags);
void KParts__NavigationExtension_PopupMenu5(KParts__NavigationExtension* self, const QPoint* global, const KFileItemList* items, const KParts__OpenUrlArguments* arguments, int flags, const libqt_map /* of libqt_string to libqt_list  of QAction*  */ actionGroups);
void KParts__NavigationExtension_PopupMenu32(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode);
void KParts__NavigationExtension_PopupMenu42(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments);
void KParts__NavigationExtension_PopupMenu52(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments, int flags);
void KParts__NavigationExtension_PopupMenu6(KParts__NavigationExtension* self, const QPoint* global, const QUrl* url, mode_t mode, const KParts__OpenUrlArguments* arguments, int flags, const libqt_map /* of libqt_string to libqt_list  of QAction*  */ actionGroups);
void KParts__NavigationExtension_OnMetacall(KParts__NavigationExtension* self, intptr_t slot);
int KParts__NavigationExtension_QBaseMetacall(KParts__NavigationExtension* self, int param1, int param2, void** param3);
void KParts__NavigationExtension_OnXOffset(KParts__NavigationExtension* self, intptr_t slot);
int KParts__NavigationExtension_QBaseXOffset(KParts__NavigationExtension* self);
void KParts__NavigationExtension_OnYOffset(KParts__NavigationExtension* self, intptr_t slot);
int KParts__NavigationExtension_QBaseYOffset(KParts__NavigationExtension* self);
void KParts__NavigationExtension_OnSaveState(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseSaveState(KParts__NavigationExtension* self, QDataStream* stream);
void KParts__NavigationExtension_OnRestoreState(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseRestoreState(KParts__NavigationExtension* self, QDataStream* stream);
bool KParts__NavigationExtension_Event(KParts__NavigationExtension* self, QEvent* event);
void KParts__NavigationExtension_OnEvent(KParts__NavigationExtension* self, intptr_t slot);
bool KParts__NavigationExtension_QBaseEvent(KParts__NavigationExtension* self, QEvent* event);
bool KParts__NavigationExtension_EventFilter(KParts__NavigationExtension* self, QObject* watched, QEvent* event);
void KParts__NavigationExtension_OnEventFilter(KParts__NavigationExtension* self, intptr_t slot);
bool KParts__NavigationExtension_QBaseEventFilter(KParts__NavigationExtension* self, QObject* watched, QEvent* event);
void KParts__NavigationExtension_TimerEvent(KParts__NavigationExtension* self, QTimerEvent* event);
void KParts__NavigationExtension_OnTimerEvent(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseTimerEvent(KParts__NavigationExtension* self, QTimerEvent* event);
void KParts__NavigationExtension_ChildEvent(KParts__NavigationExtension* self, QChildEvent* event);
void KParts__NavigationExtension_OnChildEvent(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseChildEvent(KParts__NavigationExtension* self, QChildEvent* event);
void KParts__NavigationExtension_CustomEvent(KParts__NavigationExtension* self, QEvent* event);
void KParts__NavigationExtension_OnCustomEvent(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseCustomEvent(KParts__NavigationExtension* self, QEvent* event);
void KParts__NavigationExtension_ConnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal);
void KParts__NavigationExtension_OnConnectNotify(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseConnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal);
void KParts__NavigationExtension_DisconnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal);
void KParts__NavigationExtension_OnDisconnectNotify(KParts__NavigationExtension* self, intptr_t slot);
void KParts__NavigationExtension_QBaseDisconnectNotify(KParts__NavigationExtension* self, const QMetaMethod* signal);
QObject* KParts__NavigationExtension_Sender(const KParts__NavigationExtension* self);
void KParts__NavigationExtension_OnSender(const KParts__NavigationExtension* self, intptr_t slot);
QObject* KParts__NavigationExtension_QBaseSender(const KParts__NavigationExtension* self);
int KParts__NavigationExtension_SenderSignalIndex(const KParts__NavigationExtension* self);
void KParts__NavigationExtension_OnSenderSignalIndex(const KParts__NavigationExtension* self, intptr_t slot);
int KParts__NavigationExtension_QBaseSenderSignalIndex(const KParts__NavigationExtension* self);
int KParts__NavigationExtension_Receivers(const KParts__NavigationExtension* self, const char* signal);
void KParts__NavigationExtension_OnReceivers(const KParts__NavigationExtension* self, intptr_t slot);
int KParts__NavigationExtension_QBaseReceivers(const KParts__NavigationExtension* self, const char* signal);
bool KParts__NavigationExtension_IsSignalConnected(const KParts__NavigationExtension* self, const QMetaMethod* signal);
void KParts__NavigationExtension_OnIsSignalConnected(const KParts__NavigationExtension* self, intptr_t slot);
bool KParts__NavigationExtension_QBaseIsSignalConnected(const KParts__NavigationExtension* self, const QMetaMethod* signal);
void KParts__NavigationExtension_Delete(KParts__NavigationExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
