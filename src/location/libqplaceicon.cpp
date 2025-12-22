#include <QMap>
#include <QPlaceIcon>
#include <QPlaceManager>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qplaceicon.h>
#include "libqplaceicon.h"
#include "libqplaceicon.hxx"

QPlaceIcon* QPlaceIcon_new() {
    return new QPlaceIcon();
}

QPlaceIcon* QPlaceIcon_new2(const QPlaceIcon* other) {
    return new QPlaceIcon(*other);
}

void QPlaceIcon_OperatorAssign(QPlaceIcon* self, const QPlaceIcon* other) {
    self->operator=(*other);
}

void QPlaceIcon_Swap(QPlaceIcon* self, QPlaceIcon* other) {
    self->swap(*other);
}

QUrl* QPlaceIcon_Url(const QPlaceIcon* self) {
    return new QUrl(self->url());
}

QPlaceManager* QPlaceIcon_Manager(const QPlaceIcon* self) {
    return self->manager();
}

void QPlaceIcon_SetManager(QPlaceIcon* self, QPlaceManager* manager) {
    self->setManager(manager);
}

libqt_map /* of libqt_string to QVariant* */ QPlaceIcon_Parameters(const QPlaceIcon* self) {
    QMap<QString, QVariant> _ret = self->parameters();
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

void QPlaceIcon_SetParameters(QPlaceIcon* self, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    self->setParameters(parameters_QMap);
}

bool QPlaceIcon_IsEmpty(const QPlaceIcon* self) {
    return self->isEmpty();
}

QUrl* QPlaceIcon_Url1(const QPlaceIcon* self, const QSize* size) {
    return new QUrl(self->url(*size));
}

void QPlaceIcon_Delete(QPlaceIcon* self) {
    delete self;
}
