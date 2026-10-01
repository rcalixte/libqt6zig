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
    return self->isInitialized();
}

void QDesignerFormEditorPluginInterface_Initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core) {
    self->initialize(core);
}

QAction* QDesignerFormEditorPluginInterface_Action(const QDesignerFormEditorPluginInterface* self) {
    return self->action();
}

QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_Core(const QDesignerFormEditorPluginInterface* self) {
    return self->core();
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnIsInitialized(QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self)))
        vqdesignerformeditorplugininterface->qdesignerformeditorplugininterface_isinitialized_callback = reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_IsInitialized_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnInitialize(QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorplugininterface = dynamic_cast<VirtualQDesignerFormEditorPluginInterface*>(self))
        vqdesignerformeditorplugininterface->qdesignerformeditorplugininterface_initialize_callback = reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_Initialize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnAction(QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self)))
        vqdesignerformeditorplugininterface->qdesignerformeditorplugininterface_action_callback = reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_Action_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormEditorPluginInterface_OnCore(QDesignerFormEditorPluginInterface* self, intptr_t slot) {
    if (auto* vqdesignerformeditorplugininterface = const_cast<VirtualQDesignerFormEditorPluginInterface*>(dynamic_cast<const VirtualQDesignerFormEditorPluginInterface*>(self)))
        vqdesignerformeditorplugininterface->qdesignerformeditorplugininterface_core_callback = reinterpret_cast<VirtualQDesignerFormEditorPluginInterface::QDesignerFormEditorPluginInterface_Core_Callback>(slot);
}

void QDesignerFormEditorPluginInterface_Delete(QDesignerFormEditorPluginInterface* self) {
    delete self;
}
