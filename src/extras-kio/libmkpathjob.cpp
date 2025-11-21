#include <KCompositeJob>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__MkpathJob
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <mkpathjob.h>
#include "libmkpathjob.h"
#include "libmkpathjob.hxx"

QMetaObject* KIO__MkpathJob_MetaObject(const KIO__MkpathJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__MkpathJob_Metacast(KIO__MkpathJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__MkpathJob_Metacall(KIO__MkpathJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__MkpathJob_DirectoryCreated(KIO__MkpathJob* self, const QUrl* url) {
    self->directoryCreated(*url);
}

void KIO__MkpathJob_Connect_DirectoryCreated(KIO__MkpathJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__MkpathJob*, QUrl*) = reinterpret_cast<void (*)(KIO__MkpathJob*, QUrl*)>(slot);
    KIO::MkpathJob::connect(self, &KIO::MkpathJob::directoryCreated, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KIO__MkpathJob_Delete(KIO__MkpathJob* self) {
    delete self;
}

KIO__MkpathJob* KIO_Mkpath(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::mkpath(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}
