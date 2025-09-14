#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateExtension
#include <QList>
#include <QUrl>
#include <jobuidelegateextension.h>
#include "libjobuidelegateextension.h"
#include "libjobuidelegateextension.hxx"

bool KIO__JobUiDelegateExtension_AskDeleteConfirmation(KIO__JobUiDelegateExtension* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return self->askDeleteConfirmation(urls_QList, static_cast<KIO::JobUiDelegateExtension::DeletionType>(deletionType), static_cast<KIO::JobUiDelegateExtension::ConfirmationType>(confirmationType));
}

void KIO__JobUiDelegateExtension_UpdateUrlInClipboard(KIO__JobUiDelegateExtension* self, const QUrl* src, const QUrl* dest) {
    self->updateUrlInClipboard(*src, *dest);
}

KIO__JobUiDelegateExtension* KIO_DefaultJobUiDelegateExtension() {
    return KIO::defaultJobUiDelegateExtension();
}

void KIO_SetDefaultJobUiDelegateExtension(KIO__JobUiDelegateExtension* param1) {
    KIO::setDefaultJobUiDelegateExtension(param1);
}
