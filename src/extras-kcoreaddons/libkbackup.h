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

bool KBackup_SimpleBackupFile(const libqt_string filename, const libqt_string backupDir, const libqt_string backupExtension);
bool KBackup_NumberedBackupFile(const libqt_string filename, const libqt_string backupDir, const libqt_string backupExtension, const unsigned int maxBackups);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
