#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKCOREADDONS_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKCOREADDONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCoreAddons KCoreAddons;
#endif

libqt_string KCoreAddons_VersionString();
unsigned int KCoreAddons_Version();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
