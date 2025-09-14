#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ListJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SimpleJob
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
#include <listjob.h>
#include "liblistjob.h"
#include "liblistjob.hxx"

QMetaObject* KIO__ListJob_MetaObject(const KIO__ListJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__ListJob_Metacast(KIO__ListJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__ListJob_Metacall(KIO__ListJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__ListJob_Tr(const char* s) {
    QString _ret = KIO::ListJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO__ListJob_RedirectionUrl(const KIO__ListJob* self) {
    const QUrl& _ret = self->redirectionUrl();
    // Cast returned reference into pointer
    return const_cast<QUrl*>(&_ret);
}

void KIO__ListJob_SetUnrestricted(KIO__ListJob* self, bool unrestricted) {
    self->setUnrestricted(unrestricted);
}

void KIO__ListJob_Entries(KIO__ListJob* self, KIO__Job* job, const libqt_list /* of KIO__UDSEntry* */ list) {
    QList<KIO::UDSEntry> list_QList;
    list_QList.reserve(list.len);
    KIO__UDSEntry** list_arr = static_cast<KIO__UDSEntry**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    self->entries(job, list_QList);
}

void KIO__ListJob_Connect_Entries(KIO__ListJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__ListJob*, KIO__Job*, KIO__UDSEntry**) = reinterpret_cast<void (*)(KIO__ListJob*, KIO__Job*, KIO__UDSEntry**)>(slot);
    KIO::ListJob::connect(self, &KIO::ListJob::entries, [self, slotFunc](KIO::Job* job, const QList<KIO::UDSEntry>& list) {
        KIO__Job* sigval1 = job;
        const QList<KIO::UDSEntry>& list_ret = list;
        // Convert QList<> from C++ memory to manually-managed C memory
        KIO__UDSEntry** list_arr = static_cast<KIO__UDSEntry**>(malloc(sizeof(KIO__UDSEntry*) * (list_ret.size() + 1)));
        for (qsizetype i = 0; i < list_ret.size(); ++i) {
            list_arr[i] = new KIO::UDSEntry(list_ret[i]);
        }
        // Append sentinel value to the list
        list_arr[list_ret.size()] = nullptr;
        KIO__UDSEntry** sigval2 = list_arr;
        slotFunc(self, sigval1, sigval2);
        free(list_arr);
    });
}

void KIO__ListJob_SubError(KIO__ListJob* self, KIO__ListJob* job, KIO__ListJob* subJob) {
    self->subError(job, subJob);
}

void KIO__ListJob_Connect_SubError(KIO__ListJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__ListJob*, KIO__ListJob*, KIO__ListJob*) = reinterpret_cast<void (*)(KIO__ListJob*, KIO__ListJob*, KIO__ListJob*)>(slot);
    KIO::ListJob::connect(self, &KIO::ListJob::subError, [self, slotFunc](KIO::ListJob* job, KIO::ListJob* subJob) {
        KIO__ListJob* sigval1 = job;
        KIO__ListJob* sigval2 = subJob;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__ListJob_Redirection(KIO__ListJob* self, KIO__Job* job, const QUrl* url) {
    self->redirection(job, *url);
}

void KIO__ListJob_Connect_Redirection(KIO__ListJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__ListJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__ListJob*, KIO__Job*, QUrl*)>(slot);
    KIO::ListJob::connect(self, &KIO::ListJob::redirection, [self, slotFunc](KIO::Job* job, const QUrl& url) {
        KIO__Job* sigval1 = job;
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__ListJob_PermanentRedirection(KIO__ListJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl) {
    self->permanentRedirection(job, *fromUrl, *toUrl);
}

void KIO__ListJob_Connect_PermanentRedirection(KIO__ListJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__ListJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__ListJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::ListJob::connect(self, &KIO::ListJob::permanentRedirection, [self, slotFunc](KIO::Job* job, const QUrl& fromUrl, const QUrl& toUrl) {
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

libqt_string KIO__ListJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::ListJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__ListJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::ListJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__ListJob_Delete(KIO__ListJob* self) {
    delete self;
}

KIO__ListJob* KIO_ListDir(const QUrl* param1, int param2, int param3) {
    return KIO::listDir(*param1, static_cast<KIO::JobFlags>(param2), static_cast<KIO::ListJob::ListFlags>(param3));
}

KIO__ListJob* KIO_ListRecursive(const QUrl* param1, int param2, int param3) {
    return KIO::listRecursive(*param1, static_cast<KIO::JobFlags>(param2), static_cast<KIO::ListJob::ListFlags>(param3));
}
