#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKNEWFILEMENU_H
#define SRC_EXTRAS_KIOC_LIBKNEWFILEMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionMenu KActionMenu;
typedef struct KJob KJob;
typedef struct KNewFileMenu KNewFileMenu;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KNewFileMenu* KNewFileMenu_new(QObject* parent);
QMetaObject* KNewFileMenu_MetaObject(const KNewFileMenu* self);
void* KNewFileMenu_Metacast(KNewFileMenu* self, const char* param1);
int KNewFileMenu_Metacall(KNewFileMenu* self, int param1, int param2, void** param3);
bool KNewFileMenu_IsModal(const KNewFileMenu* self);
void KNewFileMenu_SetModal(KNewFileMenu* self, bool modality);
void KNewFileMenu_SetParentWidget(KNewFileMenu* self, QWidget* parentWidget);
void KNewFileMenu_SetWorkingDirectory(KNewFileMenu* self, const QUrl* directory);
QUrl* KNewFileMenu_WorkingDirectory(const KNewFileMenu* self);
void KNewFileMenu_SetSupportedMimeTypes(KNewFileMenu* self, const libqt_list /* of libqt_string */ mime);
libqt_list /* of libqt_string */ KNewFileMenu_SupportedMimeTypes(const KNewFileMenu* self);
void KNewFileMenu_SetSelectDirWhenAlreadyExist(KNewFileMenu* self, bool b);
void KNewFileMenu_SetNewFolderShortcutAction(KNewFileMenu* self, QAction* action);
void KNewFileMenu_SetNewFileShortcutAction(KNewFileMenu* self, QAction* action);
bool KNewFileMenu_IsCreateDirectoryRunning(KNewFileMenu* self);
bool KNewFileMenu_IsCreateFileRunning(KNewFileMenu* self);
void KNewFileMenu_SetWindowTitle(KNewFileMenu* self, const libqt_string title);
void KNewFileMenu_CheckUpToDate(KNewFileMenu* self);
void KNewFileMenu_CreateDirectory(KNewFileMenu* self);
void KNewFileMenu_CreateFile(KNewFileMenu* self);
void KNewFileMenu_FileCreationStarted(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_FileCreationStarted(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_FileCreated(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_FileCreated(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_FileCreationRejected(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_FileCreationRejected(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_DirectoryCreationStarted(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_DirectoryCreationStarted(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_DirectoryCreated(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_DirectoryCreated(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_DirectoryCreationRejected(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_DirectoryCreationRejected(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SelectExistingDir(KNewFileMenu* self, const QUrl* url);
void KNewFileMenu_Connect_SelectExistingDir(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SlotResult(KNewFileMenu* self, KJob* job);
void KNewFileMenu_OnMetaObject(const KNewFileMenu* self, intptr_t slot);
QMetaObject* KNewFileMenu_SuperMetaObject(const KNewFileMenu* self);
void KNewFileMenu_OnMetacast(KNewFileMenu* self, intptr_t slot);
void* KNewFileMenu_SuperMetacast(KNewFileMenu* self, const char* param1);
void KNewFileMenu_OnMetacall(KNewFileMenu* self, intptr_t slot);
int KNewFileMenu_SuperMetacall(KNewFileMenu* self, int param1, int param2, void** param3);
void KNewFileMenu_OnSlotResult(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperSlotResult(KNewFileMenu* self, KJob* job);
QWidget* KNewFileMenu_CreateWidget(KNewFileMenu* self, QWidget* parent);
void KNewFileMenu_OnCreateWidget(KNewFileMenu* self, intptr_t slot);
QWidget* KNewFileMenu_SuperCreateWidget(KNewFileMenu* self, QWidget* parent);
bool KNewFileMenu_Event(KNewFileMenu* self, QEvent* param1);
void KNewFileMenu_OnEvent(KNewFileMenu* self, intptr_t slot);
bool KNewFileMenu_SuperEvent(KNewFileMenu* self, QEvent* param1);
bool KNewFileMenu_EventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
void KNewFileMenu_OnEventFilter(KNewFileMenu* self, intptr_t slot);
bool KNewFileMenu_SuperEventFilter(KNewFileMenu* self, QObject* param1, QEvent* param2);
void KNewFileMenu_DeleteWidget(KNewFileMenu* self, QWidget* widget);
void KNewFileMenu_OnDeleteWidget(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperDeleteWidget(KNewFileMenu* self, QWidget* widget);
void KNewFileMenu_TimerEvent(KNewFileMenu* self, QTimerEvent* event);
void KNewFileMenu_OnTimerEvent(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperTimerEvent(KNewFileMenu* self, QTimerEvent* event);
void KNewFileMenu_ChildEvent(KNewFileMenu* self, QChildEvent* event);
void KNewFileMenu_OnChildEvent(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperChildEvent(KNewFileMenu* self, QChildEvent* event);
void KNewFileMenu_CustomEvent(KNewFileMenu* self, QEvent* event);
void KNewFileMenu_OnCustomEvent(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperCustomEvent(KNewFileMenu* self, QEvent* event);
void KNewFileMenu_ConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
void KNewFileMenu_OnConnectNotify(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperConnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
void KNewFileMenu_DisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
void KNewFileMenu_OnDisconnectNotify(KNewFileMenu* self, intptr_t slot);
void KNewFileMenu_SuperDisconnectNotify(KNewFileMenu* self, const QMetaMethod* signal);
libqt_list /* of QWidget* */ KNewFileMenu_CreatedWidgets(const KNewFileMenu* self);
void KNewFileMenu_OnCreatedWidgets(const KNewFileMenu* self, intptr_t slot);
libqt_list /* of QWidget* */ KNewFileMenu_SuperCreatedWidgets(const KNewFileMenu* self);
QObject* KNewFileMenu_Sender(const KNewFileMenu* self);
void KNewFileMenu_OnSender(const KNewFileMenu* self, intptr_t slot);
QObject* KNewFileMenu_SuperSender(const KNewFileMenu* self);
int KNewFileMenu_SenderSignalIndex(const KNewFileMenu* self);
void KNewFileMenu_OnSenderSignalIndex(const KNewFileMenu* self, intptr_t slot);
int KNewFileMenu_SuperSenderSignalIndex(const KNewFileMenu* self);
int KNewFileMenu_Receivers(const KNewFileMenu* self, const char* signal);
void KNewFileMenu_OnReceivers(const KNewFileMenu* self, intptr_t slot);
int KNewFileMenu_SuperReceivers(const KNewFileMenu* self, const char* signal);
bool KNewFileMenu_IsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal);
void KNewFileMenu_OnIsSignalConnected(const KNewFileMenu* self, intptr_t slot);
bool KNewFileMenu_SuperIsSignalConnected(const KNewFileMenu* self, const QMetaMethod* signal);
void KNewFileMenu_Delete(KNewFileMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
