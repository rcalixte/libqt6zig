#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQUTILS_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

QSurfaceFormat* qutils_h_QDefaultSurfaceFormat(bool antialias);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
