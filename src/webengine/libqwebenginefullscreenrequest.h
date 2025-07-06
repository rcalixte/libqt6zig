#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEFULLSCREENREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEFULLSCREENREQUEST_H

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
typedef struct QWebEngineFullScreenRequest QWebEngineFullScreenRequest;
#endif

QWebEngineFullScreenRequest* QWebEngineFullScreenRequest_new(const QWebEngineFullScreenRequest* other);
void QWebEngineFullScreenRequest_OperatorAssign(QWebEngineFullScreenRequest* self, const QWebEngineFullScreenRequest* other);
void QWebEngineFullScreenRequest_Reject(QWebEngineFullScreenRequest* self);
void QWebEngineFullScreenRequest_Accept(QWebEngineFullScreenRequest* self);
bool QWebEngineFullScreenRequest_ToggleOn(const QWebEngineFullScreenRequest* self);
QUrl* QWebEngineFullScreenRequest_Origin(const QWebEngineFullScreenRequest* self);
void QWebEngineFullScreenRequest_Delete(QWebEngineFullScreenRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
