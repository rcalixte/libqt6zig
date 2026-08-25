#pragma once
#ifndef EXTRAS_KCONFIG_LIBKSHAREDCONFIG_H
#define EXTRAS_KCONFIG_LIBKSHAREDCONFIG_H

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

QSharedData* KSharedConfig_AsQSharedData(KSharedConfig* self);
void KSharedConfig_Delete(KSharedConfig* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
