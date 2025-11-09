#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__SessionData
#include <sessiondata.h>
#include "libsessiondata.h"
#include "libsessiondata.hxx"

SignOn__SessionData* SignOn__SessionData_new() {
    return new SignOn::SessionData();
}

SignOn__SessionData* SignOn__SessionData_new2(const SignOn__SessionData* other) {
    return new SignOn::SessionData(*other);
}

SignOn__SessionData* SignOn__SessionData_new3(const libqt_map /* of libqt_string to QVariant* */ data) {
    QMap<QString, QVariant> data_QMap;
    libqt_string* data_karr = static_cast<libqt_string*>(data.keys);
    QVariant** data_varr = static_cast<QVariant**>(data.values);
    for (size_t i = 0; i < data.len; ++i) {
        QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
        data_QMap[data_karr_i_QString] = *(data_varr[i]);
    }
    return new SignOn::SessionData(data_QMap);
}

void SignOn__SessionData_OperatorAssign(SignOn__SessionData* self, const SignOn__SessionData* other) {
    self->operator=(*other);
}

SignOn__SessionData* SignOn__SessionData_OperatorPlusAssign(SignOn__SessionData* self, const SignOn__SessionData* other) {
    SignOn::SessionData& _ret = self->operator+=(*other);
    // Cast returned reference into pointer
    return &_ret;
}

libqt_list /* of libqt_string */ SignOn__SessionData_PropertyNames(const SignOn__SessionData* self) {
    const QList<QString> _ret = self->propertyNames();
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

QVariant* SignOn__SessionData_GetProperty(const SignOn__SessionData* self, const libqt_string propertyName) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    return new QVariant(self->getProperty(propertyName_QString));
}

libqt_list /* of libqt_string */ SignOn__SessionData_GetAccessControlTokens(const SignOn__SessionData* self) {
    QList<QString> _ret = self->getAccessControlTokens();
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

libqt_map /* of libqt_string to QVariant* */ SignOn__SessionData_ToMap(const SignOn__SessionData* self) {
    QMap<QString, QVariant> _ret = self->toMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
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
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void SignOn__SessionData_SetSecret(SignOn__SessionData* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setSecret(value_QString);
}

libqt_string SignOn__SessionData_Secret(const SignOn__SessionData* self) {
    QString _ret = self->Secret();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SessionData_SetUserName(SignOn__SessionData* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setUserName(value_QString);
}

libqt_string SignOn__SessionData_UserName(const SignOn__SessionData* self) {
    QString _ret = self->UserName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SessionData_SetRealm(SignOn__SessionData* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setRealm(value_QString);
}

libqt_string SignOn__SessionData_Realm(const SignOn__SessionData* self) {
    QString _ret = self->Realm();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SessionData_SetNetworkProxy(SignOn__SessionData* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setNetworkProxy(value_QString);
}

libqt_string SignOn__SessionData_NetworkProxy(const SignOn__SessionData* self) {
    QString _ret = self->NetworkProxy();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SessionData_SetUiPolicy(SignOn__SessionData* self, const int* value) {
    self->setUiPolicy(static_cast<const int&>(*value));
}

int SignOn__SessionData_UiPolicy(const SignOn__SessionData* self) {
    return self->UiPolicy();
}

void SignOn__SessionData_SetCaption(SignOn__SessionData* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setCaption(value_QString);
}

libqt_string SignOn__SessionData_Caption(const SignOn__SessionData* self) {
    QString _ret = self->Caption();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__SessionData_SetNetworkTimeout(SignOn__SessionData* self, const unsigned int* value) {
    self->setNetworkTimeout(static_cast<const quint32&>(*value));
}

unsigned int SignOn__SessionData_NetworkTimeout(const SignOn__SessionData* self) {
    return static_cast<unsigned int>(self->NetworkTimeout());
}

void SignOn__SessionData_SetWindowId(SignOn__SessionData* self, const unsigned int* value) {
    self->setWindowId(static_cast<const quint32&>(*value));
}

unsigned int SignOn__SessionData_WindowId(const SignOn__SessionData* self) {
    return static_cast<unsigned int>(self->WindowId());
}

void SignOn__SessionData_SetRenewToken(SignOn__SessionData* self, const bool* value) {
    self->setRenewToken(*value);
}

bool SignOn__SessionData_RenewToken(const SignOn__SessionData* self) {
    return self->RenewToken();
}

void SignOn__SessionData_Delete(SignOn__SessionData* self) {
    delete self;
}
