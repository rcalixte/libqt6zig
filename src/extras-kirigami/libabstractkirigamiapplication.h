#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBABSTRACTKIRIGAMIAPPLICATION_H
#define EXTRAS_KIRIGAMI_LIBABSTRACTKIRIGAMIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct AbstractKirigamiApplication AbstractKirigamiApplication;
typedef struct KirigamiActionCollection KirigamiActionCollection;
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSortFilterProxyModel QSortFilterProxyModel;
typedef struct QTimerEvent QTimerEvent;
#endif

AbstractKirigamiApplication* AbstractKirigamiApplication_new();
AbstractKirigamiApplication* AbstractKirigamiApplication_new2(QObject* parent);
QMetaObject* AbstractKirigamiApplication_MetaObject(const AbstractKirigamiApplication* self);
void* AbstractKirigamiApplication_Metacast(AbstractKirigamiApplication* self, const char* param1);
int AbstractKirigamiApplication_Metacall(AbstractKirigamiApplication* self, int param1, int param2, void** param3);
libqt_string AbstractKirigamiApplication_Tr(const char* s);
libqt_list /* of KirigamiActionCollection* */ AbstractKirigamiApplication_ActionCollections(const AbstractKirigamiApplication* self);
KirigamiActionCollection* AbstractKirigamiApplication_MainCollection(const AbstractKirigamiApplication* self);
QSortFilterProxyModel* AbstractKirigamiApplication_ActionsModel(AbstractKirigamiApplication* self);
QAbstractListModel* AbstractKirigamiApplication_ShortcutsModel(AbstractKirigamiApplication* self);
QAction* AbstractKirigamiApplication_Action(AbstractKirigamiApplication* self, const libqt_string actionName);
QObject* AbstractKirigamiApplication_ConfigurationView(const AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_SetConfigurationView(AbstractKirigamiApplication* self, QObject* configurationView);
void AbstractKirigamiApplication_OpenAboutPage(AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_Connect_OpenAboutPage(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_OpenAboutKDEPage(AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_Connect_OpenAboutKDEPage(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_OpenKCommandBarAction(AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_Connect_OpenKCommandBarAction(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_ShortcutsEditorAction(AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_Connect_ShortcutsEditorAction(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_ConfigurationViewChanged(AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_Connect_ConfigurationViewChanged(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SetupActions(AbstractKirigamiApplication* self);
libqt_string AbstractKirigamiApplication_Tr2(const char* s, const char* c);
libqt_string AbstractKirigamiApplication_Tr3(const char* s, const char* c, int n);
void AbstractKirigamiApplication_OnMetaObject(const AbstractKirigamiApplication* self, intptr_t slot);
QMetaObject* AbstractKirigamiApplication_SuperMetaObject(const AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_OnMetacast(AbstractKirigamiApplication* self, intptr_t slot);
void* AbstractKirigamiApplication_SuperMetacast(AbstractKirigamiApplication* self, const char* param1);
void AbstractKirigamiApplication_OnMetacall(AbstractKirigamiApplication* self, intptr_t slot);
int AbstractKirigamiApplication_SuperMetacall(AbstractKirigamiApplication* self, int param1, int param2, void** param3);
void AbstractKirigamiApplication_OnActionCollections(const AbstractKirigamiApplication* self, intptr_t slot);
libqt_list /* of KirigamiActionCollection* */ AbstractKirigamiApplication_SuperActionCollections(const AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_OnSetupActions(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperSetupActions(AbstractKirigamiApplication* self);
bool AbstractKirigamiApplication_Event(AbstractKirigamiApplication* self, QEvent* event);
void AbstractKirigamiApplication_OnEvent(AbstractKirigamiApplication* self, intptr_t slot);
bool AbstractKirigamiApplication_SuperEvent(AbstractKirigamiApplication* self, QEvent* event);
bool AbstractKirigamiApplication_EventFilter(AbstractKirigamiApplication* self, QObject* watched, QEvent* event);
void AbstractKirigamiApplication_OnEventFilter(AbstractKirigamiApplication* self, intptr_t slot);
bool AbstractKirigamiApplication_SuperEventFilter(AbstractKirigamiApplication* self, QObject* watched, QEvent* event);
void AbstractKirigamiApplication_TimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event);
void AbstractKirigamiApplication_OnTimerEvent(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperTimerEvent(AbstractKirigamiApplication* self, QTimerEvent* event);
void AbstractKirigamiApplication_ChildEvent(AbstractKirigamiApplication* self, QChildEvent* event);
void AbstractKirigamiApplication_OnChildEvent(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperChildEvent(AbstractKirigamiApplication* self, QChildEvent* event);
void AbstractKirigamiApplication_CustomEvent(AbstractKirigamiApplication* self, QEvent* event);
void AbstractKirigamiApplication_OnCustomEvent(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperCustomEvent(AbstractKirigamiApplication* self, QEvent* event);
void AbstractKirigamiApplication_ConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
void AbstractKirigamiApplication_OnConnectNotify(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperConnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
void AbstractKirigamiApplication_DisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
void AbstractKirigamiApplication_OnDisconnectNotify(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperDisconnectNotify(AbstractKirigamiApplication* self, const QMetaMethod* signal);
void AbstractKirigamiApplication_ReadSettings(AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_OnReadSettings(AbstractKirigamiApplication* self, intptr_t slot);
void AbstractKirigamiApplication_SuperReadSettings(AbstractKirigamiApplication* self);
QObject* AbstractKirigamiApplication_Sender(const AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_OnSender(const AbstractKirigamiApplication* self, intptr_t slot);
QObject* AbstractKirigamiApplication_SuperSender(const AbstractKirigamiApplication* self);
int AbstractKirigamiApplication_SenderSignalIndex(const AbstractKirigamiApplication* self);
void AbstractKirigamiApplication_OnSenderSignalIndex(const AbstractKirigamiApplication* self, intptr_t slot);
int AbstractKirigamiApplication_SuperSenderSignalIndex(const AbstractKirigamiApplication* self);
int AbstractKirigamiApplication_Receivers(const AbstractKirigamiApplication* self, const char* signal);
void AbstractKirigamiApplication_OnReceivers(const AbstractKirigamiApplication* self, intptr_t slot);
int AbstractKirigamiApplication_SuperReceivers(const AbstractKirigamiApplication* self, const char* signal);
bool AbstractKirigamiApplication_IsSignalConnected(const AbstractKirigamiApplication* self, const QMetaMethod* signal);
void AbstractKirigamiApplication_OnIsSignalConnected(const AbstractKirigamiApplication* self, intptr_t slot);
bool AbstractKirigamiApplication_SuperIsSignalConnected(const AbstractKirigamiApplication* self, const QMetaMethod* signal);
void AbstractKirigamiApplication_Delete(AbstractKirigamiApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
