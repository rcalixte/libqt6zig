#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBOPENFILEMANAGERWINDOWJOB_H
#define SRC_EXTRAS_KIOC_LIBOPENFILEMANAGERWINDOWJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenFileManagerWindowJob)
typedef KIO::OpenFileManagerWindowJob KIO__OpenFileManagerWindowJob;
#endif
#else
typedef struct KIO KIO;
typedef struct KIO__OpenFileManagerWindowJob KIO__OpenFileManagerWindowJob;
typedef struct KJob KJob;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

KIO__OpenFileManagerWindowJob* KIO__OpenFileManagerWindowJob_new();
KIO__OpenFileManagerWindowJob* KIO__OpenFileManagerWindowJob_new2(QObject* parent);
QMetaObject* KIO__OpenFileManagerWindowJob_MetaObject(const KIO__OpenFileManagerWindowJob* self);
void* KIO__OpenFileManagerWindowJob_Metacast(KIO__OpenFileManagerWindowJob* self, const char* param1);
int KIO__OpenFileManagerWindowJob_Metacall(KIO__OpenFileManagerWindowJob* self, int param1, int param2, void** param3);
libqt_string KIO__OpenFileManagerWindowJob_Tr(const char* s);
libqt_list /* of QUrl* */ KIO__OpenFileManagerWindowJob_HighlightUrls(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_SetHighlightUrls(KIO__OpenFileManagerWindowJob* self, const libqt_list /* of QUrl* */ highlightUrls);
libqt_string KIO__OpenFileManagerWindowJob_StartupId(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_SetStartupId(KIO__OpenFileManagerWindowJob* self, const libqt_string startupId);
void KIO__OpenFileManagerWindowJob_Start(KIO__OpenFileManagerWindowJob* self);
libqt_string KIO__OpenFileManagerWindowJob_Tr2(const char* s, const char* c);
libqt_string KIO__OpenFileManagerWindowJob_Tr3(const char* s, const char* c, int n);
void KIO__OpenFileManagerWindowJob_OnMetacall(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
int KIO__OpenFileManagerWindowJob_QBaseMetacall(KIO__OpenFileManagerWindowJob* self, int param1, int param2, void** param3);
void KIO__OpenFileManagerWindowJob_OnStart(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseStart(KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_DoKill(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnDoKill(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseDoKill(KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_DoSuspend(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnDoSuspend(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseDoSuspend(KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_DoResume(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnDoResume(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseDoResume(KIO__OpenFileManagerWindowJob* self);
libqt_string KIO__OpenFileManagerWindowJob_ErrorString(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnErrorString(const KIO__OpenFileManagerWindowJob* self, intptr_t slot);
libqt_string KIO__OpenFileManagerWindowJob_QBaseErrorString(const KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_Event(KIO__OpenFileManagerWindowJob* self, QEvent* event);
void KIO__OpenFileManagerWindowJob_OnEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event);
bool KIO__OpenFileManagerWindowJob_EventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event);
void KIO__OpenFileManagerWindowJob_OnEventFilter(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseEventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event);
void KIO__OpenFileManagerWindowJob_TimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event);
void KIO__OpenFileManagerWindowJob_OnTimerEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseTimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event);
void KIO__OpenFileManagerWindowJob_ChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event);
void KIO__OpenFileManagerWindowJob_OnChildEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event);
void KIO__OpenFileManagerWindowJob_CustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event);
void KIO__OpenFileManagerWindowJob_OnCustomEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseCustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event);
void KIO__OpenFileManagerWindowJob_ConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_OnConnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_DisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_OnDisconnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseDisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_SetCapabilities(KIO__OpenFileManagerWindowJob* self, int capabilities);
void KIO__OpenFileManagerWindowJob_OnSetCapabilities(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetCapabilities(KIO__OpenFileManagerWindowJob* self, int capabilities);
bool KIO__OpenFileManagerWindowJob_IsFinished(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnIsFinished(const KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseIsFinished(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_SetError(KIO__OpenFileManagerWindowJob* self, int errorCode);
void KIO__OpenFileManagerWindowJob_OnSetError(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetError(KIO__OpenFileManagerWindowJob* self, int errorCode);
void KIO__OpenFileManagerWindowJob_SetErrorText(KIO__OpenFileManagerWindowJob* self, const libqt_string errorText);
void KIO__OpenFileManagerWindowJob_OnSetErrorText(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetErrorText(KIO__OpenFileManagerWindowJob* self, const libqt_string errorText);
void KIO__OpenFileManagerWindowJob_SetProcessedAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
void KIO__OpenFileManagerWindowJob_OnSetProcessedAmount(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetProcessedAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
void KIO__OpenFileManagerWindowJob_SetTotalAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
void KIO__OpenFileManagerWindowJob_OnSetTotalAmount(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetTotalAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
void KIO__OpenFileManagerWindowJob_SetProgressUnit(KIO__OpenFileManagerWindowJob* self, int unit);
void KIO__OpenFileManagerWindowJob_OnSetProgressUnit(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetProgressUnit(KIO__OpenFileManagerWindowJob* self, int unit);
void KIO__OpenFileManagerWindowJob_SetPercent(KIO__OpenFileManagerWindowJob* self, unsigned long percentage);
void KIO__OpenFileManagerWindowJob_OnSetPercent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseSetPercent(KIO__OpenFileManagerWindowJob* self, unsigned long percentage);
void KIO__OpenFileManagerWindowJob_EmitResult(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnEmitResult(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseEmitResult(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_EmitPercent(KIO__OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenFileManagerWindowJob_OnEmitPercent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseEmitPercent(KIO__OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenFileManagerWindowJob_EmitSpeed(KIO__OpenFileManagerWindowJob* self, unsigned long speed);
void KIO__OpenFileManagerWindowJob_OnEmitSpeed(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseEmitSpeed(KIO__OpenFileManagerWindowJob* self, unsigned long speed);
void KIO__OpenFileManagerWindowJob_StartElapsedTimer(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnStartElapsedTimer(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_QBaseStartElapsedTimer(KIO__OpenFileManagerWindowJob* self);
QObject* KIO__OpenFileManagerWindowJob_Sender(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnSender(const KIO__OpenFileManagerWindowJob* self, intptr_t slot);
QObject* KIO__OpenFileManagerWindowJob_QBaseSender(const KIO__OpenFileManagerWindowJob* self);
int KIO__OpenFileManagerWindowJob_SenderSignalIndex(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnSenderSignalIndex(const KIO__OpenFileManagerWindowJob* self, intptr_t slot);
int KIO__OpenFileManagerWindowJob_QBaseSenderSignalIndex(const KIO__OpenFileManagerWindowJob* self);
int KIO__OpenFileManagerWindowJob_Receivers(const KIO__OpenFileManagerWindowJob* self, const char* signal);
void KIO__OpenFileManagerWindowJob_OnReceivers(const KIO__OpenFileManagerWindowJob* self, intptr_t slot);
int KIO__OpenFileManagerWindowJob_QBaseReceivers(const KIO__OpenFileManagerWindowJob* self, const char* signal);
bool KIO__OpenFileManagerWindowJob_IsSignalConnected(const KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_OnIsSignalConnected(const KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_QBaseIsSignalConnected(const KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_Delete(KIO__OpenFileManagerWindowJob* self);

KIO__OpenFileManagerWindowJob* KIO_HighlightInFileManager(const libqt_list /* of QUrl* */ param1, const libqt_string param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
