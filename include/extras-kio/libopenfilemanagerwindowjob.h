#pragma once
#ifndef EXTRAS_KIO_LIBOPENFILEMANAGERWINDOWJOB_H
#define EXTRAS_KIO_LIBOPENFILEMANAGERWINDOWJOB_H

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
void KIO__OpenFileManagerWindowJob_OnMetaObject(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
QMetaObject* KIO__OpenFileManagerWindowJob_SuperMetaObject(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnMetacast(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void* KIO__OpenFileManagerWindowJob_SuperMetacast(KIO__OpenFileManagerWindowJob* self, const char* param1);
void KIO__OpenFileManagerWindowJob_OnMetacall(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
int KIO__OpenFileManagerWindowJob_SuperMetacall(KIO__OpenFileManagerWindowJob* self, int param1, int param2, void** param3);
void KIO__OpenFileManagerWindowJob_OnStart(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_SuperStart(KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_DoKill(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnDoKill(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_SuperDoKill(KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_DoSuspend(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnDoSuspend(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_SuperDoSuspend(KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_DoResume(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnDoResume(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_SuperDoResume(KIO__OpenFileManagerWindowJob* self);
libqt_string KIO__OpenFileManagerWindowJob_ErrorString(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_OnErrorString(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
libqt_string KIO__OpenFileManagerWindowJob_SuperErrorString(const KIO__OpenFileManagerWindowJob* self);
bool KIO__OpenFileManagerWindowJob_Event(KIO__OpenFileManagerWindowJob* self, QEvent* event);
void KIO__OpenFileManagerWindowJob_OnEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_SuperEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event);
bool KIO__OpenFileManagerWindowJob_EventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event);
void KIO__OpenFileManagerWindowJob_OnEventFilter(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
bool KIO__OpenFileManagerWindowJob_SuperEventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event);
void KIO__OpenFileManagerWindowJob_TimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event);
void KIO__OpenFileManagerWindowJob_OnTimerEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_SuperTimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event);
void KIO__OpenFileManagerWindowJob_ChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event);
void KIO__OpenFileManagerWindowJob_OnChildEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_SuperChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event);
void KIO__OpenFileManagerWindowJob_CustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event);
void KIO__OpenFileManagerWindowJob_OnCustomEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_SuperCustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event);
void KIO__OpenFileManagerWindowJob_ConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_OnConnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_SuperConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_DisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_OnDisconnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot);
void KIO__OpenFileManagerWindowJob_SuperDisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_SetCapabilities(KIO__OpenFileManagerWindowJob* self, int capabilities);
bool KIO__OpenFileManagerWindowJob_IsFinished(const KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_SetError(KIO__OpenFileManagerWindowJob* self, int errorCode);
void KIO__OpenFileManagerWindowJob_SetErrorText(KIO__OpenFileManagerWindowJob* self, const libqt_string errorText);
void KIO__OpenFileManagerWindowJob_SetProcessedAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
void KIO__OpenFileManagerWindowJob_SetTotalAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount);
void KIO__OpenFileManagerWindowJob_SetProgressUnit(KIO__OpenFileManagerWindowJob* self, int unit);
void KIO__OpenFileManagerWindowJob_SetPercent(KIO__OpenFileManagerWindowJob* self, unsigned long percentage);
void KIO__OpenFileManagerWindowJob_EmitResult(KIO__OpenFileManagerWindowJob* self);
void KIO__OpenFileManagerWindowJob_EmitPercent(KIO__OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount);
void KIO__OpenFileManagerWindowJob_EmitSpeed(KIO__OpenFileManagerWindowJob* self, unsigned long speed);
void KIO__OpenFileManagerWindowJob_StartElapsedTimer(KIO__OpenFileManagerWindowJob* self);
QObject* KIO__OpenFileManagerWindowJob_Sender(const KIO__OpenFileManagerWindowJob* self);
int KIO__OpenFileManagerWindowJob_SenderSignalIndex(const KIO__OpenFileManagerWindowJob* self);
int KIO__OpenFileManagerWindowJob_Receivers(const KIO__OpenFileManagerWindowJob* self, const char* signal);
bool KIO__OpenFileManagerWindowJob_IsSignalConnected(const KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal);
void KIO__OpenFileManagerWindowJob_Delete(KIO__OpenFileManagerWindowJob* self);

KIO__OpenFileManagerWindowJob* KIO_HighlightInFileManager(const libqt_list /* of QUrl* */ urls, const libqt_string asn);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
