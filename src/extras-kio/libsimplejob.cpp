#include <KCompositeJob>
#include <KIO/Job>
#include <KIO/MetaData>
#include <KIO/SimpleJob>
#include <KJob>
#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <simplejob.h>
#include "libsimplejob.h"
#include "libsimplejob.hxx"

QMetaObject* KIO__SimpleJob_MetaObject(const KIO__SimpleJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__SimpleJob_Metacast(KIO__SimpleJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__SimpleJob_Metacall(KIO__SimpleJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__SimpleJob_Tr(const char* s) {
    QString _ret = KIO::SimpleJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KIO__SimpleJob_Url(const KIO__SimpleJob* self) {
    const QUrl& _ret = self->url();
    // Cast returned reference into pointer
    return const_cast<QUrl*>(&_ret);
}

void KIO__SimpleJob_PutOnHold(KIO__SimpleJob* self) {
    self->putOnHold();
}

void KIO__SimpleJob_RemoveOnHold() {
    KIO::SimpleJob::removeOnHold();
}

bool KIO__SimpleJob_IsRedirectionHandlingEnabled(const KIO__SimpleJob* self) {
    return self->isRedirectionHandlingEnabled();
}

void KIO__SimpleJob_SetRedirectionHandlingEnabled(KIO__SimpleJob* self, bool handle) {
    self->setRedirectionHandlingEnabled(handle);
}

void KIO__SimpleJob_SlotError(KIO__SimpleJob* self, int param1, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    self->slotError(static_cast<int>(param1), param2_QString);
}

libqt_string KIO__SimpleJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::SimpleJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SimpleJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::SimpleJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__SimpleJob_Delete(KIO__SimpleJob* self) {
    delete self;
}

KIO__SimpleJob* KIO_Rmdir(const QUrl* param1) {
    return KIO::rmdir(*param1);
}

KIO__SimpleJob* KIO_Chown(const QUrl* param1, const libqt_string param2, const libqt_string param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KIO::chown(*param1, param2_QString, param3_QString);
}

KIO__SimpleJob* KIO_SetModificationTime(const QUrl* param1, const QDateTime* param2) {
    return KIO::setModificationTime(*param1, *param2);
}

KIO__SimpleJob* KIO_Rename(const QUrl* param1, const QUrl* param2, int param3) {
    return KIO::rename(*param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__SimpleJob* KIO_Symlink(const libqt_string param1, const QUrl* param2, int param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return KIO::symlink(param1_QString, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__SimpleJob* KIO_Special(const QUrl* param1, const libqt_string param2, int param3) {
    QByteArray param2_QByteArray(param2.data, param2.len);
    return KIO::special(*param1, param2_QByteArray, static_cast<KIO::JobFlags>(param3));
}

KIO__SimpleJob* KIO_Mount(bool param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5) {
    QByteArray param2_QByteArray(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    return KIO::mount(param1, param2_QByteArray, param3_QString, param4_QString, static_cast<KIO::JobFlags>(param5));
}

KIO__SimpleJob* KIO_Unmount(const libqt_string param1, int param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return KIO::unmount(param1_QString, static_cast<KIO::JobFlags>(param2));
}

KIO__SimpleJob* KIO_HttpUpdateCache(const QUrl* param1, bool param2, const QDateTime* param3) {
    return KIO::http_update_cache(*param1, param2, *param3);
}

KIO__SimpleJob* KIO_FileDelete(const QUrl* param1, int param2) {
    return KIO::file_delete(*param1, static_cast<KIO::JobFlags>(param2));
}
