#include <KCompositeJob>
#include <KIO/Job>
#include <KIO/SimpleJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob
#include <KJob>
#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <transferjob.h>
#include "libtransferjob.h"
#include "libtransferjob.hxx"

QMetaObject* KIO__TransferJob_MetaObject(const KIO__TransferJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__TransferJob_Metacast(KIO__TransferJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__TransferJob_Metacall(KIO__TransferJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__TransferJob_Tr(const char* s) {
    QString _ret = KIO::TransferJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__TransferJob_SetModificationTime(KIO__TransferJob* self, const QDateTime* mtime) {
    self->setModificationTime(*mtime);
}

bool KIO__TransferJob_IsErrorPage(const KIO__TransferJob* self) {
    return self->isErrorPage();
}

void KIO__TransferJob_SetAsyncDataEnabled(KIO__TransferJob* self, bool enabled) {
    self->setAsyncDataEnabled(enabled);
}

void KIO__TransferJob_SendAsyncData(KIO__TransferJob* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->sendAsyncData(data_QByteArray);
}

libqt_string KIO__TransferJob_Mimetype(const KIO__TransferJob* self) {
    QString _ret = self->mimetype();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO__TransferJob_RedirectUrl(const KIO__TransferJob* self) {
    return new QUrl(self->redirectUrl());
}

void KIO__TransferJob_SetTotalSize(KIO__TransferJob* self, unsigned long long bytes) {
    self->setTotalSize(static_cast<KIO::filesize_t>(bytes));
}

void KIO__TransferJob_Data(KIO__TransferJob* self, KIO__Job* job, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->data(job, data_QByteArray);
}

void KIO__TransferJob_Connect_Data(KIO__TransferJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__TransferJob*, KIO__Job*, const char*) = reinterpret_cast<void (*)(KIO__TransferJob*, KIO__Job*, const char*)>(slot);
    KIO::TransferJob::connect(self, &KIO::TransferJob::data, [self, slotFunc](KIO::Job* job, const QByteArray& data) {
        KIO__Job* sigval1 = job;
        const QByteArray data_qb = data;
        libqt_string data_str;
        data_str.len = data_qb.length();
        data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
        memcpy((void*)data_str.data, data_qb.data(), data_str.len);
        ((char*)data_str.data)[data_str.len] = '\0';
        const char* sigval2 = data_str.data;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__TransferJob_DataReq(KIO__TransferJob* self, KIO__Job* job, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->dataReq(job, data_QByteArray);
}

void KIO__TransferJob_Connect_DataReq(KIO__TransferJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__TransferJob*, KIO__Job*, const char*) = reinterpret_cast<void (*)(KIO__TransferJob*, KIO__Job*, const char*)>(slot);
    KIO::TransferJob::connect(self, &KIO::TransferJob::dataReq, [self, slotFunc](KIO::Job* job, QByteArray& data) {
        KIO__Job* sigval1 = job;
        QByteArray data_qb = data;
        libqt_string data_str;
        data_str.len = data_qb.length();
        data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
        memcpy((void*)data_str.data, data_qb.data(), data_str.len);
        ((char*)data_str.data)[data_str.len] = '\0';
        const char* sigval2 = data_str.data;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__TransferJob_Redirection(KIO__TransferJob* self, KIO__Job* job, const QUrl* url) {
    self->redirection(job, *url);
}

void KIO__TransferJob_Connect_Redirection(KIO__TransferJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__TransferJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__TransferJob*, KIO__Job*, QUrl*)>(slot);
    KIO::TransferJob::connect(self, &KIO::TransferJob::redirection, [self, slotFunc](KIO::Job* job, const QUrl& url) {
        KIO__Job* sigval1 = job;
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__TransferJob_PermanentRedirection(KIO__TransferJob* self, KIO__Job* job, const QUrl* fromUrl, const QUrl* toUrl) {
    self->permanentRedirection(job, *fromUrl, *toUrl);
}

void KIO__TransferJob_Connect_PermanentRedirection(KIO__TransferJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__TransferJob*, KIO__Job*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__TransferJob*, KIO__Job*, QUrl*, QUrl*)>(slot);
    KIO::TransferJob::connect(self, &KIO::TransferJob::permanentRedirection, [self, slotFunc](KIO::Job* job, const QUrl& fromUrl, const QUrl& toUrl) {
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

void KIO__TransferJob_MimeTypeFound(KIO__TransferJob* self, KIO__Job* job, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->mimeTypeFound(job, mimeType_QString);
}

void KIO__TransferJob_Connect_MimeTypeFound(KIO__TransferJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__TransferJob*, KIO__Job*, const char*) = reinterpret_cast<void (*)(KIO__TransferJob*, KIO__Job*, const char*)>(slot);
    KIO::TransferJob::connect(self, &KIO::TransferJob::mimeTypeFound, [self, slotFunc](KIO::Job* job, const QString& mimeType) {
        KIO__Job* sigval1 = job;
        const QString mimeType_ret = mimeType;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray mimeType_b = mimeType_ret.toUtf8();
        const char* mimeType_str = static_cast<const char*>(malloc(mimeType_b.length() + 1));
        memcpy((void*)mimeType_str, mimeType_b.data(), mimeType_b.length());
        ((char*)mimeType_str)[mimeType_b.length()] = '\0';
        const char* sigval2 = mimeType_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(mimeType_str);
    });
}

void KIO__TransferJob_CanResume(KIO__TransferJob* self, KIO__Job* job, unsigned long long offset) {
    self->canResume(job, static_cast<KIO::filesize_t>(offset));
}

void KIO__TransferJob_Connect_CanResume(KIO__TransferJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__TransferJob*, KIO__Job*, unsigned long long) = reinterpret_cast<void (*)(KIO__TransferJob*, KIO__Job*, unsigned long long)>(slot);
    KIO::TransferJob::connect(self, &KIO::TransferJob::canResume, [self, slotFunc](KIO::Job* job, KIO::filesize_t offset) {
        KIO__Job* sigval1 = job;
        unsigned long long sigval2 = static_cast<unsigned long long>(offset);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KIO__TransferJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::TransferJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__TransferJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::TransferJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__TransferJob_Delete(KIO__TransferJob* self) {
    delete self;
}

KIO__TransferJob* KIO_Get(const QUrl* param1, int param2, int param3) {
    return KIO::get(*param1, static_cast<KIO::LoadType>(param2), static_cast<KIO::JobFlags>(param3));
}

KIO__TransferJob* KIO_Put(const QUrl* param1, int param2, int param3) {
    return KIO::put(*param1, static_cast<int>(param2), static_cast<KIO::JobFlags>(param3));
}

KIO__TransferJob* KIO_HttpPost(const QUrl* param1, const libqt_string param2, int param3) {
    QByteArray param2_QByteArray(param2.data, param2.len);
    return KIO::http_post(*param1, param2_QByteArray, static_cast<KIO::JobFlags>(param3));
}

KIO__TransferJob* KIO_HttpPost2(const QUrl* param1, QIODevice* param2, long long param3, int param4) {
    return KIO::http_post(*param1, param2, static_cast<qint64>(param3), static_cast<KIO::JobFlags>(param4));
}

KIO__TransferJob* KIO_HttpDelete(const QUrl* param1, int param2) {
    return KIO::http_delete(*param1, static_cast<KIO::JobFlags>(param2));
}
