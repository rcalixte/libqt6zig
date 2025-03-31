#pragma once
#ifndef SRCC_LIBQDIRITERATOR_H
#define SRCC_LIBQDIRITERATOR_H

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
typedef struct QDir QDir;
typedef struct QDirIterator QDirIterator;
typedef struct QFileInfo QFileInfo;
#endif

#ifdef __cplusplus
typedef QDirIterator::IteratorFlag IteratorFlag;   // C++ enum
typedef QDirIterator::IteratorFlags IteratorFlags; // C++ QFlags
#else
typedef int IteratorFlag;  // C ABI enum
typedef int IteratorFlags; // C ABI QFlags
#endif

QDirIterator* QDirIterator_new(QDir* dir);
QDirIterator* QDirIterator_new2(libqt_string path);
QDirIterator* QDirIterator_new3(libqt_string path, int filter);
QDirIterator* QDirIterator_new4(libqt_string path, libqt_list /* of libqt_string */ nameFilters);
QDirIterator* QDirIterator_new5(QDir* dir, int flags);
QDirIterator* QDirIterator_new6(libqt_string path, int flags);
QDirIterator* QDirIterator_new7(libqt_string path, int filter, int flags);
QDirIterator* QDirIterator_new8(libqt_string path, libqt_list /* of libqt_string */ nameFilters, int filters);
QDirIterator* QDirIterator_new9(libqt_string path, libqt_list /* of libqt_string */ nameFilters, int filters, int flags);
libqt_string QDirIterator_Next(QDirIterator* self);
QFileInfo* QDirIterator_NextFileInfo(QDirIterator* self);
bool QDirIterator_HasNext(const QDirIterator* self);
libqt_string QDirIterator_FileName(const QDirIterator* self);
libqt_string QDirIterator_FilePath(const QDirIterator* self);
QFileInfo* QDirIterator_FileInfo(const QDirIterator* self);
libqt_string QDirIterator_Path(const QDirIterator* self);
void QDirIterator_Delete(QDirIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
