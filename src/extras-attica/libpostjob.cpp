#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BaseJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PostJob
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <postjob.h>
#include "libpostjob.h"
#include "libpostjob.hxx"

QMetaObject* Attica__PostJob_MetaObject(const Attica__PostJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__PostJob_Metacast(Attica__PostJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__PostJob_Metacall(Attica__PostJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void Attica__PostJob_Delete(Attica__PostJob* self) {
    delete self;
}
