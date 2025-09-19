#include <KACL>
#include <KFileItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileItem__MostLocalUrlResult
#include <KIO/UDSEntry>
#include <QDateTime>
#include <QList>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <kfileitem.h>
#include "libkfileitem.h"
#include "libkfileitem.hxx"

KFileItem* KFileItem_new() {
    return new KFileItem();
}

KFileItem* KFileItem_new2(const KIO__UDSEntry* entry, const QUrl* itemOrDirUrl) {
    return new KFileItem(*entry, *itemOrDirUrl);
}

KFileItem* KFileItem_new3(const QUrl* url) {
    return new KFileItem(*url);
}

KFileItem* KFileItem_new4(const QUrl* url, int mimeTypeDetermination) {
    return new KFileItem(*url, static_cast<KFileItem::MimeTypeDetermination>(mimeTypeDetermination));
}

KFileItem* KFileItem_new5(const KFileItem* param1) {
    return new KFileItem(*param1);
}

KFileItem* KFileItem_new6(const KIO__UDSEntry* entry, const QUrl* itemOrDirUrl, bool delayedMimeTypes) {
    return new KFileItem(*entry, *itemOrDirUrl, delayedMimeTypes);
}

KFileItem* KFileItem_new7(const KIO__UDSEntry* entry, const QUrl* itemOrDirUrl, bool delayedMimeTypes, bool urlIsDirectory) {
    return new KFileItem(*entry, *itemOrDirUrl, delayedMimeTypes, urlIsDirectory);
}

KFileItem* KFileItem_new8(const QUrl* url, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new KFileItem(*url, mimeType_QString);
}

KFileItem* KFileItem_new9(const QUrl* url, const libqt_string mimeType, mode_t mode) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return new KFileItem(*url, mimeType_QString, mode);
}

void KFileItem_OperatorAssign(KFileItem* self, const KFileItem* param1) {
    self->operator=(*param1);
}

void KFileItem_Refresh(KFileItem* self) {
    self->refresh();
}

void KFileItem_RefreshMimeType(KFileItem* self) {
    self->refreshMimeType();
}

void KFileItem_SetDelayedMimeTypes(KFileItem* self, bool b) {
    self->setDelayedMimeTypes(b);
}

QUrl* KFileItem_Url(const KFileItem* self) {
    return new QUrl(self->url());
}

void KFileItem_SetUrl(KFileItem* self, const QUrl* url) {
    self->setUrl(*url);
}

void KFileItem_SetLocalPath(KFileItem* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setLocalPath(path_QString);
}

void KFileItem_SetName(KFileItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

mode_t KFileItem_Permissions(const KFileItem* self) {
    return self->permissions();
}

libqt_string KFileItem_PermissionsString(const KFileItem* self) {
    QString _ret = self->permissionsString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFileItem_HasExtendedACL(const KFileItem* self) {
    return self->hasExtendedACL();
}

KACL* KFileItem_ACL(const KFileItem* self) {
    return new KACL(self->ACL());
}

KACL* KFileItem_DefaultACL(const KFileItem* self) {
    return new KACL(self->defaultACL());
}

mode_t KFileItem_Mode(const KFileItem* self) {
    return self->mode();
}

int KFileItem_UserId(const KFileItem* self) {
    return self->userId();
}

int KFileItem_GroupId(const KFileItem* self) {
    return self->groupId();
}

libqt_string KFileItem_User(const KFileItem* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItem_Group(const KFileItem* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFileItem_IsLink(const KFileItem* self) {
    return self->isLink();
}

bool KFileItem_IsDir(const KFileItem* self) {
    return self->isDir();
}

bool KFileItem_IsFile(const KFileItem* self) {
    return self->isFile();
}

bool KFileItem_IsReadable(const KFileItem* self) {
    return self->isReadable();
}

bool KFileItem_IsWritable(const KFileItem* self) {
    return self->isWritable();
}

bool KFileItem_IsHidden(const KFileItem* self) {
    return self->isHidden();
}

bool KFileItem_IsSlow(const KFileItem* self) {
    return self->isSlow();
}

bool KFileItem_IsDesktopFile(const KFileItem* self) {
    return self->isDesktopFile();
}

libqt_string KFileItem_LinkDest(const KFileItem* self) {
    QString _ret = self->linkDest();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KFileItem_TargetUrl(const KFileItem* self) {
    return new QUrl(self->targetUrl());
}

libqt_string KFileItem_LocalPath(const KFileItem* self) {
    QString _ret = self->localPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long KFileItem_Size(const KFileItem* self) {
    return static_cast<unsigned long long>(self->size());
}

unsigned long long KFileItem_RecursiveSize(const KFileItem* self) {
    return static_cast<unsigned long long>(self->recursiveSize());
}

QDateTime* KFileItem_Time(const KFileItem* self, int which) {
    return new QDateTime(self->time(static_cast<KFileItem::FileTimes>(which)));
}

libqt_string KFileItem_TimeString(const KFileItem* self) {
    QString _ret = self->timeString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFileItem_IsLocalFile(const KFileItem* self) {
    return self->isLocalFile();
}

libqt_string KFileItem_Text(const KFileItem* self) {
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

libqt_string KFileItem_Name(const KFileItem* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItem_Mimetype(const KFileItem* self) {
    QString _ret = self->mimetype();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMimeType* KFileItem_DetermineMimeType(const KFileItem* self) {
    return new QMimeType(self->determineMimeType());
}

QMimeType* KFileItem_CurrentMimeType(const KFileItem* self) {
    return new QMimeType(self->currentMimeType());
}

bool KFileItem_IsFinalIconKnown(const KFileItem* self) {
    return self->isFinalIconKnown();
}

bool KFileItem_IsMimeTypeKnown(const KFileItem* self) {
    return self->isMimeTypeKnown();
}

libqt_string KFileItem_MimeComment(const KFileItem* self) {
    QString _ret = self->mimeComment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItem_IconName(const KFileItem* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KFileItem_Overlays(const KFileItem* self) {
    QList<QString> _ret = self->overlays();
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

libqt_string KFileItem_Comment(const KFileItem* self) {
    QString _ret = self->comment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItem_GetStatusBarInfo(const KFileItem* self) {
    QString _ret = self->getStatusBarInfo();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__UDSEntry* KFileItem_Entry(const KFileItem* self) {
    return new KIO::UDSEntry(self->entry());
}

bool KFileItem_IsRegularFile(const KFileItem* self) {
    return self->isRegularFile();
}

libqt_string KFileItem_Suffix(const KFileItem* self) {
    QString _ret = self->suffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFileItem_Cmp(const KFileItem* self, const KFileItem* item) {
    return self->cmp(*item);
}

bool KFileItem_OperatorEqual(const KFileItem* self, const KFileItem* other) {
    return (*self == *other);
}

bool KFileItem_OperatorNotEqual(const KFileItem* self, const KFileItem* other) {
    return (*self != *other);
}

bool KFileItem_OperatorLesser(const KFileItem* self, const KFileItem* other) {
    return (*self < *other);
}

bool KFileItem_OperatorLesser2(const KFileItem* self, const QUrl* other) {
    return (*self < *other);
}

QVariant* KFileItem_ToQVariant(const KFileItem* self) {
    return new QVariant(self->operator QVariant());
}

QUrl* KFileItem_MostLocalUrl(const KFileItem* self) {
    return new QUrl(self->mostLocalUrl());
}

KFileItem__MostLocalUrlResult* KFileItem_IsMostLocalUrl(const KFileItem* self) {
    return new KFileItem::MostLocalUrlResult(self->isMostLocalUrl());
}

bool KFileItem_IsNull(const KFileItem* self) {
    return self->isNull();
}

bool KFileItem_Exists(const KFileItem* self) {
    return self->exists();
}

bool KFileItem_IsExecutable(const KFileItem* self) {
    return self->isExecutable();
}

libqt_string KFileItem_TimeString1(const KFileItem* self, int which) {
    QString _ret = self->timeString(static_cast<KFileItem::FileTimes>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItem_Name1(const KFileItem* self, bool lowerCase) {
    QString _ret = self->name(lowerCase);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KFileItem_MostLocalUrl1(const KFileItem* self, bool* local) {
    return new QUrl(self->mostLocalUrl(local));
}

void KFileItem_Delete(KFileItem* self) {
    delete self;
}

KFileItemList* KFileItemList_new() {
    return new KFileItemList();
}

KFileItemList* KFileItemList_new2(const libqt_list /* of KFileItem* */ items) {
    QList<KFileItem> items_QList;
    items_QList.reserve(items.len);
    KFileItem** items_arr = static_cast<KFileItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(*(items_arr[i]));
    }
    return new KFileItemList(items_QList);
}

KFileItem* KFileItemList_FindByName(const KFileItemList* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new KFileItem(self->findByName(fileName_QString));
}

KFileItem* KFileItemList_FindByUrl(const KFileItemList* self, const QUrl* url) {
    return new KFileItem(self->findByUrl(*url));
}

libqt_list /* of QUrl* */ KFileItemList_UrlList(const KFileItemList* self) {
    QList<QUrl> _ret = self->urlList();
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

libqt_list /* of QUrl* */ KFileItemList_TargetUrlList(const KFileItemList* self) {
    QList<QUrl> _ret = self->targetUrlList();
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

void KFileItemList_Delete(KFileItemList* self) {
    delete self;
}

KFileItem__MostLocalUrlResult* KFileItem__MostLocalUrlResult_new(const KFileItem__MostLocalUrlResult* param1) {
    return new KFileItem::MostLocalUrlResult(*param1);
}

QUrl* KFileItem__MostLocalUrlResult_Url(const KFileItem__MostLocalUrlResult* self) {
    return new QUrl(self->url);
}

void KFileItem__MostLocalUrlResult_SetUrl(KFileItem__MostLocalUrlResult* self, QUrl* url) {
    self->url = *url;
}

bool KFileItem__MostLocalUrlResult_Local(const KFileItem__MostLocalUrlResult* self) {
    return self->local;
}

void KFileItem__MostLocalUrlResult_SetLocal(KFileItem__MostLocalUrlResult* self, bool local) {
    self->local = local;
}

void KFileItem__MostLocalUrlResult_OperatorAssign(KFileItem__MostLocalUrlResult* self, const KFileItem__MostLocalUrlResult* param1) {
    self->operator=(*param1);
}

void KFileItem__MostLocalUrlResult_Delete(KFileItem__MostLocalUrlResult* self) {
    delete self;
}
