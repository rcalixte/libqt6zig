#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKDIALOGJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKDIALOGJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDialogJobUiDelegate KDialogJobUiDelegate;
typedef struct KJob KJob;
typedef struct KJobUiDelegate KJobUiDelegate;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KDialogJobUiDelegate* KDialogJobUiDelegate_new();
KDialogJobUiDelegate* KDialogJobUiDelegate_new2(int flags, QWidget* window);
QMetaObject* KDialogJobUiDelegate_MetaObject(const KDialogJobUiDelegate* self);
void* KDialogJobUiDelegate_Metacast(KDialogJobUiDelegate* self, const char* param1);
int KDialogJobUiDelegate_Metacall(KDialogJobUiDelegate* self, int param1, int param2, void** param3);
libqt_string KDialogJobUiDelegate_Tr(const char* s);
bool KDialogJobUiDelegate_SetJob(KDialogJobUiDelegate* self, KJob* job);
void KDialogJobUiDelegate_SetWindow(KDialogJobUiDelegate* self, QWidget* window);
QWidget* KDialogJobUiDelegate_Window(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_UpdateUserTimestamp(KDialogJobUiDelegate* self, unsigned long time);
unsigned long KDialogJobUiDelegate_UserTimestamp(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_ShowErrorMessage(KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_SlotWarning(KDialogJobUiDelegate* self, KJob* job, const libqt_string message);
libqt_string KDialogJobUiDelegate_Tr2(const char* s, const char* c);
libqt_string KDialogJobUiDelegate_Tr3(const char* s, const char* c, int n);
void KDialogJobUiDelegate_OnMetacall(KDialogJobUiDelegate* self, intptr_t slot);
int KDialogJobUiDelegate_QBaseMetacall(KDialogJobUiDelegate* self, int param1, int param2, void** param3);
void KDialogJobUiDelegate_OnSetJob(KDialogJobUiDelegate* self, intptr_t slot);
bool KDialogJobUiDelegate_QBaseSetJob(KDialogJobUiDelegate* self, KJob* job);
void KDialogJobUiDelegate_OnSetWindow(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseSetWindow(KDialogJobUiDelegate* self, QWidget* window);
void KDialogJobUiDelegate_OnShowErrorMessage(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseShowErrorMessage(KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_OnSlotWarning(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseSlotWarning(KDialogJobUiDelegate* self, KJob* job, const libqt_string message);
bool KDialogJobUiDelegate_Event(KDialogJobUiDelegate* self, QEvent* event);
void KDialogJobUiDelegate_OnEvent(KDialogJobUiDelegate* self, intptr_t slot);
bool KDialogJobUiDelegate_QBaseEvent(KDialogJobUiDelegate* self, QEvent* event);
bool KDialogJobUiDelegate_EventFilter(KDialogJobUiDelegate* self, QObject* watched, QEvent* event);
void KDialogJobUiDelegate_OnEventFilter(KDialogJobUiDelegate* self, intptr_t slot);
bool KDialogJobUiDelegate_QBaseEventFilter(KDialogJobUiDelegate* self, QObject* watched, QEvent* event);
void KDialogJobUiDelegate_TimerEvent(KDialogJobUiDelegate* self, QTimerEvent* event);
void KDialogJobUiDelegate_OnTimerEvent(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseTimerEvent(KDialogJobUiDelegate* self, QTimerEvent* event);
void KDialogJobUiDelegate_ChildEvent(KDialogJobUiDelegate* self, QChildEvent* event);
void KDialogJobUiDelegate_OnChildEvent(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseChildEvent(KDialogJobUiDelegate* self, QChildEvent* event);
void KDialogJobUiDelegate_CustomEvent(KDialogJobUiDelegate* self, QEvent* event);
void KDialogJobUiDelegate_OnCustomEvent(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseCustomEvent(KDialogJobUiDelegate* self, QEvent* event);
void KDialogJobUiDelegate_ConnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
void KDialogJobUiDelegate_OnConnectNotify(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseConnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
void KDialogJobUiDelegate_DisconnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
void KDialogJobUiDelegate_OnDisconnectNotify(KDialogJobUiDelegate* self, intptr_t slot);
void KDialogJobUiDelegate_QBaseDisconnectNotify(KDialogJobUiDelegate* self, const QMetaMethod* signal);
KJob* KDialogJobUiDelegate_Job(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_OnJob(const KDialogJobUiDelegate* self, intptr_t slot);
KJob* KDialogJobUiDelegate_QBaseJob(const KDialogJobUiDelegate* self);
QObject* KDialogJobUiDelegate_Sender(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_OnSender(const KDialogJobUiDelegate* self, intptr_t slot);
QObject* KDialogJobUiDelegate_QBaseSender(const KDialogJobUiDelegate* self);
int KDialogJobUiDelegate_SenderSignalIndex(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_OnSenderSignalIndex(const KDialogJobUiDelegate* self, intptr_t slot);
int KDialogJobUiDelegate_QBaseSenderSignalIndex(const KDialogJobUiDelegate* self);
int KDialogJobUiDelegate_Receivers(const KDialogJobUiDelegate* self, const char* signal);
void KDialogJobUiDelegate_OnReceivers(const KDialogJobUiDelegate* self, intptr_t slot);
int KDialogJobUiDelegate_QBaseReceivers(const KDialogJobUiDelegate* self, const char* signal);
bool KDialogJobUiDelegate_IsSignalConnected(const KDialogJobUiDelegate* self, const QMetaMethod* signal);
void KDialogJobUiDelegate_OnIsSignalConnected(const KDialogJobUiDelegate* self, intptr_t slot);
bool KDialogJobUiDelegate_QBaseIsSignalConnected(const KDialogJobUiDelegate* self, const QMetaMethod* signal);
void KDialogJobUiDelegate_Delete(KDialogJobUiDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
