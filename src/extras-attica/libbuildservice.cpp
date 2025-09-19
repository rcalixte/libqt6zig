#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildService
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Target
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <buildservice.h>
#include "libbuildservice.h"
#include "libbuildservice.hxx"

Attica__Target* Attica__Target_new(const Attica__Target* param1) {
    return new Attica::Target(*param1);
}

libqt_string Attica__Target_Id(const Attica__Target* self) {
    QString id_ret = self->id;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray id_b = id_ret.toUtf8();
    libqt_string id_str;
    id_str.len = id_b.length();
    id_str.data = static_cast<const char*>(malloc(id_str.len + 1));
    memcpy((void*)id_str.data, id_b.data(), id_str.len);
    ((char*)id_str.data)[id_str.len] = '\0';
    return id_str;
}

void Attica__Target_SetId(Attica__Target* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->id = id_QString;
}

libqt_string Attica__Target_Name(const Attica__Target* self) {
    QString name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void Attica__Target_SetName(Attica__Target* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

void Attica__Target_OperatorAssign(Attica__Target* self, const Attica__Target* param1) {
    self->operator=(*param1);
}

void Attica__Target_Delete(Attica__Target* self) {
    delete self;
}

Attica__BuildService* Attica__BuildService_new() {
    return new Attica::BuildService();
}

Attica__BuildService* Attica__BuildService_new2(const Attica__BuildService* other) {
    return new Attica::BuildService(*other);
}

void Attica__BuildService_OperatorAssign(Attica__BuildService* self, const Attica__BuildService* other) {
    self->operator=(*other);
}

void Attica__BuildService_SetId(Attica__BuildService* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__BuildService_Id(const Attica__BuildService* self) {
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

void Attica__BuildService_SetName(Attica__BuildService* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__BuildService_Name(const Attica__BuildService* self) {
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

void Attica__BuildService_SetUrl(Attica__BuildService* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

libqt_string Attica__BuildService_Url(const Attica__BuildService* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__BuildService_AddTarget(Attica__BuildService* self, const Attica__Target* param1) {
    self->addTarget(*param1);
}

libqt_list /* of Attica__Target* */ Attica__BuildService_Targets(const Attica__BuildService* self) {
    QList<Attica::Target> _ret = self->targets();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Target** _arr = static_cast<Attica__Target**>(malloc(sizeof(Attica__Target*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Target(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool Attica__BuildService_IsValid(const Attica__BuildService* self) {
    return self->isValid();
}

void Attica__BuildService_Delete(Attica__BuildService* self) {
    delete self;
}
