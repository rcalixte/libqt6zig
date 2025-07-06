#include <QTypeRevision>
#include <qtyperevision.h>
#include "libqtyperevision.h"
#include "libqtyperevision.hxx"

QTypeRevision* QTypeRevision_new(const QTypeRevision* other) {
    return new QTypeRevision(*other);
}

QTypeRevision* QTypeRevision_new2(QTypeRevision* other) {
    return new QTypeRevision(std::move(*other));
}

QTypeRevision* QTypeRevision_new3() {
    return new QTypeRevision();
}

QTypeRevision* QTypeRevision_new4(const QTypeRevision* param1) {
    return new QTypeRevision(*param1);
}

void QTypeRevision_CopyAssign(QTypeRevision* self, QTypeRevision* other) {
    *self = *other;
}

void QTypeRevision_MoveAssign(QTypeRevision* self, QTypeRevision* other) {
    *self = std::move(*other);
}

QTypeRevision* QTypeRevision_Zero() {
    return new QTypeRevision(QTypeRevision::zero());
}

bool QTypeRevision_HasMajorVersion(const QTypeRevision* self) {
    return self->hasMajorVersion();
}

unsigned char QTypeRevision_MajorVersion(const QTypeRevision* self) {
    return static_cast<unsigned char>(self->majorVersion());
}

bool QTypeRevision_HasMinorVersion(const QTypeRevision* self) {
    return self->hasMinorVersion();
}

unsigned char QTypeRevision_MinorVersion(const QTypeRevision* self) {
    return static_cast<unsigned char>(self->minorVersion());
}

bool QTypeRevision_IsValid(const QTypeRevision* self) {
    return self->isValid();
}

void QTypeRevision_Delete(QTypeRevision* self) {
    delete self;
}
