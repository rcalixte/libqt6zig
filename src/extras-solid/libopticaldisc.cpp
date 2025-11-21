#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__OpticalDisc
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageVolume
#include <opticaldisc.h>
#include "libopticaldisc.h"
#include "libopticaldisc.hxx"

QMetaObject* Solid__OpticalDisc_MetaObject(const Solid__OpticalDisc* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__OpticalDisc_Metacast(Solid__OpticalDisc* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__OpticalDisc_Metacall(Solid__OpticalDisc* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int Solid__OpticalDisc_DeviceInterfaceType() {
    return static_cast<int>(Solid::OpticalDisc::deviceInterfaceType());
}

int Solid__OpticalDisc_AvailableContent(const Solid__OpticalDisc* self) {
    return static_cast<int>(self->availableContent());
}

int Solid__OpticalDisc_DiscType(const Solid__OpticalDisc* self) {
    return static_cast<int>(self->discType());
}

bool Solid__OpticalDisc_IsAppendable(const Solid__OpticalDisc* self) {
    return self->isAppendable();
}

bool Solid__OpticalDisc_IsBlank(const Solid__OpticalDisc* self) {
    return self->isBlank();
}

bool Solid__OpticalDisc_IsRewritable(const Solid__OpticalDisc* self) {
    return self->isRewritable();
}

unsigned long long Solid__OpticalDisc_Capacity(const Solid__OpticalDisc* self) {
    return static_cast<unsigned long long>(self->capacity());
}

void Solid__OpticalDisc_Delete(Solid__OpticalDisc* self) {
    delete self;
}
