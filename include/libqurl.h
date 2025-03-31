#pragma once
#ifndef SRCC_LIBQURL_H
#define SRCC_LIBQURL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
#endif

#ifdef __cplusplus
typedef QUrl::AceProcessingOption AceProcessingOption;               // C++ enum
typedef QUrl::AceProcessingOptions AceProcessingOptions;             // C++ QFlags
typedef QUrl::ComponentFormattingOption ComponentFormattingOption;   // C++ enum
typedef QUrl::ComponentFormattingOptions ComponentFormattingOptions; // C++ QFlags
typedef QUrl::DataPtr DataPtr;                                       // C++ QFlags
typedef QUrl::FormattingOptions FormattingOptions;                   // C++ QFlags
typedef QUrl::ParsingMode ParsingMode;                               // C++ enum
typedef QUrl::UrlFormattingOption UrlFormattingOption;               // C++ enum
typedef QUrl::UserInputResolutionOption UserInputResolutionOption;   // C++ enum
typedef QUrl::UserInputResolutionOptions UserInputResolutionOptions; // C++ QFlags
#else
typedef int AceProcessingOptions;               // C ABI QFlags
typedef int ComponentFormattingOptions;         // C ABI QFlags
typedef int ParsingMode;                        // C ABI enum
typedef int UserInputResolutionOption;          // C ABI enum
typedef int UserInputResolutionOptions;         // C ABI QFlags
typedef unsigned int AceProcessingOption;       // C ABI enum
typedef unsigned int ComponentFormattingOption; // C ABI enum
typedef unsigned int UrlFormattingOption;       // C ABI enum
#endif

QUrl* QUrl_new();
QUrl* QUrl_new2(QUrl* copyVal);
QUrl* QUrl_new3(libqt_string url);
QUrl* QUrl_new4(libqt_string url, int mode);
void QUrl_OperatorAssign(QUrl* self, QUrl* copyVal);
void QUrl_OperatorAssignWithUrl(QUrl* self, libqt_string url);
void QUrl_Swap(QUrl* self, QUrl* other);
void QUrl_SetUrl(QUrl* self, libqt_string url);
libqt_string QUrl_Url(const QUrl* self);
libqt_string QUrl_ToString(const QUrl* self);
libqt_string QUrl_ToDisplayString(const QUrl* self);
libqt_string QUrl_ToEncoded(const QUrl* self);
QUrl* QUrl_FromEncoded(libqt_string url);
QUrl* QUrl_FromUserInput(libqt_string userInput);
bool QUrl_IsValid(const QUrl* self);
libqt_string QUrl_ErrorString(const QUrl* self);
bool QUrl_IsEmpty(const QUrl* self);
void QUrl_Clear(QUrl* self);
void QUrl_SetScheme(QUrl* self, libqt_string scheme);
libqt_string QUrl_Scheme(const QUrl* self);
void QUrl_SetAuthority(QUrl* self, libqt_string authority);
libqt_string QUrl_Authority(const QUrl* self);
void QUrl_SetUserInfo(QUrl* self, libqt_string userInfo);
libqt_string QUrl_UserInfo(const QUrl* self);
void QUrl_SetUserName(QUrl* self, libqt_string userName);
libqt_string QUrl_UserName(const QUrl* self);
void QUrl_SetPassword(QUrl* self, libqt_string password);
libqt_string QUrl_Password(const QUrl* self);
void QUrl_SetHost(QUrl* self, libqt_string host);
libqt_string QUrl_Host(const QUrl* self);
void QUrl_SetPort(QUrl* self, int port);
int QUrl_Port(const QUrl* self);
void QUrl_SetPath(QUrl* self, libqt_string path);
libqt_string QUrl_Path(const QUrl* self);
libqt_string QUrl_FileName(const QUrl* self);
bool QUrl_HasQuery(const QUrl* self);
void QUrl_SetQuery(QUrl* self, libqt_string query);
void QUrl_SetQueryWithQuery(QUrl* self, QUrlQuery* query);
libqt_string QUrl_Query(const QUrl* self);
bool QUrl_HasFragment(const QUrl* self);
libqt_string QUrl_Fragment(const QUrl* self);
void QUrl_SetFragment(QUrl* self, libqt_string fragment);
QUrl* QUrl_Resolved(const QUrl* self, QUrl* relative);
bool QUrl_IsRelative(const QUrl* self);
bool QUrl_IsParentOf(const QUrl* self, QUrl* url);
bool QUrl_IsLocalFile(const QUrl* self);
QUrl* QUrl_FromLocalFile(libqt_string localfile);
libqt_string QUrl_ToLocalFile(const QUrl* self);
void QUrl_Detach(QUrl* self);
bool QUrl_IsDetached(const QUrl* self);
bool QUrl_OperatorLesser(const QUrl* self, QUrl* url);
bool QUrl_OperatorEqual(const QUrl* self, QUrl* url);
bool QUrl_OperatorNotEqual(const QUrl* self, QUrl* url);
libqt_string QUrl_FromPercentEncoding(libqt_string param1);
libqt_string QUrl_ToPercentEncoding(libqt_string param1);
libqt_string QUrl_FromAce(libqt_string domain);
libqt_string QUrl_ToAce(libqt_string domain);
libqt_list /* of libqt_string */ QUrl_IdnWhitelist();
libqt_list /* of libqt_string */ QUrl_ToStringList(libqt_list /* of QUrl* */ uris);
libqt_list /* of QUrl* */ QUrl_FromStringList(libqt_list /* of libqt_string */ uris);
void QUrl_SetIdnWhitelist(libqt_list /* of libqt_string */ idnWhitelist);
void QUrl_SetUrl2(QUrl* self, libqt_string url, int mode);
QUrl* QUrl_FromEncoded2(libqt_string url, int mode);
QUrl* QUrl_FromUserInput2(libqt_string userInput, libqt_string workingDirectory);
QUrl* QUrl_FromUserInput3(libqt_string userInput, libqt_string workingDirectory, int options);
void QUrl_SetAuthority2(QUrl* self, libqt_string authority, int mode);
libqt_string QUrl_Authority1(const QUrl* self, int options);
void QUrl_SetUserInfo2(QUrl* self, libqt_string userInfo, int mode);
libqt_string QUrl_UserInfo1(const QUrl* self, int options);
void QUrl_SetUserName2(QUrl* self, libqt_string userName, int mode);
libqt_string QUrl_UserName1(const QUrl* self, int options);
void QUrl_SetPassword2(QUrl* self, libqt_string password, int mode);
libqt_string QUrl_Password1(const QUrl* self, int param1);
void QUrl_SetHost2(QUrl* self, libqt_string host, int mode);
libqt_string QUrl_Host1(const QUrl* self, int param1);
int QUrl_Port1(const QUrl* self, int defaultPort);
void QUrl_SetPath2(QUrl* self, libqt_string path, int mode);
libqt_string QUrl_Path1(const QUrl* self, int options);
libqt_string QUrl_FileName1(const QUrl* self, int options);
void QUrl_SetQuery2(QUrl* self, libqt_string query, int mode);
libqt_string QUrl_Query1(const QUrl* self, int param1);
libqt_string QUrl_Fragment1(const QUrl* self, int options);
void QUrl_SetFragment2(QUrl* self, libqt_string fragment, int mode);
libqt_string QUrl_ToPercentEncoding2(libqt_string param1, libqt_string exclude);
libqt_string QUrl_ToPercentEncoding3(libqt_string param1, libqt_string exclude, libqt_string include);
libqt_string QUrl_FromAce2(libqt_string domain, int options);
libqt_string QUrl_ToAce2(libqt_string domain, int options);
libqt_list /* of QUrl* */ QUrl_FromStringList2(libqt_list /* of libqt_string */ uris, int mode);
void QUrl_Delete(QUrl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
