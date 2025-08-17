#pragma once
#ifndef SRCC_LIBQCALENDAR_H
#define SRCC_LIBQCALENDAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__SystemId)
typedef QCalendar::SystemId QCalendar__SystemId;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay)
typedef QCalendar::YearMonthDay QCalendar__YearMonthDay;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QCalendar QCalendar;
typedef struct QCalendar__SystemId QCalendar__SystemId;
typedef struct QCalendar__YearMonthDay QCalendar__YearMonthDay;
typedef struct QDate QDate;
typedef struct QLocale QLocale;
#endif

QCalendar* QCalendar_new(const QCalendar* other);
QCalendar* QCalendar_new2(QCalendar* other);
QCalendar* QCalendar_new3();
QCalendar* QCalendar_new4(int system);
QCalendar* QCalendar_new5(libqt_string name);
QCalendar* QCalendar_new6(QCalendar__SystemId* id);
void QCalendar_CopyAssign(QCalendar* self, QCalendar* other);
void QCalendar_MoveAssign(QCalendar* self, QCalendar* other);
bool QCalendar_IsValid(const QCalendar* self);
int QCalendar_DaysInMonth(const QCalendar* self, int month);
int QCalendar_DaysInYear(const QCalendar* self, int year);
int QCalendar_MonthsInYear(const QCalendar* self, int year);
bool QCalendar_IsDateValid(const QCalendar* self, int year, int month, int day);
bool QCalendar_IsLeapYear(const QCalendar* self, int year);
bool QCalendar_IsGregorian(const QCalendar* self);
bool QCalendar_IsLunar(const QCalendar* self);
bool QCalendar_IsLuniSolar(const QCalendar* self);
bool QCalendar_IsSolar(const QCalendar* self);
bool QCalendar_IsProleptic(const QCalendar* self);
bool QCalendar_HasYearZero(const QCalendar* self);
int QCalendar_MaximumDaysInMonth(const QCalendar* self);
int QCalendar_MinimumDaysInMonth(const QCalendar* self);
int QCalendar_MaximumMonthsInYear(const QCalendar* self);
libqt_string QCalendar_Name(const QCalendar* self);
QDate* QCalendar_DateFromParts(const QCalendar* self, int year, int month, int day);
QDate* QCalendar_DateFromParts2(const QCalendar* self, const QCalendar__YearMonthDay* parts);
QDate* QCalendar_MatchCenturyToWeekday(const QCalendar* self, const QCalendar__YearMonthDay* parts, int dow);
QCalendar__YearMonthDay* QCalendar_PartsFromDate(const QCalendar* self, QDate* date);
int QCalendar_DayOfWeek(const QCalendar* self, QDate* date);
libqt_string QCalendar_MonthName(const QCalendar* self, const QLocale* locale, int month);
libqt_string QCalendar_StandaloneMonthName(const QCalendar* self, const QLocale* locale, int month);
libqt_string QCalendar_WeekDayName(const QCalendar* self, const QLocale* locale, int day);
libqt_string QCalendar_StandaloneWeekDayName(const QCalendar* self, const QLocale* locale, int day);
libqt_list /* of libqt_string */ QCalendar_AvailableCalendars();
int QCalendar_DaysInMonth2(const QCalendar* self, int month, int year);
libqt_string QCalendar_MonthName3(const QCalendar* self, const QLocale* locale, int month, int year);
libqt_string QCalendar_MonthName4(const QCalendar* self, const QLocale* locale, int month, int year, int format);
libqt_string QCalendar_StandaloneMonthName3(const QCalendar* self, const QLocale* locale, int month, int year);
libqt_string QCalendar_StandaloneMonthName4(const QCalendar* self, const QLocale* locale, int month, int year, int format);
libqt_string QCalendar_WeekDayName3(const QCalendar* self, const QLocale* locale, int day, int format);
libqt_string QCalendar_StandaloneWeekDayName3(const QCalendar* self, const QLocale* locale, int day, int format);
void QCalendar_Delete(QCalendar* self);

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new(const QCalendar__YearMonthDay* other);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(QCalendar__YearMonthDay* other);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3();
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new5(int y, int m);
QCalendar__YearMonthDay* QCalendar__YearMonthDay_new6(int y, int m, int d);
void QCalendar__YearMonthDay_CopyAssign(QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other);
void QCalendar__YearMonthDay_MoveAssign(QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other);
bool QCalendar__YearMonthDay_IsValid(const QCalendar__YearMonthDay* self);
void QCalendar__YearMonthDay_Delete(QCalendar__YearMonthDay* self);

QCalendar__SystemId* QCalendar__SystemId_new(const QCalendar__SystemId* other);
QCalendar__SystemId* QCalendar__SystemId_new2(QCalendar__SystemId* other);
QCalendar__SystemId* QCalendar__SystemId_new3();
void QCalendar__SystemId_CopyAssign(QCalendar__SystemId* self, QCalendar__SystemId* other);
void QCalendar__SystemId_MoveAssign(QCalendar__SystemId* self, QCalendar__SystemId* other);
size_t QCalendar__SystemId_Index(const QCalendar__SystemId* self);
bool QCalendar__SystemId_IsValid(const QCalendar__SystemId* self);
void QCalendar__SystemId_Delete(QCalendar__SystemId* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
