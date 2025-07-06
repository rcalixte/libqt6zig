#include <QHostAddress>
#include <QHostInfo>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhostinfo.h>
#include "libqhostinfo.h"
#include "libqhostinfo.hxx"

QHostInfo* QHostInfo_new() {
    return new QHostInfo();
}

QHostInfo* QHostInfo_new2(const QHostInfo* d) {
    return new QHostInfo(*d);
}

QHostInfo* QHostInfo_new3(int lookupId) {
    return new QHostInfo(static_cast<int>(lookupId));
}

void QHostInfo_OperatorAssign(QHostInfo* self, const QHostInfo* d) {
    self->operator=(*d);
}

void QHostInfo_Swap(QHostInfo* self, QHostInfo* other) {
    self->swap(*other);
}

libqt_string QHostInfo_HostName(const QHostInfo* self) {
    QString _ret = self->hostName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHostInfo_SetHostName(QHostInfo* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setHostName(name_QString);
}

libqt_list /* of QHostAddress* */ QHostInfo_Addresses(const QHostInfo* self) {
    QList<QHostAddress> _ret = self->addresses();
    // Convert QList<> from C++ memory to manually-managed C memory
    QHostAddress** _arr = static_cast<QHostAddress**>(malloc(sizeof(QHostAddress*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QHostAddress(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QHostInfo_SetAddresses(QHostInfo* self, const libqt_list /* of QHostAddress* */ addresses) {
    QList<QHostAddress> addresses_QList;
    addresses_QList.reserve(addresses.len);
    QHostAddress** addresses_arr = static_cast<QHostAddress**>(addresses.data);
    for (size_t i = 0; i < addresses.len; ++i) {
        addresses_QList.push_back(*(addresses_arr[i]));
    }
    self->setAddresses(addresses_QList);
}

int QHostInfo_Error(const QHostInfo* self) {
    return static_cast<int>(self->error());
}

void QHostInfo_SetError(QHostInfo* self, int errorVal) {
    self->setError(static_cast<QHostInfo::HostInfoError>(errorVal));
}

libqt_string QHostInfo_ErrorString(const QHostInfo* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHostInfo_SetErrorString(QHostInfo* self, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->setErrorString(errorString_QString);
}

void QHostInfo_SetLookupId(QHostInfo* self, int id) {
    self->setLookupId(static_cast<int>(id));
}

int QHostInfo_LookupId(const QHostInfo* self) {
    return self->lookupId();
}

void QHostInfo_AbortHostLookup(int lookupId) {
    QHostInfo::abortHostLookup(static_cast<int>(lookupId));
}

QHostInfo* QHostInfo_FromName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QHostInfo(QHostInfo::fromName(name_QString));
}

libqt_string QHostInfo_LocalHostName() {
    QString _ret = QHostInfo::localHostName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHostInfo_LocalDomainName() {
    QString _ret = QHostInfo::localDomainName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QHostInfo_Delete(QHostInfo* self) {
    delete self;
}
