#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BaseJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PutJob
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <putjob.h>
#include "libputjob.h"
#include "libputjob.hxx"

QMetaObject* Attica__PutJob_MetaObject(const Attica__PutJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__PutJob_Metacast(Attica__PutJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__PutJob_Metacall(Attica__PutJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void Attica__PutJob_Delete(Attica__PutJob* self) {
    delete self;
}
