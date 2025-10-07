#pragma once
#ifndef SRC_EXTRAS_QTKEYCHAINC_LIBKEYCHAIN_H
#define SRC_EXTRAS_QTKEYCHAINC_LIBKEYCHAIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__DeletePasswordJob)
typedef QKeychain::DeletePasswordJob QKeychain__DeletePasswordJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__Job)
typedef QKeychain::Job QKeychain__Job;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__ReadPasswordJob)
typedef QKeychain::ReadPasswordJob QKeychain__ReadPasswordJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__WritePasswordJob)
typedef QKeychain::WritePasswordJob QKeychain__WritePasswordJob;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeychain QKeychain;
typedef struct QKeychain__DeletePasswordJob QKeychain__DeletePasswordJob;
typedef struct QKeychain__Job QKeychain__Job;
typedef struct QKeychain__ReadPasswordJob QKeychain__ReadPasswordJob;
typedef struct QKeychain__WritePasswordJob QKeychain__WritePasswordJob;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTimerEvent QTimerEvent;
#endif

QMetaObject* QKeychain__Job_MetaObject(const QKeychain__Job* self);
void* QKeychain__Job_Metacast(QKeychain__Job* self, const char* param1);
int QKeychain__Job_Metacall(QKeychain__Job* self, int param1, int param2, void** param3);
libqt_string QKeychain__Job_Tr(const char* s);
QSettings* QKeychain__Job_Settings(const QKeychain__Job* self);
void QKeychain__Job_SetSettings(QKeychain__Job* self, QSettings* settings);
void QKeychain__Job_Start(QKeychain__Job* self);
libqt_string QKeychain__Job_Service(const QKeychain__Job* self);
int QKeychain__Job_Error(const QKeychain__Job* self);
libqt_string QKeychain__Job_ErrorString(const QKeychain__Job* self);
bool QKeychain__Job_AutoDelete(const QKeychain__Job* self);
void QKeychain__Job_SetAutoDelete(QKeychain__Job* self, bool autoDelete);
bool QKeychain__Job_InsecureFallback(const QKeychain__Job* self);
void QKeychain__Job_SetInsecureFallback(QKeychain__Job* self, bool insecureFallback);
libqt_string QKeychain__Job_Key(const QKeychain__Job* self);
void QKeychain__Job_SetKey(QKeychain__Job* self, const libqt_string key);
void QKeychain__Job_EmitFinished(QKeychain__Job* self);
void QKeychain__Job_EmitFinishedWithError(QKeychain__Job* self, int param1, const libqt_string errorString);
void QKeychain__Job_Finished(QKeychain__Job* self, QKeychain__Job* param1);
void QKeychain__Job_Connect_Finished(QKeychain__Job* self, intptr_t slot);
libqt_string QKeychain__Job_Tr2(const char* s, const char* c);
libqt_string QKeychain__Job_Tr3(const char* s, const char* c, int n);
void QKeychain__Job_Delete(QKeychain__Job* self);

QKeychain__ReadPasswordJob* QKeychain__ReadPasswordJob_new(const libqt_string service);
QKeychain__ReadPasswordJob* QKeychain__ReadPasswordJob_new2(const libqt_string service, QObject* parent);
QMetaObject* QKeychain__ReadPasswordJob_MetaObject(const QKeychain__ReadPasswordJob* self);
void* QKeychain__ReadPasswordJob_Metacast(QKeychain__ReadPasswordJob* self, const char* param1);
int QKeychain__ReadPasswordJob_Metacall(QKeychain__ReadPasswordJob* self, int param1, int param2, void** param3);
libqt_string QKeychain__ReadPasswordJob_Tr(const char* s);
libqt_string QKeychain__ReadPasswordJob_BinaryData(const QKeychain__ReadPasswordJob* self);
libqt_string QKeychain__ReadPasswordJob_TextData(const QKeychain__ReadPasswordJob* self);
libqt_string QKeychain__ReadPasswordJob_Tr2(const char* s, const char* c);
libqt_string QKeychain__ReadPasswordJob_Tr3(const char* s, const char* c, int n);
void QKeychain__ReadPasswordJob_OnMetacall(QKeychain__ReadPasswordJob* self, intptr_t slot);
int QKeychain__ReadPasswordJob_QBaseMetacall(QKeychain__ReadPasswordJob* self, int param1, int param2, void** param3);
bool QKeychain__ReadPasswordJob_Event(QKeychain__ReadPasswordJob* self, QEvent* event);
void QKeychain__ReadPasswordJob_OnEvent(QKeychain__ReadPasswordJob* self, intptr_t slot);
bool QKeychain__ReadPasswordJob_QBaseEvent(QKeychain__ReadPasswordJob* self, QEvent* event);
bool QKeychain__ReadPasswordJob_EventFilter(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event);
void QKeychain__ReadPasswordJob_OnEventFilter(QKeychain__ReadPasswordJob* self, intptr_t slot);
bool QKeychain__ReadPasswordJob_QBaseEventFilter(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event);
void QKeychain__ReadPasswordJob_TimerEvent(QKeychain__ReadPasswordJob* self, QTimerEvent* event);
void QKeychain__ReadPasswordJob_OnTimerEvent(QKeychain__ReadPasswordJob* self, intptr_t slot);
void QKeychain__ReadPasswordJob_QBaseTimerEvent(QKeychain__ReadPasswordJob* self, QTimerEvent* event);
void QKeychain__ReadPasswordJob_ChildEvent(QKeychain__ReadPasswordJob* self, QChildEvent* event);
void QKeychain__ReadPasswordJob_OnChildEvent(QKeychain__ReadPasswordJob* self, intptr_t slot);
void QKeychain__ReadPasswordJob_QBaseChildEvent(QKeychain__ReadPasswordJob* self, QChildEvent* event);
void QKeychain__ReadPasswordJob_CustomEvent(QKeychain__ReadPasswordJob* self, QEvent* event);
void QKeychain__ReadPasswordJob_OnCustomEvent(QKeychain__ReadPasswordJob* self, intptr_t slot);
void QKeychain__ReadPasswordJob_QBaseCustomEvent(QKeychain__ReadPasswordJob* self, QEvent* event);
void QKeychain__ReadPasswordJob_ConnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal);
void QKeychain__ReadPasswordJob_OnConnectNotify(QKeychain__ReadPasswordJob* self, intptr_t slot);
void QKeychain__ReadPasswordJob_QBaseConnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal);
void QKeychain__ReadPasswordJob_DisconnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal);
void QKeychain__ReadPasswordJob_OnDisconnectNotify(QKeychain__ReadPasswordJob* self, intptr_t slot);
void QKeychain__ReadPasswordJob_QBaseDisconnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal);
void QKeychain__ReadPasswordJob_DoStart(QKeychain__ReadPasswordJob* self);
void QKeychain__ReadPasswordJob_OnDoStart(QKeychain__ReadPasswordJob* self, intptr_t slot);
void QKeychain__ReadPasswordJob_QBaseDoStart(QKeychain__ReadPasswordJob* self);
QObject* QKeychain__ReadPasswordJob_Sender(const QKeychain__ReadPasswordJob* self);
void QKeychain__ReadPasswordJob_OnSender(const QKeychain__ReadPasswordJob* self, intptr_t slot);
QObject* QKeychain__ReadPasswordJob_QBaseSender(const QKeychain__ReadPasswordJob* self);
int QKeychain__ReadPasswordJob_SenderSignalIndex(const QKeychain__ReadPasswordJob* self);
void QKeychain__ReadPasswordJob_OnSenderSignalIndex(const QKeychain__ReadPasswordJob* self, intptr_t slot);
int QKeychain__ReadPasswordJob_QBaseSenderSignalIndex(const QKeychain__ReadPasswordJob* self);
int QKeychain__ReadPasswordJob_Receivers(const QKeychain__ReadPasswordJob* self, const char* signal);
void QKeychain__ReadPasswordJob_OnReceivers(const QKeychain__ReadPasswordJob* self, intptr_t slot);
int QKeychain__ReadPasswordJob_QBaseReceivers(const QKeychain__ReadPasswordJob* self, const char* signal);
bool QKeychain__ReadPasswordJob_IsSignalConnected(const QKeychain__ReadPasswordJob* self, const QMetaMethod* signal);
void QKeychain__ReadPasswordJob_OnIsSignalConnected(const QKeychain__ReadPasswordJob* self, intptr_t slot);
bool QKeychain__ReadPasswordJob_QBaseIsSignalConnected(const QKeychain__ReadPasswordJob* self, const QMetaMethod* signal);
void QKeychain__ReadPasswordJob_Delete(QKeychain__ReadPasswordJob* self);

QKeychain__WritePasswordJob* QKeychain__WritePasswordJob_new(const libqt_string service);
QKeychain__WritePasswordJob* QKeychain__WritePasswordJob_new2(const libqt_string service, QObject* parent);
QMetaObject* QKeychain__WritePasswordJob_MetaObject(const QKeychain__WritePasswordJob* self);
void* QKeychain__WritePasswordJob_Metacast(QKeychain__WritePasswordJob* self, const char* param1);
int QKeychain__WritePasswordJob_Metacall(QKeychain__WritePasswordJob* self, int param1, int param2, void** param3);
libqt_string QKeychain__WritePasswordJob_Tr(const char* s);
void QKeychain__WritePasswordJob_SetBinaryData(QKeychain__WritePasswordJob* self, const libqt_string data);
void QKeychain__WritePasswordJob_SetTextData(QKeychain__WritePasswordJob* self, const libqt_string data);
libqt_string QKeychain__WritePasswordJob_Tr2(const char* s, const char* c);
libqt_string QKeychain__WritePasswordJob_Tr3(const char* s, const char* c, int n);
void QKeychain__WritePasswordJob_OnMetacall(QKeychain__WritePasswordJob* self, intptr_t slot);
int QKeychain__WritePasswordJob_QBaseMetacall(QKeychain__WritePasswordJob* self, int param1, int param2, void** param3);
bool QKeychain__WritePasswordJob_Event(QKeychain__WritePasswordJob* self, QEvent* event);
void QKeychain__WritePasswordJob_OnEvent(QKeychain__WritePasswordJob* self, intptr_t slot);
bool QKeychain__WritePasswordJob_QBaseEvent(QKeychain__WritePasswordJob* self, QEvent* event);
bool QKeychain__WritePasswordJob_EventFilter(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event);
void QKeychain__WritePasswordJob_OnEventFilter(QKeychain__WritePasswordJob* self, intptr_t slot);
bool QKeychain__WritePasswordJob_QBaseEventFilter(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event);
void QKeychain__WritePasswordJob_TimerEvent(QKeychain__WritePasswordJob* self, QTimerEvent* event);
void QKeychain__WritePasswordJob_OnTimerEvent(QKeychain__WritePasswordJob* self, intptr_t slot);
void QKeychain__WritePasswordJob_QBaseTimerEvent(QKeychain__WritePasswordJob* self, QTimerEvent* event);
void QKeychain__WritePasswordJob_ChildEvent(QKeychain__WritePasswordJob* self, QChildEvent* event);
void QKeychain__WritePasswordJob_OnChildEvent(QKeychain__WritePasswordJob* self, intptr_t slot);
void QKeychain__WritePasswordJob_QBaseChildEvent(QKeychain__WritePasswordJob* self, QChildEvent* event);
void QKeychain__WritePasswordJob_CustomEvent(QKeychain__WritePasswordJob* self, QEvent* event);
void QKeychain__WritePasswordJob_OnCustomEvent(QKeychain__WritePasswordJob* self, intptr_t slot);
void QKeychain__WritePasswordJob_QBaseCustomEvent(QKeychain__WritePasswordJob* self, QEvent* event);
void QKeychain__WritePasswordJob_ConnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal);
void QKeychain__WritePasswordJob_OnConnectNotify(QKeychain__WritePasswordJob* self, intptr_t slot);
void QKeychain__WritePasswordJob_QBaseConnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal);
void QKeychain__WritePasswordJob_DisconnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal);
void QKeychain__WritePasswordJob_OnDisconnectNotify(QKeychain__WritePasswordJob* self, intptr_t slot);
void QKeychain__WritePasswordJob_QBaseDisconnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal);
void QKeychain__WritePasswordJob_DoStart(QKeychain__WritePasswordJob* self);
void QKeychain__WritePasswordJob_OnDoStart(QKeychain__WritePasswordJob* self, intptr_t slot);
void QKeychain__WritePasswordJob_QBaseDoStart(QKeychain__WritePasswordJob* self);
QObject* QKeychain__WritePasswordJob_Sender(const QKeychain__WritePasswordJob* self);
void QKeychain__WritePasswordJob_OnSender(const QKeychain__WritePasswordJob* self, intptr_t slot);
QObject* QKeychain__WritePasswordJob_QBaseSender(const QKeychain__WritePasswordJob* self);
int QKeychain__WritePasswordJob_SenderSignalIndex(const QKeychain__WritePasswordJob* self);
void QKeychain__WritePasswordJob_OnSenderSignalIndex(const QKeychain__WritePasswordJob* self, intptr_t slot);
int QKeychain__WritePasswordJob_QBaseSenderSignalIndex(const QKeychain__WritePasswordJob* self);
int QKeychain__WritePasswordJob_Receivers(const QKeychain__WritePasswordJob* self, const char* signal);
void QKeychain__WritePasswordJob_OnReceivers(const QKeychain__WritePasswordJob* self, intptr_t slot);
int QKeychain__WritePasswordJob_QBaseReceivers(const QKeychain__WritePasswordJob* self, const char* signal);
bool QKeychain__WritePasswordJob_IsSignalConnected(const QKeychain__WritePasswordJob* self, const QMetaMethod* signal);
void QKeychain__WritePasswordJob_OnIsSignalConnected(const QKeychain__WritePasswordJob* self, intptr_t slot);
bool QKeychain__WritePasswordJob_QBaseIsSignalConnected(const QKeychain__WritePasswordJob* self, const QMetaMethod* signal);
void QKeychain__WritePasswordJob_Delete(QKeychain__WritePasswordJob* self);

QKeychain__DeletePasswordJob* QKeychain__DeletePasswordJob_new(const libqt_string service);
QKeychain__DeletePasswordJob* QKeychain__DeletePasswordJob_new2(const libqt_string service, QObject* parent);
QMetaObject* QKeychain__DeletePasswordJob_MetaObject(const QKeychain__DeletePasswordJob* self);
void* QKeychain__DeletePasswordJob_Metacast(QKeychain__DeletePasswordJob* self, const char* param1);
int QKeychain__DeletePasswordJob_Metacall(QKeychain__DeletePasswordJob* self, int param1, int param2, void** param3);
libqt_string QKeychain__DeletePasswordJob_Tr(const char* s);
libqt_string QKeychain__DeletePasswordJob_Tr2(const char* s, const char* c);
libqt_string QKeychain__DeletePasswordJob_Tr3(const char* s, const char* c, int n);
void QKeychain__DeletePasswordJob_OnMetacall(QKeychain__DeletePasswordJob* self, intptr_t slot);
int QKeychain__DeletePasswordJob_QBaseMetacall(QKeychain__DeletePasswordJob* self, int param1, int param2, void** param3);
bool QKeychain__DeletePasswordJob_Event(QKeychain__DeletePasswordJob* self, QEvent* event);
void QKeychain__DeletePasswordJob_OnEvent(QKeychain__DeletePasswordJob* self, intptr_t slot);
bool QKeychain__DeletePasswordJob_QBaseEvent(QKeychain__DeletePasswordJob* self, QEvent* event);
bool QKeychain__DeletePasswordJob_EventFilter(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event);
void QKeychain__DeletePasswordJob_OnEventFilter(QKeychain__DeletePasswordJob* self, intptr_t slot);
bool QKeychain__DeletePasswordJob_QBaseEventFilter(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event);
void QKeychain__DeletePasswordJob_TimerEvent(QKeychain__DeletePasswordJob* self, QTimerEvent* event);
void QKeychain__DeletePasswordJob_OnTimerEvent(QKeychain__DeletePasswordJob* self, intptr_t slot);
void QKeychain__DeletePasswordJob_QBaseTimerEvent(QKeychain__DeletePasswordJob* self, QTimerEvent* event);
void QKeychain__DeletePasswordJob_ChildEvent(QKeychain__DeletePasswordJob* self, QChildEvent* event);
void QKeychain__DeletePasswordJob_OnChildEvent(QKeychain__DeletePasswordJob* self, intptr_t slot);
void QKeychain__DeletePasswordJob_QBaseChildEvent(QKeychain__DeletePasswordJob* self, QChildEvent* event);
void QKeychain__DeletePasswordJob_CustomEvent(QKeychain__DeletePasswordJob* self, QEvent* event);
void QKeychain__DeletePasswordJob_OnCustomEvent(QKeychain__DeletePasswordJob* self, intptr_t slot);
void QKeychain__DeletePasswordJob_QBaseCustomEvent(QKeychain__DeletePasswordJob* self, QEvent* event);
void QKeychain__DeletePasswordJob_ConnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal);
void QKeychain__DeletePasswordJob_OnConnectNotify(QKeychain__DeletePasswordJob* self, intptr_t slot);
void QKeychain__DeletePasswordJob_QBaseConnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal);
void QKeychain__DeletePasswordJob_DisconnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal);
void QKeychain__DeletePasswordJob_OnDisconnectNotify(QKeychain__DeletePasswordJob* self, intptr_t slot);
void QKeychain__DeletePasswordJob_QBaseDisconnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal);
void QKeychain__DeletePasswordJob_DoStart(QKeychain__DeletePasswordJob* self);
void QKeychain__DeletePasswordJob_OnDoStart(QKeychain__DeletePasswordJob* self, intptr_t slot);
void QKeychain__DeletePasswordJob_QBaseDoStart(QKeychain__DeletePasswordJob* self);
QObject* QKeychain__DeletePasswordJob_Sender(const QKeychain__DeletePasswordJob* self);
void QKeychain__DeletePasswordJob_OnSender(const QKeychain__DeletePasswordJob* self, intptr_t slot);
QObject* QKeychain__DeletePasswordJob_QBaseSender(const QKeychain__DeletePasswordJob* self);
int QKeychain__DeletePasswordJob_SenderSignalIndex(const QKeychain__DeletePasswordJob* self);
void QKeychain__DeletePasswordJob_OnSenderSignalIndex(const QKeychain__DeletePasswordJob* self, intptr_t slot);
int QKeychain__DeletePasswordJob_QBaseSenderSignalIndex(const QKeychain__DeletePasswordJob* self);
int QKeychain__DeletePasswordJob_Receivers(const QKeychain__DeletePasswordJob* self, const char* signal);
void QKeychain__DeletePasswordJob_OnReceivers(const QKeychain__DeletePasswordJob* self, intptr_t slot);
int QKeychain__DeletePasswordJob_QBaseReceivers(const QKeychain__DeletePasswordJob* self, const char* signal);
bool QKeychain__DeletePasswordJob_IsSignalConnected(const QKeychain__DeletePasswordJob* self, const QMetaMethod* signal);
void QKeychain__DeletePasswordJob_OnIsSignalConnected(const QKeychain__DeletePasswordJob* self, intptr_t slot);
bool QKeychain__DeletePasswordJob_QBaseIsSignalConnected(const QKeychain__DeletePasswordJob* self, const QMetaMethod* signal);
void QKeychain__DeletePasswordJob_Delete(QKeychain__DeletePasswordJob* self);

bool QKeychain_IsAvailable();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
