#include <KBookmark>
#define WORKAROUND_INNER_CLASS_DEFINITION_KBookmark__List
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <QList>
#include <QMimeData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kbookmark.h>
#include "libkbookmark.h"
#include "libkbookmark.hxx"

KBookmark* KBookmark_new() {
    return new KBookmark();
}

KBookmark* KBookmark_new2(const QDomElement* elem) {
    return new KBookmark(*elem);
}

KBookmark* KBookmark_StandaloneBookmark(const libqt_string text, const QUrl* url, const libqt_string icon) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new KBookmark(KBookmark::standaloneBookmark(text_QString, *url, icon_QString));
}

bool KBookmark_IsGroup(const KBookmark* self) {
    return self->isGroup();
}

bool KBookmark_IsSeparator(const KBookmark* self) {
    return self->isSeparator();
}

bool KBookmark_IsNull(const KBookmark* self) {
    return self->isNull();
}

bool KBookmark_HasParent(const KBookmark* self) {
    return self->hasParent();
}

libqt_string KBookmark_Text(const KBookmark* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmark_FullText(const KBookmark* self) {
    QString _ret = self->fullText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmark_SetFullText(KBookmark* self, const libqt_string fullText) {
    QString fullText_QString = QString::fromUtf8(fullText.data, fullText.len);
    self->setFullText(fullText_QString);
}

QUrl* KBookmark_Url(const KBookmark* self) {
    return new QUrl(self->url());
}

void KBookmark_SetUrl(KBookmark* self, const QUrl* url) {
    self->setUrl(*url);
}

libqt_string KBookmark_Icon(const KBookmark* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmark_SetIcon(KBookmark* self, const libqt_string icon) {
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    self->setIcon(icon_QString);
}

libqt_string KBookmark_Description(const KBookmark* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmark_SetDescription(KBookmark* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string KBookmark_MimeType(const KBookmark* self) {
    QString _ret = self->mimeType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmark_SetMimeType(KBookmark* self, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setMimeType(mimeType_QString);
}

bool KBookmark_ShowInToolbar(const KBookmark* self) {
    return self->showInToolbar();
}

void KBookmark_SetShowInToolbar(KBookmark* self, bool show) {
    self->setShowInToolbar(show);
}

KBookmarkGroup* KBookmark_ParentGroup(const KBookmark* self) {
    return new KBookmarkGroup(self->parentGroup());
}

KBookmarkGroup* KBookmark_ToGroup(const KBookmark* self) {
    return new KBookmarkGroup(self->toGroup());
}

libqt_string KBookmark_Address(const KBookmark* self) {
    QString _ret = self->address();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KBookmark_PositionInParent(const KBookmark* self) {
    return self->positionInParent();
}

QDomElement* KBookmark_InternalElement(const KBookmark* self) {
    return new QDomElement(self->internalElement());
}

void KBookmark_UpdateAccessMetadata(KBookmark* self) {
    self->updateAccessMetadata();
}

libqt_string KBookmark_ParentAddress(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString _ret = KBookmark::parentAddress(address_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int KBookmark_PositionInParent2(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return static_cast<unsigned int>(KBookmark::positionInParent(address_QString));
}

libqt_string KBookmark_PreviousAddress(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString _ret = KBookmark::previousAddress(address_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmark_NextAddress(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    QString _ret = KBookmark::nextAddress(address_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmark_CommonParent(const libqt_string A, const libqt_string B) {
    QString A_QString = QString::fromUtf8(A.data, A.len);
    QString B_QString = QString::fromUtf8(B.data, B.len);
    QString _ret = KBookmark::commonParent(A_QString, B_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDomNode* KBookmark_MetaData(const KBookmark* self, const libqt_string owner, bool create) {
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    return new QDomNode(self->metaData(owner_QString, create));
}

libqt_string KBookmark_MetaDataItem(const KBookmark* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->metaDataItem(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBookmark_SetMetaDataItem(KBookmark* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setMetaDataItem(key_QString, value_QString);
}

void KBookmark_PopulateMimeData(const KBookmark* self, QMimeData* mimeData) {
    self->populateMimeData(mimeData);
}

bool KBookmark_OperatorEqual(const KBookmark* self, const KBookmark* rhs) {
    return (*self == *rhs);
}

void KBookmark_SetMetaDataItem3(KBookmark* self, const libqt_string key, const libqt_string value, int mode) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setMetaDataItem(key_QString, value_QString, static_cast<KBookmark::MetaDataOverwriteMode>(mode));
}

void KBookmark_Delete(KBookmark* self) {
    delete self;
}

KBookmarkGroup* KBookmarkGroup_new() {
    return new KBookmarkGroup();
}

KBookmarkGroup* KBookmarkGroup_new2(const QDomElement* elem) {
    return new KBookmarkGroup(*elem);
}

bool KBookmarkGroup_IsOpen(const KBookmarkGroup* self) {
    return self->isOpen();
}

KBookmark* KBookmarkGroup_First(const KBookmarkGroup* self) {
    return new KBookmark(self->first());
}

KBookmark* KBookmarkGroup_Previous(const KBookmarkGroup* self, const KBookmark* current) {
    return new KBookmark(self->previous(*current));
}

KBookmark* KBookmarkGroup_Next(const KBookmarkGroup* self, const KBookmark* current) {
    return new KBookmark(self->next(*current));
}

int KBookmarkGroup_IndexOf(const KBookmarkGroup* self, const KBookmark* child) {
    return self->indexOf(*child);
}

KBookmarkGroup* KBookmarkGroup_CreateNewFolder(KBookmarkGroup* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new KBookmarkGroup(self->createNewFolder(text_QString));
}

KBookmark* KBookmarkGroup_CreateNewSeparator(KBookmarkGroup* self) {
    return new KBookmark(self->createNewSeparator());
}

KBookmark* KBookmarkGroup_AddBookmark(KBookmarkGroup* self, const KBookmark* bm) {
    return new KBookmark(self->addBookmark(*bm));
}

KBookmark* KBookmarkGroup_AddBookmark2(KBookmarkGroup* self, const libqt_string text, const QUrl* url, const libqt_string icon) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new KBookmark(self->addBookmark(text_QString, *url, icon_QString));
}

bool KBookmarkGroup_MoveBookmark(KBookmarkGroup* self, const KBookmark* bookmark, const KBookmark* after) {
    return self->moveBookmark(*bookmark, *after);
}

void KBookmarkGroup_DeleteBookmark(KBookmarkGroup* self, const KBookmark* bk) {
    self->deleteBookmark(*bk);
}

bool KBookmarkGroup_IsToolbarGroup(const KBookmarkGroup* self) {
    return self->isToolbarGroup();
}

QDomElement* KBookmarkGroup_FindToolbar(const KBookmarkGroup* self) {
    return new QDomElement(self->findToolbar());
}

libqt_list /* of QUrl* */ KBookmarkGroup_GroupUrlList(const KBookmarkGroup* self) {
    QList<QUrl> _ret = self->groupUrlList();
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

void KBookmarkGroup_Delete(KBookmarkGroup* self) {
    delete self;
}

KBookmark__List* KBookmark__List_new() {
    return new KBookmark::List();
}

void KBookmark__List_PopulateMimeData(const KBookmark__List* self, QMimeData* mimeData) {
    self->populateMimeData(mimeData);
}

bool KBookmark__List_CanDecode(const QMimeData* mimeData) {
    return KBookmark::List::canDecode(mimeData);
}

libqt_list /* of libqt_string */ KBookmark__List_MimeDataTypes() {
    QList<QString> _ret = KBookmark::List::mimeDataTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KBookmark__List* KBookmark__List_FromMimeData(const QMimeData* mimeData, QDomDocument* parentDocument) {
    return new KBookmark::List(KBookmark::List::fromMimeData(mimeData, *parentDocument));
}

void KBookmark__List_Delete(KBookmark__List* self) {
    delete self;
}
