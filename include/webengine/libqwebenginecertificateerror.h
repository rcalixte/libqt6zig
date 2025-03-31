#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECERTIFICATEERROR_H
#define SRC_WEBENGINEC_LIBQWEBENGINECERTIFICATEERROR_H

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
typedef struct QUrl QUrl;
typedef struct QWebEngineCertificateError QWebEngineCertificateError;
#endif

#ifdef __cplusplus
typedef QWebEngineCertificateError::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QWebEngineCertificateError::Type Type;                     // C++ enum
#else
typedef unsigned char Type;  // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QWebEngineCertificateError* QWebEngineCertificateError_new(QWebEngineCertificateError* other);
void QWebEngineCertificateError_OperatorAssign(QWebEngineCertificateError* self, QWebEngineCertificateError* other);
int QWebEngineCertificateError_Type(const QWebEngineCertificateError* self);
QUrl* QWebEngineCertificateError_Url(const QWebEngineCertificateError* self);
bool QWebEngineCertificateError_IsOverridable(const QWebEngineCertificateError* self);
libqt_string QWebEngineCertificateError_Description(const QWebEngineCertificateError* self);
void QWebEngineCertificateError_Defer(QWebEngineCertificateError* self);
void QWebEngineCertificateError_RejectCertificate(QWebEngineCertificateError* self);
void QWebEngineCertificateError_AcceptCertificate(QWebEngineCertificateError* self);
libqt_list /* of QSslCertificate* */ QWebEngineCertificateError_CertificateChain(const QWebEngineCertificateError* self);
void QWebEngineCertificateError_Delete(QWebEngineCertificateError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
