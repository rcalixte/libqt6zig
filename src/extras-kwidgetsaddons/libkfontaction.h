#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKFONTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKFONTACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFontAction KFontAction;
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

KFontAction* KFontAction_new(unsigned int fontListCriteria, QObject* parent);
KFontAction* KFontAction_new2(QObject* parent);
KFontAction* KFontAction_new3(const libqt_string text, QObject* parent);
KFontAction* KFontAction_new4(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KFontAction_MetaObject(const KFontAction* self);
void* KFontAction_Metacast(KFontAction* self, const char* param1);
int KFontAction_Metacall(KFontAction* self, int param1, int param2, void** param3);
libqt_string KFontAction_Font(const KFontAction* self);
void KFontAction_SetFont(KFontAction* self, const libqt_string family);
QWidget* KFontAction_CreateWidget(KFontAction* self, QWidget* parent);
void KFontAction_OnMetaObject(const KFontAction* self, intptr_t slot);
QMetaObject* KFontAction_SuperMetaObject(const KFontAction* self);
void KFontAction_OnMetacast(KFontAction* self, intptr_t slot);
void* KFontAction_SuperMetacast(KFontAction* self, const char* param1);
void KFontAction_OnMetacall(KFontAction* self, intptr_t slot);
int KFontAction_SuperMetacall(KFontAction* self, int param1, int param2, void** param3);
void KFontAction_OnCreateWidget(KFontAction* self, intptr_t slot);
QWidget* KFontAction_SuperCreateWidget(KFontAction* self, QWidget* parent);
QAction* KFontAction_RemoveAction(KFontAction* self, QAction* action);
void KFontAction_OnRemoveAction(KFontAction* self, intptr_t slot);
QAction* KFontAction_SuperRemoveAction(KFontAction* self, QAction* action);
void KFontAction_InsertAction(KFontAction* self, QAction* before, QAction* action);
void KFontAction_OnInsertAction(KFontAction* self, intptr_t slot);
void KFontAction_SuperInsertAction(KFontAction* self, QAction* before, QAction* action);
void KFontAction_SlotActionTriggered(KFontAction* self, QAction* action);
void KFontAction_OnSlotActionTriggered(KFontAction* self, intptr_t slot);
void KFontAction_SuperSlotActionTriggered(KFontAction* self, QAction* action);
void KFontAction_DeleteWidget(KFontAction* self, QWidget* widget);
void KFontAction_OnDeleteWidget(KFontAction* self, intptr_t slot);
void KFontAction_SuperDeleteWidget(KFontAction* self, QWidget* widget);
bool KFontAction_Event(KFontAction* self, QEvent* event);
void KFontAction_OnEvent(KFontAction* self, intptr_t slot);
bool KFontAction_SuperEvent(KFontAction* self, QEvent* event);
bool KFontAction_EventFilter(KFontAction* self, QObject* watched, QEvent* event);
void KFontAction_OnEventFilter(KFontAction* self, intptr_t slot);
bool KFontAction_SuperEventFilter(KFontAction* self, QObject* watched, QEvent* event);
void KFontAction_TimerEvent(KFontAction* self, QTimerEvent* event);
void KFontAction_OnTimerEvent(KFontAction* self, intptr_t slot);
void KFontAction_SuperTimerEvent(KFontAction* self, QTimerEvent* event);
void KFontAction_ChildEvent(KFontAction* self, QChildEvent* event);
void KFontAction_OnChildEvent(KFontAction* self, intptr_t slot);
void KFontAction_SuperChildEvent(KFontAction* self, QChildEvent* event);
void KFontAction_CustomEvent(KFontAction* self, QEvent* event);
void KFontAction_OnCustomEvent(KFontAction* self, intptr_t slot);
void KFontAction_SuperCustomEvent(KFontAction* self, QEvent* event);
void KFontAction_ConnectNotify(KFontAction* self, const QMetaMethod* signal);
void KFontAction_OnConnectNotify(KFontAction* self, intptr_t slot);
void KFontAction_SuperConnectNotify(KFontAction* self, const QMetaMethod* signal);
void KFontAction_DisconnectNotify(KFontAction* self, const QMetaMethod* signal);
void KFontAction_OnDisconnectNotify(KFontAction* self, intptr_t slot);
void KFontAction_SuperDisconnectNotify(KFontAction* self, const QMetaMethod* signal);
void KFontAction_SlotToggled(KFontAction* self, bool param1);
void KFontAction_OnSlotToggled(KFontAction* self, intptr_t slot);
void KFontAction_SuperSlotToggled(KFontAction* self, bool param1);
libqt_list /* of QWidget* */ KFontAction_CreatedWidgets(const KFontAction* self);
void KFontAction_OnCreatedWidgets(const KFontAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KFontAction_SuperCreatedWidgets(const KFontAction* self);
QObject* KFontAction_Sender(const KFontAction* self);
void KFontAction_OnSender(const KFontAction* self, intptr_t slot);
QObject* KFontAction_SuperSender(const KFontAction* self);
int KFontAction_SenderSignalIndex(const KFontAction* self);
void KFontAction_OnSenderSignalIndex(const KFontAction* self, intptr_t slot);
int KFontAction_SuperSenderSignalIndex(const KFontAction* self);
int KFontAction_Receivers(const KFontAction* self, const char* signal);
void KFontAction_OnReceivers(const KFontAction* self, intptr_t slot);
int KFontAction_SuperReceivers(const KFontAction* self, const char* signal);
bool KFontAction_IsSignalConnected(const KFontAction* self, const QMetaMethod* signal);
void KFontAction_OnIsSignalConnected(const KFontAction* self, intptr_t slot);
bool KFontAction_SuperIsSignalConnected(const KFontAction* self, const QMetaMethod* signal);
void KFontAction_Delete(KFontAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
