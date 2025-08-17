#pragma once
#ifndef SRCC_LIBQDIRLISTING_H
#define SRCC_LIBQDIRLISTING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__DirEntry)
typedef QDirListing::DirEntry QDirListing__DirEntry;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__const_iterator)
typedef QDirListing::const_iterator QDirListing__const_iterator;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDirListing__sentinel)
typedef QDirListing::sentinel QDirListing__sentinel;
#endif
#else
typedef struct QDateTime QDateTime;
typedef struct QDirListing QDirListing;
typedef struct QDirListing__DirEntry QDirListing__DirEntry;
typedef struct QDirListing__const_iterator QDirListing__const_iterator;
typedef struct QDirListing__sentinel QDirListing__sentinel;
typedef struct QFileInfo QFileInfo;
typedef struct QTimeZone QTimeZone;
#endif

QDirListing* QDirListing_new(const libqt_string path);
QDirListing* QDirListing_new2(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters);
QDirListing* QDirListing_new3(const libqt_string path, int flags);
QDirListing* QDirListing_new4(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters, int flags);
void QDirListing_Swap(QDirListing* self, QDirListing* other);
libqt_string QDirListing_IteratorPath(const QDirListing* self);
int QDirListing_IteratorFlags(const QDirListing* self);
libqt_list /* of libqt_string */ QDirListing_NameFilters(const QDirListing* self);
QDirListing__const_iterator* QDirListing_Begin(const QDirListing* self);
QDirListing__const_iterator* QDirListing_Cbegin(const QDirListing* self);
QDirListing__sentinel* QDirListing_End(const QDirListing* self);
QDirListing__sentinel* QDirListing_Cend(const QDirListing* self);
QDirListing__const_iterator* QDirListing_ConstBegin(const QDirListing* self);
QDirListing__sentinel* QDirListing_ConstEnd(const QDirListing* self);
void QDirListing_Delete(QDirListing* self);

QDirListing__DirEntry* QDirListing__DirEntry_new(const QDirListing__DirEntry* other);
QDirListing__DirEntry* QDirListing__DirEntry_new2(QDirListing__DirEntry* other);
QDirListing__DirEntry* QDirListing__DirEntry_new3(const QDirListing__DirEntry* param1);
QDirListing__DirEntry* QDirListing__DirEntry_new4();
void QDirListing__DirEntry_CopyAssign(QDirListing__DirEntry* self, QDirListing__DirEntry* other);
void QDirListing__DirEntry_MoveAssign(QDirListing__DirEntry* self, QDirListing__DirEntry* other);
libqt_string QDirListing__DirEntry_FileName(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_BaseName(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_CompleteBaseName(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_Suffix(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_BundleName(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_CompleteSuffix(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_FilePath(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsDir(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsFile(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsSymLink(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_Exists(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsHidden(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsReadable(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsWritable(const QDirListing__DirEntry* self);
bool QDirListing__DirEntry_IsExecutable(const QDirListing__DirEntry* self);
QFileInfo* QDirListing__DirEntry_FileInfo(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_CanonicalFilePath(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_AbsoluteFilePath(const QDirListing__DirEntry* self);
libqt_string QDirListing__DirEntry_AbsolutePath(const QDirListing__DirEntry* self);
long long QDirListing__DirEntry_Size(const QDirListing__DirEntry* self);
QDateTime* QDirListing__DirEntry_BirthTime(const QDirListing__DirEntry* self, const QTimeZone* tz);
QDateTime* QDirListing__DirEntry_MetadataChangeTime(const QDirListing__DirEntry* self, const QTimeZone* tz);
QDateTime* QDirListing__DirEntry_LastModified(const QDirListing__DirEntry* self, const QTimeZone* tz);
QDateTime* QDirListing__DirEntry_LastRead(const QDirListing__DirEntry* self, const QTimeZone* tz);
QDateTime* QDirListing__DirEntry_FileTime(const QDirListing__DirEntry* self, int typeVal, const QTimeZone* tz);
void QDirListing__DirEntry_OperatorAssign(QDirListing__DirEntry* self, const QDirListing__DirEntry* param1);
void QDirListing__DirEntry_Delete(QDirListing__DirEntry* self);

QDirListing__sentinel* QDirListing__sentinel_new(const QDirListing__sentinel* other);
QDirListing__sentinel* QDirListing__sentinel_new2(QDirListing__sentinel* other);
QDirListing__sentinel* QDirListing__sentinel_new3();
QDirListing__sentinel* QDirListing__sentinel_new4(const QDirListing__sentinel* param1);
void QDirListing__sentinel_CopyAssign(QDirListing__sentinel* self, QDirListing__sentinel* other);
void QDirListing__sentinel_MoveAssign(QDirListing__sentinel* self, QDirListing__sentinel* other);
void QDirListing__sentinel_Delete(QDirListing__sentinel* self);

QDirListing__const_iterator* QDirListing__const_iterator_new2(QDirListing__const_iterator* other);
void QDirListing__const_iterator_MoveAssign(QDirListing__const_iterator* self, QDirListing__const_iterator* other);
QDirListing__DirEntry* QDirListing__const_iterator_OperatorMultiply(const QDirListing__const_iterator* self);
QDirListing__const_iterator* QDirListing__const_iterator_OperatorPlusPlus(QDirListing__const_iterator* self);
void QDirListing__const_iterator_OperatorPlusPlus2(QDirListing__const_iterator* self, int param1);
void QDirListing__const_iterator_Delete(QDirListing__const_iterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
