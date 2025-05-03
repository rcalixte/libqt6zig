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

#ifdef __cplusplus
typedef QAnyStringView::difference_type difference_type; // C++ QFlags
typedef QAnyStringView::size_type size_type;             // C++ QFlags
#else
typedef long long difference_type; // C ABI QFlags
typedef ptrdiff_t size_type;       // C ABI QFlags
#endif

QAnyStringView* QAnyStringView_new(char* other);
QAnyStringView* QAnyStringView_new2(char* other);
QAnyStringView* QAnyStringView_new3();
QAnyStringView* QAnyStringView_new4(libqt_string str);
QAnyStringView* QAnyStringView_new5(libqt_string str);
QAnyStringView* QAnyStringView_new6(QChar* c);
QAnyStringView* QAnyStringView_new7(char* param1);
void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other);
void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other);
libqt_string QAnyStringView_ToString(const QAnyStringView* self);
ptrdiff_t QAnyStringView_Size(const QAnyStringView* self);
const void* QAnyStringView_Data(const QAnyStringView* self);
int QAnyStringView_Compare(char* lhs, char* rhs);
bool QAnyStringView_Equal(char* lhs, char* rhs);
QChar* QAnyStringView_Front(const QAnyStringView* self);
QChar* QAnyStringView_Back(const QAnyStringView* self);
bool QAnyStringView_Empty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_SizeBytes(const QAnyStringView* self);
bool QAnyStringView_IsNull(const QAnyStringView* self);
bool QAnyStringView_IsEmpty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_Length(const QAnyStringView* self);
int QAnyStringView_Compare3(char* lhs, char* rhs, int cs);
void QAnyStringView_Delete(QAnyStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
