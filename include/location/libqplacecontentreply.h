#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACECONTENTREPLY_H
#define SRC_LOCATIONC_LIBQPLACECONTENTREPLY_H

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
typedef struct QPlaceContent QPlaceContent;
typedef struct QPlaceContentReply QPlaceContentReply;
typedef struct QPlaceContentRequest QPlaceContentRequest;
typedef struct QPlaceReply QPlaceReply;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceContentReply* QPlaceContentReply_new();
QPlaceContentReply* QPlaceContentReply_new2(QObject* parent);
QMetaObject* QPlaceContentReply_MetaObject(const QPlaceContentReply* self);
void* QPlaceContentReply_Metacast(QPlaceContentReply* self, const char* param1);
int QPlaceContentReply_Metacall(QPlaceContentReply* self, int param1, int param2, void** param3);
int QPlaceContentReply_Type(const QPlaceContentReply* self);
libqt_map /* of int to QPlaceContent* */ QPlaceContentReply_Content(const QPlaceContentReply* self);
int QPlaceContentReply_TotalCount(const QPlaceContentReply* self);
QPlaceContentRequest* QPlaceContentReply_Request(const QPlaceContentReply* self);
QPlaceContentRequest* QPlaceContentReply_PreviousPageRequest(const QPlaceContentReply* self);
QPlaceContentRequest* QPlaceContentReply_NextPageRequest(const QPlaceContentReply* self);
void QPlaceContentReply_OnMetaObject(const QPlaceContentReply* self, intptr_t slot);
QMetaObject* QPlaceContentReply_SuperMetaObject(const QPlaceContentReply* self);
void QPlaceContentReply_OnMetacast(QPlaceContentReply* self, intptr_t slot);
void* QPlaceContentReply_SuperMetacast(QPlaceContentReply* self, const char* param1);
void QPlaceContentReply_OnMetacall(QPlaceContentReply* self, intptr_t slot);
int QPlaceContentReply_SuperMetacall(QPlaceContentReply* self, int param1, int param2, void** param3);
void QPlaceContentReply_OnType(const QPlaceContentReply* self, intptr_t slot);
int QPlaceContentReply_SuperType(const QPlaceContentReply* self);
void QPlaceContentReply_Abort(QPlaceContentReply* self);
void QPlaceContentReply_OnAbort(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperAbort(QPlaceContentReply* self);
bool QPlaceContentReply_Event(QPlaceContentReply* self, QEvent* event);
void QPlaceContentReply_OnEvent(QPlaceContentReply* self, intptr_t slot);
bool QPlaceContentReply_SuperEvent(QPlaceContentReply* self, QEvent* event);
bool QPlaceContentReply_EventFilter(QPlaceContentReply* self, QObject* watched, QEvent* event);
void QPlaceContentReply_OnEventFilter(QPlaceContentReply* self, intptr_t slot);
bool QPlaceContentReply_SuperEventFilter(QPlaceContentReply* self, QObject* watched, QEvent* event);
void QPlaceContentReply_TimerEvent(QPlaceContentReply* self, QTimerEvent* event);
void QPlaceContentReply_OnTimerEvent(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperTimerEvent(QPlaceContentReply* self, QTimerEvent* event);
void QPlaceContentReply_ChildEvent(QPlaceContentReply* self, QChildEvent* event);
void QPlaceContentReply_OnChildEvent(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperChildEvent(QPlaceContentReply* self, QChildEvent* event);
void QPlaceContentReply_CustomEvent(QPlaceContentReply* self, QEvent* event);
void QPlaceContentReply_OnCustomEvent(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperCustomEvent(QPlaceContentReply* self, QEvent* event);
void QPlaceContentReply_ConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
void QPlaceContentReply_OnConnectNotify(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
void QPlaceContentReply_DisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
void QPlaceContentReply_OnDisconnectNotify(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperDisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal);
void QPlaceContentReply_SetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content);
void QPlaceContentReply_OnSetContent(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content);
void QPlaceContentReply_SetTotalCount(QPlaceContentReply* self, int total);
void QPlaceContentReply_OnSetTotalCount(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetTotalCount(QPlaceContentReply* self, int total);
void QPlaceContentReply_SetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request);
void QPlaceContentReply_OnSetRequest(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request);
void QPlaceContentReply_SetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous);
void QPlaceContentReply_OnSetPreviousPageRequest(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous);
void QPlaceContentReply_SetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next);
void QPlaceContentReply_OnSetNextPageRequest(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next);
void QPlaceContentReply_SetFinished(QPlaceContentReply* self, bool finished);
void QPlaceContentReply_OnSetFinished(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetFinished(QPlaceContentReply* self, bool finished);
void QPlaceContentReply_SetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString);
void QPlaceContentReply_OnSetError(QPlaceContentReply* self, intptr_t slot);
void QPlaceContentReply_SuperSetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceContentReply_Sender(const QPlaceContentReply* self);
void QPlaceContentReply_OnSender(const QPlaceContentReply* self, intptr_t slot);
QObject* QPlaceContentReply_SuperSender(const QPlaceContentReply* self);
int QPlaceContentReply_SenderSignalIndex(const QPlaceContentReply* self);
void QPlaceContentReply_OnSenderSignalIndex(const QPlaceContentReply* self, intptr_t slot);
int QPlaceContentReply_SuperSenderSignalIndex(const QPlaceContentReply* self);
int QPlaceContentReply_Receivers(const QPlaceContentReply* self, const char* signal);
void QPlaceContentReply_OnReceivers(const QPlaceContentReply* self, intptr_t slot);
int QPlaceContentReply_SuperReceivers(const QPlaceContentReply* self, const char* signal);
bool QPlaceContentReply_IsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal);
void QPlaceContentReply_OnIsSignalConnected(const QPlaceContentReply* self, intptr_t slot);
bool QPlaceContentReply_SuperIsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal);
void QPlaceContentReply_Delete(QPlaceContentReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
