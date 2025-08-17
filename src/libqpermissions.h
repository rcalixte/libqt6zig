#pragma once
#ifndef SRCC_LIBQPERMISSIONS_H
#define SRCC_LIBQPERMISSIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBluetoothPermission QBluetoothPermission;
typedef struct QCalendarPermission QCalendarPermission;
typedef struct QCameraPermission QCameraPermission;
typedef struct QContactsPermission QContactsPermission;
typedef struct QLocationPermission QLocationPermission;
typedef struct QMetaType QMetaType;
typedef struct QMicrophonePermission QMicrophonePermission;
typedef struct QPermission QPermission;
#endif

QPermission* QPermission_new();
QPermission* QPermission_new2(const QPermission* param1);
int QPermission_Status(const QPermission* self);
QMetaType* QPermission_Type(const QPermission* self);
void QPermission_Delete(QPermission* self);

QLocationPermission* QLocationPermission_new();
QLocationPermission* QLocationPermission_new2(const QLocationPermission* other);
void QLocationPermission_SetAccuracy(QLocationPermission* self, uint8_t accuracy);
uint8_t QLocationPermission_Accuracy(const QLocationPermission* self);
void QLocationPermission_SetAvailability(QLocationPermission* self, uint8_t availability);
uint8_t QLocationPermission_Availability(const QLocationPermission* self);
void QLocationPermission_OperatorAssign(QLocationPermission* self, const QLocationPermission* other);
void QLocationPermission_Swap(QLocationPermission* self, QLocationPermission* other);
void QLocationPermission_Delete(QLocationPermission* self);

QCalendarPermission* QCalendarPermission_new();
QCalendarPermission* QCalendarPermission_new2(const QCalendarPermission* other);
void QCalendarPermission_SetAccessMode(QCalendarPermission* self, uint8_t mode);
uint8_t QCalendarPermission_AccessMode(const QCalendarPermission* self);
void QCalendarPermission_OperatorAssign(QCalendarPermission* self, const QCalendarPermission* other);
void QCalendarPermission_Swap(QCalendarPermission* self, QCalendarPermission* other);
void QCalendarPermission_Delete(QCalendarPermission* self);

QContactsPermission* QContactsPermission_new();
QContactsPermission* QContactsPermission_new2(const QContactsPermission* other);
void QContactsPermission_SetAccessMode(QContactsPermission* self, uint8_t mode);
uint8_t QContactsPermission_AccessMode(const QContactsPermission* self);
void QContactsPermission_OperatorAssign(QContactsPermission* self, const QContactsPermission* other);
void QContactsPermission_Swap(QContactsPermission* self, QContactsPermission* other);
void QContactsPermission_Delete(QContactsPermission* self);

QBluetoothPermission* QBluetoothPermission_new();
QBluetoothPermission* QBluetoothPermission_new2(const QBluetoothPermission* other);
void QBluetoothPermission_SetCommunicationModes(QBluetoothPermission* self, int modes);
int QBluetoothPermission_CommunicationModes(const QBluetoothPermission* self);
void QBluetoothPermission_OperatorAssign(QBluetoothPermission* self, const QBluetoothPermission* other);
void QBluetoothPermission_Swap(QBluetoothPermission* self, QBluetoothPermission* other);
void QBluetoothPermission_Delete(QBluetoothPermission* self);

QCameraPermission* QCameraPermission_new();
QCameraPermission* QCameraPermission_new2(const QCameraPermission* other);
void QCameraPermission_OperatorAssign(QCameraPermission* self, const QCameraPermission* other);
void QCameraPermission_Swap(QCameraPermission* self, QCameraPermission* other);
void QCameraPermission_Delete(QCameraPermission* self);

QMicrophonePermission* QMicrophonePermission_new();
QMicrophonePermission* QMicrophonePermission_new2(const QMicrophonePermission* other);
void QMicrophonePermission_OperatorAssign(QMicrophonePermission* self, const QMicrophonePermission* other);
void QMicrophonePermission_Swap(QMicrophonePermission* self, QMicrophonePermission* other);
void QMicrophonePermission_Delete(QMicrophonePermission* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
