#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_VERSION_H
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_VERSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

libqt_string Poppler__Version_String();
unsigned int Poppler__Version_Major();
unsigned int Poppler__Version_Minor();
unsigned int Poppler__Version_Micro();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
