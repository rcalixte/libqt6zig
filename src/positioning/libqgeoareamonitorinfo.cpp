#include <QDateTime>
#include <QGeoAreaMonitorInfo>
#include <QGeoShape>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeoareamonitorinfo.h>
#include "libqgeoareamonitorinfo.h"
#include "libqgeoareamonitorinfo.hxx"

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new() {
    return new QGeoAreaMonitorInfo();
}

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new2(const QGeoAreaMonitorInfo* other) {
    return new QGeoAreaMonitorInfo(*other);
}

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new3(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QGeoAreaMonitorInfo(name_QString);
}

void QGeoAreaMonitorInfo_OperatorAssign(QGeoAreaMonitorInfo* self, const QGeoAreaMonitorInfo* other) {
    self->operator=(*other);
}

void QGeoAreaMonitorInfo_Swap(QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other) {
    self->swap(*other);
}

libqt_string QGeoAreaMonitorInfo_Name(const QGeoAreaMonitorInfo* self) {
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

void QGeoAreaMonitorInfo_SetName(QGeoAreaMonitorInfo* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string QGeoAreaMonitorInfo_Identifier(const QGeoAreaMonitorInfo* self) {
    QString _ret = self->identifier();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QGeoAreaMonitorInfo_IsValid(const QGeoAreaMonitorInfo* self) {
    return self->isValid();
}

QGeoShape* QGeoAreaMonitorInfo_Area(const QGeoAreaMonitorInfo* self) {
    return new QGeoShape(self->area());
}

void QGeoAreaMonitorInfo_SetArea(QGeoAreaMonitorInfo* self, const QGeoShape* newShape) {
    self->setArea(*newShape);
}

QDateTime* QGeoAreaMonitorInfo_Expiration(const QGeoAreaMonitorInfo* self) {
    return new QDateTime(self->expiration());
}

void QGeoAreaMonitorInfo_SetExpiration(QGeoAreaMonitorInfo* self, const QDateTime* expiry) {
    self->setExpiration(*expiry);
}

bool QGeoAreaMonitorInfo_IsPersistent(const QGeoAreaMonitorInfo* self) {
    return self->isPersistent();
}

void QGeoAreaMonitorInfo_SetPersistent(QGeoAreaMonitorInfo* self, bool isPersistent) {
    self->setPersistent(isPersistent);
}

libqt_map /* of libqt_string to QVariant* */ QGeoAreaMonitorInfo_NotificationParameters(const QGeoAreaMonitorInfo* self) {
    QMap<QString, QVariant> _ret = self->notificationParameters();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
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
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QGeoAreaMonitorInfo_SetNotificationParameters(QGeoAreaMonitorInfo* self, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    self->setNotificationParameters(parameters_QMap);
}

void QGeoAreaMonitorInfo_Detach(QGeoAreaMonitorInfo* self) {
    self->detach();
}

void QGeoAreaMonitorInfo_Delete(QGeoAreaMonitorInfo* self) {
    delete self;
}
