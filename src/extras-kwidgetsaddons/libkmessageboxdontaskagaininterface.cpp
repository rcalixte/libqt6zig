#include <KConfig>
#include <KMessageBoxDontAskAgainInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kmessageboxdontaskagaininterface.h>
#include "libkmessageboxdontaskagaininterface.h"
#include "libkmessageboxdontaskagaininterface.hxx"

KMessageBoxDontAskAgainInterface* KMessageBoxDontAskAgainInterface_new() {
    return new VirtualKMessageBoxDontAskAgainInterface();
}

void KMessageBoxDontAskAgainInterface_OperatorAssign(KMessageBoxDontAskAgainInterface* self, const KMessageBoxDontAskAgainInterface* param1) {
    self->operator=(*param1);
}

// Derived class handler implementation
bool KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName, int* result) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        return vkmessageboxdontaskagaininterface->shouldBeShownTwoActions(dontShowAgainName_QString, (KMessageBox::ButtonCode&)(*result));
    } else {
        return ((VirtualKMessageBoxDontAskAgainInterface*)self)->shouldBeShownTwoActions(dontShowAgainName_QString, (KMessageBox::ButtonCode&)(*result));
    }
}

// Base class handler implementation
bool KMessageBoxDontAskAgainInterface_QBaseShouldBeShownTwoActions(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName, int* result) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_IsBase(true);
        return vkmessageboxdontaskagaininterface->shouldBeShownTwoActions(dontShowAgainName_QString, (KMessageBox::ButtonCode&)(*result));
    } else {
        return ((VirtualKMessageBoxDontAskAgainInterface*)self)->shouldBeShownTwoActions(dontShowAgainName_QString, (KMessageBox::ButtonCode&)(*result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnShouldBeShownTwoActions(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageBoxDontAskAgainInterface_ShouldBeShownContinue(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        return vkmessageboxdontaskagaininterface->shouldBeShownContinue(dontShowAgainName_QString);
    } else {
        return ((VirtualKMessageBoxDontAskAgainInterface*)self)->shouldBeShownContinue(dontShowAgainName_QString);
    }
}

// Base class handler implementation
bool KMessageBoxDontAskAgainInterface_QBaseShouldBeShownContinue(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_ShouldBeShownContinue_IsBase(true);
        return vkmessageboxdontaskagaininterface->shouldBeShownContinue(dontShowAgainName_QString);
    } else {
        return ((VirtualKMessageBoxDontAskAgainInterface*)self)->shouldBeShownContinue(dontShowAgainName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnShouldBeShownContinue(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName, int result) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->saveDontShowAgainTwoActions(dontShowAgainName_QString, static_cast<KMessageBox::ButtonCode>(result));
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->saveDontShowAgainTwoActions(dontShowAgainName_QString, static_cast<KMessageBox::ButtonCode>(result));
    }
}

// Base class handler implementation
void KMessageBoxDontAskAgainInterface_QBaseSaveDontShowAgainTwoActions(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName, int result) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_IsBase(true);
        vkmessageboxdontaskagaininterface->saveDontShowAgainTwoActions(dontShowAgainName_QString, static_cast<KMessageBox::ButtonCode>(result));
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->saveDontShowAgainTwoActions(dontShowAgainName_QString, static_cast<KMessageBox::ButtonCode>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainTwoActions(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->saveDontShowAgainContinue(dontShowAgainName_QString);
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->saveDontShowAgainContinue(dontShowAgainName_QString);
    }
}

// Base class handler implementation
void KMessageBoxDontAskAgainInterface_QBaseSaveDontShowAgainContinue(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_IsBase(true);
        vkmessageboxdontaskagaininterface->saveDontShowAgainContinue(dontShowAgainName_QString);
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->saveDontShowAgainContinue(dontShowAgainName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnSaveDontShowAgainContinue(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageBoxDontAskAgainInterface_EnableAllMessages(KMessageBoxDontAskAgainInterface* self) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->enableAllMessages();
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->enableAllMessages();
    }
}

// Base class handler implementation
void KMessageBoxDontAskAgainInterface_QBaseEnableAllMessages(KMessageBoxDontAskAgainInterface* self) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_EnableAllMessages_IsBase(true);
        vkmessageboxdontaskagaininterface->enableAllMessages();
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->enableAllMessages();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnEnableAllMessages(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_EnableAllMessages_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageBoxDontAskAgainInterface_EnableMessage(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->enableMessage(dontShowAgainName_QString);
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->enableMessage(dontShowAgainName_QString);
    }
}

// Base class handler implementation
void KMessageBoxDontAskAgainInterface_QBaseEnableMessage(KMessageBoxDontAskAgainInterface* self, const libqt_string dontShowAgainName) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    QString dontShowAgainName_QString = QString::fromUtf8(dontShowAgainName.data, dontShowAgainName.len);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_EnableMessage_IsBase(true);
        vkmessageboxdontaskagaininterface->enableMessage(dontShowAgainName_QString);
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->enableMessage(dontShowAgainName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnEnableMessage(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_EnableMessage_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_EnableMessage_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageBoxDontAskAgainInterface_SetConfig(KMessageBoxDontAskAgainInterface* self, KConfig* config) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setConfig(config);
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->setConfig(config);
    }
}

// Base class handler implementation
void KMessageBoxDontAskAgainInterface_QBaseSetConfig(KMessageBoxDontAskAgainInterface* self, KConfig* config) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_SetConfig_IsBase(true);
        vkmessageboxdontaskagaininterface->setConfig(config);
    } else {
        ((VirtualKMessageBoxDontAskAgainInterface*)self)->setConfig(config);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxDontAskAgainInterface_OnSetConfig(KMessageBoxDontAskAgainInterface* self, intptr_t slot) {
    auto* vkmessageboxdontaskagaininterface = dynamic_cast<VirtualKMessageBoxDontAskAgainInterface*>(self);
    if (vkmessageboxdontaskagaininterface && vkmessageboxdontaskagaininterface->isVirtualKMessageBoxDontAskAgainInterface) {
        vkmessageboxdontaskagaininterface->setKMessageBoxDontAskAgainInterface_SetConfig_Callback(reinterpret_cast<VirtualKMessageBoxDontAskAgainInterface::KMessageBoxDontAskAgainInterface_SetConfig_Callback>(slot));
    }
}

void KMessageBoxDontAskAgainInterface_Delete(KMessageBoxDontAskAgainInterface* self) {
    delete self;
}
