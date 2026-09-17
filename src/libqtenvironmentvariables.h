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

libqt_string qtenvironmentvariables_Qgetenv(const char* varName);
libqt_string qtenvironmentvariables_QEnvironmentVariable(const char* varName);
libqt_string qtenvironmentvariables_QEnvironmentVariable2(const char* varName, const libqt_string defaultValue);
bool qtenvironmentvariables_Qputenv(const char* varName, libqt_string value);
bool qtenvironmentvariables_Qunsetenv(const char* varName);
bool qtenvironmentvariables_QEnvironmentVariableIsEmpty(const char* varName);
bool qtenvironmentvariables_QEnvironmentVariableIsSet(const char* varName);
int qtenvironmentvariables_QEnvironmentVariableIntValue(const char* varName, bool* ok);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
