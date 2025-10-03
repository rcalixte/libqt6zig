#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBPARTLOADER_H
#define SRC_EXTRAS_KPARTSC_LIBPARTLOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KParts KParts;
typedef struct KPluginMetaData KPluginMetaData;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* KParts_GetEnumMetaObject(int param1);
const char* KParts_GetEnumName(int param1);
QMetaObject* KParts_GetEnumMetaObject2(int param1);
const char* KParts_GetEnumName2(int param1);

int KParts__PartLoader_PartCapabilities(const KPluginMetaData* param1);
libqt_list /* of KPluginMetaData* */ KParts__PartLoader_PartsForMimeType(const libqt_string param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
