#pragma once
#ifndef SRCC_LIBQFILEINFO_H
#define SRCC_LIBQFILEINFO_H

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
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QFileDevice QFileDevice;
typedef struct QFileInfo QFileInfo;
typedef struct QTimeZone QTimeZone;
#endif

QFileInfo* QFileInfo_new();
QFileInfo* QFileInfo_new2(const libqt_string file);
QFileInfo* QFileInfo_new3(const QFileDevice* file);
QFileInfo* QFileInfo_new4(const QDir* dir, const libqt_string file);
QFileInfo* QFileInfo_new5(const QFileInfo* fileinfo);
void QFileInfo_OperatorAssign(QFileInfo* self, const QFileInfo* fileinfo);
void QFileInfo_Swap(QFileInfo* self, QFileInfo* other);
void QFileInfo_SetFile(QFileInfo* self, const libqt_string file);
void QFileInfo_SetFile2(QFileInfo* self, const QFileDevice* file);
void QFileInfo_SetFile3(QFileInfo* self, const QDir* dir, const libqt_string file);
bool QFileInfo_Exists(const QFileInfo* self);
bool QFileInfo_Exists2(const libqt_string file);
void QFileInfo_Refresh(QFileInfo* self);
libqt_string QFileInfo_FilePath(const QFileInfo* self);
libqt_string QFileInfo_AbsoluteFilePath(const QFileInfo* self);
libqt_string QFileInfo_CanonicalFilePath(const QFileInfo* self);
libqt_string QFileInfo_FileName(const QFileInfo* self);
libqt_string QFileInfo_BaseName(const QFileInfo* self);
libqt_string QFileInfo_CompleteBaseName(const QFileInfo* self);
libqt_string QFileInfo_Suffix(const QFileInfo* self);
libqt_string QFileInfo_BundleName(const QFileInfo* self);
libqt_string QFileInfo_CompleteSuffix(const QFileInfo* self);
libqt_string QFileInfo_Path(const QFileInfo* self);
libqt_string QFileInfo_AbsolutePath(const QFileInfo* self);
libqt_string QFileInfo_CanonicalPath(const QFileInfo* self);
QDir* QFileInfo_Dir(const QFileInfo* self);
QDir* QFileInfo_AbsoluteDir(const QFileInfo* self);
bool QFileInfo_IsReadable(const QFileInfo* self);
bool QFileInfo_IsWritable(const QFileInfo* self);
bool QFileInfo_IsExecutable(const QFileInfo* self);
bool QFileInfo_IsHidden(const QFileInfo* self);
bool QFileInfo_IsNativePath(const QFileInfo* self);
bool QFileInfo_IsRelative(const QFileInfo* self);
bool QFileInfo_IsAbsolute(const QFileInfo* self);
bool QFileInfo_MakeAbsolute(QFileInfo* self);
bool QFileInfo_IsFile(const QFileInfo* self);
bool QFileInfo_IsDir(const QFileInfo* self);
bool QFileInfo_IsSymLink(const QFileInfo* self);
bool QFileInfo_IsSymbolicLink(const QFileInfo* self);
bool QFileInfo_IsShortcut(const QFileInfo* self);
bool QFileInfo_IsAlias(const QFileInfo* self);
bool QFileInfo_IsJunction(const QFileInfo* self);
bool QFileInfo_IsRoot(const QFileInfo* self);
bool QFileInfo_IsBundle(const QFileInfo* self);
libqt_string QFileInfo_SymLinkTarget(const QFileInfo* self);
libqt_string QFileInfo_ReadSymLink(const QFileInfo* self);
libqt_string QFileInfo_JunctionTarget(const QFileInfo* self);
libqt_string QFileInfo_Owner(const QFileInfo* self);
unsigned int QFileInfo_OwnerId(const QFileInfo* self);
libqt_string QFileInfo_Group(const QFileInfo* self);
unsigned int QFileInfo_GroupId(const QFileInfo* self);
bool QFileInfo_Permission(const QFileInfo* self, int permissions);
int QFileInfo_Permissions(const QFileInfo* self);
long long QFileInfo_Size(const QFileInfo* self);
QDateTime* QFileInfo_BirthTime(const QFileInfo* self);
QDateTime* QFileInfo_MetadataChangeTime(const QFileInfo* self);
QDateTime* QFileInfo_LastModified(const QFileInfo* self);
QDateTime* QFileInfo_LastRead(const QFileInfo* self);
QDateTime* QFileInfo_FileTime(const QFileInfo* self, int time);
QDateTime* QFileInfo_BirthTime2(const QFileInfo* self, const QTimeZone* tz);
QDateTime* QFileInfo_MetadataChangeTime2(const QFileInfo* self, const QTimeZone* tz);
QDateTime* QFileInfo_LastModified2(const QFileInfo* self, const QTimeZone* tz);
QDateTime* QFileInfo_LastRead2(const QFileInfo* self, const QTimeZone* tz);
QDateTime* QFileInfo_FileTime2(const QFileInfo* self, int time, const QTimeZone* tz);
bool QFileInfo_Caching(const QFileInfo* self);
void QFileInfo_SetCaching(QFileInfo* self, bool on);
void QFileInfo_Stat(QFileInfo* self);
void QFileInfo_Delete(QFileInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
