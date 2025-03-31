#pragma once
#ifndef SRCC_LIBQTIMEZONE_H
#define SRCC_LIBQTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData)
typedef QTimeZone::OffsetData QTimeZone__OffsetData;
#endif
#else
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTimeZone QTimeZone;
typedef struct QTimeZone__OffsetData QTimeZone__OffsetData;
#endif

#ifdef __cplusplus
typedef QTimeZone::NameType NameType;             // C++ enum
typedef QTimeZone::OffsetDataList OffsetDataList; // C++ QFlags
typedef QTimeZone::TimeType TimeType;             // C++ enum
#else
typedef int NameType;                                              // C ABI enum
typedef int TimeType;                                              // C ABI enum
typedef libqt_list /* of QTimeZone__OffsetData* */ OffsetDataList; // C ABI QFlags
#endif

QTimeZone* QTimeZone_new();
QTimeZone* QTimeZone_new2(libqt_string ianaId);
QTimeZone* QTimeZone_new3(int offsetSeconds);
QTimeZone* QTimeZone_new4(libqt_string zoneId, int offsetSeconds, libqt_string name, libqt_string abbreviation);
QTimeZone* QTimeZone_new5(QTimeZone* other);
QTimeZone* QTimeZone_new6(libqt_string zoneId, int offsetSeconds, libqt_string name, libqt_string abbreviation, uint16_t territory);
QTimeZone* QTimeZone_new7(libqt_string zoneId, int offsetSeconds, libqt_string name, libqt_string abbreviation, uint16_t territory, libqt_string comment);
void QTimeZone_OperatorAssign(QTimeZone* self, QTimeZone* other);
void QTimeZone_Swap(QTimeZone* self, QTimeZone* other);
bool QTimeZone_IsValid(const QTimeZone* self);
libqt_string QTimeZone_Id(const QTimeZone* self);
uint16_t QTimeZone_Territory(const QTimeZone* self);
uint16_t QTimeZone_Country(const QTimeZone* self);
libqt_string QTimeZone_Comment(const QTimeZone* self);
libqt_string QTimeZone_DisplayName(const QTimeZone* self, QDateTime* atDateTime);
libqt_string QTimeZone_DisplayNameWithTimeType(const QTimeZone* self, int timeType);
libqt_string QTimeZone_Abbreviation(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_OffsetFromUtc(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_StandardTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_DaylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
bool QTimeZone_HasDaylightTime(const QTimeZone* self);
bool QTimeZone_IsDaylightTime(const QTimeZone* self, QDateTime* atDateTime);
QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, QDateTime* forDateTime);
bool QTimeZone_HasTransitions(const QTimeZone* self);
QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, QDateTime* afterDateTime);
QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, QDateTime* beforeDateTime);
libqt_list /* of QTimeZone__OffsetData* */ QTimeZone_Transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime);
libqt_string QTimeZone_SystemTimeZoneId();
QTimeZone* QTimeZone_SystemTimeZone();
QTimeZone* QTimeZone_Utc();
bool QTimeZone_IsTimeZoneIdAvailable(libqt_string ianaId);
libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIds();
libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIdsWithTerritory(uint16_t territory);
libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds);
libqt_string QTimeZone_IanaIdToWindowsId(libqt_string ianaId);
libqt_string QTimeZone_WindowsIdToDefaultIanaId(libqt_string windowsId);
libqt_string QTimeZone_WindowsIdToDefaultIanaId2(libqt_string windowsId, uint16_t territory);
libqt_list /* of libqt_string */ QTimeZone_WindowsIdToIanaIds(libqt_string windowsId);
libqt_list /* of libqt_string */ QTimeZone_WindowsIdToIanaIds2(libqt_string windowsId, uint16_t territory);
libqt_string QTimeZone_DisplayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType);
libqt_string QTimeZone_DisplayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale);
libqt_string QTimeZone_DisplayName22(const QTimeZone* self, int timeType, int nameType);
libqt_string QTimeZone_DisplayName32(const QTimeZone* self, int timeType, int nameType, QLocale* locale);
void QTimeZone_Delete(QTimeZone* self);

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1);
void QTimeZone__OffsetData_OperatorAssign(QTimeZone__OffsetData* self, QTimeZone__OffsetData* param1);
void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
