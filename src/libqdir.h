#pragma once
#ifndef SRCC_LIBQDIR_H
#define SRCC_LIBQDIR_H

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
typedef struct QChar QChar;
typedef struct QDir QDir;
typedef struct QFileInfo QFileInfo;
#endif

#ifdef __cplusplus
typedef QDir::Filter Filter;       // C++ enum
typedef QDir::Filters Filters;     // C++ QFlags
typedef QDir::SortFlag SortFlag;   // C++ enum
typedef QDir::SortFlags SortFlags; // C++ QFlags
#else
typedef int Filter;    // C ABI enum
typedef int Filters;   // C ABI QFlags
typedef int SortFlag;  // C ABI enum
typedef int SortFlags; // C ABI QFlags
#endif

QDir* QDir_new(const QDir* param1);
QDir* QDir_new2();
QDir* QDir_new3(const libqt_string path, const libqt_string nameFilter);
QDir* QDir_new4(const libqt_string path);
QDir* QDir_new5(const libqt_string path, const libqt_string nameFilter, int sort);
QDir* QDir_new6(const libqt_string path, const libqt_string nameFilter, int sort, int filter);
void QDir_OperatorAssign(QDir* self, const QDir* param1);
void QDir_Swap(QDir* self, QDir* other);
void QDir_SetPath(QDir* self, const libqt_string path);
libqt_string QDir_Path(const QDir* self);
libqt_string QDir_AbsolutePath(const QDir* self);
libqt_string QDir_CanonicalPath(const QDir* self);
void QDir_SetSearchPaths(const libqt_string prefix, const libqt_list /* of libqt_string */ searchPaths);
void QDir_AddSearchPath(const libqt_string prefix, const libqt_string path);
libqt_list /* of libqt_string */ QDir_SearchPaths(const libqt_string prefix);
libqt_string QDir_DirName(const QDir* self);
libqt_string QDir_FilePath(const QDir* self, const libqt_string fileName);
libqt_string QDir_AbsoluteFilePath(const QDir* self, const libqt_string fileName);
libqt_string QDir_RelativeFilePath(const QDir* self, const libqt_string fileName);
libqt_string QDir_ToNativeSeparators(const libqt_string pathName);
libqt_string QDir_FromNativeSeparators(const libqt_string pathName);
bool QDir_Cd(QDir* self, const libqt_string dirName);
bool QDir_CdUp(QDir* self);
libqt_list /* of libqt_string */ QDir_NameFilters(const QDir* self);
void QDir_SetNameFilters(QDir* self, const libqt_list /* of libqt_string */ nameFilters);
int QDir_Filter(const QDir* self);
void QDir_SetFilter(QDir* self, int filter);
int QDir_Sorting(const QDir* self);
void QDir_SetSorting(QDir* self, int sort);
unsigned int QDir_Count(const QDir* self);
bool QDir_IsEmpty(const QDir* self);
libqt_string QDir_OperatorSubscript(const QDir* self, int param1);
libqt_list /* of libqt_string */ QDir_NameFiltersFromString(const libqt_string nameFilter);
libqt_list /* of libqt_string */ QDir_EntryList(const QDir* self);
libqt_list /* of libqt_string */ QDir_EntryListWithNameFilters(const QDir* self, const libqt_list /* of libqt_string */ nameFilters);
libqt_list /* of QFileInfo* */ QDir_EntryInfoList(const QDir* self);
libqt_list /* of QFileInfo* */ QDir_EntryInfoListWithNameFilters(const QDir* self, const libqt_list /* of libqt_string */ nameFilters);
bool QDir_Mkdir(const QDir* self, const libqt_string dirName);
bool QDir_Mkdir2(const QDir* self, const libqt_string dirName, int permissions);
bool QDir_Rmdir(const QDir* self, const libqt_string dirName);
bool QDir_Mkpath(const QDir* self, const libqt_string dirPath);
bool QDir_Rmpath(const QDir* self, const libqt_string dirPath);
bool QDir_RemoveRecursively(QDir* self);
bool QDir_IsReadable(const QDir* self);
bool QDir_Exists(const QDir* self);
bool QDir_IsRoot(const QDir* self);
bool QDir_IsRelativePath(const libqt_string path);
bool QDir_IsAbsolutePath(const libqt_string path);
bool QDir_IsRelative(const QDir* self);
bool QDir_IsAbsolute(const QDir* self);
bool QDir_MakeAbsolute(QDir* self);
bool QDir_OperatorEqual(const QDir* self, const QDir* dir);
bool QDir_OperatorNotEqual(const QDir* self, const QDir* dir);
bool QDir_Remove(QDir* self, const libqt_string fileName);
bool QDir_Rename(QDir* self, const libqt_string oldName, const libqt_string newName);
bool QDir_ExistsWithName(const QDir* self, const libqt_string name);
libqt_list /* of QFileInfo* */ QDir_Drives();
QChar* QDir_ListSeparator();
QChar* QDir_Separator();
bool QDir_SetCurrent(const libqt_string path);
QDir* QDir_Current();
libqt_string QDir_CurrentPath();
QDir* QDir_Home();
libqt_string QDir_HomePath();
QDir* QDir_Root();
libqt_string QDir_RootPath();
QDir* QDir_Temp();
libqt_string QDir_TempPath();
bool QDir_Match(const libqt_list /* of libqt_string */ filters, const libqt_string fileName);
bool QDir_Match2(const libqt_string filter, const libqt_string fileName);
libqt_string QDir_CleanPath(const libqt_string path);
void QDir_Refresh(const QDir* self);
bool QDir_IsEmpty1(const QDir* self, int filters);
libqt_list /* of libqt_string */ QDir_EntryList1(const QDir* self, int filters);
libqt_list /* of libqt_string */ QDir_EntryList2(const QDir* self, int filters, int sort);
libqt_list /* of libqt_string */ QDir_EntryList22(const QDir* self, const libqt_list /* of libqt_string */ nameFilters, int filters);
libqt_list /* of libqt_string */ QDir_EntryList3(const QDir* self, const libqt_list /* of libqt_string */ nameFilters, int filters, int sort);
libqt_list /* of QFileInfo* */ QDir_EntryInfoList1(const QDir* self, int filters);
libqt_list /* of QFileInfo* */ QDir_EntryInfoList2(const QDir* self, int filters, int sort);
libqt_list /* of QFileInfo* */ QDir_EntryInfoList22(const QDir* self, const libqt_list /* of libqt_string */ nameFilters, int filters);
libqt_list /* of QFileInfo* */ QDir_EntryInfoList3(const QDir* self, const libqt_list /* of libqt_string */ nameFilters, int filters, int sort);
void QDir_Delete(QDir* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
