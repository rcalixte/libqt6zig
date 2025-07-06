#pragma once
#ifndef SRCC_LIBQMIMETYPE_H
#define SRCC_LIBQMIMETYPE_H

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
typedef struct QMimeType QMimeType;
#endif

QMimeType* QMimeType_new();
QMimeType* QMimeType_new2(const QMimeType* other);
void QMimeType_OperatorAssign(QMimeType* self, const QMimeType* other);
void QMimeType_Swap(QMimeType* self, QMimeType* other);
bool QMimeType_IsValid(const QMimeType* self);
bool QMimeType_IsDefault(const QMimeType* self);
libqt_string QMimeType_Name(const QMimeType* self);
libqt_string QMimeType_Comment(const QMimeType* self);
libqt_string QMimeType_GenericIconName(const QMimeType* self);
libqt_string QMimeType_IconName(const QMimeType* self);
libqt_list /* of libqt_string */ QMimeType_GlobPatterns(const QMimeType* self);
libqt_list /* of libqt_string */ QMimeType_ParentMimeTypes(const QMimeType* self);
libqt_list /* of libqt_string */ QMimeType_AllAncestors(const QMimeType* self);
libqt_list /* of libqt_string */ QMimeType_Aliases(const QMimeType* self);
libqt_list /* of libqt_string */ QMimeType_Suffixes(const QMimeType* self);
libqt_string QMimeType_PreferredSuffix(const QMimeType* self);
bool QMimeType_Inherits(const QMimeType* self, const libqt_string mimeTypeName);
libqt_string QMimeType_FilterString(const QMimeType* self);
void QMimeType_Delete(QMimeType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
