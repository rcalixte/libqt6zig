#pragma once
#ifndef LIBQTENVIRONMENTVARIABLES_H
#define LIBQTENVIRONMENTVARIABLES_H

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

libqt_string qtenvironmentvariables_h_Qgetenv(const char* varName);
bool qtenvironmentvariables_h_Qputenv(const char* varName, libqt_string value);
bool qtenvironmentvariables_h_Qunsetenv(const char* varName);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
