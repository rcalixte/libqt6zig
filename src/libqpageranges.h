#pragma once
#ifndef SRCC_LIBQPAGERANGES_H
#define SRCC_LIBQPAGERANGES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPageRanges__Range)
typedef QPageRanges::Range QPageRanges__Range;
#endif
#else
typedef struct QPageRanges QPageRanges;
typedef struct QPageRanges__Range QPageRanges__Range;
#endif

QPageRanges* QPageRanges_new();
QPageRanges* QPageRanges_new2(const QPageRanges* other);
void QPageRanges_OperatorAssign(QPageRanges* self, const QPageRanges* other);
void QPageRanges_Swap(QPageRanges* self, QPageRanges* other);
void QPageRanges_AddPage(QPageRanges* self, int pageNumber);
void QPageRanges_AddRange(QPageRanges* self, int from, int to);
libqt_list /* of QPageRanges__Range* */ QPageRanges_ToRangeList(const QPageRanges* self);
void QPageRanges_Clear(QPageRanges* self);
libqt_string QPageRanges_ToString(const QPageRanges* self);
QPageRanges* QPageRanges_FromString(const libqt_string ranges);
bool QPageRanges_Contains(const QPageRanges* self, int pageNumber);
bool QPageRanges_IsEmpty(const QPageRanges* self);
int QPageRanges_FirstPage(const QPageRanges* self);
int QPageRanges_LastPage(const QPageRanges* self);
void QPageRanges_Detach(QPageRanges* self);
void QPageRanges_Delete(QPageRanges* self);

QPageRanges__Range* QPageRanges__Range_new(const QPageRanges__Range* other);
QPageRanges__Range* QPageRanges__Range_new2(QPageRanges__Range* other);
QPageRanges__Range* QPageRanges__Range_new3();
QPageRanges__Range* QPageRanges__Range_new4(const QPageRanges__Range* param1);
void QPageRanges__Range_CopyAssign(QPageRanges__Range* self, QPageRanges__Range* other);
void QPageRanges__Range_MoveAssign(QPageRanges__Range* self, QPageRanges__Range* other);
int QPageRanges__Range_From(const QPageRanges__Range* self);
void QPageRanges__Range_SetFrom(QPageRanges__Range* self, int from);
int QPageRanges__Range_To(const QPageRanges__Range* self);
void QPageRanges__Range_SetTo(QPageRanges__Range* self, int to);
bool QPageRanges__Range_Contains(const QPageRanges__Range* self, int pageNumber);
void QPageRanges__Range_Delete(QPageRanges__Range* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
