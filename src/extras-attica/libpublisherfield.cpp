#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PublisherField
#include <QString>
#include <QByteArray>
#include <cstring>
#include <publisherfield.h>
#include "libpublisherfield.h"
#include "libpublisherfield.hxx"

Attica__PublisherField* Attica__PublisherField_new() {
    return new Attica::PublisherField();
}

Attica__PublisherField* Attica__PublisherField_new2(const Attica__PublisherField* other) {
    return new Attica::PublisherField(*other);
}

void Attica__PublisherField_OperatorAssign(Attica__PublisherField* self, const Attica__PublisherField* other) {
    self->operator=(*other);
}

void Attica__PublisherField_SetName(Attica__PublisherField* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setName(value_QString);
}

libqt_string Attica__PublisherField_Name(const Attica__PublisherField* self) {
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

void Attica__PublisherField_SetType(Attica__PublisherField* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setType(value_QString);
}

libqt_string Attica__PublisherField_Type(const Attica__PublisherField* self) {
    QString _ret = self->type();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__PublisherField_SetData(Attica__PublisherField* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setData(value_QString);
}

libqt_string Attica__PublisherField_Data(const Attica__PublisherField* self) {
    QString _ret = self->data();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Attica__PublisherField_IsValid(const Attica__PublisherField* self) {
    return self->isValid();
}

void Attica__PublisherField_Delete(Attica__PublisherField* self) {
    delete self;
}
