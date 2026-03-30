#define WORKAROUND_INNER_CLASS_DEFINITION_KUnitConversion__Unit
#include <KUnitConversion/UnitCategory>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <unit.h>
#include "libunit.h"
#include "libunit.hxx"

KUnitConversion__Unit* KUnitConversion__Unit_new() {
    return new KUnitConversion::Unit();
}

KUnitConversion__Unit* KUnitConversion__Unit_new2(const KUnitConversion__Unit* other) {
    return new KUnitConversion::Unit(*other);
}

void KUnitConversion__Unit_OperatorAssign(KUnitConversion__Unit* self, const KUnitConversion__Unit* other) {
    self->operator=(*other);
}

bool KUnitConversion__Unit_OperatorEqual(const KUnitConversion__Unit* self, const KUnitConversion__Unit* other) {
    return (*self == *other);
}

bool KUnitConversion__Unit_OperatorNotEqual(const KUnitConversion__Unit* self, const KUnitConversion__Unit* other) {
    return (*self != *other);
}

bool KUnitConversion__Unit_IsNull(const KUnitConversion__Unit* self) {
    return self->isNull();
}

bool KUnitConversion__Unit_IsValid(const KUnitConversion__Unit* self) {
    return self->isValid();
}

int KUnitConversion__Unit_Id(const KUnitConversion__Unit* self) {
    return static_cast<int>(self->id());
}

int KUnitConversion__Unit_CategoryId(const KUnitConversion__Unit* self) {
    return static_cast<int>(self->categoryId());
}

KUnitConversion__UnitCategory* KUnitConversion__Unit_Category(const KUnitConversion__Unit* self) {
    return new KUnitConversion::UnitCategory(self->category());
}

libqt_string KUnitConversion__Unit_Description(const KUnitConversion__Unit* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_Symbol(const KUnitConversion__Unit* self) {
    QString _ret = self->symbol();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToString(const KUnitConversion__Unit* self, double value) {
    QString _ret = self->toString(static_cast<qreal>(value));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToSymbolString(const KUnitConversion__Unit* self, double value) {
    QString _ret = self->toSymbolString(static_cast<qreal>(value));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToString2(const KUnitConversion__Unit* self, double value, int fieldWidth) {
    QString _ret = self->toString(static_cast<qreal>(value), static_cast<int>(fieldWidth));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToString3(const KUnitConversion__Unit* self, double value, int fieldWidth, char format) {
    QString _ret = self->toString(static_cast<qreal>(value), static_cast<int>(fieldWidth), static_cast<char>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToString4(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision) {
    QString _ret = self->toString(static_cast<qreal>(value), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToString5(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision, const QChar* fillChar) {
    QString _ret = self->toString(static_cast<qreal>(value), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision), *fillChar);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToSymbolString2(const KUnitConversion__Unit* self, double value, int fieldWidth) {
    QString _ret = self->toSymbolString(static_cast<qreal>(value), static_cast<int>(fieldWidth));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToSymbolString3(const KUnitConversion__Unit* self, double value, int fieldWidth, char format) {
    QString _ret = self->toSymbolString(static_cast<qreal>(value), static_cast<int>(fieldWidth), static_cast<char>(format));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToSymbolString4(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision) {
    QString _ret = self->toSymbolString(static_cast<qreal>(value), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUnitConversion__Unit_ToSymbolString5(const KUnitConversion__Unit* self, double value, int fieldWidth, char format, int precision, const QChar* fillChar) {
    QString _ret = self->toSymbolString(static_cast<qreal>(value), static_cast<int>(fieldWidth), static_cast<char>(format), static_cast<int>(precision), *fillChar);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUnitConversion__Unit_Delete(KUnitConversion__Unit* self) {
    delete self;
}
