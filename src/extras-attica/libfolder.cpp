#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Folder
#include <QString>
#include <QByteArray>
#include <cstring>
#include <folder.h>
#include "libfolder.h"
#include "libfolder.hxx"

Attica__Folder* Attica__Folder_new() {
    return new Attica::Folder();
}

Attica__Folder* Attica__Folder_new2(const Attica__Folder* other) {
    return new Attica::Folder(*other);
}

void Attica__Folder_OperatorAssign(Attica__Folder* self, const Attica__Folder* other) {
    self->operator=(*other);
}

void Attica__Folder_SetId(Attica__Folder* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Folder_Id(const Attica__Folder* self) {
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

void Attica__Folder_SetName(Attica__Folder* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Folder_Name(const Attica__Folder* self) {
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

void Attica__Folder_SetMessageCount(Attica__Folder* self, int messageCount) {
    self->setMessageCount(static_cast<int>(messageCount));
}

int Attica__Folder_MessageCount(const Attica__Folder* self) {
    return self->messageCount();
}

void Attica__Folder_SetType(Attica__Folder* self, const libqt_string typeVal) {
    QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
    self->setType(typeVal_QString);
}

libqt_string Attica__Folder_Type(const Attica__Folder* self) {
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

bool Attica__Folder_IsValid(const Attica__Folder* self) {
    return self->isValid();
}

void Attica__Folder_Delete(Attica__Folder* self) {
    delete self;
}
