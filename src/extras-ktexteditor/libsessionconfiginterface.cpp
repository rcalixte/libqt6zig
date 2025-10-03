#include <KConfigGroup>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__SessionConfigInterface
#include <sessionconfiginterface.h>
#include "libsessionconfiginterface.h"
#include "libsessionconfiginterface.hxx"

KTextEditor__SessionConfigInterface* KTextEditor__SessionConfigInterface_new() {
    return new VirtualKTextEditorSessionConfigInterface();
}

void KTextEditor__SessionConfigInterface_ReadSessionConfig(KTextEditor__SessionConfigInterface* self, const KConfigGroup* config) {
    auto* vktexteditor__sessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self);
    if (vktexteditor__sessionconfiginterface && vktexteditor__sessionconfiginterface->isVirtualKTextEditorSessionConfigInterface) {
        vktexteditor__sessionconfiginterface->readSessionConfig(*config);
    } else {
        ((VirtualKTextEditorSessionConfigInterface*)self)->readSessionConfig(*config);
    }
}

void KTextEditor__SessionConfigInterface_WriteSessionConfig(KTextEditor__SessionConfigInterface* self, KConfigGroup* config) {
    auto* vktexteditor__sessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self);
    if (vktexteditor__sessionconfiginterface && vktexteditor__sessionconfiginterface->isVirtualKTextEditorSessionConfigInterface) {
        vktexteditor__sessionconfiginterface->writeSessionConfig(*config);
    } else {
        ((VirtualKTextEditorSessionConfigInterface*)self)->writeSessionConfig(*config);
    }
}

// Base class handler implementation
void KTextEditor__SessionConfigInterface_QBaseReadSessionConfig(KTextEditor__SessionConfigInterface* self, const KConfigGroup* config) {
    auto* vktexteditorsessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self);
    if (vktexteditorsessionconfiginterface && vktexteditorsessionconfiginterface->isVirtualKTextEditorSessionConfigInterface) {
        vktexteditorsessionconfiginterface->setKTextEditor__SessionConfigInterface_ReadSessionConfig_IsBase(true);
        vktexteditorsessionconfiginterface->readSessionConfig(*config);
    } else {
        ((VirtualKTextEditorSessionConfigInterface*)self)->readSessionConfig(*config);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__SessionConfigInterface_OnReadSessionConfig(KTextEditor__SessionConfigInterface* self, intptr_t slot) {
    auto* vktexteditorsessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self);
    if (vktexteditorsessionconfiginterface && vktexteditorsessionconfiginterface->isVirtualKTextEditorSessionConfigInterface) {
        vktexteditorsessionconfiginterface->setKTextEditor__SessionConfigInterface_ReadSessionConfig_Callback(reinterpret_cast<VirtualKTextEditorSessionConfigInterface::KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__SessionConfigInterface_QBaseWriteSessionConfig(KTextEditor__SessionConfigInterface* self, KConfigGroup* config) {
    auto* vktexteditorsessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self);
    if (vktexteditorsessionconfiginterface && vktexteditorsessionconfiginterface->isVirtualKTextEditorSessionConfigInterface) {
        vktexteditorsessionconfiginterface->setKTextEditor__SessionConfigInterface_WriteSessionConfig_IsBase(true);
        vktexteditorsessionconfiginterface->writeSessionConfig(*config);
    } else {
        ((VirtualKTextEditorSessionConfigInterface*)self)->writeSessionConfig(*config);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__SessionConfigInterface_OnWriteSessionConfig(KTextEditor__SessionConfigInterface* self, intptr_t slot) {
    auto* vktexteditorsessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self);
    if (vktexteditorsessionconfiginterface && vktexteditorsessionconfiginterface->isVirtualKTextEditorSessionConfigInterface) {
        vktexteditorsessionconfiginterface->setKTextEditor__SessionConfigInterface_WriteSessionConfig_Callback(reinterpret_cast<VirtualKTextEditorSessionConfigInterface::KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback>(slot));
    }
}

void KTextEditor__SessionConfigInterface_Delete(KTextEditor__SessionConfigInterface* self) {
    delete self;
}
