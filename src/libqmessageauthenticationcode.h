#pragma once
#ifndef SRCC_LIBQMESSAGEAUTHENTICATIONCODE_H
#define SRCC_LIBQMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QIODevice QIODevice;
typedef struct QMessageAuthenticationCode QMessageAuthenticationCode;
#endif

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method);
QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, QByteArrayView* key);
void QMessageAuthenticationCode_Swap(QMessageAuthenticationCode* self, QMessageAuthenticationCode* other);
void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, QByteArrayView* key);
void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length);
void QMessageAuthenticationCode_AddData2(QMessageAuthenticationCode* self, QByteArrayView* data);
bool QMessageAuthenticationCode_AddData3(QMessageAuthenticationCode* self, QIODevice* device);
QByteArrayView* QMessageAuthenticationCode_ResultView(const QMessageAuthenticationCode* self);
libqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self);
libqt_string QMessageAuthenticationCode_Hash(QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_HashInto(libqt_list /* of char */ buffer, QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_HashInto2(libqt_list /* of unsigned char */ buffer, QByteArrayView* message, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_HashInto4(libqt_list /* of char */ buffer, libqt_list /* of QByteArrayView* */ messageParts, QByteArrayView* key, int method);
QByteArrayView* QMessageAuthenticationCode_HashInto5(libqt_list /* of unsigned char */ buffer, libqt_list /* of QByteArrayView* */ messageParts, QByteArrayView* key, int method);
void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
