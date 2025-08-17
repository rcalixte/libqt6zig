#pragma once
#ifndef SRC_CBORC_LIBQCBORCOMMON_H
#define SRC_CBORC_LIBQCBORCOMMON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCborError QCborError;
#endif

int QCborError_ToQCborError__Code(const QCborError* self);
libqt_string QCborError_ToString(const QCborError* self);
void QCborError_Delete(QCborError* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
