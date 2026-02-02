#pragma once
#ifndef SRC_WEBSOCKETSC_LIBQWEBSOCKETHANDSHAKEOPTIONS_H
#define SRC_WEBSOCKETSC_LIBQWEBSOCKETHANDSHAKEOPTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QWebSocketHandshakeOptions QWebSocketHandshakeOptions;
#endif

QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new();
QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new2(const QWebSocketHandshakeOptions* other);
void QWebSocketHandshakeOptions_OperatorAssign(QWebSocketHandshakeOptions* self, const QWebSocketHandshakeOptions* other);
void QWebSocketHandshakeOptions_Swap(QWebSocketHandshakeOptions* self, QWebSocketHandshakeOptions* other);
libqt_list /* of libqt_string */ QWebSocketHandshakeOptions_Subprotocols(const QWebSocketHandshakeOptions* self);
void QWebSocketHandshakeOptions_SetSubprotocols(QWebSocketHandshakeOptions* self, const libqt_list /* of libqt_string */ protocols);
void QWebSocketHandshakeOptions_Delete(QWebSocketHandshakeOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
