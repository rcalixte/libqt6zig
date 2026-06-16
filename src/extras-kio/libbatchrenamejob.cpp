#include <KCompositeJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__BatchRenameJob
#include <KIO/Job>
#include <KJob>
#include <QChar>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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

void KIO__BatchRenameJob_Delete(KIO__BatchRenameJob* self) {
    delete self;
}

KIO__BatchRenameJob* KIO_BatchRename(const libqt_list /* of QUrl* */ src, const libqt_string newName, int index, QChar* placeHolder, int flags) {
    QList<QUrl> src_QList;
    src_QList.reserve(src.len);
    QUrl** src_arr = static_cast<QUrl**>(src.data);
    for (size_t i = 0; i < src.len; ++i) {
        src_QList.push_back(*(src_arr[i]));
    }
    QString newName_QString = QString::fromUtf8(newName.data, newName.len);
    return KIO::batchRename(src_QList, newName_QString, static_cast<int>(index), *placeHolder, static_cast<KIO::JobFlags>(flags));
}
