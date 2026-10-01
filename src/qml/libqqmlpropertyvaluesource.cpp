#include <QQmlProperty>
#include <QQmlPropertyValueSource>
#include <qqmlpropertyvaluesource.h>
#include "libqqmlpropertyvaluesource.h"
#include "libqqmlpropertyvaluesource.hxx"

QQmlPropertyValueSource* QQmlPropertyValueSource_new() {
    return new VirtualQQmlPropertyValueSource();
}

void QQmlPropertyValueSource_SetTarget(QQmlPropertyValueSource* self, const QQmlProperty* target) {
    self->setTarget(*target);
}

void QQmlPropertyValueSource_OperatorAssign(QQmlPropertyValueSource* self, const QQmlPropertyValueSource* param1) {
    self->operator=(*param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyValueSource_OnSetTarget(QQmlPropertyValueSource* self, intptr_t slot) {
    if (auto* vqqmlpropertyvaluesource = dynamic_cast<VirtualQQmlPropertyValueSource*>(self))
        vqqmlpropertyvaluesource->qqmlpropertyvaluesource_settarget_callback = reinterpret_cast<VirtualQQmlPropertyValueSource::QQmlPropertyValueSource_SetTarget_Callback>(slot);
}

void QQmlPropertyValueSource_Delete(QQmlPropertyValueSource* self) {
    delete self;
}
