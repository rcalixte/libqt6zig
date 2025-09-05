#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKACTIONCOLLECTION_H
#define SRC_EXTRAS_KXMLGUIC_LIBKACTIONCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KActionCollection KActionCollection;
typedef struct KConfigGroup KConfigGroup;
typedef struct KXMLGUIClient KXMLGUIClient;
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KActionCollection* KActionCollection_new(QObject* parent);
KActionCollection* KActionCollection_new2(QObject* parent, const libqt_string cName);
QMetaObject* KActionCollection_MetaObject(const KActionCollection* self);
void* KActionCollection_Metacast(KActionCollection* self, const char* param1);
int KActionCollection_Metacall(KActionCollection* self, int param1, int param2, void** param3);
libqt_string KActionCollection_Tr(const char* s);
libqt_list /* of KActionCollection* */ KActionCollection_AllCollections();
void KActionCollection_Clear(KActionCollection* self);
void KActionCollection_AssociateWidget(const KActionCollection* self, QWidget* widget);
void KActionCollection_AddAssociatedWidget(KActionCollection* self, QWidget* widget);
void KActionCollection_RemoveAssociatedWidget(KActionCollection* self, QWidget* widget);
libqt_list /* of QWidget* */ KActionCollection_AssociatedWidgets(const KActionCollection* self);
void KActionCollection_ClearAssociatedWidgets(KActionCollection* self);
libqt_string KActionCollection_ConfigGroup(const KActionCollection* self);
bool KActionCollection_ConfigIsGlobal(const KActionCollection* self);
void KActionCollection_SetConfigGroup(KActionCollection* self, const libqt_string group);
void KActionCollection_SetConfigGlobal(KActionCollection* self, bool global);
void KActionCollection_ReadSettings(KActionCollection* self);
void KActionCollection_ImportGlobalShortcuts(KActionCollection* self, KConfigGroup* config);
void KActionCollection_ExportGlobalShortcuts(const KActionCollection* self, KConfigGroup* config);
void KActionCollection_WriteSettings(const KActionCollection* self);
int KActionCollection_Count(const KActionCollection* self);
bool KActionCollection_IsEmpty(const KActionCollection* self);
QAction* KActionCollection_Action(const KActionCollection* self, int index);
QAction* KActionCollection_Action2(const KActionCollection* self, const libqt_string name);
libqt_list /* of QAction* */ KActionCollection_Actions(const KActionCollection* self);
libqt_list /* of QAction* */ KActionCollection_ActionsWithoutGroup(const KActionCollection* self);
libqt_list /* of QActionGroup* */ KActionCollection_ActionGroups(const KActionCollection* self);
void KActionCollection_SetComponentName(KActionCollection* self, const libqt_string componentName);
libqt_string KActionCollection_ComponentName(const KActionCollection* self);
void KActionCollection_SetComponentDisplayName(KActionCollection* self, const libqt_string displayName);
libqt_string KActionCollection_ComponentDisplayName(const KActionCollection* self);
KXMLGUIClient* KActionCollection_ParentGUIClient(const KActionCollection* self);
void KActionCollection_Inserted(KActionCollection* self, QAction* action);
void KActionCollection_Connect_Inserted(KActionCollection* self, intptr_t slot);
void KActionCollection_Changed(KActionCollection* self);
void KActionCollection_Connect_Changed(KActionCollection* self, intptr_t slot);
void KActionCollection_ActionHovered(KActionCollection* self, QAction* action);
void KActionCollection_Connect_ActionHovered(KActionCollection* self, intptr_t slot);
void KActionCollection_ActionTriggered(KActionCollection* self, QAction* action);
void KActionCollection_Connect_ActionTriggered(KActionCollection* self, intptr_t slot);
void KActionCollection_ConnectNotify(KActionCollection* self, const QMetaMethod* signal);
void KActionCollection_SlotActionTriggered(KActionCollection* self);
QAction* KActionCollection_AddAction(KActionCollection* self, const libqt_string name, QAction* action);
void KActionCollection_AddActions(KActionCollection* self, const libqt_list /* of QAction* */ actions);
void KActionCollection_RemoveAction(KActionCollection* self, QAction* action);
QAction* KActionCollection_TakeAction(KActionCollection* self, QAction* action);
QAction* KActionCollection_AddAction2(KActionCollection* self, int actionType);
QKeySequence* KActionCollection_DefaultShortcut(QAction* action);
libqt_list /* of QKeySequence* */ KActionCollection_DefaultShortcuts(QAction* action);
void KActionCollection_SetDefaultShortcut(QAction* action, const QKeySequence* shortcut);
void KActionCollection_SetDefaultShortcuts(QAction* action, const libqt_list /* of QKeySequence* */ shortcuts);
bool KActionCollection_IsShortcutsConfigurable(QAction* action);
void KActionCollection_SetShortcutsConfigurable(QAction* action, bool configurable);
libqt_string KActionCollection_Tr2(const char* s, const char* c);
libqt_string KActionCollection_Tr3(const char* s, const char* c, int n);
void KActionCollection_ReadSettings1(KActionCollection* self, KConfigGroup* config);
void KActionCollection_ExportGlobalShortcuts2(const KActionCollection* self, KConfigGroup* config, bool writeDefaults);
void KActionCollection_WriteSettings1(const KActionCollection* self, KConfigGroup* config);
void KActionCollection_WriteSettings2(const KActionCollection* self, KConfigGroup* config, bool writeDefaults);
void KActionCollection_WriteSettings3(const KActionCollection* self, KConfigGroup* config, bool writeDefaults, QAction* oneAction);
void KActionCollection_OnMetacall(KActionCollection* self, intptr_t slot);
int KActionCollection_QBaseMetacall(KActionCollection* self, int param1, int param2, void** param3);
void KActionCollection_OnConnectNotify(KActionCollection* self, intptr_t slot);
void KActionCollection_QBaseConnectNotify(KActionCollection* self, const QMetaMethod* signal);
void KActionCollection_OnSlotActionTriggered(KActionCollection* self, intptr_t slot);
void KActionCollection_QBaseSlotActionTriggered(KActionCollection* self);
bool KActionCollection_Event(KActionCollection* self, QEvent* event);
void KActionCollection_OnEvent(KActionCollection* self, intptr_t slot);
bool KActionCollection_QBaseEvent(KActionCollection* self, QEvent* event);
bool KActionCollection_EventFilter(KActionCollection* self, QObject* watched, QEvent* event);
void KActionCollection_OnEventFilter(KActionCollection* self, intptr_t slot);
bool KActionCollection_QBaseEventFilter(KActionCollection* self, QObject* watched, QEvent* event);
void KActionCollection_TimerEvent(KActionCollection* self, QTimerEvent* event);
void KActionCollection_OnTimerEvent(KActionCollection* self, intptr_t slot);
void KActionCollection_QBaseTimerEvent(KActionCollection* self, QTimerEvent* event);
void KActionCollection_ChildEvent(KActionCollection* self, QChildEvent* event);
void KActionCollection_OnChildEvent(KActionCollection* self, intptr_t slot);
void KActionCollection_QBaseChildEvent(KActionCollection* self, QChildEvent* event);
void KActionCollection_CustomEvent(KActionCollection* self, QEvent* event);
void KActionCollection_OnCustomEvent(KActionCollection* self, intptr_t slot);
void KActionCollection_QBaseCustomEvent(KActionCollection* self, QEvent* event);
void KActionCollection_DisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
void KActionCollection_OnDisconnectNotify(KActionCollection* self, intptr_t slot);
void KActionCollection_QBaseDisconnectNotify(KActionCollection* self, const QMetaMethod* signal);
QObject* KActionCollection_Sender(const KActionCollection* self);
void KActionCollection_OnSender(const KActionCollection* self, intptr_t slot);
QObject* KActionCollection_QBaseSender(const KActionCollection* self);
int KActionCollection_SenderSignalIndex(const KActionCollection* self);
void KActionCollection_OnSenderSignalIndex(const KActionCollection* self, intptr_t slot);
int KActionCollection_QBaseSenderSignalIndex(const KActionCollection* self);
int KActionCollection_Receivers(const KActionCollection* self, const char* signal);
void KActionCollection_OnReceivers(const KActionCollection* self, intptr_t slot);
int KActionCollection_QBaseReceivers(const KActionCollection* self, const char* signal);
bool KActionCollection_IsSignalConnected(const KActionCollection* self, const QMetaMethod* signal);
void KActionCollection_OnIsSignalConnected(const KActionCollection* self, intptr_t slot);
bool KActionCollection_QBaseIsSignalConnected(const KActionCollection* self, const QMetaMethod* signal);
void KActionCollection_Delete(KActionCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
