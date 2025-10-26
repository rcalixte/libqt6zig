#define WORKAROUND_INNER_CLASS_DEFINITION_Accounts__Error
#include <QString>
#include <QByteArray>
#include <cstring>
#include <error.h>
#include "liberror.h"
#include "liberror.hxx"

Accounts__Error* Accounts__Error_new() {
    return new Accounts::Error();
}

Accounts__Error* Accounts__Error_new2(const Accounts__Error* src) {
    return new Accounts::Error(*src);
}

Accounts__Error* Accounts__Error_new3(int typeVal) {
    return new Accounts::Error(static_cast<Accounts::Error::ErrorType>(typeVal));
}

Accounts__Error* Accounts__Error_new4(int typeVal, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return new Accounts::Error(static_cast<Accounts::Error::ErrorType>(typeVal), message_QString);
}

void Accounts__Error_OperatorAssign(Accounts__Error* self, const Accounts__Error* src) {
    self->operator=(*src);
}

int Accounts__Error_Type(const Accounts__Error* self) {
    return static_cast<int>(self->type());
}

libqt_string Accounts__Error_Message(const Accounts__Error* self) {
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

void Accounts__Error_Delete(Accounts__Error* self) {
    delete self;
}
