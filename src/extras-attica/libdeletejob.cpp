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

libqt_string Attica__DeleteJob_Tr(const char* s) {
    QString _ret = Attica::DeleteJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__DeleteJob_Tr2(const char* s, const char* c) {
    QString _ret = Attica::DeleteJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__DeleteJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = Attica::DeleteJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__DeleteJob_Delete(Attica__DeleteJob* self) {
    delete self;
}
