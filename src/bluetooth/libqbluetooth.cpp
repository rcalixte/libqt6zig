#include <QMetaObject>
#include <qbluetooth.h>
#include "libqbluetooth.h"
#include "libqbluetooth.hxx"

QMetaObject* QBluetooth_GetEnumMetaObject(int param1) {
    return (QMetaObject*)QBluetooth::qt_getEnumMetaObject(static_cast<QBluetooth::Security>(param1));
}

const char* QBluetooth_GetEnumName(int param1) {
    return (const char*)QBluetooth::qt_getEnumName(static_cast<QBluetooth::Security>(param1));
}

QMetaObject* QBluetooth_GetEnumMetaObject2(int param1) {
    return (QMetaObject*)QBluetooth::qt_getEnumMetaObject(static_cast<QBluetooth::AttAccessConstraint>(param1));
}

const char* QBluetooth_GetEnumName2(int param1) {
    return (const char*)QBluetooth::qt_getEnumName(static_cast<QBluetooth::AttAccessConstraint>(param1));
}
