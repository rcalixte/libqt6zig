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

void KIO__SimpleJob_Delete(KIO__SimpleJob* self) {
    delete self;
}

KIO__SimpleJob* KIO_Rmdir(const QUrl* url) {
    return KIO::rmdir(*url);
}

KIO__SimpleJob* KIO_Chown(const QUrl* url, const libqt_string owner, const libqt_string group) {
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return KIO::chown(*url, owner_QString, group_QString);
}

KIO__SimpleJob* KIO_SetModificationTime(const QUrl* url, const QDateTime* mtime) {
    return KIO::setModificationTime(*url, *mtime);
}

KIO__SimpleJob* KIO_Rename(const QUrl* src, const QUrl* dest, int flags) {
    return KIO::rename(*src, *dest, static_cast<KIO::JobFlags>(flags));
}

KIO__SimpleJob* KIO_Symlink(const libqt_string target, const QUrl* dest, int flags) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    return KIO::symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags));
}

KIO__SimpleJob* KIO_Special(const QUrl* url, const libqt_string data, int flags) {
    QByteArray data_QByteArray(data.data, data.len);
    return KIO::special(*url, data_QByteArray, static_cast<KIO::JobFlags>(flags));
}

KIO__SimpleJob* KIO_Mount(bool ro, const libqt_string fstype, const libqt_string dev, const libqt_string point, int flags) {
    QByteArray fstype_QByteArray(fstype.data, fstype.len);
    QString dev_QString = QString::fromUtf8(dev.data, dev.len);
    QString point_QString = QString::fromUtf8(point.data, point.len);
    return KIO::mount(ro, fstype_QByteArray, dev_QString, point_QString, static_cast<KIO::JobFlags>(flags));
}

KIO__SimpleJob* KIO_Unmount(const libqt_string point, int flags) {
    QString point_QString = QString::fromUtf8(point.data, point.len);
    return KIO::unmount(point_QString, static_cast<KIO::JobFlags>(flags));
}

KIO__SimpleJob* KIO_HttpUpdateCache(const QUrl* url, bool no_cache, const QDateTime* expireDate) {
    return KIO::http_update_cache(*url, no_cache, *expireDate);
}

KIO__SimpleJob* KIO_FileDelete(const QUrl* src, int flags) {
    return KIO::file_delete(*src, static_cast<KIO::JobFlags>(flags));
}
