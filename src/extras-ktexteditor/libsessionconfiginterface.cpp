#include <KConfigGroup>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__SessionConfigInterface
#include <sessionconfiginterface.h>
#include "libsessionconfiginterface.h"
#include "libsessionconfiginterface.hxx"

KTextEditor__SessionConfigInterface* KTextEditor__SessionConfigInterface_new() {
    return new VirtualKTextEditorSessionConfigInterface();
}

void KTextEditor__SessionConfigInterface_ReadSessionConfig(KTextEditor__SessionConfigInterface* self, const KConfigGroup* config) {
    self->readSessionConfig(*config);
}

void KTextEditor__SessionConfigInterface_WriteSessionConfig(KTextEditor__SessionConfigInterface* self, KConfigGroup* config) {
    self->writeSessionConfig(*config);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__SessionConfigInterface_OnReadSessionConfig(KTextEditor__SessionConfigInterface* self, intptr_t slot) {
    if (auto* vktexteditorsessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self))
        vktexteditorsessionconfiginterface->ktexteditor__sessionconfiginterface_readsessionconfig_callback = reinterpret_cast<VirtualKTextEditorSessionConfigInterface::KTextEditor__SessionConfigInterface_ReadSessionConfig_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__SessionConfigInterface_OnWriteSessionConfig(KTextEditor__SessionConfigInterface* self, intptr_t slot) {
    if (auto* vktexteditorsessionconfiginterface = dynamic_cast<VirtualKTextEditorSessionConfigInterface*>(self))
        vktexteditorsessionconfiginterface->ktexteditor__sessionconfiginterface_writesessionconfig_callback = reinterpret_cast<VirtualKTextEditorSessionConfigInterface::KTextEditor__SessionConfigInterface_WriteSessionConfig_Callback>(slot);
}

void KTextEditor__SessionConfigInterface_Delete(KTextEditor__SessionConfigInterface* self) {
    delete self;
}
