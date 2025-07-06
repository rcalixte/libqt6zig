#include <QDeadlineTimer>
#include <QHostAddress>
#include <QList>
#include <QNetworkAddressEntry>
#include <QNetworkInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkinterface.h>
#include "libqnetworkinterface.h"
#include "libqnetworkinterface.hxx"

QNetworkAddressEntry* QNetworkAddressEntry_new() {
    return new QNetworkAddressEntry();
}

QNetworkAddressEntry* QNetworkAddressEntry_new2(const QNetworkAddressEntry* other) {
    return new QNetworkAddressEntry(*other);
}

void QNetworkAddressEntry_OperatorAssign(QNetworkAddressEntry* self, const QNetworkAddressEntry* other) {
    self->operator=(*other);
}

void QNetworkAddressEntry_Swap(QNetworkAddressEntry* self, QNetworkAddressEntry* other) {
    self->swap(*other);
}

bool QNetworkAddressEntry_OperatorEqual(const QNetworkAddressEntry* self, const QNetworkAddressEntry* other) {
    return (*self == *other);
}

bool QNetworkAddressEntry_OperatorNotEqual(const QNetworkAddressEntry* self, const QNetworkAddressEntry* other) {
    return (*self != *other);
}

int8_t QNetworkAddressEntry_DnsEligibility(const QNetworkAddressEntry* self) {
    return static_cast<int8_t>(self->dnsEligibility());
}

void QNetworkAddressEntry_SetDnsEligibility(QNetworkAddressEntry* self, int8_t status) {
    self->setDnsEligibility(static_cast<QNetworkAddressEntry::DnsEligibilityStatus>(status));
}

QHostAddress* QNetworkAddressEntry_Ip(const QNetworkAddressEntry* self) {
    return new QHostAddress(self->ip());
}

void QNetworkAddressEntry_SetIp(QNetworkAddressEntry* self, const QHostAddress* newIp) {
    self->setIp(*newIp);
}

QHostAddress* QNetworkAddressEntry_Netmask(const QNetworkAddressEntry* self) {
    return new QHostAddress(self->netmask());
}

void QNetworkAddressEntry_SetNetmask(QNetworkAddressEntry* self, const QHostAddress* newNetmask) {
    self->setNetmask(*newNetmask);
}

int QNetworkAddressEntry_PrefixLength(const QNetworkAddressEntry* self) {
    return self->prefixLength();
}

void QNetworkAddressEntry_SetPrefixLength(QNetworkAddressEntry* self, int length) {
    self->setPrefixLength(static_cast<int>(length));
}

QHostAddress* QNetworkAddressEntry_Broadcast(const QNetworkAddressEntry* self) {
    return new QHostAddress(self->broadcast());
}

void QNetworkAddressEntry_SetBroadcast(QNetworkAddressEntry* self, const QHostAddress* newBroadcast) {
    self->setBroadcast(*newBroadcast);
}

bool QNetworkAddressEntry_IsLifetimeKnown(const QNetworkAddressEntry* self) {
    return self->isLifetimeKnown();
}

QDeadlineTimer* QNetworkAddressEntry_PreferredLifetime(const QNetworkAddressEntry* self) {
    return new QDeadlineTimer(self->preferredLifetime());
}

QDeadlineTimer* QNetworkAddressEntry_ValidityLifetime(const QNetworkAddressEntry* self) {
    return new QDeadlineTimer(self->validityLifetime());
}

void QNetworkAddressEntry_SetAddressLifetime(QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity) {
    self->setAddressLifetime(*preferred, *validity);
}

void QNetworkAddressEntry_ClearAddressLifetime(QNetworkAddressEntry* self) {
    self->clearAddressLifetime();
}

bool QNetworkAddressEntry_IsPermanent(const QNetworkAddressEntry* self) {
    return self->isPermanent();
}

bool QNetworkAddressEntry_IsTemporary(const QNetworkAddressEntry* self) {
    return self->isTemporary();
}

void QNetworkAddressEntry_Delete(QNetworkAddressEntry* self) {
    delete self;
}

QNetworkInterface* QNetworkInterface_new() {
    return new QNetworkInterface();
}

QNetworkInterface* QNetworkInterface_new2(const QNetworkInterface* other) {
    return new QNetworkInterface(*other);
}

void QNetworkInterface_OperatorAssign(QNetworkInterface* self, const QNetworkInterface* other) {
    self->operator=(*other);
}

void QNetworkInterface_Swap(QNetworkInterface* self, QNetworkInterface* other) {
    self->swap(*other);
}

bool QNetworkInterface_IsValid(const QNetworkInterface* self) {
    return self->isValid();
}

int QNetworkInterface_Index(const QNetworkInterface* self) {
    return self->index();
}

int QNetworkInterface_MaximumTransmissionUnit(const QNetworkInterface* self) {
    return self->maximumTransmissionUnit();
}

libqt_string QNetworkInterface_Name(const QNetworkInterface* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkInterface_HumanReadableName(const QNetworkInterface* self) {
    QString _ret = self->humanReadableName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QNetworkInterface_Flags(const QNetworkInterface* self) {
    return static_cast<int>(self->flags());
}

int QNetworkInterface_Type(const QNetworkInterface* self) {
    return static_cast<int>(self->type());
}

libqt_string QNetworkInterface_HardwareAddress(const QNetworkInterface* self) {
    QString _ret = self->hardwareAddress();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QNetworkAddressEntry* */ QNetworkInterface_AddressEntries(const QNetworkInterface* self) {
    QList<QNetworkAddressEntry> _ret = self->addressEntries();
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkAddressEntry** _arr = static_cast<QNetworkAddressEntry**>(malloc(sizeof(QNetworkAddressEntry*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QNetworkAddressEntry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QNetworkInterface_InterfaceIndexFromName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return QNetworkInterface::interfaceIndexFromName(name_QString);
}

QNetworkInterface* QNetworkInterface_InterfaceFromName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QNetworkInterface(QNetworkInterface::interfaceFromName(name_QString));
}

QNetworkInterface* QNetworkInterface_InterfaceFromIndex(int index) {
    return new QNetworkInterface(QNetworkInterface::interfaceFromIndex(static_cast<int>(index)));
}

libqt_string QNetworkInterface_InterfaceNameFromIndex(int index) {
    QString _ret = QNetworkInterface::interfaceNameFromIndex(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QNetworkInterface* */ QNetworkInterface_AllInterfaces() {
    QList<QNetworkInterface> _ret = QNetworkInterface::allInterfaces();
    // Convert QList<> from C++ memory to manually-managed C memory
    QNetworkInterface** _arr = static_cast<QNetworkInterface**>(malloc(sizeof(QNetworkInterface*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QNetworkInterface(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QHostAddress* */ QNetworkInterface_AllAddresses() {
    QList<QHostAddress> _ret = QNetworkInterface::allAddresses();
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

void QNetworkInterface_Delete(QNetworkInterface* self) {
    delete self;
}
