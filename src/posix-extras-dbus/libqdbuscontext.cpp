#include <QDBusConnection>
#include <QDBusContext>
#include <QDBusMessage>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdbuscontext.h>
#include "libqdbuscontext.h"
#include "libqdbuscontext.hxx"

QDBusContext* QDBusContext_new() {
    return new QDBusContext();
}

bool QDBusContext_CalledFromDBus(const QDBusContext* self) {
    return self->calledFromDBus();
}

QDBusConnection* QDBusContext_Connection(const QDBusContext* self) {
    return new QDBusConnection(self->connection());
}

QDBusMessage* QDBusContext_Message(const QDBusContext* self) {
    const QDBusMessage& _ret = self->message();
    // Cast returned reference into pointer
    return const_cast<QDBusMessage*>(&_ret);
}

bool QDBusContext_IsDelayedReply(const QDBusContext* self) {
    return self->isDelayedReply();
}

void QDBusContext_SetDelayedReply(const QDBusContext* self, bool enable) {
    self->setDelayedReply(enable);
}

void QDBusContext_SendErrorReply(const QDBusContext* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->sendErrorReply(name_QString);
}

void QDBusContext_SendErrorReply2(const QDBusContext* self, int typeVal) {
    self->sendErrorReply(static_cast<QDBusError::ErrorType>(typeVal));
}

void QDBusContext_SendErrorReply22(const QDBusContext* self, const libqt_string name, const libqt_string msg) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->sendErrorReply(name_QString, msg_QString);
}

void QDBusContext_SendErrorReply23(const QDBusContext* self, int typeVal, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->sendErrorReply(static_cast<QDBusError::ErrorType>(typeVal), msg_QString);
}

void QDBusContext_Delete(QDBusContext* self) {
    delete self;
}
