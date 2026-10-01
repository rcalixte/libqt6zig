#include <KConfig>
#include <KMessageBoxDontAskAgainInterface>
#include <QString>
#include <kmessageboxdontaskagaininterface.h>
#include "libkmessageboxdontaskagaininterface.h"
#include "libkmessageboxdontaskagaininterface.hxx"

KMessageBoxDontAskAgainInterface* KMessageBoxDontAskAgainInterface_new() {
    return new VirtualKMessageBoxDontAskAgainInterface();
}

bool KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName, int* result) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    return self->shouldBeShownTwoActions(dontShowAgainName_QString, (KMessageBox::ButtonCode&)(*result));
}

bool KMessageBoxDontAskAgainInterface_ShouldBeShownContinue(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    return self->shouldBeShownContinue(dontShowAgainName_QString);
}

void KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName, int result) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    self->saveDontShowAgainTwoActions(dontShowAgainName_QString, static_cast<KMessageBox::ButtonCode>(result));
}

void KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    self->saveDontShowAgainContinue(dontShowAgainName_QString);
}

void KMessageBoxDontAskAgainInterface_EnableAllMessages(KMessageBoxDontAskAgainInterface* self) {
    self->enableAllMessages();
}

void KMessageBoxDontAskAgainInterface_EnableMessage(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    self->enableMessage(dontShowAgainName_QString);
}

void KMessageBoxDontAskAgainInterface_SetConfig(KMessageBoxDontAskAgainInterface* self, KConfig* config) {
    self->setConfig(config);
}

void KMessageBoxDontAskAgainInterface_OperatorAssign(KMessageBoxDontAskAgainInterface* self, const KMessageBoxDontAskAgainInterface* param1) {
    self->operator=(*param1);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnEnableAllMessages(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_enableallmessages_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnEnableMessage(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_enablemessage_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_EnableMessage_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnSetConfig(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    if (auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self))
        vkmessageboxdontaskagaininterface->kmessageboxdontaskagaininterface_setconfig_callback = reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_SetConfig_Callback>(slot);
}

void KMessageBoxDontAskAgainInterface_Delete(KMessageBoxDontAskAgainInterface* self) {
    delete self;
}
