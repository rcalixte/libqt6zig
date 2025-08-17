#include <QAnyStringView>
#include <QCalendar>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__SystemId
#define WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay
#include <QDate>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcalendar.h>
#include "libqcalendar.h"
#include "libqcalendar.hxx"

QCalendar* QCalendar_new(const QCalendar* other) {
    return new QCalendar(*other);
}

QCalendar* QCalendar_new2(QCalendar* other) {
    return new QCalendar(std::move(*other));
}

QCalendar* QCalendar_new3() {
    return new QCalendar();
}

QCalendar* QCalendar_new4(int system) {
    return new QCalendar(static_cast<QCalendar::System>(system));
}

QCalendar* QCalendar_new5(libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QCalendar(QAnyStringView(name_QString));
}

QCalendar* QCalendar_new6(QCalendar__SystemId* id) {
    return new QCalendar(*id);
}

void QCalendar_CopyAssign(QCalendar* self, QCalendar* other) {
    *self = *other;
}

void QCalendar_MoveAssign(QCalendar* self, QCalendar* other) {
    *self = std::move(*other);
}

bool QCalendar_IsValid(const QCalendar* self) {
    return self->isValid();
}

int QCalendar_DaysInMonth(const QCalendar* self, int month) {
    return self->daysInMonth(static_cast<int>(month));
}

int QCalendar_DaysInYear(const QCalendar* self, int year) {
    return self->daysInYear(static_cast<int>(year));
}

int QCalendar_MonthsInYear(const QCalendar* self, int year) {
    return self->monthsInYear(static_cast<int>(year));
}

bool QCalendar_IsDateValid(const QCalendar* self, int year, int month, int day) {
    return self->isDateValid(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QCalendar_IsLeapYear(const QCalendar* self, int year) {
    return self->isLeapYear(static_cast<int>(year));
}

bool QCalendar_IsGregorian(const QCalendar* self) {
    return self->isGregorian();
}

bool QCalendar_IsLunar(const QCalendar* self) {
    return self->isLunar();
}

bool QCalendar_IsLuniSolar(const QCalendar* self) {
    return self->isLuniSolar();
}

bool QCalendar_IsSolar(const QCalendar* self) {
    return self->isSolar();
}

bool QCalendar_IsProleptic(const QCalendar* self) {
    return self->isProleptic();
}

bool QCalendar_HasYearZero(const QCalendar* self) {
    return self->hasYearZero();
}

int QCalendar_MaximumDaysInMonth(const QCalendar* self) {
    return self->maximumDaysInMonth();
}

int QCalendar_MinimumDaysInMonth(const QCalendar* self) {
    return self->minimumDaysInMonth();
}

int QCalendar_MaximumMonthsInYear(const QCalendar* self) {
    return self->maximumMonthsInYear();
}

libqt_string QCalendar_Name(const QCalendar* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDate* QCalendar_DateFromParts(const QCalendar* self, int year, int month, int day) {
    return new QDate(self->dateFromParts(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day)));
}

QDate* QCalendar_DateFromParts2(const QCalendar* self, const QCalendar__YearMonthDay* parts) {
    return new QDate(self->dateFromParts(*parts));
}

QDate* QCalendar_MatchCenturyToWeekday(const QCalendar* self, const QCalendar__YearMonthDay* parts, int dow) {
    return new QDate(self->matchCenturyToWeekday(*parts, static_cast<int>(dow)));
}

QCalendar__YearMonthDay* QCalendar_PartsFromDate(const QCalendar* self, QDate* date) {
    return new QCalendar::YearMonthDay(self->partsFromDate(*date));
}

int QCalendar_DayOfWeek(const QCalendar* self, QDate* date) {
    return self->dayOfWeek(*date);
}

libqt_string QCalendar_MonthName(const QCalendar* self, const QLocale* locale, int month) {
    QString _ret = self->monthName(*locale, static_cast<int>(month));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_StandaloneMonthName(const QCalendar* self, const QLocale* locale, int month) {
    QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_WeekDayName(const QCalendar* self, const QLocale* locale, int day) {
    QString _ret = self->weekDayName(*locale, static_cast<int>(day));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_StandaloneWeekDayName(const QCalendar* self, const QLocale* locale, int day) {
    QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QCalendar_AvailableCalendars() {
    QList<QString> _ret = QCalendar::availableCalendars();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QCalendar_DaysInMonth2(const QCalendar* self, int month, int year) {
    return self->daysInMonth(static_cast<int>(month), static_cast<int>(year));
}

libqt_string QCalendar_MonthName3(const QCalendar* self, const QLocale* locale, int month, int year) {
    QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_MonthName4(const QCalendar* self, const QLocale* locale, int month, int year, int format) {
    QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_StandaloneMonthName3(const QCalendar* self, const QLocale* locale, int month, int year) {
    QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_StandaloneMonthName4(const QCalendar* self, const QLocale* locale, int month, int year, int format) {
    QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_WeekDayName3(const QCalendar* self, const QLocale* locale, int day, int format) {
    QString _ret = self->weekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCalendar_StandaloneWeekDayName3(const QCalendar* self, const QLocale* locale, int day, int format) {
    QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCalendar_Delete(QCalendar* self) {
    delete self;
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new(const QCalendar__YearMonthDay* other) {
    return new QCalendar::YearMonthDay(*other);
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(QCalendar__YearMonthDay* other) {
    return new QCalendar::YearMonthDay(std::move(*other));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3() {
    return new QCalendar::YearMonthDay();
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y) {
    return new QCalendar::YearMonthDay(static_cast<int>(y));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new5(int y, int m) {
    return new QCalendar::YearMonthDay(static_cast<int>(y), static_cast<int>(m));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new6(int y, int m, int d) {
    return new QCalendar::YearMonthDay(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

void QCalendar__YearMonthDay_CopyAssign(QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other) {
    *self = *other;
}

void QCalendar__YearMonthDay_MoveAssign(QCalendar__YearMonthDay* self, QCalendar__YearMonthDay* other) {
    *self = std::move(*other);
}

bool QCalendar__YearMonthDay_IsValid(const QCalendar__YearMonthDay* self) {
    return self->isValid();
}

void QCalendar__YearMonthDay_Delete(QCalendar__YearMonthDay* self) {
    delete self;
}

QCalendar__SystemId* QCalendar__SystemId_new(const QCalendar__SystemId* other) {
    return new QCalendar::SystemId(*other);
}

QCalendar__SystemId* QCalendar__SystemId_new2(QCalendar__SystemId* other) {
    return new QCalendar::SystemId(std::move(*other));
}

QCalendar__SystemId* QCalendar__SystemId_new3() {
    return new QCalendar::SystemId();
}

void QCalendar__SystemId_CopyAssign(QCalendar__SystemId* self, QCalendar__SystemId* other) {
    *self = *other;
}

void QCalendar__SystemId_MoveAssign(QCalendar__SystemId* self, QCalendar__SystemId* other) {
    *self = std::move(*other);
}

size_t QCalendar__SystemId_Index(const QCalendar__SystemId* self) {
    return self->index();
}

bool QCalendar__SystemId_IsValid(const QCalendar__SystemId* self) {
    return self->isValid();
}

void QCalendar__SystemId_Delete(QCalendar__SystemId* self) {
    delete self;
}
