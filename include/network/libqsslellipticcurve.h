#pragma once
#ifndef SRC_NETWORKC_LIBQSSLELLIPTICCURVE_H
#define SRC_NETWORKC_LIBQSSLELLIPTICCURVE_H

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
typedef struct QSslEllipticCurve QSslEllipticCurve;
#endif

QSslEllipticCurve* QSslEllipticCurve_new(const QSslEllipticCurve* other);
QSslEllipticCurve* QSslEllipticCurve_new2(QSslEllipticCurve* other);
QSslEllipticCurve* QSslEllipticCurve_new3();
QSslEllipticCurve* QSslEllipticCurve_new4(const QSslEllipticCurve* param1);
void QSslEllipticCurve_CopyAssign(QSslEllipticCurve* self, QSslEllipticCurve* other);
void QSslEllipticCurve_MoveAssign(QSslEllipticCurve* self, QSslEllipticCurve* other);
QSslEllipticCurve* QSslEllipticCurve_FromShortName(const libqt_string name);
QSslEllipticCurve* QSslEllipticCurve_FromLongName(const libqt_string name);
libqt_string QSslEllipticCurve_ShortName(const QSslEllipticCurve* self);
libqt_string QSslEllipticCurve_LongName(const QSslEllipticCurve* self);
bool QSslEllipticCurve_IsValid(const QSslEllipticCurve* self);
bool QSslEllipticCurve_IsTlsNamedCurve(const QSslEllipticCurve* self);
void QSslEllipticCurve_Delete(QSslEllipticCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
