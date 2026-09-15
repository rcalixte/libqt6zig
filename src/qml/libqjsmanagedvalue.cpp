#include <QDateTime>
#include <QJSEngine>
#include <QJSManagedValue>
#include <QJSPrimitiveValue>
#include <QJSValue>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QString>
#include <QUrl>
#include <QVariant>
#include <qjsmanagedvalue.h>
#include "libqjsmanagedvalue.h"
#include "libqjsmanagedvalue.hxx"

QJSManagedValue* QJSManagedValue_new() {
    return new QJSManagedValue();
}

QJSManagedValue* QJSManagedValue_new2(QJSValue* value, QJSEngine* engine) {
    return new QJSManagedValue(*value, engine);
}

QJSManagedValue* QJSManagedValue_new3(const QJSPrimitiveValue* value, QJSEngine* engine) {
    return new QJSManagedValue(*value, engine);
}

QJSManagedValue* QJSManagedValue_new4(const QVariant* variant, QJSEngine* engine) {
    return new QJSManagedValue(*variant, engine);
}

QJSManagedValue* QJSManagedValue_new5(const libqt_string string, QJSEngine* engine) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    return new QJSManagedValue(string_QString, engine);
}

bool QJSManagedValue_Equals(const QJSManagedValue* self, const QJSManagedValue* other) {
    return self->equals(*other);
}

bool QJSManagedValue_StrictlyEquals(const QJSManagedValue* self, const QJSManagedValue* other) {
    return self->strictlyEquals(*other);
}

QJSEngine* QJSManagedValue_Engine(const QJSManagedValue* self) {
    return self->engine();
}

QJSManagedValue* QJSManagedValue_Prototype(const QJSManagedValue* self) {
    return new QJSManagedValue(self->prototype());
}

void QJSManagedValue_SetPrototype(QJSManagedValue* self, const QJSManagedValue* prototype) {
    self->setPrototype(*prototype);
}

int QJSManagedValue_Type(const QJSManagedValue* self) {
    return static_cast<int>(self->type());
}

bool QJSManagedValue_IsUndefined(const QJSManagedValue* self) {
    return self->isUndefined();
}

bool QJSManagedValue_IsBoolean(const QJSManagedValue* self) {
    return self->isBoolean();
}

bool QJSManagedValue_IsNumber(const QJSManagedValue* self) {
    return self->isNumber();
}

bool QJSManagedValue_IsString(const QJSManagedValue* self) {
    return self->isString();
}

bool QJSManagedValue_IsObject(const QJSManagedValue* self) {
    return self->isObject();
}

bool QJSManagedValue_IsSymbol(const QJSManagedValue* self) {
    return self->isSymbol();
}

bool QJSManagedValue_IsFunction(const QJSManagedValue* self) {
    return self->isFunction();
}

bool QJSManagedValue_IsInteger(const QJSManagedValue* self) {
    return self->isInteger();
}

bool QJSManagedValue_IsNull(const QJSManagedValue* self) {
    return self->isNull();
}

bool QJSManagedValue_IsRegularExpression(const QJSManagedValue* self) {
    return self->isRegularExpression();
}

bool QJSManagedValue_IsArray(const QJSManagedValue* self) {
    return self->isArray();
}

bool QJSManagedValue_IsUrl(const QJSManagedValue* self) {
    return self->isUrl();
}

bool QJSManagedValue_IsVariant(const QJSManagedValue* self) {
    return self->isVariant();
}

bool QJSManagedValue_IsQObject(const QJSManagedValue* self) {
    return self->isQObject();
}

bool QJSManagedValue_IsQMetaObject(const QJSManagedValue* self) {
    return self->isQMetaObject();
}

bool QJSManagedValue_IsDate(const QJSManagedValue* self) {
    return self->isDate();
}

bool QJSManagedValue_IsError(const QJSManagedValue* self) {
    return self->isError();
}

bool QJSManagedValue_IsJsMetaType(const QJSManagedValue* self) {
    return self->isJsMetaType();
}

libqt_string QJSManagedValue_ToString(const QJSManagedValue* self) {
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

double QJSManagedValue_ToNumber(const QJSManagedValue* self) {
    return self->toNumber();
}

bool QJSManagedValue_ToBoolean(const QJSManagedValue* self) {
    return self->toBoolean();
}

QJSPrimitiveValue* QJSManagedValue_ToPrimitive(const QJSManagedValue* self) {
    return new QJSPrimitiveValue(self->toPrimitive());
}

QJSValue* QJSManagedValue_ToJSValue(const QJSManagedValue* self) {
    return new QJSValue(self->toJSValue());
}

QVariant* QJSManagedValue_ToVariant(const QJSManagedValue* self) {
    return new QVariant(self->toVariant());
}

int QJSManagedValue_ToInteger(const QJSManagedValue* self) {
    return self->toInteger();
}

QRegularExpression* QJSManagedValue_ToRegularExpression(const QJSManagedValue* self) {
    return new QRegularExpression(self->toRegularExpression());
}

QUrl* QJSManagedValue_ToUrl(const QJSManagedValue* self) {
    return new QUrl(self->toUrl());
}

QObject* QJSManagedValue_ToQObject(const QJSManagedValue* self) {
    return self->toQObject();
}

QMetaObject* QJSManagedValue_ToQMetaObject(const QJSManagedValue* self) {
    return (QMetaObject*)self->toQMetaObject();
}

QDateTime* QJSManagedValue_ToDateTime(const QJSManagedValue* self) {
    return new QDateTime(self->toDateTime());
}

bool QJSManagedValue_HasProperty(const QJSManagedValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasProperty(name_QString);
}

bool QJSManagedValue_HasOwnProperty(const QJSManagedValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasOwnProperty(name_QString);
}

QJSValue* QJSManagedValue_Property(const QJSManagedValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QJSValue(self->property(name_QString));
}

void QJSManagedValue_SetProperty(QJSManagedValue* self, const libqt_string name, const QJSValue* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setProperty(name_QString, *value);
}

bool QJSManagedValue_DeleteProperty(QJSManagedValue* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->deleteProperty(name_QString);
}

bool QJSManagedValue_HasProperty2(const QJSManagedValue* self, unsigned int arrayIndex) {
    return self->hasProperty(static_cast<quint32>(arrayIndex));
}

bool QJSManagedValue_HasOwnProperty2(const QJSManagedValue* self, unsigned int arrayIndex) {
    return self->hasOwnProperty(static_cast<quint32>(arrayIndex));
}

QJSValue* QJSManagedValue_Property2(const QJSManagedValue* self, unsigned int arrayIndex) {
    return new QJSValue(self->property(static_cast<quint32>(arrayIndex)));
}

void QJSManagedValue_SetProperty2(QJSManagedValue* self, unsigned int arrayIndex, const QJSValue* value) {
    self->setProperty(static_cast<quint32>(arrayIndex), *value);
}

bool QJSManagedValue_DeleteProperty2(QJSManagedValue* self, unsigned int arrayIndex) {
    return self->deleteProperty(static_cast<quint32>(arrayIndex));
}

QJSValue* QJSManagedValue_Call(const QJSManagedValue* self) {
    return new QJSValue(self->call());
}

QJSValue* QJSManagedValue_CallWithInstance(const QJSManagedValue* self, const QJSValue* instance) {
    return new QJSValue(self->callWithInstance(*instance));
}

QJSValue* QJSManagedValue_CallAsConstructor(const QJSManagedValue* self) {
    return new QJSValue(self->callAsConstructor());
}

QJSManagedValue* QJSManagedValue_JsMetaType(const QJSManagedValue* self) {
    return new QJSManagedValue(self->jsMetaType());
}

libqt_list /* of libqt_string */ QJSManagedValue_JsMetaMembers(const QJSManagedValue* self) {
    QList<QString> _ret = self->jsMetaMembers();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QJSManagedValue* QJSManagedValue_JsMetaInstantiate(const QJSManagedValue* self) {
    return new QJSManagedValue(self->jsMetaInstantiate());
}

QJSValue* QJSManagedValue_Call1(const QJSManagedValue* self, const libqt_list /* of QJSValue* */ arguments) {
    QList<QJSValue> arguments_QList;
    arguments_QList.reserve(arguments.len);
    QJSValue** arguments_arr = static_cast<QJSValue**>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        arguments_QList.push_back(*(arguments_arr[i]));
    }
    return new QJSValue(self->call(arguments_QList));
}

QJSValue* QJSManagedValue_CallWithInstance2(const QJSManagedValue* self, const QJSValue* instance, const libqt_list /* of QJSValue* */ arguments) {
    QList<QJSValue> arguments_QList;
    arguments_QList.reserve(arguments.len);
    QJSValue** arguments_arr = static_cast<QJSValue**>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        arguments_QList.push_back(*(arguments_arr[i]));
    }
    return new QJSValue(self->callWithInstance(*instance, arguments_QList));
}

QJSValue* QJSManagedValue_CallAsConstructor1(const QJSManagedValue* self, const libqt_list /* of QJSValue* */ arguments) {
    QList<QJSValue> arguments_QList;
    arguments_QList.reserve(arguments.len);
    QJSValue** arguments_arr = static_cast<QJSValue**>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        arguments_QList.push_back(*(arguments_arr[i]));
    }
    return new QJSValue(self->callAsConstructor(arguments_QList));
}

QJSManagedValue* QJSManagedValue_JsMetaInstantiate1(const QJSManagedValue* self, const libqt_list /* of QJSValue* */ values) {
    QList<QJSValue> values_QList;
    values_QList.reserve(values.len);
    QJSValue** values_arr = static_cast<QJSValue**>(values.data);
    for (size_t i = 0; i < values.len; ++i) {
        values_QList.push_back(*(values_arr[i]));
    }
    return new QJSManagedValue(self->jsMetaInstantiate(values_QList));
}

void QJSManagedValue_Delete(QJSManagedValue* self) {
    delete self;
}
