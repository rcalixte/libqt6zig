#include <KFileItemListProperties>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kfileitemlistproperties.h>
#include "libkfileitemlistproperties.h"
#include "libkfileitemlistproperties.hxx"

KFileItemListProperties* KFileItemListProperties_new() {
    return new KFileItemListProperties();
}

KFileItemListProperties* KFileItemListProperties_new2(const KFileItemList* items) {
    return new KFileItemListProperties(*items);
}

KFileItemListProperties* KFileItemListProperties_new3(const KFileItemListProperties* param1) {
    return new KFileItemListProperties(*param1);
}

void KFileItemListProperties_OperatorAssign(KFileItemListProperties* self, const KFileItemListProperties* other) {
    self->operator=(*other);
}

void KFileItemListProperties_SetItems(KFileItemListProperties* self, const KFileItemList* items) {
    self->setItems(*items);
}

bool KFileItemListProperties_SupportsReading(const KFileItemListProperties* self) {
    return self->supportsReading();
}

bool KFileItemListProperties_SupportsDeleting(const KFileItemListProperties* self) {
    return self->supportsDeleting();
}

bool KFileItemListProperties_SupportsWriting(const KFileItemListProperties* self) {
    return self->supportsWriting();
}

bool KFileItemListProperties_SupportsMoving(const KFileItemListProperties* self) {
    return self->supportsMoving();
}

bool KFileItemListProperties_IsLocal(const KFileItemListProperties* self) {
    return self->isLocal();
}

libqt_list /* of QUrl* */ KFileItemListProperties_UrlList(const KFileItemListProperties* self) {
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

bool KFileItemListProperties_IsDirectory(const KFileItemListProperties* self) {
    return self->isDirectory();
}

bool KFileItemListProperties_IsFile(const KFileItemListProperties* self) {
    return self->isFile();
}

libqt_string KFileItemListProperties_MimeType(const KFileItemListProperties* self) {
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

libqt_string KFileItemListProperties_MimeGroup(const KFileItemListProperties* self) {
    QString _ret = self->mimeGroup();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileItemListProperties_Delete(KFileItemListProperties* self) {
    delete self;
}
