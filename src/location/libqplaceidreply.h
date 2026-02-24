#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEIDREPLY_H
#define SRC_LOCATIONC_LIBQPLACEIDREPLY_H

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
typedef struct QPlaceIdReply QPlaceIdReply;
typedef struct QPlaceReply QPlaceReply;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceIdReply* QPlaceIdReply_new(int operationType);
QPlaceIdReply* QPlaceIdReply_new2(int operationType, QObject* parent);
QMetaObject* QPlaceIdReply_MetaObject(const QPlaceIdReply* self);
void* QPlaceIdReply_Metacast(QPlaceIdReply* self, const char* param1);
int QPlaceIdReply_Metacall(QPlaceIdReply* self, int param1, int param2, void** param3);
int QPlaceIdReply_Type(const QPlaceIdReply* self);
int QPlaceIdReply_OperationType(const QPlaceIdReply* self);
libqt_string QPlaceIdReply_Id(const QPlaceIdReply* self);
void QPlaceIdReply_OnMetaObject(const QPlaceIdReply* self, intptr_t slot);
QMetaObject* QPlaceIdReply_SuperMetaObject(const QPlaceIdReply* self);
void QPlaceIdReply_OnMetacast(QPlaceIdReply* self, intptr_t slot);
void* QPlaceIdReply_SuperMetacast(QPlaceIdReply* self, const char* param1);
void QPlaceIdReply_OnMetacall(QPlaceIdReply* self, intptr_t slot);
int QPlaceIdReply_SuperMetacall(QPlaceIdReply* self, int param1, int param2, void** param3);
void QPlaceIdReply_OnType(const QPlaceIdReply* self, intptr_t slot);
int QPlaceIdReply_SuperType(const QPlaceIdReply* self);
void QPlaceIdReply_Abort(QPlaceIdReply* self);
void QPlaceIdReply_OnAbort(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperAbort(QPlaceIdReply* self);
bool QPlaceIdReply_Event(QPlaceIdReply* self, QEvent* event);
void QPlaceIdReply_OnEvent(QPlaceIdReply* self, intptr_t slot);
bool QPlaceIdReply_SuperEvent(QPlaceIdReply* self, QEvent* event);
bool QPlaceIdReply_EventFilter(QPlaceIdReply* self, QObject* watched, QEvent* event);
void QPlaceIdReply_OnEventFilter(QPlaceIdReply* self, intptr_t slot);
bool QPlaceIdReply_SuperEventFilter(QPlaceIdReply* self, QObject* watched, QEvent* event);
void QPlaceIdReply_TimerEvent(QPlaceIdReply* self, QTimerEvent* event);
void QPlaceIdReply_OnTimerEvent(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperTimerEvent(QPlaceIdReply* self, QTimerEvent* event);
void QPlaceIdReply_ChildEvent(QPlaceIdReply* self, QChildEvent* event);
void QPlaceIdReply_OnChildEvent(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperChildEvent(QPlaceIdReply* self, QChildEvent* event);
void QPlaceIdReply_CustomEvent(QPlaceIdReply* self, QEvent* event);
void QPlaceIdReply_OnCustomEvent(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperCustomEvent(QPlaceIdReply* self, QEvent* event);
void QPlaceIdReply_ConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
void QPlaceIdReply_OnConnectNotify(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
void QPlaceIdReply_DisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
void QPlaceIdReply_OnDisconnectNotify(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperDisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal);
void QPlaceIdReply_SetId(QPlaceIdReply* self, const libqt_string identifier);
void QPlaceIdReply_OnSetId(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperSetId(QPlaceIdReply* self, const libqt_string identifier);
void QPlaceIdReply_SetFinished(QPlaceIdReply* self, bool finished);
void QPlaceIdReply_OnSetFinished(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperSetFinished(QPlaceIdReply* self, bool finished);
void QPlaceIdReply_SetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString);
void QPlaceIdReply_OnSetError(QPlaceIdReply* self, intptr_t slot);
void QPlaceIdReply_SuperSetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceIdReply_Sender(const QPlaceIdReply* self);
void QPlaceIdReply_OnSender(const QPlaceIdReply* self, intptr_t slot);
QObject* QPlaceIdReply_SuperSender(const QPlaceIdReply* self);
int QPlaceIdReply_SenderSignalIndex(const QPlaceIdReply* self);
void QPlaceIdReply_OnSenderSignalIndex(const QPlaceIdReply* self, intptr_t slot);
int QPlaceIdReply_SuperSenderSignalIndex(const QPlaceIdReply* self);
int QPlaceIdReply_Receivers(const QPlaceIdReply* self, const char* signal);
void QPlaceIdReply_OnReceivers(const QPlaceIdReply* self, intptr_t slot);
int QPlaceIdReply_SuperReceivers(const QPlaceIdReply* self, const char* signal);
bool QPlaceIdReply_IsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal);
void QPlaceIdReply_OnIsSignalConnected(const QPlaceIdReply* self, intptr_t slot);
bool QPlaceIdReply_SuperIsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal);
void QPlaceIdReply_Delete(QPlaceIdReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
