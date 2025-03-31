#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTINFO_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTINFO_H

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
typedef struct QWebEngineUrlRequestInfo QWebEngineUrlRequestInfo;
#endif

#ifdef __cplusplus
typedef QWebEngineUrlRequestInfo::NavigationType NavigationType; // C++ enum
typedef QWebEngineUrlRequestInfo::ResourceType ResourceType;     // C++ enum
#else
typedef int NavigationType; // C ABI enum
typedef int ResourceType;   // C ABI enum
#endif

int QWebEngineUrlRequestInfo_ResourceType(const QWebEngineUrlRequestInfo* self);
int QWebEngineUrlRequestInfo_NavigationType(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_RequestUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_FirstPartyUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_Initiator(const QWebEngineUrlRequestInfo* self);
libqt_string QWebEngineUrlRequestInfo_RequestMethod(const QWebEngineUrlRequestInfo* self);
bool QWebEngineUrlRequestInfo_Changed(const QWebEngineUrlRequestInfo* self);
void QWebEngineUrlRequestInfo_Block(QWebEngineUrlRequestInfo* self, bool shouldBlock);
void QWebEngineUrlRequestInfo_Redirect(QWebEngineUrlRequestInfo* self, QUrl* url);
void QWebEngineUrlRequestInfo_SetHttpHeader(QWebEngineUrlRequestInfo* self, libqt_string name, libqt_string value);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
