#pragma once
#ifndef SRCC_LIBQANYSTRINGVIEW_H
#define SRCC_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QChar QChar;
#endif

QAnyStringView* QAnyStringView_new(const char* other);
QAnyStringView* QAnyStringView_new2(const char* other);
QAnyStringView* QAnyStringView_new3();
QAnyStringView* QAnyStringView_new4(const libqt_string str);
QAnyStringView* QAnyStringView_new5(const libqt_string str);
QAnyStringView* QAnyStringView_new6(const char* param1);
void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other);
void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other);
const char* QAnyStringView_Mid(const QAnyStringView* self, ptrdiff_t pos);
const char* QAnyStringView_Left(const QAnyStringView* self, ptrdiff_t n);
const char* QAnyStringView_Right(const QAnyStringView* self, ptrdiff_t n);
const char* QAnyStringView_Sliced(const QAnyStringView* self, ptrdiff_t pos);
const char* QAnyStringView_Sliced2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
const char* QAnyStringView_First(const QAnyStringView* self, ptrdiff_t n);
const char* QAnyStringView_Last(const QAnyStringView* self, ptrdiff_t n);
const char* QAnyStringView_Chopped(const QAnyStringView* self, ptrdiff_t n);
const char* QAnyStringView_Slice(QAnyStringView* self, ptrdiff_t pos);
const char* QAnyStringView_Slice2(QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
void QAnyStringView_Truncate(QAnyStringView* self, ptrdiff_t n);
void QAnyStringView_Chop(QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_ToString(const QAnyStringView* self);
ptrdiff_t QAnyStringView_Size(const QAnyStringView* self);
const void* QAnyStringView_Data(const QAnyStringView* self);
int QAnyStringView_Compare(const char* lhs, const char* rhs);
bool QAnyStringView_Equal(const char* lhs, const char* rhs);
QChar* QAnyStringView_Front(const QAnyStringView* self);
QChar* QAnyStringView_Back(const QAnyStringView* self);
bool QAnyStringView_Empty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_SizeBytes(const QAnyStringView* self);
ptrdiff_t QAnyStringView_MaxSize(const QAnyStringView* self);
bool QAnyStringView_IsNull(const QAnyStringView* self);
bool QAnyStringView_IsEmpty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_Length(const QAnyStringView* self);
const char* QAnyStringView_Mid2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
int QAnyStringView_Compare3(const char* lhs, const char* rhs, int cs);
void QAnyStringView_Delete(QAnyStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
