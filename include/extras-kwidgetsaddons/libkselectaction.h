#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKSELECTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKSELECTACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSelectAction KSelectAction;
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetAction QWidgetAction;
#endif

KSelectAction* KSelectAction_new(QObject* parent);
KSelectAction* KSelectAction_new2(const libqt_string text, QObject* parent);
KSelectAction* KSelectAction_new3(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KSelectAction_MetaObject(const KSelectAction* self);
void* KSelectAction_Metacast(KSelectAction* self, const char* param1);
int KSelectAction_Metacall(KSelectAction* self, int param1, int param2, void** param3);
libqt_string KSelectAction_Tr(const char* s);
int KSelectAction_ToolBarMode(const KSelectAction* self);
void KSelectAction_SetToolBarMode(KSelectAction* self, int mode);
int KSelectAction_ToolButtonPopupMode(const KSelectAction* self);
void KSelectAction_SetToolButtonPopupMode(KSelectAction* self, int mode);
QActionGroup* KSelectAction_SelectableActionGroup(const KSelectAction* self);
QAction* KSelectAction_CurrentAction(const KSelectAction* self);
int KSelectAction_CurrentItem(const KSelectAction* self);
libqt_string KSelectAction_CurrentText(const KSelectAction* self);
libqt_list /* of QAction* */ KSelectAction_Actions(const KSelectAction* self);
QAction* KSelectAction_Action(const KSelectAction* self, int index);
QAction* KSelectAction_Action2(const KSelectAction* self, const libqt_string text);
bool KSelectAction_SetCurrentAction(KSelectAction* self, QAction* action);
bool KSelectAction_SetCurrentItem(KSelectAction* self, int index);
bool KSelectAction_SetCurrentAction2(KSelectAction* self, const libqt_string text);
void KSelectAction_AddAction(KSelectAction* self, QAction* action);
QAction* KSelectAction_AddAction2(KSelectAction* self, const libqt_string text);
QAction* KSelectAction_AddAction3(KSelectAction* self, const QIcon* icon, const libqt_string text);
QAction* KSelectAction_RemoveAction(KSelectAction* self, QAction* action);
void KSelectAction_InsertAction(KSelectAction* self, QAction* before, QAction* action);
void KSelectAction_SetItems(KSelectAction* self, const libqt_list /* of libqt_string */ lst);
libqt_list /* of libqt_string */ KSelectAction_Items(const KSelectAction* self);
bool KSelectAction_IsEditable(const KSelectAction* self);
void KSelectAction_SetEditable(KSelectAction* self, bool editable);
int KSelectAction_ComboWidth(const KSelectAction* self);
void KSelectAction_SetComboWidth(KSelectAction* self, int width);
void KSelectAction_SetMaxComboViewCount(KSelectAction* self, int n);
void KSelectAction_Clear(KSelectAction* self);
void KSelectAction_RemoveAllActions(KSelectAction* self);
void KSelectAction_SetMenuAccelsEnabled(KSelectAction* self, bool b);
bool KSelectAction_MenuAccelsEnabled(const KSelectAction* self);
void KSelectAction_ChangeItem(KSelectAction* self, int index, const libqt_string text);
void KSelectAction_ActionTriggered(KSelectAction* self, QAction* action);
void KSelectAction_Connect_ActionTriggered(KSelectAction* self, intptr_t slot);
void KSelectAction_IndexTriggered(KSelectAction* self, int index);
void KSelectAction_Connect_IndexTriggered(KSelectAction* self, intptr_t slot);
void KSelectAction_TextTriggered(KSelectAction* self, const libqt_string text);
void KSelectAction_Connect_TextTriggered(KSelectAction* self, intptr_t slot);
void KSelectAction_SlotActionTriggered(KSelectAction* self, QAction* action);
QWidget* KSelectAction_CreateWidget(KSelectAction* self, QWidget* parent);
void KSelectAction_DeleteWidget(KSelectAction* self, QWidget* widget);
bool KSelectAction_Event(KSelectAction* self, QEvent* event);
bool KSelectAction_EventFilter(KSelectAction* self, QObject* watched, QEvent* event);
libqt_string KSelectAction_Tr2(const char* s, const char* c);
libqt_string KSelectAction_Tr3(const char* s, const char* c, int n);
QAction* KSelectAction_Action22(const KSelectAction* self, const libqt_string text, int cs);
bool KSelectAction_SetCurrentAction22(KSelectAction* self, const libqt_string text, int cs);
void KSelectAction_OnMetacall(KSelectAction* self, intptr_t slot);
int KSelectAction_QBaseMetacall(KSelectAction* self, int param1, int param2, void** param3);
void KSelectAction_OnRemoveAction(KSelectAction* self, intptr_t slot);
QAction* KSelectAction_QBaseRemoveAction(KSelectAction* self, QAction* action);
void KSelectAction_OnInsertAction(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseInsertAction(KSelectAction* self, QAction* before, QAction* action);
void KSelectAction_OnSlotActionTriggered(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseSlotActionTriggered(KSelectAction* self, QAction* action);
void KSelectAction_OnCreateWidget(KSelectAction* self, intptr_t slot);
QWidget* KSelectAction_QBaseCreateWidget(KSelectAction* self, QWidget* parent);
void KSelectAction_OnDeleteWidget(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseDeleteWidget(KSelectAction* self, QWidget* widget);
void KSelectAction_OnEvent(KSelectAction* self, intptr_t slot);
bool KSelectAction_QBaseEvent(KSelectAction* self, QEvent* event);
void KSelectAction_OnEventFilter(KSelectAction* self, intptr_t slot);
bool KSelectAction_QBaseEventFilter(KSelectAction* self, QObject* watched, QEvent* event);
void KSelectAction_TimerEvent(KSelectAction* self, QTimerEvent* event);
void KSelectAction_OnTimerEvent(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseTimerEvent(KSelectAction* self, QTimerEvent* event);
void KSelectAction_ChildEvent(KSelectAction* self, QChildEvent* event);
void KSelectAction_OnChildEvent(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseChildEvent(KSelectAction* self, QChildEvent* event);
void KSelectAction_CustomEvent(KSelectAction* self, QEvent* event);
void KSelectAction_OnCustomEvent(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseCustomEvent(KSelectAction* self, QEvent* event);
void KSelectAction_ConnectNotify(KSelectAction* self, const QMetaMethod* signal);
void KSelectAction_OnConnectNotify(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseConnectNotify(KSelectAction* self, const QMetaMethod* signal);
void KSelectAction_DisconnectNotify(KSelectAction* self, const QMetaMethod* signal);
void KSelectAction_OnDisconnectNotify(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseDisconnectNotify(KSelectAction* self, const QMetaMethod* signal);
void KSelectAction_SlotToggled(KSelectAction* self, bool param1);
void KSelectAction_OnSlotToggled(KSelectAction* self, intptr_t slot);
void KSelectAction_QBaseSlotToggled(KSelectAction* self, bool param1);
libqt_list /* of QWidget* */ KSelectAction_CreatedWidgets(const KSelectAction* self);
void KSelectAction_OnCreatedWidgets(const KSelectAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KSelectAction_QBaseCreatedWidgets(const KSelectAction* self);
QObject* KSelectAction_Sender(const KSelectAction* self);
void KSelectAction_OnSender(const KSelectAction* self, intptr_t slot);
QObject* KSelectAction_QBaseSender(const KSelectAction* self);
int KSelectAction_SenderSignalIndex(const KSelectAction* self);
void KSelectAction_OnSenderSignalIndex(const KSelectAction* self, intptr_t slot);
int KSelectAction_QBaseSenderSignalIndex(const KSelectAction* self);
int KSelectAction_Receivers(const KSelectAction* self, const char* signal);
void KSelectAction_OnReceivers(const KSelectAction* self, intptr_t slot);
int KSelectAction_QBaseReceivers(const KSelectAction* self, const char* signal);
bool KSelectAction_IsSignalConnected(const KSelectAction* self, const QMetaMethod* signal);
void KSelectAction_OnIsSignalConnected(const KSelectAction* self, intptr_t slot);
bool KSelectAction_QBaseIsSignalConnected(const KSelectAction* self, const QMetaMethod* signal);
void KSelectAction_Delete(KSelectAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
