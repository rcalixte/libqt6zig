#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBVERSION_H
#define SRC_EXTRAS_ATTICAC_LIBVERSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct Attica Attica;
#endif

unsigned int Attica_VersionMajor();
unsigned int Attica_VersionMinor();
unsigned int Attica_VersionRelease();
const char* Attica_VersionString();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
