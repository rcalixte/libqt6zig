#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__UserMetaData
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <usermetadata.h>
#include "libusermetadata.h"
#include "libusermetadata.hxx"

KFileMetaData__UserMetaData* KFileMetaData__UserMetaData_new(const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    return new KFileMetaData::UserMetaData(filePath_QString);
}

KFileMetaData__UserMetaData* KFileMetaData__UserMetaData_new2(const KFileMetaData__UserMetaData* rhs) {
    return new KFileMetaData::UserMetaData(*rhs);
}

void KFileMetaData__UserMetaData_OperatorAssign(KFileMetaData__UserMetaData* self, const KFileMetaData__UserMetaData* rhs) {
    self->operator=(*rhs);
}

libqt_string KFileMetaData__UserMetaData_FilePath(const KFileMetaData__UserMetaData* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KFileMetaData__UserMetaData_IsSupported(const KFileMetaData__UserMetaData* self) {
    return self->isSupported();
}

int KFileMetaData__UserMetaData_SetTags(KFileMetaData__UserMetaData* self, const libqt_list /* of libqt_string */ tags) {
    QList<QString> tags_QList;
    tags_QList.reserve(tags.len);
    libqt_string* tags_arr = static_cast<libqt_string*>(tags.data);
    for (size_t i = 0; i < tags.len; ++i) {
        QString tags_arr_i_QString = QString::fromUtf8(tags_arr[i].data, tags_arr[i].len);
        tags_QList.push_back(tags_arr_i_QString);
    }
    return static_cast<int>(self->setTags(tags_QList));
}

libqt_list /* of libqt_string */ KFileMetaData__UserMetaData_Tags(const KFileMetaData__UserMetaData* self) {
    QList<QString> _ret = self->tags();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

int KFileMetaData__UserMetaData_Rating(const KFileMetaData__UserMetaData* self) {
    return self->rating();
}

int KFileMetaData__UserMetaData_SetRating(KFileMetaData__UserMetaData* self, int rating) {
    return static_cast<int>(self->setRating(static_cast<int>(rating)));
}

libqt_string KFileMetaData__UserMetaData_UserComment(const KFileMetaData__UserMetaData* self) {
    QString _ret = self->userComment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFileMetaData__UserMetaData_SetUserComment(KFileMetaData__UserMetaData* self, const libqt_string userComment) {
    QString userComment_QString = QString::fromUtf8(userComment.data, userComment.len);
    return static_cast<int>(self->setUserComment(userComment_QString));
}

QUrl* KFileMetaData__UserMetaData_OriginUrl(const KFileMetaData__UserMetaData* self) {
    return new QUrl(self->originUrl());
}

int KFileMetaData__UserMetaData_SetOriginUrl(KFileMetaData__UserMetaData* self, const QUrl* originUrl) {
    return static_cast<int>(self->setOriginUrl(*originUrl));
}

libqt_string KFileMetaData__UserMetaData_OriginEmailSubject(const KFileMetaData__UserMetaData* self) {
    QString _ret = self->originEmailSubject();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFileMetaData__UserMetaData_SetOriginEmailSubject(KFileMetaData__UserMetaData* self, const libqt_string originEmailSubject) {
    QString originEmailSubject_QString = QString::fromUtf8(originEmailSubject.data, originEmailSubject.len);
    return static_cast<int>(self->setOriginEmailSubject(originEmailSubject_QString));
}

libqt_string KFileMetaData__UserMetaData_OriginEmailSender(const KFileMetaData__UserMetaData* self) {
    QString _ret = self->originEmailSender();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFileMetaData__UserMetaData_SetOriginEmailSender(KFileMetaData__UserMetaData* self, const libqt_string originEmailSender) {
    QString originEmailSender_QString = QString::fromUtf8(originEmailSender.data, originEmailSender.len);
    return static_cast<int>(self->setOriginEmailSender(originEmailSender_QString));
}

libqt_string KFileMetaData__UserMetaData_OriginEmailMessageId(const KFileMetaData__UserMetaData* self) {
    QString _ret = self->originEmailMessageId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFileMetaData__UserMetaData_SetOriginEmailMessageId(KFileMetaData__UserMetaData* self, const libqt_string originEmailMessageId) {
    QString originEmailMessageId_QString = QString::fromUtf8(originEmailMessageId.data, originEmailMessageId.len);
    return static_cast<int>(self->setOriginEmailMessageId(originEmailMessageId_QString));
}

libqt_string KFileMetaData__UserMetaData_Attribute(KFileMetaData__UserMetaData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->attribute(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileMetaData__UserMetaData_Attribute2(const KFileMetaData__UserMetaData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->attribute(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFileMetaData__UserMetaData_SetAttribute(KFileMetaData__UserMetaData* self, const libqt_string name, const libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return static_cast<int>(self->setAttribute(name_QString, value_QString));
}

bool KFileMetaData__UserMetaData_HasAttribute(KFileMetaData__UserMetaData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasAttribute(name_QString);
}

bool KFileMetaData__UserMetaData_HasAttribute2(const KFileMetaData__UserMetaData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasAttribute(name_QString);
}

uint32_t KFileMetaData__UserMetaData_QueryAttributes(const KFileMetaData__UserMetaData* self) {
    return static_cast<uint32_t>(self->queryAttributes());
}

uint32_t KFileMetaData__UserMetaData_QueryAttributes1(const KFileMetaData__UserMetaData* self, uint32_t attributes) {
    return static_cast<uint32_t>(self->queryAttributes(static_cast<KFileMetaData::UserMetaData::Attributes>(attributes)));
}

void KFileMetaData__UserMetaData_Delete(KFileMetaData__UserMetaData* self) {
    delete self;
}
