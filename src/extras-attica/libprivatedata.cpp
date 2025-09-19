#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__PrivateData
#include <QDateTime>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <privatedata.h>
#include "libprivatedata.h"
#include "libprivatedata.hxx"

Attica__PrivateData* Attica__PrivateData_new() {
    return new Attica::PrivateData();
}

Attica__PrivateData* Attica__PrivateData_new2(const Attica__PrivateData* other) {
    return new Attica::PrivateData(*other);
}

void Attica__PrivateData_OperatorAssign(Attica__PrivateData* self, const Attica__PrivateData* other) {
    self->operator=(*other);
}

void Attica__PrivateData_SetAttribute(Attica__PrivateData* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setAttribute(key_QString, value_QString);
}

libqt_string Attica__PrivateData_Attribute(const Attica__PrivateData* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->attribute(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__PrivateData_SetTimestamp(Attica__PrivateData* self, const libqt_string key, const QDateTime* when) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setTimestamp(key_QString, *when);
}

QDateTime* Attica__PrivateData_Timestamp(const Attica__PrivateData* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QDateTime(self->timestamp(key_QString));
}

libqt_list /* of libqt_string */ Attica__PrivateData_Keys(const Attica__PrivateData* self) {
    QList<QString> _ret = self->keys();
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

void Attica__PrivateData_Delete(Attica__PrivateData* self) {
    delete self;
}
