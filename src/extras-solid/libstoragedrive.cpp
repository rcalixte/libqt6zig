#include <QDateTime>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__StorageDrive
#include <storagedrive.h>
#include "libstoragedrive.h"
#include "libstoragedrive.hxx"

QMetaObject* Solid__StorageDrive_MetaObject(const Solid__StorageDrive* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__StorageDrive_Metacast(Solid__StorageDrive* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__StorageDrive_Metacall(Solid__StorageDrive* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int Solid__StorageDrive_DeviceInterfaceType() {
    return static_cast<int>(Solid::StorageDrive::deviceInterfaceType());
}

int Solid__StorageDrive_Bus(const Solid__StorageDrive* self) {
    return static_cast<int>(self->bus());
}

int Solid__StorageDrive_DriveType(const Solid__StorageDrive* self) {
    return static_cast<int>(self->driveType());
}

bool Solid__StorageDrive_IsRemovable(const Solid__StorageDrive* self) {
    return self->isRemovable();
}

bool Solid__StorageDrive_IsHotpluggable(const Solid__StorageDrive* self) {
    return self->isHotpluggable();
}

unsigned long long Solid__StorageDrive_Size(const Solid__StorageDrive* self) {
    return static_cast<unsigned long long>(self->size());
}

bool Solid__StorageDrive_IsInUse(const Solid__StorageDrive* self) {
    return self->isInUse();
}

QDateTime* Solid__StorageDrive_TimeDetected(const Solid__StorageDrive* self) {
    return new QDateTime(self->timeDetected());
}

QDateTime* Solid__StorageDrive_TimeMediaDetected(const Solid__StorageDrive* self) {
    return new QDateTime(self->timeMediaDetected());
}

void Solid__StorageDrive_Delete(Solid__StorageDrive* self) {
    delete self;
}
