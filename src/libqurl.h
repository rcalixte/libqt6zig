#pragma once
#ifndef SRCC_LIBQURL_H
#define SRCC_LIBQURL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
#endif

QUrl* QUrl_new();
QUrl* QUrl_new2(const QUrl* copyVal);
QUrl* QUrl_new3(const libqt_string url);
QUrl* QUrl_new4(const libqt_string url, int mode);
void QUrl_OperatorAssign(QUrl* self, const QUrl* copyVal);
void QUrl_OperatorAssign2(QUrl* self, const libqt_string url);
void QUrl_Swap(QUrl* self, QUrl* other);
void QUrl_SetUrl(QUrl* self, const libqt_string url);
libqt_string QUrl_Url(const QUrl* self);
libqt_string QUrl_ToString(const QUrl* self);
libqt_string QUrl_ToDisplayString(const QUrl* self);
libqt_string QUrl_ToEncoded(const QUrl* self);
QUrl* QUrl_FromEncoded(QByteArrayView* input);
QUrl* QUrl_FromUserInput(const libqt_string userInput);
bool QUrl_IsValid(const QUrl* self);
libqt_string QUrl_ErrorString(const QUrl* self);
bool QUrl_IsEmpty(const QUrl* self);
void QUrl_Clear(QUrl* self);
void QUrl_SetScheme(QUrl* self, const libqt_string scheme);
libqt_string QUrl_Scheme(const QUrl* self);
void QUrl_SetAuthority(QUrl* self, const libqt_string authority);
libqt_string QUrl_Authority(const QUrl* self);
void QUrl_SetUserInfo(QUrl* self, const libqt_string userInfo);
libqt_string QUrl_UserInfo(const QUrl* self);
void QUrl_SetUserName(QUrl* self, const libqt_string userName);
libqt_string QUrl_UserName(const QUrl* self);
void QUrl_SetPassword(QUrl* self, const libqt_string password);
libqt_string QUrl_Password(const QUrl* self);
void QUrl_SetHost(QUrl* self, const libqt_string host);
libqt_string QUrl_Host(const QUrl* self);
void QUrl_SetPort(QUrl* self, int port);
int QUrl_Port(const QUrl* self);
void QUrl_SetPath(QUrl* self, const libqt_string path);
libqt_string QUrl_Path(const QUrl* self);
libqt_string QUrl_FileName(const QUrl* self);
bool QUrl_HasQuery(const QUrl* self);
void QUrl_SetQuery(QUrl* self, const libqt_string query);
void QUrl_SetQuery2(QUrl* self, const QUrlQuery* query);
libqt_string QUrl_Query(const QUrl* self);
bool QUrl_HasFragment(const QUrl* self);
libqt_string QUrl_Fragment(const QUrl* self);
void QUrl_SetFragment(QUrl* self, const libqt_string fragment);
QUrl* QUrl_Resolved(const QUrl* self, const QUrl* relative);
bool QUrl_IsRelative(const QUrl* self);
bool QUrl_IsParentOf(const QUrl* self, const QUrl* url);
bool QUrl_IsLocalFile(const QUrl* self);
QUrl* QUrl_FromLocalFile(const libqt_string localfile);
libqt_string QUrl_ToLocalFile(const QUrl* self);
void QUrl_Detach(QUrl* self);
bool QUrl_IsDetached(const QUrl* self);
libqt_string QUrl_FromPercentEncoding(const libqt_string param1);
libqt_string QUrl_ToPercentEncoding(const libqt_string param1);
libqt_string QUrl_FromAce(const libqt_string domain);
libqt_string QUrl_ToAce(const libqt_string domain);
libqt_list /* of libqt_string */ QUrl_IdnWhitelist();
libqt_list /* of libqt_string */ QUrl_ToStringList(const libqt_list /* of QUrl* */ uris);
libqt_list /* of QUrl* */ QUrl_FromStringList(const libqt_list /* of libqt_string */ uris);
void QUrl_SetIdnWhitelist(const libqt_list /* of libqt_string */ idnWhitelist);
void QUrl_SetUrl2(QUrl* self, const libqt_string url, int mode);
QUrl* QUrl_FromEncoded2(QByteArrayView* input, int mode);
QUrl* QUrl_FromUserInput2(const libqt_string userInput, const libqt_string workingDirectory);
QUrl* QUrl_FromUserInput3(const libqt_string userInput, const libqt_string workingDirectory, int options);
void QUrl_SetAuthority2(QUrl* self, const libqt_string authority, int mode);
libqt_string QUrl_Authority1(const QUrl* self, int options);
void QUrl_SetUserInfo2(QUrl* self, const libqt_string userInfo, int mode);
libqt_string QUrl_UserInfo1(const QUrl* self, int options);
void QUrl_SetUserName2(QUrl* self, const libqt_string userName, int mode);
libqt_string QUrl_UserName1(const QUrl* self, int options);
void QUrl_SetPassword2(QUrl* self, const libqt_string password, int mode);
libqt_string QUrl_Password1(const QUrl* self, int param1);
void QUrl_SetHost2(QUrl* self, const libqt_string host, int mode);
libqt_string QUrl_Host1(const QUrl* self, int param1);
int QUrl_Port1(const QUrl* self, int defaultPort);
void QUrl_SetPath2(QUrl* self, const libqt_string path, int mode);
libqt_string QUrl_Path1(const QUrl* self, int options);
libqt_string QUrl_FileName1(const QUrl* self, int options);
void QUrl_SetQuery22(QUrl* self, const libqt_string query, int mode);
libqt_string QUrl_Query1(const QUrl* self, int param1);
libqt_string QUrl_Fragment1(const QUrl* self, int options);
void QUrl_SetFragment2(QUrl* self, const libqt_string fragment, int mode);
libqt_string QUrl_ToPercentEncoding2(const libqt_string param1, const libqt_string exclude);
libqt_string QUrl_ToPercentEncoding3(const libqt_string param1, const libqt_string exclude, const libqt_string include);
libqt_string QUrl_FromAce2(const libqt_string domain, int options);
libqt_string QUrl_ToAce2(const libqt_string domain, int options);
libqt_list /* of QUrl* */ QUrl_FromStringList2(const libqt_list /* of libqt_string */ uris, int mode);
void QUrl_Delete(QUrl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
