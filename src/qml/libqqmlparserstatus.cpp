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

// Auxiliary method to allow providing re-implementation
void QQmlParserStatus_OnClassBegin(QQmlParserStatus* self, intptr_t slot) {
    if (auto* vqqmlparserstatus = dynamic_cast<VirtualQQmlParserStatus*>(self))
        vqqmlparserstatus->qqmlparserstatus_classbegin_callback = reinterpret_cast<VirtualQQmlParserStatus::QQmlParserStatus_ClassBegin_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQmlParserStatus_OnComponentComplete(QQmlParserStatus* self, intptr_t slot) {
    if (auto* vqqmlparserstatus = dynamic_cast<VirtualQQmlParserStatus*>(self))
        vqqmlparserstatus->qqmlparserstatus_componentcomplete_callback = reinterpret_cast<VirtualQQmlParserStatus::QQmlParserStatus_ComponentComplete_Callback>(slot);
}

void QQmlParserStatus_Delete(QQmlParserStatus* self) {
    delete self;
}
