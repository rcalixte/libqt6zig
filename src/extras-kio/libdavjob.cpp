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

libqt_string KIO__DavJob_ResponseData(const KIO__DavJob* self) {
    QByteArray _qb = self->responseData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KIO__DavJob_Delete(KIO__DavJob* self) {
    delete self;
}

KIO__DavJob* KIO_DavPropFind(const QUrl* url, const libqt_string properties, const libqt_string depth, int flags) {
    QString properties_QString = QString::fromUtf8(properties.data, properties.len);
    QString depth_QString = QString::fromUtf8(depth.data, depth.len);
    return KIO::davPropFind(*url, properties_QString, depth_QString, static_cast<KIO::JobFlags>(flags));
}

KIO__DavJob* KIO_DavPropPatch(const QUrl* url, const libqt_string properties, int flags) {
    QString properties_QString = QString::fromUtf8(properties.data, properties.len);
    return KIO::davPropPatch(*url, properties_QString, static_cast<KIO::JobFlags>(flags));
}

KIO__DavJob* KIO_DavSearch(const QUrl* url, const libqt_string nsURI, const libqt_string qName, const libqt_string query, int flags) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    QString query_QString = QString::fromUtf8(query.data, query.len);
    return KIO::davSearch(*url, nsURI_QString, qName_QString, query_QString, static_cast<KIO::JobFlags>(flags));
}

KIO__DavJob* KIO_DavReport(const QUrl* url, const libqt_string report, const libqt_string depth, int flags) {
    QString report_QString = QString::fromUtf8(report.data, report.len);
    QString depth_QString = QString::fromUtf8(depth.data, depth.len);
    return KIO::davReport(*url, report_QString, depth_QString, static_cast<KIO::JobFlags>(flags));
}
