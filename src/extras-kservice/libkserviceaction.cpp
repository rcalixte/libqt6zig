#include <KServiceAction>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <kserviceaction.h>
#include "libkserviceaction.h"
#include "libkserviceaction.hxx"

KServiceAction* KServiceAction_new() {
    return new KServiceAction();
}

KServiceAction* KServiceAction_new2(const KServiceAction* other) {
    return new KServiceAction(*other);
}

void KServiceAction_OperatorAssign(KServiceAction* self, const KServiceAction* other) {
    self->operator=(*other);
}

void KServiceAction_SetData(KServiceAction* self, const QVariant* userData) {
    self->setData(*userData);
}

QVariant* KServiceAction_Data(const KServiceAction* self) {
    return new QVariant(self->data());
}

libqt_string KServiceAction_Name(const KServiceAction* self) {
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

libqt_string KServiceAction_Text(const KServiceAction* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KServiceAction_Icon(const KServiceAction* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KServiceAction_Exec(const KServiceAction* self) {
    QString _ret = self->exec();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KServiceAction_NoDisplay(const KServiceAction* self) {
    return self->noDisplay();
}

bool KServiceAction_IsSeparator(const KServiceAction* self) {
    return self->isSeparator();
}

void KServiceAction_Delete(KServiceAction* self) {
    delete self;
}
