#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileJob
#include <KIO/Job>
#include <KIO/SimpleJob>
#include <KJob>
#include <QByteArray>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <filejob.h>
#include "libfilejob.h"
#include "libfilejob.hxx"

QMetaObject* KIO__FileJob_MetaObject(const KIO__FileJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__FileJob_Metacast(KIO__FileJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__FileJob_Metacall(KIO__FileJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__FileJob_Read(KIO__FileJob* self, unsigned long long size) {
    self->read(static_cast<KIO::filesize_t>(size));
}

void KIO__FileJob_Write(KIO__FileJob* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->write(data_QByteArray);
}

void KIO__FileJob_Close(KIO__FileJob* self) {
    self->close();
}

void KIO__FileJob_Seek(KIO__FileJob* self, unsigned long long offset) {
    self->seek(static_cast<KIO::filesize_t>(offset));
}

void KIO__FileJob_Truncate(KIO__FileJob* self, unsigned long long length) {
    self->truncate(static_cast<KIO::filesize_t>(length));
}

unsigned long long KIO__FileJob_Size(KIO__FileJob* self) {
    return static_cast<unsigned long long>(self->size());
}

void KIO__FileJob_Data(KIO__FileJob* self, KIO__Job* job, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->data(job, data_QByteArray);
}

void KIO__FileJob_Connect_Data(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*, libqt_string) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*, libqt_string)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::data, [self, slotFunc](KIO::Job* job, const QByteArray& data) {
        KIO__Job* sigval1 = job;
        const QByteArray data_qb = data;
        libqt_string data_str;
        data_str.len = data_qb.length();
        data_str.data = static_cast<char*>(malloc(data_str.len));
        memcpy((void*)data_str.data, data_qb.data(), data_str.len);
        libqt_string sigval2 = data_str;
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__FileJob_Redirection(KIO__FileJob* self, KIO__Job* job, const QUrl* url) {
    self->redirection(job, *url);
}

void KIO__FileJob_Connect_Redirection(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*, QUrl*) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*, QUrl*)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::redirection, [self, slotFunc](KIO::Job* job, const QUrl& url) {
        KIO__Job* sigval1 = job;
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__FileJob_MimeTypeFound(KIO__FileJob* self, KIO__Job* job, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->mimeTypeFound(job, mimeType_QString);
}

void KIO__FileJob_Connect_MimeTypeFound(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*, const char*) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*, const char*)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::mimeTypeFound, [self, slotFunc](KIO::Job* job, const QString& mimeType) {
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

void KIO__FileJob_Open(KIO__FileJob* self, KIO__Job* job) {
    self->open(job);
}

void KIO__FileJob_Connect_Open(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::open, [self, slotFunc](KIO::Job* job) {
        KIO__Job* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KIO__FileJob_Written(KIO__FileJob* self, KIO__Job* job, unsigned long long written) {
    self->written(job, static_cast<KIO::filesize_t>(written));
}

void KIO__FileJob_Connect_Written(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*, unsigned long long) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*, unsigned long long)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::written, [self, slotFunc](KIO::Job* job, KIO::filesize_t written) {
        KIO__Job* sigval1 = job;
        unsigned long long sigval2 = static_cast<unsigned long long>(written);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__FileJob_FileClosed(KIO__FileJob* self, KIO__Job* job) {
    self->fileClosed(job);
}

void KIO__FileJob_Connect_FileClosed(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::fileClosed, [self, slotFunc](KIO::Job* job) {
        KIO__Job* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KIO__FileJob_Position(KIO__FileJob* self, KIO__Job* job, unsigned long long offset) {
    self->position(job, static_cast<KIO::filesize_t>(offset));
}

void KIO__FileJob_Connect_Position(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*, unsigned long long) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*, unsigned long long)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::position, [self, slotFunc](KIO::Job* job, KIO::filesize_t offset) {
        KIO__Job* sigval1 = job;
        unsigned long long sigval2 = static_cast<unsigned long long>(offset);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__FileJob_Truncated(KIO__FileJob* self, KIO__Job* job, unsigned long long length) {
    self->truncated(job, static_cast<KIO::filesize_t>(length));
}

void KIO__FileJob_Connect_Truncated(KIO__FileJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileJob*, KIO__Job*, unsigned long long) = reinterpret_cast<void (*)(KIO__FileJob*, KIO__Job*, unsigned long long)>(slot);
    KIO::FileJob::connect(self, &KIO::FileJob::truncated, [self, slotFunc](KIO::Job* job, KIO::filesize_t length) {
        KIO__Job* sigval1 = job;
        unsigned long long sigval2 = static_cast<unsigned long long>(length);
        slotFunc(self, sigval1, sigval2);
    });
}

void KIO__FileJob_Delete(KIO__FileJob* self) {
    delete self;
}

KIO__FileJob* KIO_Open(const QUrl* param1, int param2) {
    return KIO::open(*param1, static_cast<QIODevice::OpenMode>(param2));
}
