#include <QDBusUnixFileDescriptor>
#include <qdbusunixfiledescriptor.h>
#include "libqdbusunixfiledescriptor.h"
#include "libqdbusunixfiledescriptor.hxx"

QDBusUnixFileDescriptor* QDBusUnixFileDescriptor_new() {
    return new QDBusUnixFileDescriptor();
}

QDBusUnixFileDescriptor* QDBusUnixFileDescriptor_new2(int fileDescriptor) {
    return new QDBusUnixFileDescriptor(static_cast<int>(fileDescriptor));
}

QDBusUnixFileDescriptor* QDBusUnixFileDescriptor_new3(const QDBusUnixFileDescriptor* other) {
    return new QDBusUnixFileDescriptor(*other);
}

void QDBusUnixFileDescriptor_OperatorAssign(QDBusUnixFileDescriptor* self, const QDBusUnixFileDescriptor* other) {
    self->operator=(*other);
}

void QDBusUnixFileDescriptor_Swap(QDBusUnixFileDescriptor* self, QDBusUnixFileDescriptor* other) {
    self->swap(*other);
}

bool QDBusUnixFileDescriptor_IsValid(const QDBusUnixFileDescriptor* self) {
    return self->isValid();
}

int QDBusUnixFileDescriptor_FileDescriptor(const QDBusUnixFileDescriptor* self) {
    return self->fileDescriptor();
}

void QDBusUnixFileDescriptor_SetFileDescriptor(QDBusUnixFileDescriptor* self, int fileDescriptor) {
    self->setFileDescriptor(static_cast<int>(fileDescriptor));
}

void QDBusUnixFileDescriptor_GiveFileDescriptor(QDBusUnixFileDescriptor* self, int fileDescriptor) {
    self->giveFileDescriptor(static_cast<int>(fileDescriptor));
}

int QDBusUnixFileDescriptor_TakeFileDescriptor(QDBusUnixFileDescriptor* self) {
    return self->takeFileDescriptor();
}

bool QDBusUnixFileDescriptor_IsSupported() {
    return QDBusUnixFileDescriptor::isSupported();
}

void QDBusUnixFileDescriptor_Delete(QDBusUnixFileDescriptor* self) {
    delete self;
}
