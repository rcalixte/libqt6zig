#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEREPLY_H
#define SRC_LOCATIONC_LIBQPLACEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPlaceReply QPlaceReply;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceReply* QPlaceReply_new();
QPlaceReply* QPlaceReply_new2(QObject* parent);
QMetaObject* QPlaceReply_MetaObject(const QPlaceReply* self);
void* QPlaceReply_Metacast(QPlaceReply* self, const char* param1);
int QPlaceReply_Metacall(QPlaceReply* self, int param1, int param2, void** param3);
bool QPlaceReply_IsFinished(const QPlaceReply* self);
int QPlaceReply_Type(const QPlaceReply* self);
libqt_string QPlaceReply_ErrorString(const QPlaceReply* self);
int QPlaceReply_Error(const QPlaceReply* self);
void QPlaceReply_Abort(QPlaceReply* self);
void QPlaceReply_Finished(QPlaceReply* self);
void QPlaceReply_Connect_Finished(QPlaceReply* self, intptr_t slot);
void QPlaceReply_ContentUpdated(QPlaceReply* self);
void QPlaceReply_Connect_ContentUpdated(QPlaceReply* self, intptr_t slot);
void QPlaceReply_Aborted(QPlaceReply* self);
void QPlaceReply_Connect_Aborted(QPlaceReply* self, intptr_t slot);
void QPlaceReply_ErrorOccurred(QPlaceReply* self, int errorVal);
void QPlaceReply_Connect_ErrorOccurred(QPlaceReply* self, intptr_t slot);
void QPlaceReply_ErrorOccurred2(QPlaceReply* self, int errorVal, const libqt_string errorString);
void QPlaceReply_Connect_ErrorOccurred2(QPlaceReply* self, intptr_t slot);
void QPlaceReply_OnMetaObject(const QPlaceReply* self, intptr_t slot);
QMetaObject* QPlaceReply_QBaseMetaObject(const QPlaceReply* self);
void QPlaceReply_OnMetacast(QPlaceReply* self, intptr_t slot);
void* QPlaceReply_QBaseMetacast(QPlaceReply* self, const char* param1);
void QPlaceReply_OnMetacall(QPlaceReply* self, intptr_t slot);
int QPlaceReply_QBaseMetacall(QPlaceReply* self, int param1, int param2, void** param3);
void QPlaceReply_OnType(const QPlaceReply* self, intptr_t slot);
int QPlaceReply_QBaseType(const QPlaceReply* self);
void QPlaceReply_OnAbort(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseAbort(QPlaceReply* self);
bool QPlaceReply_Event(QPlaceReply* self, QEvent* event);
void QPlaceReply_OnEvent(QPlaceReply* self, intptr_t slot);
bool QPlaceReply_QBaseEvent(QPlaceReply* self, QEvent* event);
bool QPlaceReply_EventFilter(QPlaceReply* self, QObject* watched, QEvent* event);
void QPlaceReply_OnEventFilter(QPlaceReply* self, intptr_t slot);
bool QPlaceReply_QBaseEventFilter(QPlaceReply* self, QObject* watched, QEvent* event);
void QPlaceReply_TimerEvent(QPlaceReply* self, QTimerEvent* event);
void QPlaceReply_OnTimerEvent(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseTimerEvent(QPlaceReply* self, QTimerEvent* event);
void QPlaceReply_ChildEvent(QPlaceReply* self, QChildEvent* event);
void QPlaceReply_OnChildEvent(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseChildEvent(QPlaceReply* self, QChildEvent* event);
void QPlaceReply_CustomEvent(QPlaceReply* self, QEvent* event);
void QPlaceReply_OnCustomEvent(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseCustomEvent(QPlaceReply* self, QEvent* event);
void QPlaceReply_ConnectNotify(QPlaceReply* self, const QMetaMethod* signal);
void QPlaceReply_OnConnectNotify(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseConnectNotify(QPlaceReply* self, const QMetaMethod* signal);
void QPlaceReply_DisconnectNotify(QPlaceReply* self, const QMetaMethod* signal);
void QPlaceReply_OnDisconnectNotify(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseDisconnectNotify(QPlaceReply* self, const QMetaMethod* signal);
void QPlaceReply_SetFinished(QPlaceReply* self, bool finished);
void QPlaceReply_OnSetFinished(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseSetFinished(QPlaceReply* self, bool finished);
void QPlaceReply_SetError(QPlaceReply* self, int errorVal, const libqt_string errorString);
void QPlaceReply_OnSetError(QPlaceReply* self, intptr_t slot);
void QPlaceReply_QBaseSetError(QPlaceReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceReply_Sender(const QPlaceReply* self);
void QPlaceReply_OnSender(const QPlaceReply* self, intptr_t slot);
QObject* QPlaceReply_QBaseSender(const QPlaceReply* self);
int QPlaceReply_SenderSignalIndex(const QPlaceReply* self);
void QPlaceReply_OnSenderSignalIndex(const QPlaceReply* self, intptr_t slot);
int QPlaceReply_QBaseSenderSignalIndex(const QPlaceReply* self);
int QPlaceReply_Receivers(const QPlaceReply* self, const char* signal);
void QPlaceReply_OnReceivers(const QPlaceReply* self, intptr_t slot);
int QPlaceReply_QBaseReceivers(const QPlaceReply* self, const char* signal);
bool QPlaceReply_IsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal);
void QPlaceReply_OnIsSignalConnected(const QPlaceReply* self, intptr_t slot);
bool QPlaceReply_QBaseIsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal);
void QPlaceReply_Delete(QPlaceReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
