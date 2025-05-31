#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEPROFILE_H
#define SRC_WEBENGINEC_LIBQWEBENGINEPROFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebEngineClientCertificateStore QWebEngineClientCertificateStore;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineDownloadRequest QWebEngineDownloadRequest;
typedef struct QWebEngineProfile QWebEngineProfile;
typedef struct QWebEngineScriptCollection QWebEngineScriptCollection;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
typedef struct QWebEngineUrlSchemeHandler QWebEngineUrlSchemeHandler;
#endif

#ifdef __cplusplus
typedef QWebEngineProfile::HttpCacheType HttpCacheType;                     // C++ enum
typedef QWebEngineProfile::PersistentCookiesPolicy PersistentCookiesPolicy; // C++ enum
#else
typedef int HttpCacheType;           // C ABI enum
typedef int PersistentCookiesPolicy; // C ABI enum
#endif

QWebEngineProfile* QWebEngineProfile_new();
QWebEngineProfile* QWebEngineProfile_new2(const libqt_string name);
QWebEngineProfile* QWebEngineProfile_new3(QObject* parent);
QWebEngineProfile* QWebEngineProfile_new4(const libqt_string name, QObject* parent);
QMetaObject* QWebEngineProfile_MetaObject(const QWebEngineProfile* self);
void* QWebEngineProfile_Metacast(QWebEngineProfile* self, const char* param1);
int QWebEngineProfile_Metacall(QWebEngineProfile* self, int param1, int param2, void** param3);
void QWebEngineProfile_OnMetacall(QWebEngineProfile* self, intptr_t slot);
int QWebEngineProfile_QBaseMetacall(QWebEngineProfile* self, int param1, int param2, void** param3);
libqt_string QWebEngineProfile_Tr(const char* s);
libqt_string QWebEngineProfile_StorageName(const QWebEngineProfile* self);
bool QWebEngineProfile_IsOffTheRecord(const QWebEngineProfile* self);
libqt_string QWebEngineProfile_PersistentStoragePath(const QWebEngineProfile* self);
void QWebEngineProfile_SetPersistentStoragePath(QWebEngineProfile* self, const libqt_string path);
libqt_string QWebEngineProfile_CachePath(const QWebEngineProfile* self);
void QWebEngineProfile_SetCachePath(QWebEngineProfile* self, const libqt_string path);
libqt_string QWebEngineProfile_HttpUserAgent(const QWebEngineProfile* self);
void QWebEngineProfile_SetHttpUserAgent(QWebEngineProfile* self, const libqt_string userAgent);
int QWebEngineProfile_HttpCacheType(const QWebEngineProfile* self);
void QWebEngineProfile_SetHttpCacheType(QWebEngineProfile* self, int httpCacheType);
void QWebEngineProfile_SetHttpAcceptLanguage(QWebEngineProfile* self, const libqt_string httpAcceptLanguage);
libqt_string QWebEngineProfile_HttpAcceptLanguage(const QWebEngineProfile* self);
int QWebEngineProfile_PersistentCookiesPolicy(const QWebEngineProfile* self);
void QWebEngineProfile_SetPersistentCookiesPolicy(QWebEngineProfile* self, int persistentCookiesPolicy);
int QWebEngineProfile_HttpCacheMaximumSize(const QWebEngineProfile* self);
void QWebEngineProfile_SetHttpCacheMaximumSize(QWebEngineProfile* self, int maxSize);
QWebEngineCookieStore* QWebEngineProfile_CookieStore(QWebEngineProfile* self);
void QWebEngineProfile_SetUrlRequestInterceptor(QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor);
void QWebEngineProfile_ClearAllVisitedLinks(QWebEngineProfile* self);
void QWebEngineProfile_ClearVisitedLinks(QWebEngineProfile* self, const libqt_list /* of QUrl* */ urls);
bool QWebEngineProfile_VisitedLinksContainsUrl(const QWebEngineProfile* self, const QUrl* url);
QWebEngineSettings* QWebEngineProfile_Settings(const QWebEngineProfile* self);
QWebEngineScriptCollection* QWebEngineProfile_Scripts(const QWebEngineProfile* self);
QWebEngineUrlSchemeHandler* QWebEngineProfile_UrlSchemeHandler(const QWebEngineProfile* self, const libqt_string param1);
void QWebEngineProfile_InstallUrlSchemeHandler(QWebEngineProfile* self, const libqt_string scheme, QWebEngineUrlSchemeHandler* param2);
void QWebEngineProfile_RemoveUrlScheme(QWebEngineProfile* self, const libqt_string scheme);
void QWebEngineProfile_RemoveUrlSchemeHandler(QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1);
void QWebEngineProfile_RemoveAllUrlSchemeHandlers(QWebEngineProfile* self);
void QWebEngineProfile_ClearHttpCache(QWebEngineProfile* self);
void QWebEngineProfile_SetSpellCheckLanguages(QWebEngineProfile* self, const libqt_list /* of libqt_string */ languages);
libqt_list /* of libqt_string */ QWebEngineProfile_SpellCheckLanguages(const QWebEngineProfile* self);
void QWebEngineProfile_SetSpellCheckEnabled(QWebEngineProfile* self, bool enabled);
bool QWebEngineProfile_IsSpellCheckEnabled(const QWebEngineProfile* self);
libqt_string QWebEngineProfile_DownloadPath(const QWebEngineProfile* self);
void QWebEngineProfile_SetDownloadPath(QWebEngineProfile* self, const libqt_string path);
QWebEngineClientCertificateStore* QWebEngineProfile_ClientCertificateStore(QWebEngineProfile* self);
QWebEngineProfile* QWebEngineProfile_DefaultProfile();
void QWebEngineProfile_DownloadRequested(QWebEngineProfile* self, QWebEngineDownloadRequest* download);
void QWebEngineProfile_Connect_DownloadRequested(QWebEngineProfile* self, intptr_t slot);
libqt_string QWebEngineProfile_Tr2(const char* s, const char* c);
libqt_string QWebEngineProfile_Tr3(const char* s, const char* c, int n);
bool QWebEngineProfile_Event(QWebEngineProfile* self, QEvent* event);
void QWebEngineProfile_OnEvent(QWebEngineProfile* self, intptr_t slot);
bool QWebEngineProfile_QBaseEvent(QWebEngineProfile* self, QEvent* event);
bool QWebEngineProfile_EventFilter(QWebEngineProfile* self, QObject* watched, QEvent* event);
void QWebEngineProfile_OnEventFilter(QWebEngineProfile* self, intptr_t slot);
bool QWebEngineProfile_QBaseEventFilter(QWebEngineProfile* self, QObject* watched, QEvent* event);
void QWebEngineProfile_TimerEvent(QWebEngineProfile* self, QTimerEvent* event);
void QWebEngineProfile_OnTimerEvent(QWebEngineProfile* self, intptr_t slot);
void QWebEngineProfile_QBaseTimerEvent(QWebEngineProfile* self, QTimerEvent* event);
void QWebEngineProfile_ChildEvent(QWebEngineProfile* self, QChildEvent* event);
void QWebEngineProfile_OnChildEvent(QWebEngineProfile* self, intptr_t slot);
void QWebEngineProfile_QBaseChildEvent(QWebEngineProfile* self, QChildEvent* event);
void QWebEngineProfile_CustomEvent(QWebEngineProfile* self, QEvent* event);
void QWebEngineProfile_OnCustomEvent(QWebEngineProfile* self, intptr_t slot);
void QWebEngineProfile_QBaseCustomEvent(QWebEngineProfile* self, QEvent* event);
void QWebEngineProfile_ConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
void QWebEngineProfile_OnConnectNotify(QWebEngineProfile* self, intptr_t slot);
void QWebEngineProfile_QBaseConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
void QWebEngineProfile_DisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
void QWebEngineProfile_OnDisconnectNotify(QWebEngineProfile* self, intptr_t slot);
void QWebEngineProfile_QBaseDisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal);
QObject* QWebEngineProfile_Sender(const QWebEngineProfile* self);
void QWebEngineProfile_OnSender(const QWebEngineProfile* self, intptr_t slot);
QObject* QWebEngineProfile_QBaseSender(const QWebEngineProfile* self);
int QWebEngineProfile_SenderSignalIndex(const QWebEngineProfile* self);
void QWebEngineProfile_OnSenderSignalIndex(const QWebEngineProfile* self, intptr_t slot);
int QWebEngineProfile_QBaseSenderSignalIndex(const QWebEngineProfile* self);
int QWebEngineProfile_Receivers(const QWebEngineProfile* self, const char* signal);
void QWebEngineProfile_OnReceivers(const QWebEngineProfile* self, intptr_t slot);
int QWebEngineProfile_QBaseReceivers(const QWebEngineProfile* self, const char* signal);
bool QWebEngineProfile_IsSignalConnected(const QWebEngineProfile* self, const QMetaMethod* signal);
void QWebEngineProfile_OnIsSignalConnected(const QWebEngineProfile* self, intptr_t slot);
bool QWebEngineProfile_QBaseIsSignalConnected(const QWebEngineProfile* self, const QMetaMethod* signal);
void QWebEngineProfile_Delete(QWebEngineProfile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
