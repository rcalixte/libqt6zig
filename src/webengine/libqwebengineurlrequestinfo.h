#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTINFO_H
#define SRC_WEBENGINEC_LIBQWEBENGINEURLREQUESTINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QUrl QUrl;
typedef struct QWebEngineUrlRequestInfo QWebEngineUrlRequestInfo;
#endif

int QWebEngineUrlRequestInfo_ResourceType(const QWebEngineUrlRequestInfo* self);
int QWebEngineUrlRequestInfo_NavigationType(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_RequestUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_FirstPartyUrl(const QWebEngineUrlRequestInfo* self);
QUrl* QWebEngineUrlRequestInfo_Initiator(const QWebEngineUrlRequestInfo* self);
libqt_string QWebEngineUrlRequestInfo_RequestMethod(const QWebEngineUrlRequestInfo* self);
QIODevice* QWebEngineUrlRequestInfo_RequestBody(const QWebEngineUrlRequestInfo* self);
bool QWebEngineUrlRequestInfo_Changed(const QWebEngineUrlRequestInfo* self);
void QWebEngineUrlRequestInfo_Block(QWebEngineUrlRequestInfo* self, bool shouldBlock);
void QWebEngineUrlRequestInfo_Redirect(QWebEngineUrlRequestInfo* self, const QUrl* url);
void QWebEngineUrlRequestInfo_SetHttpHeader(QWebEngineUrlRequestInfo* self, const libqt_string name, const libqt_string value);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
