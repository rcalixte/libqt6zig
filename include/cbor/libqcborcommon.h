#pragma once
#ifndef SRC_CBORC_LIBQCBORCOMMON_H
#define SRC_CBORC_LIBQCBORCOMMON_H

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
typedef struct QCborError QCborError;
#endif

#ifdef __cplusplus
typedef QCborError::Code Code;                     // C++ enum
typedef QCborError::QtGadgetHelper QtGadgetHelper; // C++ QFlags
typedef QCborKnownTags QCborKnownTags;             // C++ enum
typedef QCborNegativeInteger QCborNegativeInteger; // C++ enum
typedef QCborSimpleType QCborSimpleType;           // C++ enum
typedef QCborTag QCborTag;                         // C++ enum
#else
typedef int Code;                                // C ABI enum
typedef int QCborKnownTags;                      // C ABI enum
typedef unsigned char QCborSimpleType;           // C ABI enum
typedef unsigned long long QCborNegativeInteger; // C ABI enum
typedef unsigned long long QCborTag;             // C ABI enum
typedef void QtGadgetHelper;                     // C ABI QFlags
#endif

int QCborError_ToQCborError__Code(const QCborError* self);
libqt_string QCborError_ToString(const QCborError* self);
void QCborError_Delete(QCborError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
