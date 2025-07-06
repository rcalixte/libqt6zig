#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H

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
typedef struct QWebEngineRegisterProtocolHandlerRequest QWebEngineRegisterProtocolHandlerRequest;
#endif

QWebEngineRegisterProtocolHandlerRequest* QWebEngineRegisterProtocolHandlerRequest_new();
QWebEngineRegisterProtocolHandlerRequest* QWebEngineRegisterProtocolHandlerRequest_new2(const QWebEngineRegisterProtocolHandlerRequest* param1);
void QWebEngineRegisterProtocolHandlerRequest_Accept(QWebEngineRegisterProtocolHandlerRequest* self);
void QWebEngineRegisterProtocolHandlerRequest_Reject(QWebEngineRegisterProtocolHandlerRequest* self);
QUrl* QWebEngineRegisterProtocolHandlerRequest_Origin(const QWebEngineRegisterProtocolHandlerRequest* self);
libqt_string QWebEngineRegisterProtocolHandlerRequest_Scheme(const QWebEngineRegisterProtocolHandlerRequest* self);
bool QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(const QWebEngineRegisterProtocolHandlerRequest* self, const QWebEngineRegisterProtocolHandlerRequest* that);
bool QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(const QWebEngineRegisterProtocolHandlerRequest* self, const QWebEngineRegisterProtocolHandlerRequest* that);
void QWebEngineRegisterProtocolHandlerRequest_Delete(QWebEngineRegisterProtocolHandlerRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
