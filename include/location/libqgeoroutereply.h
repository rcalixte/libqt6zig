#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOROUTEREPLY_H
#define SRC_LOCATIONC_LIBQGEOROUTEREPLY_H

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
typedef struct QGeoRoute QGeoRoute;
typedef struct QGeoRouteReply QGeoRouteReply;
typedef struct QGeoRouteRequest QGeoRouteRequest;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QGeoRouteReply* QGeoRouteReply_new(int errorVal, const libqt_string errorString);
QGeoRouteReply* QGeoRouteReply_new2(int errorVal, const libqt_string errorString, QObject* parent);
QMetaObject* QGeoRouteReply_MetaObject(const QGeoRouteReply* self);
void* QGeoRouteReply_Metacast(QGeoRouteReply* self, const char* param1);
int QGeoRouteReply_Metacall(QGeoRouteReply* self, int param1, int param2, void** param3);
bool QGeoRouteReply_IsFinished(const QGeoRouteReply* self);
int QGeoRouteReply_Error(const QGeoRouteReply* self);
libqt_string QGeoRouteReply_ErrorString(const QGeoRouteReply* self);
QGeoRouteRequest* QGeoRouteReply_Request(const QGeoRouteReply* self);
libqt_list /* of QGeoRoute* */ QGeoRouteReply_Routes(const QGeoRouteReply* self);
void QGeoRouteReply_Abort(QGeoRouteReply* self);
void QGeoRouteReply_Finished(QGeoRouteReply* self);
void QGeoRouteReply_Connect_Finished(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_Aborted(QGeoRouteReply* self);
void QGeoRouteReply_Connect_Aborted(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_ErrorOccurred(QGeoRouteReply* self, int errorVal);
void QGeoRouteReply_Connect_ErrorOccurred(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_ErrorOccurred2(QGeoRouteReply* self, int errorVal, const libqt_string errorString);
void QGeoRouteReply_Connect_ErrorOccurred2(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_OnMetaObject(const QGeoRouteReply* self, intptr_t slot);
QMetaObject* QGeoRouteReply_QBaseMetaObject(const QGeoRouteReply* self);
void QGeoRouteReply_OnMetacast(QGeoRouteReply* self, intptr_t slot);
void* QGeoRouteReply_QBaseMetacast(QGeoRouteReply* self, const char* param1);
void QGeoRouteReply_OnMetacall(QGeoRouteReply* self, intptr_t slot);
int QGeoRouteReply_QBaseMetacall(QGeoRouteReply* self, int param1, int param2, void** param3);
void QGeoRouteReply_OnAbort(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseAbort(QGeoRouteReply* self);
bool QGeoRouteReply_Event(QGeoRouteReply* self, QEvent* event);
void QGeoRouteReply_OnEvent(QGeoRouteReply* self, intptr_t slot);
bool QGeoRouteReply_QBaseEvent(QGeoRouteReply* self, QEvent* event);
bool QGeoRouteReply_EventFilter(QGeoRouteReply* self, QObject* watched, QEvent* event);
void QGeoRouteReply_OnEventFilter(QGeoRouteReply* self, intptr_t slot);
bool QGeoRouteReply_QBaseEventFilter(QGeoRouteReply* self, QObject* watched, QEvent* event);
void QGeoRouteReply_TimerEvent(QGeoRouteReply* self, QTimerEvent* event);
void QGeoRouteReply_OnTimerEvent(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseTimerEvent(QGeoRouteReply* self, QTimerEvent* event);
void QGeoRouteReply_ChildEvent(QGeoRouteReply* self, QChildEvent* event);
void QGeoRouteReply_OnChildEvent(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseChildEvent(QGeoRouteReply* self, QChildEvent* event);
void QGeoRouteReply_CustomEvent(QGeoRouteReply* self, QEvent* event);
void QGeoRouteReply_OnCustomEvent(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseCustomEvent(QGeoRouteReply* self, QEvent* event);
void QGeoRouteReply_ConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
void QGeoRouteReply_OnConnectNotify(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
void QGeoRouteReply_DisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
void QGeoRouteReply_OnDisconnectNotify(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseDisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal);
void QGeoRouteReply_SetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString);
void QGeoRouteReply_OnSetError(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseSetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString);
void QGeoRouteReply_SetFinished(QGeoRouteReply* self, bool finished);
void QGeoRouteReply_OnSetFinished(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseSetFinished(QGeoRouteReply* self, bool finished);
void QGeoRouteReply_SetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
void QGeoRouteReply_OnSetRoutes(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseSetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
void QGeoRouteReply_AddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
void QGeoRouteReply_OnAddRoutes(QGeoRouteReply* self, intptr_t slot);
void QGeoRouteReply_QBaseAddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes);
QObject* QGeoRouteReply_Sender(const QGeoRouteReply* self);
void QGeoRouteReply_OnSender(const QGeoRouteReply* self, intptr_t slot);
QObject* QGeoRouteReply_QBaseSender(const QGeoRouteReply* self);
int QGeoRouteReply_SenderSignalIndex(const QGeoRouteReply* self);
void QGeoRouteReply_OnSenderSignalIndex(const QGeoRouteReply* self, intptr_t slot);
int QGeoRouteReply_QBaseSenderSignalIndex(const QGeoRouteReply* self);
int QGeoRouteReply_Receivers(const QGeoRouteReply* self, const char* signal);
void QGeoRouteReply_OnReceivers(const QGeoRouteReply* self, intptr_t slot);
int QGeoRouteReply_QBaseReceivers(const QGeoRouteReply* self, const char* signal);
bool QGeoRouteReply_IsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal);
void QGeoRouteReply_OnIsSignalConnected(const QGeoRouteReply* self, intptr_t slot);
bool QGeoRouteReply_QBaseIsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal);
void QGeoRouteReply_Delete(QGeoRouteReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
