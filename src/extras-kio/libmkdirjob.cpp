#include <KCompositeJob>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__MkdirJob
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
#include <mkdirjob.h>
#include "libmkdirjob.h"
#include "libmkdirjob.hxx"

QMetaObject* KIO__MkdirJob_MetaObject(const KIO__MkdirJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__MkdirJob_Metacast(KIO__MkdirJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__MkdirJob_Metacall(KIO__MkdirJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__MkdirJob_Tr(const char* s) {
    QString _ret = KIO::MkdirJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__MkdirJob_Redirection(KIO__MkdirJob* self, KIO__Job* job, const QUrl* url) {
    self->redirection(job, *url);
}

void KIO__MkdirJob_Connect_Redirection(KIO__MkdirJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__MkdirJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__MkdirJob*, KIO__Job*, QUrl*)>(slot);
    KIO::MkdirJob::connect(self, &KIO::MkdirJob::redirection, [self, slotFunc](KIO::Job* job, const QUrl& url) {
        KIO__Job* sigval1 = job;
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__MkdirJob_PermanentRedirection(KIO__MkdirJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl) {
    self->permanentRedirection(job, *fromUrl, *toUrl);
}

void KIO__MkdirJob_Connect_PermanentRedirection(KIO__MkdirJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__MkdirJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__MkdirJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::MkdirJob::connect(self, &KIO::MkdirJob::permanentRedirection, [self, slotFunc](KIO::Job* job, const QUrl& fromUrl, const QUrl& toUrl) {
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

libqt_string KIO__MkdirJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::MkdirJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__MkdirJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::MkdirJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__MkdirJob_Delete(KIO__MkdirJob* self) {
    delete self;
}

KIO__MkdirJob* KIO_Mkdir(const QUrl* param1, int param2) {
    return KIO::mkdir(*param1, static_cast<int>(param2));
}
