#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__NetworkShare
#include <networkshare.h>
#include "libnetworkshare.h"
#include "libnetworkshare.hxx"

QMetaObject* Solid__NetworkShare_MetaObject(const Solid__NetworkShare* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__NetworkShare_Metacast(Solid__NetworkShare* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__NetworkShare_Metacall(Solid__NetworkShare* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int Solid__NetworkShare_DeviceInterfaceType() {
    return static_cast<int>(Solid::NetworkShare::deviceInterfaceType());
}

int Solid__NetworkShare_Type(const Solid__NetworkShare* self) {
    return static_cast<int>(self->type());
}

QUrl* Solid__NetworkShare_Url(const Solid__NetworkShare* self) {
    return new QUrl(self->url());
}

void Solid__NetworkShare_Delete(Solid__NetworkShare* self) {
    delete self;
}
