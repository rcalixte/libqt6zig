#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKFORMAT_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFormat KFormat;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
#endif

KFormat* KFormat_new();
KFormat* KFormat_new2(const KFormat* other);
KFormat* KFormat_new3(const QLocale* locale);
void KFormat_OperatorAssign(KFormat* self, const KFormat* other);
libqt_string KFormat_FormatByteSize(const KFormat* self, double size);
libqt_string KFormat_FormatDuration(const KFormat* self, unsigned long long msecs);
libqt_string KFormat_FormatDecimalDuration(const KFormat* self, unsigned long long msecs);
libqt_string KFormat_FormatSpelloutDuration(const KFormat* self, unsigned long long msecs);
libqt_string KFormat_FormatRelativeDate(const KFormat* self, const QDate* date, int format);
libqt_string KFormat_FormatRelativeDateTime(const KFormat* self, const QDateTime* dateTime, int format);
libqt_string KFormat_FormatValue(const KFormat* self, double value, int unit);
libqt_string KFormat_FormatValue2(const KFormat* self, double value, const libqt_string unit);
libqt_string KFormat_FormatValue3(const KFormat* self, double value, const libqt_string unit, int precision, int prefix, int dialect);
libqt_string KFormat_FormatDistance(const KFormat* self, double distance);
libqt_string KFormat_FormatByteSize2(const KFormat* self, double size, int precision);
libqt_string KFormat_FormatByteSize3(const KFormat* self, double size, int precision, int dialect);
libqt_string KFormat_FormatByteSize4(const KFormat* self, double size, int precision, int dialect, int units);
libqt_string KFormat_FormatDuration2(const KFormat* self, unsigned long long msecs, int options);
libqt_string KFormat_FormatDecimalDuration2(const KFormat* self, unsigned long long msecs, int decimalPlaces);
libqt_string KFormat_FormatValue32(const KFormat* self, double value, int unit, int precision);
libqt_string KFormat_FormatValue4(const KFormat* self, double value, int unit, int precision, int prefix);
libqt_string KFormat_FormatValue5(const KFormat* self, double value, int unit, int precision, int prefix, int dialect);
libqt_string KFormat_FormatValue33(const KFormat* self, double value, const libqt_string unit, int precision);
libqt_string KFormat_FormatValue42(const KFormat* self, double value, const libqt_string unit, int precision, int prefix);
libqt_string KFormat_FormatDistance2(const KFormat* self, double distance, int param2);
void KFormat_Delete(KFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
