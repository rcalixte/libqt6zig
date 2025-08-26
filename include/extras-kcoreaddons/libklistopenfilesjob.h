#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKLISTOPENFILESJOB_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKLISTOPENFILESJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KProcessList__KProcessInfo)
typedef KProcessList::KProcessInfo KProcessList__KProcessInfo;
#endif
#else
typedef struct KJob KJob;
typedef struct KListOpenFilesJob KListOpenFilesJob;
typedef struct KProcessList__KProcessInfo KProcessList__KProcessInfo;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KListOpenFilesJob* KListOpenFilesJob_new(const libqt_string path);
QMetaObject* KListOpenFilesJob_MetaObject(const KListOpenFilesJob* self);
void* KListOpenFilesJob_Metacast(KListOpenFilesJob* self, const char* param1);
int KListOpenFilesJob_Metacall(KListOpenFilesJob* self, int param1, int param2, void** param3);
void KListOpenFilesJob_OnMetacall(KListOpenFilesJob* self, intptr_t slot);
int KListOpenFilesJob_QBaseMetacall(KListOpenFilesJob* self, int param1, int param2, void** param3);
libqt_string KListOpenFilesJob_Tr(const char* s);
void KListOpenFilesJob_Start(KListOpenFilesJob* self);
void KListOpenFilesJob_OnStart(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseStart(KListOpenFilesJob* self);
libqt_list /* of KProcessList__KProcessInfo* */ KListOpenFilesJob_ProcessInfoList(const KListOpenFilesJob* self);
libqt_string KListOpenFilesJob_Tr2(const char* s, const char* c);
libqt_string KListOpenFilesJob_Tr3(const char* s, const char* c, int n);
bool KListOpenFilesJob_DoKill(KListOpenFilesJob* self);
void KListOpenFilesJob_OnDoKill(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseDoKill(KListOpenFilesJob* self);
bool KListOpenFilesJob_DoSuspend(KListOpenFilesJob* self);
void KListOpenFilesJob_OnDoSuspend(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseDoSuspend(KListOpenFilesJob* self);
bool KListOpenFilesJob_DoResume(KListOpenFilesJob* self);
void KListOpenFilesJob_OnDoResume(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseDoResume(KListOpenFilesJob* self);
libqt_string KListOpenFilesJob_ErrorString(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnErrorString(const KListOpenFilesJob* self, intptr_t slot);
libqt_string KListOpenFilesJob_QBaseErrorString(const KListOpenFilesJob* self);
bool KListOpenFilesJob_Event(KListOpenFilesJob* self, QEvent* event);
void KListOpenFilesJob_OnEvent(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseEvent(KListOpenFilesJob* self, QEvent* event);
bool KListOpenFilesJob_EventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event);
void KListOpenFilesJob_OnEventFilter(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseEventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event);
void KListOpenFilesJob_TimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
void KListOpenFilesJob_OnTimerEvent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseTimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
void KListOpenFilesJob_ChildEvent(KListOpenFilesJob* self, QChildEvent* event);
void KListOpenFilesJob_OnChildEvent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseChildEvent(KListOpenFilesJob* self, QChildEvent* event);
void KListOpenFilesJob_CustomEvent(KListOpenFilesJob* self, QEvent* event);
void KListOpenFilesJob_OnCustomEvent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseCustomEvent(KListOpenFilesJob* self, QEvent* event);
void KListOpenFilesJob_ConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_OnConnectNotify(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_DisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_OnDisconnectNotify(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseDisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_SetCapabilities(KListOpenFilesJob* self, int capabilities);
void KListOpenFilesJob_OnSetCapabilities(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetCapabilities(KListOpenFilesJob* self, int capabilities);
bool KListOpenFilesJob_IsFinished(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnIsFinished(const KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseIsFinished(const KListOpenFilesJob* self);
void KListOpenFilesJob_SetError(KListOpenFilesJob* self, int errorCode);
void KListOpenFilesJob_OnSetError(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetError(KListOpenFilesJob* self, int errorCode);
void KListOpenFilesJob_SetErrorText(KListOpenFilesJob* self, const libqt_string errorText);
void KListOpenFilesJob_OnSetErrorText(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetErrorText(KListOpenFilesJob* self, const libqt_string errorText);
void KListOpenFilesJob_SetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_OnSetProcessedAmount(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_SetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_OnSetTotalAmount(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_SetProgressUnit(KListOpenFilesJob* self, int unit);
void KListOpenFilesJob_OnSetProgressUnit(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetProgressUnit(KListOpenFilesJob* self, int unit);
void KListOpenFilesJob_SetPercent(KListOpenFilesJob* self, unsigned long percentage);
void KListOpenFilesJob_OnSetPercent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseSetPercent(KListOpenFilesJob* self, unsigned long percentage);
void KListOpenFilesJob_EmitResult(KListOpenFilesJob* self);
void KListOpenFilesJob_OnEmitResult(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseEmitResult(KListOpenFilesJob* self);
void KListOpenFilesJob_EmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KListOpenFilesJob_OnEmitPercent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseEmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KListOpenFilesJob_EmitSpeed(KListOpenFilesJob* self, unsigned long speed);
void KListOpenFilesJob_OnEmitSpeed(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseEmitSpeed(KListOpenFilesJob* self, unsigned long speed);
void KListOpenFilesJob_StartElapsedTimer(KListOpenFilesJob* self);
void KListOpenFilesJob_OnStartElapsedTimer(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_QBaseStartElapsedTimer(KListOpenFilesJob* self);
QObject* KListOpenFilesJob_Sender(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnSender(const KListOpenFilesJob* self, intptr_t slot);
QObject* KListOpenFilesJob_QBaseSender(const KListOpenFilesJob* self);
int KListOpenFilesJob_SenderSignalIndex(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnSenderSignalIndex(const KListOpenFilesJob* self, intptr_t slot);
int KListOpenFilesJob_QBaseSenderSignalIndex(const KListOpenFilesJob* self);
int KListOpenFilesJob_Receivers(const KListOpenFilesJob* self, const char* signal);
void KListOpenFilesJob_OnReceivers(const KListOpenFilesJob* self, intptr_t slot);
int KListOpenFilesJob_QBaseReceivers(const KListOpenFilesJob* self, const char* signal);
bool KListOpenFilesJob_IsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_OnIsSignalConnected(const KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_QBaseIsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_Delete(KListOpenFilesJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
