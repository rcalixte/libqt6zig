#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACESEARCHREPLY_H
#define SRC_LOCATIONC_LIBQPLACESEARCHREPLY_H

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
typedef struct QPlaceSearchReply QPlaceSearchReply;
typedef struct QPlaceSearchRequest QPlaceSearchRequest;
typedef struct QPlaceSearchResult QPlaceSearchResult;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceSearchReply* QPlaceSearchReply_new();
QPlaceSearchReply* QPlaceSearchReply_new2(QObject* parent);
QMetaObject* QPlaceSearchReply_MetaObject(const QPlaceSearchReply* self);
void* QPlaceSearchReply_Metacast(QPlaceSearchReply* self, const char* param1);
int QPlaceSearchReply_Metacall(QPlaceSearchReply* self, int param1, int param2, void** param3);
int QPlaceSearchReply_Type(const QPlaceSearchReply* self);
libqt_list /* of QPlaceSearchResult* */ QPlaceSearchReply_Results(const QPlaceSearchReply* self);
QPlaceSearchRequest* QPlaceSearchReply_Request(const QPlaceSearchReply* self);
QPlaceSearchRequest* QPlaceSearchReply_PreviousPageRequest(const QPlaceSearchReply* self);
QPlaceSearchRequest* QPlaceSearchReply_NextPageRequest(const QPlaceSearchReply* self);
void QPlaceSearchReply_OnMetaObject(const QPlaceSearchReply* self, intptr_t slot);
QMetaObject* QPlaceSearchReply_SuperMetaObject(const QPlaceSearchReply* self);
void QPlaceSearchReply_OnMetacast(QPlaceSearchReply* self, intptr_t slot);
void* QPlaceSearchReply_SuperMetacast(QPlaceSearchReply* self, const char* param1);
void QPlaceSearchReply_OnMetacall(QPlaceSearchReply* self, intptr_t slot);
int QPlaceSearchReply_SuperMetacall(QPlaceSearchReply* self, int param1, int param2, void** param3);
void QPlaceSearchReply_OnType(const QPlaceSearchReply* self, intptr_t slot);
int QPlaceSearchReply_SuperType(const QPlaceSearchReply* self);
void QPlaceSearchReply_Abort(QPlaceSearchReply* self);
void QPlaceSearchReply_OnAbort(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperAbort(QPlaceSearchReply* self);
bool QPlaceSearchReply_Event(QPlaceSearchReply* self, QEvent* event);
void QPlaceSearchReply_OnEvent(QPlaceSearchReply* self, intptr_t slot);
bool QPlaceSearchReply_SuperEvent(QPlaceSearchReply* self, QEvent* event);
bool QPlaceSearchReply_EventFilter(QPlaceSearchReply* self, QObject* watched, QEvent* event);
void QPlaceSearchReply_OnEventFilter(QPlaceSearchReply* self, intptr_t slot);
bool QPlaceSearchReply_SuperEventFilter(QPlaceSearchReply* self, QObject* watched, QEvent* event);
void QPlaceSearchReply_TimerEvent(QPlaceSearchReply* self, QTimerEvent* event);
void QPlaceSearchReply_OnTimerEvent(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperTimerEvent(QPlaceSearchReply* self, QTimerEvent* event);
void QPlaceSearchReply_ChildEvent(QPlaceSearchReply* self, QChildEvent* event);
void QPlaceSearchReply_OnChildEvent(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperChildEvent(QPlaceSearchReply* self, QChildEvent* event);
void QPlaceSearchReply_CustomEvent(QPlaceSearchReply* self, QEvent* event);
void QPlaceSearchReply_OnCustomEvent(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperCustomEvent(QPlaceSearchReply* self, QEvent* event);
void QPlaceSearchReply_ConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
void QPlaceSearchReply_OnConnectNotify(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
void QPlaceSearchReply_DisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
void QPlaceSearchReply_OnDisconnectNotify(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperDisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal);
void QPlaceSearchReply_SetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results);
void QPlaceSearchReply_OnSetResults(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperSetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results);
void QPlaceSearchReply_SetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request);
void QPlaceSearchReply_OnSetRequest(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperSetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request);
void QPlaceSearchReply_SetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous);
void QPlaceSearchReply_OnSetPreviousPageRequest(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperSetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous);
void QPlaceSearchReply_SetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next);
void QPlaceSearchReply_OnSetNextPageRequest(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperSetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next);
void QPlaceSearchReply_SetFinished(QPlaceSearchReply* self, bool finished);
void QPlaceSearchReply_OnSetFinished(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperSetFinished(QPlaceSearchReply* self, bool finished);
void QPlaceSearchReply_SetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString);
void QPlaceSearchReply_OnSetError(QPlaceSearchReply* self, intptr_t slot);
void QPlaceSearchReply_SuperSetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceSearchReply_Sender(const QPlaceSearchReply* self);
void QPlaceSearchReply_OnSender(const QPlaceSearchReply* self, intptr_t slot);
QObject* QPlaceSearchReply_SuperSender(const QPlaceSearchReply* self);
int QPlaceSearchReply_SenderSignalIndex(const QPlaceSearchReply* self);
void QPlaceSearchReply_OnSenderSignalIndex(const QPlaceSearchReply* self, intptr_t slot);
int QPlaceSearchReply_SuperSenderSignalIndex(const QPlaceSearchReply* self);
int QPlaceSearchReply_Receivers(const QPlaceSearchReply* self, const char* signal);
void QPlaceSearchReply_OnReceivers(const QPlaceSearchReply* self, intptr_t slot);
int QPlaceSearchReply_SuperReceivers(const QPlaceSearchReply* self, const char* signal);
bool QPlaceSearchReply_IsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal);
void QPlaceSearchReply_OnIsSignalConnected(const QPlaceSearchReply* self, intptr_t slot);
bool QPlaceSearchReply_SuperIsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal);
void QPlaceSearchReply_Delete(QPlaceSearchReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
