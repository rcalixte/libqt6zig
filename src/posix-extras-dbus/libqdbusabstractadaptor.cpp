#include <QDBusAbstractAdaptor>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qdbusabstractadaptor.h>
#include "libqdbusabstractadaptor.h"
#include "libqdbusabstractadaptor.hxx"

QMetaObject* QDBusAbstractAdaptor_MetaObject(const QDBusAbstractAdaptor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDBusAbstractAdaptor_Metacast(QDBusAbstractAdaptor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDBusAbstractAdaptor_Metacall(QDBusAbstractAdaptor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void QDBusAbstractAdaptor_Delete(QDBusAbstractAdaptor* self) {
    delete self;
}
