#include <QGeoCoordinate>
#include <QGeoManeuver>
#include <QGeoRouteSegment>
#include <QList>
#include <qgeoroutesegment.h>
#include "libqgeoroutesegment.h"
#include "libqgeoroutesegment.hxx"

QGeoRouteSegment* QGeoRouteSegment_new() {
    return new QGeoRouteSegment();
}

QGeoRouteSegment* QGeoRouteSegment_new2(const QGeoRouteSegment* other) {
    return new QGeoRouteSegment(*other);
}

void QGeoRouteSegment_OperatorAssign(QGeoRouteSegment* self, const QGeoRouteSegment* other) {
    self->operator=(*other);
}

void QGeoRouteSegment_Swap(QGeoRouteSegment* self, QGeoRouteSegment* other) {
    self->swap(*other);
}

bool QGeoRouteSegment_IsValid(const QGeoRouteSegment* self) {
    return self->isValid();
}

bool QGeoRouteSegment_IsLegLastSegment(const QGeoRouteSegment* self) {
    return self->isLegLastSegment();
}

void QGeoRouteSegment_SetNextRouteSegment(QGeoRouteSegment* self, const QGeoRouteSegment* routeSegment) {
    self->setNextRouteSegment(*routeSegment);
}

QGeoRouteSegment* QGeoRouteSegment_NextRouteSegment(const QGeoRouteSegment* self) {
    return new QGeoRouteSegment(self->nextRouteSegment());
}

void QGeoRouteSegment_SetTravelTime(QGeoRouteSegment* self, int secs) {
    self->setTravelTime(static_cast<int>(secs));
}

int QGeoRouteSegment_TravelTime(const QGeoRouteSegment* self) {
    return self->travelTime();
}

void QGeoRouteSegment_SetDistance(QGeoRouteSegment* self, double distance) {
    self->setDistance(static_cast<qreal>(distance));
}

double QGeoRouteSegment_Distance(const QGeoRouteSegment* self) {
    return static_cast<double>(self->distance());
}

void QGeoRouteSegment_SetPath(QGeoRouteSegment* self, const libqt_list /* of QGeoCoordinate* */ path) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    self->setPath(path_QList);
}

libqt_list /* of QGeoCoordinate* */ QGeoRouteSegment_Path(const QGeoRouteSegment* self) {
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

void QGeoRouteSegment_SetManeuver(QGeoRouteSegment* self, const QGeoManeuver* maneuver) {
    self->setManeuver(*maneuver);
}

QGeoManeuver* QGeoRouteSegment_Maneuver(const QGeoRouteSegment* self) {
    return new QGeoManeuver(self->maneuver());
}

void QGeoRouteSegment_Delete(QGeoRouteSegment* self) {
    delete self;
}
