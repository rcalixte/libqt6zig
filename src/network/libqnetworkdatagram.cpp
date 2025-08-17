#include <QByteArray>
#include <QHostAddress>
#include <QNetworkDatagram>
#include <qnetworkdatagram.h>
#include "libqnetworkdatagram.h"
#include "libqnetworkdatagram.hxx"

QNetworkDatagram* QNetworkDatagram_new() {
    return new QNetworkDatagram();
}

QNetworkDatagram* QNetworkDatagram_new2(const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QNetworkDatagram(data_QByteArray);
}

QNetworkDatagram* QNetworkDatagram_new3(const QNetworkDatagram* other) {
    return new QNetworkDatagram(*other);
}

QNetworkDatagram* QNetworkDatagram_new4(const libqt_string data, const QHostAddress* destinationAddress) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QNetworkDatagram(data_QByteArray, *destinationAddress);
}

QNetworkDatagram* QNetworkDatagram_new5(const libqt_string data, const QHostAddress* destinationAddress, uint16_t port) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QNetworkDatagram(data_QByteArray, *destinationAddress, static_cast<quint16>(port));
}

void QNetworkDatagram_OperatorAssign(QNetworkDatagram* self, const QNetworkDatagram* other) {
    self->operator=(*other);
}

void QNetworkDatagram_Swap(QNetworkDatagram* self, QNetworkDatagram* other) {
    self->swap(*other);
}

void QNetworkDatagram_Clear(QNetworkDatagram* self) {
    self->clear();
}

bool QNetworkDatagram_IsValid(const QNetworkDatagram* self) {
    return self->isValid();
}

bool QNetworkDatagram_IsNull(const QNetworkDatagram* self) {
    return self->isNull();
}

unsigned int QNetworkDatagram_InterfaceIndex(const QNetworkDatagram* self) {
    return static_cast<unsigned int>(self->interfaceIndex());
}

void QNetworkDatagram_SetInterfaceIndex(QNetworkDatagram* self, unsigned int index) {
    self->setInterfaceIndex(static_cast<uint>(index));
}

QHostAddress* QNetworkDatagram_SenderAddress(const QNetworkDatagram* self) {
    return new QHostAddress(self->senderAddress());
}

QHostAddress* QNetworkDatagram_DestinationAddress(const QNetworkDatagram* self) {
    return new QHostAddress(self->destinationAddress());
}

int QNetworkDatagram_SenderPort(const QNetworkDatagram* self) {
    return self->senderPort();
}

int QNetworkDatagram_DestinationPort(const QNetworkDatagram* self) {
    return self->destinationPort();
}

void QNetworkDatagram_SetSender(QNetworkDatagram* self, const QHostAddress* address) {
    self->setSender(*address);
}

void QNetworkDatagram_SetDestination(QNetworkDatagram* self, const QHostAddress* address, uint16_t port) {
    self->setDestination(*address, static_cast<quint16>(port));
}

int QNetworkDatagram_HopLimit(const QNetworkDatagram* self) {
    return self->hopLimit();
}

void QNetworkDatagram_SetHopLimit(QNetworkDatagram* self, int count) {
    self->setHopLimit(static_cast<int>(count));
}

libqt_string QNetworkDatagram_Data(const QNetworkDatagram* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkDatagram_SetData(QNetworkDatagram* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setData(data_QByteArray);
}

QNetworkDatagram* QNetworkDatagram_MakeReply(const QNetworkDatagram* self, const libqt_string payload) {
    QByteArray payload_QByteArray(payload.data, payload.len);
    return new QNetworkDatagram(self->makeReply(payload_QByteArray));
}

void QNetworkDatagram_SetSender2(QNetworkDatagram* self, const QHostAddress* address, uint16_t port) {
    self->setSender(*address, static_cast<quint16>(port));
}

void QNetworkDatagram_Delete(QNetworkDatagram* self) {
    delete self;
}
