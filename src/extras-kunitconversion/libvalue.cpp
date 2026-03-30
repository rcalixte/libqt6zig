#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Unit
#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Value
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <value.h>
#include "libvalue.h"
#include "libvalue.hxx"

KUnitConversion__Value* KUnitConversion__Value_new() {
    return new KUnitConversion::Value();
}

KUnitConversion__Value* KUnitConversion__Value_new2(double number, const KUnitConversion__Unit* unit) {
    return new KUnitConversion::Value(static_cast<qreal>(number), *unit);
}

KUnitConversion__Value* KUnitConversion__Value_new3(double number, const libqt_string unitString) {
    QString unitString_QString = QString::fromUtf8(unitString.data, unitString.len);
    return new KUnitConversion::Value(static_cast<qreal>(number), unitString_QString);
}

KUnitConversion__Value* KUnitConversion__Value_new4(double number, int unitId) {
    return new KUnitConversion::Value(static_cast<qreal>(number), static_cast<KUnitConversion::UnitId>(unitId));
}

KUnitConversion__Value* KUnitConversion__Value_new5(const QVariant* number, const libqt_string unitString) {
    QString unitString_QString = QString::fromUtf8(unitString.data, unitString.len);
    return new KUnitConversion::Value(*number, unitString_QString);
}

KUnitConversion__Value* KUnitConversion__Value_new6(const KUnitConversion__Value* other) {
    return new KUnitConversion::Value(*other);
}

void KUnitConversion__Value_OperatorAssign(KUnitConversion__Value* self, const KUnitConversion__Value* other) {
    self->operator=(*other);
}

void KUnitConversion__Value_Swap(KUnitConversion__Value* self, KUnitConversion__Value* other) {
    self->swap(*other);
}

bool KUnitConversion__Value_OperatorEqual(const KUnitConversion__Value* self, const KUnitConversion__Value* other) {
    return (*self == *other);
}

bool KUnitConversion__Value_OperatorNotEqual(const KUnitConversion__Value* self, const KUnitConversion__Value* other) {
    return (*self != *other);
}

bool KUnitConversion__Value_IsNull(const KUnitConversion__Value* self) {
    return self->isNull();
}

bool KUnitConversion__Value_IsValid(const KUnitConversion__Value* self) {
    return self->isValid();
}

double KUnitConversion__Value_Number(const KUnitConversion__Value* self) {
    return static_cast<double>(self->number());
}

KUnitConversion__Unit* KUnitConversion__Value_Unit(const KUnitConversion__Value* self) {
    return new KUnitConversion::Unit(self->unit());
}

libqt_string KUnitConversion__Value_ToString(const KUnitConversion__Value* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToSymbolString(const KUnitConversion__Value* self) {
    QString _ret = self->toSymbolString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KUnitConversion__Value* KUnitConversion__Value_Round(KUnitConversion__Value* self, unsigned int decimals) {
    KUnitConversion::Value& _ret = self->round(static_cast<uint>(decimals));
    // Cast returned reference into pointer
    return &_ret;
}

KUnitConversion__Value* KUnitConversion__Value_ConvertTo(const KUnitConversion__Value* self, const KUnitConversion__Unit* unit) {
    return new KUnitConversion::Value(self->convertTo(*unit));
}

KUnitConversion__Value* KUnitConversion__Value_ConvertTo2(const KUnitConversion__Value* self, int unit) {
    return new KUnitConversion::Value(self->convertTo(static_cast<KUnitConversion::UnitId>(unit)));
}

KUnitConversion__Value* KUnitConversion__Value_ConvertTo3(const KUnitConversion__Value* self, const libqt_string unit) {
    QString unit_QString = QString::fromUtf8(unit.data, unit.len);
    return new KUnitConversion::Value(self->convertTo(unit_QString));
}

libqt_string KUnitConversion__Value_ToString1(const KUnitConversion__Value* self, int fieldWidth) {
    QString _ret = self->toString(static_cast<int>(fieldWidth));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToString2(const KUnitConversion__Value* self, int fieldWidth, char format) {
    QString _ret = self->toString(static_cast<int>(fieldWidth), static_cast<char>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToString3(const KUnitConversion__Value* self, int fieldWidth, char format, int precision) {
    QString _ret = self->toString(static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToString4(const KUnitConversion__Value* self, int fieldWidth, char format, int precision, const QChar* fillChar) {
    QString _ret = self->toString(static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision), *fillChar);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToSymbolString1(const KUnitConversion__Value* self, int fieldWidth) {
    QString _ret = self->toSymbolString(static_cast<int>(fieldWidth));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToSymbolString2(const KUnitConversion__Value* self, int fieldWidth, char format) {
    QString _ret = self->toSymbolString(static_cast<int>(fieldWidth), static_cast<char>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToSymbolString3(const KUnitConversion__Value* self, int fieldWidth, char format, int precision) {
    QString _ret = self->toSymbolString(static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Value_ToSymbolString4(const KUnitConversion__Value* self, int fieldWidth, char format, int precision, const QChar* fillChar) {
    QString _ret = self->toSymbolString(static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision), *fillChar);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUnitConversion__Value_Delete(KUnitConversion__Value* self) {
    delete self;
}
