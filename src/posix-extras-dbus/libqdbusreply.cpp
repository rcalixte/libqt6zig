#include <QDBusError>
#include <QDBusMessage>
#include <QVariant>
#include <qdbusreply.h>
#include "libqdbusreply.h"
#include "libqdbusreply.hxx"

void qdbusreply_h_QDBusReplyFill(const QDBusMessage* reply, QDBusError* error, QVariant* data) {
    qDBusReplyFill(*reply, *error, *data);
}
