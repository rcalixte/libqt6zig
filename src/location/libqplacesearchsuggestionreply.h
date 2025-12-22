#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACESEARCHSUGGESTIONREPLY_H
#define SRC_LOCATIONC_LIBQPLACESEARCHSUGGESTIONREPLY_H

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
typedef struct QPlaceSearchSuggestionReply QPlaceSearchSuggestionReply;
typedef struct QTimerEvent QTimerEvent;
#endif

QPlaceSearchSuggestionReply* QPlaceSearchSuggestionReply_new();
QPlaceSearchSuggestionReply* QPlaceSearchSuggestionReply_new2(QObject* parent);
QMetaObject* QPlaceSearchSuggestionReply_MetaObject(const QPlaceSearchSuggestionReply* self);
void* QPlaceSearchSuggestionReply_Metacast(QPlaceSearchSuggestionReply* self, const char* param1);
int QPlaceSearchSuggestionReply_Metacall(QPlaceSearchSuggestionReply* self, int param1, int param2, void** param3);
libqt_list /* of libqt_string */ QPlaceSearchSuggestionReply_Suggestions(const QPlaceSearchSuggestionReply* self);
int QPlaceSearchSuggestionReply_Type(const QPlaceSearchSuggestionReply* self);
void QPlaceSearchSuggestionReply_OnMetacall(QPlaceSearchSuggestionReply* self, intptr_t slot);
int QPlaceSearchSuggestionReply_QBaseMetacall(QPlaceSearchSuggestionReply* self, int param1, int param2, void** param3);
void QPlaceSearchSuggestionReply_OnType(const QPlaceSearchSuggestionReply* self, intptr_t slot);
int QPlaceSearchSuggestionReply_QBaseType(const QPlaceSearchSuggestionReply* self);
void QPlaceSearchSuggestionReply_Abort(QPlaceSearchSuggestionReply* self);
void QPlaceSearchSuggestionReply_OnAbort(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseAbort(QPlaceSearchSuggestionReply* self);
bool QPlaceSearchSuggestionReply_Event(QPlaceSearchSuggestionReply* self, QEvent* event);
void QPlaceSearchSuggestionReply_OnEvent(QPlaceSearchSuggestionReply* self, intptr_t slot);
bool QPlaceSearchSuggestionReply_QBaseEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
bool QPlaceSearchSuggestionReply_EventFilter(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event);
void QPlaceSearchSuggestionReply_OnEventFilter(QPlaceSearchSuggestionReply* self, intptr_t slot);
bool QPlaceSearchSuggestionReply_QBaseEventFilter(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event);
void QPlaceSearchSuggestionReply_TimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
void QPlaceSearchSuggestionReply_OnTimerEvent(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseTimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event);
void QPlaceSearchSuggestionReply_ChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
void QPlaceSearchSuggestionReply_OnChildEvent(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event);
void QPlaceSearchSuggestionReply_CustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
void QPlaceSearchSuggestionReply_OnCustomEvent(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseCustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event);
void QPlaceSearchSuggestionReply_ConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
void QPlaceSearchSuggestionReply_OnConnectNotify(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
void QPlaceSearchSuggestionReply_DisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
void QPlaceSearchSuggestionReply_OnDisconnectNotify(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseDisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
void QPlaceSearchSuggestionReply_SetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions);
void QPlaceSearchSuggestionReply_OnSetSuggestions(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseSetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions);
void QPlaceSearchSuggestionReply_SetFinished(QPlaceSearchSuggestionReply* self, bool finished);
void QPlaceSearchSuggestionReply_OnSetFinished(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseSetFinished(QPlaceSearchSuggestionReply* self, bool finished);
void QPlaceSearchSuggestionReply_SetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString);
void QPlaceSearchSuggestionReply_OnSetError(QPlaceSearchSuggestionReply* self, intptr_t slot);
void QPlaceSearchSuggestionReply_QBaseSetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString);
QObject* QPlaceSearchSuggestionReply_Sender(const QPlaceSearchSuggestionReply* self);
void QPlaceSearchSuggestionReply_OnSender(const QPlaceSearchSuggestionReply* self, intptr_t slot);
QObject* QPlaceSearchSuggestionReply_QBaseSender(const QPlaceSearchSuggestionReply* self);
int QPlaceSearchSuggestionReply_SenderSignalIndex(const QPlaceSearchSuggestionReply* self);
void QPlaceSearchSuggestionReply_OnSenderSignalIndex(const QPlaceSearchSuggestionReply* self, intptr_t slot);
int QPlaceSearchSuggestionReply_QBaseSenderSignalIndex(const QPlaceSearchSuggestionReply* self);
int QPlaceSearchSuggestionReply_Receivers(const QPlaceSearchSuggestionReply* self, const char* signal);
void QPlaceSearchSuggestionReply_OnReceivers(const QPlaceSearchSuggestionReply* self, intptr_t slot);
int QPlaceSearchSuggestionReply_QBaseReceivers(const QPlaceSearchSuggestionReply* self, const char* signal);
bool QPlaceSearchSuggestionReply_IsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
void QPlaceSearchSuggestionReply_OnIsSignalConnected(const QPlaceSearchSuggestionReply* self, intptr_t slot);
bool QPlaceSearchSuggestionReply_QBaseIsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal);
void QPlaceSearchSuggestionReply_Delete(QPlaceSearchSuggestionReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
