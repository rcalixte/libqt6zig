#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKBACKUP_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKBACKUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBackup KBackup;
#endif

bool KBackup_SimpleBackupFile(const libqt_string param1, const libqt_string param2, const libqt_string param3);
bool KBackup_NumberedBackupFile(const libqt_string param1, const libqt_string param2, const libqt_string param3, const unsigned int param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
