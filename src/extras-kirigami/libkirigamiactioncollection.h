#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_H
#define EXTRAS_KIRIGAMI_LIBKIRIGAMIACTIONCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KirigamiActionCollection KirigamiActionCollection;
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KirigamiActionCollection* KirigamiActionCollection_new(QObject* parent);
KirigamiActionCollection* KirigamiActionCollection_new2(QObject* parent, const libqt_string cName);
QMetaObject* KirigamiActionCollection_MetaObject(const KirigamiActionCollection* self);
void* KirigamiActionCollection_Metacast(KirigamiActionCollection* self, const char* param1);
int KirigamiActionCollection_Metacall(KirigamiActionCollection* self, int param1, int param2, void** param3);
libqt_string KirigamiActionCollection_Tr(const char* s);
libqt_list /* of KirigamiActionCollection* */ KirigamiActionCollection_AllCollections();
void KirigamiActionCollection_Clear(KirigamiActionCollection* self);
libqt_string KirigamiActionCollection_ConfigGroup(const KirigamiActionCollection* self);
bool KirigamiActionCollection_ConfigIsGlobal(const KirigamiActionCollection* self);
void KirigamiActionCollection_SetConfigGroup(KirigamiActionCollection* self, const libqt_string group);
void KirigamiActionCollection_SetConfigGlobal(KirigamiActionCollection* self, bool global);
void KirigamiActionCollection_ReadSettings(KirigamiActionCollection* self);
void KirigamiActionCollection_WriteSettings(const KirigamiActionCollection* self);
int KirigamiActionCollection_Count(const KirigamiActionCollection* self);
bool KirigamiActionCollection_IsEmpty(const KirigamiActionCollection* self);
QAction* KirigamiActionCollection_Action(const KirigamiActionCollection* self, int index);
QAction* KirigamiActionCollection_Action2(const KirigamiActionCollection* self, const libqt_string name);
libqt_list /* of QAction* */ KirigamiActionCollection_Actions(const KirigamiActionCollection* self);
libqt_list /* of QAction* */ KirigamiActionCollection_ActionsWithoutGroup(const KirigamiActionCollection* self);
libqt_list /* of QActionGroup* */ KirigamiActionCollection_ActionGroups(const KirigamiActionCollection* self);
void KirigamiActionCollection_SetComponentName(KirigamiActionCollection* self, const libqt_string componentName);
libqt_string KirigamiActionCollection_ComponentName(const KirigamiActionCollection* self);
void KirigamiActionCollection_SetComponentDisplayName(KirigamiActionCollection* self, const libqt_string displayName);
libqt_string KirigamiActionCollection_ComponentDisplayName(const KirigamiActionCollection* self);
void KirigamiActionCollection_Inserted(KirigamiActionCollection* self, QAction* action);
void KirigamiActionCollection_Connect_Inserted(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_Changed(KirigamiActionCollection* self);
void KirigamiActionCollection_Connect_Changed(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_ActionHovered(KirigamiActionCollection* self, QAction* action);
void KirigamiActionCollection_Connect_ActionHovered(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_ActionTriggered(KirigamiActionCollection* self, QAction* action);
void KirigamiActionCollection_Connect_ActionTriggered(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_ConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
void KirigamiActionCollection_SlotActionTriggered(KirigamiActionCollection* self);
QAction* KirigamiActionCollection_AddAction(KirigamiActionCollection* self, const libqt_string name, QAction* action);
void KirigamiActionCollection_AddActions(KirigamiActionCollection* self, const libqt_list /* of QAction* */ actions);
void KirigamiActionCollection_RemoveAction(KirigamiActionCollection* self, QAction* action);
QAction* KirigamiActionCollection_TakeAction(KirigamiActionCollection* self, QAction* action);
QKeySequence* KirigamiActionCollection_DefaultShortcut(QAction* action);
libqt_list /* of QKeySequence* */ KirigamiActionCollection_DefaultShortcuts(QAction* action);
void KirigamiActionCollection_SetDefaultShortcut(QAction* action, const QKeySequence* shortcut);
void KirigamiActionCollection_SetDefaultShortcuts(QAction* action, const libqt_list /* of QKeySequence* */ shortcuts);
bool KirigamiActionCollection_IsShortcutsConfigurable(QAction* action);
void KirigamiActionCollection_SetShortcutsConfigurable(QAction* action, bool configurable);
libqt_string KirigamiActionCollection_Tr2(const char* s, const char* c);
libqt_string KirigamiActionCollection_Tr3(const char* s, const char* c, int n);
void KirigamiActionCollection_ReadSettings1(KirigamiActionCollection* self, KConfigGroup* config);
void KirigamiActionCollection_WriteSettings1(const KirigamiActionCollection* self, KConfigGroup* config);
void KirigamiActionCollection_WriteSettings2(const KirigamiActionCollection* self, KConfigGroup* config, bool writeDefaults);
void KirigamiActionCollection_WriteSettings3(const KirigamiActionCollection* self, KConfigGroup* config, bool writeDefaults, QAction* oneAction);
void KirigamiActionCollection_OnMetaObject(const KirigamiActionCollection* self, intptr_t slot);
QMetaObject* KirigamiActionCollection_SuperMetaObject(const KirigamiActionCollection* self);
void KirigamiActionCollection_OnMetacast(KirigamiActionCollection* self, intptr_t slot);
void* KirigamiActionCollection_SuperMetacast(KirigamiActionCollection* self, const char* param1);
void KirigamiActionCollection_OnMetacall(KirigamiActionCollection* self, intptr_t slot);
int KirigamiActionCollection_SuperMetacall(KirigamiActionCollection* self, int param1, int param2, void** param3);
void KirigamiActionCollection_OnConnectNotify(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_SuperConnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
void KirigamiActionCollection_OnSlotActionTriggered(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_SuperSlotActionTriggered(KirigamiActionCollection* self);
bool KirigamiActionCollection_Event(KirigamiActionCollection* self, QEvent* event);
void KirigamiActionCollection_OnEvent(KirigamiActionCollection* self, intptr_t slot);
bool KirigamiActionCollection_SuperEvent(KirigamiActionCollection* self, QEvent* event);
bool KirigamiActionCollection_EventFilter(KirigamiActionCollection* self, QObject* watched, QEvent* event);
void KirigamiActionCollection_OnEventFilter(KirigamiActionCollection* self, intptr_t slot);
bool KirigamiActionCollection_SuperEventFilter(KirigamiActionCollection* self, QObject* watched, QEvent* event);
void KirigamiActionCollection_TimerEvent(KirigamiActionCollection* self, QTimerEvent* event);
void KirigamiActionCollection_OnTimerEvent(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_SuperTimerEvent(KirigamiActionCollection* self, QTimerEvent* event);
void KirigamiActionCollection_ChildEvent(KirigamiActionCollection* self, QChildEvent* event);
void KirigamiActionCollection_OnChildEvent(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_SuperChildEvent(KirigamiActionCollection* self, QChildEvent* event);
void KirigamiActionCollection_CustomEvent(KirigamiActionCollection* self, QEvent* event);
void KirigamiActionCollection_OnCustomEvent(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_SuperCustomEvent(KirigamiActionCollection* self, QEvent* event);
void KirigamiActionCollection_DisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
void KirigamiActionCollection_OnDisconnectNotify(KirigamiActionCollection* self, intptr_t slot);
void KirigamiActionCollection_SuperDisconnectNotify(KirigamiActionCollection* self, const QMetaMethod* signal);
QObject* KirigamiActionCollection_Sender(const KirigamiActionCollection* self);
void KirigamiActionCollection_OnSender(const KirigamiActionCollection* self, intptr_t slot);
QObject* KirigamiActionCollection_SuperSender(const KirigamiActionCollection* self);
int KirigamiActionCollection_SenderSignalIndex(const KirigamiActionCollection* self);
void KirigamiActionCollection_OnSenderSignalIndex(const KirigamiActionCollection* self, intptr_t slot);
int KirigamiActionCollection_SuperSenderSignalIndex(const KirigamiActionCollection* self);
int KirigamiActionCollection_Receivers(const KirigamiActionCollection* self, const char* signal);
void KirigamiActionCollection_OnReceivers(const KirigamiActionCollection* self, intptr_t slot);
int KirigamiActionCollection_SuperReceivers(const KirigamiActionCollection* self, const char* signal);
bool KirigamiActionCollection_IsSignalConnected(const KirigamiActionCollection* self, const QMetaMethod* signal);
void KirigamiActionCollection_OnIsSignalConnected(const KirigamiActionCollection* self, intptr_t slot);
bool KirigamiActionCollection_SuperIsSignalConnected(const KirigamiActionCollection* self, const QMetaMethod* signal);
void KirigamiActionCollection_Delete(KirigamiActionCollection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
