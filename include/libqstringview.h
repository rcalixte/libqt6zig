#pragma once
#ifndef SRCC_LIBQSTRINGVIEW_H
#define SRCC_LIBQSTRINGVIEW_H

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
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
typedef struct QStringView QStringView;
#endif

#ifdef __cplusplus
typedef QStringView::const_pointer const_pointer;     // C++ QFlags
typedef QStringView::const_reference const_reference; // C++ QFlags
typedef QStringView::difference_type difference_type; // C++ QFlags
typedef QStringView::iterator iterator;               // C++ QFlags
typedef QStringView::pointer pointer;                 // C++ QFlags
typedef QStringView::reference reference;             // C++ QFlags
typedef QStringView::size_type size_type;             // C++ QFlags
typedef QStringView::storage_type storage_type;       // C++ QFlags
typedef QStringView::value_type value_type;           // C++ QFlags
#else
typedef long long difference_type; // C ABI QFlags
typedef ptrdiff_t size_type;       // C ABI QFlags
#endif

QStringView* QStringView_new();
void QStringView_CopyAssign(QStringView* self, QStringView* other);
void QStringView_MoveAssign(QStringView* self, QStringView* other);
libqt_string QStringView_ToString(const QStringView* self);
ptrdiff_t QStringView_Size(const QStringView* self);
QChar* QStringView_Data(const QStringView* self);
QChar* QStringView_ConstData(const QStringView* self);
QChar* QStringView_OperatorSubscript(const QStringView* self, ptrdiff_t n);
libqt_string QStringView_ToLatin1(const QStringView* self);
libqt_string QStringView_ToUtf8(const QStringView* self);
libqt_string QStringView_ToLocal8Bit(const QStringView* self);
libqt_list /* of unsigned int */ QStringView_ToUcs4(const QStringView* self);
QChar* QStringView_At(const QStringView* self, ptrdiff_t n);
void QStringView_Truncate(QStringView* self, ptrdiff_t n);
void QStringView_Chop(QStringView* self, ptrdiff_t n);
int QStringView_CompareWithQChar(const QStringView* self, QChar* c);
int QStringView_Compare2(const QStringView* self, QChar* c, int cs);
bool QStringView_StartsWithWithQChar(const QStringView* self, QChar* c);
bool QStringView_StartsWith2(const QStringView* self, QChar* c, int cs);
bool QStringView_EndsWithWithQChar(const QStringView* self, QChar* c);
bool QStringView_EndsWith2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_IndexOf(const QStringView* self, QChar* c);
bool QStringView_Contains(const QStringView* self, QChar* c);
ptrdiff_t QStringView_Count(const QStringView* self, QChar* c);
ptrdiff_t QStringView_LastIndexOf(const QStringView* self, QChar* c);
ptrdiff_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_IndexOfWithRe(const QStringView* self, QRegularExpression* re);
ptrdiff_t QStringView_LastIndexOf5(const QStringView* self, QRegularExpression* re, ptrdiff_t from);
bool QStringView_ContainsWithRe(const QStringView* self, QRegularExpression* re);
ptrdiff_t QStringView_CountWithRe(const QStringView* self, QRegularExpression* re);
bool QStringView_IsRightToLeft(const QStringView* self);
bool QStringView_IsValidUtf16(const QStringView* self);
int16_t QStringView_ToShort(const QStringView* self);
uint16_t QStringView_ToUShort(const QStringView* self);
int QStringView_ToInt(const QStringView* self);
unsigned int QStringView_ToUInt(const QStringView* self);
long QStringView_ToLong(const QStringView* self);
unsigned long QStringView_ToULong(const QStringView* self);
long long QStringView_ToLongLong(const QStringView* self);
unsigned long long QStringView_ToULongLong(const QStringView* self);
float QStringView_ToFloat(const QStringView* self);
double QStringView_ToDouble(const QStringView* self);
QChar* QStringView_Begin(const QStringView* self);
QChar* QStringView_End(const QStringView* self);
QChar* QStringView_Cbegin(const QStringView* self);
QChar* QStringView_Cend(const QStringView* self);
bool QStringView_Empty(const QStringView* self);
QChar* QStringView_Front(const QStringView* self);
QChar* QStringView_Back(const QStringView* self);
QChar* QStringView_ConstBegin(const QStringView* self);
QChar* QStringView_ConstEnd(const QStringView* self);
bool QStringView_IsNull(const QStringView* self);
bool QStringView_IsEmpty(const QStringView* self);
ptrdiff_t QStringView_Length(const QStringView* self);
QChar* QStringView_First2(const QStringView* self);
QChar* QStringView_Last2(const QStringView* self);
ptrdiff_t QStringView_IndexOf2(const QStringView* self, QChar* c, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf3(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
bool QStringView_Contains2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_Count2(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_LastIndexOf22(const QStringView* self, QChar* c, int cs);
ptrdiff_t QStringView_LastIndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs);
ptrdiff_t QStringView_IndexOf24(const QStringView* self, QRegularExpression* re, ptrdiff_t from);
ptrdiff_t QStringView_IndexOf34(const QStringView* self, QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch);
ptrdiff_t QStringView_LastIndexOf35(const QStringView* self, QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch);
bool QStringView_Contains24(const QStringView* self, QRegularExpression* re, QRegularExpressionMatch* rmatch);
int16_t QStringView_ToShort1(const QStringView* self, bool* ok);
int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base);
uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok);
uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base);
int QStringView_ToInt1(const QStringView* self, bool* ok);
int QStringView_ToInt2(const QStringView* self, bool* ok, int base);
unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok);
unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base);
long QStringView_ToLong1(const QStringView* self, bool* ok);
long QStringView_ToLong2(const QStringView* self, bool* ok, int base);
unsigned long QStringView_ToULong1(const QStringView* self, bool* ok);
unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base);
long long QStringView_ToLongLong1(const QStringView* self, bool* ok);
long long QStringView_ToLongLong2(const QStringView* self, bool* ok, int base);
unsigned long long QStringView_ToULongLong1(const QStringView* self, bool* ok);
unsigned long long QStringView_ToULongLong2(const QStringView* self, bool* ok, int base);
float QStringView_ToFloat1(const QStringView* self, bool* ok);
double QStringView_ToDouble1(const QStringView* self, bool* ok);
void QStringView_Delete(QStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
