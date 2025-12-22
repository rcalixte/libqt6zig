#include <QPlaceAttribute>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qplaceattribute.h>
#include "libqplaceattribute.h"
#include "libqplaceattribute.hxx"

QPlaceAttribute* QPlaceAttribute_new() {
    return new QPlaceAttribute();
}

QPlaceAttribute* QPlaceAttribute_new2(const QPlaceAttribute* other) {
    return new QPlaceAttribute(*other);
}

void QPlaceAttribute_OperatorAssign(QPlaceAttribute* self, const QPlaceAttribute* other) {
    self->operator=(*other);
}

void QPlaceAttribute_Swap(QPlaceAttribute* self, QPlaceAttribute* other) {
    self->swap(*other);
}

libqt_string QPlaceAttribute_Label(const QPlaceAttribute* self) {
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

void QPlaceAttribute_SetLabel(QPlaceAttribute* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string QPlaceAttribute_Text(const QPlaceAttribute* self) {
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

void QPlaceAttribute_SetText(QPlaceAttribute* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

bool QPlaceAttribute_IsEmpty(const QPlaceAttribute* self) {
    return self->isEmpty();
}

void QPlaceAttribute_Delete(QPlaceAttribute* self) {
    delete self;
}
