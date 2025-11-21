#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BaseJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__GetJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <getjob.h>
#include "libgetjob.h"
#include "libgetjob.hxx"

QMetaObject* Attica__GetJob_MetaObject(const Attica__GetJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__GetJob_Metacast(Attica__GetJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__GetJob_Metacall(Attica__GetJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void Attica__GetJob_Delete(Attica__GetJob* self) {
    delete self;
}
