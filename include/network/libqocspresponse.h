#pragma once
#ifndef SRC_NETWORKC_LIBQOCSPRESPONSE_H
#define SRC_NETWORKC_LIBQOCSPRESPONSE_H

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
typedef struct QOcspResponse QOcspResponse;
typedef struct QSslCertificate QSslCertificate;
#endif

QOcspResponse* QOcspResponse_new();
QOcspResponse* QOcspResponse_new2(const QOcspResponse* other);
void QOcspResponse_OperatorAssign(QOcspResponse* self, const QOcspResponse* other);
int QOcspResponse_CertificateStatus(const QOcspResponse* self);
int QOcspResponse_RevocationReason(const QOcspResponse* self);
QSslCertificate* QOcspResponse_Responder(const QOcspResponse* self);
QSslCertificate* QOcspResponse_Subject(const QOcspResponse* self);
void QOcspResponse_Swap(QOcspResponse* self, QOcspResponse* other);
void QOcspResponse_Delete(QOcspResponse* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
