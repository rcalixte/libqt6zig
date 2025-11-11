#pragma once
#ifndef SRCC_LIBQMESSAGEAUTHENTICATIONCODE_H
#define SRCC_LIBQMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>

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
QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, libqt_string key);
void QMessageAuthenticationCode_Swap(QMessageAuthenticationCode* self, QMessageAuthenticationCode* other);
void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, libqt_string key);
void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length);
void QMessageAuthenticationCode_AddData2(QMessageAuthenticationCode* self, libqt_string data);
bool QMessageAuthenticationCode_AddData3(QMessageAuthenticationCode* self, QIODevice* device);
libqt_string QMessageAuthenticationCode_ResultView(const QMessageAuthenticationCode* self);
libqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self);
libqt_string QMessageAuthenticationCode_Hash(libqt_string message, libqt_string key, int method);
libqt_string QMessageAuthenticationCode_HashInto(libqt_list /* of char */ buffer, libqt_string message, libqt_string key, int method);
libqt_string QMessageAuthenticationCode_HashInto2(libqt_list /* of unsigned char */ buffer, libqt_string message, libqt_string key, int method);
libqt_string QMessageAuthenticationCode_HashInto4(libqt_list /* of char */ buffer, libqt_list /* of libqt_string */ messageParts, libqt_string key, int method);
libqt_string QMessageAuthenticationCode_HashInto5(libqt_list /* of unsigned char */ buffer, libqt_list /* of libqt_string */ messageParts, libqt_string key, int method);
void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
