#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__StatJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__UDSEntry
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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

libqt_string KIO__StatJob_Tr(const char* s) {
    QString _ret = KIO::StatJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string KIO__StatJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::StatJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__StatJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::StatJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__StatJob_Delete(KIO__StatJob* self) {
    delete self;
}

KIO__StatJob* KIO_Stat(const QUrl* param1, int param2) {
    return KIO::stat(*param1, static_cast<KIO::JobFlags>(param2));
}

KIO__StatJob* KIO_Stat2(const QUrl* param1, int param2, int param3, int param4) {
    return KIO::stat(*param1, static_cast<KIO::StatJob::StatSide>(param2), static_cast<KIO::StatDetails>(param3), static_cast<KIO::JobFlags>(param4));
}

KIO__StatJob* KIO_MostLocalUrl(const QUrl* param1, int param2) {
    return KIO::mostLocalUrl(*param1, static_cast<KIO::JobFlags>(param2));
}
