#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileCopyJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#include <KJob>
#include <QDateTime>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <filecopyjob.h>
#include "libfilecopyjob.h"
#include "libfilecopyjob.hxx"

QMetaObject* KIO__FileCopyJob_MetaObject(const KIO__FileCopyJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__FileCopyJob_Metacast(KIO__FileCopyJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__FileCopyJob_Metacall(KIO__FileCopyJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__FileCopyJob_Tr(const char* s) {
    QString _ret = KIO::FileCopyJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__FileCopyJob_SetSourceSize(KIO__FileCopyJob* self, unsigned long long size) {
    self->setSourceSize(static_cast<KIO::filesize_t>(size));
}

void KIO__FileCopyJob_SetModificationTime(KIO__FileCopyJob* self, const QDateTime* mtime) {
    self->setModificationTime(*mtime);
}

QUrl* KIO__FileCopyJob_SrcUrl(const KIO__FileCopyJob* self) {
    return new QUrl(self->srcUrl());
}

QUrl* KIO__FileCopyJob_DestUrl(const KIO__FileCopyJob* self) {
    return new QUrl(self->destUrl());
}

bool KIO__FileCopyJob_DoSuspend(KIO__FileCopyJob* self) {
    return self->doSuspend();
}

bool KIO__FileCopyJob_DoResume(KIO__FileCopyJob* self) {
    return self->doResume();
}

bool KIO__FileCopyJob_DoKill(KIO__FileCopyJob* self) {
    return self->doKill();
}

void KIO__FileCopyJob_MimeTypeFound(KIO__FileCopyJob* self, KIO__Job* job, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->mimeTypeFound(job, mimeType_QString);
}

void KIO__FileCopyJob_Connect_MimeTypeFound(KIO__FileCopyJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileCopyJob*, KIO__Job*, const char*) = reinterpret_cast<void (*)(KIO__FileCopyJob*, KIO__Job*, const char*)>(slot);
    KIO::FileCopyJob::connect(self, &KIO::FileCopyJob::mimeTypeFound, [self, slotFunc](KIO::Job* job, const QString& mimeType) {
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

libqt_string KIO__FileCopyJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::FileCopyJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__FileCopyJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::FileCopyJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__FileCopyJob_Delete(KIO__FileCopyJob* self) {
    delete self;
}

KIO__FileCopyJob* KIO_FileCopy(const QUrl* param1, const QUrl* param2, int param3, int param4) {
    return KIO::file_copy(*param1, *param2, static_cast<int>(param3), static_cast<KIO::JobFlags>(param4));
}

KIO__FileCopyJob* KIO_FileMove(const QUrl* param1, const QUrl* param2, int param3, int param4) {
    return KIO::file_move(*param1, *param2, static_cast<int>(param3), static_cast<KIO::JobFlags>(param4));
}
