#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__KnowledgeBaseEntry
#include <QDateTime>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <knowledgebaseentry.h>
#include "libknowledgebaseentry.h"
#include "libknowledgebaseentry.hxx"

Attica__KnowledgeBaseEntry* Attica__KnowledgeBaseEntry_new() {
    return new Attica::KnowledgeBaseEntry();
}

Attica__KnowledgeBaseEntry* Attica__KnowledgeBaseEntry_new2(const Attica__KnowledgeBaseEntry* other) {
    return new Attica::KnowledgeBaseEntry(*other);
}

void Attica__KnowledgeBaseEntry_OperatorAssign(Attica__KnowledgeBaseEntry* self, const Attica__KnowledgeBaseEntry* other) {
    self->operator=(*other);
}

void Attica__KnowledgeBaseEntry_SetId(Attica__KnowledgeBaseEntry* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__KnowledgeBaseEntry_Id(const Attica__KnowledgeBaseEntry* self) {
    QString _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__KnowledgeBaseEntry_SetContentId(Attica__KnowledgeBaseEntry* self, int id) {
    self->setContentId(static_cast<int>(id));
}

int Attica__KnowledgeBaseEntry_ContentId(const Attica__KnowledgeBaseEntry* self) {
    return self->contentId();
}

void Attica__KnowledgeBaseEntry_SetUser(Attica__KnowledgeBaseEntry* self, const libqt_string user) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    self->setUser(user_QString);
}

libqt_string Attica__KnowledgeBaseEntry_User(const Attica__KnowledgeBaseEntry* self) {
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

void Attica__KnowledgeBaseEntry_SetStatus(Attica__KnowledgeBaseEntry* self, const libqt_string status) {
    QString status_QString = QString::fromUtf8(status.data, status.len);
    self->setStatus(status_QString);
}

libqt_string Attica__KnowledgeBaseEntry_Status(const Attica__KnowledgeBaseEntry* self) {
    QString _ret = self->status();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__KnowledgeBaseEntry_SetChanged(Attica__KnowledgeBaseEntry* self, const QDateTime* changed) {
    self->setChanged(*changed);
}

QDateTime* Attica__KnowledgeBaseEntry_Changed(const Attica__KnowledgeBaseEntry* self) {
    return new QDateTime(self->changed());
}

void Attica__KnowledgeBaseEntry_SetName(Attica__KnowledgeBaseEntry* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__KnowledgeBaseEntry_Name(const Attica__KnowledgeBaseEntry* self) {
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

void Attica__KnowledgeBaseEntry_SetDescription(Attica__KnowledgeBaseEntry* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string Attica__KnowledgeBaseEntry_Description(const Attica__KnowledgeBaseEntry* self) {
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

void Attica__KnowledgeBaseEntry_SetAnswer(Attica__KnowledgeBaseEntry* self, const libqt_string answer) {
    QString answer_QString = QString::fromUtf8(answer.data, answer.len);
    self->setAnswer(answer_QString);
}

libqt_string Attica__KnowledgeBaseEntry_Answer(const Attica__KnowledgeBaseEntry* self) {
    QString _ret = self->answer();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__KnowledgeBaseEntry_SetComments(Attica__KnowledgeBaseEntry* self, int comments) {
    self->setComments(static_cast<int>(comments));
}

int Attica__KnowledgeBaseEntry_Comments(const Attica__KnowledgeBaseEntry* self) {
    return self->comments();
}

void Attica__KnowledgeBaseEntry_SetDetailPage(Attica__KnowledgeBaseEntry* self, const QUrl* detailPage) {
    self->setDetailPage(*detailPage);
}

QUrl* Attica__KnowledgeBaseEntry_DetailPage(const Attica__KnowledgeBaseEntry* self) {
    return new QUrl(self->detailPage());
}

void Attica__KnowledgeBaseEntry_AddExtendedAttribute(Attica__KnowledgeBaseEntry* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addExtendedAttribute(key_QString, value_QString);
}

libqt_string Attica__KnowledgeBaseEntry_ExtendedAttribute(const Attica__KnowledgeBaseEntry* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->extendedAttribute(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of libqt_string to libqt_string */ Attica__KnowledgeBaseEntry_ExtendedAttributes(const Attica__KnowledgeBaseEntry* self) {
    QMap<QString, QString> _ret = self->extendedAttributes();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool Attica__KnowledgeBaseEntry_IsValid(const Attica__KnowledgeBaseEntry* self) {
    return self->isValid();
}

void Attica__KnowledgeBaseEntry_Delete(Attica__KnowledgeBaseEntry* self) {
    delete self;
}
