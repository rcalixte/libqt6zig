#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Category
#include <QString>
#include <QByteArray>
#include <cstring>
#include <category.h>
#include "libcategory.h"
#include "libcategory.hxx"

Attica__Category* Attica__Category_new() {
    return new Attica::Category();
}

Attica__Category* Attica__Category_new2(const Attica__Category* other) {
    return new Attica::Category(*other);
}

void Attica__Category_OperatorAssign(Attica__Category* self, const Attica__Category* other) {
    self->operator=(*other);
}

void Attica__Category_SetId(Attica__Category* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Category_Id(const Attica__Category* self) {
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

void Attica__Category_SetName(Attica__Category* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Category_Name(const Attica__Category* self) {
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

bool Attica__Category_IsValid(const Attica__Category* self) {
    return self->isValid();
}

void Attica__Category_SetDisplayName(Attica__Category* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setDisplayName(name_QString);
}

libqt_string Attica__Category_DisplayName(const Attica__Category* self) {
    QString _ret = self->displayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Category_Delete(Attica__Category* self) {
    delete self;
}
