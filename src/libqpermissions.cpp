#include <QBluetoothPermission>
#include <QCalendarPermission>
#include <QContactsPermission>
#include <QLocationPermission>
#include <QMetaType>
#include <QPermission>
#include <qpermissions.h>
#include "libqpermissions.h"
#include "libqpermissions.hxx"

QPermission* QPermission_new() {
    return new QPermission();
}

QPermission* QPermission_new2(const QPermission* param1) {
    return new QPermission(*param1);
}

int QPermission_Status(const QPermission* self) {
    return static_cast<int>(self->status());
}

QMetaType* QPermission_Type(const QPermission* self) {
    return new QMetaType(self->type());
}

void QPermission_Delete(QPermission* self) {
    delete self;
}

QLocationPermission* QLocationPermission_new() {
    return new QLocationPermission();
}

QLocationPermission* QLocationPermission_new2(const QLocationPermission* other) {
    return new QLocationPermission(*other);
}

void QLocationPermission_SetAccuracy(QLocationPermission* self, uint8_t accuracy) {
    self->setAccuracy(static_cast<QLocationPermission::Accuracy>(accuracy));
}

uint8_t QLocationPermission_Accuracy(const QLocationPermission* self) {
    return static_cast<uint8_t>(self->accuracy());
}

void QLocationPermission_SetAvailability(QLocationPermission* self, uint8_t availability) {
    self->setAvailability(static_cast<QLocationPermission::Availability>(availability));
}

uint8_t QLocationPermission_Availability(const QLocationPermission* self) {
    return static_cast<uint8_t>(self->availability());
}

void QLocationPermission_OperatorAssign(QLocationPermission* self, const QLocationPermission* other) {
    self->operator=(*other);
}

void QLocationPermission_Swap(QLocationPermission* self, QLocationPermission* other) {
    self->swap(*other);
}

void QLocationPermission_Delete(QLocationPermission* self) {
    delete self;
}

QCalendarPermission* QCalendarPermission_new() {
    return new QCalendarPermission();
}

QCalendarPermission* QCalendarPermission_new2(const QCalendarPermission* other) {
    return new QCalendarPermission(*other);
}

void QCalendarPermission_SetAccessMode(QCalendarPermission* self, uint8_t mode) {
    self->setAccessMode(static_cast<QCalendarPermission::AccessMode>(mode));
}

uint8_t QCalendarPermission_AccessMode(const QCalendarPermission* self) {
    return static_cast<uint8_t>(self->accessMode());
}

void QCalendarPermission_OperatorAssign(QCalendarPermission* self, const QCalendarPermission* other) {
    self->operator=(*other);
}

void QCalendarPermission_Swap(QCalendarPermission* self, QCalendarPermission* other) {
    self->swap(*other);
}

void QCalendarPermission_Delete(QCalendarPermission* self) {
    delete self;
}

QContactsPermission* QContactsPermission_new() {
    return new QContactsPermission();
}

QContactsPermission* QContactsPermission_new2(const QContactsPermission* other) {
    return new QContactsPermission(*other);
}

void QContactsPermission_SetAccessMode(QContactsPermission* self, uint8_t mode) {
    self->setAccessMode(static_cast<QContactsPermission::AccessMode>(mode));
}

uint8_t QContactsPermission_AccessMode(const QContactsPermission* self) {
    return static_cast<uint8_t>(self->accessMode());
}

void QContactsPermission_OperatorAssign(QContactsPermission* self, const QContactsPermission* other) {
    self->operator=(*other);
}

void QContactsPermission_Swap(QContactsPermission* self, QContactsPermission* other) {
    self->swap(*other);
}

void QContactsPermission_Delete(QContactsPermission* self) {
    delete self;
}

QBluetoothPermission* QBluetoothPermission_new() {
    return new QBluetoothPermission();
}

QBluetoothPermission* QBluetoothPermission_new2(const QBluetoothPermission* other) {
    return new QBluetoothPermission(*other);
}

void QBluetoothPermission_SetCommunicationModes(QBluetoothPermission* self, uint8_t modes) {
    self->setCommunicationModes(static_cast<QBluetoothPermission::CommunicationModes>(modes));
}

uint8_t QBluetoothPermission_CommunicationModes(const QBluetoothPermission* self) {
    return static_cast<uint8_t>(self->communicationModes());
}

void QBluetoothPermission_OperatorAssign(QBluetoothPermission* self, const QBluetoothPermission* other) {
    self->operator=(*other);
}

void QBluetoothPermission_Swap(QBluetoothPermission* self, QBluetoothPermission* other) {
    self->swap(*other);
}

void QBluetoothPermission_Delete(QBluetoothPermission* self) {
    delete self;
}

QCameraPermission* QCameraPermission_new() {
    return new QCameraPermission();
}

QCameraPermission* QCameraPermission_new2(const QCameraPermission* other) {
    return new QCameraPermission(*other);
}

void QCameraPermission_OperatorAssign(QCameraPermission* self, const QCameraPermission* other) {
    self->operator=(*other);
}

void QCameraPermission_Swap(QCameraPermission* self, QCameraPermission* other) {
    self->swap(*other);
}

void QCameraPermission_Delete(QCameraPermission* self) {
    delete self;
}

QMicrophonePermission* QMicrophonePermission_new() {
    return new QMicrophonePermission();
}

QMicrophonePermission* QMicrophonePermission_new2(const QMicrophonePermission* other) {
    return new QMicrophonePermission(*other);
}

void QMicrophonePermission_OperatorAssign(QMicrophonePermission* self, const QMicrophonePermission* other) {
    self->operator=(*other);
}

void QMicrophonePermission_Swap(QMicrophonePermission* self, QMicrophonePermission* other) {
    self->swap(*other);
}

void QMicrophonePermission_Delete(QMicrophonePermission* self) {
    delete self;
}
