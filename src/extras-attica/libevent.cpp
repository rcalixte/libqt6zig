#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Event
#include <QDate>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <event.h>
#include "libevent.h"
#include "libevent.hxx"

Attica__Event* Attica__Event_new() {
    return new Attica::Event();
}

Attica__Event* Attica__Event_new2(const Attica__Event* other) {
    return new Attica::Event(*other);
}

void Attica__Event_OperatorAssign(Attica__Event* self, const Attica__Event* other) {
    self->operator=(*other);
}

void Attica__Event_SetId(Attica__Event* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Event_Id(const Attica__Event* self) {
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

void Attica__Event_SetName(Attica__Event* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Event_Name(const Attica__Event* self) {
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

void Attica__Event_SetDescription(Attica__Event* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string Attica__Event_Description(const Attica__Event* self) {
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

void Attica__Event_SetUser(Attica__Event* self, const libqt_string user) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    self->setUser(user_QString);
}

libqt_string Attica__Event_User(const Attica__Event* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Event_SetStartDate(Attica__Event* self, const QDate* startDate) {
    self->setStartDate(*startDate);
}

QDate* Attica__Event_StartDate(const Attica__Event* self) {
    return new QDate(self->startDate());
}

void Attica__Event_SetEndDate(Attica__Event* self, const QDate* endDate) {
    self->setEndDate(*endDate);
}

QDate* Attica__Event_EndDate(const Attica__Event* self) {
    return new QDate(self->endDate());
}

void Attica__Event_SetLatitude(Attica__Event* self, double latitude) {
    self->setLatitude(static_cast<qreal>(latitude));
}

double Attica__Event_Latitude(const Attica__Event* self) {
    return static_cast<double>(self->latitude());
}

void Attica__Event_SetLongitude(Attica__Event* self, double longitude) {
    self->setLongitude(static_cast<qreal>(longitude));
}

double Attica__Event_Longitude(const Attica__Event* self) {
    return static_cast<double>(self->longitude());
}

void Attica__Event_SetHomepage(Attica__Event* self, const QUrl* homepage) {
    self->setHomepage(*homepage);
}

QUrl* Attica__Event_Homepage(const Attica__Event* self) {
    return new QUrl(self->homepage());
}

void Attica__Event_SetCountry(Attica__Event* self, const libqt_string country) {
    QString country_QString = QString::fromUtf8(country.data, country.len);
    self->setCountry(country_QString);
}

libqt_string Attica__Event_Country(const Attica__Event* self) {
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

void Attica__Event_SetCity(Attica__Event* self, const libqt_string city) {
    QString city_QString = QString::fromUtf8(city.data, city.len);
    self->setCity(city_QString);
}

libqt_string Attica__Event_City(const Attica__Event* self) {
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

void Attica__Event_AddExtendedAttribute(Attica__Event* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addExtendedAttribute(key_QString, value_QString);
}

libqt_string Attica__Event_ExtendedAttribute(const Attica__Event* self, const libqt_string key) {
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

libqt_map /* of libqt_string to libqt_string */ Attica__Event_ExtendedAttributes(const Attica__Event* self) {
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

bool Attica__Event_IsValid(const Attica__Event* self) {
    return self->isValid();
}

void Attica__Event_Delete(Attica__Event* self) {
    delete self;
}
