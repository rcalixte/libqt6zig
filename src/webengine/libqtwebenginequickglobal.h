#pragma once
#ifndef WEBENGINE_LIBQTWEBENGINEQUICKGLOBAL_H
#define WEBENGINE_LIBQTWEBENGINEQUICKGLOBAL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QtWebEngineQuick QtWebEngineQuick;
#endif

void QtWebEngineQuick_Initialize();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
