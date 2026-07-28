#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKRUNTIMEPLATFORM_H
#define EXTRAS_KCOREADDONS_LIBKRUNTIMEPLATFORM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KRuntimePlatform KRuntimePlatform;
#endif

libqt_list /* of libqt_string */ KRuntimePlatform_RuntimePlatform();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
