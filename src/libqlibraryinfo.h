#pragma once
#ifndef SRCC_LIBQLIBRARYINFO_H
#define SRCC_LIBQLIBRARYINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLibraryInfo QLibraryInfo;
typedef struct QVersionNumber QVersionNumber;
#endif

QLibraryInfo* QLibraryInfo_new(const QLibraryInfo* other);
QLibraryInfo* QLibraryInfo_new2(QLibraryInfo* other);
void QLibraryInfo_CopyAssign(QLibraryInfo* self, QLibraryInfo* other);
void QLibraryInfo_MoveAssign(QLibraryInfo* self, QLibraryInfo* other);
const char* QLibraryInfo_Build();
bool QLibraryInfo_IsDebugBuild();
bool QLibraryInfo_IsSharedBuild();
QVersionNumber* QLibraryInfo_Version();
libqt_string QLibraryInfo_Path(int p);
libqt_list /* of libqt_string */ QLibraryInfo_Paths(int p);
libqt_string QLibraryInfo_Location(int location);
libqt_list /* of libqt_string */ QLibraryInfo_PlatformPluginArguments(const libqt_string platformName);
void QLibraryInfo_Delete(QLibraryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
