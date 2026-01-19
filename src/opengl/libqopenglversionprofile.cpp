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

pair_int_int /* tuple of int and int */ QOpenGLVersionProfile_Version(const QOpenGLVersionProfile* self) {
    QPair<int, int> _ret = self->version();
    // Convert QPair<> from C++ memory to manually-managed C memory
    pair_int_int /* tuple of int and int */ _out;
    _out.first = _ret.first;
    _out.second = _ret.second;
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
