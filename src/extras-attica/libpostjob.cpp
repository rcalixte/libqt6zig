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

libqt_string Attica__PostJob_Tr(const char* s) {
    QString _ret = Attica::PostJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__PostJob_Tr2(const char* s, const char* c) {
    QString _ret = Attica::PostJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Attica__PostJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = Attica::PostJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__PostJob_Delete(Attica__PostJob* self) {
    delete self;
}
