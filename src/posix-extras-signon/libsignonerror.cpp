#include <QString>
#include <QByteArray>
#include <cstring>
#define WORKAROUND_INNER_CLASS_DEFINITION_SignOn__Error
#include <signonerror.h>
#include "libsignonerror.h"
#include "libsignonerror.hxx"

SignOn__Error* SignOn__Error_new() {
    return new SignOn::Error();
}

SignOn__Error* SignOn__Error_new2(const SignOn__Error* src) {
    return new SignOn::Error(*src);
}

SignOn__Error* SignOn__Error_new3(int typeVal) {
    return new SignOn::Error(static_cast<int>(typeVal));
}

SignOn__Error* SignOn__Error_new4(int typeVal, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return new SignOn::Error(static_cast<int>(typeVal), message_QString);
}

void SignOn__Error_OperatorAssign(SignOn__Error* self, const SignOn__Error* src) {
    self->operator=(*src);
}

void SignOn__Error_SetType(SignOn__Error* self, int typeVal) {
    self->setType(static_cast<int>(typeVal));
}

void SignOn__Error_SetMessage(SignOn__Error* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->setMessage(message_QString);
}

int SignOn__Error_Type(const SignOn__Error* self) {
    return self->type();
}

libqt_string SignOn__Error_Message(const SignOn__Error* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void SignOn__Error_Delete(SignOn__Error* self) {
    delete self;
}
