#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
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

libqt_string KIO__PasteJob_Tr(const char* s) {
    QString _ret = KIO::PasteJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string KIO__PasteJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::PasteJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__PasteJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::PasteJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__PasteJob_Delete(KIO__PasteJob* self) {
    delete self;
}

KIO__PasteJob* KIO_Paste(const QMimeData* param1, const QUrl* param2, int param3) {
    return KIO::paste(param1, *param2, static_cast<KIO::JobFlags>(param3));
}
