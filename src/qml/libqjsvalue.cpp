#include <QDateTime>
#include <QJSPrimitiveValue>
#include <QJSValue>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QVariant>
#include <qjsvalue.h>
#include "libqjsvalue.h"
#include "libqjsvalue.hxx"

QJSValue* QJSValue_new() {
    return new QJSValue();
}

QJSValue* QJSValue_new2(const QJSValue* other) {
    return new QJSValue(*other);
}

QJSValue* QJSValue_new3(bool value) {
    return new QJSValue(value);
}

QJSValue* QJSValue_new4(int value) {
    return new QJSValue(static_cast<int>(value));
}

QJSValue* QJSValue_new5(unsigned int value) {
    return new QJSValue(static_cast<uint>(value));
}

QJSValue* QJSValue_new6(double value) {
    return new QJSValue(static_cast<double>(value));
}

QJSValue* QJSValue_new7(const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new QJSValue(value_QString);
}

QJSValue* QJSValue_new8(const libqt_string value) {
    QLatin1String value_QLatin1String(value.data, value.len);
    return new QJSValue(value_QLatin1String);
}

QJSValue* QJSValue_new9(const char* str) {
    return new QJSValue(str);
}

QJSValue* QJSValue_new10(int value) {
    return new QJSValue(static_cast<QJSValue::SpecialValue>(value));
}

void QJSValue_OperatorAssign(QJSValue* self, const QJSValue* other) {
    self->operator=(*other);
}

bool QJSValue_IsBool(const QJSValue* self) {
    return self->isBool();
}

bool QJSValue_IsNumber(const QJSValue* self) {
    return self->isNumber();
}

bool QJSValue_IsNull(const QJSValue* self) {
    return self->isNull();
}

bool QJSValue_IsString(const QJSValue* self) {
    return self->isString();
}

bool QJSValue_IsUndefined(const QJSValue* self) {
    return self->isUndefined();
}

bool QJSValue_IsVariant(const QJSValue* self) {
    return self->isVariant();
}

bool QJSValue_IsQObject(const QJSValue* self) {
    return self->isQObject();
}

bool QJSValue_IsQMetaObject(const QJSValue* self) {
    return self->isQMetaObject();
}

bool QJSValue_IsObject(const QJSValue* self) {
    return self->isObject();
}

bool QJSValue_IsDate(const QJSValue* self) {
    return self->isDate();
}

bool QJSValue_IsRegExp(const QJSValue* self) {
    return self->isRegExp();
}

bool QJSValue_IsArray(const QJSValue* self) {
    return self->isArray();
}

bool QJSValue_IsError(const QJSValue* self) {
    return self->isError();
}

bool QJSValue_IsUrl(const QJSValue* self) {
    return self->isUrl();
}

libqt_string QJSValue_ToString(const QJSValue* self) {
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

double QJSValue_ToNumber(const QJSValue* self) {
    return self->toNumber();
}

int QJSValue_ToInt(const QJSValue* self) {
    return static_cast<int>(self->toInt());
}

unsigned int QJSValue_ToUInt(const QJSValue* self) {
    return static_cast<unsigned int>(self->toUInt());
}

bool QJSValue_ToBool(const QJSValue* self) {
    return self->toBool();
}

QVariant* QJSValue_ToVariant(const QJSValue* self) {
    return new QVariant(self->toVariant());
}

QVariant* QJSValue_ToVariant2(const QJSValue* self, int behavior) {
    return new QVariant(self->toVariant(static_cast<QJSValue::ObjectConversionBehavior>(behavior)));
}

QJSPrimitiveValue* QJSValue_ToPrimitive(const QJSValue* self) {
    return new QJSPrimitiveValue(self->toPrimitive());
}

QObject* QJSValue_ToQObject(const QJSValue* self) {
    return self->toQObject();
}

QMetaObject* QJSValue_ToQMetaObject(const QJSValue* self) {
    return (QMetaObject*)self->toQMetaObject();
}

QDateTime* QJSValue_ToDateTime(const QJSValue* self) {
    return new QDateTime(self->toDateTime());
}

bool QJSValue_Equals(const QJSValue* self, const QJSValue* other) {
    return self->equals(*other);
}

bool QJSValue_StrictlyEquals(const QJSValue* self, const QJSValue* other) {
    return self->strictlyEquals(*other);
}

QJSValue* QJSValue_Prototype(const QJSValue* self) {
    return new QJSValue(self->prototype());
}

void QJSValue_SetPrototype(QJSValue* self, const QJSValue* prototype) {
    self->setPrototype(*prototype);
}

QJSValue* QJSValue_Property(const QJSValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QJSValue(self->property(name_QString));
}

void QJSValue_SetProperty(QJSValue* self, const libqt_string name, const QJSValue* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setProperty(name_QString, *value);
}

bool QJSValue_HasProperty(const QJSValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasProperty(name_QString);
}

bool QJSValue_HasOwnProperty(const QJSValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasOwnProperty(name_QString);
}

QJSValue* QJSValue_Property2(const QJSValue* self, unsigned int arrayIndex) {
    return new QJSValue(self->property(static_cast<quint32>(arrayIndex)));
}

void QJSValue_SetProperty2(QJSValue* self, unsigned int arrayIndex, const QJSValue* value) {
    self->setProperty(static_cast<quint32>(arrayIndex), *value);
}

bool QJSValue_DeleteProperty(QJSValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->deleteProperty(name_QString);
}

bool QJSValue_IsCallable(const QJSValue* self) {
    return self->isCallable();
}

QJSValue* QJSValue_Call(const QJSValue* self) {
    return new QJSValue(self->call());
}

QJSValue* QJSValue_CallWithInstance(const QJSValue* self, const QJSValue* instance) {
    return new QJSValue(self->callWithInstance(*instance));
}

QJSValue* QJSValue_CallAsConstructor(const QJSValue* self) {
    return new QJSValue(self->callAsConstructor());
}

int QJSValue_ErrorType(const QJSValue* self) {
    return static_cast<int>(self->errorType());
}

QJSValue* QJSValue_Call1(const QJSValue* self, const libqt_list /* of QJSValue* */ args) {
    QList<QJSValue> args_QList;
    args_QList.reserve(args.len);
    QJSValue** args_arr = static_cast<QJSValue**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    return new QJSValue(self->call(args_QList));
}

QJSValue* QJSValue_CallWithInstance2(const QJSValue* self, const QJSValue* instance, const libqt_list /* of QJSValue* */ args) {
    QList<QJSValue> args_QList;
    args_QList.reserve(args.len);
    QJSValue** args_arr = static_cast<QJSValue**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    return new QJSValue(self->callWithInstance(*instance, args_QList));
}

QJSValue* QJSValue_CallAsConstructor1(const QJSValue* self, const libqt_list /* of QJSValue* */ args) {
    QList<QJSValue> args_QList;
    args_QList.reserve(args.len);
    QJSValue** args_arr = static_cast<QJSValue**>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        args_QList.push_back(*(args_arr[i]));
    }
    return new QJSValue(self->callAsConstructor(args_QList));
}

void QJSValue_Delete(QJSValue* self) {
    delete self;
}
