#include <QPropertyProxyBindingData>
#include <QUntypedPropertyData>
#include <qpropertyprivate.h>
#include "libqpropertyprivate.h"
#include "libqpropertyprivate.hxx"

QUntypedPropertyData* QUntypedPropertyData_new(const QUntypedPropertyData* other) {
    return new QUntypedPropertyData(*other);
}

QUntypedPropertyData* QUntypedPropertyData_new2(QUntypedPropertyData* other) {
    return new QUntypedPropertyData(std::move(*other));
}

void QUntypedPropertyData_CopyAssign(QUntypedPropertyData* self, QUntypedPropertyData* other) {
    *self = *other;
}

void QUntypedPropertyData_MoveAssign(QUntypedPropertyData* self, QUntypedPropertyData* other) {
    *self = std::move(*other);
}

void QUntypedPropertyData_Delete(QUntypedPropertyData* self) {
    delete self;
}

uintptr_t QPropertyProxyBindingData_DPtr(const QPropertyProxyBindingData* self) {
    return static_cast<uintptr_t>(self->d_ptr);
}

void QPropertyProxyBindingData_SetDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr) {
    self->d_ptr = static_cast<quintptr>(d_ptr);
}

QUntypedPropertyData* QPropertyProxyBindingData_PropertyData(const QPropertyProxyBindingData* self) {
    return self->propertyData;
}

void QPropertyProxyBindingData_SetPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData) {
    self->propertyData = propertyData;
}

void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self) {
    delete self;
}
