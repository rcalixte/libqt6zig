#include <KMessageBoxNotifyInterface>
#include <QString>
#include <QWidget>
#include <kmessageboxnotifyinterface.h>
#include "libkmessageboxnotifyinterface.h"
#include "libkmessageboxnotifyinterface.hxx"

KMessageBoxNotifyInterface* KMessageBoxNotifyInterface_new() {
    return new VirtualKMessageBoxNotifyInterface();
}

void KMessageBoxNotifyInterface_SendNotification(KMessageBoxNotifyInterface* self, int notificationType, const libqt_string message, QWidget* parent) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->sendNotification(static_cast<QMessageBox::Icon>(notificationType), message_QString, parent);
}

void KMessageBoxNotifyInterface_OperatorAssign(KMessageBoxNotifyInterface* self, const KMessageBoxNotifyInterface* param1) {
    self->operator=(*param1);
}

// Auxiliary method to allow providing re-implementation
void KMessageBoxNotifyInterface_OnSendNotification(KMessageBoxNotifyInterface* self, intptr_t slot) {
    if (auto* vkmessageboxnotifyinterface = dynamic_cast<VirtualKMessageBoxNotifyInterface*>(self))
        vkmessageboxnotifyinterface->kmessageboxnotifyinterface_sendnotification_callback = reinterpret_cast<VirtualKMessageBoxNotifyInterface::KMessageBoxNotifyInterface_SendNotification_Callback>(slot);
}

void KMessageBoxNotifyInterface_Delete(KMessageBoxNotifyInterface* self) {
    delete self;
}
