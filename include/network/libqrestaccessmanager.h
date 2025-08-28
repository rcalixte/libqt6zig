#pragma once
#ifndef SRC_NETWORKC_LIBQRESTACCESSMANAGER_H
#define SRC_NETWORKC_LIBQRESTACCESSMANAGER_H

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
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QIODevice QIODevice;
typedef struct QJsonDocument QJsonDocument;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QRestAccessManager QRestAccessManager;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QRestAccessManager* QRestAccessManager_new(QNetworkAccessManager* manager);
QRestAccessManager* QRestAccessManager_new2(QNetworkAccessManager* manager, QObject* parent);
QMetaObject* QRestAccessManager_MetaObject(const QRestAccessManager* self);
void* QRestAccessManager_Metacast(QRestAccessManager* self, const char* param1);
int QRestAccessManager_Metacall(QRestAccessManager* self, int param1, int param2, void** param3);
libqt_string QRestAccessManager_Tr(const char* s);
QNetworkAccessManager* QRestAccessManager_NetworkAccessManager(const QRestAccessManager* self);
QNetworkReply* QRestAccessManager_DeleteResource(QRestAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QRestAccessManager_Head(QRestAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QRestAccessManager_Get(QRestAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QRestAccessManager_Get2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Get3(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Get4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Post(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Post2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map /* of libqt_string to QVariant* */ data);
QNetworkReply* QRestAccessManager_Post3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Post4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_Post5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Put(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Put2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map /* of libqt_string to QVariant* */ data);
QNetworkReply* QRestAccessManager_Put3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Put4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data);
QNetworkReply* QRestAccessManager_Put5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_Patch(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data);
QNetworkReply* QRestAccessManager_Patch2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map /* of libqt_string to QVariant* */ data);
QNetworkReply* QRestAccessManager_Patch3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QRestAccessManager_Patch4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QRestAccessManager_SendCustomRequest(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, const libqt_string data);
QNetworkReply* QRestAccessManager_SendCustomRequest2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QIODevice* data);
QNetworkReply* QRestAccessManager_SendCustomRequest3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QHttpMultiPart* data);
libqt_string QRestAccessManager_Tr2(const char* s, const char* c);
libqt_string QRestAccessManager_Tr3(const char* s, const char* c, int n);
void QRestAccessManager_OnMetacall(QRestAccessManager* self, intptr_t slot);
int QRestAccessManager_QBaseMetacall(QRestAccessManager* self, int param1, int param2, void** param3);
bool QRestAccessManager_Event(QRestAccessManager* self, QEvent* event);
void QRestAccessManager_OnEvent(QRestAccessManager* self, intptr_t slot);
bool QRestAccessManager_QBaseEvent(QRestAccessManager* self, QEvent* event);
bool QRestAccessManager_EventFilter(QRestAccessManager* self, QObject* watched, QEvent* event);
void QRestAccessManager_OnEventFilter(QRestAccessManager* self, intptr_t slot);
bool QRestAccessManager_QBaseEventFilter(QRestAccessManager* self, QObject* watched, QEvent* event);
void QRestAccessManager_TimerEvent(QRestAccessManager* self, QTimerEvent* event);
void QRestAccessManager_OnTimerEvent(QRestAccessManager* self, intptr_t slot);
void QRestAccessManager_QBaseTimerEvent(QRestAccessManager* self, QTimerEvent* event);
void QRestAccessManager_ChildEvent(QRestAccessManager* self, QChildEvent* event);
void QRestAccessManager_OnChildEvent(QRestAccessManager* self, intptr_t slot);
void QRestAccessManager_QBaseChildEvent(QRestAccessManager* self, QChildEvent* event);
void QRestAccessManager_CustomEvent(QRestAccessManager* self, QEvent* event);
void QRestAccessManager_OnCustomEvent(QRestAccessManager* self, intptr_t slot);
void QRestAccessManager_QBaseCustomEvent(QRestAccessManager* self, QEvent* event);
void QRestAccessManager_ConnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
void QRestAccessManager_OnConnectNotify(QRestAccessManager* self, intptr_t slot);
void QRestAccessManager_QBaseConnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
void QRestAccessManager_DisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
void QRestAccessManager_OnDisconnectNotify(QRestAccessManager* self, intptr_t slot);
void QRestAccessManager_QBaseDisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal);
QObject* QRestAccessManager_Sender(const QRestAccessManager* self);
void QRestAccessManager_OnSender(const QRestAccessManager* self, intptr_t slot);
QObject* QRestAccessManager_QBaseSender(const QRestAccessManager* self);
int QRestAccessManager_SenderSignalIndex(const QRestAccessManager* self);
void QRestAccessManager_OnSenderSignalIndex(const QRestAccessManager* self, intptr_t slot);
int QRestAccessManager_QBaseSenderSignalIndex(const QRestAccessManager* self);
int QRestAccessManager_Receivers(const QRestAccessManager* self, const char* signal);
void QRestAccessManager_OnReceivers(const QRestAccessManager* self, intptr_t slot);
int QRestAccessManager_QBaseReceivers(const QRestAccessManager* self, const char* signal);
bool QRestAccessManager_IsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal);
void QRestAccessManager_OnIsSignalConnected(const QRestAccessManager* self, intptr_t slot);
bool QRestAccessManager_QBaseIsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal);
void QRestAccessManager_Delete(QRestAccessManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
