#pragma once
#ifndef SRC_LOCATIONC_LIBQGEOCODINGMANAGERENGINE_H
#define SRC_LOCATIONC_LIBQGEOCODINGMANAGERENGINE_H

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
typedef struct QGeoAddress QGeoAddress;
typedef struct QGeoCodeReply QGeoCodeReply;
typedef struct QGeoCodingManagerEngine QGeoCodingManagerEngine;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoShape QGeoShape;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoCodingManagerEngine* QGeoCodingManagerEngine_new(const libqt_map /* of libqt_string to QVariant* */ parameters);
QGeoCodingManagerEngine* QGeoCodingManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent);
QMetaObject* QGeoCodingManagerEngine_MetaObject(const QGeoCodingManagerEngine* self);
void* QGeoCodingManagerEngine_Metacast(QGeoCodingManagerEngine* self, const char* param1);
int QGeoCodingManagerEngine_Metacall(QGeoCodingManagerEngine* self, int param1, int param2, void** param3);
libqt_string QGeoCodingManagerEngine_ManagerName(const QGeoCodingManagerEngine* self);
int QGeoCodingManagerEngine_ManagerVersion(const QGeoCodingManagerEngine* self);
QGeoCodeReply* QGeoCodingManagerEngine_Geocode(QGeoCodingManagerEngine* self, const QGeoAddress* address, const QGeoShape* bounds);
QGeoCodeReply* QGeoCodingManagerEngine_Geocode2(QGeoCodingManagerEngine* self, const libqt_string address, int limit, int offset, const QGeoShape* bounds);
QGeoCodeReply* QGeoCodingManagerEngine_ReverseGeocode(QGeoCodingManagerEngine* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds);
void QGeoCodingManagerEngine_SetLocale(QGeoCodingManagerEngine* self, const QLocale* locale);
QLocale* QGeoCodingManagerEngine_Locale(const QGeoCodingManagerEngine* self);
void QGeoCodingManagerEngine_Finished(QGeoCodingManagerEngine* self, QGeoCodeReply* reply);
void QGeoCodingManagerEngine_Connect_Finished(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_ErrorOccurred(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, int errorVal);
void QGeoCodingManagerEngine_Connect_ErrorOccurred(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_ErrorOccurred3(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, int errorVal, const libqt_string errorString);
void QGeoCodingManagerEngine_Connect_ErrorOccurred3(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_OnMetaObject(const QGeoCodingManagerEngine* self, intptr_t slot);
QMetaObject* QGeoCodingManagerEngine_SuperMetaObject(const QGeoCodingManagerEngine* self);
void QGeoCodingManagerEngine_OnMetacast(QGeoCodingManagerEngine* self, intptr_t slot);
void* QGeoCodingManagerEngine_SuperMetacast(QGeoCodingManagerEngine* self, const char* param1);
void QGeoCodingManagerEngine_OnMetacall(QGeoCodingManagerEngine* self, intptr_t slot);
int QGeoCodingManagerEngine_SuperMetacall(QGeoCodingManagerEngine* self, int param1, int param2, void** param3);
void QGeoCodingManagerEngine_OnGeocode(QGeoCodingManagerEngine* self, intptr_t slot);
QGeoCodeReply* QGeoCodingManagerEngine_SuperGeocode(QGeoCodingManagerEngine* self, const QGeoAddress* address, const QGeoShape* bounds);
void QGeoCodingManagerEngine_OnGeocode2(QGeoCodingManagerEngine* self, intptr_t slot);
QGeoCodeReply* QGeoCodingManagerEngine_SuperGeocode2(QGeoCodingManagerEngine* self, const libqt_string address, int limit, int offset, const QGeoShape* bounds);
void QGeoCodingManagerEngine_OnReverseGeocode(QGeoCodingManagerEngine* self, intptr_t slot);
QGeoCodeReply* QGeoCodingManagerEngine_SuperReverseGeocode(QGeoCodingManagerEngine* self, const QGeoCoordinate* coordinate, const QGeoShape* bounds);
bool QGeoCodingManagerEngine_Event(QGeoCodingManagerEngine* self, QEvent* event);
void QGeoCodingManagerEngine_OnEvent(QGeoCodingManagerEngine* self, intptr_t slot);
bool QGeoCodingManagerEngine_SuperEvent(QGeoCodingManagerEngine* self, QEvent* event);
bool QGeoCodingManagerEngine_EventFilter(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event);
void QGeoCodingManagerEngine_OnEventFilter(QGeoCodingManagerEngine* self, intptr_t slot);
bool QGeoCodingManagerEngine_SuperEventFilter(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event);
void QGeoCodingManagerEngine_TimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event);
void QGeoCodingManagerEngine_OnTimerEvent(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_SuperTimerEvent(QGeoCodingManagerEngine* self, QTimerEvent* event);
void QGeoCodingManagerEngine_ChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event);
void QGeoCodingManagerEngine_OnChildEvent(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_SuperChildEvent(QGeoCodingManagerEngine* self, QChildEvent* event);
void QGeoCodingManagerEngine_CustomEvent(QGeoCodingManagerEngine* self, QEvent* event);
void QGeoCodingManagerEngine_OnCustomEvent(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_SuperCustomEvent(QGeoCodingManagerEngine* self, QEvent* event);
void QGeoCodingManagerEngine_ConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
void QGeoCodingManagerEngine_OnConnectNotify(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_SuperConnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
void QGeoCodingManagerEngine_DisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
void QGeoCodingManagerEngine_OnDisconnectNotify(QGeoCodingManagerEngine* self, intptr_t slot);
void QGeoCodingManagerEngine_SuperDisconnectNotify(QGeoCodingManagerEngine* self, const QMetaMethod* signal);
QObject* QGeoCodingManagerEngine_Sender(const QGeoCodingManagerEngine* self);
void QGeoCodingManagerEngine_OnSender(const QGeoCodingManagerEngine* self, intptr_t slot);
QObject* QGeoCodingManagerEngine_SuperSender(const QGeoCodingManagerEngine* self);
int QGeoCodingManagerEngine_SenderSignalIndex(const QGeoCodingManagerEngine* self);
void QGeoCodingManagerEngine_OnSenderSignalIndex(const QGeoCodingManagerEngine* self, intptr_t slot);
int QGeoCodingManagerEngine_SuperSenderSignalIndex(const QGeoCodingManagerEngine* self);
int QGeoCodingManagerEngine_Receivers(const QGeoCodingManagerEngine* self, const char* signal);
void QGeoCodingManagerEngine_OnReceivers(const QGeoCodingManagerEngine* self, intptr_t slot);
int QGeoCodingManagerEngine_SuperReceivers(const QGeoCodingManagerEngine* self, const char* signal);
bool QGeoCodingManagerEngine_IsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal);
void QGeoCodingManagerEngine_OnIsSignalConnected(const QGeoCodingManagerEngine* self, intptr_t slot);
bool QGeoCodingManagerEngine_SuperIsSignalConnected(const QGeoCodingManagerEngine* self, const QMetaMethod* signal);
void QGeoCodingManagerEngine_Delete(QGeoCodingManagerEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
