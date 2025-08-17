#include <QByteArray>
#include <QCameraDevice>
#include <QCameraFormat>
#include <QList>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameradevice.h>
#include "libqcameradevice.h"
#include "libqcameradevice.hxx"

QCameraFormat* QCameraFormat_new() {
    return new QCameraFormat();
}

QCameraFormat* QCameraFormat_new2(const QCameraFormat* other) {
    return new QCameraFormat(*other);
}

void QCameraFormat_OperatorAssign(QCameraFormat* self, const QCameraFormat* other) {
    self->operator=(*other);
}

int QCameraFormat_PixelFormat(const QCameraFormat* self) {
    return static_cast<int>(self->pixelFormat());
}

QSize* QCameraFormat_Resolution(const QCameraFormat* self) {
    return new QSize(self->resolution());
}

float QCameraFormat_MinFrameRate(const QCameraFormat* self) {
    return self->minFrameRate();
}

float QCameraFormat_MaxFrameRate(const QCameraFormat* self) {
    return self->maxFrameRate();
}

bool QCameraFormat_IsNull(const QCameraFormat* self) {
    return self->isNull();
}

bool QCameraFormat_OperatorEqual(const QCameraFormat* self, const QCameraFormat* other) {
    return (*self == *other);
}

bool QCameraFormat_OperatorNotEqual(const QCameraFormat* self, const QCameraFormat* other) {
    return (*self != *other);
}

void QCameraFormat_Delete(QCameraFormat* self) {
    delete self;
}

QCameraDevice* QCameraDevice_new() {
    return new QCameraDevice();
}

QCameraDevice* QCameraDevice_new2(const QCameraDevice* other) {
    return new QCameraDevice(*other);
}

void QCameraDevice_OperatorAssign(QCameraDevice* self, const QCameraDevice* other) {
    self->operator=(*other);
}

bool QCameraDevice_OperatorEqual(const QCameraDevice* self, const QCameraDevice* other) {
    return (*self == *other);
}

bool QCameraDevice_OperatorNotEqual(const QCameraDevice* self, const QCameraDevice* other) {
    return (*self != *other);
}

bool QCameraDevice_IsNull(const QCameraDevice* self) {
    return self->isNull();
}

libqt_string QCameraDevice_Id(const QCameraDevice* self) {
    QByteArray _qb = self->id();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCameraDevice_Description(const QCameraDevice* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QCameraDevice_IsDefault(const QCameraDevice* self) {
    return self->isDefault();
}

int QCameraDevice_Position(const QCameraDevice* self) {
    return static_cast<int>(self->position());
}

libqt_list /* of QSize* */ QCameraDevice_PhotoResolutions(const QCameraDevice* self) {
    QList<QSize> _ret = self->photoResolutions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QCameraFormat* */ QCameraDevice_VideoFormats(const QCameraDevice* self) {
    QList<QCameraFormat> _ret = self->videoFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCameraFormat** _arr = static_cast<QCameraFormat**>(malloc(sizeof(QCameraFormat*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QCameraFormat(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QCameraDevice_CorrectionAngle(const QCameraDevice* self) {
    return static_cast<int>(self->correctionAngle());
}

void QCameraDevice_Delete(QCameraDevice* self) {
    delete self;
}
