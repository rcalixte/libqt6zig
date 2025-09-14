#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ChmodJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <chmodjob.h>
#include "libchmodjob.h"
#include "libchmodjob.hxx"

QMetaObject* KIO__ChmodJob_MetaObject(const KIO__ChmodJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__ChmodJob_Metacast(KIO__ChmodJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__ChmodJob_Metacall(KIO__ChmodJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__ChmodJob_Tr(const char* s) {
    QString _ret = KIO::ChmodJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__ChmodJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::ChmodJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__ChmodJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::ChmodJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__ChmodJob_Delete(KIO__ChmodJob* self) {
    delete self;
}
