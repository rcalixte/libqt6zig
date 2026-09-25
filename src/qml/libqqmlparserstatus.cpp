#include <QQmlParserStatus>
#include <qqmlparserstatus.h>
#include "libqqmlparserstatus.h"
#include "libqqmlparserstatus.hxx"

QQmlParserStatus* QQmlParserStatus_new() {
    return new VirtualQQmlParserStatus();
}

void QQmlParserStatus_ClassBegin(QQmlParserStatus* self) {
    self->classBegin();
}

void QQmlParserStatus_ComponentComplete(QQmlParserStatus* self) {
    self->componentComplete();
}

void QQmlParserStatus_OperatorAssign(QQmlParserStatus* self, const QQmlParserStatus* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
void QQmlParserStatus_SuperClassBegin(QQmlParserStatus* self) {
    auto* vqqmlparserstatus = dynamic_cast<VirtualQQmlParserStatus*>(self);
    if (vqqmlparserstatus && vqqmlparserstatus->isVirtualQQmlParserStatus) {
        vqqmlparserstatus->setQQmlParserStatus_ClassBegin_IsBase(true);
        vqqmlparserstatus->classBegin();
    } else {
        ((VirtualQQmlParserStatus*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlParserStatus_OnClassBegin(QQmlParserStatus* self, intptr_t slot) {
    auto* vqqmlparserstatus = dynamic_cast<VirtualQQmlParserStatus*>(self);
    if (vqqmlparserstatus && vqqmlparserstatus->isVirtualQQmlParserStatus)
        vqqmlparserstatus->setQQmlParserStatus_ClassBegin_Callback(reinterpret_cast<VirtualQQmlParserStatus::QQmlParserStatus_ClassBegin_Callback>(slot));
}

// Base class handler implementation
void QQmlParserStatus_SuperComponentComplete(QQmlParserStatus* self) {
    auto* vqqmlparserstatus = dynamic_cast<VirtualQQmlParserStatus*>(self);
    if (vqqmlparserstatus && vqqmlparserstatus->isVirtualQQmlParserStatus) {
        vqqmlparserstatus->setQQmlParserStatus_ComponentComplete_IsBase(true);
        vqqmlparserstatus->componentComplete();
    } else {
        ((VirtualQQmlParserStatus*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlParserStatus_OnComponentComplete(QQmlParserStatus* self, intptr_t slot) {
    auto* vqqmlparserstatus = dynamic_cast<VirtualQQmlParserStatus*>(self);
    if (vqqmlparserstatus && vqqmlparserstatus->isVirtualQQmlParserStatus)
        vqqmlparserstatus->setQQmlParserStatus_ComponentComplete_Callback(reinterpret_cast<VirtualQQmlParserStatus::QQmlParserStatus_ComponentComplete_Callback>(slot));
}

void QQmlParserStatus_Delete(QQmlParserStatus* self) {
    delete self;
}
