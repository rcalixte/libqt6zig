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

unsigned long long KIO__FileSystemFreeSpaceJob_Size(const KIO__FileSystemFreeSpaceJob* self) {
    return static_cast<unsigned long long>(self->size());
}

unsigned long long KIO__FileSystemFreeSpaceJob_AvailableSize(const KIO__FileSystemFreeSpaceJob* self) {
    return static_cast<unsigned long long>(self->availableSize());
}

void KIO__FileSystemFreeSpaceJob_Delete(KIO__FileSystemFreeSpaceJob* self) {
    delete self;
}

KIO__FileSystemFreeSpaceJob* KIO_FileSystemFreeSpace(const QUrl* param1) {
    return KIO::fileSystemFreeSpace(*param1);
}
