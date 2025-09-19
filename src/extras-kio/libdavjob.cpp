#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DavJob
#include <KIO/Job>
#include <KIO/SimpleJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__TransferJob
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
#include <davjob.h>
#include "libdavjob.h"
#include "libdavjob.hxx"

QMetaObject* KIO__DavJob_MetaObject(const KIO__DavJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DavJob_Metacast(KIO__DavJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DavJob_Metacall(KIO__DavJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__DavJob_Tr(const char* s) {
    QString _ret = KIO::DavJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DavJob_ResponseData(const KIO__DavJob* self) {
    QByteArray _qb = self->responseData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DavJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::DavJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DavJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::DavJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DavJob_Delete(KIO__DavJob* self) {
    delete self;
}

KIO__DavJob* KIO_DavPropFind(const QUrl* param1, const libqt_string param2, const libqt_string param3, int param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KIO::davPropFind(*param1, param2_QString, param3_QString, static_cast<KIO::JobFlags>(param4));
}

KIO__DavJob* KIO_DavPropPatch(const QUrl* param1, const libqt_string param2, int param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return KIO::davPropPatch(*param1, param2_QString, static_cast<KIO::JobFlags>(param3));
}

KIO__DavJob* KIO_DavSearch(const QUrl* param1, const libqt_string param2, const libqt_string param3, const libqt_string param4, int param5) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    QString param4_QString = QString::fromUtf8(param4.data, param4.len);
    return KIO::davSearch(*param1, param2_QString, param3_QString, param4_QString, static_cast<KIO::JobFlags>(param5));
}

KIO__DavJob* KIO_DavReport(const QUrl* param1, const libqt_string param2, const libqt_string param3, int param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KIO::davReport(*param1, param2_QString, param3_QString, static_cast<KIO::JobFlags>(param4));
}
