#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Field
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Publisher
#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Target
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <publisher.h>
#include "libpublisher.h"
#include "libpublisher.hxx"

Attica__Field* Attica__Field_new(const Attica__Field* param1) {
    return new Attica::Field(*param1);
}

libqt_string Attica__Field_Type(const Attica__Field* self) {
    QString type_ret = self->type;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray type_b = type_ret.toUtf8();
    libqt_string type_str;
    type_str.len = type_b.length();
    type_str.data = static_cast<const char*>(malloc(type_str.len + 1));
    memcpy((void*)type_str.data, type_b.data(), type_str.len);
    ((char*)type_str.data)[type_str.len] = '\0';
    return type_str;
}

void Attica__Field_SetType(Attica__Field* self, libqt_string type) {
    QString type_QString = QString::fromUtf8(type.data, type.len);
    self->type = type_QString;
}

libqt_string Attica__Field_Name(const Attica__Field* self) {
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

void Attica__Field_SetName(Attica__Field* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

int Attica__Field_Fieldsize(const Attica__Field* self) {
    return self->fieldsize;
}

void Attica__Field_SetFieldsize(Attica__Field* self, int fieldsize) {
    self->fieldsize = static_cast<int>(fieldsize);
}

bool Attica__Field_Required(const Attica__Field* self) {
    return self->required;
}

void Attica__Field_SetRequired(Attica__Field* self, bool required) {
    self->required = required;
}

libqt_list /* of libqt_string */ Attica__Field_Options(const Attica__Field* self) {
    QList<QString> options_ret = self->options;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* options_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (options_ret.size() + 1)));
    for (qsizetype i = 0; i < options_ret.size(); ++i) {
        QString options_lv_ret = options_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray options_lv_b = options_lv_ret.toUtf8();
        libqt_string options_lv_str;
        options_lv_str.len = options_lv_b.length();
        options_lv_str.data = static_cast<const char*>(malloc(options_lv_str.len + 1));
        memcpy((void*)options_lv_str.data, options_lv_b.data(), options_lv_str.len);
        ((char*)options_lv_str.data)[options_lv_str.len] = '\0';
        options_arr[i] = options_lv_str;
    }
    libqt_list options_out;
    options_out.len = options_ret.size();
    options_out.data = static_cast<void*>(options_arr);
    return options_out;
}

void Attica__Field_SetOptions(Attica__Field* self, libqt_list /* of libqt_string */ options) {
    QList<QString> options_QList;
    options_QList.reserve(options.len);
    libqt_string* options_arr = static_cast<libqt_string*>(options.data);
    for (size_t i = 0; i < options.len; ++i) {
        QString options_arr_i_QString = QString::fromUtf8(options_arr[i].data, options_arr[i].len);
        options_QList.push_back(options_arr_i_QString);
    }
    self->options = options_QList;
}

void Attica__Field_OperatorAssign(Attica__Field* self, const Attica__Field* param1) {
    self->operator=(*param1);
}

void Attica__Field_Delete(Attica__Field* self) {
    delete self;
}

Attica__Publisher* Attica__Publisher_new() {
    return new Attica::Publisher();
}

Attica__Publisher* Attica__Publisher_new2(const Attica__Publisher* other) {
    return new Attica::Publisher(*other);
}

void Attica__Publisher_OperatorAssign(Attica__Publisher* self, const Attica__Publisher* other) {
    self->operator=(*other);
}

void Attica__Publisher_SetId(Attica__Publisher* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Publisher_Id(const Attica__Publisher* self) {
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

void Attica__Publisher_SetName(Attica__Publisher* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Publisher_Name(const Attica__Publisher* self) {
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

void Attica__Publisher_SetUrl(Attica__Publisher* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

libqt_string Attica__Publisher_Url(const Attica__Publisher* self) {
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

void Attica__Publisher_AddField(Attica__Publisher* self, const Attica__Field* param1) {
    self->addField(*param1);
}

libqt_list /* of Attica__Field* */ Attica__Publisher_Fields(const Attica__Publisher* self) {
    QList<Attica::Field> _ret = self->fields();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Field** _arr = static_cast<Attica__Field**>(malloc(sizeof(Attica__Field*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Attica::Field(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Attica__Publisher_AddTarget(Attica__Publisher* self, const Attica__Target* param1) {
    self->addTarget(*param1);
}

libqt_list /* of Attica__Target* */ Attica__Publisher_Targets(const Attica__Publisher* self) {
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

bool Attica__Publisher_IsValid(const Attica__Publisher* self) {
    return self->isValid();
}

void Attica__Publisher_Delete(Attica__Publisher* self) {
    delete self;
}
