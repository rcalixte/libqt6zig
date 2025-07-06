#pragma once
#ifndef SRCC_LIBQANYSTRINGVIEW_H
#define SRCC_LIBQANYSTRINGVIEW_H

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
typedef struct QAnyStringView QAnyStringView;
typedef struct QChar QChar;
#endif

QAnyStringView* QAnyStringView_new(const libqt_string other);
QAnyStringView* QAnyStringView_new2(libqt_string other);
QAnyStringView* QAnyStringView_new3();
QAnyStringView* QAnyStringView_new4(const libqt_string str);
QAnyStringView* QAnyStringView_new5(const libqt_string str);
QAnyStringView* QAnyStringView_new6(const libqt_string param1);
void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other);
void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other);
libqt_string QAnyStringView_Mid(const QAnyStringView* self, ptrdiff_t pos);
libqt_string QAnyStringView_Left(const QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_Right(const QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_Sliced(const QAnyStringView* self, ptrdiff_t pos);
libqt_string QAnyStringView_Sliced2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
libqt_string QAnyStringView_First(const QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_Last(const QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_Chopped(const QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_Slice(QAnyStringView* self, ptrdiff_t pos);
libqt_string QAnyStringView_Slice2(QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
void QAnyStringView_Truncate(QAnyStringView* self, ptrdiff_t n);
void QAnyStringView_Chop(QAnyStringView* self, ptrdiff_t n);
libqt_string QAnyStringView_ToString(const QAnyStringView* self);
ptrdiff_t QAnyStringView_Size(const QAnyStringView* self);
const void* QAnyStringView_Data(const QAnyStringView* self);
int QAnyStringView_Compare(libqt_string lhs, libqt_string rhs);
bool QAnyStringView_Equal(libqt_string lhs, libqt_string rhs);
QChar* QAnyStringView_Front(const QAnyStringView* self);
QChar* QAnyStringView_Back(const QAnyStringView* self);
bool QAnyStringView_Empty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_SizeBytes(const QAnyStringView* self);
ptrdiff_t QAnyStringView_MaxSize(const QAnyStringView* self);
bool QAnyStringView_IsNull(const QAnyStringView* self);
bool QAnyStringView_IsEmpty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_Length(const QAnyStringView* self);
libqt_string QAnyStringView_Mid2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n);
int QAnyStringView_Compare3(libqt_string lhs, libqt_string rhs, int cs);
void QAnyStringView_Delete(QAnyStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
