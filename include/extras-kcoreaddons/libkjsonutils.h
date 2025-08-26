#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKJSONUTILS_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKJSONUTILS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KJsonUtils KJsonUtils;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonValue QJsonValue;
#endif

QJsonValue* KJsonUtils_ReadTranslatedValue(const QJsonObject* param1, const libqt_string param2, const QJsonValue* param3);
libqt_string KJsonUtils_ReadTranslatedString(const QJsonObject* param1, const libqt_string param2, const libqt_string param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
