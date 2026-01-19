#include <QGeoCoordinate>
#include <QGeoRectangle>
#include <QGeoRoute>
#include <QGeoRouteRequest>
#include <QGeoRouteSegment>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeoroute.h>
#include "libqgeoroute.h"
#include "libqgeoroute.hxx"

QGeoRoute* QGeoRoute_new() {
    return new QGeoRoute();
}

QGeoRoute* QGeoRoute_new2(const QGeoRoute* other) {
    return new QGeoRoute(*other);
}

void QGeoRoute_OperatorAssign(QGeoRoute* self, const QGeoRoute* other) {
    self->operator=(*other);
}

void QGeoRoute_Swap(QGeoRoute* self, QGeoRoute* other) {
    self->swap(*other);
}

void QGeoRoute_SetRouteId(QGeoRoute* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setRouteId(id_QString);
}

libqt_string QGeoRoute_RouteId(const QGeoRoute* self) {
    QString _ret = self->routeId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoRoute_SetRequest(QGeoRoute* self, const QGeoRouteRequest* request) {
    self->setRequest(*request);
}

QGeoRouteRequest* QGeoRoute_Request(const QGeoRoute* self) {
    return new QGeoRouteRequest(self->request());
}

void QGeoRoute_SetBounds(QGeoRoute* self, const QGeoRectangle* bounds) {
    self->setBounds(*bounds);
}

QGeoRectangle* QGeoRoute_Bounds(const QGeoRoute* self) {
    return new QGeoRectangle(self->bounds());
}

void QGeoRoute_SetFirstRouteSegment(QGeoRoute* self, const QGeoRouteSegment* routeSegment) {
    self->setFirstRouteSegment(*routeSegment);
}

QGeoRouteSegment* QGeoRoute_FirstRouteSegment(const QGeoRoute* self) {
    return new QGeoRouteSegment(self->firstRouteSegment());
}

ptrdiff_t QGeoRoute_SegmentsCount(const QGeoRoute* self) {
    return static_cast<ptrdiff_t>(self->segmentsCount());
}

libqt_list /* of QGeoRouteSegment* */ QGeoRoute_Segments(const QGeoRoute* self) {
    QList<QGeoRouteSegment> _ret = self->segments();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoRouteSegment** _arr = static_cast<QGeoRouteSegment**>(malloc(sizeof(QGeoRouteSegment*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoRouteSegment(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRoute_SetTravelTime(QGeoRoute* self, int secs) {
    self->setTravelTime(static_cast<int>(secs));
}

int QGeoRoute_TravelTime(const QGeoRoute* self) {
    return self->travelTime();
}

void QGeoRoute_SetDistance(QGeoRoute* self, double distance) {
    self->setDistance(static_cast<qreal>(distance));
}

double QGeoRoute_Distance(const QGeoRoute* self) {
    return static_cast<double>(self->distance());
}

void QGeoRoute_SetTravelMode(QGeoRoute* self, int mode) {
    self->setTravelMode(static_cast<QGeoRouteRequest::TravelMode>(mode));
}

int QGeoRoute_TravelMode(const QGeoRoute* self) {
    return static_cast<int>(self->travelMode());
}

void QGeoRoute_SetPath(QGeoRoute* self, const libqt_list /* of QGeoCoordinate* */ path) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    self->setPath(path_QList);
}

libqt_list /* of QGeoCoordinate* */ QGeoRoute_Path(const QGeoRoute* self) {
    QList<QGeoCoordinate> _ret = self->path();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoCoordinate** _arr = static_cast<QGeoCoordinate**>(malloc(sizeof(QGeoCoordinate*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoCoordinate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRoute_SetRouteLegs(QGeoRoute* self, const libqt_list /* of QGeoRoute* */ legs) {
    QList<QGeoRoute> legs_QList;
    legs_QList.reserve(legs.len);
    QGeoRoute** legs_arr = static_cast<QGeoRoute**>(legs.data);
    for (size_t i = 0; i < legs.len; ++i) {
        legs_QList.push_back(*(legs_arr[i]));
    }
    self->setRouteLegs(legs_QList);
}

libqt_list /* of QGeoRoute* */ QGeoRoute_RouteLegs(const QGeoRoute* self) {
    QList<QGeoRoute> _ret = self->routeLegs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoRoute** _arr = static_cast<QGeoRoute**>(malloc(sizeof(QGeoRoute*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoRoute(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRoute_SetExtendedAttributes(QGeoRoute* self, const libqt_map /* of libqt_string to QVariant* */ extendedAttributes) {
    QMap<QString, QVariant> extendedAttributes_QMap;
    libqt_string* extendedAttributes_karr = static_cast<libqt_string*>(extendedAttributes.keys);
    QVariant** extendedAttributes_varr = static_cast<QVariant**>(extendedAttributes.values);
    for (size_t i = 0; i < extendedAttributes.len; ++i) {
        QString extendedAttributes_karr_i_QString = QString::fromUtf8(extendedAttributes_karr[i].data, extendedAttributes_karr[i].len);
        extendedAttributes_QMap[extendedAttributes_karr_i_QString] = *(extendedAttributes_varr[i]);
    }
    self->setExtendedAttributes(extendedAttributes_QMap);
}

libqt_map /* of libqt_string to QVariant* */ QGeoRoute_ExtendedAttributes(const QGeoRoute* self) {
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

void QGeoRoute_SetLegIndex(QGeoRoute* self, int idx) {
    self->setLegIndex(static_cast<int>(idx));
}

int QGeoRoute_LegIndex(const QGeoRoute* self) {
    return self->legIndex();
}

void QGeoRoute_SetOverallRoute(QGeoRoute* self, const QGeoRoute* route) {
    self->setOverallRoute(*route);
}

QGeoRoute* QGeoRoute_OverallRoute(const QGeoRoute* self) {
    return new QGeoRoute(self->overallRoute());
}

void QGeoRoute_Delete(QGeoRoute* self) {
    delete self;
}
