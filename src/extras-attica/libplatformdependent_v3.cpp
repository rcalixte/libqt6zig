#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependentV2
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependentV3
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <platformdependent_v3.h>
#include "libplatformdependent_v3.h"
#include "libplatformdependent_v3.hxx"

QMetaObject* Attica__PlatformDependentV3_MetaObject(const Attica__PlatformDependentV3* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__PlatformDependentV3_Metacast(Attica__PlatformDependentV3* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__PlatformDependentV3_Metacall(Attica__PlatformDependentV3* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool Attica__PlatformDependentV3_IsReady(Attica__PlatformDependentV3* self) {
    return self->isReady();
}

void Attica__PlatformDependentV3_ReadyChanged(Attica__PlatformDependentV3* self) {
    self->readyChanged();
}

void Attica__PlatformDependentV3_Connect_ReadyChanged(Attica__PlatformDependentV3* self, intptr_t slot) {
    void (*slotFunc)(Attica__PlatformDependentV3*) = reinterpret_cast<void (*)(Attica__PlatformDependentV3*)>(slot);
    Attica::PlatformDependentV3::connect(self, &Attica::PlatformDependentV3::readyChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Attica__PlatformDependentV3_Delete(Attica__PlatformDependentV3* self) {
    delete self;
}
