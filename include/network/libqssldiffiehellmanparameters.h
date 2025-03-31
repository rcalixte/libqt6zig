#pragma once
#ifndef SRC_NETWORKC_LIBQSSLDIFFIEHELLMANPARAMETERS_H
#define SRC_NETWORKC_LIBQSSLDIFFIEHELLMANPARAMETERS_H

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
typedef struct QSslDiffieHellmanParameters QSslDiffieHellmanParameters;
#endif

#ifdef __cplusplus
typedef QSslDiffieHellmanParameters::Error Error; // C++ enum
#else
typedef int Error; // C ABI enum
#endif

QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new();
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_new2(QSslDiffieHellmanParameters* other);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_DefaultParameters();
void QSslDiffieHellmanParameters_OperatorAssign(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other);
void QSslDiffieHellmanParameters_Swap(QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded(libqt_string encoded);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncodedWithDevice(QIODevice* device);
bool QSslDiffieHellmanParameters_IsEmpty(const QSslDiffieHellmanParameters* self);
bool QSslDiffieHellmanParameters_IsValid(const QSslDiffieHellmanParameters* self);
int QSslDiffieHellmanParameters_Error(const QSslDiffieHellmanParameters* self);
libqt_string QSslDiffieHellmanParameters_ErrorString(const QSslDiffieHellmanParameters* self);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded2(libqt_string encoded, int format);
QSslDiffieHellmanParameters* QSslDiffieHellmanParameters_FromEncoded22(QIODevice* device, int format);
void QSslDiffieHellmanParameters_Delete(QSslDiffieHellmanParameters* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
