#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ChmodJob
#include <KIO/Job>
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

void KIO__ChmodJob_Delete(KIO__ChmodJob* self) {
    delete self;
}
