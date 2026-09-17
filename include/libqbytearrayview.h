#pragma once
#ifndef LIBQBYTEARRAYVIEW_H
#define LIBQBYTEARRAYVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

ptrdiff_t QByteArrayView_MaxSize2();

uint16_t qbytearrayview_QChecksum(const char* s, ptrdiff_t len, int standard);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
