#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileSystemFreeSpaceJob
#include <KIO/Job>
#include <KIO/SimpleJob>
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <filesystemfreespacejob.h>
#include "libfilesystemfreespacejob.h"
#include "libfilesystemfreespacejob.hxx"

QMetaObject* KIO__FileSystemFreeSpaceJob_MetaObject(const KIO__FileSystemFreeSpaceJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__FileSystemFreeSpaceJob_Metacast(KIO__FileSystemFreeSpaceJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__FileSystemFreeSpaceJob_Metacall(KIO__FileSystemFreeSpaceJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__FileSystemFreeSpaceJob_Tr(const char* s) {
    QString _ret = KIO::FileSystemFreeSpaceJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long KIO__FileSystemFreeSpaceJob_Size(const KIO__FileSystemFreeSpaceJob* self) {
    return static_cast<unsigned long long>(self->size());
}

unsigned long long KIO__FileSystemFreeSpaceJob_AvailableSize(const KIO__FileSystemFreeSpaceJob* self) {
    return static_cast<unsigned long long>(self->availableSize());
}

libqt_string KIO__FileSystemFreeSpaceJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::FileSystemFreeSpaceJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__FileSystemFreeSpaceJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::FileSystemFreeSpaceJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__FileSystemFreeSpaceJob_Delete(KIO__FileSystemFreeSpaceJob* self) {
    delete self;
}

KIO__FileSystemFreeSpaceJob* KIO_FileSystemFreeSpace(const QUrl* param1) {
    return KIO::fileSystemFreeSpace(*param1);
}
