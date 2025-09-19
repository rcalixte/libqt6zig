#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__License
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <license.h>
#include "liblicense.h"
#include "liblicense.hxx"

Attica__License* Attica__License_new() {
    return new Attica::License();
}

Attica__License* Attica__License_new2(const Attica__License* other) {
    return new Attica::License(*other);
}

void Attica__License_OperatorAssign(Attica__License* self, const Attica__License* other) {
    self->operator=(*other);
}

unsigned int Attica__License_Id(const Attica__License* self) {
    return static_cast<unsigned int>(self->id());
}

void Attica__License_SetId(Attica__License* self, unsigned int id) {
    self->setId(static_cast<uint>(id));
}

libqt_string Attica__License_Name(const Attica__License* self) {
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

void Attica__License_SetName(Attica__License* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

QUrl* Attica__License_Url(const Attica__License* self) {
    return new QUrl(self->url());
}

void Attica__License_SetUrl(Attica__License* self, const QUrl* url) {
    self->setUrl(*url);
}

void Attica__License_Delete(Attica__License* self) {
    delete self;
}
