#pragma once
#ifndef SRCC_LIBQLOCALE_H
#define SRCC_LIBQLOCALE_H

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
typedef struct QCalendar QCalendar;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTime QTime;
#endif

#ifdef __cplusplus
typedef QLocale::Country Country;                                           // C++ enum
typedef QLocale::CurrencySymbolFormat CurrencySymbolFormat;                 // C++ enum
typedef QLocale::DataSizeFormat DataSizeFormat;                             // C++ enum
typedef QLocale::DataSizeFormats DataSizeFormats;                           // C++ QFlags
typedef QLocale::FloatingPointPrecisionOption FloatingPointPrecisionOption; // C++ enum
typedef QLocale::FormatType FormatType;                                     // C++ enum
typedef QLocale::Language Language;                                         // C++ enum
typedef QLocale::LanguageCodeType LanguageCodeType;                         // C++ enum
typedef QLocale::LanguageCodeTypes LanguageCodeTypes;                       // C++ QFlags
typedef QLocale::MeasurementSystem MeasurementSystem;                       // C++ enum
typedef QLocale::NumberOption NumberOption;                                 // C++ enum
typedef QLocale::NumberOptions NumberOptions;                               // C++ QFlags
typedef QLocale::QtGadgetHelper QtGadgetHelper;                             // C++ QFlags
typedef QLocale::QuotationStyle QuotationStyle;                             // C++ enum
typedef QLocale::Script Script;                                             // C++ enum
typedef QLocale::Territory Territory;                                       // C++ QFlags
#else
typedef int CurrencySymbolFormat;         // C ABI enum
typedef int DataSizeFormat;               // C ABI enum
typedef int DataSizeFormats;              // C ABI QFlags
typedef int FloatingPointPrecisionOption; // C ABI enum
typedef int FormatType;                   // C ABI enum
typedef int LanguageCodeType;             // C ABI enum
typedef int LanguageCodeTypes;            // C ABI QFlags
typedef int MeasurementSystem;            // C ABI enum
typedef int NumberOption;                 // C ABI enum
typedef int NumberOptions;                // C ABI QFlags
typedef int QuotationStyle;               // C ABI enum
typedef int Script;                       // C ABI enum
typedef uint16_t Country;                 // C ABI enum
typedef uint16_t Language;                // C ABI enum
typedef uint16_t Territory;               // C ABI QFlags
typedef void QtGadgetHelper;              // C ABI QFlags
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
libqt_string QLocale_ToStringWithQulonglong(const QLocale* self, unsigned long long i);
libqt_string QLocale_ToStringWithLong(const QLocale* self, long i);
libqt_string QLocale_ToStringWithUlong(const QLocale* self, unsigned long i);
libqt_string QLocale_ToStringWithShort(const QLocale* self, int16_t i);
libqt_string QLocale_ToStringWithUshort(const QLocale* self, uint16_t i);
libqt_string QLocale_ToStringWithInt(const QLocale* self, int i);
libqt_string QLocale_ToStringWithUint(const QLocale* self, unsigned int i);
libqt_string QLocale_ToStringWithDouble(const QLocale* self, double f);
libqt_string QLocale_ToStringWithFloat(const QLocale* self, float f);
libqt_string QLocale_ToString2(const QLocale* self, QDate* date, const libqt_string format);
libqt_string QLocale_ToString3(const QLocale* self, QTime* time, const libqt_string format);
libqt_string QLocale_ToString4(const QLocale* self, const QDateTime* dateTime, const libqt_string format);
libqt_string QLocale_ToStringWithDate(const QLocale* self, QDate* date);
libqt_string QLocale_ToStringWithTime(const QLocale* self, QTime* time);
libqt_string QLocale_ToStringWithDateTime(const QLocale* self, const QDateTime* dateTime);
libqt_string QLocale_ToString9(const QLocale* self, QDate* date, int format, QCalendar* cal);
libqt_string QLocale_ToString10(const QLocale* self, const QDateTime* dateTime, int format, QCalendar* cal);
libqt_string QLocale_DateFormat(const QLocale* self);
libqt_string QLocale_TimeFormat(const QLocale* self);
libqt_string QLocale_DateTimeFormat(const QLocale* self);
QDate* QLocale_ToDate(const QLocale* self, const libqt_string stringVal);
QTime* QLocale_ToTime(const QLocale* self, const libqt_string stringVal);
QDateTime* QLocale_ToDateTime(const QLocale* self, const libqt_string stringVal);
QDate* QLocale_ToDate2(const QLocale* self, const libqt_string stringVal, const libqt_string format);
QTime* QLocale_ToTime2(const QLocale* self, const libqt_string stringVal, const libqt_string format);
QDateTime* QLocale_ToDateTime2(const QLocale* self, const libqt_string stringVal, const libqt_string format);
QDate* QLocale_ToDate3(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal);
QDateTime* QLocale_ToDateTime3(const QLocale* self, const libqt_string stringVal, int format, QCalendar* cal);
QDate* QLocale_ToDate4(const QLocale* self, const libqt_string stringVal, const libqt_string format, QCalendar* cal);
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
libqt_string QLocale_ToCurrencyStringWithUnsignedlonglong(const QLocale* self, unsigned long long param1);
libqt_string QLocale_ToCurrencyStringWithShort(const QLocale* self, int16_t i);
libqt_string QLocale_ToCurrencyStringWithUshort(const QLocale* self, uint16_t i);
libqt_string QLocale_ToCurrencyStringWithInt(const QLocale* self, int i);
libqt_string QLocale_ToCurrencyStringWithUint(const QLocale* self, unsigned int i);
libqt_string QLocale_ToCurrencyStringWithDouble(const QLocale* self, double param1);
libqt_string QLocale_ToCurrencyStringWithFloat(const QLocale* self, float i);
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
int16_t QLocale_ToShort2(const QLocale* self, const libqt_string s, bool* ok);
uint16_t QLocale_ToUShort2(const QLocale* self, const libqt_string s, bool* ok);
int QLocale_ToInt2(const QLocale* self, const libqt_string s, bool* ok);
unsigned int QLocale_ToUInt2(const QLocale* self, const libqt_string s, bool* ok);
long QLocale_ToLong2(const QLocale* self, const libqt_string s, bool* ok);
unsigned long QLocale_ToULong2(const QLocale* self, const libqt_string s, bool* ok);
long long QLocale_ToLongLong2(const QLocale* self, const libqt_string s, bool* ok);
unsigned long long QLocale_ToULongLong2(const QLocale* self, const libqt_string s, bool* ok);
float QLocale_ToFloat2(const QLocale* self, const libqt_string s, bool* ok);
double QLocale_ToDouble2(const QLocale* self, const libqt_string s, bool* ok);
libqt_string QLocale_ToString22(const QLocale* self, double f, char format);
libqt_string QLocale_ToString32(const QLocale* self, double f, char format, int precision);
libqt_string QLocale_ToString23(const QLocale* self, float f, char format);
libqt_string QLocale_ToString33(const QLocale* self, float f, char format, int precision);
libqt_string QLocale_ToString24(const QLocale* self, QDate* date, int format);
libqt_string QLocale_ToString25(const QLocale* self, QTime* time, int format);
libqt_string QLocale_ToString26(const QLocale* self, const QDateTime* dateTime, int format);
libqt_string QLocale_DateFormat1(const QLocale* self, int format);
libqt_string QLocale_TimeFormat1(const QLocale* self, int format);
libqt_string QLocale_DateTimeFormat1(const QLocale* self, int format);
QDate* QLocale_ToDate22(const QLocale* self, const libqt_string stringVal, int param2);
QTime* QLocale_ToTime22(const QLocale* self, const libqt_string stringVal, int param2);
QDateTime* QLocale_ToDateTime22(const QLocale* self, const libqt_string stringVal, int format);
libqt_string QLocale_MonthName2(const QLocale* self, int param1, int format);
libqt_string QLocale_StandaloneMonthName2(const QLocale* self, int param1, int format);
libqt_string QLocale_DayName2(const QLocale* self, int param1, int format);
libqt_string QLocale_StandaloneDayName2(const QLocale* self, int param1, int format);
libqt_string QLocale_CurrencySymbol1(const QLocale* self, int param1);
libqt_string QLocale_ToCurrencyString2(const QLocale* self, long long param1, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString22(const QLocale* self, unsigned long long param1, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString23(const QLocale* self, int16_t i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString24(const QLocale* self, uint16_t i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString25(const QLocale* self, int i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString26(const QLocale* self, unsigned int i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString27(const QLocale* self, double param1, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString3(const QLocale* self, double param1, const libqt_string symbol, int precision);
libqt_string QLocale_ToCurrencyString28(const QLocale* self, float i, const libqt_string symbol);
libqt_string QLocale_ToCurrencyString32(const QLocale* self, float i, const libqt_string symbol, int precision);
libqt_string QLocale_FormattedDataSize2(const QLocale* self, long long bytes, int precision);
libqt_string QLocale_FormattedDataSize3(const QLocale* self, long long bytes, int precision, int format);
libqt_string QLocale_LanguageToCode2(uint16_t language, int codeTypes);
libqt_string QLocale_QuoteString2(const QLocale* self, const libqt_string str, int style);
void QLocale_Delete(QLocale* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
