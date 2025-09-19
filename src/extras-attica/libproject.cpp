#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Project
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <project.h>
#include "libproject.h"
#include "libproject.hxx"

Attica__Project* Attica__Project_new() {
    return new Attica::Project();
}

Attica__Project* Attica__Project_new2(const Attica__Project* other) {
    return new Attica::Project(*other);
}

void Attica__Project_OperatorAssign(Attica__Project* self, const Attica__Project* other) {
    self->operator=(*other);
}

void Attica__Project_SetId(Attica__Project* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Project_Id(const Attica__Project* self) {
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

void Attica__Project_SetName(Attica__Project* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Project_Name(const Attica__Project* self) {
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

void Attica__Project_SetVersion(Attica__Project* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setVersion(version_QString);
}

libqt_string Attica__Project_Version(const Attica__Project* self) {
    QString _ret = self->version();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Project_SetUrl(Attica__Project* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

libqt_string Attica__Project_Url(const Attica__Project* self) {
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

void Attica__Project_SetLicense(Attica__Project* self, const libqt_string license) {
    QString license_QString = QString::fromUtf8(license.data, license.len);
    self->setLicense(license_QString);
}

libqt_string Attica__Project_License(const Attica__Project* self) {
    QString _ret = self->license();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Project_SetSummary(Attica__Project* self, const libqt_string summary) {
    QString summary_QString = QString::fromUtf8(summary.data, summary.len);
    self->setSummary(summary_QString);
}

libqt_string Attica__Project_Summary(const Attica__Project* self) {
    QString _ret = self->summary();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Project_SetDescription(Attica__Project* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string Attica__Project_Description(const Attica__Project* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Project_SetDevelopers(Attica__Project* self, const libqt_list /* of libqt_string */ developers) {
    QList<QString> developers_QList;
    developers_QList.reserve(developers.len);
    libqt_string* developers_arr = static_cast<libqt_string*>(developers.data);
    for (size_t i = 0; i < developers.len; ++i) {
        QString developers_arr_i_QString = QString::fromUtf8(developers_arr[i].data, developers_arr[i].len);
        developers_QList.push_back(developers_arr_i_QString);
    }
    self->setDevelopers(developers_QList);
}

libqt_list /* of libqt_string */ Attica__Project_Developers(const Attica__Project* self) {
    QList<QString> _ret = self->developers();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Attica__Project_SetRequirements(Attica__Project* self, const libqt_string requirements) {
    QString requirements_QString = QString::fromUtf8(requirements.data, requirements.len);
    self->setRequirements(requirements_QString);
}

libqt_string Attica__Project_Requirements(const Attica__Project* self) {
    QString _ret = self->requirements();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Project_SetSpecFile(Attica__Project* self, const libqt_string specFile) {
    QString specFile_QString = QString::fromUtf8(specFile.data, specFile.len);
    self->setSpecFile(specFile_QString);
}

libqt_string Attica__Project_SpecFile(const Attica__Project* self) {
    QString _ret = self->specFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Project_AddExtendedAttribute(Attica__Project* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->addExtendedAttribute(key_QString, value_QString);
}

libqt_string Attica__Project_ExtendedAttribute(const Attica__Project* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->extendedAttribute(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_map /* of libqt_string to libqt_string */ Attica__Project_ExtendedAttributes(const Attica__Project* self) {
    QMap<QString, QString> _ret = self->extendedAttributes();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool Attica__Project_IsValid(const Attica__Project* self) {
    return self->isValid();
}

void Attica__Project_Delete(Attica__Project* self) {
    delete self;
}
