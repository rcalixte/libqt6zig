#include <QGeoCoordinate>
#include <QGeoPolygon>
#include <QGeoShape>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeopolygon.h>
#include "libqgeopolygon.h"
#include "libqgeopolygon.hxx"

QGeoPolygon* QGeoPolygon_new() {
    return new QGeoPolygon();
}

QGeoPolygon* QGeoPolygon_new2(const libqt_list /* of QGeoCoordinate* */ path) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    return new QGeoPolygon(path_QList);
}

QGeoPolygon* QGeoPolygon_new3(const QGeoPolygon* other) {
    return new QGeoPolygon(*other);
}

QGeoPolygon* QGeoPolygon_new4(const QGeoShape* other) {
    return new QGeoPolygon(*other);
}

void QGeoPolygon_OperatorAssign(QGeoPolygon* self, const QGeoPolygon* other) {
    self->operator=(*other);
}

void QGeoPolygon_SetPerimeter(QGeoPolygon* self, const libqt_list /* of QGeoCoordinate* */ path) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    self->setPerimeter(path_QList);
}

libqt_list /* of QGeoCoordinate* */ QGeoPolygon_Perimeter(const QGeoPolygon* self) {
    const QList<QGeoCoordinate>& _ret = self->perimeter();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoCoordinate** _arr = static_cast<QGeoCoordinate**>(malloc(sizeof(QGeoCoordinate*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoCoordinate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoPolygon_AddHole(QGeoPolygon* self, const QVariant* holePath) {
    self->addHole(*holePath);
}

void QGeoPolygon_AddHole2(QGeoPolygon* self, const libqt_list /* of QGeoCoordinate* */ holePath) {
    QList<QGeoCoordinate> holePath_QList;
    holePath_QList.reserve(holePath.len);
    QGeoCoordinate** holePath_arr = static_cast<QGeoCoordinate**>(holePath.data);
    for (size_t i = 0; i < holePath.len; ++i) {
        holePath_QList.push_back(*(holePath_arr[i]));
    }
    self->addHole(holePath_QList);
}

libqt_list /* of QVariant* */ QGeoPolygon_Hole(const QGeoPolygon* self, ptrdiff_t index) {
    const QList<QVariant> _ret = self->hole((qsizetype)(index));
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGeoCoordinate* */ QGeoPolygon_HolePath(const QGeoPolygon* self, ptrdiff_t index) {
    const QList<QGeoCoordinate> _ret = self->holePath((qsizetype)(index));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoCoordinate** _arr = static_cast<QGeoCoordinate**>(malloc(sizeof(QGeoCoordinate*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoCoordinate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoPolygon_RemoveHole(QGeoPolygon* self, ptrdiff_t index) {
    self->removeHole((qsizetype)(index));
}

ptrdiff_t QGeoPolygon_HolesCount(const QGeoPolygon* self) {
    return static_cast<ptrdiff_t>(self->holesCount());
}

void QGeoPolygon_Translate(QGeoPolygon* self, double degreesLatitude, double degreesLongitude) {
    self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoPolygon* QGeoPolygon_Translated(const QGeoPolygon* self, double degreesLatitude, double degreesLongitude) {
    return new QGeoPolygon(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

double QGeoPolygon_Length(const QGeoPolygon* self) {
    return self->length();
}

ptrdiff_t QGeoPolygon_Size(const QGeoPolygon* self) {
    return static_cast<ptrdiff_t>(self->size());
}

void QGeoPolygon_AddCoordinate(QGeoPolygon* self, const QGeoCoordinate* coordinate) {
    self->addCoordinate(*coordinate);
}

void QGeoPolygon_InsertCoordinate(QGeoPolygon* self, ptrdiff_t index, const QGeoCoordinate* coordinate) {
    self->insertCoordinate((qsizetype)(index), *coordinate);
}

void QGeoPolygon_ReplaceCoordinate(QGeoPolygon* self, ptrdiff_t index, const QGeoCoordinate* coordinate) {
    self->replaceCoordinate((qsizetype)(index), *coordinate);
}

QGeoCoordinate* QGeoPolygon_CoordinateAt(const QGeoPolygon* self, ptrdiff_t index) {
    return new QGeoCoordinate(self->coordinateAt((qsizetype)(index)));
}

bool QGeoPolygon_ContainsCoordinate(const QGeoPolygon* self, const QGeoCoordinate* coordinate) {
    return self->containsCoordinate(*coordinate);
}

void QGeoPolygon_RemoveCoordinate(QGeoPolygon* self, const QGeoCoordinate* coordinate) {
    self->removeCoordinate(*coordinate);
}

void QGeoPolygon_RemoveCoordinate2(QGeoPolygon* self, ptrdiff_t index) {
    self->removeCoordinate((qsizetype)(index));
}

libqt_string QGeoPolygon_ToString(const QGeoPolygon* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QGeoPolygon_Length1(const QGeoPolygon* self, ptrdiff_t indexFrom) {
    return self->length((qsizetype)(indexFrom));
}

double QGeoPolygon_Length2(const QGeoPolygon* self, ptrdiff_t indexFrom, ptrdiff_t indexTo) {
    return self->length((qsizetype)(indexFrom), (qsizetype)(indexTo));
}

void QGeoPolygon_Delete(QGeoPolygon* self) {
    delete self;
}
