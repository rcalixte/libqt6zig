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
typedef struct QIODevice QIODevice;
typedef struct QMessageAuthenticationCode QMessageAuthenticationCode;
#endif

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method);
QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, const libqt_string key);
void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self);
void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, const libqt_string key);
void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length);
void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, const libqt_string data);
bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device);
libqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self);
libqt_string QMessageAuthenticationCode_Hash(const libqt_string message, const libqt_string key, int method);
void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
