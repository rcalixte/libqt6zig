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

QDirIterator* QDirIterator_new(const QDir* dir);
QDirIterator* QDirIterator_new2(const libqt_string path);
QDirIterator* QDirIterator_new3(const libqt_string path, int filter);
QDirIterator* QDirIterator_new4(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters);
QDirIterator* QDirIterator_new5(const QDir* dir, int flags);
QDirIterator* QDirIterator_new6(const libqt_string path, int flags);
QDirIterator* QDirIterator_new7(const libqt_string path, int filter, int flags);
QDirIterator* QDirIterator_new8(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters, int filters);
QDirIterator* QDirIterator_new9(const libqt_string path, const libqt_list /* of libqt_string */ nameFilters, int filters, int flags);
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
