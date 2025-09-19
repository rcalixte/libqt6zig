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
#include <QByteArray>
#include <cstring>
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

libqt_string KIO__StoredTransferJob_Tr(const char* s) {
    QString _ret = KIO::StoredTransferJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__StoredTransferJob_SetData(KIO__StoredTransferJob* self, const libqt_string arr) {
    QByteArray arr_QByteArray(arr.data, arr.len);
    self->setData(arr_QByteArray);
}

libqt_string KIO__StoredTransferJob_Data(const KIO__StoredTransferJob* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__StoredTransferJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::StoredTransferJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__StoredTransferJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::StoredTransferJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__StoredTransferJob_Delete(KIO__StoredTransferJob* self) {
    delete self;
}

KIO__StoredTransferJob* KIO_StoredGet(const QUrl* param1, int param2, int param3) {
    return KIO::storedGet(*param1, static_cast<KIO::LoadType>(param2), static_cast<KIO::JobFlags>(param3));
}

KIO__StoredTransferJob* KIO_StoredPut(QIODevice* param1, const QUrl* param2, int param3, int param4) {
    return KIO::storedPut(param1, *param2, static_cast<int>(param3), static_cast<KIO::JobFlags>(param4));
}

KIO__StoredTransferJob* KIO_StoredPut2(const libqt_string param1, const QUrl* param2, int param3, int param4) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    return KIO::storedPut(param1_QByteArray, *param2, static_cast<int>(param3), static_cast<KIO::JobFlags>(param4));
}

KIO__StoredTransferJob* KIO_StoredHttpPost(const libqt_string param1, const QUrl* param2, int param3) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    return KIO::storedHttpPost(param1_QByteArray, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__StoredTransferJob* KIO_StoredHttpPost2(QIODevice* param1, const QUrl* param2, long long param3, int param4) {
    return KIO::storedHttpPost(param1, *param2, static_cast<qint64>(param3), static_cast<KIO::JobFlags>(param4));
}
