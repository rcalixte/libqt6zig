#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKSHAREDCONFIG_H
#define SRC_EXTRAS_KCONFIGC_LIBKSHAREDCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KConfig KConfig;
typedef struct KConfigBase KConfigBase;
typedef struct KSharedConfig KSharedConfig;
typedef struct QSharedData QSharedData;
#endif

#ifdef __cplusplus
} /* extern C */
#endif

#endif
