#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Person
#include <QDate>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <person.h>
#include "libperson.h"
#include "libperson.hxx"

Attica__Person* Attica__Person_new() {
    return new Attica::Person();
}

Attica__Person* Attica__Person_new2(const Attica__Person* other) {
    return new Attica::Person(*other);
}

void Attica__Person_OperatorAssign(Attica__Person* self, const Attica__Person* other) {
    self->operator=(*other);
}

void Attica__Person_SetId(Attica__Person* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Person_Id(const Attica__Person* self) {
    QString _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Person_SetFirstName(Attica__Person* self, const libqt_string firstName) {
    QString firstName_QString = QString::fromUtf8(firstName.data, firstName.len);
    self->setFirstName(firstName_QString);
}

libqt_string Attica__Person_FirstName(const Attica__Person* self) {
    QString _ret = self->firstName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Person_SetLastName(Attica__Person* self, const libqt_string lastName) {
    QString lastName_QString = QString::fromUtf8(lastName.data, lastName.len);
    self->setLastName(lastName_QString);
}

libqt_string Attica__Person_LastName(const Attica__Person* self) {
    QString _ret = self->lastName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Person_SetBirthday(Attica__Person* self, const QDate* birthday) {
    self->setBirthday(*birthday);
}

QDate* Attica__Person_Birthday(const Attica__Person* self) {
    return new QDate(self->birthday());
}

void Attica__Person_SetCountry(Attica__Person* self, const libqt_string country) {
    QString country_QString = QString::fromUtf8(country.data, country.len);
    self->setCountry(country_QString);
}

libqt_string Attica__Person_Country(const Attica__Person* self) {
    QString _ret = self->country();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Person_SetLatitude(Attica__Person* self, double latitude) {
    self->setLatitude(static_cast<double>(latitude));
}

double Attica__Person_Latitude(const Attica__Person* self) {
    return static_cast<double>(self->latitude());
}

void Attica__Person_SetLongitude(Attica__Person* self, double longitude) {
    self->setLongitude(static_cast<double>(longitude));
}

double Attica__Person_Longitude(const Attica__Person* self) {
    return static_cast<double>(self->longitude());
}

void Attica__Person_SetAvatarUrl(Attica__Person* self, const QUrl* avatarUrl) {
    self->setAvatarUrl(*avatarUrl);
}

QUrl* Attica__Person_AvatarUrl(const Attica__Person* self) {
    return new QUrl(self->avatarUrl());
}

void Attica__Person_SetHomepage(Attica__Person* self, const libqt_string homepage) {
    QString homepage_QString = QString::fromUtf8(homepage.data, homepage.len);
    self->setHomepage(homepage_QString);
}

libqt_string Attica__Person_Homepage(const Attica__Person* self) {
    QString _ret = self->homepage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Person_SetCity(Attica__Person* self, const libqt_string city) {
    QString city_QString = QString::fromUtf8(city.data, city.len);
    self->setCity(city_QString);
}

libqt_string Attica__Person_City(const Attica__Person* self) {
    QString _ret = self->city();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Person_AddExtendedAttribute(Attica__Person* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addExtendedAttribute(key_QString, value_QString);
}

libqt_string Attica__Person_ExtendedAttribute(const Attica__Person* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->extendedAttribute(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of libqt_string to libqt_string */ Attica__Person_ExtendedAttributes(const Attica__Person* self) {
    QMap<QString, QString> _ret = self->extendedAttributes();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool Attica__Person_IsValid(const Attica__Person* self) {
    return self->isValid();
}

void Attica__Person_Delete(Attica__Person* self) {
    delete self;
}
