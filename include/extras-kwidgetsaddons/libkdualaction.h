#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKDUALACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKDUALACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDualAction KDualAction;
typedef struct KGuiItem KGuiItem;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KDualAction* KDualAction_new(QObject* parent);
KDualAction* KDualAction_new2(const libqt_string inactiveText, const libqt_string activeText, QObject* parent);
QMetaObject* KDualAction_MetaObject(const KDualAction* self);
void* KDualAction_Metacast(KDualAction* self, const char* param1);
int KDualAction_Metacall(KDualAction* self, int param1, int param2, void** param3);
libqt_string KDualAction_Tr(const char* s);
void KDualAction_SetActiveGuiItem(KDualAction* self, const KGuiItem* activeGuiItem);
KGuiItem* KDualAction_ActiveGuiItem(const KDualAction* self);
void KDualAction_SetInactiveGuiItem(KDualAction* self, const KGuiItem* inactiveGuiItem);
KGuiItem* KDualAction_InactiveGuiItem(const KDualAction* self);
void KDualAction_SetActiveIcon(KDualAction* self, const QIcon* activeIcon);
QIcon* KDualAction_ActiveIcon(const KDualAction* self);
void KDualAction_SetInactiveIcon(KDualAction* self, const QIcon* inactiveIcon);
QIcon* KDualAction_InactiveIcon(const KDualAction* self);
void KDualAction_SetActiveText(KDualAction* self, const libqt_string activeText);
libqt_string KDualAction_ActiveText(const KDualAction* self);
void KDualAction_SetInactiveText(KDualAction* self, const libqt_string inactiveText);
libqt_string KDualAction_InactiveText(const KDualAction* self);
void KDualAction_SetActiveToolTip(KDualAction* self, const libqt_string activeToolTip);
libqt_string KDualAction_ActiveToolTip(const KDualAction* self);
void KDualAction_SetInactiveToolTip(KDualAction* self, const libqt_string inactiveToolTip);
libqt_string KDualAction_InactiveToolTip(const KDualAction* self);
void KDualAction_SetIconForStates(KDualAction* self, const QIcon* icon);
bool KDualAction_IsActive(const KDualAction* self);
void KDualAction_SetAutoToggle(KDualAction* self, bool autoToggle);
bool KDualAction_AutoToggle(const KDualAction* self);
void KDualAction_SetActive(KDualAction* self, bool state);
void KDualAction_ActiveChanged(KDualAction* self, bool param1);
void KDualAction_Connect_ActiveChanged(KDualAction* self, intptr_t slot);
void KDualAction_ActiveChangedByUser(KDualAction* self, bool param1);
void KDualAction_Connect_ActiveChangedByUser(KDualAction* self, intptr_t slot);
libqt_string KDualAction_Tr2(const char* s, const char* c);
libqt_string KDualAction_Tr3(const char* s, const char* c, int n);
void KDualAction_OnMetacall(KDualAction* self, intptr_t slot);
int KDualAction_QBaseMetacall(KDualAction* self, int param1, int param2, void** param3);
bool KDualAction_Event(KDualAction* self, QEvent* param1);
void KDualAction_OnEvent(KDualAction* self, intptr_t slot);
bool KDualAction_QBaseEvent(KDualAction* self, QEvent* param1);
bool KDualAction_EventFilter(KDualAction* self, QObject* watched, QEvent* event);
void KDualAction_OnEventFilter(KDualAction* self, intptr_t slot);
bool KDualAction_QBaseEventFilter(KDualAction* self, QObject* watched, QEvent* event);
void KDualAction_TimerEvent(KDualAction* self, QTimerEvent* event);
void KDualAction_OnTimerEvent(KDualAction* self, intptr_t slot);
void KDualAction_QBaseTimerEvent(KDualAction* self, QTimerEvent* event);
void KDualAction_ChildEvent(KDualAction* self, QChildEvent* event);
void KDualAction_OnChildEvent(KDualAction* self, intptr_t slot);
void KDualAction_QBaseChildEvent(KDualAction* self, QChildEvent* event);
void KDualAction_CustomEvent(KDualAction* self, QEvent* event);
void KDualAction_OnCustomEvent(KDualAction* self, intptr_t slot);
void KDualAction_QBaseCustomEvent(KDualAction* self, QEvent* event);
void KDualAction_ConnectNotify(KDualAction* self, const QMetaMethod* signal);
void KDualAction_OnConnectNotify(KDualAction* self, intptr_t slot);
void KDualAction_QBaseConnectNotify(KDualAction* self, const QMetaMethod* signal);
void KDualAction_DisconnectNotify(KDualAction* self, const QMetaMethod* signal);
void KDualAction_OnDisconnectNotify(KDualAction* self, intptr_t slot);
void KDualAction_QBaseDisconnectNotify(KDualAction* self, const QMetaMethod* signal);
QObject* KDualAction_Sender(const KDualAction* self);
void KDualAction_OnSender(const KDualAction* self, intptr_t slot);
QObject* KDualAction_QBaseSender(const KDualAction* self);
int KDualAction_SenderSignalIndex(const KDualAction* self);
void KDualAction_OnSenderSignalIndex(const KDualAction* self, intptr_t slot);
int KDualAction_QBaseSenderSignalIndex(const KDualAction* self);
int KDualAction_Receivers(const KDualAction* self, const char* signal);
void KDualAction_OnReceivers(const KDualAction* self, intptr_t slot);
int KDualAction_QBaseReceivers(const KDualAction* self, const char* signal);
bool KDualAction_IsSignalConnected(const KDualAction* self, const QMetaMethod* signal);
void KDualAction_OnIsSignalConnected(const KDualAction* self, intptr_t slot);
bool KDualAction_QBaseIsSignalConnected(const KDualAction* self, const QMetaMethod* signal);
void KDualAction_Delete(KDualAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
