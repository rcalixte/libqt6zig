#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__HomePageType
#include <QString>
#include <QByteArray>
#include <cstring>
#include <homepagetype.h>
#include "libhomepagetype.h"
#include "libhomepagetype.hxx"

Attica__HomePageType* Attica__HomePageType_new() {
    return new Attica::HomePageType();
}

Attica__HomePageType* Attica__HomePageType_new2(const Attica__HomePageType* other) {
    return new Attica::HomePageType(*other);
}

void Attica__HomePageType_OperatorAssign(Attica__HomePageType* self, const Attica__HomePageType* other) {
    self->operator=(*other);
}

unsigned int Attica__HomePageType_Id(const Attica__HomePageType* self) {
    return static_cast<unsigned int>(self->id());
}

void Attica__HomePageType_SetId(Attica__HomePageType* self, unsigned int id) {
    self->setId(static_cast<uint>(id));
}

libqt_string Attica__HomePageType_Name(const Attica__HomePageType* self) {
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

void Attica__HomePageType_SetName(Attica__HomePageType* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

void Attica__HomePageType_Delete(Attica__HomePageType* self) {
    delete self;
}
