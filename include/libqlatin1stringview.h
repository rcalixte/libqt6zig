#pragma once
#ifndef SRCC_LIBQLATIN1STRINGVIEW_H
#define SRCC_LIBQLATIN1STRINGVIEW_H

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
typedef struct QLatin1Char QLatin1Char;
#endif

ptrdiff_t QLatin1String_MaxSize2();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
