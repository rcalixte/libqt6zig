#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Activity
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Person
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <activity.h>
#include "libactivity.h"
#include "libactivity.hxx"

Attica__Activity* Attica__Activity_new() {
    return new Attica::Activity();
}

Attica__Activity* Attica__Activity_new2(const Attica__Activity* other) {
    return new Attica::Activity(*other);
}

void Attica__Activity_OperatorAssign(Attica__Activity* self, const Attica__Activity* other) {
    self->operator=(*other);
}

void Attica__Activity_SetId(Attica__Activity* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Activity_Id(const Attica__Activity* self) {
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

void Attica__Activity_SetAssociatedPerson(Attica__Activity* self, const Attica__Person* associatedPerson) {
    self->setAssociatedPerson(*associatedPerson);
}

Attica__Person* Attica__Activity_AssociatedPerson(const Attica__Activity* self) {
    return new Attica::Person(self->associatedPerson());
}

void Attica__Activity_SetTimestamp(Attica__Activity* self, const QDateTime* timestamp) {
    self->setTimestamp(*timestamp);
}

QDateTime* Attica__Activity_Timestamp(const Attica__Activity* self) {
    return new QDateTime(self->timestamp());
}

void Attica__Activity_SetMessage(Attica__Activity* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->setMessage(message_QString);
}

libqt_string Attica__Activity_Message(const Attica__Activity* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Activity_SetLink(Attica__Activity* self, const QUrl* link) {
    self->setLink(*link);
}

QUrl* Attica__Activity_Link(const Attica__Activity* self) {
    return new QUrl(self->link());
}

bool Attica__Activity_IsValid(const Attica__Activity* self) {
    return self->isValid();
}

void Attica__Activity_Delete(Attica__Activity* self) {
    delete self;
}
