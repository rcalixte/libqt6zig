#include <QGeoAddress>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgeoaddress.h>
#include "libqgeoaddress.h"
#include "libqgeoaddress.hxx"

QGeoAddress* QGeoAddress_new() {
    return new QGeoAddress();
}

QGeoAddress* QGeoAddress_new2(const QGeoAddress* other) {
    return new QGeoAddress(*other);
}

void QGeoAddress_OperatorAssign(QGeoAddress* self, const QGeoAddress* other) {
    self->operator=(*other);
}

void QGeoAddress_Swap(QGeoAddress* self, QGeoAddress* other) {
    self->swap(*other);
}

libqt_string QGeoAddress_Text(const QGeoAddress* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetText(QGeoAddress* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QGeoAddress_Country(const QGeoAddress* self) {
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

void QGeoAddress_SetCountry(QGeoAddress* self, const libqt_string country) {
    QString country_QString = QString::fromUtf8(country.data, country.len);
    self->setCountry(country_QString);
}

libqt_string QGeoAddress_CountryCode(const QGeoAddress* self) {
    QString _ret = self->countryCode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetCountryCode(QGeoAddress* self, const libqt_string countryCode) {
    QString countryCode_QString = QString::fromUtf8(countryCode.data, countryCode.len);
    self->setCountryCode(countryCode_QString);
}

libqt_string QGeoAddress_State(const QGeoAddress* self) {
    QString _ret = self->state();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetState(QGeoAddress* self, const libqt_string state) {
    QString state_QString = QString::fromUtf8(state.data, state.len);
    self->setState(state_QString);
}

libqt_string QGeoAddress_County(const QGeoAddress* self) {
    QString _ret = self->county();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetCounty(QGeoAddress* self, const libqt_string county) {
    QString county_QString = QString::fromUtf8(county.data, county.len);
    self->setCounty(county_QString);
}

libqt_string QGeoAddress_City(const QGeoAddress* self) {
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

void QGeoAddress_SetCity(QGeoAddress* self, const libqt_string city) {
    QString city_QString = QString::fromUtf8(city.data, city.len);
    self->setCity(city_QString);
}

libqt_string QGeoAddress_District(const QGeoAddress* self) {
    QString _ret = self->district();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetDistrict(QGeoAddress* self, const libqt_string district) {
    QString district_QString = QString::fromUtf8(district.data, district.len);
    self->setDistrict(district_QString);
}

libqt_string QGeoAddress_PostalCode(const QGeoAddress* self) {
    QString _ret = self->postalCode();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetPostalCode(QGeoAddress* self, const libqt_string postalCode) {
    QString postalCode_QString = QString::fromUtf8(postalCode.data, postalCode.len);
    self->setPostalCode(postalCode_QString);
}

libqt_string QGeoAddress_Street(const QGeoAddress* self) {
    QString _ret = self->street();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetStreet(QGeoAddress* self, const libqt_string street) {
    QString street_QString = QString::fromUtf8(street.data, street.len);
    self->setStreet(street_QString);
}

libqt_string QGeoAddress_StreetNumber(const QGeoAddress* self) {
    QString _ret = self->streetNumber();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoAddress_SetStreetNumber(QGeoAddress* self, const libqt_string streetNumber) {
    QString streetNumber_QString = QString::fromUtf8(streetNumber.data, streetNumber.len);
    self->setStreetNumber(streetNumber_QString);
}

bool QGeoAddress_IsEmpty(const QGeoAddress* self) {
    return self->isEmpty();
}

void QGeoAddress_Clear(QGeoAddress* self) {
    self->clear();
}

bool QGeoAddress_IsTextGenerated(const QGeoAddress* self) {
    return self->isTextGenerated();
}

void QGeoAddress_Delete(QGeoAddress* self) {
    delete self;
}
