#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Message
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <message.h>
#include "libmessage.h"
#include "libmessage.hxx"

Attica__Message* Attica__Message_new() {
    return new Attica::Message();
}

Attica__Message* Attica__Message_new2(const Attica__Message* other) {
    return new Attica::Message(*other);
}

void Attica__Message_OperatorAssign(Attica__Message* self, const Attica__Message* other) {
    self->operator=(*other);
}

void Attica__Message_SetId(Attica__Message* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Message_Id(const Attica__Message* self) {
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

void Attica__Message_SetFrom(Attica__Message* self, const libqt_string from) {
    QString from_QString = QString::fromUtf8(from.data, from.len);
    self->setFrom(from_QString);
}

libqt_string Attica__Message_From(const Attica__Message* self) {
    QString _ret = self->from();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Message_SetTo(Attica__Message* self, const libqt_string to) {
    QString to_QString = QString::fromUtf8(to.data, to.len);
    self->setTo(to_QString);
}

libqt_string Attica__Message_To(const Attica__Message* self) {
    QString _ret = self->to();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Message_SetSent(Attica__Message* self, const QDateTime* sent) {
    self->setSent(*sent);
}

QDateTime* Attica__Message_Sent(const Attica__Message* self) {
    return new QDateTime(self->sent());
}

void Attica__Message_SetStatus(Attica__Message* self, int status) {
    self->setStatus(static_cast<Attica::Message::Status>(status));
}

int Attica__Message_Status(const Attica__Message* self) {
    return static_cast<int>(self->status());
}

void Attica__Message_SetSubject(Attica__Message* self, const libqt_string subject) {
    QString subject_QString = QString::fromUtf8(subject.data, subject.len);
    self->setSubject(subject_QString);
}

libqt_string Attica__Message_Subject(const Attica__Message* self) {
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

void Attica__Message_SetBody(Attica__Message* self, const libqt_string body) {
    QString body_QString = QString::fromUtf8(body.data, body.len);
    self->setBody(body_QString);
}

libqt_string Attica__Message_Body(const Attica__Message* self) {
    QString _ret = self->body();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__Message_IsValid(const Attica__Message* self) {
    return self->isValid();
}

void Attica__Message_Delete(Attica__Message* self) {
    delete self;
}
