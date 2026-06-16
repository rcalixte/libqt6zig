#include <KCompositeJob>
#include <KIO/Job>
#include <KIO/SimpleJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__StoredTransferJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob
#include <KJob>
#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QUrl>
#include <storedtransferjob.h>
#include "libstoredtransferjob.h"
#include "libstoredtransferjob.hxx"

QMetaObject* KIO__StoredTransferJob_MetaObject(const KIO__StoredTransferJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__StoredTransferJob_Metacast(KIO__StoredTransferJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__StoredTransferJob_Metacall(KIO__StoredTransferJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__StoredTransferJob_SetData(KIO__StoredTransferJob* self, const libqt_string arr) {
    QByteArray arr_QByteArray(arr.data, arr.len);
    self->setData(arr_QByteArray);
}

libqt_string KIO__StoredTransferJob_Data(const KIO__StoredTransferJob* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KIO__StoredTransferJob_Delete(KIO__StoredTransferJob* self) {
    delete self;
}

KIO__StoredTransferJob* KIO_StoredGet(const QUrl* url, int reload, int flags) {
    return KIO::storedGet(*url, static_cast<KIO::LoadType>(reload), static_cast<KIO::JobFlags>(flags));
}

KIO__StoredTransferJob* KIO_StoredPut(QIODevice* input, const QUrl* url, int permissions, int flags) {
    return KIO::storedPut(input, *url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags));
}

KIO__StoredTransferJob* KIO_StoredPut2(const libqt_string arr, const QUrl* url, int permissions, int flags) {
    QByteArray arr_QByteArray(arr.data, arr.len);
    return KIO::storedPut(arr_QByteArray, *url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags));
}

KIO__StoredTransferJob* KIO_StoredHttpPost(const libqt_string arr, const QUrl* url, int flags) {
    QByteArray arr_QByteArray(arr.data, arr.len);
    return KIO::storedHttpPost(arr_QByteArray, *url, static_cast<KIO::JobFlags>(flags));
}

KIO__StoredTransferJob* KIO_StoredHttpPost2(QIODevice* device, const QUrl* url, long long size, int flags) {
    return KIO::storedHttpPost(device, *url, static_cast<qint64>(size), static_cast<KIO::JobFlags>(flags));
}
