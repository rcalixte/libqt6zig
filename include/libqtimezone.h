#pragma once
#ifndef SRCC_LIBQTIMEZONE_H
#define SRCC_LIBQTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>

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
typedef struct QByteArrayView QByteArrayView;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTimeZone QTimeZone;
typedef struct QTimeZone__OffsetData QTimeZone__OffsetData;
#endif

QTimeZone* QTimeZone_new();
QTimeZone* QTimeZone_new2(int spec);
QTimeZone* QTimeZone_new3(int offsetSeconds);
QTimeZone* QTimeZone_new4(const libqt_string ianaId);
QTimeZone* QTimeZone_new5(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation);
QTimeZone* QTimeZone_new6(const QTimeZone* other);
QTimeZone* QTimeZone_new7(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation, uint16_t territory);
QTimeZone* QTimeZone_new8(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation, uint16_t territory, const libqt_string comment);
void QTimeZone_OperatorAssign(QTimeZone* self, const QTimeZone* other);
void QTimeZone_Swap(QTimeZone* self, QTimeZone* other);
bool QTimeZone_IsValid(const QTimeZone* self);
QTimeZone* QTimeZone_FromSecondsAheadOfUtc(int offset);
int QTimeZone_TimeSpec(const QTimeZone* self);
int QTimeZone_FixedSecondsAheadOfUtc(const QTimeZone* self);
bool QTimeZone_IsUtcOrFixedOffset(int spec);
bool QTimeZone_IsUtcOrFixedOffset2(const QTimeZone* self);
QTimeZone* QTimeZone_AsBackendZone(const QTimeZone* self);
bool QTimeZone_HasAlternativeName(const QTimeZone* self, QByteArrayView* alias);
libqt_string QTimeZone_Id(const QTimeZone* self);
uint16_t QTimeZone_Territory(const QTimeZone* self);
uint16_t QTimeZone_Country(const QTimeZone* self);
libqt_string QTimeZone_Comment(const QTimeZone* self);
libqt_string QTimeZone_DisplayName(const QTimeZone* self, const QDateTime* atDateTime);
libqt_string QTimeZone_DisplayName2(const QTimeZone* self, int timeType);
libqt_string QTimeZone_Abbreviation(const QTimeZone* self, const QDateTime* atDateTime);
int QTimeZone_OffsetFromUtc(const QTimeZone* self, const QDateTime* atDateTime);
int QTimeZone_StandardTimeOffset(const QTimeZone* self, const QDateTime* atDateTime);
int QTimeZone_DaylightTimeOffset(const QTimeZone* self, const QDateTime* atDateTime);
bool QTimeZone_HasDaylightTime(const QTimeZone* self);
bool QTimeZone_IsDaylightTime(const QTimeZone* self, const QDateTime* atDateTime);
QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, const QDateTime* forDateTime);
bool QTimeZone_HasTransitions(const QTimeZone* self);
QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, const QDateTime* afterDateTime);
QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, const QDateTime* beforeDateTime);
libqt_list /* of QTimeZone__OffsetData* */ QTimeZone_Transitions(const QTimeZone* self, const QDateTime* fromDateTime, const QDateTime* toDateTime);
libqt_string QTimeZone_SystemTimeZoneId();
QTimeZone* QTimeZone_SystemTimeZone();
QTimeZone* QTimeZone_Utc();
bool QTimeZone_IsTimeZoneIdAvailable(const libqt_string ianaId);
libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIds();
libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIds2(uint16_t territory);
libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIds3(int offsetSeconds);
libqt_string QTimeZone_IanaIdToWindowsId(const libqt_string ianaId);
libqt_string QTimeZone_WindowsIdToDefaultIanaId(const libqt_string windowsId);
libqt_string QTimeZone_WindowsIdToDefaultIanaId2(const libqt_string windowsId, uint16_t territory);
libqt_list /* of libqt_string */ QTimeZone_WindowsIdToIanaIds(const libqt_string windowsId);
libqt_list /* of libqt_string */ QTimeZone_WindowsIdToIanaIds2(const libqt_string windowsId, uint16_t territory);
libqt_string QTimeZone_DisplayName22(const QTimeZone* self, const QDateTime* atDateTime, int nameType);
libqt_string QTimeZone_DisplayName3(const QTimeZone* self, const QDateTime* atDateTime, int nameType, const QLocale* locale);
libqt_string QTimeZone_DisplayName23(const QTimeZone* self, int timeType, int nameType);
libqt_string QTimeZone_DisplayName32(const QTimeZone* self, int timeType, int nameType, const QLocale* locale);
void QTimeZone_Delete(QTimeZone* self);

QTimeZone__OffsetData* QTimeZone__OffsetData_new(const QTimeZone__OffsetData* param1);
QTimeZone__OffsetData* QTimeZone__OffsetData_new2();
void QTimeZone__OffsetData_OperatorAssign(QTimeZone__OffsetData* self, const QTimeZone__OffsetData* param1);
void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
