#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKFONTSIZEACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKFONTSIZEACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFontSizeAction KFontSizeAction;
typedef struct KSelectAction KSelectAction;
typedef struct QAction QAction;
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

KFontSizeAction* KFontSizeAction_new(QObject* parent);
KFontSizeAction* KFontSizeAction_new2(const libqt_string text, QObject* parent);
KFontSizeAction* KFontSizeAction_new3(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KFontSizeAction_MetaObject(const KFontSizeAction* self);
void* KFontSizeAction_Metacast(KFontSizeAction* self, const char* param1);
int KFontSizeAction_Metacall(KFontSizeAction* self, int param1, int param2, void** param3);
libqt_string KFontSizeAction_Tr(const char* s);
int KFontSizeAction_FontSize(const KFontSizeAction* self);
void KFontSizeAction_SetFontSize(KFontSizeAction* self, int size);
void KFontSizeAction_FontSizeChanged(KFontSizeAction* self, int param1);
void KFontSizeAction_Connect_FontSizeChanged(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_SlotActionTriggered(KFontSizeAction* self, QAction* action);
libqt_string KFontSizeAction_Tr2(const char* s, const char* c);
libqt_string KFontSizeAction_Tr3(const char* s, const char* c, int n);
void KFontSizeAction_OnMetacall(KFontSizeAction* self, intptr_t slot);
int KFontSizeAction_QBaseMetacall(KFontSizeAction* self, int param1, int param2, void** param3);
void KFontSizeAction_OnSlotActionTriggered(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseSlotActionTriggered(KFontSizeAction* self, QAction* action);
QAction* KFontSizeAction_RemoveAction(KFontSizeAction* self, QAction* action);
void KFontSizeAction_OnRemoveAction(KFontSizeAction* self, intptr_t slot);
QAction* KFontSizeAction_QBaseRemoveAction(KFontSizeAction* self, QAction* action);
void KFontSizeAction_InsertAction(KFontSizeAction* self, QAction* before, QAction* action);
void KFontSizeAction_OnInsertAction(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseInsertAction(KFontSizeAction* self, QAction* before, QAction* action);
QWidget* KFontSizeAction_CreateWidget(KFontSizeAction* self, QWidget* parent);
void KFontSizeAction_OnCreateWidget(KFontSizeAction* self, intptr_t slot);
QWidget* KFontSizeAction_QBaseCreateWidget(KFontSizeAction* self, QWidget* parent);
void KFontSizeAction_DeleteWidget(KFontSizeAction* self, QWidget* widget);
void KFontSizeAction_OnDeleteWidget(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseDeleteWidget(KFontSizeAction* self, QWidget* widget);
bool KFontSizeAction_Event(KFontSizeAction* self, QEvent* event);
void KFontSizeAction_OnEvent(KFontSizeAction* self, intptr_t slot);
bool KFontSizeAction_QBaseEvent(KFontSizeAction* self, QEvent* event);
bool KFontSizeAction_EventFilter(KFontSizeAction* self, QObject* watched, QEvent* event);
void KFontSizeAction_OnEventFilter(KFontSizeAction* self, intptr_t slot);
bool KFontSizeAction_QBaseEventFilter(KFontSizeAction* self, QObject* watched, QEvent* event);
void KFontSizeAction_TimerEvent(KFontSizeAction* self, QTimerEvent* event);
void KFontSizeAction_OnTimerEvent(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseTimerEvent(KFontSizeAction* self, QTimerEvent* event);
void KFontSizeAction_ChildEvent(KFontSizeAction* self, QChildEvent* event);
void KFontSizeAction_OnChildEvent(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseChildEvent(KFontSizeAction* self, QChildEvent* event);
void KFontSizeAction_CustomEvent(KFontSizeAction* self, QEvent* event);
void KFontSizeAction_OnCustomEvent(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseCustomEvent(KFontSizeAction* self, QEvent* event);
void KFontSizeAction_ConnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
void KFontSizeAction_OnConnectNotify(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseConnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
void KFontSizeAction_DisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
void KFontSizeAction_OnDisconnectNotify(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseDisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal);
void KFontSizeAction_SlotToggled(KFontSizeAction* self, bool param1);
void KFontSizeAction_OnSlotToggled(KFontSizeAction* self, intptr_t slot);
void KFontSizeAction_QBaseSlotToggled(KFontSizeAction* self, bool param1);
libqt_list /* of QWidget* */ KFontSizeAction_CreatedWidgets(const KFontSizeAction* self);
void KFontSizeAction_OnCreatedWidgets(const KFontSizeAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KFontSizeAction_QBaseCreatedWidgets(const KFontSizeAction* self);
QObject* KFontSizeAction_Sender(const KFontSizeAction* self);
void KFontSizeAction_OnSender(const KFontSizeAction* self, intptr_t slot);
QObject* KFontSizeAction_QBaseSender(const KFontSizeAction* self);
int KFontSizeAction_SenderSignalIndex(const KFontSizeAction* self);
void KFontSizeAction_OnSenderSignalIndex(const KFontSizeAction* self, intptr_t slot);
int KFontSizeAction_QBaseSenderSignalIndex(const KFontSizeAction* self);
int KFontSizeAction_Receivers(const KFontSizeAction* self, const char* signal);
void KFontSizeAction_OnReceivers(const KFontSizeAction* self, intptr_t slot);
int KFontSizeAction_QBaseReceivers(const KFontSizeAction* self, const char* signal);
bool KFontSizeAction_IsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal);
void KFontSizeAction_OnIsSignalConnected(const KFontSizeAction* self, intptr_t slot);
bool KFontSizeAction_QBaseIsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal);
void KFontSizeAction_Delete(KFontSizeAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
