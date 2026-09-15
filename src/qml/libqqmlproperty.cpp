#include <QMetaMethod>
#include <QMetaProperty>
#include <QMetaType>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlProperty>
#include <QString>
#include <QVariant>
#include <qqmlproperty.h>
#include "libqqmlproperty.h"
#include "libqqmlproperty.hxx"

QQmlProperty* QQmlProperty_new() {
    return new QQmlProperty();
}

QQmlProperty* QQmlProperty_new2(QObject* param1) {
    return new QQmlProperty(param1);
}

QQmlProperty* QQmlProperty_new3(QObject* param1, QQmlContext* param2) {
    return new QQmlProperty(param1, param2);
}

QQmlProperty* QQmlProperty_new4(QObject* param1, QQmlEngine* param2) {
    return new QQmlProperty(param1, param2);
}

QQmlProperty* QQmlProperty_new5(QObject* param1, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QQmlProperty(param1, param2_QString);
}

QQmlProperty* QQmlProperty_new6(QObject* param1, const libqt_string param2, QQmlContext* param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QQmlProperty(param1, param2_QString, param3);
}

QQmlProperty* QQmlProperty_new7(QObject* param1, const libqt_string param2, QQmlEngine* param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QQmlProperty(param1, param2_QString, param3);
}

QQmlProperty* QQmlProperty_new8(const QQmlProperty* param1) {
    return new QQmlProperty(*param1);
}

void QQmlProperty_OperatorAssign(QQmlProperty* self, const QQmlProperty* param1) {
    self->operator=(*param1);
}

void QQmlProperty_Swap(QQmlProperty* self, QQmlProperty* other) {
    self->swap(*other);
}

bool QQmlProperty_OperatorEqual(const QQmlProperty* self, const QQmlProperty* param1) {
    return (*self == *param1);
}

int QQmlProperty_Type(const QQmlProperty* self) {
    return static_cast<int>(self->type());
}

bool QQmlProperty_IsValid(const QQmlProperty* self) {
    return self->isValid();
}

bool QQmlProperty_IsProperty(const QQmlProperty* self) {
    return self->isProperty();
}

bool QQmlProperty_IsSignalProperty(const QQmlProperty* self) {
    return self->isSignalProperty();
}

int QQmlProperty_PropertyType(const QQmlProperty* self) {
    return self->propertyType();
}

QMetaType* QQmlProperty_PropertyMetaType(const QQmlProperty* self) {
    return new QMetaType(self->propertyMetaType());
}

int QQmlProperty_PropertyTypeCategory(const QQmlProperty* self) {
    return static_cast<int>(self->propertyTypeCategory());
}

const char* QQmlProperty_PropertyTypeName(const QQmlProperty* self) {
    return (const char*)self->propertyTypeName();
}

libqt_string QQmlProperty_Name(const QQmlProperty* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QQmlProperty_Read(const QQmlProperty* self) {
    return new QVariant(self->read());
}

QVariant* QQmlProperty_Read2(const QObject* param1, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QVariant(QQmlProperty::read(param1, param2_QString));
}

QVariant* QQmlProperty_Read3(const QObject* param1, const libqt_string param2, QQmlContext* param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QVariant(QQmlProperty::read(param1, param2_QString, param3));
}

QVariant* QQmlProperty_Read4(const QObject* param1, const libqt_string param2, QQmlEngine* param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return new QVariant(QQmlProperty::read(param1, param2_QString, param3));
}

bool QQmlProperty_Write(const QQmlProperty* self, const QVariant* param1) {
    return self->write(*param1);
}

bool QQmlProperty_Write2(QObject* param1, const libqt_string param2, const QVariant* param3) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return QQmlProperty::write(param1, param2_QString, *param3);
}

bool QQmlProperty_Write3(QObject* param1, const libqt_string param2, const QVariant* param3, QQmlContext* param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return QQmlProperty::write(param1, param2_QString, *param3, param4);
}

bool QQmlProperty_Write4(QObject* param1, const libqt_string param2, const QVariant* param3, QQmlEngine* param4) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return QQmlProperty::write(param1, param2_QString, *param3, param4);
}

bool QQmlProperty_Reset(const QQmlProperty* self) {
    return self->reset();
}

bool QQmlProperty_HasNotifySignal(const QQmlProperty* self) {
    return self->hasNotifySignal();
}

bool QQmlProperty_NeedsNotifySignal(const QQmlProperty* self) {
    return self->needsNotifySignal();
}

bool QQmlProperty_ConnectNotifySignal(const QQmlProperty* self, QObject* dest, const char* slot) {
    return self->connectNotifySignal(dest, slot);
}

bool QQmlProperty_ConnectNotifySignal2(const QQmlProperty* self, QObject* dest, int method) {
    return self->connectNotifySignal(dest, static_cast<int>(method));
}

bool QQmlProperty_IsWritable(const QQmlProperty* self) {
    return self->isWritable();
}

bool QQmlProperty_IsBindable(const QQmlProperty* self) {
    return self->isBindable();
}

bool QQmlProperty_IsDesignable(const QQmlProperty* self) {
    return self->isDesignable();
}

bool QQmlProperty_IsResettable(const QQmlProperty* self) {
    return self->isResettable();
}

QObject* QQmlProperty_Object(const QQmlProperty* self) {
    return self->object();
}

int QQmlProperty_Index(const QQmlProperty* self) {
    return self->index();
}

QMetaProperty* QQmlProperty_Property(const QQmlProperty* self) {
    return new QMetaProperty(self->property());
}

QMetaMethod* QQmlProperty_Method(const QQmlProperty* self) {
    return new QMetaMethod(self->method());
}

void QQmlProperty_Delete(QQmlProperty* self) {
    delete self;
}
