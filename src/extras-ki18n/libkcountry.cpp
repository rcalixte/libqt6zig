#include <KCountry>
#include <KCountrySubdivision>
#include <KTimeZone>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcountry.h>
#include "libkcountry.h"
#include "libkcountry.hxx"

KCountry* KTimeZone_Country(const char* param1) {
    return new KCountry(KTimeZone::country(param1));
}

KCountry* KCountry_new() {
    return new KCountry();
}

KCountry* KCountry_new2(const KCountry* param1) {
    return new KCountry(*param1);
}

void KCountry_OperatorAssign(KCountry* self, const KCountry* param1) {
    self->operator=(*param1);
}

bool KCountry_OperatorEqual(const KCountry* self, const KCountry* other) {
    return (*self == *other);
}

bool KCountry_OperatorNotEqual(const KCountry* self, const KCountry* other) {
    return (*self != *other);
}

bool KCountry_IsValid(const KCountry* self) {
    return self->isValid();
}

libqt_string KCountry_Alpha2(const KCountry* self) {
    QString _ret = self->alpha2();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCountry_Alpha3(const KCountry* self) {
    QString _ret = self->alpha3();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCountry_Name(const KCountry* self) {
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

libqt_string KCountry_EmojiFlag(const KCountry* self) {
    QString _ret = self->emojiFlag();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint16_t KCountry_Country(const KCountry* self) {
    return static_cast<uint16_t>(self->country());
}

libqt_list /* of const char* */ KCountry_TimeZoneIds(const KCountry* self) {
    QList<const char*> _ret = self->timeZoneIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    const char** _arr = static_cast<const char**>(malloc(sizeof(const char*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = (const char*)_ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KCountry_CurrencyCode(const KCountry* self) {
    QString _ret = self->currencyCode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KCountrySubdivision* */ KCountry_Subdivisions(const KCountry* self) {
    QList<KCountrySubdivision> _ret = self->subdivisions();
    // Convert QList<> from C++ memory to manually-managed C memory
    KCountrySubdivision** _arr = static_cast<KCountrySubdivision**>(malloc(sizeof(KCountrySubdivision*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KCountrySubdivision(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KCountry* KCountry_FromAlpha22(const char* alpha2Code) {
    return new KCountry(KCountry::fromAlpha2(alpha2Code));
}

KCountry* KCountry_FromAlpha32(const char* alpha3Code) {
    return new KCountry(KCountry::fromAlpha3(alpha3Code));
}

KCountry* KCountry_FromLocation(float latitude, float longitude) {
    return new KCountry(KCountry::fromLocation(static_cast<float>(latitude), static_cast<float>(longitude)));
}

KCountry* KCountry_FromQLocale(uint16_t country) {
    return new KCountry(KCountry::fromQLocale(static_cast<QLocale::Country>(country)));
}

libqt_list /* of KCountry* */ KCountry_AllCountries() {
    QList<KCountry> _ret = KCountry::allCountries();
    // Convert QList<> from C++ memory to manually-managed C memory
    KCountry** _arr = static_cast<KCountry**>(malloc(sizeof(KCountry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KCountry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCountry_Delete(KCountry* self) {
    delete self;
}
