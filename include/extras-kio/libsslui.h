#pragma once
#ifndef EXTRAS_KIO_LIBSSLUI_H
#define EXTRAS_KIO_LIBSSLUI_H

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

bool KIO__SslUi_AskIgnoreSslErrors(const KSslErrorUiData* uiData, int storedRules);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
