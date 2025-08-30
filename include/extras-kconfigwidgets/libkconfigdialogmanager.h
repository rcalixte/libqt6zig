#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCONFIGDIALOGMANAGER_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCONFIGDIALOGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigDialogManager KConfigDialogManager;
typedef struct KConfigSkeletonItem KConfigSkeletonItem;
typedef struct KCoreConfigSkeleton KCoreConfigSkeleton;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

KConfigDialogManager* KConfigDialogManager_new(QWidget* parent, KCoreConfigSkeleton* conf);
QMetaObject* KConfigDialogManager_MetaObject(const KConfigDialogManager* self);
void* KConfigDialogManager_Metacast(KConfigDialogManager* self, const char* param1);
int KConfigDialogManager_Metacall(KConfigDialogManager* self, int param1, int param2, void** param3);
libqt_string KConfigDialogManager_Tr(const char* s);
void KConfigDialogManager_SettingsChanged(KConfigDialogManager* self);
void KConfigDialogManager_Connect_SettingsChanged(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_WidgetModified(KConfigDialogManager* self);
void KConfigDialogManager_Connect_WidgetModified(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_AddWidget(KConfigDialogManager* self, QWidget* widget);
bool KConfigDialogManager_HasChanged(const KConfigDialogManager* self);
bool KConfigDialogManager_IsDefault(const KConfigDialogManager* self);
libqt_map* /* of libqt_string to libqt_string */ KConfigDialogManager_PropertyMap();
void KConfigDialogManager_UpdateSettings(KConfigDialogManager* self);
void KConfigDialogManager_UpdateWidgets(KConfigDialogManager* self);
void KConfigDialogManager_UpdateWidgetsDefault(KConfigDialogManager* self);
void KConfigDialogManager_SetDefaultsIndicatorsVisible(KConfigDialogManager* self, bool enabled);
libqt_string KConfigDialogManager_Tr2(const char* s, const char* c);
libqt_string KConfigDialogManager_Tr3(const char* s, const char* c, int n);
void KConfigDialogManager_OnMetacall(KConfigDialogManager* self, intptr_t slot);
int KConfigDialogManager_QBaseMetacall(KConfigDialogManager* self, int param1, int param2, void** param3);
bool KConfigDialogManager_Event(KConfigDialogManager* self, QEvent* event);
void KConfigDialogManager_OnEvent(KConfigDialogManager* self, intptr_t slot);
bool KConfigDialogManager_QBaseEvent(KConfigDialogManager* self, QEvent* event);
bool KConfigDialogManager_EventFilter(KConfigDialogManager* self, QObject* watched, QEvent* event);
void KConfigDialogManager_OnEventFilter(KConfigDialogManager* self, intptr_t slot);
bool KConfigDialogManager_QBaseEventFilter(KConfigDialogManager* self, QObject* watched, QEvent* event);
void KConfigDialogManager_TimerEvent(KConfigDialogManager* self, QTimerEvent* event);
void KConfigDialogManager_OnTimerEvent(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseTimerEvent(KConfigDialogManager* self, QTimerEvent* event);
void KConfigDialogManager_ChildEvent(KConfigDialogManager* self, QChildEvent* event);
void KConfigDialogManager_OnChildEvent(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseChildEvent(KConfigDialogManager* self, QChildEvent* event);
void KConfigDialogManager_CustomEvent(KConfigDialogManager* self, QEvent* event);
void KConfigDialogManager_OnCustomEvent(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseCustomEvent(KConfigDialogManager* self, QEvent* event);
void KConfigDialogManager_ConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
void KConfigDialogManager_OnConnectNotify(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
void KConfigDialogManager_DisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
void KConfigDialogManager_OnDisconnectNotify(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseDisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal);
void KConfigDialogManager_Init(KConfigDialogManager* self, bool trackChanges);
void KConfigDialogManager_OnInit(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseInit(KConfigDialogManager* self, bool trackChanges);
bool KConfigDialogManager_ParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges);
void KConfigDialogManager_OnParseChildren(KConfigDialogManager* self, intptr_t slot);
bool KConfigDialogManager_QBaseParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges);
libqt_string KConfigDialogManager_GetUserProperty(const KConfigDialogManager* self, const QWidget* widget);
void KConfigDialogManager_OnGetUserProperty(const KConfigDialogManager* self, intptr_t slot);
libqt_string KConfigDialogManager_QBaseGetUserProperty(const KConfigDialogManager* self, const QWidget* widget);
libqt_string KConfigDialogManager_GetCustomProperty(const KConfigDialogManager* self, const QWidget* widget);
void KConfigDialogManager_OnGetCustomProperty(const KConfigDialogManager* self, intptr_t slot);
libqt_string KConfigDialogManager_QBaseGetCustomProperty(const KConfigDialogManager* self, const QWidget* widget);
libqt_string KConfigDialogManager_GetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
void KConfigDialogManager_OnGetUserPropertyChangedSignal(const KConfigDialogManager* self, intptr_t slot);
libqt_string KConfigDialogManager_QBaseGetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
libqt_string KConfigDialogManager_GetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
void KConfigDialogManager_OnGetCustomPropertyChangedSignal(const KConfigDialogManager* self, intptr_t slot);
libqt_string KConfigDialogManager_QBaseGetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget);
void KConfigDialogManager_SetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v);
void KConfigDialogManager_OnSetProperty(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseSetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v);
QVariant* KConfigDialogManager_Property(const KConfigDialogManager* self, QWidget* w);
void KConfigDialogManager_OnProperty(const KConfigDialogManager* self, intptr_t slot);
QVariant* KConfigDialogManager_QBaseProperty(const KConfigDialogManager* self, QWidget* w);
void KConfigDialogManager_SetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item);
void KConfigDialogManager_OnSetupWidget(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseSetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item);
void KConfigDialogManager_InitMaps(KConfigDialogManager* self);
void KConfigDialogManager_OnInitMaps(KConfigDialogManager* self, intptr_t slot);
void KConfigDialogManager_QBaseInitMaps(KConfigDialogManager* self);
QObject* KConfigDialogManager_Sender(const KConfigDialogManager* self);
void KConfigDialogManager_OnSender(const KConfigDialogManager* self, intptr_t slot);
QObject* KConfigDialogManager_QBaseSender(const KConfigDialogManager* self);
int KConfigDialogManager_SenderSignalIndex(const KConfigDialogManager* self);
void KConfigDialogManager_OnSenderSignalIndex(const KConfigDialogManager* self, intptr_t slot);
int KConfigDialogManager_QBaseSenderSignalIndex(const KConfigDialogManager* self);
int KConfigDialogManager_Receivers(const KConfigDialogManager* self, const char* signal);
void KConfigDialogManager_OnReceivers(const KConfigDialogManager* self, intptr_t slot);
int KConfigDialogManager_QBaseReceivers(const KConfigDialogManager* self, const char* signal);
bool KConfigDialogManager_IsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal);
void KConfigDialogManager_OnIsSignalConnected(const KConfigDialogManager* self, intptr_t slot);
bool KConfigDialogManager_QBaseIsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal);
void KConfigDialogManager_Delete(KConfigDialogManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
