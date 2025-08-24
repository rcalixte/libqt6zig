#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKCONFIGGUI_H
#define SRC_EXTRAS_KCONFIGC_LIBKCONFIGGUI_H

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
typedef struct KConfigGui KConfigGui;
#endif

KConfig* KConfigGui_SessionConfig();
void KConfigGui_SetSessionConfig(const libqt_string param1, const libqt_string param2);
bool KConfigGui_HasSessionConfig();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
