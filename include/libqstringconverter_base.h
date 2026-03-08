#pragma once
#ifndef SRCC_LIBQSTRINGCONVERTER_BASE_H
#define SRCC_LIBQSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStringConverter QStringConverter;
#endif

bool QStringConverter_IsValid(const QStringConverter* self);
void QStringConverter_ResetState(QStringConverter* self);
bool QStringConverter_HasError(const QStringConverter* self);
const char* QStringConverter_Name(const QStringConverter* self);
const char* QStringConverter_NameForEncoding(int e);
libqt_list /* of libqt_string */ QStringConverter_AvailableCodecs();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
