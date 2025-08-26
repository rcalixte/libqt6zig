#include <KFormat>
#include <QDate>
#include <QDateTime>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kformat.h>
#include "libkformat.h"
#include "libkformat.hxx"

KFormat* KFormat_new() {
    return new KFormat();
}

KFormat* KFormat_new2(const KFormat* other) {
    return new KFormat(*other);
}

KFormat* KFormat_new3(const QLocale* locale) {
    return new KFormat(*locale);
}

void KFormat_OperatorAssign(KFormat* self, const KFormat* other) {
    self->operator=(*other);
}

libqt_string KFormat_FormatByteSize(const KFormat* self, double size) {
    QString _ret = self->formatByteSize(static_cast<double>(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatDuration(const KFormat* self, unsigned long long msecs) {
    QString _ret = self->formatDuration(static_cast<quint64>(msecs));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatDecimalDuration(const KFormat* self, unsigned long long msecs) {
    QString _ret = self->formatDecimalDuration(static_cast<quint64>(msecs));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatSpelloutDuration(const KFormat* self, unsigned long long msecs) {
    QString _ret = self->formatSpelloutDuration(static_cast<quint64>(msecs));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatRelativeDate(const KFormat* self, const QDate* date, int format) {
    QString _ret = self->formatRelativeDate(*date, static_cast<QLocale::FormatType>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatRelativeDateTime(const KFormat* self, const QDateTime* dateTime, int format) {
    QString _ret = self->formatRelativeDateTime(*dateTime, static_cast<QLocale::FormatType>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue(const KFormat* self, double value, int unit) {
    QString _ret = self->formatValue(static_cast<double>(value), static_cast<KFormat::Unit>(unit));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue2(const KFormat* self, double value, const libqt_string unit) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    QString _ret = self->formatValue(static_cast<double>(value), unit_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue3(const KFormat* self, double value, const libqt_string unit, int precision, int prefix, int dialect) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    QString _ret = self->formatValue(static_cast<double>(value), unit_QString, static_cast<int>(precision), static_cast<KFormat::UnitPrefix>(prefix), static_cast<KFormat::BinaryUnitDialect>(dialect));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatDistance(const KFormat* self, double distance) {
    QString _ret = self->formatDistance(static_cast<double>(distance));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatByteSize2(const KFormat* self, double size, int precision) {
    QString _ret = self->formatByteSize(static_cast<double>(size), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatByteSize3(const KFormat* self, double size, int precision, int dialect) {
    QString _ret = self->formatByteSize(static_cast<double>(size), static_cast<int>(precision), static_cast<KFormat::BinaryUnitDialect>(dialect));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatByteSize4(const KFormat* self, double size, int precision, int dialect, int units) {
    QString _ret = self->formatByteSize(static_cast<double>(size), static_cast<int>(precision), static_cast<KFormat::BinaryUnitDialect>(dialect), static_cast<KFormat::BinarySizeUnits>(units));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatDuration2(const KFormat* self, unsigned long long msecs, int options) {
    QString _ret = self->formatDuration(static_cast<quint64>(msecs), static_cast<KFormat::DurationFormatOptions>(options));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatDecimalDuration2(const KFormat* self, unsigned long long msecs, int decimalPlaces) {
    QString _ret = self->formatDecimalDuration(static_cast<quint64>(msecs), static_cast<int>(decimalPlaces));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue32(const KFormat* self, double value, int unit, int precision) {
    QString _ret = self->formatValue(static_cast<double>(value), static_cast<KFormat::Unit>(unit), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue4(const KFormat* self, double value, int unit, int precision, int prefix) {
    QString _ret = self->formatValue(static_cast<double>(value), static_cast<KFormat::Unit>(unit), static_cast<int>(precision), static_cast<KFormat::UnitPrefix>(prefix));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue5(const KFormat* self, double value, int unit, int precision, int prefix, int dialect) {
    QString _ret = self->formatValue(static_cast<double>(value), static_cast<KFormat::Unit>(unit), static_cast<int>(precision), static_cast<KFormat::UnitPrefix>(prefix), static_cast<KFormat::BinaryUnitDialect>(dialect));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue33(const KFormat* self, double value, const libqt_string unit, int precision) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    QString _ret = self->formatValue(static_cast<double>(value), unit_QString, static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatValue42(const KFormat* self, double value, const libqt_string unit, int precision, int prefix) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    QString _ret = self->formatValue(static_cast<double>(value), unit_QString, static_cast<int>(precision), static_cast<KFormat::UnitPrefix>(prefix));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFormat_FormatDistance2(const KFormat* self, double distance, int param2) {
    QString _ret = self->formatDistance(static_cast<double>(distance), static_cast<QFlags<KFormat::DistanceFormatOption>>(param2));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFormat_Delete(KFormat* self) {
    delete self;
}
