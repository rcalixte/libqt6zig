#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBSSLUI_H
#define SRC_EXTRAS_KIOC_LIBSSLUI_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSslErrorUiData KSslErrorUiData;
#endif

bool KIO__SslUi_AskIgnoreSslErrors(const KSslErrorUiData* param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
