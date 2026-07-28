#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKHELPCLIENT_H
#define EXTRAS_KCONFIGWIDGETS_LIBKHELPCLIENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KHelpClient KHelpClient;
#endif

void KHelpClient_InvokeHelp(const libqt_string anchor, const libqt_string appname);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
