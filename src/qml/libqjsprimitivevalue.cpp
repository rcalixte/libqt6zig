#include <QJSPrimitiveValue>
#include <QMetaType>
#include <QString>
#include <QVariant>
#include <qjsprimitivevalue.h>
#include "libqjsprimitivevalue.h"
#include "libqjsprimitivevalue.hxx"

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new(const QJSPrimitiveUndefined* other) {
    return new QJSPrimitiveUndefined(*other);
}

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new2(QJSPrimitiveUndefined* other) {
    return new QJSPrimitiveUndefined(std::move(*other));
}

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new3() {
    return new QJSPrimitiveUndefined();
}

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new4(const QJSPrimitiveUndefined* param1) {
    return new QJSPrimitiveUndefined(*param1);
}

void QJSPrimitiveUndefined_CopyAssign(QJSPrimitiveUndefined* self, QJSPrimitiveUndefined* other) {
    *self = *other;
}

void QJSPrimitiveUndefined_MoveAssign(QJSPrimitiveUndefined* self, QJSPrimitiveUndefined* other) {
    *self = std::move(*other);
}

void QJSPrimitiveUndefined_Delete(QJSPrimitiveUndefined* self) {
    delete self;
}

QJSPrimitiveNull* QJSPrimitiveNull_new(const QJSPrimitiveNull* other) {
    return new QJSPrimitiveNull(*other);
}

QJSPrimitiveNull* QJSPrimitiveNull_new2(QJSPrimitiveNull* other) {
    return new QJSPrimitiveNull(std::move(*other));
}

QJSPrimitiveNull* QJSPrimitiveNull_new3() {
    return new QJSPrimitiveNull();
}

QJSPrimitiveNull* QJSPrimitiveNull_new4(const QJSPrimitiveNull* param1) {
    return new QJSPrimitiveNull(*param1);
}

void QJSPrimitiveNull_CopyAssign(QJSPrimitiveNull* self, QJSPrimitiveNull* other) {
    *self = *other;
}

void QJSPrimitiveNull_MoveAssign(QJSPrimitiveNull* self, QJSPrimitiveNull* other) {
    *self = std::move(*other);
}

void QJSPrimitiveNull_Delete(QJSPrimitiveNull* self) {
    delete self;
}

QJSPrimitiveValue* QJSPrimitiveValue_new() {
    return new QJSPrimitiveValue();
}

QJSPrimitiveValue* QJSPrimitiveValue_new2(QJSPrimitiveUndefined* undefinedVal) {
    return new QJSPrimitiveValue(*undefinedVal);
}

QJSPrimitiveValue* QJSPrimitiveValue_new3(QJSPrimitiveNull* nullVal) {
    return new QJSPrimitiveValue(*nullVal);
}

QJSPrimitiveValue* QJSPrimitiveValue_new4(bool value) {
    return new QJSPrimitiveValue(value);
}

QJSPrimitiveValue* QJSPrimitiveValue_new5(int value) {
    return new QJSPrimitiveValue(static_cast<int>(value));
}

QJSPrimitiveValue* QJSPrimitiveValue_new6(double value) {
    return new QJSPrimitiveValue(static_cast<double>(value));
}

QJSPrimitiveValue* QJSPrimitiveValue_new7(libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    return new QJSPrimitiveValue(string_QString);
}

QJSPrimitiveValue* QJSPrimitiveValue_new8(const QMetaType* typeVal, const void* value) {
    return new QJSPrimitiveValue(*typeVal, value);
}

QJSPrimitiveValue* QJSPrimitiveValue_new9(QMetaType* typeVal) {
    return new QJSPrimitiveValue(*typeVal);
}

QJSPrimitiveValue* QJSPrimitiveValue_new10(const QVariant* variant) {
    return new QJSPrimitiveValue(*variant);
}

QJSPrimitiveValue* QJSPrimitiveValue_new11(const QJSPrimitiveValue* param1) {
    return new QJSPrimitiveValue(*param1);
}

uint8_t QJSPrimitiveValue_Type(const QJSPrimitiveValue* self) {
    return static_cast<uint8_t>(self->type());
}

QMetaType* QJSPrimitiveValue_MetaType(const QJSPrimitiveValue* self) {
    return new QMetaType(self->metaType());
}

void* QJSPrimitiveValue_Data(QJSPrimitiveValue* self) {
    return self->data();
}

const void* QJSPrimitiveValue_Data2(const QJSPrimitiveValue* self) {
    return (const void*)self->data();
}

const void* QJSPrimitiveValue_ConstData(const QJSPrimitiveValue* self) {
    return (const void*)self->constData();
}

bool QJSPrimitiveValue_ToBoolean(const QJSPrimitiveValue* self) {
    return self->toBoolean();
}

int QJSPrimitiveValue_ToInteger(const QJSPrimitiveValue* self) {
    return self->toInteger();
}

double QJSPrimitiveValue_ToDouble(const QJSPrimitiveValue* self) {
    return self->toDouble();
}

libqt_string QJSPrimitiveValue_ToString(const QJSPrimitiveValue* self) {
    auto _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QJSPrimitiveValue_ToVariant(const QJSPrimitiveValue* self) {
    return new QVariant(self->toVariant());
}

QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlusPlus(QJSPrimitiveValue* self) {
    QJSPrimitiveValue& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlusPlus2(QJSPrimitiveValue* self, int param1) {
    return new QJSPrimitiveValue(self->operator++(static_cast<int>(param1)));
}

QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinusMinus(QJSPrimitiveValue* self) {
    QJSPrimitiveValue& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinusMinus2(QJSPrimitiveValue* self, int param1) {
    return new QJSPrimitiveValue(self->operator--(static_cast<int>(param1)));
}

QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlus(QJSPrimitiveValue* self) {
    return new QJSPrimitiveValue(self->operator+());
}

QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinus(QJSPrimitiveValue* self) {
    return new QJSPrimitiveValue(self->operator-());
}

bool QJSPrimitiveValue_StrictlyEquals(const QJSPrimitiveValue* self, const QJSPrimitiveValue* other) {
    return self->strictlyEquals(*other);
}

bool QJSPrimitiveValue_Equals(const QJSPrimitiveValue* self, const QJSPrimitiveValue* other) {
    return self->equals(*other);
}

void QJSPrimitiveValue_Delete(QJSPrimitiveValue* self) {
    delete self;
}
