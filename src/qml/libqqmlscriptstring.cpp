#include <QQmlScriptString>
#include <QString>
#include <qqmlscriptstring.h>
#include "libqqmlscriptstring.h"
#include "libqqmlscriptstring.hxx"

QQmlScriptString* QQmlScriptString_new() {
    return new QQmlScriptString();
}

QQmlScriptString* QQmlScriptString_new2(const QQmlScriptString* param1) {
    return new QQmlScriptString(*param1);
}

void QQmlScriptString_OperatorAssign(QQmlScriptString* self, const QQmlScriptString* param1) {
    self->operator=(*param1);
}

bool QQmlScriptString_OperatorEqual(const QQmlScriptString* self, const QQmlScriptString* param1) {
    return (*self == *param1);
}

bool QQmlScriptString_OperatorNotEqual(const QQmlScriptString* self, const QQmlScriptString* param1) {
    return (*self != *param1);
}

bool QQmlScriptString_IsEmpty(const QQmlScriptString* self) {
    return self->isEmpty();
}

bool QQmlScriptString_IsUndefinedLiteral(const QQmlScriptString* self) {
    return self->isUndefinedLiteral();
}

bool QQmlScriptString_IsNullLiteral(const QQmlScriptString* self) {
    return self->isNullLiteral();
}

libqt_string QQmlScriptString_StringLiteral(const QQmlScriptString* self) {
    auto _ret = self->stringLiteral();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QQmlScriptString_NumberLiteral(const QQmlScriptString* self, bool* ok) {
    return static_cast<double>(self->numberLiteral(ok));
}

bool QQmlScriptString_BooleanLiteral(const QQmlScriptString* self, bool* ok) {
    return self->booleanLiteral(ok);
}

void QQmlScriptString_Delete(QQmlScriptString* self) {
    delete self;
}
