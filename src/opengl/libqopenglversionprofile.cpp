#include <QOpenGLVersionProfile>
#include <QPair>
#include <QSurfaceFormat>
#include <qopenglversionprofile.h>
#include "libqopenglversionprofile.h"
#include "libqopenglversionprofile.hxx"

QOpenGLVersionProfile* QOpenGLVersionProfile_new() {
    return new QOpenGLVersionProfile();
}

QOpenGLVersionProfile* QOpenGLVersionProfile_new2(const QSurfaceFormat* format) {
    return new QOpenGLVersionProfile(*format);
}

QOpenGLVersionProfile* QOpenGLVersionProfile_new3(const QOpenGLVersionProfile* other) {
    return new QOpenGLVersionProfile(*other);
}

void QOpenGLVersionProfile_OperatorAssign(QOpenGLVersionProfile* self, const QOpenGLVersionProfile* rhs) {
    self->operator=(*rhs);
}

libqt_pair /* tuple of int and int */ QOpenGLVersionProfile_Version(const QOpenGLVersionProfile* self) {
    QPair<int, int> _ret = self->version();
    // Convert QPair<> from C++ memory to manually-managed C memory
    int* _first = static_cast<int*>(malloc(sizeof(int)));
    int* _second = static_cast<int*>(malloc(sizeof(int)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

void QOpenGLVersionProfile_SetVersion(QOpenGLVersionProfile* self, int majorVersion, int minorVersion) {
    self->setVersion(static_cast<int>(majorVersion), static_cast<int>(minorVersion));
}

int QOpenGLVersionProfile_Profile(const QOpenGLVersionProfile* self) {
    return static_cast<int>(self->profile());
}

void QOpenGLVersionProfile_SetProfile(QOpenGLVersionProfile* self, int profile) {
    self->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

bool QOpenGLVersionProfile_HasProfiles(const QOpenGLVersionProfile* self) {
    return self->hasProfiles();
}

bool QOpenGLVersionProfile_IsLegacyVersion(const QOpenGLVersionProfile* self) {
    return self->isLegacyVersion();
}

bool QOpenGLVersionProfile_IsValid(const QOpenGLVersionProfile* self) {
    return self->isValid();
}

void QOpenGLVersionProfile_Delete(QOpenGLVersionProfile* self) {
    delete self;
}
