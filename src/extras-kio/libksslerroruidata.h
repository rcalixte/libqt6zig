#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKSSLERRORUIDATA_H
#define SRC_EXTRAS_KIOC_LIBKSSLERRORUIDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSslErrorUiData KSslErrorUiData;
typedef struct QNetworkReply QNetworkReply;
typedef struct QSslError QSslError;
typedef struct QSslSocket QSslSocket;
#endif

KSslErrorUiData* KSslErrorUiData_new();
KSslErrorUiData* KSslErrorUiData_new2(const QSslSocket* socket);
KSslErrorUiData* KSslErrorUiData_new3(const QNetworkReply* reply, const libqt_list /* of QSslError* */ sslErrors);
KSslErrorUiData* KSslErrorUiData_new4(const KSslErrorUiData* other);
void KSslErrorUiData_OperatorAssign(KSslErrorUiData* self, const KSslErrorUiData* param1);
void KSslErrorUiData_Delete(KSslErrorUiData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
