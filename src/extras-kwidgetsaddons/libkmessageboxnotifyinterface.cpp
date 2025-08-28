#include <KMessageBoxNotifyInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kmessageboxnotifyinterface.h>
#include "libkmessageboxnotifyinterface.h"
#include "libkmessageboxnotifyinterface.hxx"

KMessageBoxNotifyInterface* KMessageBoxNotifyInterface_new() {
    return new VirtualKMessageBoxNotifyInterface();
}

void KMessageBoxNotifyInterface_SendNotification(KMessageBoxNotifyInterface* self, int notificationType, const libqt_string message, QWidget* parent) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkmessageboxnotifyinterface = dynamic_cast<VirtualKMessageBoxNotifyInterface*>(self);
    if (vkmessageboxnotifyinterface && vkmessageboxnotifyinterface->isVirtualKMessageBoxNotifyInterface) {
        vkmessageboxnotifyinterface->sendNotification(static_cast<QMessageBox::Icon>(notificationType), message_QString, parent);
    } else {
        ((VirtualKMessageBoxNotifyInterface*)self)->sendNotification(static_cast<QMessageBox::Icon>(notificationType), message_QString, parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageBoxNotifyInterface_OnSendNotification(KMessageBoxNotifyInterface* self, intptr_t slot) {
    auto* vkmessageboxnotifyinterface = dynamic_cast<VirtualKMessageBoxNotifyInterface*>(self);
    if (vkmessageboxnotifyinterface && vkmessageboxnotifyinterface->isVirtualKMessageBoxNotifyInterface) {
        vkmessageboxnotifyinterface->setKMessageBoxNotifyInterface_SendNotification_Callback(reinterpret_cast<VirtualKMessageBoxNotifyInterface::KMessageBoxNotifyInterface_SendNotification_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KMessageBoxNotifyInterface_QBaseSendNotification(KMessageBoxNotifyInterface* self, int notificationType, const libqt_string message, QWidget* parent) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkmessageboxnotifyinterface = dynamic_cast<VirtualKMessageBoxNotifyInterface*>(self);
    if (vkmessageboxnotifyinterface && vkmessageboxnotifyinterface->isVirtualKMessageBoxNotifyInterface) {
        vkmessageboxnotifyinterface->setKMessageBoxNotifyInterface_SendNotification_IsBase(true);
        vkmessageboxnotifyinterface->sendNotification(static_cast<QMessageBox::Icon>(notificationType), message_QString, parent);
    } else {
        ((VirtualKMessageBoxNotifyInterface*)self)->sendNotification(static_cast<QMessageBox::Icon>(notificationType), message_QString, parent);
    }
}

void KMessageBoxNotifyInterface_OperatorAssign(KMessageBoxNotifyInterface* self, const KMessageBoxNotifyInterface* param1) {
    self->operator=(*param1);
}

void KMessageBoxNotifyInterface_Delete(KMessageBoxNotifyInterface* self) {
    delete self;
}
