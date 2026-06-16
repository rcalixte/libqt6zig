#include <KCompositeJob>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__RestoreJob
#include <KJob>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QUrl>
#include <restorejob.h>
#include "librestorejob.h"
#include "librestorejob.hxx"

QMetaObject* KIO__RestoreJob_MetaObject(const KIO__RestoreJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__RestoreJob_Metacast(KIO__RestoreJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__RestoreJob_Metacall(KIO__RestoreJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_list /* of QUrl* */ KIO__RestoreJob_TrashUrls(const KIO__RestoreJob* self) {
    QList<QUrl> _ret = self->trashUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KIO__RestoreJob_Delete(KIO__RestoreJob* self) {
    delete self;
}

KIO__RestoreJob* KIO_RestoreFromTrash(const libqt_list /* of QUrl* */ urls, int flags) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return KIO::restoreFromTrash(urls_QList, static_cast<KIO::JobFlags>(flags));
}
