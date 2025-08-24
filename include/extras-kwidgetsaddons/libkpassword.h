#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKPASSWORD_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKPASSWORD_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPassword KPassword;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* KPassword_GetEnumMetaObject(int param1);
const char* KPassword_GetEnumName(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
