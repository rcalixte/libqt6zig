#include <QGeoCoordinate>
#include <QGeoManeuver>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeomaneuver.h>
#include "libqgeomaneuver.h"
#include "libqgeomaneuver.hxx"

QGeoManeuver* QGeoManeuver_new() {
    return new QGeoManeuver();
}

QGeoManeuver* QGeoManeuver_new2(const QGeoManeuver* other) {
    return new QGeoManeuver(*other);
}

void QGeoManeuver_OperatorAssign(QGeoManeuver* self, const QGeoManeuver* other) {
    self->operator=(*other);
}

void QGeoManeuver_Swap(QGeoManeuver* self, QGeoManeuver* other) {
    self->swap(*other);
}

bool QGeoManeuver_IsValid(const QGeoManeuver* self) {
    return self->isValid();
}

void QGeoManeuver_SetPosition(QGeoManeuver* self, const QGeoCoordinate* position) {
    self->setPosition(*position);
}

QGeoCoordinate* QGeoManeuver_Position(const QGeoManeuver* self) {
    return new QGeoCoordinate(self->position());
}

void QGeoManeuver_SetInstructionText(QGeoManeuver* self, const libqt_string instructionText) {
    QString instructionText_QString = QString::fromUtf8(instructionText.data, instructionText.len);
    self->setInstructionText(instructionText_QString);
}

libqt_string QGeoManeuver_InstructionText(const QGeoManeuver* self) {
    QString _ret = self->instructionText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGeoManeuver_SetDirection(QGeoManeuver* self, int direction) {
    self->setDirection(static_cast<QGeoManeuver::InstructionDirection>(direction));
}

int QGeoManeuver_Direction(const QGeoManeuver* self) {
    return static_cast<int>(self->direction());
}

void QGeoManeuver_SetTimeToNextInstruction(QGeoManeuver* self, int secs) {
    self->setTimeToNextInstruction(static_cast<int>(secs));
}

int QGeoManeuver_TimeToNextInstruction(const QGeoManeuver* self) {
    return self->timeToNextInstruction();
}

void QGeoManeuver_SetDistanceToNextInstruction(QGeoManeuver* self, double distance) {
    self->setDistanceToNextInstruction(static_cast<qreal>(distance));
}

double QGeoManeuver_DistanceToNextInstruction(const QGeoManeuver* self) {
    return static_cast<double>(self->distanceToNextInstruction());
}

void QGeoManeuver_SetWaypoint(QGeoManeuver* self, const QGeoCoordinate* coordinate) {
    self->setWaypoint(*coordinate);
}

QGeoCoordinate* QGeoManeuver_Waypoint(const QGeoManeuver* self) {
    return new QGeoCoordinate(self->waypoint());
}

void QGeoManeuver_SetExtendedAttributes(QGeoManeuver* self, const libqt_map /* of libqt_string to QVariant* */ extendedAttributes) {
    QMap<QString, QVariant> extendedAttributes_QMap;
    libqt_string* extendedAttributes_karr = static_cast<libqt_string*>(extendedAttributes.keys);
    QVariant** extendedAttributes_varr = static_cast<QVariant**>(extendedAttributes.values);
    for (size_t i = 0; i < extendedAttributes.len; ++i) {
        QString extendedAttributes_karr_i_QString = QString::fromUtf8(extendedAttributes_karr[i].data, extendedAttributes_karr[i].len);
        extendedAttributes_QMap[extendedAttributes_karr_i_QString] = *(extendedAttributes_varr[i]);
    }
    self->setExtendedAttributes(extendedAttributes_QMap);
}

libqt_map /* of libqt_string to QVariant* */ QGeoManeuver_ExtendedAttributes(const QGeoManeuver* self) {
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

void QGeoManeuver_Delete(QGeoManeuver* self) {
    delete self;
}
