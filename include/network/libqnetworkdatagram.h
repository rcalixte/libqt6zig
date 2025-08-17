#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKDATAGRAM_H
#define SRC_NETWORKC_LIBQNETWORKDATAGRAM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkDatagram QNetworkDatagram;
#endif

QNetworkDatagram* QNetworkDatagram_new();
QNetworkDatagram* QNetworkDatagram_new2(const libqt_string data);
QNetworkDatagram* QNetworkDatagram_new3(const QNetworkDatagram* other);
QNetworkDatagram* QNetworkDatagram_new4(const libqt_string data, const QHostAddress* destinationAddress);
QNetworkDatagram* QNetworkDatagram_new5(const libqt_string data, const QHostAddress* destinationAddress, uint16_t port);
void QNetworkDatagram_OperatorAssign(QNetworkDatagram* self, const QNetworkDatagram* other);
void QNetworkDatagram_Swap(QNetworkDatagram* self, QNetworkDatagram* other);
void QNetworkDatagram_Clear(QNetworkDatagram* self);
bool QNetworkDatagram_IsValid(const QNetworkDatagram* self);
bool QNetworkDatagram_IsNull(const QNetworkDatagram* self);
unsigned int QNetworkDatagram_InterfaceIndex(const QNetworkDatagram* self);
void QNetworkDatagram_SetInterfaceIndex(QNetworkDatagram* self, unsigned int index);
QHostAddress* QNetworkDatagram_SenderAddress(const QNetworkDatagram* self);
QHostAddress* QNetworkDatagram_DestinationAddress(const QNetworkDatagram* self);
int QNetworkDatagram_SenderPort(const QNetworkDatagram* self);
int QNetworkDatagram_DestinationPort(const QNetworkDatagram* self);
void QNetworkDatagram_SetSender(QNetworkDatagram* self, const QHostAddress* address);
void QNetworkDatagram_SetDestination(QNetworkDatagram* self, const QHostAddress* address, uint16_t port);
int QNetworkDatagram_HopLimit(const QNetworkDatagram* self);
void QNetworkDatagram_SetHopLimit(QNetworkDatagram* self, int count);
libqt_string QNetworkDatagram_Data(const QNetworkDatagram* self);
void QNetworkDatagram_SetData(QNetworkDatagram* self, const libqt_string data);
QNetworkDatagram* QNetworkDatagram_MakeReply(const QNetworkDatagram* self, const libqt_string payload);
void QNetworkDatagram_SetSender2(QNetworkDatagram* self, const QHostAddress* address, uint16_t port);
void QNetworkDatagram_Delete(QNetworkDatagram* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
