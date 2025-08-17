#include <QFont>
#include <QSizeF>
#include <QStaticText>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextOption>
#include <QTransform>
#include <qstatictext.h>
#include "libqstatictext.h"
#include "libqstatictext.hxx"

QStaticText* QStaticText_new() {
    return new QStaticText();
}

QStaticText* QStaticText_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QStaticText(text_QString);
}

QStaticText* QStaticText_new3(const QStaticText* other) {
    return new QStaticText(*other);
}

void QStaticText_OperatorAssign(QStaticText* self, const QStaticText* param1) {
    self->operator=(*param1);
}

void QStaticText_Swap(QStaticText* self, QStaticText* other) {
    self->swap(*other);
}

void QStaticText_SetText(QStaticText* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QStaticText_Text(const QStaticText* self) {
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

void QStaticText_SetTextFormat(QStaticText* self, int textFormat) {
    self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QStaticText_TextFormat(const QStaticText* self) {
    return static_cast<int>(self->textFormat());
}

void QStaticText_SetTextWidth(QStaticText* self, double textWidth) {
    self->setTextWidth(static_cast<qreal>(textWidth));
}

double QStaticText_TextWidth(const QStaticText* self) {
    return static_cast<double>(self->textWidth());
}

void QStaticText_SetTextOption(QStaticText* self, const QTextOption* textOption) {
    self->setTextOption(*textOption);
}

QTextOption* QStaticText_TextOption(const QStaticText* self) {
    return new QTextOption(self->textOption());
}

QSizeF* QStaticText_Size(const QStaticText* self) {
    return new QSizeF(self->size());
}

void QStaticText_Prepare(QStaticText* self) {
    self->prepare();
}

void QStaticText_SetPerformanceHint(QStaticText* self, int performanceHint) {
    self->setPerformanceHint(static_cast<QStaticText::PerformanceHint>(performanceHint));
}

int QStaticText_PerformanceHint(const QStaticText* self) {
    return static_cast<int>(self->performanceHint());
}

bool QStaticText_OperatorEqual(const QStaticText* self, const QStaticText* param1) {
    return (*self == *param1);
}

bool QStaticText_OperatorNotEqual(const QStaticText* self, const QStaticText* param1) {
    return (*self != *param1);
}

void QStaticText_Prepare1(QStaticText* self, const QTransform* matrix) {
    self->prepare(*matrix);
}

void QStaticText_Prepare2(QStaticText* self, const QTransform* matrix, const QFont* font) {
    self->prepare(*matrix, *font);
}

void QStaticText_Delete(QStaticText* self) {
    delete self;
}
