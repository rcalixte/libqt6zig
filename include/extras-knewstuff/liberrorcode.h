#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBERRORCODE_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBERRORCODE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* KNSCore__ErrorCode_GetEnumMetaObject(int param1);
const char* KNSCore__ErrorCode_GetEnumName(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
