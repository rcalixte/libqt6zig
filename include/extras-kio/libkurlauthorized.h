#pragma once
#ifndef EXTRAS_KIO_LIBKURLAUTHORIZED_H
#define EXTRAS_KIO_LIBKURLAUTHORIZED_H

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

bool KUrlAuthorized_AuthorizeUrlAction(const libqt_string action, const QUrl* baseUrl, const QUrl* destUrl);
void KUrlAuthorized_AllowUrlAction(const libqt_string action, const QUrl* baseUrl, const QUrl* destUrl);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
