#include <QPlaceContactDetail>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qplacecontactdetail.h>
#include "libqplacecontactdetail.h"
#include "libqplacecontactdetail.hxx"

QPlaceContactDetail* QPlaceContactDetail_new() {
    return new QPlaceContactDetail();
}

QPlaceContactDetail* QPlaceContactDetail_new2(const QPlaceContactDetail* other) {
    return new QPlaceContactDetail(*other);
}

void QPlaceContactDetail_OperatorAssign(QPlaceContactDetail* self, const QPlaceContactDetail* other) {
    self->operator=(*other);
}

void QPlaceContactDetail_Swap(QPlaceContactDetail* self, QPlaceContactDetail* other) {
    self->swap(*other);
}

libqt_string QPlaceContactDetail_Label(const QPlaceContactDetail* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceContactDetail_SetLabel(QPlaceContactDetail* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string QPlaceContactDetail_Value(const QPlaceContactDetail* self) {
    QString _ret = self->value();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceContactDetail_SetValue(QPlaceContactDetail* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setValue(value_QString);
}

void QPlaceContactDetail_Clear(QPlaceContactDetail* self) {
    self->clear();
}

void QPlaceContactDetail_Delete(QPlaceContactDetail* self) {
    delete self;
}
