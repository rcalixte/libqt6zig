#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEWEBAUTHUXREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEWEBAUTHUXREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWebEngineWebAuthPinRequest QWebEngineWebAuthPinRequest;
typedef struct QWebEngineWebAuthUxRequest QWebEngineWebAuthUxRequest;
#endif

QMetaObject* QWebEngineWebAuthUxRequest_MetaObject(const QWebEngineWebAuthUxRequest* self);
void* QWebEngineWebAuthUxRequest_Metacast(QWebEngineWebAuthUxRequest* self, const char* param1);
int QWebEngineWebAuthUxRequest_Metacall(QWebEngineWebAuthUxRequest* self, int param1, int param2, void** param3);
libqt_string QWebEngineWebAuthUxRequest_Tr(const char* s);
libqt_list /* of libqt_string */ QWebEngineWebAuthUxRequest_UserNames(const QWebEngineWebAuthUxRequest* self);
libqt_string QWebEngineWebAuthUxRequest_RelyingPartyId(const QWebEngineWebAuthUxRequest* self);
QWebEngineWebAuthPinRequest* QWebEngineWebAuthUxRequest_PinRequest(const QWebEngineWebAuthUxRequest* self);
int QWebEngineWebAuthUxRequest_State(const QWebEngineWebAuthUxRequest* self);
int QWebEngineWebAuthUxRequest_RequestFailureReason(const QWebEngineWebAuthUxRequest* self);
void QWebEngineWebAuthUxRequest_StateChanged(QWebEngineWebAuthUxRequest* self, int state);
void QWebEngineWebAuthUxRequest_Connect_StateChanged(QWebEngineWebAuthUxRequest* self, intptr_t slot);
void QWebEngineWebAuthUxRequest_Cancel(QWebEngineWebAuthUxRequest* self);
void QWebEngineWebAuthUxRequest_Retry(QWebEngineWebAuthUxRequest* self);
void QWebEngineWebAuthUxRequest_SetSelectedAccount(QWebEngineWebAuthUxRequest* self, const libqt_string selectedAccount);
void QWebEngineWebAuthUxRequest_SetPin(QWebEngineWebAuthUxRequest* self, const libqt_string pin);
libqt_string QWebEngineWebAuthUxRequest_Tr2(const char* s, const char* c);
libqt_string QWebEngineWebAuthUxRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineWebAuthUxRequest_Delete(QWebEngineWebAuthUxRequest* self);

int QWebEngineWebAuthPinRequest_Reason(const QWebEngineWebAuthPinRequest* self);
void QWebEngineWebAuthPinRequest_SetReason(QWebEngineWebAuthPinRequest* self, int reason);
int QWebEngineWebAuthPinRequest_Error(const QWebEngineWebAuthPinRequest* self);
void QWebEngineWebAuthPinRequest_SetError(QWebEngineWebAuthPinRequest* self, int error);
int QWebEngineWebAuthPinRequest_MinPinLength(const QWebEngineWebAuthPinRequest* self);
void QWebEngineWebAuthPinRequest_SetMinPinLength(QWebEngineWebAuthPinRequest* self, int minPinLength);
int QWebEngineWebAuthPinRequest_RemainingAttempts(const QWebEngineWebAuthPinRequest* self);
void QWebEngineWebAuthPinRequest_SetRemainingAttempts(QWebEngineWebAuthPinRequest* self, int remainingAttempts);
void QWebEngineWebAuthPinRequest_Delete(QWebEngineWebAuthPinRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
