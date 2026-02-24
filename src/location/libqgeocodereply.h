#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOCODEREPLY_H
#define SRC_LOCATIONC_LIBQGEOCODEREPLY_H

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
typedef struct QGeoCodeReply QGeoCodeReply;
typedef struct QGeoLocation QGeoLocation;
typedef struct QGeoShape QGeoShape;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QGeoCodeReply* QGeoCodeReply_new(int errorVal, const libqt_string errorString);
QGeoCodeReply* QGeoCodeReply_new2(int errorVal, const libqt_string errorString, QObject* parent);
QMetaObject* QGeoCodeReply_MetaObject(const QGeoCodeReply* self);
void* QGeoCodeReply_Metacast(QGeoCodeReply* self, const char* param1);
int QGeoCodeReply_Metacall(QGeoCodeReply* self, int param1, int param2, void** param3);
bool QGeoCodeReply_IsFinished(const QGeoCodeReply* self);
int QGeoCodeReply_Error(const QGeoCodeReply* self);
libqt_string QGeoCodeReply_ErrorString(const QGeoCodeReply* self);
QGeoShape* QGeoCodeReply_Viewport(const QGeoCodeReply* self);
libqt_list /* of QGeoLocation* */ QGeoCodeReply_Locations(const QGeoCodeReply* self);
ptrdiff_t QGeoCodeReply_Limit(const QGeoCodeReply* self);
ptrdiff_t QGeoCodeReply_Offset(const QGeoCodeReply* self);
void QGeoCodeReply_Abort(QGeoCodeReply* self);
void QGeoCodeReply_Finished(QGeoCodeReply* self);
void QGeoCodeReply_Connect_Finished(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_Aborted(QGeoCodeReply* self);
void QGeoCodeReply_Connect_Aborted(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_ErrorOccurred(QGeoCodeReply* self, int errorVal);
void QGeoCodeReply_Connect_ErrorOccurred(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_ErrorOccurred2(QGeoCodeReply* self, int errorVal, const libqt_string errorString);
void QGeoCodeReply_Connect_ErrorOccurred2(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_OnMetaObject(const QGeoCodeReply* self, intptr_t slot);
QMetaObject* QGeoCodeReply_SuperMetaObject(const QGeoCodeReply* self);
void QGeoCodeReply_OnMetacast(QGeoCodeReply* self, intptr_t slot);
void* QGeoCodeReply_SuperMetacast(QGeoCodeReply* self, const char* param1);
void QGeoCodeReply_OnMetacall(QGeoCodeReply* self, intptr_t slot);
int QGeoCodeReply_SuperMetacall(QGeoCodeReply* self, int param1, int param2, void** param3);
void QGeoCodeReply_OnAbort(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperAbort(QGeoCodeReply* self);
bool QGeoCodeReply_Event(QGeoCodeReply* self, QEvent* event);
void QGeoCodeReply_OnEvent(QGeoCodeReply* self, intptr_t slot);
bool QGeoCodeReply_SuperEvent(QGeoCodeReply* self, QEvent* event);
bool QGeoCodeReply_EventFilter(QGeoCodeReply* self, QObject* watched, QEvent* event);
void QGeoCodeReply_OnEventFilter(QGeoCodeReply* self, intptr_t slot);
bool QGeoCodeReply_SuperEventFilter(QGeoCodeReply* self, QObject* watched, QEvent* event);
void QGeoCodeReply_TimerEvent(QGeoCodeReply* self, QTimerEvent* event);
void QGeoCodeReply_OnTimerEvent(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperTimerEvent(QGeoCodeReply* self, QTimerEvent* event);
void QGeoCodeReply_ChildEvent(QGeoCodeReply* self, QChildEvent* event);
void QGeoCodeReply_OnChildEvent(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperChildEvent(QGeoCodeReply* self, QChildEvent* event);
void QGeoCodeReply_CustomEvent(QGeoCodeReply* self, QEvent* event);
void QGeoCodeReply_OnCustomEvent(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperCustomEvent(QGeoCodeReply* self, QEvent* event);
void QGeoCodeReply_ConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
void QGeoCodeReply_OnConnectNotify(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
void QGeoCodeReply_DisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
void QGeoCodeReply_OnDisconnectNotify(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperDisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal);
void QGeoCodeReply_SetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString);
void QGeoCodeReply_OnSetError(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperSetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString);
void QGeoCodeReply_SetFinished(QGeoCodeReply* self, bool finished);
void QGeoCodeReply_OnSetFinished(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperSetFinished(QGeoCodeReply* self, bool finished);
void QGeoCodeReply_SetViewport(QGeoCodeReply* self, const QGeoShape* viewport);
void QGeoCodeReply_OnSetViewport(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperSetViewport(QGeoCodeReply* self, const QGeoShape* viewport);
void QGeoCodeReply_AddLocation(QGeoCodeReply* self, const QGeoLocation* location);
void QGeoCodeReply_OnAddLocation(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperAddLocation(QGeoCodeReply* self, const QGeoLocation* location);
void QGeoCodeReply_SetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations);
void QGeoCodeReply_OnSetLocations(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperSetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations);
void QGeoCodeReply_SetLimit(QGeoCodeReply* self, ptrdiff_t limit);
void QGeoCodeReply_OnSetLimit(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperSetLimit(QGeoCodeReply* self, ptrdiff_t limit);
void QGeoCodeReply_SetOffset(QGeoCodeReply* self, ptrdiff_t offset);
void QGeoCodeReply_OnSetOffset(QGeoCodeReply* self, intptr_t slot);
void QGeoCodeReply_SuperSetOffset(QGeoCodeReply* self, ptrdiff_t offset);
QObject* QGeoCodeReply_Sender(const QGeoCodeReply* self);
void QGeoCodeReply_OnSender(const QGeoCodeReply* self, intptr_t slot);
QObject* QGeoCodeReply_SuperSender(const QGeoCodeReply* self);
int QGeoCodeReply_SenderSignalIndex(const QGeoCodeReply* self);
void QGeoCodeReply_OnSenderSignalIndex(const QGeoCodeReply* self, intptr_t slot);
int QGeoCodeReply_SuperSenderSignalIndex(const QGeoCodeReply* self);
int QGeoCodeReply_Receivers(const QGeoCodeReply* self, const char* signal);
void QGeoCodeReply_OnReceivers(const QGeoCodeReply* self, intptr_t slot);
int QGeoCodeReply_SuperReceivers(const QGeoCodeReply* self, const char* signal);
bool QGeoCodeReply_IsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal);
void QGeoCodeReply_OnIsSignalConnected(const QGeoCodeReply* self, intptr_t slot);
bool QGeoCodeReply_SuperIsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal);
void QGeoCodeReply_Delete(QGeoCodeReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
