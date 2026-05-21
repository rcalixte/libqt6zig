#pragma once
#ifndef SRCC_LIBQSTRINGVIEW_H
#define SRCC_LIBQSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
#endif

ptrdiff_t QStringView_MaxSize2();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
