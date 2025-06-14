#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeZone>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData
#include <qtimezone.h>
#include "libqtimezone.h"
#include "libqtimezone.hxx"

QTimeZone* QTimeZone_new() {
    return new QTimeZone();
}

QTimeZone* QTimeZone_new2(const libqt_string ianaId) {
    QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
    return new QTimeZone(ianaId_QByteArray);
}

QTimeZone* QTimeZone_new3(int offsetSeconds) {
    return new QTimeZone(static_cast<int>(offsetSeconds));
}

QTimeZone* QTimeZone_new4(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation) {
    QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
    return new QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString);
}

QTimeZone* QTimeZone_new5(const QTimeZone* other) {
    return new QTimeZone(*other);
}

QTimeZone* QTimeZone_new6(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation, uint16_t territory) {
    QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
    return new QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Territory>(territory));
}

QTimeZone* QTimeZone_new7(const libqt_string zoneId, int offsetSeconds, const libqt_string name, const libqt_string abbreviation, uint16_t territory, const libqt_string comment) {
    QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    return new QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Territory>(territory), comment_QString);
}

void QTimeZone_OperatorAssign(QTimeZone* self, const QTimeZone* other) {
    self->operator=(*other);
}

void QTimeZone_Swap(QTimeZone* self, QTimeZone* other) {
    self->swap(*other);
}

bool QTimeZone_IsValid(const QTimeZone* self) {
    return self->isValid();
}

libqt_string QTimeZone_Id(const QTimeZone* self) {
    QByteArray _qb = self->id();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t QTimeZone_Territory(const QTimeZone* self) {
    return static_cast<uint16_t>(self->territory());
}

uint16_t QTimeZone_Country(const QTimeZone* self) {
    return static_cast<uint16_t>(self->country());
}

libqt_string QTimeZone_Comment(const QTimeZone* self) {
    QString _ret = self->comment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_DisplayName(const QTimeZone* self, const QDateTime* atDateTime) {
    QString _ret = self->displayName(*atDateTime);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_DisplayNameWithTimeType(const QTimeZone* self, int timeType) {
    QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_Abbreviation(const QTimeZone* self, const QDateTime* atDateTime) {
    QString _ret = self->abbreviation(*atDateTime);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTimeZone_OffsetFromUtc(const QTimeZone* self, const QDateTime* atDateTime) {
    return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_StandardTimeOffset(const QTimeZone* self, const QDateTime* atDateTime) {
    return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_DaylightTimeOffset(const QTimeZone* self, const QDateTime* atDateTime) {
    return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_HasDaylightTime(const QTimeZone* self) {
    return self->hasDaylightTime();
}

bool QTimeZone_IsDaylightTime(const QTimeZone* self, const QDateTime* atDateTime) {
    return self->isDaylightTime(*atDateTime);
}

QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, const QDateTime* forDateTime) {
    return new QTimeZone::OffsetData(self->offsetData(*forDateTime));
}

bool QTimeZone_HasTransitions(const QTimeZone* self) {
    return self->hasTransitions();
}

QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, const QDateTime* afterDateTime) {
    return new QTimeZone::OffsetData(self->nextTransition(*afterDateTime));
}

QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, const QDateTime* beforeDateTime) {
    return new QTimeZone::OffsetData(self->previousTransition(*beforeDateTime));
}

libqt_list /* of QTimeZone__OffsetData* */ QTimeZone_Transitions(const QTimeZone* self, const QDateTime* fromDateTime, const QDateTime* toDateTime) {
    QTimeZone::OffsetDataList _ret = self->transitions(*fromDateTime, *toDateTime);
    // Convert QList<> from C++ memory to manually-managed C memory
    QTimeZone__OffsetData** _arr = static_cast<QTimeZone__OffsetData**>(malloc(sizeof(QTimeZone__OffsetData*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QTimeZone::OffsetData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QTimeZone_SystemTimeZoneId() {
    QByteArray _qb = QTimeZone::systemTimeZoneId();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTimeZone* QTimeZone_SystemTimeZone() {
    return new QTimeZone(QTimeZone::systemTimeZone());
}

QTimeZone* QTimeZone_Utc() {
    return new QTimeZone(QTimeZone::utc());
}

bool QTimeZone_IsTimeZoneIdAvailable(const libqt_string ianaId) {
    QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
    return QTimeZone::isTimeZoneIdAvailable(ianaId_QByteArray);
}

libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIds() {
    QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIdsWithTerritory(uint16_t territory) {
    QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<QLocale::Territory>(territory));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds) {
    QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<int>(offsetSeconds));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QTimeZone_IanaIdToWindowsId(const libqt_string ianaId) {
    QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
    QByteArray _qb = QTimeZone::ianaIdToWindowsId(ianaId_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_WindowsIdToDefaultIanaId(const libqt_string windowsId) {
    QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
    QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_WindowsIdToDefaultIanaId2(const libqt_string windowsId, uint16_t territory) {
    QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
    QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray, static_cast<QLocale::Territory>(territory));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QTimeZone_WindowsIdToIanaIds(const libqt_string windowsId) {
    QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
    QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QTimeZone_WindowsIdToIanaIds2(const libqt_string windowsId, uint16_t territory) {
    QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
    QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray, static_cast<QLocale::Territory>(territory));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QTimeZone_DisplayName2(const QTimeZone* self, const QDateTime* atDateTime, int nameType) {
    QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_DisplayName3(const QTimeZone* self, const QDateTime* atDateTime, int nameType, const QLocale* locale) {
    QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType), *locale);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_DisplayName22(const QTimeZone* self, int timeType, int nameType) {
    QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTimeZone_DisplayName32(const QTimeZone* self, int timeType, int nameType, const QLocale* locale) {
    QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType), *locale);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTimeZone_Delete(QTimeZone* self) {
    delete self;
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new(const QTimeZone__OffsetData* param1) {
    return new QTimeZone::OffsetData(*param1);
}

void QTimeZone__OffsetData_OperatorAssign(QTimeZone__OffsetData* self, const QTimeZone__OffsetData* param1) {
    self->operator=(*param1);
}

void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self) {
    delete self;
}
