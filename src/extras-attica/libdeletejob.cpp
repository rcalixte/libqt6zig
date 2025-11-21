#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BaseJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__DeleteJob
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <deletejob.h>
#include "libdeletejob.h"
#include "libdeletejob.hxx"

QMetaObject* Attica__DeleteJob_MetaObject(const Attica__DeleteJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* Attica__DeleteJob_Metacast(Attica__DeleteJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Attica__DeleteJob_Metacall(Attica__DeleteJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void Attica__DeleteJob_Delete(Attica__DeleteJob* self) {
    delete self;
}
