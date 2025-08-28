#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOGGLEACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKTOGGLEACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KGuiItem KGuiItem;
typedef struct KToggleAction KToggleAction;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KToggleAction* KToggleAction_new(QObject* parent);
KToggleAction* KToggleAction_new2(const libqt_string text, QObject* parent);
KToggleAction* KToggleAction_new3(const QIcon* icon, const libqt_string text, QObject* parent);
QMetaObject* KToggleAction_MetaObject(const KToggleAction* self);
void* KToggleAction_Metacast(KToggleAction* self, const char* param1);
int KToggleAction_Metacall(KToggleAction* self, int param1, int param2, void** param3);
libqt_string KToggleAction_Tr(const char* s);
void KToggleAction_SetCheckedState(KToggleAction* self, const KGuiItem* checkedItem);
void KToggleAction_SlotToggled(KToggleAction* self, bool checked);
libqt_string KToggleAction_Tr2(const char* s, const char* c);
libqt_string KToggleAction_Tr3(const char* s, const char* c, int n);
void KToggleAction_OnMetacall(KToggleAction* self, intptr_t slot);
int KToggleAction_QBaseMetacall(KToggleAction* self, int param1, int param2, void** param3);
void KToggleAction_OnSlotToggled(KToggleAction* self, intptr_t slot);
void KToggleAction_QBaseSlotToggled(KToggleAction* self, bool checked);
bool KToggleAction_Event(KToggleAction* self, QEvent* param1);
void KToggleAction_OnEvent(KToggleAction* self, intptr_t slot);
bool KToggleAction_QBaseEvent(KToggleAction* self, QEvent* param1);
bool KToggleAction_EventFilter(KToggleAction* self, QObject* watched, QEvent* event);
void KToggleAction_OnEventFilter(KToggleAction* self, intptr_t slot);
bool KToggleAction_QBaseEventFilter(KToggleAction* self, QObject* watched, QEvent* event);
void KToggleAction_TimerEvent(KToggleAction* self, QTimerEvent* event);
void KToggleAction_OnTimerEvent(KToggleAction* self, intptr_t slot);
void KToggleAction_QBaseTimerEvent(KToggleAction* self, QTimerEvent* event);
void KToggleAction_ChildEvent(KToggleAction* self, QChildEvent* event);
void KToggleAction_OnChildEvent(KToggleAction* self, intptr_t slot);
void KToggleAction_QBaseChildEvent(KToggleAction* self, QChildEvent* event);
void KToggleAction_CustomEvent(KToggleAction* self, QEvent* event);
void KToggleAction_OnCustomEvent(KToggleAction* self, intptr_t slot);
void KToggleAction_QBaseCustomEvent(KToggleAction* self, QEvent* event);
void KToggleAction_ConnectNotify(KToggleAction* self, const QMetaMethod* signal);
void KToggleAction_OnConnectNotify(KToggleAction* self, intptr_t slot);
void KToggleAction_QBaseConnectNotify(KToggleAction* self, const QMetaMethod* signal);
void KToggleAction_DisconnectNotify(KToggleAction* self, const QMetaMethod* signal);
void KToggleAction_OnDisconnectNotify(KToggleAction* self, intptr_t slot);
void KToggleAction_QBaseDisconnectNotify(KToggleAction* self, const QMetaMethod* signal);
QObject* KToggleAction_Sender(const KToggleAction* self);
void KToggleAction_OnSender(const KToggleAction* self, intptr_t slot);
QObject* KToggleAction_QBaseSender(const KToggleAction* self);
int KToggleAction_SenderSignalIndex(const KToggleAction* self);
void KToggleAction_OnSenderSignalIndex(const KToggleAction* self, intptr_t slot);
int KToggleAction_QBaseSenderSignalIndex(const KToggleAction* self);
int KToggleAction_Receivers(const KToggleAction* self, const char* signal);
void KToggleAction_OnReceivers(const KToggleAction* self, intptr_t slot);
int KToggleAction_QBaseReceivers(const KToggleAction* self, const char* signal);
bool KToggleAction_IsSignalConnected(const KToggleAction* self, const QMetaMethod* signal);
void KToggleAction_OnIsSignalConnected(const KToggleAction* self, intptr_t slot);
bool KToggleAction_QBaseIsSignalConnected(const KToggleAction* self, const QMetaMethod* signal);
void KToggleAction_Delete(KToggleAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
