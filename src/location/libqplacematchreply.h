#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEMATCHREPLY_H
#define SRC_LOCATIONC_LIBQPLACEMATCHREPLY_H

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
typedef struct QPlace QPlace;
typedef struct QPlaceMatchReply QPlaceMatchReply;
typedef struct QPlaceMatchRequest QPlaceMatchRequest;
typedef struct QPlaceReply QPlaceReply;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceMatchReply* QPlaceMatchReply_new();
QPlaceMatchReply* QPlaceMatchReply_new2(QObject* parent);
QMetaObject* QPlaceMatchReply_MetaObject(const QPlaceMatchReply* self);
void* QPlaceMatchReply_Metacast(QPlaceMatchReply* self, const char* param1);
int QPlaceMatchReply_Metacall(QPlaceMatchReply* self, int param1, int param2, void** param3);
int QPlaceMatchReply_Type(const QPlaceMatchReply* self);
libqt_list /* of QPlace* */ QPlaceMatchReply_Places(const QPlaceMatchReply* self);
QPlaceMatchRequest* QPlaceMatchReply_Request(const QPlaceMatchReply* self);
void QPlaceMatchReply_OnMetacall(QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_QBaseMetacall(QPlaceMatchReply* self, int param1, int param2, void** param3);
void QPlaceMatchReply_OnType(const QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_QBaseType(const QPlaceMatchReply* self);
void QPlaceMatchReply_Abort(QPlaceMatchReply* self);
void QPlaceMatchReply_OnAbort(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseAbort(QPlaceMatchReply* self);
bool QPlaceMatchReply_Event(QPlaceMatchReply* self, QEvent* event);
void QPlaceMatchReply_OnEvent(QPlaceMatchReply* self, intptr_t slot);
bool QPlaceMatchReply_QBaseEvent(QPlaceMatchReply* self, QEvent* event);
bool QPlaceMatchReply_EventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event);
void QPlaceMatchReply_OnEventFilter(QPlaceMatchReply* self, intptr_t slot);
bool QPlaceMatchReply_QBaseEventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event);
void QPlaceMatchReply_TimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
void QPlaceMatchReply_OnTimerEvent(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseTimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
void QPlaceMatchReply_ChildEvent(QPlaceMatchReply* self, QChildEvent* event);
void QPlaceMatchReply_OnChildEvent(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseChildEvent(QPlaceMatchReply* self, QChildEvent* event);
void QPlaceMatchReply_CustomEvent(QPlaceMatchReply* self, QEvent* event);
void QPlaceMatchReply_OnCustomEvent(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseCustomEvent(QPlaceMatchReply* self, QEvent* event);
void QPlaceMatchReply_ConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_OnConnectNotify(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_DisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_OnDisconnectNotify(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseDisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_SetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results);
void QPlaceMatchReply_OnSetPlaces(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseSetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results);
void QPlaceMatchReply_SetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request);
void QPlaceMatchReply_OnSetRequest(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseSetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request);
void QPlaceMatchReply_SetFinished(QPlaceMatchReply* self, bool finished);
void QPlaceMatchReply_OnSetFinished(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseSetFinished(QPlaceMatchReply* self, bool finished);
void QPlaceMatchReply_SetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString);
void QPlaceMatchReply_OnSetError(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_QBaseSetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceMatchReply_Sender(const QPlaceMatchReply* self);
void QPlaceMatchReply_OnSender(const QPlaceMatchReply* self, intptr_t slot);
QObject* QPlaceMatchReply_QBaseSender(const QPlaceMatchReply* self);
int QPlaceMatchReply_SenderSignalIndex(const QPlaceMatchReply* self);
void QPlaceMatchReply_OnSenderSignalIndex(const QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_QBaseSenderSignalIndex(const QPlaceMatchReply* self);
int QPlaceMatchReply_Receivers(const QPlaceMatchReply* self, const char* signal);
void QPlaceMatchReply_OnReceivers(const QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_QBaseReceivers(const QPlaceMatchReply* self, const char* signal);
bool QPlaceMatchReply_IsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_OnIsSignalConnected(const QPlaceMatchReply* self, intptr_t slot);
bool QPlaceMatchReply_QBaseIsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_Delete(QPlaceMatchReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
