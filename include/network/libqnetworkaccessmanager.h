#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKACCESSMANAGER_H
#define SRC_NETWORKC_LIBQNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QAuthenticator QAuthenticator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHstsPolicy QHstsPolicy;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkCookieJar QNetworkCookieJar;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkProxyFactory QNetworkProxyFactory;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QTimerEvent QTimerEvent;
#endif

QNetworkAccessManager* QNetworkAccessManager_new();
QNetworkAccessManager* QNetworkAccessManager_new2(QObject* parent);
QMetaObject* QNetworkAccessManager_MetaObject(const QNetworkAccessManager* self);
void* QNetworkAccessManager_Metacast(QNetworkAccessManager* self, const char* param1);
int QNetworkAccessManager_Metacall(QNetworkAccessManager* self, int param1, int param2, void** param3);
void QNetworkAccessManager_OnMetacall(QNetworkAccessManager* self, intptr_t slot);
int QNetworkAccessManager_QBaseMetacall(QNetworkAccessManager* self, int param1, int param2, void** param3);
libqt_string QNetworkAccessManager_Tr(const char* s);
libqt_list /* of libqt_string */ QNetworkAccessManager_SupportedSchemes(const QNetworkAccessManager* self);
void QNetworkAccessManager_OnSupportedSchemes(const QNetworkAccessManager* self, intptr_t slot);
libqt_list /* of libqt_string */ QNetworkAccessManager_QBaseSupportedSchemes(const QNetworkAccessManager* self);
void QNetworkAccessManager_ClearAccessCache(QNetworkAccessManager* self);
void QNetworkAccessManager_ClearConnectionCache(QNetworkAccessManager* self);
QNetworkProxy* QNetworkAccessManager_Proxy(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetProxy(QNetworkAccessManager* self, const QNetworkProxy* proxy);
QNetworkProxyFactory* QNetworkAccessManager_ProxyFactory(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetProxyFactory(QNetworkAccessManager* self, QNetworkProxyFactory* factory);
QAbstractNetworkCache* QNetworkAccessManager_Cache(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetCache(QNetworkAccessManager* self, QAbstractNetworkCache* cache);
QNetworkCookieJar* QNetworkAccessManager_CookieJar(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetCookieJar(QNetworkAccessManager* self, QNetworkCookieJar* cookieJar);
void QNetworkAccessManager_SetStrictTransportSecurityEnabled(QNetworkAccessManager* self, bool enabled);
bool QNetworkAccessManager_IsStrictTransportSecurityEnabled(const QNetworkAccessManager* self);
void QNetworkAccessManager_EnableStrictTransportSecurityStore(QNetworkAccessManager* self, bool enabled);
bool QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(const QNetworkAccessManager* self);
void QNetworkAccessManager_AddStrictTransportSecurityHosts(QNetworkAccessManager* self, const libqt_list /* of QHstsPolicy* */ knownHosts);
libqt_list /* of QHstsPolicy* */ QNetworkAccessManager_StrictTransportSecurityHosts(const QNetworkAccessManager* self);
QNetworkReply* QNetworkAccessManager_Head(QNetworkAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QNetworkAccessManager_Get(QNetworkAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QNetworkAccessManager_Get2(QNetworkAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QNetworkAccessManager_Get3(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QNetworkAccessManager_Post(QNetworkAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QNetworkAccessManager_Post2(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QNetworkAccessManager_Put(QNetworkAccessManager* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* QNetworkAccessManager_Put2(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string data);
QNetworkReply* QNetworkAccessManager_DeleteResource(QNetworkAccessManager* self, const QNetworkRequest* request);
QNetworkReply* QNetworkAccessManager_SendCustomRequest(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb);
QNetworkReply* QNetworkAccessManager_SendCustomRequest2(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb, const libqt_string data);
QNetworkReply* QNetworkAccessManager_Post4(QNetworkAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* multiPart);
QNetworkReply* QNetworkAccessManager_Put4(QNetworkAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* multiPart);
QNetworkReply* QNetworkAccessManager_SendCustomRequest3(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb, QHttpMultiPart* multiPart);
void QNetworkAccessManager_ConnectToHostEncrypted(QNetworkAccessManager* self, const libqt_string hostName);
void QNetworkAccessManager_ConnectToHostEncrypted2(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port, const QSslConfiguration* sslConfiguration, const libqt_string peerName);
void QNetworkAccessManager_ConnectToHost(QNetworkAccessManager* self, const libqt_string hostName);
void QNetworkAccessManager_SetRedirectPolicy(QNetworkAccessManager* self, int policy);
int QNetworkAccessManager_RedirectPolicy(const QNetworkAccessManager* self);
bool QNetworkAccessManager_AutoDeleteReplies(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetAutoDeleteReplies(QNetworkAccessManager* self, bool autoDelete);
int QNetworkAccessManager_TransferTimeout(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetTransferTimeout(QNetworkAccessManager* self, int timeout);
void QNetworkAccessManager_SetTransferTimeout2(QNetworkAccessManager* self);
void QNetworkAccessManager_ProxyAuthenticationRequired(QNetworkAccessManager* self, const QNetworkProxy* proxy, QAuthenticator* authenticator);
void QNetworkAccessManager_Connect_ProxyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_AuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator);
void QNetworkAccessManager_Connect_AuthenticationRequired(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_Finished(QNetworkAccessManager* self, QNetworkReply* reply);
void QNetworkAccessManager_Connect_Finished(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_Encrypted(QNetworkAccessManager* self, QNetworkReply* reply);
void QNetworkAccessManager_Connect_Encrypted(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_SslErrors(QNetworkAccessManager* self, QNetworkReply* reply, const libqt_list /* of QSslError* */ errors);
void QNetworkAccessManager_Connect_SslErrors(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator);
void QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot);
QNetworkReply* QNetworkAccessManager_CreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
void QNetworkAccessManager_OnCreateRequest(QNetworkAccessManager* self, intptr_t slot);
QNetworkReply* QNetworkAccessManager_QBaseCreateRequest(QNetworkAccessManager* self, int op, const QNetworkRequest* request, QIODevice* outgoingData);
libqt_string QNetworkAccessManager_Tr2(const char* s, const char* c);
libqt_string QNetworkAccessManager_Tr3(const char* s, const char* c, int n);
void QNetworkAccessManager_EnableStrictTransportSecurityStore2(QNetworkAccessManager* self, bool enabled, const libqt_string storeDir);
QNetworkReply* QNetworkAccessManager_SendCustomRequest32(QNetworkAccessManager* self, const QNetworkRequest* request, const libqt_string verb, QIODevice* data);
void QNetworkAccessManager_ConnectToHostEncrypted22(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port);
void QNetworkAccessManager_ConnectToHostEncrypted3(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port, const QSslConfiguration* sslConfiguration);
void QNetworkAccessManager_ConnectToHost2(QNetworkAccessManager* self, const libqt_string hostName, uint16_t port);
bool QNetworkAccessManager_Event(QNetworkAccessManager* self, QEvent* event);
void QNetworkAccessManager_OnEvent(QNetworkAccessManager* self, intptr_t slot);
bool QNetworkAccessManager_QBaseEvent(QNetworkAccessManager* self, QEvent* event);
bool QNetworkAccessManager_EventFilter(QNetworkAccessManager* self, QObject* watched, QEvent* event);
void QNetworkAccessManager_OnEventFilter(QNetworkAccessManager* self, intptr_t slot);
bool QNetworkAccessManager_QBaseEventFilter(QNetworkAccessManager* self, QObject* watched, QEvent* event);
void QNetworkAccessManager_TimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
void QNetworkAccessManager_OnTimerEvent(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_QBaseTimerEvent(QNetworkAccessManager* self, QTimerEvent* event);
void QNetworkAccessManager_ChildEvent(QNetworkAccessManager* self, QChildEvent* event);
void QNetworkAccessManager_OnChildEvent(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_QBaseChildEvent(QNetworkAccessManager* self, QChildEvent* event);
void QNetworkAccessManager_CustomEvent(QNetworkAccessManager* self, QEvent* event);
void QNetworkAccessManager_OnCustomEvent(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_QBaseCustomEvent(QNetworkAccessManager* self, QEvent* event);
void QNetworkAccessManager_ConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
void QNetworkAccessManager_OnConnectNotify(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_QBaseConnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
void QNetworkAccessManager_DisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
void QNetworkAccessManager_OnDisconnectNotify(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_QBaseDisconnectNotify(QNetworkAccessManager* self, const QMetaMethod* signal);
libqt_list /* of libqt_string */ QNetworkAccessManager_SupportedSchemesImplementation(const QNetworkAccessManager* self);
void QNetworkAccessManager_OnSupportedSchemesImplementation(const QNetworkAccessManager* self, intptr_t slot);
libqt_list /* of libqt_string */ QNetworkAccessManager_QBaseSupportedSchemesImplementation(const QNetworkAccessManager* self);
QObject* QNetworkAccessManager_Sender(const QNetworkAccessManager* self);
void QNetworkAccessManager_OnSender(const QNetworkAccessManager* self, intptr_t slot);
QObject* QNetworkAccessManager_QBaseSender(const QNetworkAccessManager* self);
int QNetworkAccessManager_SenderSignalIndex(const QNetworkAccessManager* self);
void QNetworkAccessManager_OnSenderSignalIndex(const QNetworkAccessManager* self, intptr_t slot);
int QNetworkAccessManager_QBaseSenderSignalIndex(const QNetworkAccessManager* self);
int QNetworkAccessManager_Receivers(const QNetworkAccessManager* self, const char* signal);
void QNetworkAccessManager_OnReceivers(const QNetworkAccessManager* self, intptr_t slot);
int QNetworkAccessManager_QBaseReceivers(const QNetworkAccessManager* self, const char* signal);
bool QNetworkAccessManager_IsSignalConnected(const QNetworkAccessManager* self, const QMetaMethod* signal);
void QNetworkAccessManager_OnIsSignalConnected(const QNetworkAccessManager* self, intptr_t slot);
bool QNetworkAccessManager_QBaseIsSignalConnected(const QNetworkAccessManager* self, const QMetaMethod* signal);
void QNetworkAccessManager_Delete(QNetworkAccessManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
