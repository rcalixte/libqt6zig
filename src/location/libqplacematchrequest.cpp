#include <QList>
#include <QMap>
#include <QPlace>
#include <QPlaceMatchRequest>
#include <QPlaceSearchResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qplacematchrequest.h>
#include "libqplacematchrequest.h"
#include "libqplacematchrequest.hxx"

QPlaceMatchRequest* QPlaceMatchRequest_new() {
    return new QPlaceMatchRequest();
}

QPlaceMatchRequest* QPlaceMatchRequest_new2(const QPlaceMatchRequest* other) {
    return new QPlaceMatchRequest(*other);
}

void QPlaceMatchRequest_OperatorAssign(QPlaceMatchRequest* self, const QPlaceMatchRequest* other) {
    self->operator=(*other);
}

void QPlaceMatchRequest_Swap(QPlaceMatchRequest* self, QPlaceMatchRequest* other) {
    self->swap(*other);
}

libqt_list /* of QPlace* */ QPlaceMatchRequest_Places(const QPlaceMatchRequest* self) {
    QList<QPlace> _ret = self->places();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlace** _arr = static_cast<QPlace**>(malloc(sizeof(QPlace*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlace(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlaceMatchRequest_SetPlaces(QPlaceMatchRequest* self, const libqt_list /* of QPlace* */ places) {
    QList<QPlace> places_QList;
    places_QList.reserve(places.len);
    QPlace** places_arr = static_cast<QPlace**>(places.data);
    for (size_t i = 0; i < places.len; ++i) {
        places_QList.push_back(*(places_arr[i]));
    }
    self->setPlaces(places_QList);
}

void QPlaceMatchRequest_SetResults(QPlaceMatchRequest* self, const libqt_list /* of QPlaceSearchResult* */ results) {
    QList<QPlaceSearchResult> results_QList;
    results_QList.reserve(results.len);
    QPlaceSearchResult** results_arr = static_cast<QPlaceSearchResult**>(results.data);
    for (size_t i = 0; i < results.len; ++i) {
        results_QList.push_back(*(results_arr[i]));
    }
    self->setResults(results_QList);
}

libqt_map /* of libqt_string to QVariant* */ QPlaceMatchRequest_Parameters(const QPlaceMatchRequest* self) {
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

void QPlaceMatchRequest_SetParameters(QPlaceMatchRequest* self, const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    self->setParameters(parameters_QMap);
}

void QPlaceMatchRequest_Clear(QPlaceMatchRequest* self) {
    self->clear();
}

void QPlaceMatchRequest_Delete(QPlaceMatchRequest* self) {
    delete self;
}
