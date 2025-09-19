#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__AccountBalance
#include <QString>
#include <QByteArray>
#include <cstring>
#include <accountbalance.h>
#include "libaccountbalance.h"
#include "libaccountbalance.hxx"

Attica__AccountBalance* Attica__AccountBalance_new() {
    return new Attica::AccountBalance();
}

Attica__AccountBalance* Attica__AccountBalance_new2(const Attica__AccountBalance* other) {
    return new Attica::AccountBalance(*other);
}

void Attica__AccountBalance_OperatorAssign(Attica__AccountBalance* self, const Attica__AccountBalance* other) {
    self->operator=(*other);
}

void Attica__AccountBalance_SetCurrency(Attica__AccountBalance* self, const libqt_string currency) {
    QString currency_QString = QString::fromUtf8(currency.data, currency.len);
    self->setCurrency(currency_QString);
}

libqt_string Attica__AccountBalance_Currency(const Attica__AccountBalance* self) {
    QString _ret = self->currency();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__AccountBalance_SetBalance(Attica__AccountBalance* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setBalance(name_QString);
}

libqt_string Attica__AccountBalance_Balance(const Attica__AccountBalance* self) {
    QString _ret = self->balance();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__AccountBalance_Delete(Attica__AccountBalance* self) {
    delete self;
}
