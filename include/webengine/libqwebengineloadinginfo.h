#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINELOADINGINFO_H
#define SRC_WEBENGINEC_LIBQWEBENGINELOADINGINFO_H

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
typedef struct QUrl QUrl;
typedef struct QWebEngineLoadingInfo QWebEngineLoadingInfo;
#endif

#ifdef __cplusplus
typedef QWebEngineLoadingInfo::ErrorDomain ErrorDomain;       // C++ enum
typedef QWebEngineLoadingInfo::LoadStatus LoadStatus;         // C++ enum
typedef QWebEngineLoadingInfo::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef int ErrorDomain;     // C ABI enum
typedef int LoadStatus;      // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QWebEngineLoadingInfo* QWebEngineLoadingInfo_new(QWebEngineLoadingInfo* other);
void QWebEngineLoadingInfo_OperatorAssign(QWebEngineLoadingInfo* self, QWebEngineLoadingInfo* other);
QUrl* QWebEngineLoadingInfo_Url(const QWebEngineLoadingInfo* self);
bool QWebEngineLoadingInfo_IsErrorPage(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_Status(const QWebEngineLoadingInfo* self);
libqt_string QWebEngineLoadingInfo_ErrorString(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_ErrorDomain(const QWebEngineLoadingInfo* self);
int QWebEngineLoadingInfo_ErrorCode(const QWebEngineLoadingInfo* self);
void QWebEngineLoadingInfo_Delete(QWebEngineLoadingInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
