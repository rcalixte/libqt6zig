#include <KCompositeJob>
#include <KIO/Job>
#include <KIO/SimpleJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__StatJob
#include <KIO/UDSEntry>
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QUrl>
#include <statjob.h>
#include "libstatjob.h"
#include "libstatjob.hxx"

QMetaObject* KIO__StatJob_MetaObject(const KIO__StatJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__StatJob_Metacast(KIO__StatJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__StatJob_Metacall(KIO__StatJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__StatJob_SetSide(KIO__StatJob* self, int side) {
    self->setSide(static_cast<KIO::StatJob::StatSide>(side));
}

void KIO__StatJob_SetDetails(KIO__StatJob* self, int details) {
    self->setDetails(static_cast<KIO::StatDetails>(details));
}

KIO__UDSEntry* KIO__StatJob_StatResult(const KIO__StatJob* self) {
    const KIO::UDSEntry& _ret = self->statResult();
    // Cast returned reference into pointer
    return const_cast<KIO::UDSEntry*>(&_ret);
}

QUrl* KIO__StatJob_MostLocalUrl(const KIO__StatJob* self) {
    return new QUrl(self->mostLocalUrl());
}

void KIO__StatJob_Redirection(KIO__StatJob* self, KIO__Job* job, const QUrl* url) {
    self->redirection(job, *url);
}

void KIO__StatJob_Connect_Redirection(KIO__StatJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__StatJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__StatJob*, KIO__Job*, QUrl*)>(slot);
    KIO::StatJob::connect(self, &KIO::StatJob::redirection, [self, slotFunc](KIO::Job* job, const QUrl& url) {
        KIO__Job* sigval1 = job;
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__StatJob_PermanentRedirection(KIO__StatJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl) {
    self->permanentRedirection(job, *fromUrl, *toUrl);
}

void KIO__StatJob_Connect_PermanentRedirection(KIO__StatJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__StatJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__StatJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::StatJob::connect(self, &KIO::StatJob::permanentRedirection, [self, slotFunc](KIO::Job* job, const QUrl& fromUrl, const QUrl& toUrl) {
        KIO__Job* sigval1 = job;
        const QUrl& fromUrl_ret = fromUrl;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&fromUrl_ret);
        const QUrl& toUrl_ret = toUrl;
        // Cast returned reference into pointer
        QUrl* sigval3 = const_cast<QUrl*>(&toUrl_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KIO__StatJob_Delete(KIO__StatJob* self) {
    delete self;
}

KIO__StatJob* KIO_Stat(const QUrl* url, int flags) {
    return KIO::stat(*url, static_cast<KIO::JobFlags>(flags));
}

KIO__StatJob* KIO_Stat2(const QUrl* url, int side, int details, int flags) {
    return KIO::stat(*url, static_cast<KIO::StatJob::StatSide>(side), static_cast<KIO::StatDetails>(details), static_cast<KIO::JobFlags>(flags));
}

KIO__StatJob* KIO_MostLocalUrl(const QUrl* url, int flags) {
    return KIO::mostLocalUrl(*url, static_cast<KIO::JobFlags>(flags));
}
