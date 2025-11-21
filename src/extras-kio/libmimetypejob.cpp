#include <KCompositeJob>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__MimetypeJob
#include <KIO/SimpleJob>
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

void KIO__MimetypeJob_Delete(KIO__MimetypeJob* self) {
    delete self;
}

KIO__MimetypeJob* KIO_Mimetype(const QUrl* param1, int param2) {
    return KIO::mimetype(*param1, static_cast<KIO::JobFlags>(param2));
}
