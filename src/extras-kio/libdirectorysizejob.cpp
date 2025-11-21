#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DirectorySizeJob
#include <KIO/Job>
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

unsigned long long KIO__DirectorySizeJob_TotalSize(const KIO__DirectorySizeJob* self) {
    return static_cast<unsigned long long>(self->totalSize());
}

unsigned long long KIO__DirectorySizeJob_TotalFiles(const KIO__DirectorySizeJob* self) {
    return static_cast<unsigned long long>(self->totalFiles());
}

unsigned long long KIO__DirectorySizeJob_TotalSubdirs(const KIO__DirectorySizeJob* self) {
    return static_cast<unsigned long long>(self->totalSubdirs());
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
