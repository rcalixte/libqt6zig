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
void QPlaceMatchReply_OnMetaObject(const QPlaceMatchReply* self, intptr_t slot);
QMetaObject* QPlaceMatchReply_SuperMetaObject(const QPlaceMatchReply* self);
void QPlaceMatchReply_OnMetacast(QPlaceMatchReply* self, intptr_t slot);
void* QPlaceMatchReply_SuperMetacast(QPlaceMatchReply* self, const char* param1);
void QPlaceMatchReply_OnMetacall(QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_SuperMetacall(QPlaceMatchReply* self, int param1, int param2, void** param3);
void QPlaceMatchReply_OnType(const QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_SuperType(const QPlaceMatchReply* self);
void QPlaceMatchReply_Abort(QPlaceMatchReply* self);
void QPlaceMatchReply_OnAbort(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperAbort(QPlaceMatchReply* self);
bool QPlaceMatchReply_Event(QPlaceMatchReply* self, QEvent* event);
void QPlaceMatchReply_OnEvent(QPlaceMatchReply* self, intptr_t slot);
bool QPlaceMatchReply_SuperEvent(QPlaceMatchReply* self, QEvent* event);
bool QPlaceMatchReply_EventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event);
void QPlaceMatchReply_OnEventFilter(QPlaceMatchReply* self, intptr_t slot);
bool QPlaceMatchReply_SuperEventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event);
void QPlaceMatchReply_TimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
void QPlaceMatchReply_OnTimerEvent(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperTimerEvent(QPlaceMatchReply* self, QTimerEvent* event);
void QPlaceMatchReply_ChildEvent(QPlaceMatchReply* self, QChildEvent* event);
void QPlaceMatchReply_OnChildEvent(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperChildEvent(QPlaceMatchReply* self, QChildEvent* event);
void QPlaceMatchReply_CustomEvent(QPlaceMatchReply* self, QEvent* event);
void QPlaceMatchReply_OnCustomEvent(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperCustomEvent(QPlaceMatchReply* self, QEvent* event);
void QPlaceMatchReply_ConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_OnConnectNotify(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_DisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_OnDisconnectNotify(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperDisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_SetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results);
void QPlaceMatchReply_OnSetPlaces(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperSetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results);
void QPlaceMatchReply_SetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request);
void QPlaceMatchReply_OnSetRequest(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperSetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request);
void QPlaceMatchReply_SetFinished(QPlaceMatchReply* self, bool finished);
void QPlaceMatchReply_OnSetFinished(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperSetFinished(QPlaceMatchReply* self, bool finished);
void QPlaceMatchReply_SetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString);
void QPlaceMatchReply_OnSetError(QPlaceMatchReply* self, intptr_t slot);
void QPlaceMatchReply_SuperSetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceMatchReply_Sender(const QPlaceMatchReply* self);
void QPlaceMatchReply_OnSender(const QPlaceMatchReply* self, intptr_t slot);
QObject* QPlaceMatchReply_SuperSender(const QPlaceMatchReply* self);
int QPlaceMatchReply_SenderSignalIndex(const QPlaceMatchReply* self);
void QPlaceMatchReply_OnSenderSignalIndex(const QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_SuperSenderSignalIndex(const QPlaceMatchReply* self);
int QPlaceMatchReply_Receivers(const QPlaceMatchReply* self, const char* signal);
void QPlaceMatchReply_OnReceivers(const QPlaceMatchReply* self, intptr_t slot);
int QPlaceMatchReply_SuperReceivers(const QPlaceMatchReply* self, const char* signal);
bool QPlaceMatchReply_IsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_OnIsSignalConnected(const QPlaceMatchReply* self, intptr_t slot);
bool QPlaceMatchReply_SuperIsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal);
void QPlaceMatchReply_Delete(QPlaceMatchReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
