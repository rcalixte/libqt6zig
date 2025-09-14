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

libqt_string Solid__Processor_Tr(const char* s) {
    QString _ret = Solid::Processor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string Solid__Processor_Tr2(const char* s, const char* c) {
    QString _ret = Solid::Processor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Solid__Processor_Tr3(const char* s, const char* c, int n) {
    QString _ret = Solid::Processor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Solid__Processor_Delete(Solid__Processor* self) {
    delete self;
}
