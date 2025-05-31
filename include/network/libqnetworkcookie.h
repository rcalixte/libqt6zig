#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKCOOKIE_H
#define SRC_NETWORKC_LIBQNETWORKCOOKIE_H

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
typedef struct QDateTime QDateTime;
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QUrl QUrl;
#endif

#ifdef __cplusplus
typedef QNetworkCookie::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QNetworkCookie::RawForm RawForm;               // C++ enum
typedef QNetworkCookie::SameSite SameSite;             // C++ enum
#else
typedef int RawForm;         // C ABI enum
typedef int SameSite;        // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QNetworkCookie* QNetworkCookie_new();
QNetworkCookie* QNetworkCookie_new2(const QNetworkCookie* other);
QNetworkCookie* QNetworkCookie_new3(const libqt_string name);
QNetworkCookie* QNetworkCookie_new4(const libqt_string name, const libqt_string value);
void QNetworkCookie_OperatorAssign(QNetworkCookie* self, const QNetworkCookie* other);
void QNetworkCookie_Swap(QNetworkCookie* self, QNetworkCookie* other);
bool QNetworkCookie_OperatorEqual(const QNetworkCookie* self, const QNetworkCookie* other);
bool QNetworkCookie_OperatorNotEqual(const QNetworkCookie* self, const QNetworkCookie* other);
bool QNetworkCookie_IsSecure(const QNetworkCookie* self);
void QNetworkCookie_SetSecure(QNetworkCookie* self, bool enable);
bool QNetworkCookie_IsHttpOnly(const QNetworkCookie* self);
void QNetworkCookie_SetHttpOnly(QNetworkCookie* self, bool enable);
int QNetworkCookie_SameSitePolicy(const QNetworkCookie* self);
void QNetworkCookie_SetSameSitePolicy(QNetworkCookie* self, int sameSite);
bool QNetworkCookie_IsSessionCookie(const QNetworkCookie* self);
QDateTime* QNetworkCookie_ExpirationDate(const QNetworkCookie* self);
void QNetworkCookie_SetExpirationDate(QNetworkCookie* self, const QDateTime* date);
libqt_string QNetworkCookie_Domain(const QNetworkCookie* self);
void QNetworkCookie_SetDomain(QNetworkCookie* self, const libqt_string domain);
libqt_string QNetworkCookie_Path(const QNetworkCookie* self);
void QNetworkCookie_SetPath(QNetworkCookie* self, const libqt_string path);
libqt_string QNetworkCookie_Name(const QNetworkCookie* self);
void QNetworkCookie_SetName(QNetworkCookie* self, const libqt_string cookieName);
libqt_string QNetworkCookie_Value(const QNetworkCookie* self);
void QNetworkCookie_SetValue(QNetworkCookie* self, const libqt_string value);
libqt_string QNetworkCookie_ToRawForm(const QNetworkCookie* self);
bool QNetworkCookie_HasSameIdentifier(const QNetworkCookie* self, const QNetworkCookie* other);
void QNetworkCookie_Normalize(QNetworkCookie* self, const QUrl* url);
libqt_list /* of QNetworkCookie* */ QNetworkCookie_ParseCookies(const libqt_string cookieString);
libqt_string QNetworkCookie_ToRawForm1(const QNetworkCookie* self, int form);
void QNetworkCookie_Delete(QNetworkCookie* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
