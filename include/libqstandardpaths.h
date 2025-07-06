#pragma once
#ifndef SRCC_LIBQSTANDARDPATHS_H
#define SRCC_LIBQSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStandardPaths QStandardPaths;
#endif

libqt_string QStandardPaths_WritableLocation(int typeVal);
libqt_list /* of libqt_string */ QStandardPaths_StandardLocations(int typeVal);
libqt_string QStandardPaths_Locate(int typeVal, const libqt_string fileName);
libqt_list /* of libqt_string */ QStandardPaths_LocateAll(int typeVal, const libqt_string fileName);
libqt_string QStandardPaths_DisplayName(int typeVal);
libqt_string QStandardPaths_FindExecutable(const libqt_string executableName);
void QStandardPaths_SetTestModeEnabled(bool testMode);
bool QStandardPaths_IsTestModeEnabled();
libqt_string QStandardPaths_Locate3(int typeVal, const libqt_string fileName, int options);
libqt_list /* of libqt_string */ QStandardPaths_LocateAll3(int typeVal, const libqt_string fileName, int options);
libqt_string QStandardPaths_FindExecutable2(const libqt_string executableName, const libqt_list /* of libqt_string */ paths);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
