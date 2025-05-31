#include <QBindingStatus>
#include <QBindingStorage>
#include <QUntypedPropertyData>
#include <qbindingstorage.h>
#include "libqbindingstorage.h"
#include "libqbindingstorage.hxx"

QBindingStatus* QBindingStatus_new(const QBindingStatus* other) {
    return new QBindingStatus(*other);
}

QBindingStatus* QBindingStatus_new2(QBindingStatus* other) {
    return new QBindingStatus(std::move(*other));
}

void QBindingStatus_CopyAssign(QBindingStatus* self, QBindingStatus* other) {
    *self = *other;
}

void QBindingStatus_MoveAssign(QBindingStatus* self, QBindingStatus* other) {
    *self = std::move(*other);
}

void QBindingStatus_Delete(QBindingStatus* self) {
    delete self;
}

QBindingStorage* QBindingStorage_new() {
    return new QBindingStorage();
}

bool QBindingStorage_IsEmpty(QBindingStorage* self) {
    return self->isEmpty();
}

bool QBindingStorage_IsValid(const QBindingStorage* self) {
    return self->isValid();
}

void QBindingStorage_RegisterDependency(const QBindingStorage* self, const QUntypedPropertyData* data) {
    self->registerDependency(data);
}

void QBindingStorage_Delete(QBindingStorage* self) {
    delete self;
}
