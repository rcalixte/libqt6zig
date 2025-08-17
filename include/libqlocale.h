#pragma once
#ifndef SRCC_LIBQLOCALE_H
#define SRCC_LIBQLOCALE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QCalendar QCalendar;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTime QTime;
#endif

QLocale* QLocale_new();
QLocale* QLocale_new2(const libqt_string name);
QLocale* QLocale_new3(uint16_t language, uint16_t territory);
QLocale* QLocale_new4(uint16_t language);
QLocale* QLocale_new5(const QLocale* other);
QLocale* QLocale_new6(uint16_t language, uint16_t script);
QLocale* QLocale_new7(uint16_t language, uint16_t script, uint16_t territory);
void QLocale_OperatorAssign(QLocale* self, const QLocale* other);
void QLocale_Swap(QLocale* self, QLocale* other);
uint16_t QLocale_Language(const QLocale* self);
uint16_t QLocale_Script(const QLocale* self);
uint16_t QLocale_Territory(const QLocale* self);
uint16_t QLocale_Country(const QLocale* self);
libqt_string QLocale_Name(const QLocale* self);
libqt_string QLocale_Bcp47Name(const QLocale* self);
libqt_string QLocale_NativeLanguageName(const QLocale* self);
libqt_string QLocale_NativeTerritoryName(const QLocale* self);
libqt_string QLocale_NativeCountryName(const QLocale* self);
int16_t QLocale_ToShort(const QLocale* self, const libqt_string s);
uint16_t QLocale_ToUShort(const QLocale* self, const libqt_string s);
int QLocale_ToInt(const QLocale* self, const libqt_string s);
unsigned int QLocale_ToUInt(const QLocale* self, const libqt_string s);
long QLocale_ToLong(const QLocale* self, const libqt_string s);
unsigned long QLocale_ToULong(const QLocale* self, const libqt_string s);
long long QLocale_ToLongLong(const QLocale* self, const libqt_string s);
unsigned long long QLocale_ToULongLong(const QLocale* self, const libqt_string s);
float QLocale_ToFloat(const QLocale* self, const libqt_string s);
double QLocale_ToDouble(const QLocale* self, const libqt_string s);
libqt_string QLocale_ToString(const QLocale* self, long long i);
libqt_string QLocale_ToString2(const QLocale* self, unsigned long long i);
libqt_string QLocale_ToString3(const QLocale* self, long i);
libqt_string QLocale_ToString4(const QLocale* self, unsigned long i);
libqt_string QLocale_ToString5(const QLocale* self, int16_t i);
libqt_string QLocale_ToString6(const QLocale* self, uint16_t i);
libqt_string QLocale_ToString7(const QLocale* self, int i);
libqt_string QLocale_ToString8(const QLocale* self, unsigned int i);
libqt_string QLocale_ToString9(const QLocale* self, double f);
libqt_string QLocale_ToString10(const QLocale* self, float f);
libqt_string QLocale_ToString11(const QLocale* self, QDate* date, const libqt_string format);
libqt_string QLocale_ToString12(const QLocale* self, QTime* time, const libqt_string format);
libqt_string QLocale_ToString13(const QLocale* self, const QDateTime* dateTime, const libqt_string format);
libqt_string QLocale_ToString17(const QLocale* self, QDate* date);
libqt_string QLocale_ToString18(const QLocale* self, QTime* time);
libqt_string QLocale_ToString19(const QLocale* self, const QDateTime* dateTime);
libqt_string QLocale_ToString21(const QLocale* self, QDate* date, int format, QCalendar* cal);
libqt_string QLocale_ToString22(const QLocale* self, const QDateTime* dateTime, int format, QCalendar* cal);
libqt_string QLocale_DateFormat(const QLocale* self);
libqt_string QLocale_TimeFormat(const QLocale* self);
libqt_string QLocale_DateTimeFormat(const QLocale* self);
QTime* QLocale_ToTime(const QLocale* self, const libqt_string stringVal);
QTime* QLocale_ToTime2(const QLocale* self, const libqt_string stringVal, const libqt_string format);
QDate* QLocale_ToDate(const QLocale* self, const libqt_string stringVal);
QDate* QLocale_ToDate2(const QLocale* self, const libqt_string stringVal, const libqt_string format);
QDateTime* QLocale_ToDateTime(const QLocale* self, const libqt_string stringVal);
QDateTime* QLocale_ToDateTime2(const QLocale* self, const libqt_string stringVal, const libqt_string format);
QDate* QLocale_ToDate3(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal);
QDate* QLocale_ToDate4(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal);
QDateTime* QLocale_ToDateTime3(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal);
QDateTime* QLocale_ToDateTime4(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal);
libqt_string QLocale_DecimalPoint(const QLocale* self);
libqt_string QLocale_GroupSeparator(const QLocale* self);
libqt_string QLocale_Percent(const QLocale* self);
libqt_string QLocale_ZeroDigit(const QLocale* self);
libqt_string QLocale_NegativeSign(const QLocale* self);
libqt_string QLocale_PositiveSign(const QLocale* self);
libqt_string QLocale_Exponential(const QLocale* self);
libqt_string QLocale_MonthName(const QLocale* self, int param1);
libqt_string QLocale_StandaloneMonthName(const QLocale* self, int param1);
libqt_string QLocale_DayName(const QLocale* self, int param1);
libqt_string QLocale_StandaloneDayName(const QLocale* self, int param1);
int QLocale_FirstDayOfWeek(const QLocale* self);
libqt_list /* of int */ QLocale_Weekdays(const QLocale* self);
libqt_string QLocale_AmText(const QLocale* self);
libqt_string QLocale_PmText(const QLocale* self);
int QLocale_MeasurementSystem(const QLocale* self);
QLocale* QLocale_Collation(const QLocale* self);
int QLocale_TextDirection(const QLocale* self);
libqt_string QLocale_ToUpper(const QLocale* self, const libqt_string str);
libqt_string QLocale_ToLower(const QLocale* self, const libqt_string str);
libqt_string QLocale_CurrencySymbol(const QLocale* self);
libqt_string QLocale_ToCurrencyString(const QLocale* self, long long param1);
libqt_string QLocale_ToCurrencyString2(const QLocale* self, unsigned long long param1);
libqt_string QLocale_ToCurrencyString3(const QLocale* self, int16_t i);
libqt_string QLocale_ToCurrencyString4(const QLocale* self, uint16_t i);
libqt_string QLocale_ToCurrencyString5(const QLocale* self, int i);
libqt_string QLocale_ToCurrencyString6(const QLocale* self, unsigned int i);
libqt_string QLocale_ToCurrencyString7(const QLocale* self, double param1);
libqt_string QLocale_ToCurrencyString8(const QLocale* self, float i);
libqt_string QLocale_FormattedDataSize(const QLocale* self, long long bytes);
libqt_list /* of libqt_string */ QLocale_UiLanguages(const QLocale* self);
libqt_string QLocale_LanguageToCode(uint16_t language);
libqt_string QLocale_TerritoryToCode(uint16_t territory);
libqt_string QLocale_CountryToCode(uint16_t country);
libqt_string QLocale_ScriptToCode(uint16_t script);
libqt_string QLocale_LanguageToString(uint16_t language);
libqt_string QLocale_TerritoryToString(uint16_t territory);
libqt_string QLocale_CountryToString(uint16_t country);
libqt_string QLocale_ScriptToString(uint16_t script);
void QLocale_SetDefault(const QLocale* locale);
QLocale* QLocale_C();
QLocale* QLocale_System();
libqt_list /* of QLocale* */ QLocale_MatchingLocales(uint16_t language, uint16_t script, uint16_t territory);
libqt_list /* of uint16_t */ QLocale_CountriesForLanguage(uint16_t lang);
void QLocale_SetNumberOptions(QLocale* self, int options);
int QLocale_NumberOptions(const QLocale* self);
libqt_string QLocale_QuoteString(const QLocale* self, const libqt_string str);
libqt_string QLocale_CreateSeparatedList(const QLocale* self, const libqt_list /* of libqt_string */ strl);
libqt_string QLocale_Name1(const QLocale* self, char separator);
libqt_string QLocale_Bcp47Name1(const QLocale* self, char separator);
int16_t QLocale_ToShort22(const QLocale* self, const libqt_string s, bool* ok);
uint16_t QLocale_ToUShort22(const QLocale* self, const libqt_string s, bool* ok);
int QLocale_ToInt22(const QLocale* self, const libqt_string s, bool* ok);
unsigned int QLocale_ToUInt22(const QLocale* self, const libqt_string s, bool* ok);
long QLocale_ToLong22(const QLocale* self, const libqt_string s, bool* ok);
unsigned long QLocale_ToULong22(const QLocale* self, const libqt_string s, bool* ok);
long long QLocale_ToLongLong22(const QLocale* self, const libqt_string s, bool* ok);
unsigned long long QLocale_ToULongLong22(const QLocale* self, const libqt_string s, bool* ok);
float QLocale_ToFloat22(const QLocale* self, const libqt_string s, bool* ok);
double QLocale_ToDouble22(const QLocale* self, const libqt_string s, bool* ok);
libqt_string QLocale_ToString24(const QLocale* self, double f, char format);
libqt_string QLocale_ToString32(const QLocale* self, double f, char format, int precision);
libqt_string QLocale_ToString25(const QLocale* self, float f, char format);
libqt_string QLocale_ToString33(const QLocale* self, float f, char format, int precision);
libqt_string QLocale_ToString26(const QLocale* self, QDate* date, int format);
libqt_string QLocale_ToString27(const QLocale* self, QTime* time, int format);
libqt_string QLocale_ToString28(const QLocale* self, const QDateTime* dateTime, int format);
libqt_string QLocale_DateFormat1(const QLocale* self, int format);
libqt_string QLocale_TimeFormat1(const QLocale* self, int format);
libqt_string QLocale_DateTimeFormat1(const QLocale* self, int format);
QTime* QLocale_ToTime22(const QLocale* self, const libqt_string stringVal, int param2);
QDate* QLocale_ToDate22(const QLocale* self, const libqt_string stringVal, int param2);
QDate* QLocale_ToDate32(const QLocale* self, const libqt_string stringVal, int param2, int baseYear);
QDate* QLocale_ToDate33(const QLocale* self, const libqt_string stringVal, const libqt_string format, int baseYear);
QDateTime* QLocale_ToDateTime22(const QLocale* self, const libqt_string stringVal, int format);
QDateTime* QLocale_ToDateTime32(const QLocale* self, const libqt_string stringVal, int format, int baseYear);
QDateTime* QLocale_ToDateTime33(const QLocale* self, const libqt_string stringVal, const libqt_string format, int baseYear);
QDate* QLocale_ToDate42(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal, int baseYear);
QDate* QLocale_ToDate43(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal, int baseYear);
QDateTime* QLocale_ToDateTime42(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal, int baseYear);
QDateTime* QLocale_ToDateTime43(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal, int baseYear);
libqt_string QLocale_MonthName2(const QLocale* self, int param1, int format);
libqt_string QLocale_StandaloneMonthName2(const QLocale* self, int param1, int format);
libqt_string QLocale_DayName2(const QLocale* self, int param1, int format);
libqt_string QLocale_StandaloneDayName2(const QLocale* self, int param1, int format);
libqt_string QLocale_CurrencySymbol1(const QLocale* self, int param1);
libqt_string QLocale_ToCurrencyString22(const QLocale* self, long long param1, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString23(const QLocale* self, unsigned long long param1, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString24(const QLocale* self, int16_t i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString25(const QLocale* self, uint16_t i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString26(const QLocale* self, int i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString27(const QLocale* self, unsigned int i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString28(const QLocale* self, double param1, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString32(const QLocale* self, double param1, const libqt_string symbol, int precision);
libqt_string QLocale_ToCurrencyString29(const QLocale* self, float i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString33(const QLocale* self, float i, const libqt_string symbol, int precision);
libqt_string QLocale_FormattedDataSize2(const QLocale* self, long long bytes, int precision);
libqt_string QLocale_FormattedDataSize3(const QLocale* self, long long bytes, int precision, int format);
libqt_list /* of libqt_string */ QLocale_UiLanguages1(const QLocale* self, char separator);
libqt_string QLocale_LanguageToCode2(uint16_t language, int codeTypes);
libqt_string QLocale_QuoteString22(const QLocale* self, const libqt_string str, int style);
void QLocale_Delete(QLocale* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
