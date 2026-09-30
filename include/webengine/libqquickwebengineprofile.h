#pragma once
#ifndef WEBENGINE_LIBQQUICKWEBENGINEPROFILE_H
#define WEBENGINE_LIBQQUICKWEBENGINEPROFILE_H

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
typedef struct QQuickWebEngineDownloadRequest QQuickWebEngineDownloadRequest;
typedef struct QQuickWebEngineProfile QQuickWebEngineProfile;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QWebEngineClientCertificateStore QWebEngineClientCertificateStore;
typedef struct QWebEngineClientHints QWebEngineClientHints;
typedef struct QWebEngineCookieStore QWebEngineCookieStore;
typedef struct QWebEngineNotification QWebEngineNotification;
typedef struct QWebEnginePermission QWebEnginePermission;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
typedef struct QWebEngineUrlSchemeHandler QWebEngineUrlSchemeHandler;
#endif

QQuickWebEngineProfile* QQuickWebEngineProfile_new();
QQuickWebEngineProfile* QQuickWebEngineProfile_new2(QObject* parent);
QMetaObject* QQuickWebEngineProfile_MetaObject(const QQuickWebEngineProfile* self);
void* QQuickWebEngineProfile_Metacast(QQuickWebEngineProfile* self, const char* param1);
int QQuickWebEngineProfile_Metacall(QQuickWebEngineProfile* self, int param1, int param2, void** param3);
libqt_string QQuickWebEngineProfile_Tr(const char* s);
libqt_string QQuickWebEngineProfile_StorageName(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetStorageName(QQuickWebEngineProfile* self, const libqt_string name);
bool QQuickWebEngineProfile_IsOffTheRecord(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetOffTheRecord(QQuickWebEngineProfile* self, bool offTheRecord);
libqt_string QQuickWebEngineProfile_PersistentStoragePath(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetPersistentStoragePath(QQuickWebEngineProfile* self, const libqt_string path);
libqt_string QQuickWebEngineProfile_CachePath(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetCachePath(QQuickWebEngineProfile* self, const libqt_string path);
libqt_string QQuickWebEngineProfile_HttpUserAgent(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetHttpUserAgent(QQuickWebEngineProfile* self, const libqt_string userAgent);
int QQuickWebEngineProfile_HttpCacheType(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetHttpCacheType(QQuickWebEngineProfile* self, int httpCacheType);
int QQuickWebEngineProfile_PersistentCookiesPolicy(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetPersistentCookiesPolicy(QQuickWebEngineProfile* self, int persistentCookiesPolicy);
uint8_t QQuickWebEngineProfile_PersistentPermissionsPolicy(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetPersistentPermissionsPolicy(QQuickWebEngineProfile* self, uint8_t persistentPermissionsPolicy);
int QQuickWebEngineProfile_HttpCacheMaximumSize(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetHttpCacheMaximumSize(QQuickWebEngineProfile* self, int maxSize);
libqt_string QQuickWebEngineProfile_HttpAcceptLanguage(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetHttpAcceptLanguage(QQuickWebEngineProfile* self, const libqt_string httpAcceptLanguage);
QWebEngineCookieStore* QQuickWebEngineProfile_CookieStore(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetUrlRequestInterceptor(QQuickWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor);
QWebEngineUrlSchemeHandler* QQuickWebEngineProfile_UrlSchemeHandler(const QQuickWebEngineProfile* self, const libqt_string param1);
void QQuickWebEngineProfile_InstallUrlSchemeHandler(QQuickWebEngineProfile* self, const libqt_string scheme, QWebEngineUrlSchemeHandler* param2);
void QQuickWebEngineProfile_RemoveUrlScheme(QQuickWebEngineProfile* self, const libqt_string scheme);
void QQuickWebEngineProfile_RemoveUrlSchemeHandler(QQuickWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1);
void QQuickWebEngineProfile_RemoveAllUrlSchemeHandlers(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_ClearHttpCache(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetSpellCheckLanguages(QQuickWebEngineProfile* self, const libqt_list /* of libqt_string */ languages);
libqt_list /* of libqt_string */ QQuickWebEngineProfile_SpellCheckLanguages(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetSpellCheckEnabled(QQuickWebEngineProfile* self, bool enabled);
bool QQuickWebEngineProfile_IsSpellCheckEnabled(const QQuickWebEngineProfile* self);
libqt_string QQuickWebEngineProfile_DownloadPath(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetDownloadPath(QQuickWebEngineProfile* self, const libqt_string path);
bool QQuickWebEngineProfile_IsPushServiceEnabled(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_SetPushServiceEnabled(QQuickWebEngineProfile* self, bool enable);
QWebEngineClientCertificateStore* QQuickWebEngineProfile_ClientCertificateStore(QQuickWebEngineProfile* self);
QWebEngineClientHints* QQuickWebEngineProfile_ClientHints(const QQuickWebEngineProfile* self);
QWebEnginePermission* QQuickWebEngineProfile_QueryPermission(const QQuickWebEngineProfile* self, const QUrl* securityOrigin, uint8_t permissionType);
libqt_list /* of QWebEnginePermission* */ QQuickWebEngineProfile_ListAllPermissions(const QQuickWebEngineProfile* self);
libqt_list /* of QWebEnginePermission* */ QQuickWebEngineProfile_ListPermissionsForOrigin(const QQuickWebEngineProfile* self, const QUrl* securityOrigin);
libqt_list /* of QWebEnginePermission* */ QQuickWebEngineProfile_ListPermissionsForPermissionType(const QQuickWebEngineProfile* self, uint8_t permissionType);
QQuickWebEngineProfile* QQuickWebEngineProfile_DefaultProfile();
void QQuickWebEngineProfile_StorageNameChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_StorageNameChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_OffTheRecordChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_OffTheRecordChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_PersistentStoragePathChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_PersistentStoragePathChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_CachePathChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_CachePathChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_HttpUserAgentChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_HttpUserAgentChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_HttpCacheTypeChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_HttpCacheTypeChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_PersistentCookiesPolicyChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_PersistentCookiesPolicyChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_HttpCacheMaximumSizeChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_HttpCacheMaximumSizeChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_HttpAcceptLanguageChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_HttpAcceptLanguageChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SpellCheckLanguagesChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_SpellCheckLanguagesChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SpellCheckEnabledChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_SpellCheckEnabledChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_DownloadPathChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_DownloadPathChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_PushServiceEnabledChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_PushServiceEnabledChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_ClearHttpCacheCompleted(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_ClearHttpCacheCompleted(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_PersistentPermissionsPolicyChanged(QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_Connect_PersistentPermissionsPolicyChanged(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_DownloadRequested(QQuickWebEngineProfile* self, QQuickWebEngineDownloadRequest* download);
void QQuickWebEngineProfile_Connect_DownloadRequested(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_DownloadFinished(QQuickWebEngineProfile* self, QQuickWebEngineDownloadRequest* download);
void QQuickWebEngineProfile_Connect_DownloadFinished(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_PresentNotification(QQuickWebEngineProfile* self, QWebEngineNotification* notification);
void QQuickWebEngineProfile_Connect_PresentNotification(QQuickWebEngineProfile* self, intptr_t slot);
libqt_string QQuickWebEngineProfile_Tr2(const char* s, const char* c);
libqt_string QQuickWebEngineProfile_Tr3(const char* s, const char* c, int n);
void QQuickWebEngineProfile_OnMetaObject(const QQuickWebEngineProfile* self, intptr_t slot);
QMetaObject* QQuickWebEngineProfile_SuperMetaObject(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_OnMetacast(QQuickWebEngineProfile* self, intptr_t slot);
void* QQuickWebEngineProfile_SuperMetacast(QQuickWebEngineProfile* self, const char* param1);
void QQuickWebEngineProfile_OnMetacall(QQuickWebEngineProfile* self, intptr_t slot);
int QQuickWebEngineProfile_SuperMetacall(QQuickWebEngineProfile* self, int param1, int param2, void** param3);
bool QQuickWebEngineProfile_Event(QQuickWebEngineProfile* self, QEvent* event);
void QQuickWebEngineProfile_OnEvent(QQuickWebEngineProfile* self, intptr_t slot);
bool QQuickWebEngineProfile_SuperEvent(QQuickWebEngineProfile* self, QEvent* event);
bool QQuickWebEngineProfile_EventFilter(QQuickWebEngineProfile* self, QObject* watched, QEvent* event);
void QQuickWebEngineProfile_OnEventFilter(QQuickWebEngineProfile* self, intptr_t slot);
bool QQuickWebEngineProfile_SuperEventFilter(QQuickWebEngineProfile* self, QObject* watched, QEvent* event);
void QQuickWebEngineProfile_TimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event);
void QQuickWebEngineProfile_OnTimerEvent(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SuperTimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event);
void QQuickWebEngineProfile_ChildEvent(QQuickWebEngineProfile* self, QChildEvent* event);
void QQuickWebEngineProfile_OnChildEvent(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SuperChildEvent(QQuickWebEngineProfile* self, QChildEvent* event);
void QQuickWebEngineProfile_CustomEvent(QQuickWebEngineProfile* self, QEvent* event);
void QQuickWebEngineProfile_OnCustomEvent(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SuperCustomEvent(QQuickWebEngineProfile* self, QEvent* event);
void QQuickWebEngineProfile_ConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
void QQuickWebEngineProfile_OnConnectNotify(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SuperConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
void QQuickWebEngineProfile_DisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
void QQuickWebEngineProfile_OnDisconnectNotify(QQuickWebEngineProfile* self, intptr_t slot);
void QQuickWebEngineProfile_SuperDisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal);
QObject* QQuickWebEngineProfile_Sender(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_OnSender(const QQuickWebEngineProfile* self, intptr_t slot);
QObject* QQuickWebEngineProfile_SuperSender(const QQuickWebEngineProfile* self);
int QQuickWebEngineProfile_SenderSignalIndex(const QQuickWebEngineProfile* self);
void QQuickWebEngineProfile_OnSenderSignalIndex(const QQuickWebEngineProfile* self, intptr_t slot);
int QQuickWebEngineProfile_SuperSenderSignalIndex(const QQuickWebEngineProfile* self);
int QQuickWebEngineProfile_Receivers(const QQuickWebEngineProfile* self, const char* signal);
void QQuickWebEngineProfile_OnReceivers(const QQuickWebEngineProfile* self, intptr_t slot);
int QQuickWebEngineProfile_SuperReceivers(const QQuickWebEngineProfile* self, const char* signal);
bool QQuickWebEngineProfile_IsSignalConnected(const QQuickWebEngineProfile* self, const QMetaMethod* signal);
void QQuickWebEngineProfile_OnIsSignalConnected(const QQuickWebEngineProfile* self, intptr_t slot);
bool QQuickWebEngineProfile_SuperIsSignalConnected(const QQuickWebEngineProfile* self, const QMetaMethod* signal);
void QQuickWebEngineProfile_Delete(QQuickWebEngineProfile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
