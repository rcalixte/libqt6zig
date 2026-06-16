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

QJsonValue* KJsonUtils_ReadTranslatedValue(const QJsonObject* jo, const libqt_string key, const QJsonValue* defaultValue);
libqt_string KJsonUtils_ReadTranslatedString(const QJsonObject* jo, const libqt_string key, const libqt_string defaultValue);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
