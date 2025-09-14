#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Device
#define WORKAROUND_INNER_CLASS_DEFINITION_Solid__Predicate
#include <predicate.h>
#include "libpredicate.h"
#include "libpredicate.hxx"

Solid__Predicate* Solid__Predicate_new() {
    return new Solid::Predicate();
}

Solid__Predicate* Solid__Predicate_new2(const Solid__Predicate* other) {
    return new Solid::Predicate(*other);
}

Solid__Predicate* Solid__Predicate_new3(const int* ifaceType, const libqt_string property, const QVariant* value) {
    QString property_QString = QString::fromUtf8(property.data, property.len);
    return new Solid::Predicate((const Solid::DeviceInterface::Type&)(*ifaceType), property_QString, *value);
}

Solid__Predicate* Solid__Predicate_new4(const libqt_string ifaceName, const libqt_string property, const QVariant* value) {
    QString ifaceName_QString = QString::fromUtf8(ifaceName.data, ifaceName.len);
    QString property_QString = QString::fromUtf8(property.data, property.len);
    return new Solid::Predicate(ifaceName_QString, property_QString, *value);
}

Solid__Predicate* Solid__Predicate_new5(const int* ifaceType) {
    return new Solid::Predicate((const Solid::DeviceInterface::Type&)(*ifaceType));
}

Solid__Predicate* Solid__Predicate_new6(const libqt_string ifaceName) {
    QString ifaceName_QString = QString::fromUtf8(ifaceName.data, ifaceName.len);
    return new Solid::Predicate(ifaceName_QString);
}

Solid__Predicate* Solid__Predicate_new7(const int* ifaceType, const libqt_string property, const QVariant* value, int compOperator) {
    QString property_QString = QString::fromUtf8(property.data, property.len);
    return new Solid::Predicate((const Solid::DeviceInterface::Type&)(*ifaceType), property_QString, *value, static_cast<Solid::Predicate::ComparisonOperator>(compOperator));
}

Solid__Predicate* Solid__Predicate_new8(const libqt_string ifaceName, const libqt_string property, const QVariant* value, int compOperator) {
    QString ifaceName_QString = QString::fromUtf8(ifaceName.data, ifaceName.len);
    QString property_QString = QString::fromUtf8(property.data, property.len);
    return new Solid::Predicate(ifaceName_QString, property_QString, *value, static_cast<Solid::Predicate::ComparisonOperator>(compOperator));
}

void Solid__Predicate_OperatorAssign(Solid__Predicate* self, const Solid__Predicate* other) {
    self->operator=(*other);
}

Solid__Predicate* Solid__Predicate_OperatorBitwiseAnd(Solid__Predicate* self, const Solid__Predicate* other) {
    return new Solid::Predicate(self->operator&(*other));
}

void Solid__Predicate_OperatorBitwiseAndAssign(Solid__Predicate* self, const Solid__Predicate* other) {
    self->operator&=(*other);
}

Solid__Predicate* Solid__Predicate_OperatorBitwiseOr(Solid__Predicate* self, const Solid__Predicate* other) {
    return new Solid::Predicate(self->operator|(*other));
}

void Solid__Predicate_OperatorBitwiseOrAssign(Solid__Predicate* self, const Solid__Predicate* other) {
    self->operator|=(*other);
}

bool Solid__Predicate_IsValid(const Solid__Predicate* self) {
    return self->isValid();
}

bool Solid__Predicate_Matches(const Solid__Predicate* self, const Solid__Device* device) {
    return self->matches(*device);
}

libqt_list /* set of int */ Solid__Predicate_UsedTypes(const Solid__Predicate* self) {
    QSet<Solid::DeviceInterface::Type> _ret = self->usedTypes();
    // Convert QSet<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    int _ctr = 0;
    QSetIterator<Solid::DeviceInterface::Type> _itr(_ret);
    while (_itr.hasNext()) {
        _arr[_ctr++] = static_cast<int>(_itr.next());
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string Solid__Predicate_ToString(const Solid__Predicate* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Solid__Predicate* Solid__Predicate_FromString(const libqt_string predicate) {
    QString predicate_QString = QString::fromUtf8(predicate.data, predicate.len);
    return new Solid::Predicate(Solid::Predicate::fromString(predicate_QString));
}

int Solid__Predicate_Type(const Solid__Predicate* self) {
    return static_cast<int>(self->type());
}

int Solid__Predicate_InterfaceType(const Solid__Predicate* self) {
    return static_cast<int>(self->interfaceType());
}

libqt_string Solid__Predicate_PropertyName(const Solid__Predicate* self) {
    QString _ret = self->propertyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* Solid__Predicate_MatchingValue(const Solid__Predicate* self) {
    return new QVariant(self->matchingValue());
}

int Solid__Predicate_ComparisonOperator(const Solid__Predicate* self) {
    return static_cast<int>(self->comparisonOperator());
}

Solid__Predicate* Solid__Predicate_FirstOperand(const Solid__Predicate* self) {
    return new Solid::Predicate(self->firstOperand());
}

Solid__Predicate* Solid__Predicate_SecondOperand(const Solid__Predicate* self) {
    return new Solid::Predicate(self->secondOperand());
}

void Solid__Predicate_Delete(Solid__Predicate* self) {
    delete self;
}
