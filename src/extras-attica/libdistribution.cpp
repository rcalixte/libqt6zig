#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Distribution
#include <QString>
#include <QByteArray>
#include <cstring>
#include <distribution.h>
#include "libdistribution.h"
#include "libdistribution.hxx"

Attica__Distribution* Attica__Distribution_new() {
    return new Attica::Distribution();
}

Attica__Distribution* Attica__Distribution_new2(const Attica__Distribution* other) {
    return new Attica::Distribution(*other);
}

void Attica__Distribution_OperatorAssign(Attica__Distribution* self, const Attica__Distribution* other) {
    self->operator=(*other);
}

unsigned int Attica__Distribution_Id(const Attica__Distribution* self) {
    return static_cast<unsigned int>(self->id());
}

void Attica__Distribution_SetId(Attica__Distribution* self, unsigned int id) {
    self->setId(static_cast<uint>(id));
}

libqt_string Attica__Distribution_Name(const Attica__Distribution* self) {
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

void Attica__Distribution_SetName(Attica__Distribution* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

void Attica__Distribution_Delete(Attica__Distribution* self) {
    delete self;
}
