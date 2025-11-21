#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__DeviceInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Processor
#include <processor.h>
#include "libprocessor.h"
#include "libprocessor.hxx"

QMetaObject* Solid__Processor_MetaObject(const Solid__Processor* self) {
    return (QMetaObject*)self->metaObject();
}

void* Solid__Processor_Metacast(Solid__Processor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Solid__Processor_Metacall(Solid__Processor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

int Solid__Processor_DeviceInterfaceType() {
    return static_cast<int>(Solid::Processor::deviceInterfaceType());
}

int Solid__Processor_Number(const Solid__Processor* self) {
    return self->number();
}

int Solid__Processor_MaxSpeed(const Solid__Processor* self) {
    return self->maxSpeed();
}

bool Solid__Processor_CanChangeFrequency(const Solid__Processor* self) {
    return self->canChangeFrequency();
}

int Solid__Processor_InstructionSets(const Solid__Processor* self) {
    return static_cast<int>(self->instructionSets());
}

void Solid__Processor_Delete(Solid__Processor* self) {
    delete self;
}
