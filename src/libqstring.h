#pragma once
#ifndef SRCC_LIBQSTRING_H
#define SRCC_LIBQSTRING_H

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
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
#endif

ptrdiff_t QString_MaxSize();
libqt_string QString_FromLatin1(libqt_string ba);
libqt_string QString_FromLatin12(const char* str, ptrdiff_t size);
libqt_string QString_FromUtf8(libqt_string utf8);
libqt_string QString_FromUtf82(const char* utf8, ptrdiff_t size);
libqt_string QString_FromLocal8Bit(libqt_string ba);
libqt_string QString_FromLocal8Bit2(const char* str, ptrdiff_t size);
libqt_string QString_FromRawData(const QChar* param1, ptrdiff_t size);
libqt_string QString_FromUtf162(const uint16_t* str);
libqt_string QString_FromUcs42(const unsigned int* str);
int QString_Compare5(const libqt_string s1, const libqt_string s2);
int QString_Compare6(const libqt_string s1, libqt_string s2);
int QString_Compare7(libqt_string s1, const libqt_string s2);
int QString_LocaleAwareCompare3(const libqt_string s1, const libqt_string s2);
libqt_string QString_Number(int param1);
libqt_string QString_Number2(unsigned int param1);
libqt_string QString_Number3(long param1);
libqt_string QString_Number4(unsigned long param1);
libqt_string QString_Number5(long long param1);
libqt_string QString_Number6(unsigned long long param1);
libqt_string QString_Number7(double param1);
libqt_string QString_FromUtf1623(const uint16_t* str, ptrdiff_t size);
libqt_string QString_FromUcs423(const unsigned int* str, ptrdiff_t size);
int QString_Compare32(const libqt_string s1, const libqt_string s2, int cs);
int QString_Compare33(const libqt_string s1, libqt_string s2, int cs);
int QString_Compare34(libqt_string s1, const libqt_string s2, int cs);
libqt_string QString_Number22(int param1, int base);
libqt_string QString_Number23(unsigned int param1, int base);
libqt_string QString_Number24(long param1, int base);
libqt_string QString_Number25(unsigned long param1, int base);
libqt_string QString_Number26(long long param1, int base);
libqt_string QString_Number27(unsigned long long param1, int base);
libqt_string QString_Number28(double param1, char format);
libqt_string QString_Number32(double param1, char format, int precision);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
