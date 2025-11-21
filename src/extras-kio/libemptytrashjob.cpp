#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__EmptyTrashJob
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
#include <emptytrashjob.h>
#include "libemptytrashjob.h"
#include "libemptytrashjob.hxx"

QMetaObject* KIO__EmptyTrashJob_MetaObject(const KIO__EmptyTrashJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__EmptyTrashJob_Metacast(KIO__EmptyTrashJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__EmptyTrashJob_Metacall(KIO__EmptyTrashJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__EmptyTrashJob_Delete(KIO__EmptyTrashJob* self) {
    delete self;
}

KIO__EmptyTrashJob* KIO_EmptyTrash() {
    return KIO::emptyTrash();
}
