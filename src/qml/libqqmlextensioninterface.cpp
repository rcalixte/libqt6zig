#include <QQmlEngine>
#include <QQmlEngineExtensionInterface>
#include <QQmlExtensionInterface>
#include <QQmlTypesExtensionInterface>
#include <qqmlextensioninterface.h>
#include "libqqmlextensioninterface.h"
#include "libqqmlextensioninterface.hxx"

QQmlTypesExtensionInterface* QQmlTypesExtensionInterface_new(const QQmlTypesExtensionInterface* param1) {
    return new VirtualQQmlTypesExtensionInterface(*param1);
}

void QQmlTypesExtensionInterface_RegisterTypes(QQmlTypesExtensionInterface* self, const char* uri) {
    self->registerTypes(uri);
}

void QQmlTypesExtensionInterface_OperatorAssign(QQmlTypesExtensionInterface* self, const QQmlTypesExtensionInterface* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
void QQmlTypesExtensionInterface_SuperRegisterTypes(QQmlTypesExtensionInterface* self, const char* uri) {
    auto* vqqmltypesextensioninterface = dynamic_cast<VirtualQQmlTypesExtensionInterface*>(self);
    if (vqqmltypesextensioninterface && vqqmltypesextensioninterface->isVirtualQQmlTypesExtensionInterface) {
        vqqmltypesextensioninterface->setQQmlTypesExtensionInterface_RegisterTypes_IsBase(true);
        vqqmltypesextensioninterface->registerTypes(uri);
    } else {
        ((VirtualQQmlTypesExtensionInterface*)self)->registerTypes(uri);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlTypesExtensionInterface_OnRegisterTypes(QQmlTypesExtensionInterface* self, intptr_t slot) {
    auto* vqqmltypesextensioninterface = dynamic_cast<VirtualQQmlTypesExtensionInterface*>(self);
    if (vqqmltypesextensioninterface && vqqmltypesextensioninterface->isVirtualQQmlTypesExtensionInterface)
        vqqmltypesextensioninterface->setQQmlTypesExtensionInterface_RegisterTypes_Callback(reinterpret_cast<VirtualQQmlTypesExtensionInterface::QQmlTypesExtensionInterface_RegisterTypes_Callback>(slot));
}

void QQmlTypesExtensionInterface_Delete(QQmlTypesExtensionInterface* self) {
    delete self;
}

QQmlExtensionInterface* QQmlExtensionInterface_new(const QQmlExtensionInterface* param1) {
    return new VirtualQQmlExtensionInterface(*param1);
}

void QQmlExtensionInterface_InitializeEngine(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri) {
    self->initializeEngine(engine, uri);
}

void QQmlExtensionInterface_OperatorAssign(QQmlExtensionInterface* self, const QQmlExtensionInterface* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
void QQmlExtensionInterface_SuperInitializeEngine(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri) {
    auto* vqqmlextensioninterface = dynamic_cast<VirtualQQmlExtensionInterface*>(self);
    if (vqqmlextensioninterface && vqqmlextensioninterface->isVirtualQQmlExtensionInterface) {
        vqqmlextensioninterface->setQQmlExtensionInterface_InitializeEngine_IsBase(true);
        vqqmlextensioninterface->initializeEngine(engine, uri);
    } else {
        ((VirtualQQmlExtensionInterface*)self)->initializeEngine(engine, uri);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionInterface_OnInitializeEngine(QQmlExtensionInterface* self, intptr_t slot) {
    auto* vqqmlextensioninterface = dynamic_cast<VirtualQQmlExtensionInterface*>(self);
    if (vqqmlextensioninterface && vqqmlextensioninterface->isVirtualQQmlExtensionInterface)
        vqqmlextensioninterface->setQQmlExtensionInterface_InitializeEngine_Callback(reinterpret_cast<VirtualQQmlExtensionInterface::QQmlExtensionInterface_InitializeEngine_Callback>(slot));
}

// Derived class handler implementation
void QQmlExtensionInterface_RegisterTypes(QQmlExtensionInterface* self, const char* uri) {
    auto* vqqmlextensioninterface = dynamic_cast<VirtualQQmlExtensionInterface*>(self);
    if (vqqmlextensioninterface && vqqmlextensioninterface->isVirtualQQmlExtensionInterface) {
        vqqmlextensioninterface->registerTypes(uri);
    } else {
        ((VirtualQQmlExtensionInterface*)self)->registerTypes(uri);
    }
}

// Base class handler implementation
void QQmlExtensionInterface_SuperRegisterTypes(QQmlExtensionInterface* self, const char* uri) {
    auto* vqqmlextensioninterface = dynamic_cast<VirtualQQmlExtensionInterface*>(self);
    if (vqqmlextensioninterface && vqqmlextensioninterface->isVirtualQQmlExtensionInterface) {
        vqqmlextensioninterface->setQQmlExtensionInterface_RegisterTypes_IsBase(true);
        vqqmlextensioninterface->registerTypes(uri);
    } else {
        ((VirtualQQmlExtensionInterface*)self)->registerTypes(uri);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExtensionInterface_OnRegisterTypes(QQmlExtensionInterface* self, intptr_t slot) {
    auto* vqqmlextensioninterface = dynamic_cast<VirtualQQmlExtensionInterface*>(self);
    if (vqqmlextensioninterface && vqqmlextensioninterface->isVirtualQQmlExtensionInterface)
        vqqmlextensioninterface->setQQmlExtensionInterface_RegisterTypes_Callback(reinterpret_cast<VirtualQQmlExtensionInterface::QQmlExtensionInterface_RegisterTypes_Callback>(slot));
}

void QQmlExtensionInterface_Delete(QQmlExtensionInterface* self) {
    delete self;
}

void QQmlEngineExtensionInterface_InitializeEngine(QQmlEngineExtensionInterface* self, QQmlEngine* engine, const char* uri) {
    self->initializeEngine(engine, uri);
}

void QQmlEngineExtensionInterface_OperatorAssign(QQmlEngineExtensionInterface* self, const QQmlEngineExtensionInterface* param1) {
    self->operator=(*param1);
}

void QQmlEngineExtensionInterface_Delete(QQmlEngineExtensionInterface* self) {
    delete self;
}
