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

libqt_string QPasswordDigestor_DeriveKeyPbkdf1(int algorithm, const libqt_string password, const libqt_string salt, int iterations, unsigned long long dkLen);
libqt_string QPasswordDigestor_DeriveKeyPbkdf2(int algorithm, const libqt_string password, const libqt_string salt, int iterations, unsigned long long dkLen);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
