#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__PasteJob
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <pastejob.h>
#include "libpastejob.h"
#include "libpastejob.hxx"

QMetaObject* KIO__PasteJob_MetaObject(const KIO__PasteJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__PasteJob_Metacast(KIO__PasteJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__PasteJob_Metacall(KIO__PasteJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__PasteJob_ItemCreated(KIO__PasteJob* self, const QUrl* url) {
    self->itemCreated(*url);
}

void KIO__PasteJob_Connect_ItemCreated(KIO__PasteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__PasteJob*, QUrl*) = reinterpret_cast<void (*)(KIO__PasteJob*, QUrl*)>(slot);
    KIO::PasteJob::connect(self, &KIO::PasteJob::itemCreated, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KIO__PasteJob_CopyJobStarted(KIO__PasteJob* self, KIO__CopyJob* job) {
    self->copyJobStarted(job);
}

void KIO__PasteJob_Connect_CopyJobStarted(KIO__PasteJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__PasteJob*, KIO__CopyJob*) = reinterpret_cast<void (*)(KIO__PasteJob*, KIO__CopyJob*)>(slot);
    KIO::PasteJob::connect(self, &KIO::PasteJob::copyJobStarted, [self, slotFunc](KIO::CopyJob* job) {
        KIO__CopyJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KIO__PasteJob_Delete(KIO__PasteJob* self) {
    delete self;
}

KIO__PasteJob* KIO_Paste(const QMimeData* param1, const QUrl* param2, int param3) {
    return KIO::paste(param1, *param2, static_cast<KIO::JobFlags>(param3));
}
