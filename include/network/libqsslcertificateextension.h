#pragma once
#ifndef SRC_NETWORKC_LIBQSSLCERTIFICATEEXTENSION_H
#define SRC_NETWORKC_LIBQSSLCERTIFICATEEXTENSION_H

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
typedef struct QSslCertificateExtension QSslCertificateExtension;
typedef struct QVariant QVariant;
#endif

QSslCertificateExtension* QSslCertificateExtension_new();
QSslCertificateExtension* QSslCertificateExtension_new2(const QSslCertificateExtension* other);
void QSslCertificateExtension_OperatorAssign(QSslCertificateExtension* self, const QSslCertificateExtension* other);
void QSslCertificateExtension_Swap(QSslCertificateExtension* self, QSslCertificateExtension* other);
libqt_string QSslCertificateExtension_Oid(const QSslCertificateExtension* self);
libqt_string QSslCertificateExtension_Name(const QSslCertificateExtension* self);
QVariant* QSslCertificateExtension_Value(const QSslCertificateExtension* self);
bool QSslCertificateExtension_IsCritical(const QSslCertificateExtension* self);
bool QSslCertificateExtension_IsSupported(const QSslCertificateExtension* self);
void QSslCertificateExtension_Delete(QSslCertificateExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
