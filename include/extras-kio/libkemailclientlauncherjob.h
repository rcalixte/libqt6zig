#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKEMAILCLIENTLAUNCHERJOB_H
#define SRC_EXTRAS_KIOC_LIBKEMAILCLIENTLAUNCHERJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KEMailClientLauncherJob KEMailClientLauncherJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KEMailClientLauncherJob* KEMailClientLauncherJob_new();
KEMailClientLauncherJob* KEMailClientLauncherJob_new2(QObject* parent);
QMetaObject* KEMailClientLauncherJob_MetaObject(const KEMailClientLauncherJob* self);
void* KEMailClientLauncherJob_Metacast(KEMailClientLauncherJob* self, const char* param1);
int KEMailClientLauncherJob_Metacall(KEMailClientLauncherJob* self, int param1, int param2, void** param3);
libqt_string KEMailClientLauncherJob_Tr(const char* s);
void KEMailClientLauncherJob_SetTo(KEMailClientLauncherJob* self, const libqt_list /* of libqt_string */ to);
void KEMailClientLauncherJob_SetCc(KEMailClientLauncherJob* self, const libqt_list /* of libqt_string */ cc);
void KEMailClientLauncherJob_SetBcc(KEMailClientLauncherJob* self, const libqt_list /* of libqt_string */ bcc);
void KEMailClientLauncherJob_SetSubject(KEMailClientLauncherJob* self, const libqt_string subject);
void KEMailClientLauncherJob_SetBody(KEMailClientLauncherJob* self, const libqt_string body);
void KEMailClientLauncherJob_SetAttachments(KEMailClientLauncherJob* self, const libqt_list /* of QUrl* */ urls);
void KEMailClientLauncherJob_SetStartupId(KEMailClientLauncherJob* self, const libqt_string startupId);
void KEMailClientLauncherJob_Start(KEMailClientLauncherJob* self);
libqt_string KEMailClientLauncherJob_Tr2(const char* s, const char* c);
libqt_string KEMailClientLauncherJob_Tr3(const char* s, const char* c, int n);
void KEMailClientLauncherJob_OnMetacall(KEMailClientLauncherJob* self, intptr_t slot);
int KEMailClientLauncherJob_QBaseMetacall(KEMailClientLauncherJob* self, int param1, int param2, void** param3);
void KEMailClientLauncherJob_OnStart(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseStart(KEMailClientLauncherJob* self);
bool KEMailClientLauncherJob_DoKill(KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnDoKill(KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseDoKill(KEMailClientLauncherJob* self);
bool KEMailClientLauncherJob_DoSuspend(KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnDoSuspend(KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseDoSuspend(KEMailClientLauncherJob* self);
bool KEMailClientLauncherJob_DoResume(KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnDoResume(KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseDoResume(KEMailClientLauncherJob* self);
libqt_string KEMailClientLauncherJob_ErrorString(const KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnErrorString(const KEMailClientLauncherJob* self, intptr_t slot);
libqt_string KEMailClientLauncherJob_QBaseErrorString(const KEMailClientLauncherJob* self);
bool KEMailClientLauncherJob_Event(KEMailClientLauncherJob* self, QEvent* event);
void KEMailClientLauncherJob_OnEvent(KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseEvent(KEMailClientLauncherJob* self, QEvent* event);
bool KEMailClientLauncherJob_EventFilter(KEMailClientLauncherJob* self, QObject* watched, QEvent* event);
void KEMailClientLauncherJob_OnEventFilter(KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseEventFilter(KEMailClientLauncherJob* self, QObject* watched, QEvent* event);
void KEMailClientLauncherJob_TimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
void KEMailClientLauncherJob_OnTimerEvent(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseTimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event);
void KEMailClientLauncherJob_ChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
void KEMailClientLauncherJob_OnChildEvent(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseChildEvent(KEMailClientLauncherJob* self, QChildEvent* event);
void KEMailClientLauncherJob_CustomEvent(KEMailClientLauncherJob* self, QEvent* event);
void KEMailClientLauncherJob_OnCustomEvent(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseCustomEvent(KEMailClientLauncherJob* self, QEvent* event);
void KEMailClientLauncherJob_ConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
void KEMailClientLauncherJob_OnConnectNotify(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
void KEMailClientLauncherJob_DisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
void KEMailClientLauncherJob_OnDisconnectNotify(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseDisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal);
void KEMailClientLauncherJob_SetCapabilities(KEMailClientLauncherJob* self, int capabilities);
void KEMailClientLauncherJob_OnSetCapabilities(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetCapabilities(KEMailClientLauncherJob* self, int capabilities);
bool KEMailClientLauncherJob_IsFinished(const KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnIsFinished(const KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseIsFinished(const KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_SetError(KEMailClientLauncherJob* self, int errorCode);
void KEMailClientLauncherJob_OnSetError(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetError(KEMailClientLauncherJob* self, int errorCode);
void KEMailClientLauncherJob_SetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText);
void KEMailClientLauncherJob_OnSetErrorText(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText);
void KEMailClientLauncherJob_SetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
void KEMailClientLauncherJob_OnSetProcessedAmount(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
void KEMailClientLauncherJob_SetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
void KEMailClientLauncherJob_OnSetTotalAmount(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount);
void KEMailClientLauncherJob_SetProgressUnit(KEMailClientLauncherJob* self, int unit);
void KEMailClientLauncherJob_OnSetProgressUnit(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetProgressUnit(KEMailClientLauncherJob* self, int unit);
void KEMailClientLauncherJob_SetPercent(KEMailClientLauncherJob* self, unsigned long percentage);
void KEMailClientLauncherJob_OnSetPercent(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseSetPercent(KEMailClientLauncherJob* self, unsigned long percentage);
void KEMailClientLauncherJob_EmitResult(KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnEmitResult(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseEmitResult(KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_EmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KEMailClientLauncherJob_OnEmitPercent(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseEmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KEMailClientLauncherJob_EmitSpeed(KEMailClientLauncherJob* self, unsigned long speed);
void KEMailClientLauncherJob_OnEmitSpeed(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseEmitSpeed(KEMailClientLauncherJob* self, unsigned long speed);
void KEMailClientLauncherJob_StartElapsedTimer(KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnStartElapsedTimer(KEMailClientLauncherJob* self, intptr_t slot);
void KEMailClientLauncherJob_QBaseStartElapsedTimer(KEMailClientLauncherJob* self);
QObject* KEMailClientLauncherJob_Sender(const KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnSender(const KEMailClientLauncherJob* self, intptr_t slot);
QObject* KEMailClientLauncherJob_QBaseSender(const KEMailClientLauncherJob* self);
int KEMailClientLauncherJob_SenderSignalIndex(const KEMailClientLauncherJob* self);
void KEMailClientLauncherJob_OnSenderSignalIndex(const KEMailClientLauncherJob* self, intptr_t slot);
int KEMailClientLauncherJob_QBaseSenderSignalIndex(const KEMailClientLauncherJob* self);
int KEMailClientLauncherJob_Receivers(const KEMailClientLauncherJob* self, const char* signal);
void KEMailClientLauncherJob_OnReceivers(const KEMailClientLauncherJob* self, intptr_t slot);
int KEMailClientLauncherJob_QBaseReceivers(const KEMailClientLauncherJob* self, const char* signal);
bool KEMailClientLauncherJob_IsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal);
void KEMailClientLauncherJob_OnIsSignalConnected(const KEMailClientLauncherJob* self, intptr_t slot);
bool KEMailClientLauncherJob_QBaseIsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal);
void KEMailClientLauncherJob_Delete(KEMailClientLauncherJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
