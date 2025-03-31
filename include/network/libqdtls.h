#pragma once
#ifndef SRC_NETWORKC_LIBQDTLS_H
#define SRC_NETWORKC_LIBQDTLS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDtlsClientVerifier__GeneratorParameters)
typedef QDtlsClientVerifier::GeneratorParameters QDtlsClientVerifier__GeneratorParameters;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QDtls QDtls;
typedef struct QDtlsClientVerifier QDtlsClientVerifier;
typedef struct QDtlsClientVerifier__GeneratorParameters QDtlsClientVerifier__GeneratorParameters;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUdpSocket QUdpSocket;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QDtls::GeneratorParameters GeneratorParameters; // C++ QFlags
typedef QDtls::HandshakeState HandshakeState;           // C++ enum
typedef QDtlsError QDtlsError;                          // C++ enum
#else
typedef QDtlsClientVerifier__GeneratorParameters* GeneratorParameters; // C ABI QFlags
typedef int HandshakeState;                                            // C ABI enum
typedef unsigned char QDtlsError;                                      // C ABI enum
#endif

QDtlsClientVerifier* QDtlsClientVerifier_new();
QDtlsClientVerifier* QDtlsClientVerifier_new2(QObject* parent);
QMetaObject* QDtlsClientVerifier_MetaObject(const QDtlsClientVerifier* self);
void* QDtlsClientVerifier_Metacast(QDtlsClientVerifier* self, const char* param1);
int QDtlsClientVerifier_Metacall(QDtlsClientVerifier* self, int param1, int param2, void** param3);
void QDtlsClientVerifier_OnMetacall(QDtlsClientVerifier* self, intptr_t slot);
int QDtlsClientVerifier_QBaseMetacall(QDtlsClientVerifier* self, int param1, int param2, void** param3);
libqt_string QDtlsClientVerifier_Tr(const char* s);
bool QDtlsClientVerifier_SetCookieGeneratorParameters(QDtlsClientVerifier* self, QDtlsClientVerifier__GeneratorParameters* params);
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier_CookieGeneratorParameters(const QDtlsClientVerifier* self);
bool QDtlsClientVerifier_VerifyClient(QDtlsClientVerifier* self, QUdpSocket* socket, libqt_string dgram, QHostAddress* address, uint16_t port);
libqt_string QDtlsClientVerifier_VerifiedHello(const QDtlsClientVerifier* self);
unsigned char QDtlsClientVerifier_DtlsError(const QDtlsClientVerifier* self);
libqt_string QDtlsClientVerifier_DtlsErrorString(const QDtlsClientVerifier* self);
libqt_string QDtlsClientVerifier_Tr2(const char* s, const char* c);
libqt_string QDtlsClientVerifier_Tr3(const char* s, const char* c, int n);
bool QDtlsClientVerifier_Event(QDtlsClientVerifier* self, QEvent* event);
void QDtlsClientVerifier_OnEvent(QDtlsClientVerifier* self, intptr_t slot);
bool QDtlsClientVerifier_QBaseEvent(QDtlsClientVerifier* self, QEvent* event);
bool QDtlsClientVerifier_EventFilter(QDtlsClientVerifier* self, QObject* watched, QEvent* event);
void QDtlsClientVerifier_OnEventFilter(QDtlsClientVerifier* self, intptr_t slot);
bool QDtlsClientVerifier_QBaseEventFilter(QDtlsClientVerifier* self, QObject* watched, QEvent* event);
void QDtlsClientVerifier_TimerEvent(QDtlsClientVerifier* self, QTimerEvent* event);
void QDtlsClientVerifier_OnTimerEvent(QDtlsClientVerifier* self, intptr_t slot);
void QDtlsClientVerifier_QBaseTimerEvent(QDtlsClientVerifier* self, QTimerEvent* event);
void QDtlsClientVerifier_ChildEvent(QDtlsClientVerifier* self, QChildEvent* event);
void QDtlsClientVerifier_OnChildEvent(QDtlsClientVerifier* self, intptr_t slot);
void QDtlsClientVerifier_QBaseChildEvent(QDtlsClientVerifier* self, QChildEvent* event);
void QDtlsClientVerifier_CustomEvent(QDtlsClientVerifier* self, QEvent* event);
void QDtlsClientVerifier_OnCustomEvent(QDtlsClientVerifier* self, intptr_t slot);
void QDtlsClientVerifier_QBaseCustomEvent(QDtlsClientVerifier* self, QEvent* event);
void QDtlsClientVerifier_ConnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal);
void QDtlsClientVerifier_OnConnectNotify(QDtlsClientVerifier* self, intptr_t slot);
void QDtlsClientVerifier_QBaseConnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal);
void QDtlsClientVerifier_DisconnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal);
void QDtlsClientVerifier_OnDisconnectNotify(QDtlsClientVerifier* self, intptr_t slot);
void QDtlsClientVerifier_QBaseDisconnectNotify(QDtlsClientVerifier* self, QMetaMethod* signal);
QObject* QDtlsClientVerifier_Sender(const QDtlsClientVerifier* self);
void QDtlsClientVerifier_OnSender(const QDtlsClientVerifier* self, intptr_t slot);
QObject* QDtlsClientVerifier_QBaseSender(const QDtlsClientVerifier* self);
int QDtlsClientVerifier_SenderSignalIndex(const QDtlsClientVerifier* self);
void QDtlsClientVerifier_OnSenderSignalIndex(const QDtlsClientVerifier* self, intptr_t slot);
int QDtlsClientVerifier_QBaseSenderSignalIndex(const QDtlsClientVerifier* self);
int QDtlsClientVerifier_Receivers(const QDtlsClientVerifier* self, const char* signal);
void QDtlsClientVerifier_OnReceivers(const QDtlsClientVerifier* self, intptr_t slot);
int QDtlsClientVerifier_QBaseReceivers(const QDtlsClientVerifier* self, const char* signal);
bool QDtlsClientVerifier_IsSignalConnected(const QDtlsClientVerifier* self, QMetaMethod* signal);
void QDtlsClientVerifier_OnIsSignalConnected(const QDtlsClientVerifier* self, intptr_t slot);
bool QDtlsClientVerifier_QBaseIsSignalConnected(const QDtlsClientVerifier* self, QMetaMethod* signal);
void QDtlsClientVerifier_Delete(QDtlsClientVerifier* self);

QDtls* QDtls_new(int mode);
QDtls* QDtls_new2(int mode, QObject* parent);
QMetaObject* QDtls_MetaObject(const QDtls* self);
void* QDtls_Metacast(QDtls* self, const char* param1);
int QDtls_Metacall(QDtls* self, int param1, int param2, void** param3);
void QDtls_OnMetacall(QDtls* self, intptr_t slot);
int QDtls_QBaseMetacall(QDtls* self, int param1, int param2, void** param3);
libqt_string QDtls_Tr(const char* s);
bool QDtls_SetPeer(QDtls* self, QHostAddress* address, uint16_t port);
bool QDtls_SetPeerVerificationName(QDtls* self, libqt_string name);
QHostAddress* QDtls_PeerAddress(const QDtls* self);
uint16_t QDtls_PeerPort(const QDtls* self);
libqt_string QDtls_PeerVerificationName(const QDtls* self);
int QDtls_SslMode(const QDtls* self);
void QDtls_SetMtuHint(QDtls* self, uint16_t mtuHint);
uint16_t QDtls_MtuHint(const QDtls* self);
bool QDtls_SetCookieGeneratorParameters(QDtls* self, QDtlsClientVerifier__GeneratorParameters* params);
QDtlsClientVerifier__GeneratorParameters* QDtls_CookieGeneratorParameters(const QDtls* self);
bool QDtls_SetDtlsConfiguration(QDtls* self, QSslConfiguration* configuration);
QSslConfiguration* QDtls_DtlsConfiguration(const QDtls* self);
int QDtls_HandshakeState(const QDtls* self);
bool QDtls_DoHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_HandleTimeout(QDtls* self, QUdpSocket* socket);
bool QDtls_ResumeHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_AbortHandshake(QDtls* self, QUdpSocket* socket);
bool QDtls_Shutdown(QDtls* self, QUdpSocket* socket);
bool QDtls_IsConnectionEncrypted(const QDtls* self);
QSslCipher* QDtls_SessionCipher(const QDtls* self);
int QDtls_SessionProtocol(const QDtls* self);
long long QDtls_WriteDatagramEncrypted(QDtls* self, QUdpSocket* socket, libqt_string dgram);
libqt_string QDtls_DecryptDatagram(QDtls* self, QUdpSocket* socket, libqt_string dgram);
unsigned char QDtls_DtlsError(const QDtls* self);
libqt_string QDtls_DtlsErrorString(const QDtls* self);
libqt_list /* of QSslError* */ QDtls_PeerVerificationErrors(const QDtls* self);
void QDtls_IgnoreVerificationErrors(QDtls* self, libqt_list /* of QSslError* */ errorsToIgnore);
void QDtls_PskRequired(QDtls* self, QSslPreSharedKeyAuthenticator* authenticator);
void QDtls_Connect_PskRequired(QDtls* self, intptr_t slot);
void QDtls_HandshakeTimeout(QDtls* self);
void QDtls_Connect_HandshakeTimeout(QDtls* self, intptr_t slot);
libqt_string QDtls_Tr2(const char* s, const char* c);
libqt_string QDtls_Tr3(const char* s, const char* c, int n);
bool QDtls_SetPeer3(QDtls* self, QHostAddress* address, uint16_t port, libqt_string verificationName);
bool QDtls_DoHandshake2(QDtls* self, QUdpSocket* socket, libqt_string dgram);
bool QDtls_Event(QDtls* self, QEvent* event);
void QDtls_OnEvent(QDtls* self, intptr_t slot);
bool QDtls_QBaseEvent(QDtls* self, QEvent* event);
bool QDtls_EventFilter(QDtls* self, QObject* watched, QEvent* event);
void QDtls_OnEventFilter(QDtls* self, intptr_t slot);
bool QDtls_QBaseEventFilter(QDtls* self, QObject* watched, QEvent* event);
void QDtls_TimerEvent(QDtls* self, QTimerEvent* event);
void QDtls_OnTimerEvent(QDtls* self, intptr_t slot);
void QDtls_QBaseTimerEvent(QDtls* self, QTimerEvent* event);
void QDtls_ChildEvent(QDtls* self, QChildEvent* event);
void QDtls_OnChildEvent(QDtls* self, intptr_t slot);
void QDtls_QBaseChildEvent(QDtls* self, QChildEvent* event);
void QDtls_CustomEvent(QDtls* self, QEvent* event);
void QDtls_OnCustomEvent(QDtls* self, intptr_t slot);
void QDtls_QBaseCustomEvent(QDtls* self, QEvent* event);
void QDtls_ConnectNotify(QDtls* self, QMetaMethod* signal);
void QDtls_OnConnectNotify(QDtls* self, intptr_t slot);
void QDtls_QBaseConnectNotify(QDtls* self, QMetaMethod* signal);
void QDtls_DisconnectNotify(QDtls* self, QMetaMethod* signal);
void QDtls_OnDisconnectNotify(QDtls* self, intptr_t slot);
void QDtls_QBaseDisconnectNotify(QDtls* self, QMetaMethod* signal);
QObject* QDtls_Sender(const QDtls* self);
void QDtls_OnSender(const QDtls* self, intptr_t slot);
QObject* QDtls_QBaseSender(const QDtls* self);
int QDtls_SenderSignalIndex(const QDtls* self);
void QDtls_OnSenderSignalIndex(const QDtls* self, intptr_t slot);
int QDtls_QBaseSenderSignalIndex(const QDtls* self);
int QDtls_Receivers(const QDtls* self, const char* signal);
void QDtls_OnReceivers(const QDtls* self, intptr_t slot);
int QDtls_QBaseReceivers(const QDtls* self, const char* signal);
bool QDtls_IsSignalConnected(const QDtls* self, QMetaMethod* signal);
void QDtls_OnIsSignalConnected(const QDtls* self, intptr_t slot);
bool QDtls_QBaseIsSignalConnected(const QDtls* self, QMetaMethod* signal);
void QDtls_Delete(QDtls* self);

QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new();
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new2(int a, libqt_string s);
QDtlsClientVerifier__GeneratorParameters* QDtlsClientVerifier__GeneratorParameters_new3(QDtlsClientVerifier__GeneratorParameters* param1);
void QDtlsClientVerifier__GeneratorParameters_OperatorAssign(QDtlsClientVerifier__GeneratorParameters* self, QDtlsClientVerifier__GeneratorParameters* param1);
void QDtlsClientVerifier__GeneratorParameters_Delete(QDtlsClientVerifier__GeneratorParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
