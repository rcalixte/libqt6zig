#pragma once
#ifndef SRC_NETWORKC_LIBQHTTPMULTIPART_H
#define SRC_NETWORKC_LIBQHTTPMULTIPART_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QHttpPart QHttpPart;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QHttpMultiPart::ContentType ContentType; // C++ enum
#else
typedef int ContentType; // C ABI enum
#endif

QHttpPart* QHttpPart_new();
QHttpPart* QHttpPart_new2(const QHttpPart* other);
void QHttpPart_OperatorAssign(QHttpPart* self, const QHttpPart* other);
void QHttpPart_Swap(QHttpPart* self, QHttpPart* other);
bool QHttpPart_OperatorEqual(const QHttpPart* self, const QHttpPart* other);
bool QHttpPart_OperatorNotEqual(const QHttpPart* self, const QHttpPart* other);
void QHttpPart_SetHeader(QHttpPart* self, int header, const QVariant* value);
void QHttpPart_SetRawHeader(QHttpPart* self, const libqt_string headerName, const libqt_string headerValue);
void QHttpPart_SetBody(QHttpPart* self, const libqt_string body);
void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device);
void QHttpPart_Delete(QHttpPart* self);

QHttpMultiPart* QHttpMultiPart_new();
QHttpMultiPart* QHttpMultiPart_new2(int contentType);
QHttpMultiPart* QHttpMultiPart_new3(QObject* parent);
QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent);
QMetaObject* QHttpMultiPart_MetaObject(const QHttpMultiPart* self);
void* QHttpMultiPart_Metacast(QHttpMultiPart* self, const char* param1);
int QHttpMultiPart_Metacall(QHttpMultiPart* self, int param1, int param2, void** param3);
void QHttpMultiPart_OnMetacall(QHttpMultiPart* self, intptr_t slot);
int QHttpMultiPart_QBaseMetacall(QHttpMultiPart* self, int param1, int param2, void** param3);
libqt_string QHttpMultiPart_Tr(const char* s);
void QHttpMultiPart_Append(QHttpMultiPart* self, const QHttpPart* httpPart);
void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType);
libqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self);
void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, const libqt_string boundary);
libqt_string QHttpMultiPart_Tr2(const char* s, const char* c);
libqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n);
bool QHttpMultiPart_Event(QHttpMultiPart* self, QEvent* event);
void QHttpMultiPart_OnEvent(QHttpMultiPart* self, intptr_t slot);
bool QHttpMultiPart_QBaseEvent(QHttpMultiPart* self, QEvent* event);
bool QHttpMultiPart_EventFilter(QHttpMultiPart* self, QObject* watched, QEvent* event);
void QHttpMultiPart_OnEventFilter(QHttpMultiPart* self, intptr_t slot);
bool QHttpMultiPart_QBaseEventFilter(QHttpMultiPart* self, QObject* watched, QEvent* event);
void QHttpMultiPart_TimerEvent(QHttpMultiPart* self, QTimerEvent* event);
void QHttpMultiPart_OnTimerEvent(QHttpMultiPart* self, intptr_t slot);
void QHttpMultiPart_QBaseTimerEvent(QHttpMultiPart* self, QTimerEvent* event);
void QHttpMultiPart_ChildEvent(QHttpMultiPart* self, QChildEvent* event);
void QHttpMultiPart_OnChildEvent(QHttpMultiPart* self, intptr_t slot);
void QHttpMultiPart_QBaseChildEvent(QHttpMultiPart* self, QChildEvent* event);
void QHttpMultiPart_CustomEvent(QHttpMultiPart* self, QEvent* event);
void QHttpMultiPart_OnCustomEvent(QHttpMultiPart* self, intptr_t slot);
void QHttpMultiPart_QBaseCustomEvent(QHttpMultiPart* self, QEvent* event);
void QHttpMultiPart_ConnectNotify(QHttpMultiPart* self, const QMetaMethod* signal);
void QHttpMultiPart_OnConnectNotify(QHttpMultiPart* self, intptr_t slot);
void QHttpMultiPart_QBaseConnectNotify(QHttpMultiPart* self, const QMetaMethod* signal);
void QHttpMultiPart_DisconnectNotify(QHttpMultiPart* self, const QMetaMethod* signal);
void QHttpMultiPart_OnDisconnectNotify(QHttpMultiPart* self, intptr_t slot);
void QHttpMultiPart_QBaseDisconnectNotify(QHttpMultiPart* self, const QMetaMethod* signal);
QObject* QHttpMultiPart_Sender(const QHttpMultiPart* self);
void QHttpMultiPart_OnSender(const QHttpMultiPart* self, intptr_t slot);
QObject* QHttpMultiPart_QBaseSender(const QHttpMultiPart* self);
int QHttpMultiPart_SenderSignalIndex(const QHttpMultiPart* self);
void QHttpMultiPart_OnSenderSignalIndex(const QHttpMultiPart* self, intptr_t slot);
int QHttpMultiPart_QBaseSenderSignalIndex(const QHttpMultiPart* self);
int QHttpMultiPart_Receivers(const QHttpMultiPart* self, const char* signal);
void QHttpMultiPart_OnReceivers(const QHttpMultiPart* self, intptr_t slot);
int QHttpMultiPart_QBaseReceivers(const QHttpMultiPart* self, const char* signal);
bool QHttpMultiPart_IsSignalConnected(const QHttpMultiPart* self, const QMetaMethod* signal);
void QHttpMultiPart_OnIsSignalConnected(const QHttpMultiPart* self, intptr_t slot);
bool QHttpMultiPart_QBaseIsSignalConnected(const QHttpMultiPart* self, const QMetaMethod* signal);
void QHttpMultiPart_Delete(QHttpMultiPart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
