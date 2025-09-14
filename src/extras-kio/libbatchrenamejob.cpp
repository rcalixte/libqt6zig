#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__BatchRenameJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
#include <KJob>
#include <QChar>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <batchrenamejob.h>
#include "libbatchrenamejob.h"
#include "libbatchrenamejob.hxx"

QMetaObject* KIO__BatchRenameJob_MetaObject(const KIO__BatchRenameJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__BatchRenameJob_Metacast(KIO__BatchRenameJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__BatchRenameJob_Metacall(KIO__BatchRenameJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__BatchRenameJob_Tr(const char* s) {
    QString _ret = KIO::BatchRenameJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__BatchRenameJob_FileRenamed(KIO__BatchRenameJob* self, const QUrl* oldUrl, const QUrl* newUrl) {
    self->fileRenamed(*oldUrl, *newUrl);
}

void KIO__BatchRenameJob_Connect_FileRenamed(KIO__BatchRenameJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__BatchRenameJob*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KIO__BatchRenameJob*, QUrl*, QUrl*)>(slot);
    KIO::BatchRenameJob::connect(self, &KIO::BatchRenameJob::fileRenamed, [self, slotFunc](const QUrl& oldUrl, const QUrl& newUrl) {
        const QUrl& oldUrl_ret = oldUrl;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&oldUrl_ret);
        const QUrl& newUrl_ret = newUrl;
        // Cast returned reference into pointer
        QUrl* sigval2 = const_cast<QUrl*>(&newUrl_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KIO__BatchRenameJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::BatchRenameJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__BatchRenameJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::BatchRenameJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__BatchRenameJob_Delete(KIO__BatchRenameJob* self) {
    delete self;
}

KIO__BatchRenameJob* KIO_BatchRename(const libqt_list /* of QUrl* */ param1, const libqt_string param2, int param3, QChar* param4, int param5) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return KIO::batchRename(param1_QList, param2_QString, static_cast<int>(param3), *param4, static_cast<KIO::JobFlags>(param5));
}
