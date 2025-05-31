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
