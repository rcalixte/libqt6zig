#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_VERSION_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_VERSION_H

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
