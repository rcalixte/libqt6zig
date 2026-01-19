#include <QGeoCoordinate>
#include <QGeoPath>
#include <QGeoShape>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeopath.h>
#include "libqgeopath.h"
#include "libqgeopath.hxx"

QGeoPath* QGeoPath_new() {
    return new QGeoPath();
}

QGeoPath* QGeoPath_new2(const libqt_list /* of QGeoCoordinate* */ path) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    return new QGeoPath(path_QList);
}

QGeoPath* QGeoPath_new3(const QGeoPath* other) {
    return new QGeoPath(*other);
}

QGeoPath* QGeoPath_new4(const QGeoShape* other) {
    return new QGeoPath(*other);
}

QGeoPath* QGeoPath_new5(const libqt_list /* of QGeoCoordinate* */ path, const double* width) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    return new QGeoPath(path_QList, static_cast<const qreal&>(*width));
}

void QGeoPath_OperatorAssign(QGeoPath* self, const QGeoPath* other) {
    self->operator=(*other);
}

void QGeoPath_SetPath(QGeoPath* self, const libqt_list /* of QGeoCoordinate* */ path) {
    QList<QGeoCoordinate> path_QList;
    path_QList.reserve(path.len);
    QGeoCoordinate** path_arr = static_cast<QGeoCoordinate**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    self->setPath(path_QList);
}

libqt_list /* of QGeoCoordinate* */ QGeoPath_Path(const QGeoPath* self) {
    const QList<QGeoCoordinate>& _ret = self->path();
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

void QGeoPath_ClearPath(QGeoPath* self) {
    self->clearPath();
}

void QGeoPath_SetVariantPath(QGeoPath* self, const libqt_list /* of QVariant* */ path) {
    QList<QVariant> path_QList;
    path_QList.reserve(path.len);
    QVariant** path_arr = static_cast<QVariant**>(path.data);
    for (size_t i = 0; i < path.len; ++i) {
        path_QList.push_back(*(path_arr[i]));
    }
    self->setVariantPath(path_QList);
}

libqt_list /* of QVariant* */ QGeoPath_VariantPath(const QGeoPath* self) {
    QList<QVariant> _ret = self->variantPath();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoPath_SetWidth(QGeoPath* self, const double* width) {
    self->setWidth(static_cast<const qreal&>(*width));
}

double QGeoPath_Width(const QGeoPath* self) {
    return static_cast<double>(self->width());
}

void QGeoPath_Translate(QGeoPath* self, double degreesLatitude, double degreesLongitude) {
    self->translate(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude));
}

QGeoPath* QGeoPath_Translated(const QGeoPath* self, double degreesLatitude, double degreesLongitude) {
    return new QGeoPath(self->translated(static_cast<double>(degreesLatitude), static_cast<double>(degreesLongitude)));
}

double QGeoPath_Length(const QGeoPath* self) {
    return self->length();
}

ptrdiff_t QGeoPath_Size(const QGeoPath* self) {
    return static_cast<ptrdiff_t>(self->size());
}

void QGeoPath_AddCoordinate(QGeoPath* self, const QGeoCoordinate* coordinate) {
    self->addCoordinate(*coordinate);
}

void QGeoPath_InsertCoordinate(QGeoPath* self, ptrdiff_t index, const QGeoCoordinate* coordinate) {
    self->insertCoordinate((qsizetype)(index), *coordinate);
}

void QGeoPath_ReplaceCoordinate(QGeoPath* self, ptrdiff_t index, const QGeoCoordinate* coordinate) {
    self->replaceCoordinate((qsizetype)(index), *coordinate);
}

QGeoCoordinate* QGeoPath_CoordinateAt(const QGeoPath* self, ptrdiff_t index) {
    return new QGeoCoordinate(self->coordinateAt((qsizetype)(index)));
}

bool QGeoPath_ContainsCoordinate(const QGeoPath* self, const QGeoCoordinate* coordinate) {
    return self->containsCoordinate(*coordinate);
}

void QGeoPath_RemoveCoordinate(QGeoPath* self, const QGeoCoordinate* coordinate) {
    self->removeCoordinate(*coordinate);
}

void QGeoPath_RemoveCoordinate2(QGeoPath* self, ptrdiff_t index) {
    self->removeCoordinate((qsizetype)(index));
}

libqt_string QGeoPath_ToString(const QGeoPath* self) {
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

double QGeoPath_Length1(const QGeoPath* self, ptrdiff_t indexFrom) {
    return self->length((qsizetype)(indexFrom));
}

double QGeoPath_Length2(const QGeoPath* self, ptrdiff_t indexFrom, ptrdiff_t indexTo) {
    return self->length((qsizetype)(indexFrom), (qsizetype)(indexTo));
}

void QGeoPath_Delete(QGeoPath* self) {
    delete self;
}
