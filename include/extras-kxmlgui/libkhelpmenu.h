#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKHELPMENU_H
#define SRC_EXTRAS_KXMLGUIC_LIBKHELPMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAboutData KAboutData;
typedef struct KHelpMenu KHelpMenu;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KHelpMenu* KHelpMenu_new(QWidget* parent);
KHelpMenu* KHelpMenu_new2(QWidget* parent, const libqt_string unused);
KHelpMenu* KHelpMenu_new3();
KHelpMenu* KHelpMenu_new4(QWidget* parent, const KAboutData* aboutData, bool showWhatsThis);
KHelpMenu* KHelpMenu_new5(QWidget* parent, const KAboutData* aboutData);
KHelpMenu* KHelpMenu_new6(QWidget* parent, const libqt_string unused, bool showWhatsThis);
QMetaObject* KHelpMenu_MetaObject(const KHelpMenu* self);
void* KHelpMenu_Metacast(KHelpMenu* self, const char* param1);
int KHelpMenu_Metacall(KHelpMenu* self, int param1, int param2, void** param3);
libqt_string KHelpMenu_Tr(const char* s);
void KHelpMenu_SetShowWhatsThis(KHelpMenu* self, bool showWhatsThis);
QMenu* KHelpMenu_Menu(KHelpMenu* self);
QAction* KHelpMenu_Action(const KHelpMenu* self, int id);
void KHelpMenu_AppHelpActivated(KHelpMenu* self);
void KHelpMenu_ContextHelpActivated(KHelpMenu* self);
void KHelpMenu_AboutApplication(KHelpMenu* self);
void KHelpMenu_AboutKDE(KHelpMenu* self);
void KHelpMenu_ReportBug(KHelpMenu* self);
void KHelpMenu_SwitchApplicationLanguage(KHelpMenu* self);
void KHelpMenu_Donate(KHelpMenu* self);
void KHelpMenu_ShowAboutApplication(KHelpMenu* self);
void KHelpMenu_Connect_ShowAboutApplication(KHelpMenu* self, intptr_t slot);
libqt_string KHelpMenu_Tr2(const char* s, const char* c);
libqt_string KHelpMenu_Tr3(const char* s, const char* c, int n);
void KHelpMenu_OnMetacall(KHelpMenu* self, intptr_t slot);
int KHelpMenu_QBaseMetacall(KHelpMenu* self, int param1, int param2, void** param3);
bool KHelpMenu_Event(KHelpMenu* self, QEvent* event);
void KHelpMenu_OnEvent(KHelpMenu* self, intptr_t slot);
bool KHelpMenu_QBaseEvent(KHelpMenu* self, QEvent* event);
bool KHelpMenu_EventFilter(KHelpMenu* self, QObject* watched, QEvent* event);
void KHelpMenu_OnEventFilter(KHelpMenu* self, intptr_t slot);
bool KHelpMenu_QBaseEventFilter(KHelpMenu* self, QObject* watched, QEvent* event);
void KHelpMenu_TimerEvent(KHelpMenu* self, QTimerEvent* event);
void KHelpMenu_OnTimerEvent(KHelpMenu* self, intptr_t slot);
void KHelpMenu_QBaseTimerEvent(KHelpMenu* self, QTimerEvent* event);
void KHelpMenu_ChildEvent(KHelpMenu* self, QChildEvent* event);
void KHelpMenu_OnChildEvent(KHelpMenu* self, intptr_t slot);
void KHelpMenu_QBaseChildEvent(KHelpMenu* self, QChildEvent* event);
void KHelpMenu_CustomEvent(KHelpMenu* self, QEvent* event);
void KHelpMenu_OnCustomEvent(KHelpMenu* self, intptr_t slot);
void KHelpMenu_QBaseCustomEvent(KHelpMenu* self, QEvent* event);
void KHelpMenu_ConnectNotify(KHelpMenu* self, const QMetaMethod* signal);
void KHelpMenu_OnConnectNotify(KHelpMenu* self, intptr_t slot);
void KHelpMenu_QBaseConnectNotify(KHelpMenu* self, const QMetaMethod* signal);
void KHelpMenu_DisconnectNotify(KHelpMenu* self, const QMetaMethod* signal);
void KHelpMenu_OnDisconnectNotify(KHelpMenu* self, intptr_t slot);
void KHelpMenu_QBaseDisconnectNotify(KHelpMenu* self, const QMetaMethod* signal);
QObject* KHelpMenu_Sender(const KHelpMenu* self);
void KHelpMenu_OnSender(const KHelpMenu* self, intptr_t slot);
QObject* KHelpMenu_QBaseSender(const KHelpMenu* self);
int KHelpMenu_SenderSignalIndex(const KHelpMenu* self);
void KHelpMenu_OnSenderSignalIndex(const KHelpMenu* self, intptr_t slot);
int KHelpMenu_QBaseSenderSignalIndex(const KHelpMenu* self);
int KHelpMenu_Receivers(const KHelpMenu* self, const char* signal);
void KHelpMenu_OnReceivers(const KHelpMenu* self, intptr_t slot);
int KHelpMenu_QBaseReceivers(const KHelpMenu* self, const char* signal);
bool KHelpMenu_IsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal);
void KHelpMenu_OnIsSignalConnected(const KHelpMenu* self, intptr_t slot);
bool KHelpMenu_QBaseIsSignalConnected(const KHelpMenu* self, const QMetaMethod* signal);
void KHelpMenu_Delete(KHelpMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
