#include <QGeoAddress>
#include <QGeoCoordinate>
#include <QGeoLocation>
#include <QGeoShape>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeolocation.h>
#include "libqgeolocation.h"
#include "libqgeolocation.hxx"

QGeoLocation* QGeoLocation_new() {
    return new QGeoLocation();
}

QGeoLocation* QGeoLocation_new2(const QGeoLocation* other) {
    return new QGeoLocation(*other);
}

void QGeoLocation_OperatorAssign(QGeoLocation* self, const QGeoLocation* other) {
    self->operator=(*other);
}

void QGeoLocation_Swap(QGeoLocation* self, QGeoLocation* other) {
    self->swap(*other);
}

QGeoAddress* QGeoLocation_Address(const QGeoLocation* self) {
    return new QGeoAddress(self->address());
}

void QGeoLocation_SetAddress(QGeoLocation* self, const QGeoAddress* address) {
    self->setAddress(*address);
}

QGeoCoordinate* QGeoLocation_Coordinate(const QGeoLocation* self) {
    return new QGeoCoordinate(self->coordinate());
}

void QGeoLocation_SetCoordinate(QGeoLocation* self, const QGeoCoordinate* position) {
    self->setCoordinate(*position);
}

QGeoShape* QGeoLocation_BoundingShape(const QGeoLocation* self) {
    return new QGeoShape(self->boundingShape());
}

void QGeoLocation_SetBoundingShape(QGeoLocation* self, const QGeoShape* shape) {
    self->setBoundingShape(*shape);
}

libqt_map /* of libqt_string to QVariant* */ QGeoLocation_ExtendedAttributes(const QGeoLocation* self) {
    QMap<QString, QVariant> _ret = self->extendedAttributes();
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

void QGeoLocation_SetExtendedAttributes(QGeoLocation* self, const libqt_map /* of libqt_string to QVariant* */ data) {
    QMap<QString, QVariant> data_QMap;
    libqt_string* data_karr = static_cast<libqt_string*>(data.keys);
    QVariant** data_varr = static_cast<QVariant**>(data.values);
    for (size_t i = 0; i < data.len; ++i) {
        QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
        data_QMap[data_karr_i_QString] = *(data_varr[i]);
    }
    self->setExtendedAttributes(data_QMap);
}

bool QGeoLocation_IsEmpty(const QGeoLocation* self) {
    return self->isEmpty();
}

void QGeoLocation_Delete(QGeoLocation* self) {
    delete self;
}
