#pragma once
#ifndef SRC_BLUETOOTHC_LIBQBLUETOOTHSERVICEINFO_H
#define SRC_BLUETOOTHC_LIBQBLUETOOTHSERVICEINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QBluetoothServiceInfo__Alternative)
typedef QBluetoothServiceInfo::Alternative QBluetoothServiceInfo__Alternative;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QBluetoothServiceInfo__Sequence)
typedef QBluetoothServiceInfo::Sequence QBluetoothServiceInfo__Sequence;
#endif
#else
typedef struct QBluetoothAddress QBluetoothAddress;
typedef struct QBluetoothDeviceInfo QBluetoothDeviceInfo;
typedef struct QBluetoothServiceInfo QBluetoothServiceInfo;
typedef struct QBluetoothServiceInfo__Alternative QBluetoothServiceInfo__Alternative;
typedef struct QBluetoothServiceInfo__Sequence QBluetoothServiceInfo__Sequence;
typedef struct QBluetoothUuid QBluetoothUuid;
typedef struct QVariant QVariant;
#endif

QBluetoothServiceInfo* QBluetoothServiceInfo_new();
QBluetoothServiceInfo* QBluetoothServiceInfo_new2(const QBluetoothServiceInfo* other);
bool QBluetoothServiceInfo_IsValid(const QBluetoothServiceInfo* self);
bool QBluetoothServiceInfo_IsComplete(const QBluetoothServiceInfo* self);
void QBluetoothServiceInfo_SetDevice(QBluetoothServiceInfo* self, const QBluetoothDeviceInfo* info);
QBluetoothDeviceInfo* QBluetoothServiceInfo_Device(const QBluetoothServiceInfo* self);
void QBluetoothServiceInfo_SetAttribute(QBluetoothServiceInfo* self, uint16_t attributeId, const QVariant* value);
void QBluetoothServiceInfo_SetAttribute2(QBluetoothServiceInfo* self, uint16_t attributeId, const QBluetoothUuid* value);
void QBluetoothServiceInfo_SetAttribute3(QBluetoothServiceInfo* self, uint16_t attributeId, const QBluetoothServiceInfo__Sequence* value);
void QBluetoothServiceInfo_SetAttribute4(QBluetoothServiceInfo* self, uint16_t attributeId, const QBluetoothServiceInfo__Alternative* value);
QVariant* QBluetoothServiceInfo_Attribute(const QBluetoothServiceInfo* self, uint16_t attributeId);
libqt_list /* of uint16_t */ QBluetoothServiceInfo_Attributes(const QBluetoothServiceInfo* self);
bool QBluetoothServiceInfo_Contains(const QBluetoothServiceInfo* self, uint16_t attributeId);
void QBluetoothServiceInfo_RemoveAttribute(QBluetoothServiceInfo* self, uint16_t attributeId);
void QBluetoothServiceInfo_SetServiceName(QBluetoothServiceInfo* self, const libqt_string name);
libqt_string QBluetoothServiceInfo_ServiceName(const QBluetoothServiceInfo* self);
void QBluetoothServiceInfo_SetServiceDescription(QBluetoothServiceInfo* self, const libqt_string description);
libqt_string QBluetoothServiceInfo_ServiceDescription(const QBluetoothServiceInfo* self);
void QBluetoothServiceInfo_SetServiceProvider(QBluetoothServiceInfo* self, const libqt_string provider);
libqt_string QBluetoothServiceInfo_ServiceProvider(const QBluetoothServiceInfo* self);
int QBluetoothServiceInfo_SocketProtocol(const QBluetoothServiceInfo* self);
int QBluetoothServiceInfo_ProtocolServiceMultiplexer(const QBluetoothServiceInfo* self);
int QBluetoothServiceInfo_ServerChannel(const QBluetoothServiceInfo* self);
QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo_ProtocolDescriptor(const QBluetoothServiceInfo* self, int protocol);
void QBluetoothServiceInfo_SetServiceAvailability(QBluetoothServiceInfo* self, unsigned char availability);
unsigned char QBluetoothServiceInfo_ServiceAvailability(const QBluetoothServiceInfo* self);
void QBluetoothServiceInfo_SetServiceUuid(QBluetoothServiceInfo* self, const QBluetoothUuid* uuid);
QBluetoothUuid* QBluetoothServiceInfo_ServiceUuid(const QBluetoothServiceInfo* self);
libqt_list /* of QBluetoothUuid* */ QBluetoothServiceInfo_ServiceClassUuids(const QBluetoothServiceInfo* self);
void QBluetoothServiceInfo_OperatorAssign(QBluetoothServiceInfo* self, const QBluetoothServiceInfo* other);
bool QBluetoothServiceInfo_IsRegistered(const QBluetoothServiceInfo* self);
bool QBluetoothServiceInfo_RegisterService(QBluetoothServiceInfo* self);
bool QBluetoothServiceInfo_UnregisterService(QBluetoothServiceInfo* self);
bool QBluetoothServiceInfo_RegisterService1(QBluetoothServiceInfo* self, const QBluetoothAddress* localAdapter);
void QBluetoothServiceInfo_Delete(QBluetoothServiceInfo* self);

QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo__Sequence_new();
QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo__Sequence_new2(const libqt_list /* of QVariant* */ list);
QBluetoothServiceInfo__Sequence* QBluetoothServiceInfo__Sequence_new3(const QBluetoothServiceInfo__Sequence* param1);
void QBluetoothServiceInfo__Sequence_Delete(QBluetoothServiceInfo__Sequence* self);

QBluetoothServiceInfo__Alternative* QBluetoothServiceInfo__Alternative_new();
QBluetoothServiceInfo__Alternative* QBluetoothServiceInfo__Alternative_new2(const libqt_list /* of QVariant* */ list);
QBluetoothServiceInfo__Alternative* QBluetoothServiceInfo__Alternative_new3(const QBluetoothServiceInfo__Alternative* param1);
void QBluetoothServiceInfo__Alternative_Delete(QBluetoothServiceInfo__Alternative* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
