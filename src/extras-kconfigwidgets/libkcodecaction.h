#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCODECACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKCODECACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCodecAction KCodecAction;
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

KCodecAction* KCodecAction_new(QObject* parent);
KCodecAction* KCodecAction_new2(const libqt_string text, QObject* parent);
KCodecAction* KCodecAction_new3(const QIcon* icon, const libqt_string text, QObject* parent);
KCodecAction* KCodecAction_new4(QObject* parent, bool showAutoOptions);
KCodecAction* KCodecAction_new5(const libqt_string text, QObject* parent, bool showAutoOptions);
KCodecAction* KCodecAction_new6(const QIcon* icon, const libqt_string text, QObject* parent, bool showAutoOptions);
QMetaObject* KCodecAction_MetaObject(const KCodecAction* self);
void* KCodecAction_Metacast(KCodecAction* self, const char* param1);
int KCodecAction_Metacall(KCodecAction* self, int param1, int param2, void** param3);
libqt_string KCodecAction_CurrentCodecName(const KCodecAction* self);
bool KCodecAction_SetCurrentCodec(KCodecAction* self, const libqt_string codecName);
void KCodecAction_CodecNameTriggered(KCodecAction* self, const libqt_string name);
void KCodecAction_Connect_CodecNameTriggered(KCodecAction* self, intptr_t slot);
void KCodecAction_DefaultItemTriggered(KCodecAction* self);
void KCodecAction_Connect_DefaultItemTriggered(KCodecAction* self, intptr_t slot);
void KCodecAction_SlotActionTriggered(KCodecAction* self, QAction* param1);
void KCodecAction_OnMetaObject(const KCodecAction* self, intptr_t slot);
QMetaObject* KCodecAction_SuperMetaObject(const KCodecAction* self);
void KCodecAction_OnMetacast(KCodecAction* self, intptr_t slot);
void* KCodecAction_SuperMetacast(KCodecAction* self, const char* param1);
void KCodecAction_OnMetacall(KCodecAction* self, intptr_t slot);
int KCodecAction_SuperMetacall(KCodecAction* self, int param1, int param2, void** param3);
void KCodecAction_OnSlotActionTriggered(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperSlotActionTriggered(KCodecAction* self, QAction* param1);
QAction* KCodecAction_RemoveAction(KCodecAction* self, QAction* action);
void KCodecAction_OnRemoveAction(KCodecAction* self, intptr_t slot);
QAction* KCodecAction_SuperRemoveAction(KCodecAction* self, QAction* action);
void KCodecAction_InsertAction(KCodecAction* self, QAction* before, QAction* action);
void KCodecAction_OnInsertAction(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperInsertAction(KCodecAction* self, QAction* before, QAction* action);
QWidget* KCodecAction_CreateWidget(KCodecAction* self, QWidget* parent);
void KCodecAction_OnCreateWidget(KCodecAction* self, intptr_t slot);
QWidget* KCodecAction_SuperCreateWidget(KCodecAction* self, QWidget* parent);
void KCodecAction_DeleteWidget(KCodecAction* self, QWidget* widget);
void KCodecAction_OnDeleteWidget(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperDeleteWidget(KCodecAction* self, QWidget* widget);
bool KCodecAction_Event(KCodecAction* self, QEvent* event);
void KCodecAction_OnEvent(KCodecAction* self, intptr_t slot);
bool KCodecAction_SuperEvent(KCodecAction* self, QEvent* event);
bool KCodecAction_EventFilter(KCodecAction* self, QObject* watched, QEvent* event);
void KCodecAction_OnEventFilter(KCodecAction* self, intptr_t slot);
bool KCodecAction_SuperEventFilter(KCodecAction* self, QObject* watched, QEvent* event);
void KCodecAction_TimerEvent(KCodecAction* self, QTimerEvent* event);
void KCodecAction_OnTimerEvent(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperTimerEvent(KCodecAction* self, QTimerEvent* event);
void KCodecAction_ChildEvent(KCodecAction* self, QChildEvent* event);
void KCodecAction_OnChildEvent(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperChildEvent(KCodecAction* self, QChildEvent* event);
void KCodecAction_CustomEvent(KCodecAction* self, QEvent* event);
void KCodecAction_OnCustomEvent(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperCustomEvent(KCodecAction* self, QEvent* event);
void KCodecAction_ConnectNotify(KCodecAction* self, const QMetaMethod* signal);
void KCodecAction_OnConnectNotify(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperConnectNotify(KCodecAction* self, const QMetaMethod* signal);
void KCodecAction_DisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
void KCodecAction_OnDisconnectNotify(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperDisconnectNotify(KCodecAction* self, const QMetaMethod* signal);
void KCodecAction_SlotToggled(KCodecAction* self, bool param1);
void KCodecAction_OnSlotToggled(KCodecAction* self, intptr_t slot);
void KCodecAction_SuperSlotToggled(KCodecAction* self, bool param1);
libqt_list /* of QWidget* */ KCodecAction_CreatedWidgets(const KCodecAction* self);
void KCodecAction_OnCreatedWidgets(const KCodecAction* self, intptr_t slot);
libqt_list /* of QWidget* */ KCodecAction_SuperCreatedWidgets(const KCodecAction* self);
QObject* KCodecAction_Sender(const KCodecAction* self);
void KCodecAction_OnSender(const KCodecAction* self, intptr_t slot);
QObject* KCodecAction_SuperSender(const KCodecAction* self);
int KCodecAction_SenderSignalIndex(const KCodecAction* self);
void KCodecAction_OnSenderSignalIndex(const KCodecAction* self, intptr_t slot);
int KCodecAction_SuperSenderSignalIndex(const KCodecAction* self);
int KCodecAction_Receivers(const KCodecAction* self, const char* signal);
void KCodecAction_OnReceivers(const KCodecAction* self, intptr_t slot);
int KCodecAction_SuperReceivers(const KCodecAction* self, const char* signal);
bool KCodecAction_IsSignalConnected(const KCodecAction* self, const QMetaMethod* signal);
void KCodecAction_OnIsSignalConnected(const KCodecAction* self, intptr_t slot);
bool KCodecAction_SuperIsSignalConnected(const KCodecAction* self, const QMetaMethod* signal);
void KCodecAction_Delete(KCodecAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
