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
void KListOpenFilesJob_Start(KListOpenFilesJob* self);
libqt_list /* of KProcessList__KProcessInfo* */ KListOpenFilesJob_ProcessInfoList(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnMetaObject(const KListOpenFilesJob* self, intptr_t slot);
QMetaObject* KListOpenFilesJob_SuperMetaObject(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnMetacast(KListOpenFilesJob* self, intptr_t slot);
void* KListOpenFilesJob_SuperMetacast(KListOpenFilesJob* self, const char* param1);
void KListOpenFilesJob_OnMetacall(KListOpenFilesJob* self, intptr_t slot);
int KListOpenFilesJob_SuperMetacall(KListOpenFilesJob* self, int param1, int param2, void** param3);
void KListOpenFilesJob_OnStart(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperStart(KListOpenFilesJob* self);
bool KListOpenFilesJob_DoKill(KListOpenFilesJob* self);
void KListOpenFilesJob_OnDoKill(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperDoKill(KListOpenFilesJob* self);
bool KListOpenFilesJob_DoSuspend(KListOpenFilesJob* self);
void KListOpenFilesJob_OnDoSuspend(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperDoSuspend(KListOpenFilesJob* self);
bool KListOpenFilesJob_DoResume(KListOpenFilesJob* self);
void KListOpenFilesJob_OnDoResume(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperDoResume(KListOpenFilesJob* self);
libqt_string KListOpenFilesJob_ErrorString(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnErrorString(const KListOpenFilesJob* self, intptr_t slot);
libqt_string KListOpenFilesJob_SuperErrorString(const KListOpenFilesJob* self);
bool KListOpenFilesJob_Event(KListOpenFilesJob* self, QEvent* event);
void KListOpenFilesJob_OnEvent(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperEvent(KListOpenFilesJob* self, QEvent* event);
bool KListOpenFilesJob_EventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event);
void KListOpenFilesJob_OnEventFilter(KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperEventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event);
void KListOpenFilesJob_TimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
void KListOpenFilesJob_OnTimerEvent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperTimerEvent(KListOpenFilesJob* self, QTimerEvent* event);
void KListOpenFilesJob_ChildEvent(KListOpenFilesJob* self, QChildEvent* event);
void KListOpenFilesJob_OnChildEvent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperChildEvent(KListOpenFilesJob* self, QChildEvent* event);
void KListOpenFilesJob_CustomEvent(KListOpenFilesJob* self, QEvent* event);
void KListOpenFilesJob_OnCustomEvent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperCustomEvent(KListOpenFilesJob* self, QEvent* event);
void KListOpenFilesJob_ConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_OnConnectNotify(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_DisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_OnDisconnectNotify(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperDisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_SetCapabilities(KListOpenFilesJob* self, int capabilities);
void KListOpenFilesJob_OnSetCapabilities(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetCapabilities(KListOpenFilesJob* self, int capabilities);
bool KListOpenFilesJob_IsFinished(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnIsFinished(const KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperIsFinished(const KListOpenFilesJob* self);
void KListOpenFilesJob_SetError(KListOpenFilesJob* self, int errorCode);
void KListOpenFilesJob_OnSetError(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetError(KListOpenFilesJob* self, int errorCode);
void KListOpenFilesJob_SetErrorText(KListOpenFilesJob* self, const libqt_string errorText);
void KListOpenFilesJob_OnSetErrorText(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetErrorText(KListOpenFilesJob* self, const libqt_string errorText);
void KListOpenFilesJob_SetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_OnSetProcessedAmount(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_SetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_OnSetTotalAmount(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount);
void KListOpenFilesJob_SetProgressUnit(KListOpenFilesJob* self, int unit);
void KListOpenFilesJob_OnSetProgressUnit(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetProgressUnit(KListOpenFilesJob* self, int unit);
void KListOpenFilesJob_SetPercent(KListOpenFilesJob* self, unsigned long percentage);
void KListOpenFilesJob_OnSetPercent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperSetPercent(KListOpenFilesJob* self, unsigned long percentage);
void KListOpenFilesJob_EmitResult(KListOpenFilesJob* self);
void KListOpenFilesJob_OnEmitResult(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperEmitResult(KListOpenFilesJob* self);
void KListOpenFilesJob_EmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KListOpenFilesJob_OnEmitPercent(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperEmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KListOpenFilesJob_EmitSpeed(KListOpenFilesJob* self, unsigned long speed);
void KListOpenFilesJob_OnEmitSpeed(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperEmitSpeed(KListOpenFilesJob* self, unsigned long speed);
void KListOpenFilesJob_StartElapsedTimer(KListOpenFilesJob* self);
void KListOpenFilesJob_OnStartElapsedTimer(KListOpenFilesJob* self, intptr_t slot);
void KListOpenFilesJob_SuperStartElapsedTimer(KListOpenFilesJob* self);
QObject* KListOpenFilesJob_Sender(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnSender(const KListOpenFilesJob* self, intptr_t slot);
QObject* KListOpenFilesJob_SuperSender(const KListOpenFilesJob* self);
int KListOpenFilesJob_SenderSignalIndex(const KListOpenFilesJob* self);
void KListOpenFilesJob_OnSenderSignalIndex(const KListOpenFilesJob* self, intptr_t slot);
int KListOpenFilesJob_SuperSenderSignalIndex(const KListOpenFilesJob* self);
int KListOpenFilesJob_Receivers(const KListOpenFilesJob* self, const char* signal);
void KListOpenFilesJob_OnReceivers(const KListOpenFilesJob* self, intptr_t slot);
int KListOpenFilesJob_SuperReceivers(const KListOpenFilesJob* self, const char* signal);
bool KListOpenFilesJob_IsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_OnIsSignalConnected(const KListOpenFilesJob* self, intptr_t slot);
bool KListOpenFilesJob_SuperIsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal);
void KListOpenFilesJob_Delete(KListOpenFilesJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
