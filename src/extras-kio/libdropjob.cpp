#include <KCompositeJob>
#include <KFileItemListProperties>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DropJob
#include <KIO/Job>
#include <KJob>
#include <QAction>
#include <QDropEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <dropjob.h>
#include "libdropjob.h"
#include "libdropjob.hxx"

QMetaObject* KIO__DropJob_MetaObject(const KIO__DropJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DropJob_Metacast(KIO__DropJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DropJob_Metacall(KIO__DropJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__DropJob_Tr(const char* s) {
    QString _ret = KIO::DropJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DropJob_SetApplicationActions(KIO__DropJob* self, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->setApplicationActions(actions_QList);
}

void KIO__DropJob_ShowMenu(KIO__DropJob* self, const QPoint* p) {
    self->showMenu(*p);
}

void KIO__DropJob_ItemCreated(KIO__DropJob* self, const QUrl* url) {
    self->itemCreated(*url);
}

void KIO__DropJob_Connect_ItemCreated(KIO__DropJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DropJob*, QUrl*) = reinterpret_cast<void (*)(KIO__DropJob*, QUrl*)>(slot);
    KIO::DropJob::connect(self, &KIO::DropJob::itemCreated, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KIO__DropJob_CopyJobStarted(KIO__DropJob* self, KIO__CopyJob* job) {
    self->copyJobStarted(job);
}

void KIO__DropJob_Connect_CopyJobStarted(KIO__DropJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DropJob*, KIO__CopyJob*) = reinterpret_cast<void (*)(KIO__DropJob*, KIO__CopyJob*)>(slot);
    KIO::DropJob::connect(self, &KIO::DropJob::copyJobStarted, [self, slotFunc](KIO::CopyJob* job) {
        KIO__CopyJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KIO__DropJob_PopupMenuAboutToShow(KIO__DropJob* self, const KFileItemListProperties* itemProps) {
    self->popupMenuAboutToShow(*itemProps);
}

void KIO__DropJob_Connect_PopupMenuAboutToShow(KIO__DropJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__DropJob*, KFileItemListProperties*) = reinterpret_cast<void (*)(KIO__DropJob*, KFileItemListProperties*)>(slot);
    KIO::DropJob::connect(self, &KIO::DropJob::popupMenuAboutToShow, [self, slotFunc](const KFileItemListProperties& itemProps) {
        const KFileItemListProperties& itemProps_ret = itemProps;
        // Cast returned reference into pointer
        KFileItemListProperties* sigval1 = const_cast<KFileItemListProperties*>(&itemProps_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KIO__DropJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::DropJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DropJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::DropJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DropJob_ShowMenu2(KIO__DropJob* self, const QPoint* p, QAction* atAction) {
    self->showMenu(*p, atAction);
}

void KIO__DropJob_Delete(KIO__DropJob* self) {
    delete self;
}

KIO__DropJob* KIO_Drop(const QDropEvent* param1, const QUrl* param2, int param3) {
    return KIO::drop(param1, *param2, static_cast<KIO::JobFlags>(param3));
}

KIO__DropJob* KIO_Drop2(const QDropEvent* param1, const QUrl* param2, int param3, int param4) {
    return KIO::drop(param1, *param2, static_cast<KIO::DropJobFlags>(param3), static_cast<KIO::JobFlags>(param4));
}
