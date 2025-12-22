#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEDETAILSREPLY_H
#define SRC_LOCATIONC_LIBQPLACEDETAILSREPLY_H

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
typedef struct QPlaceDetailsReply QPlaceDetailsReply;
typedef struct QPlaceReply QPlaceReply;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceDetailsReply* QPlaceDetailsReply_new();
QPlaceDetailsReply* QPlaceDetailsReply_new2(QObject* parent);
QMetaObject* QPlaceDetailsReply_MetaObject(const QPlaceDetailsReply* self);
void* QPlaceDetailsReply_Metacast(QPlaceDetailsReply* self, const char* param1);
int QPlaceDetailsReply_Metacall(QPlaceDetailsReply* self, int param1, int param2, void** param3);
int QPlaceDetailsReply_Type(const QPlaceDetailsReply* self);
QPlace* QPlaceDetailsReply_Place(const QPlaceDetailsReply* self);
void QPlaceDetailsReply_OnMetacall(QPlaceDetailsReply* self, intptr_t slot);
int QPlaceDetailsReply_QBaseMetacall(QPlaceDetailsReply* self, int param1, int param2, void** param3);
void QPlaceDetailsReply_OnType(const QPlaceDetailsReply* self, intptr_t slot);
int QPlaceDetailsReply_QBaseType(const QPlaceDetailsReply* self);
void QPlaceDetailsReply_Abort(QPlaceDetailsReply* self);
void QPlaceDetailsReply_OnAbort(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseAbort(QPlaceDetailsReply* self);
bool QPlaceDetailsReply_Event(QPlaceDetailsReply* self, QEvent* event);
void QPlaceDetailsReply_OnEvent(QPlaceDetailsReply* self, intptr_t slot);
bool QPlaceDetailsReply_QBaseEvent(QPlaceDetailsReply* self, QEvent* event);
bool QPlaceDetailsReply_EventFilter(QPlaceDetailsReply* self, QObject* watched, QEvent* event);
void QPlaceDetailsReply_OnEventFilter(QPlaceDetailsReply* self, intptr_t slot);
bool QPlaceDetailsReply_QBaseEventFilter(QPlaceDetailsReply* self, QObject* watched, QEvent* event);
void QPlaceDetailsReply_TimerEvent(QPlaceDetailsReply* self, QTimerEvent* event);
void QPlaceDetailsReply_OnTimerEvent(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseTimerEvent(QPlaceDetailsReply* self, QTimerEvent* event);
void QPlaceDetailsReply_ChildEvent(QPlaceDetailsReply* self, QChildEvent* event);
void QPlaceDetailsReply_OnChildEvent(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseChildEvent(QPlaceDetailsReply* self, QChildEvent* event);
void QPlaceDetailsReply_CustomEvent(QPlaceDetailsReply* self, QEvent* event);
void QPlaceDetailsReply_OnCustomEvent(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseCustomEvent(QPlaceDetailsReply* self, QEvent* event);
void QPlaceDetailsReply_ConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
void QPlaceDetailsReply_OnConnectNotify(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
void QPlaceDetailsReply_DisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
void QPlaceDetailsReply_OnDisconnectNotify(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseDisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal);
void QPlaceDetailsReply_SetPlace(QPlaceDetailsReply* self, const QPlace* place);
void QPlaceDetailsReply_OnSetPlace(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseSetPlace(QPlaceDetailsReply* self, const QPlace* place);
void QPlaceDetailsReply_SetFinished(QPlaceDetailsReply* self, bool finished);
void QPlaceDetailsReply_OnSetFinished(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseSetFinished(QPlaceDetailsReply* self, bool finished);
void QPlaceDetailsReply_SetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString);
void QPlaceDetailsReply_OnSetError(QPlaceDetailsReply* self, intptr_t slot);
void QPlaceDetailsReply_QBaseSetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceDetailsReply_Sender(const QPlaceDetailsReply* self);
void QPlaceDetailsReply_OnSender(const QPlaceDetailsReply* self, intptr_t slot);
QObject* QPlaceDetailsReply_QBaseSender(const QPlaceDetailsReply* self);
int QPlaceDetailsReply_SenderSignalIndex(const QPlaceDetailsReply* self);
void QPlaceDetailsReply_OnSenderSignalIndex(const QPlaceDetailsReply* self, intptr_t slot);
int QPlaceDetailsReply_QBaseSenderSignalIndex(const QPlaceDetailsReply* self);
int QPlaceDetailsReply_Receivers(const QPlaceDetailsReply* self, const char* signal);
void QPlaceDetailsReply_OnReceivers(const QPlaceDetailsReply* self, intptr_t slot);
int QPlaceDetailsReply_QBaseReceivers(const QPlaceDetailsReply* self, const char* signal);
bool QPlaceDetailsReply_IsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal);
void QPlaceDetailsReply_OnIsSignalConnected(const QPlaceDetailsReply* self, intptr_t slot);
bool QPlaceDetailsReply_QBaseIsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal);
void QPlaceDetailsReply_Delete(QPlaceDetailsReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
