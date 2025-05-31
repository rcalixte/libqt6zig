#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECLIENTCERTIFICATESTORE_H
#define SRC_WEBENGINEC_LIBQWEBENGINECLIENTCERTIFICATESTORE_H

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
typedef struct QSslKey QSslKey;
typedef struct QWebEngineClientCertificateStore QWebEngineClientCertificateStore;
#endif

void QWebEngineClientCertificateStore_Add(QWebEngineClientCertificateStore* self, const QSslCertificate* certificate, const QSslKey* privateKey);
libqt_list /* of QSslCertificate* */ QWebEngineClientCertificateStore_Certificates(const QWebEngineClientCertificateStore* self);
void QWebEngineClientCertificateStore_Remove(QWebEngineClientCertificateStore* self, const QSslCertificate* certificate);
void QWebEngineClientCertificateStore_Clear(QWebEngineClientCertificateStore* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
