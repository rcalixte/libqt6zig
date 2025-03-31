#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H
#define SRC_WEBENGINEC_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H

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
typedef struct QWebEngineClientCertificateSelection QWebEngineClientCertificateSelection;
#endif

QWebEngineClientCertificateSelection* QWebEngineClientCertificateSelection_new(QWebEngineClientCertificateSelection* param1);
void QWebEngineClientCertificateSelection_OperatorAssign(QWebEngineClientCertificateSelection* self, QWebEngineClientCertificateSelection* param1);
QUrl* QWebEngineClientCertificateSelection_Host(const QWebEngineClientCertificateSelection* self);
void QWebEngineClientCertificateSelection_Select(QWebEngineClientCertificateSelection* self, QSslCertificate* certificate);
void QWebEngineClientCertificateSelection_SelectNone(QWebEngineClientCertificateSelection* self);
libqt_list /* of QSslCertificate* */ QWebEngineClientCertificateSelection_Certificates(const QWebEngineClientCertificateSelection* self);
void QWebEngineClientCertificateSelection_Delete(QWebEngineClientCertificateSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
