#include <QBluetoothUuid>
#include <QByteArray>
#include <QLowEnergyDescriptor>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlowenergydescriptor.h>
#include "libqlowenergydescriptor.h"
#include "libqlowenergydescriptor.hxx"

QLowEnergyDescriptor* QLowEnergyDescriptor_new() {
    return new QLowEnergyDescriptor();
}

QLowEnergyDescriptor* QLowEnergyDescriptor_new2(const QLowEnergyDescriptor* other) {
    return new QLowEnergyDescriptor(*other);
}

void QLowEnergyDescriptor_OperatorAssign(QLowEnergyDescriptor* self, const QLowEnergyDescriptor* other) {
    self->operator=(*other);
}

bool QLowEnergyDescriptor_IsValid(const QLowEnergyDescriptor* self) {
    return self->isValid();
}

libqt_string QLowEnergyDescriptor_Value(const QLowEnergyDescriptor* self) {
    QByteArray _qb = self->value();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QBluetoothUuid* QLowEnergyDescriptor_Uuid(const QLowEnergyDescriptor* self) {
    return new QBluetoothUuid(self->uuid());
}

libqt_string QLowEnergyDescriptor_Name(const QLowEnergyDescriptor* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLowEnergyDescriptor_Type(const QLowEnergyDescriptor* self) {
    return static_cast<int>(self->type());
}

void QLowEnergyDescriptor_Delete(QLowEnergyDescriptor* self) {
    delete self;
}
