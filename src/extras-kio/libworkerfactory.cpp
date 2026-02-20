#include <KIO/WorkerBase>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerFactory
#include <QByteArray>
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

KIO__WorkerBase* KIO__WorkerFactory_CreateWorker(KIO__WorkerFactory* self, const libqt_string pool, const libqt_string app) {
    QByteArray pool_QByteArray(pool.data, pool.len);
    QByteArray app_QByteArray(app.data, app.len);
    return self->createWorker(pool_QByteArray, app_QByteArray).release();
}

void KIO__WorkerFactory_Delete(KIO__WorkerFactory* self) {
    delete self;
}
