#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerFactory
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <workerfactory.h>
#include "libworkerfactory.h"
#include "libworkerfactory.hxx"

QMetaObject* KIO__WorkerFactory_MetaObject(const KIO__WorkerFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__WorkerFactory_Metacast(KIO__WorkerFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__WorkerFactory_Metacall(KIO__WorkerFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__WorkerFactory_Delete(KIO__WorkerFactory* self) {
    delete self;
}
