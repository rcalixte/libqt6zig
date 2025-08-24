#include <KPassword>
#include <QMetaObject>
#include <kpassword.h>
#include "libkpassword.h"
#include "libkpassword.hxx"

QMetaObject* KPassword_GetEnumMetaObject(int param1) {
    return (QMetaObject*)KPassword::qt_getEnumMetaObject(static_cast<KPassword::RevealMode>(param1));
}

const char* KPassword_GetEnumName(int param1) {
    return (const char*)KPassword::qt_getEnumName(static_cast<KPassword::RevealMode>(param1));
}
