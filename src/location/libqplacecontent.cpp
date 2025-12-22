#include <QList>
#include <QPlaceContent>
#include <QPlaceSupplier>
#include <QPlaceUser>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qplacecontent.h>
#include "libqplacecontent.h"
#include "libqplacecontent.hxx"

QPlaceContent* QPlaceContent_new() {
    return new QPlaceContent();
}

QPlaceContent* QPlaceContent_new2(const QPlaceContent* other) {
    return new QPlaceContent(*other);
}

QPlaceContent* QPlaceContent_new3(int typeVal) {
    return new QPlaceContent(static_cast<QPlaceContent::Type>(typeVal));
}

void QPlaceContent_OperatorAssign(QPlaceContent* self, const QPlaceContent* other) {
    self->operator=(*other);
}

void QPlaceContent_Swap(QPlaceContent* self, QPlaceContent* other) {
    self->swap(*other);
}

void QPlaceContent_Detach(QPlaceContent* self) {
    self->detach();
}

bool QPlaceContent_OperatorEqual(const QPlaceContent* self, const QPlaceContent* other) {
    return (*self == *other);
}

bool QPlaceContent_OperatorNotEqual(const QPlaceContent* self, const QPlaceContent* other) {
    return (*self != *other);
}

int QPlaceContent_Type(const QPlaceContent* self) {
    return static_cast<int>(self->type());
}

libqt_list /* of int */ QPlaceContent_DataTags(const QPlaceContent* self) {
    QList<QPlaceContent::DataTag> _ret = self->dataTags();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QVariant* QPlaceContent_Value(const QPlaceContent* self, int tag) {
    return new QVariant(self->value(static_cast<QPlaceContent::DataTag>(tag)));
}

void QPlaceContent_SetValue(QPlaceContent* self, int tag, const QVariant* param2) {
    self->setValue(static_cast<QPlaceContent::DataTag>(tag), *param2);
}

QPlaceSupplier* QPlaceContent_Supplier(const QPlaceContent* self) {
    return new QPlaceSupplier(self->supplier());
}

void QPlaceContent_SetSupplier(QPlaceContent* self, const QPlaceSupplier* supplier) {
    self->setSupplier(*supplier);
}

QPlaceUser* QPlaceContent_User(const QPlaceContent* self) {
    return new QPlaceUser(self->user());
}

void QPlaceContent_SetUser(QPlaceContent* self, const QPlaceUser* user) {
    self->setUser(*user);
}

libqt_string QPlaceContent_Attribution(const QPlaceContent* self) {
    QString _ret = self->attribution();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceContent_SetAttribution(QPlaceContent* self, const libqt_string attribution) {
    QString attribution_QString = QString::fromUtf8(attribution.data, attribution.len);
    self->setAttribution(attribution_QString);
}

void QPlaceContent_Delete(QPlaceContent* self) {
    delete self;
}
