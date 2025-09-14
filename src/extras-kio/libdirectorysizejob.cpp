#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DirectorySizeJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <directorysizejob.h>
#include "libdirectorysizejob.h"
#include "libdirectorysizejob.hxx"

QMetaObject* KIO__DirectorySizeJob_MetaObject(const KIO__DirectorySizeJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DirectorySizeJob_Metacast(KIO__DirectorySizeJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DirectorySizeJob_Metacall(KIO__DirectorySizeJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__DirectorySizeJob_Tr(const char* s) {
    QString _ret = KIO::DirectorySizeJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long KIO__DirectorySizeJob_TotalSize(const KIO__DirectorySizeJob* self) {
    return static_cast<unsigned long long>(self->totalSize());
}

unsigned long long KIO__DirectorySizeJob_TotalFiles(const KIO__DirectorySizeJob* self) {
    return static_cast<unsigned long long>(self->totalFiles());
}

unsigned long long KIO__DirectorySizeJob_TotalSubdirs(const KIO__DirectorySizeJob* self) {
    return static_cast<unsigned long long>(self->totalSubdirs());
}

libqt_string KIO__DirectorySizeJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::DirectorySizeJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DirectorySizeJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::DirectorySizeJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DirectorySizeJob_Delete(KIO__DirectorySizeJob* self) {
    delete self;
}

KIO__DirectorySizeJob* KIO_DirectorySize(const QUrl* param1) {
    return KIO::directorySize(*param1);
}

KIO__DirectorySizeJob* KIO_DirectorySize2(const KFileItemList* param1) {
    return KIO::directorySize(*param1);
}
