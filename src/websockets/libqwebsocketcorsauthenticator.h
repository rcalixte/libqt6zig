#pragma once
#ifndef SRC_WEBSOCKETSC_LIBQWEBSOCKETCORSAUTHENTICATOR_H
#define SRC_WEBSOCKETSC_LIBQWEBSOCKETCORSAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QWebSocketCorsAuthenticator QWebSocketCorsAuthenticator;
#endif

QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new(const libqt_string origin);
QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new2(const QWebSocketCorsAuthenticator* other);
void QWebSocketCorsAuthenticator_Swap(QWebSocketCorsAuthenticator* self, QWebSocketCorsAuthenticator* other);
void QWebSocketCorsAuthenticator_OperatorAssign(QWebSocketCorsAuthenticator* self, const QWebSocketCorsAuthenticator* other);
libqt_string QWebSocketCorsAuthenticator_Origin(const QWebSocketCorsAuthenticator* self);
void QWebSocketCorsAuthenticator_SetAllowed(QWebSocketCorsAuthenticator* self, bool allowed);
bool QWebSocketCorsAuthenticator_Allowed(const QWebSocketCorsAuthenticator* self);
void QWebSocketCorsAuthenticator_Delete(QWebSocketCorsAuthenticator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
