#pragma once
#ifndef SRC_NETWORKC_LIBQSSLERROR_H
#define SRC_NETWORKC_LIBQSSLERROR_H

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
typedef struct QSslError QSslError;
#endif

#ifdef __cplusplus
typedef QSslError::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QSslError::SslError SslError;             // C++ enum
#else
typedef int SslError;        // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QSslError* QSslError_new();
QSslError* QSslError_new2(int errorVal);
QSslError* QSslError_new3(int errorVal, const QSslCertificate* certificate);
QSslError* QSslError_new4(const QSslError* other);
void QSslError_Swap(QSslError* self, QSslError* other);
void QSslError_OperatorAssign(QSslError* self, const QSslError* other);
bool QSslError_OperatorEqual(const QSslError* self, const QSslError* other);
bool QSslError_OperatorNotEqual(const QSslError* self, const QSslError* other);
int QSslError_Error(const QSslError* self);
libqt_string QSslError_ErrorString(const QSslError* self);
QSslCertificate* QSslError_Certificate(const QSslError* self);
void QSslError_Delete(QSslError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
