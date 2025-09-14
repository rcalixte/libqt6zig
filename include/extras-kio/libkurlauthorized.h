#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKURLAUTHORIZED_H
#define SRC_EXTRAS_KIOC_LIBKURLAUTHORIZED_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KUrlAuthorized KUrlAuthorized;
typedef struct QUrl QUrl;
#endif

bool KUrlAuthorized_AuthorizeUrlAction(const libqt_string param1, const QUrl* param2, const QUrl* param3);
void KUrlAuthorized_AllowUrlAction(const libqt_string param1, const QUrl* param2, const QUrl* param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
