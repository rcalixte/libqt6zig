#include <QDateTime>
#include <QGeoCoordinate>
#include <QGeoRectangle>
#include <QGeoRouteRequest>
#include <QList>
#include <qgeorouterequest.h>
#include "libqgeorouterequest.h"
#include "libqgeorouterequest.hxx"

QGeoRouteRequest* QGeoRouteRequest_new() {
    return new QGeoRouteRequest();
}

QGeoRouteRequest* QGeoRouteRequest_new2(const QGeoCoordinate* origin, const QGeoCoordinate* destination) {
    return new QGeoRouteRequest(*origin, *destination);
}

QGeoRouteRequest* QGeoRouteRequest_new3(const QGeoRouteRequest* other) {
    return new QGeoRouteRequest(*other);
}

QGeoRouteRequest* QGeoRouteRequest_new4(const libqt_list /* of QGeoCoordinate* */ waypoints) {
    QList<QGeoCoordinate> waypoints_QList;
    waypoints_QList.reserve(waypoints.len);
    QGeoCoordinate** waypoints_arr = static_cast<QGeoCoordinate**>(waypoints.data);
    for (size_t i = 0; i < waypoints.len; ++i) {
        waypoints_QList.push_back(*(waypoints_arr[i]));
    }
    return new QGeoRouteRequest(waypoints_QList);
}

void QGeoRouteRequest_OperatorAssign(QGeoRouteRequest* self, const QGeoRouteRequest* other) {
    self->operator=(*other);
}

void QGeoRouteRequest_Swap(QGeoRouteRequest* self, QGeoRouteRequest* other) {
    self->swap(*other);
}

void QGeoRouteRequest_SetWaypoints(QGeoRouteRequest* self, const libqt_list /* of QGeoCoordinate* */ waypoints) {
    QList<QGeoCoordinate> waypoints_QList;
    waypoints_QList.reserve(waypoints.len);
    QGeoCoordinate** waypoints_arr = static_cast<QGeoCoordinate**>(waypoints.data);
    for (size_t i = 0; i < waypoints.len; ++i) {
        waypoints_QList.push_back(*(waypoints_arr[i]));
    }
    self->setWaypoints(waypoints_QList);
}

libqt_list /* of QGeoCoordinate* */ QGeoRouteRequest_Waypoints(const QGeoRouteRequest* self) {
    QList<QGeoCoordinate> _ret = self->waypoints();
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

void QGeoRouteRequest_SetExcludeAreas(QGeoRouteRequest* self, const libqt_list /* of QGeoRectangle* */ areas) {
    QList<QGeoRectangle> areas_QList;
    areas_QList.reserve(areas.len);
    QGeoRectangle** areas_arr = static_cast<QGeoRectangle**>(areas.data);
    for (size_t i = 0; i < areas.len; ++i) {
        areas_QList.push_back(*(areas_arr[i]));
    }
    self->setExcludeAreas(areas_QList);
}

libqt_list /* of QGeoRectangle* */ QGeoRouteRequest_ExcludeAreas(const QGeoRouteRequest* self) {
    QList<QGeoRectangle> _ret = self->excludeAreas();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoRectangle** _arr = static_cast<QGeoRectangle**>(malloc(sizeof(QGeoRectangle*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoRectangle(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRouteRequest_SetNumberAlternativeRoutes(QGeoRouteRequest* self, int alternatives) {
    self->setNumberAlternativeRoutes(static_cast<int>(alternatives));
}

int QGeoRouteRequest_NumberAlternativeRoutes(const QGeoRouteRequest* self) {
    return self->numberAlternativeRoutes();
}

void QGeoRouteRequest_SetTravelModes(QGeoRouteRequest* self, int travelModes) {
    self->setTravelModes(static_cast<QGeoRouteRequest::TravelModes>(travelModes));
}

int QGeoRouteRequest_TravelModes(const QGeoRouteRequest* self) {
    return static_cast<int>(self->travelModes());
}

void QGeoRouteRequest_SetFeatureWeight(QGeoRouteRequest* self, int featureType, int featureWeight) {
    self->setFeatureWeight(static_cast<QGeoRouteRequest::FeatureType>(featureType), static_cast<QGeoRouteRequest::FeatureWeight>(featureWeight));
}

int QGeoRouteRequest_FeatureWeight(const QGeoRouteRequest* self, int featureType) {
    return static_cast<int>(self->featureWeight(static_cast<QGeoRouteRequest::FeatureType>(featureType)));
}

libqt_list /* of int */ QGeoRouteRequest_FeatureTypes(const QGeoRouteRequest* self) {
    QList<QGeoRouteRequest::FeatureType> _ret = self->featureTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRouteRequest_SetRouteOptimization(QGeoRouteRequest* self, int optimization) {
    self->setRouteOptimization(static_cast<QGeoRouteRequest::RouteOptimizations>(optimization));
}

int QGeoRouteRequest_RouteOptimization(const QGeoRouteRequest* self) {
    return static_cast<int>(self->routeOptimization());
}

void QGeoRouteRequest_SetSegmentDetail(QGeoRouteRequest* self, int segmentDetail) {
    self->setSegmentDetail(static_cast<QGeoRouteRequest::SegmentDetail>(segmentDetail));
}

int QGeoRouteRequest_SegmentDetail(const QGeoRouteRequest* self) {
    return static_cast<int>(self->segmentDetail());
}

void QGeoRouteRequest_SetManeuverDetail(QGeoRouteRequest* self, int maneuverDetail) {
    self->setManeuverDetail(static_cast<QGeoRouteRequest::ManeuverDetail>(maneuverDetail));
}

int QGeoRouteRequest_ManeuverDetail(const QGeoRouteRequest* self) {
    return static_cast<int>(self->maneuverDetail());
}

void QGeoRouteRequest_SetDepartureTime(QGeoRouteRequest* self, const QDateTime* departureTime) {
    self->setDepartureTime(*departureTime);
}

QDateTime* QGeoRouteRequest_DepartureTime(const QGeoRouteRequest* self) {
    return new QDateTime(self->departureTime());
}

void QGeoRouteRequest_Delete(QGeoRouteRequest* self) {
    delete self;
}
