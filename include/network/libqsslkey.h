#pragma once
#ifndef SRC_NETWORKC_LIBQSSLKEY_H
#define SRC_NETWORKC_LIBQSSLKEY_H

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
typedef struct QIODevice QIODevice;
typedef struct QSslKey QSslKey;
#endif

QSslKey* QSslKey_new();
QSslKey* QSslKey_new2(const libqt_string encoded, int algorithm);
QSslKey* QSslKey_new3(QIODevice* device, int algorithm);
QSslKey* QSslKey_new4(void* handle);
QSslKey* QSslKey_new5(const QSslKey* other);
QSslKey* QSslKey_new6(const libqt_string encoded, int algorithm, int format);
QSslKey* QSslKey_new7(const libqt_string encoded, int algorithm, int format, int typeVal);
QSslKey* QSslKey_new8(const libqt_string encoded, int algorithm, int format, int typeVal, const libqt_string passPhrase);
QSslKey* QSslKey_new9(QIODevice* device, int algorithm, int format);
QSslKey* QSslKey_new10(QIODevice* device, int algorithm, int format, int typeVal);
QSslKey* QSslKey_new11(QIODevice* device, int algorithm, int format, int typeVal, const libqt_string passPhrase);
QSslKey* QSslKey_new12(void* handle, int typeVal);
void QSslKey_OperatorAssign(QSslKey* self, const QSslKey* other);
void QSslKey_Swap(QSslKey* self, QSslKey* other);
bool QSslKey_IsNull(const QSslKey* self);
void QSslKey_Clear(QSslKey* self);
int QSslKey_Length(const QSslKey* self);
int QSslKey_Type(const QSslKey* self);
int QSslKey_Algorithm(const QSslKey* self);
libqt_string QSslKey_ToPem(const QSslKey* self);
libqt_string QSslKey_ToDer(const QSslKey* self);
void* QSslKey_Handle(const QSslKey* self);
bool QSslKey_OperatorEqual(const QSslKey* self, const QSslKey* key);
bool QSslKey_OperatorNotEqual(const QSslKey* self, const QSslKey* key);
libqt_string QSslKey_ToPem1(const QSslKey* self, const libqt_string passPhrase);
libqt_string QSslKey_ToDer1(const QSslKey* self, const libqt_string passPhrase);
void QSslKey_Delete(QSslKey* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
