#pragma once
#ifndef SRC_NETWORKC_LIBQPASSWORDDIGESTOR_H
#define SRC_NETWORKC_LIBQPASSWORDDIGESTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPasswordDigestor QPasswordDigestor;
#endif

libqt_string QPasswordDigestor_DeriveKeyPbkdf1(int param1, const libqt_string param2, const libqt_string param3, int param4, unsigned long long param5);
libqt_string QPasswordDigestor_DeriveKeyPbkdf2(int param1, const libqt_string param2, const libqt_string param3, int param4, unsigned long long param5);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
