#pragma once
#ifndef SRCC_LIBQLATIN1STRINGVIEW_H
#define SRCC_LIBQLATIN1STRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QLatin1Char QLatin1Char;
typedef struct QLatin1String QLatin1String;
#endif

QLatin1String* QLatin1String_new();
QLatin1String* QLatin1String_new2(const char* s);
QLatin1String* QLatin1String_new3(const char* f, const char* l);
QLatin1String* QLatin1String_new4(const char* s, ptrdiff_t sz);
QLatin1String* QLatin1String_new5(const libqt_string s);
QLatin1String* QLatin1String_new6(QByteArrayView* s);
void QLatin1String_CopyAssign(QLatin1String* self, QLatin1String* other);
void QLatin1String_MoveAssign(QLatin1String* self, QLatin1String* other);
libqt_string QLatin1String_ToString(const QLatin1String* self);
const char* QLatin1String_Latin1(const QLatin1String* self);
ptrdiff_t QLatin1String_Size(const QLatin1String* self);
const char* QLatin1String_Data(const QLatin1String* self);
const char* QLatin1String_ConstData(const QLatin1String* self);
const char* QLatin1String_ConstBegin(const QLatin1String* self);
const char* QLatin1String_ConstEnd(const QLatin1String* self);
QLatin1Char* QLatin1String_First(const QLatin1String* self);
QLatin1Char* QLatin1String_Last(const QLatin1String* self);
ptrdiff_t QLatin1String_Length(const QLatin1String* self);
bool QLatin1String_IsNull(const QLatin1String* self);
bool QLatin1String_IsEmpty(const QLatin1String* self);
bool QLatin1String_Empty(const QLatin1String* self);
QLatin1Char* QLatin1String_At(const QLatin1String* self, ptrdiff_t i);
QLatin1Char* QLatin1String_OperatorSubscript(const QLatin1String* self, ptrdiff_t i);
QLatin1Char* QLatin1String_Front(const QLatin1String* self);
QLatin1Char* QLatin1String_Back(const QLatin1String* self);
int QLatin1String_Compare4(const QLatin1String* self, QChar* c);
int QLatin1String_Compare5(const QLatin1String* self, QChar* c, int cs);
bool QLatin1String_StartsWith3(const QLatin1String* self, QChar* c);
bool QLatin1String_StartsWith4(const QLatin1String* self, QChar* c, int cs);
bool QLatin1String_EndsWith3(const QLatin1String* self, QChar* c);
bool QLatin1String_EndsWith4(const QLatin1String* self, QChar* c, int cs);
ptrdiff_t QLatin1String_IndexOf3(const QLatin1String* self, QChar* c);
bool QLatin1String_Contains3(const QLatin1String* self, QChar* c);
ptrdiff_t QLatin1String_LastIndexOf5(const QLatin1String* self, QChar* c);
ptrdiff_t QLatin1String_LastIndexOf6(const QLatin1String* self, QChar* c, ptrdiff_t from);
ptrdiff_t QLatin1String_Count3(const QLatin1String* self, QChar* ch);
int16_t QLatin1String_ToShort(const QLatin1String* self);
uint16_t QLatin1String_ToUShort(const QLatin1String* self);
int QLatin1String_ToInt(const QLatin1String* self);
unsigned int QLatin1String_ToUInt(const QLatin1String* self);
long QLatin1String_ToLong(const QLatin1String* self);
unsigned long QLatin1String_ToULong(const QLatin1String* self);
long long QLatin1String_ToLongLong(const QLatin1String* self);
unsigned long long QLatin1String_ToULongLong(const QLatin1String* self);
float QLatin1String_ToFloat(const QLatin1String* self);
double QLatin1String_ToDouble(const QLatin1String* self);
const char* QLatin1String_Begin(const QLatin1String* self);
const char* QLatin1String_Cbegin(const QLatin1String* self);
const char* QLatin1String_End(const QLatin1String* self);
const char* QLatin1String_Cend(const QLatin1String* self);
ptrdiff_t QLatin1String_MaxSize(const QLatin1String* self);
ptrdiff_t QLatin1String_MaxSize2();
void QLatin1String_Chop(QLatin1String* self, ptrdiff_t n);
void QLatin1String_Truncate(QLatin1String* self, ptrdiff_t n);
ptrdiff_t QLatin1String_IndexOf24(const QLatin1String* self, QChar* c, ptrdiff_t from);
ptrdiff_t QLatin1String_IndexOf34(const QLatin1String* self, QChar* c, ptrdiff_t from, int cs);
bool QLatin1String_Contains24(const QLatin1String* self, QChar* c, int cs);
ptrdiff_t QLatin1String_LastIndexOf24(const QLatin1String* self, QChar* c, int cs);
ptrdiff_t QLatin1String_LastIndexOf34(const QLatin1String* self, QChar* c, ptrdiff_t from, int cs);
ptrdiff_t QLatin1String_Count24(const QLatin1String* self, QChar* ch, int cs);
int16_t QLatin1String_ToShort1(const QLatin1String* self, bool* ok);
int16_t QLatin1String_ToShort2(const QLatin1String* self, bool* ok, int base);
uint16_t QLatin1String_ToUShort1(const QLatin1String* self, bool* ok);
uint16_t QLatin1String_ToUShort2(const QLatin1String* self, bool* ok, int base);
int QLatin1String_ToInt1(const QLatin1String* self, bool* ok);
int QLatin1String_ToInt2(const QLatin1String* self, bool* ok, int base);
unsigned int QLatin1String_ToUInt1(const QLatin1String* self, bool* ok);
unsigned int QLatin1String_ToUInt2(const QLatin1String* self, bool* ok, int base);
long QLatin1String_ToLong1(const QLatin1String* self, bool* ok);
long QLatin1String_ToLong2(const QLatin1String* self, bool* ok, int base);
unsigned long QLatin1String_ToULong1(const QLatin1String* self, bool* ok);
unsigned long QLatin1String_ToULong2(const QLatin1String* self, bool* ok, int base);
long long QLatin1String_ToLongLong1(const QLatin1String* self, bool* ok);
long long QLatin1String_ToLongLong2(const QLatin1String* self, bool* ok, int base);
unsigned long long QLatin1String_ToULongLong1(const QLatin1String* self, bool* ok);
unsigned long long QLatin1String_ToULongLong2(const QLatin1String* self, bool* ok, int base);
float QLatin1String_ToFloat1(const QLatin1String* self, bool* ok);
double QLatin1String_ToDouble1(const QLatin1String* self, bool* ok);
void QLatin1String_Delete(QLatin1String* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
