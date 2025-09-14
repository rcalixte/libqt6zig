#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__MimetypeJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <mimetypejob.h>
#include "libmimetypejob.h"
#include "libmimetypejob.hxx"

QMetaObject* KIO__MimetypeJob_MetaObject(const KIO__MimetypeJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__MimetypeJob_Metacast(KIO__MimetypeJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__MimetypeJob_Metacall(KIO__MimetypeJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__MimetypeJob_Tr(const char* s) {
    QString _ret = KIO::MimetypeJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__MimetypeJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::MimetypeJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__MimetypeJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::MimetypeJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__MimetypeJob_Delete(KIO__MimetypeJob* self) {
    delete self;
}

KIO__MimetypeJob* KIO_Mimetype(const QUrl* param1, int param2) {
    return KIO::mimetype(*param1, static_cast<KIO::JobFlags>(param2));
}
