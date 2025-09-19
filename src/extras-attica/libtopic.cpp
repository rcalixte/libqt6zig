#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Topic
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <topic.h>
#include "libtopic.h"
#include "libtopic.hxx"

Attica__Topic* Attica__Topic_new() {
    return new Attica::Topic();
}

Attica__Topic* Attica__Topic_new2(const Attica__Topic* other) {
    return new Attica::Topic(*other);
}

void Attica__Topic_OperatorAssign(Attica__Topic* self, const Attica__Topic* other) {
    self->operator=(*other);
}

void Attica__Topic_SetId(Attica__Topic* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Topic_Id(const Attica__Topic* self) {
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

void Attica__Topic_SetForumId(Attica__Topic* self, const libqt_string forumId) {
    QString forumId_QString = QString::fromUtf8(forumId.data, forumId.len);
    self->setForumId(forumId_QString);
}

libqt_string Attica__Topic_ForumId(const Attica__Topic* self) {
    QString _ret = self->forumId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Topic_SetUser(Attica__Topic* self, const libqt_string user) {
    QString user_QString = QString::fromUtf8(user.data, user.len);
    self->setUser(user_QString);
}

libqt_string Attica__Topic_User(const Attica__Topic* self) {
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

void Attica__Topic_SetDate(Attica__Topic* self, const QDateTime* date) {
    self->setDate(*date);
}

QDateTime* Attica__Topic_Date(const Attica__Topic* self) {
    return new QDateTime(self->date());
}

void Attica__Topic_SetSubject(Attica__Topic* self, const libqt_string subject) {
    QString subject_QString = QString::fromUtf8(subject.data, subject.len);
    self->setSubject(subject_QString);
}

libqt_string Attica__Topic_Subject(const Attica__Topic* self) {
    QString _ret = self->subject();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Topic_SetContent(Attica__Topic* self, const libqt_string content) {
    QString content_QString = QString::fromUtf8(content.data, content.len);
    self->setContent(content_QString);
}

libqt_string Attica__Topic_Content(const Attica__Topic* self) {
    QString _ret = self->content();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Topic_SetComments(Attica__Topic* self, const int comments) {
    self->setComments(static_cast<const int>(comments));
}

int Attica__Topic_Comments(const Attica__Topic* self) {
    return self->comments();
}

bool Attica__Topic_IsValid(const Attica__Topic* self) {
    return self->isValid();
}

void Attica__Topic_Delete(Attica__Topic* self) {
    delete self;
}
