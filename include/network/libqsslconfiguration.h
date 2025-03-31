#pragma once
#ifndef SRC_NETWORKC_LIBQSSLCONFIGURATION_H
#define SRC_NETWORKC_LIBQSSLCONFIGURATION_H

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
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslDiffieHellmanParameters QSslDiffieHellmanParameters;
typedef struct QSslEllipticCurve QSslEllipticCurve;
typedef struct QSslKey QSslKey;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QSslConfiguration::NextProtocolNegotiationStatus NextProtocolNegotiationStatus; // C++ enum
#else
typedef int NextProtocolNegotiationStatus; // C ABI enum
#endif

QSslConfiguration* QSslConfiguration_new();
QSslConfiguration* QSslConfiguration_new2(QSslConfiguration* other);
void QSslConfiguration_OperatorAssign(QSslConfiguration* self, QSslConfiguration* other);
void QSslConfiguration_Swap(QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_OperatorEqual(const QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_OperatorNotEqual(const QSslConfiguration* self, QSslConfiguration* other);
bool QSslConfiguration_IsNull(const QSslConfiguration* self);
int QSslConfiguration_Protocol(const QSslConfiguration* self);
void QSslConfiguration_SetProtocol(QSslConfiguration* self, int protocol);
int QSslConfiguration_PeerVerifyMode(const QSslConfiguration* self);
void QSslConfiguration_SetPeerVerifyMode(QSslConfiguration* self, int mode);
int QSslConfiguration_PeerVerifyDepth(const QSslConfiguration* self);
void QSslConfiguration_SetPeerVerifyDepth(QSslConfiguration* self, int depth);
libqt_list /* of QSslCertificate* */ QSslConfiguration_LocalCertificateChain(const QSslConfiguration* self);
void QSslConfiguration_SetLocalCertificateChain(QSslConfiguration* self, libqt_list /* of QSslCertificate* */ localChain);
QSslCertificate* QSslConfiguration_LocalCertificate(const QSslConfiguration* self);
void QSslConfiguration_SetLocalCertificate(QSslConfiguration* self, QSslCertificate* certificate);
QSslCertificate* QSslConfiguration_PeerCertificate(const QSslConfiguration* self);
libqt_list /* of QSslCertificate* */ QSslConfiguration_PeerCertificateChain(const QSslConfiguration* self);
QSslCipher* QSslConfiguration_SessionCipher(const QSslConfiguration* self);
int QSslConfiguration_SessionProtocol(const QSslConfiguration* self);
QSslKey* QSslConfiguration_PrivateKey(const QSslConfiguration* self);
void QSslConfiguration_SetPrivateKey(QSslConfiguration* self, QSslKey* key);
libqt_list /* of QSslCipher* */ QSslConfiguration_Ciphers(const QSslConfiguration* self);
void QSslConfiguration_SetCiphers(QSslConfiguration* self, libqt_list /* of QSslCipher* */ ciphers);
void QSslConfiguration_SetCiphersWithCiphers(QSslConfiguration* self, libqt_string ciphers);
libqt_list /* of QSslCipher* */ QSslConfiguration_SupportedCiphers();
libqt_list /* of QSslCertificate* */ QSslConfiguration_CaCertificates(const QSslConfiguration* self);
void QSslConfiguration_SetCaCertificates(QSslConfiguration* self, libqt_list /* of QSslCertificate* */ certificates);
bool QSslConfiguration_AddCaCertificates(QSslConfiguration* self, libqt_string path);
void QSslConfiguration_AddCaCertificate(QSslConfiguration* self, QSslCertificate* certificate);
void QSslConfiguration_AddCaCertificatesWithCertificates(QSslConfiguration* self, libqt_list /* of QSslCertificate* */ certificates);
libqt_list /* of QSslCertificate* */ QSslConfiguration_SystemCaCertificates();
void QSslConfiguration_SetSslOption(QSslConfiguration* self, int option, bool on);
bool QSslConfiguration_TestSslOption(const QSslConfiguration* self, int option);
libqt_string QSslConfiguration_SessionTicket(const QSslConfiguration* self);
void QSslConfiguration_SetSessionTicket(QSslConfiguration* self, libqt_string sessionTicket);
int QSslConfiguration_SessionTicketLifeTimeHint(const QSslConfiguration* self);
QSslKey* QSslConfiguration_EphemeralServerKey(const QSslConfiguration* self);
libqt_list /* of QSslEllipticCurve* */ QSslConfiguration_EllipticCurves(const QSslConfiguration* self);
void QSslConfiguration_SetEllipticCurves(QSslConfiguration* self, libqt_list /* of QSslEllipticCurve* */ curves);
libqt_list /* of QSslEllipticCurve* */ QSslConfiguration_SupportedEllipticCurves();
libqt_string QSslConfiguration_PreSharedKeyIdentityHint(const QSslConfiguration* self);
void QSslConfiguration_SetPreSharedKeyIdentityHint(QSslConfiguration* self, libqt_string hint);
QSslDiffieHellmanParameters* QSslConfiguration_DiffieHellmanParameters(const QSslConfiguration* self);
void QSslConfiguration_SetDiffieHellmanParameters(QSslConfiguration* self, QSslDiffieHellmanParameters* dhparams);
void QSslConfiguration_SetBackendConfigurationOption(QSslConfiguration* self, libqt_string name, QVariant* value);
void QSslConfiguration_SetBackendConfiguration(QSslConfiguration* self);
QSslConfiguration* QSslConfiguration_DefaultConfiguration();
void QSslConfiguration_SetDefaultConfiguration(QSslConfiguration* configuration);
bool QSslConfiguration_DtlsCookieVerificationEnabled(const QSslConfiguration* self);
void QSslConfiguration_SetDtlsCookieVerificationEnabled(QSslConfiguration* self, bool enable);
QSslConfiguration* QSslConfiguration_DefaultDtlsConfiguration();
void QSslConfiguration_SetDefaultDtlsConfiguration(QSslConfiguration* configuration);
bool QSslConfiguration_HandshakeMustInterruptOnError(const QSslConfiguration* self);
void QSslConfiguration_SetHandshakeMustInterruptOnError(QSslConfiguration* self, bool interrupt);
bool QSslConfiguration_MissingCertificateIsFatal(const QSslConfiguration* self);
void QSslConfiguration_SetMissingCertificateIsFatal(QSslConfiguration* self, bool cannotRecover);
void QSslConfiguration_SetOcspStaplingEnabled(QSslConfiguration* self, bool enable);
bool QSslConfiguration_OcspStaplingEnabled(const QSslConfiguration* self);
void QSslConfiguration_SetAllowedNextProtocols(QSslConfiguration* self, libqt_list /* of libqt_string */ protocols);
libqt_list /* of libqt_string */ QSslConfiguration_AllowedNextProtocols(const QSslConfiguration* self);
libqt_string QSslConfiguration_NextNegotiatedProtocol(const QSslConfiguration* self);
int QSslConfiguration_NextProtocolNegotiationStatus(const QSslConfiguration* self);
bool QSslConfiguration_AddCaCertificates2(QSslConfiguration* self, libqt_string path, int format);
bool QSslConfiguration_AddCaCertificates3(QSslConfiguration* self, libqt_string path, int format, int syntax);
void QSslConfiguration_Delete(QSslConfiguration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
