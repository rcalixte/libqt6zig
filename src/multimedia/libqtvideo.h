#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQTVIDEO_H
#define SRC_MULTIMEDIAC_LIBQTVIDEO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaObject QMetaObject;
typedef struct QtVideo QtVideo;
#endif

QMetaObject* QtVideo_GetEnumMetaObject(int param1);
const char* QtVideo_GetEnumName(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
