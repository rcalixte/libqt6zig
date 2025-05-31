#include <QIODeviceBase>
#include <qiodevicebase.h>
#include "libqiodevicebase.h"
#include "libqiodevicebase.hxx"

QIODeviceBase* QIODeviceBase_new(const QIODeviceBase* other) {
    return new QIODeviceBase(*other);
}

void QIODeviceBase_CopyAssign(QIODeviceBase* self, QIODeviceBase* other) {
    *self = *other;
}
