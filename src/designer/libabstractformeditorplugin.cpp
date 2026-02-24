#include <QAction>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormEditorPluginInterface>
#include <abstractformeditorplugin.h>
#include "libabstractformeditorplugin.h"
#include "libabstractformeditorplugin.hxx"

QDesignerFormEditorPluginInterface* QDesignerFormEditorPluginInterface_new() {
    return new VirtualQDesignerFormEditorPluginInterface();
}

bool QDesignerFormEditorPluginInterface_IsInitialized(const QDesignerFormEditorPluginInterface* self) {
    auto* vqdesignerformeditorplugininterface = dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self);
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        return vqdesignerformeditorplugininterface->isInitialized();
    } else {
        return ((VirtualQDesignerFormEditorPluginInterface*)self)->isInitialized();
    }
}

void QDesignerFormEditorPluginInterface_Initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core) {
    auto* vqdesignerformeditorplugininterface = dynamic_cast<VirtualQDesignerFormEditorPluginInterface*>(self);
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->initialize(core);
    } else {
        ((VirtualQDesignerFormEditorPluginInterface*)self)->initialize(core);
    }
}

QAction* QDesignerFormEditorPluginInterface_Action(const QDesignerFormEditorPluginInterface* self) {
    auto* vqdesignerformeditorplugininterface = dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self);
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        return vqdesignerformeditorplugininterface->action();
    } else {
        return ((VirtualQDesignerFormEditorPluginInterface*)self)->action();
    }
}

QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_Core(const QDesignerFormEditorPluginInterface* self) {
    auto* vqdesignerformeditorplugininterface = dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self);
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        return vqdesignerformeditorplugininterface->core();
    } else {
        return ((VirtualQDesignerFormEditorPluginInterface*)self)->core();
    }
}

// Base class handler implementation
bool QDesignerFormEditorPluginInterface_SuperIsInitialized(const QDesignerFormEditorPluginInterface* self) {
    auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self));
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_IsInitialized_IsBase(true);
        return vqdesignerformeditorplugininterface->isInitialized();
    } else {
        return ((VirtualQDesignerFormEditorPluginInterface*)self)->isInitialized();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnIsInitialized(const QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self));
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_IsInitialized_Callback(reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_IsInitialized_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormEditorPluginInterface_SuperInitialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core) {
    auto* vqdesignerformeditorplugininterface = dynamic_cast<VirtualQDesignerFormEditorPluginInterface*>(self);
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_Initialize_IsBase(true);
        vqdesignerformeditorplugininterface->initialize(core);
    } else {
        ((VirtualQDesignerFormEditorPluginInterface*)self)->initialize(core);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnInitialize(QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorplugininterface = dynamic_cast<VirtualQDesignerFormEditorPluginInterface*>(self);
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_Initialize_Callback(reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_Initialize_Callback>(slot));
    }
}

// Base class handler implementation
QAction* QDesignerFormEditorPluginInterface_SuperAction(const QDesignerFormEditorPluginInterface* self) {
    auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self));
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_Action_IsBase(true);
        return vqdesignerformeditorplugininterface->action();
    } else {
        return ((VirtualQDesignerFormEditorPluginInterface*)self)->action();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnAction(const QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self));
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_Action_Callback(reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_Action_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_SuperCore(const QDesignerFormEditorPluginInterface* self) {
    auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self));
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_Core_IsBase(true);
        return vqdesignerformeditorplugininterface->core();
    } else {
        return ((VirtualQDesignerFormEditorPluginInterface*)self)->core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnCore(const QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self));
    if (vqdesignerformeditorplugininterface && vqdesignerformeditorplugininterface->isVirtualQDesignerFormEditorPluginInterface) {
        vqdesignerformeditorplugininterface->setQDesignerFormEditorPluginInterface_Core_Callback(reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_Core_Callback>(slot));
    }
}

void QDesignerFormEditorPluginInterface_Delete(QDesignerFormEditorPluginInterface* self) {
    delete self;
}
