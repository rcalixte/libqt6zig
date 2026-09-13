#include <KIO/WorkerBase>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerFactory
#include <QByteArray>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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

libqt_string KIO__WorkerFactory_Tr(const char* s) {
    auto _ret = KIO::WorkerFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__WorkerBase* KIO__WorkerFactory_CreateWorker(KIO__WorkerFactory* self, const libqt_string pool, const libqt_string app) {
    QByteArray pool_QByteArray(pool.data, pool.len);
    QByteArray app_QByteArray(app.data, app.len);
    return self->createWorker(pool_QByteArray, app_QByteArray).release();
}

libqt_string KIO__WorkerFactory_Tr2(const char* s, const char* c) {
    auto _ret = KIO::WorkerFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__WorkerFactory_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::WorkerFactory::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__WorkerFactory_Delete(KIO__WorkerFactory* self) {
    delete self;
}
