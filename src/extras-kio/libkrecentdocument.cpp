#include <KRecentDocument>
#include <QDateTime>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <krecentdocument.h>
#include "libkrecentdocument.h"
#include "libkrecentdocument.hxx"

KRecentDocument* KRecentDocument_new(const KRecentDocument* other) {
    return new KRecentDocument(*other);
}

KRecentDocument* KRecentDocument_new2(KRecentDocument* other) {
    return new KRecentDocument(std::move(*other));
}

void KRecentDocument_CopyAssign(KRecentDocument* self, KRecentDocument* other) {
    *self = *other;
}

void KRecentDocument_MoveAssign(KRecentDocument* self, KRecentDocument* other) {
    *self = std::move(*other);
}

libqt_list /* of QUrl* */ KRecentDocument_RecentUrls() {
    QList<QUrl> _ret = KRecentDocument::recentUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KRecentDocument_Add(const QUrl* url) {
    KRecentDocument::add(*url);
}

void KRecentDocument_Add2(const QUrl* url, libqt_list /* of int */ groups) {
    QList<KRecentDocument::RecentDocumentGroup> groups_QList;
    groups_QList.reserve(groups.len);
    int* groups_arr = static_cast<int*>(groups.data);
    for (size_t i = 0; i < groups.len; ++i) {
        groups_QList.push_back(static_cast<KRecentDocument::RecentDocumentGroup>(groups_arr[i]));
    }
    KRecentDocument::add(*url, groups_QList);
}

void KRecentDocument_Add3(const QUrl* url, const libqt_string desktopEntryName) {
    QString desktopEntryName_QString = QString::fromUtf8(desktopEntryName.data, desktopEntryName.len);
    KRecentDocument::add(*url, desktopEntryName_QString);
}

void KRecentDocument_Add4(const QUrl* url, const libqt_string desktopEntryName, libqt_list /* of int */ groups) {
    QString desktopEntryName_QString = QString::fromUtf8(desktopEntryName.data, desktopEntryName.len);
    QList<KRecentDocument::RecentDocumentGroup> groups_QList;
    groups_QList.reserve(groups.len);
    int* groups_arr = static_cast<int*>(groups.data);
    for (size_t i = 0; i < groups.len; ++i) {
        groups_QList.push_back(static_cast<KRecentDocument::RecentDocumentGroup>(groups_arr[i]));
    }
    KRecentDocument::add(*url, desktopEntryName_QString, groups_QList);
}

void KRecentDocument_RemoveFile(const QUrl* url) {
    KRecentDocument::removeFile(*url);
}

void KRecentDocument_RemoveApplication(const libqt_string desktopEntryName) {
    QString desktopEntryName_QString = QString::fromUtf8(desktopEntryName.data, desktopEntryName.len);
    KRecentDocument::removeApplication(desktopEntryName_QString);
}

void KRecentDocument_RemoveBookmarksModifiedSince(const QDateTime* since) {
    KRecentDocument::removeBookmarksModifiedSince(*since);
}

void KRecentDocument_Clear() {
    KRecentDocument::clear();
}

int KRecentDocument_MaximumItems() {
    return KRecentDocument::maximumItems();
}

void KRecentDocument_Delete(KRecentDocument* self) {
    delete self;
}
