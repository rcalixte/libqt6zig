#include <KDialogJobUiDelegate>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegate
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateExtension
#include <KJob>
#include <KJobUiDelegate>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWidget>
#include <jobuidelegate.h>
#include "libjobuidelegate.h"
#include "libjobuidelegate.hxx"

QMetaObject* KIO__JobUiDelegate_MetaObject(const KIO__JobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__JobUiDelegate_Metacast(KIO__JobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__JobUiDelegate_Metacall(KIO__JobUiDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void KIO__JobUiDelegate_SetWindow(KIO__JobUiDelegate* self, QWidget* window) {
    self->setWindow(window);
}

void KIO__JobUiDelegate_UnregisterWindow(QWidget* window) {
    KIO::JobUiDelegate::unregisterWindow(window);
}

bool KIO__JobUiDelegate_AskDeleteConfirmation(KIO__JobUiDelegate* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return self->askDeleteConfirmation(urls_QList, static_cast<KIO::JobUiDelegateExtension::DeletionType>(deletionType), static_cast<KIO::JobUiDelegateExtension::ConfirmationType>(confirmationType));
}

void KIO__JobUiDelegate_UpdateUrlInClipboard(KIO__JobUiDelegate* self, const QUrl* src, const QUrl* dest) {
    self->updateUrlInClipboard(*src, *dest);
}

void KIO__JobUiDelegate_Delete(KIO__JobUiDelegate* self) {
    delete self;
}
