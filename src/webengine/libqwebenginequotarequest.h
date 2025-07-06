#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEQUOTAREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEQUOTAREQUEST_H

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
typedef struct QWebEngineQuotaRequest QWebEngineQuotaRequest;
#endif

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new(const QWebEngineQuotaRequest* other);
QWebEngineQuotaRequest* QWebEngineQuotaRequest_new2(QWebEngineQuotaRequest* other);
QWebEngineQuotaRequest* QWebEngineQuotaRequest_new3();
void QWebEngineQuotaRequest_CopyAssign(QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* other);
void QWebEngineQuotaRequest_MoveAssign(QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* other);
void QWebEngineQuotaRequest_Accept(QWebEngineQuotaRequest* self);
void QWebEngineQuotaRequest_Reject(QWebEngineQuotaRequest* self);
QUrl* QWebEngineQuotaRequest_Origin(const QWebEngineQuotaRequest* self);
long long QWebEngineQuotaRequest_RequestedSize(const QWebEngineQuotaRequest* self);
bool QWebEngineQuotaRequest_OperatorEqual(const QWebEngineQuotaRequest* self, const QWebEngineQuotaRequest* param1);
bool QWebEngineQuotaRequest_OperatorNotEqual(const QWebEngineQuotaRequest* self, const QWebEngineQuotaRequest* param1);
void QWebEngineQuotaRequest_Delete(QWebEngineQuotaRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
