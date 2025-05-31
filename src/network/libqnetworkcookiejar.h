#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKCOOKIEJAR_H
#define SRC_NETWORKC_LIBQNETWORKCOOKIEJAR_H

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
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QNetworkCookieJar QNetworkCookieJar;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
#endif

QNetworkCookieJar* QNetworkCookieJar_new();
QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent);
QMetaObject* QNetworkCookieJar_MetaObject(const QNetworkCookieJar* self);
void* QNetworkCookieJar_Metacast(QNetworkCookieJar* self, const char* param1);
int QNetworkCookieJar_Metacall(QNetworkCookieJar* self, int param1, int param2, void** param3);
void QNetworkCookieJar_OnMetacall(QNetworkCookieJar* self, intptr_t slot);
int QNetworkCookieJar_QBaseMetacall(QNetworkCookieJar* self, int param1, int param2, void** param3);
libqt_string QNetworkCookieJar_Tr(const char* s);
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, const QUrl* url);
void QNetworkCookieJar_OnCookiesForUrl(const QNetworkCookieJar* self, intptr_t slot);
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_QBaseCookiesForUrl(const QNetworkCookieJar* self, const QUrl* url);
bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList, const QUrl* url);
void QNetworkCookieJar_OnSetCookiesFromUrl(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseSetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList, const QUrl* url);
bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
void QNetworkCookieJar_OnInsertCookie(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseInsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
void QNetworkCookieJar_OnUpdateCookie(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseUpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
void QNetworkCookieJar_OnDeleteCookie(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseDeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
void QNetworkCookieJar_OnValidateCookie(const QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
libqt_string QNetworkCookieJar_Tr2(const char* s, const char* c);
libqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n);
bool QNetworkCookieJar_Event(QNetworkCookieJar* self, QEvent* event);
void QNetworkCookieJar_OnEvent(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseEvent(QNetworkCookieJar* self, QEvent* event);
bool QNetworkCookieJar_EventFilter(QNetworkCookieJar* self, QObject* watched, QEvent* event);
void QNetworkCookieJar_OnEventFilter(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseEventFilter(QNetworkCookieJar* self, QObject* watched, QEvent* event);
void QNetworkCookieJar_TimerEvent(QNetworkCookieJar* self, QTimerEvent* event);
void QNetworkCookieJar_OnTimerEvent(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseTimerEvent(QNetworkCookieJar* self, QTimerEvent* event);
void QNetworkCookieJar_ChildEvent(QNetworkCookieJar* self, QChildEvent* event);
void QNetworkCookieJar_OnChildEvent(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseChildEvent(QNetworkCookieJar* self, QChildEvent* event);
void QNetworkCookieJar_CustomEvent(QNetworkCookieJar* self, QEvent* event);
void QNetworkCookieJar_OnCustomEvent(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseCustomEvent(QNetworkCookieJar* self, QEvent* event);
void QNetworkCookieJar_ConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal);
void QNetworkCookieJar_OnConnectNotify(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseConnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal);
void QNetworkCookieJar_DisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal);
void QNetworkCookieJar_OnDisconnectNotify(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseDisconnectNotify(QNetworkCookieJar* self, const QMetaMethod* signal);
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_AllCookies(const QNetworkCookieJar* self);
void QNetworkCookieJar_OnAllCookies(const QNetworkCookieJar* self, intptr_t slot);
libqt_list /* of QNetworkCookie* */ QNetworkCookieJar_QBaseAllCookies(const QNetworkCookieJar* self);
void QNetworkCookieJar_SetAllCookies(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList);
void QNetworkCookieJar_OnSetAllCookies(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseSetAllCookies(QNetworkCookieJar* self, const libqt_list /* of QNetworkCookie* */ cookieList);
QObject* QNetworkCookieJar_Sender(const QNetworkCookieJar* self);
void QNetworkCookieJar_OnSender(const QNetworkCookieJar* self, intptr_t slot);
QObject* QNetworkCookieJar_QBaseSender(const QNetworkCookieJar* self);
int QNetworkCookieJar_SenderSignalIndex(const QNetworkCookieJar* self);
void QNetworkCookieJar_OnSenderSignalIndex(const QNetworkCookieJar* self, intptr_t slot);
int QNetworkCookieJar_QBaseSenderSignalIndex(const QNetworkCookieJar* self);
int QNetworkCookieJar_Receivers(const QNetworkCookieJar* self, const char* signal);
void QNetworkCookieJar_OnReceivers(const QNetworkCookieJar* self, intptr_t slot);
int QNetworkCookieJar_QBaseReceivers(const QNetworkCookieJar* self, const char* signal);
bool QNetworkCookieJar_IsSignalConnected(const QNetworkCookieJar* self, const QMetaMethod* signal);
void QNetworkCookieJar_OnIsSignalConnected(const QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseIsSignalConnected(const QNetworkCookieJar* self, const QMetaMethod* signal);
void QNetworkCookieJar_Delete(QNetworkCookieJar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
