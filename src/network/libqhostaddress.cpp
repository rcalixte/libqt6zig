#include <QHostAddress>
#include <QIPv6Address>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhostaddress.h>
#include "libqhostaddress.h"
#include "libqhostaddress.hxx"

unsigned char QIPv6Address_OperatorSubscript(const QIPv6Address* self, int index) {
    return static_cast<unsigned char>(self->operator[](static_cast<int>(index)));
}

void QIPv6Address_Delete(QIPv6Address* self) {
    delete self;
}

QHostAddress* QHostAddress_new() {
    return new QHostAddress();
}

QHostAddress* QHostAddress_new2(unsigned int ip4Addr) {
    return new QHostAddress(static_cast<quint32>(ip4Addr));
}

QHostAddress* QHostAddress_new3(const unsigned char* ip6Addr) {
    return new QHostAddress(static_cast<const quint8*>(ip6Addr));
}

QHostAddress* QHostAddress_new4(const QIPv6Address* ip6Addr) {
    return new QHostAddress(*ip6Addr);
}

QHostAddress* QHostAddress_new5(const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return new QHostAddress(address_QString);
}

QHostAddress* QHostAddress_new6(const QHostAddress* copyVal) {
    return new QHostAddress(*copyVal);
}

QHostAddress* QHostAddress_new7(int address) {
    return new QHostAddress(static_cast<QHostAddress::SpecialAddress>(address));
}

void QHostAddress_OperatorAssign(QHostAddress* self, const QHostAddress* other) {
    self->operator=(*other);
}

void QHostAddress_OperatorAssignWithAddress(QHostAddress* self, int address) {
    self->operator=(static_cast<QHostAddress::SpecialAddress>(address));
}

void QHostAddress_Swap(QHostAddress* self, QHostAddress* other) {
    self->swap(*other);
}

void QHostAddress_SetAddress(QHostAddress* self, unsigned int ip4Addr) {
    self->setAddress(static_cast<quint32>(ip4Addr));
}

void QHostAddress_SetAddressWithIp6Addr(QHostAddress* self, const unsigned char* ip6Addr) {
    self->setAddress(static_cast<const quint8*>(ip6Addr));
}

void QHostAddress_SetAddress2(QHostAddress* self, const QIPv6Address* ip6Addr) {
    self->setAddress(*ip6Addr);
}

bool QHostAddress_SetAddress3(QHostAddress* self, const libqt_string address) {
    QString address_QString = QString::fromUtf8(address.data, address.len);
    return self->setAddress(address_QString);
}

void QHostAddress_SetAddress4(QHostAddress* self, int address) {
    self->setAddress(static_cast<QHostAddress::SpecialAddress>(address));
}

int QHostAddress_Protocol(const QHostAddress* self) {
    return static_cast<int>(self->protocol());
}

unsigned int QHostAddress_ToIPv4Address(const QHostAddress* self) {
    return static_cast<unsigned int>(self->toIPv4Address());
}

QIPv6Address* QHostAddress_ToIPv6Address(const QHostAddress* self) {
    return new QIPv6Address(self->toIPv6Address());
}

libqt_string QHostAddress_ToString(const QHostAddress* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHostAddress_ScopeId(const QHostAddress* self) {
    QString _ret = self->scopeId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QHostAddress_SetScopeId(QHostAddress* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setScopeId(id_QString);
}

bool QHostAddress_IsEqual(const QHostAddress* self, const QHostAddress* address) {
    return self->isEqual(*address);
}

bool QHostAddress_OperatorEqual(const QHostAddress* self, const QHostAddress* address) {
    return (*self == *address);
}

bool QHostAddress_OperatorEqualWithAddress(const QHostAddress* self, int address) {
    return (*self == static_cast<QHostAddress::SpecialAddress>(address));
}

bool QHostAddress_OperatorNotEqual(const QHostAddress* self, const QHostAddress* address) {
    return (*self != *address);
}

bool QHostAddress_OperatorNotEqualWithAddress(const QHostAddress* self, int address) {
    return (*self != static_cast<QHostAddress::SpecialAddress>(address));
}

bool QHostAddress_IsNull(const QHostAddress* self) {
    return self->isNull();
}

void QHostAddress_Clear(QHostAddress* self) {
    self->clear();
}

bool QHostAddress_IsInSubnet(const QHostAddress* self, const QHostAddress* subnet, int netmask) {
    return self->isInSubnet(*subnet, static_cast<int>(netmask));
}

bool QHostAddress_IsLoopback(const QHostAddress* self) {
    return self->isLoopback();
}

bool QHostAddress_IsGlobal(const QHostAddress* self) {
    return self->isGlobal();
}

bool QHostAddress_IsLinkLocal(const QHostAddress* self) {
    return self->isLinkLocal();
}

bool QHostAddress_IsSiteLocal(const QHostAddress* self) {
    return self->isSiteLocal();
}

bool QHostAddress_IsUniqueLocalUnicast(const QHostAddress* self) {
    return self->isUniqueLocalUnicast();
}

bool QHostAddress_IsMulticast(const QHostAddress* self) {
    return self->isMulticast();
}

bool QHostAddress_IsBroadcast(const QHostAddress* self) {
    return self->isBroadcast();
}

libqt_pair /* tuple of QHostAddress* and int */ QHostAddress_ParseSubnet(const libqt_string subnet) {
    QString subnet_QString = QString::fromUtf8(subnet.data, subnet.len);
    QPair<QHostAddress, int> _ret = QHostAddress::parseSubnet(subnet_QString);
    // Convert QPair<> from C++ memory to manually-managed C memory
    QHostAddress** _first = static_cast<QHostAddress**>(malloc(sizeof(QHostAddress*)));
    int* _second = static_cast<int*>(malloc(sizeof(int)));
    *_first = new QHostAddress(_ret.first);
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
    return _out;
}

unsigned int QHostAddress_ToIPv4Address1(const QHostAddress* self, bool* ok) {
    return static_cast<unsigned int>(self->toIPv4Address(ok));
}

bool QHostAddress_IsEqual2(const QHostAddress* self, const QHostAddress* address, int mode) {
    return self->isEqual(*address, static_cast<QHostAddress::ConversionMode>(mode));
}

void QHostAddress_Delete(QHostAddress* self) {
    delete self;
}
