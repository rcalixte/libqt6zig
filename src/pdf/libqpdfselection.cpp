#include <QPdfSelection>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpdfselection.h>
#include "libqpdfselection.h"
#include "libqpdfselection.hxx"

QPdfSelection* QPdfSelection_new(const QPdfSelection* other) {
    return new QPdfSelection(*other);
}

void QPdfSelection_OperatorAssign(QPdfSelection* self, const QPdfSelection* other) {
    self->operator=(*other);
}

void QPdfSelection_Swap(QPdfSelection* self, QPdfSelection* other) {
    self->swap(*other);
}

bool QPdfSelection_IsValid(const QPdfSelection* self) {
    return self->isValid();
}

libqt_string QPdfSelection_Text(const QPdfSelection* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QRectF* QPdfSelection_BoundingRectangle(const QPdfSelection* self) {
    return new QRectF(self->boundingRectangle());
}

int QPdfSelection_StartIndex(const QPdfSelection* self) {
    return self->startIndex();
}

int QPdfSelection_EndIndex(const QPdfSelection* self) {
    return self->endIndex();
}

void QPdfSelection_CopyToClipboard(const QPdfSelection* self) {
    self->copyToClipboard();
}

void QPdfSelection_CopyToClipboard1(const QPdfSelection* self, int mode) {
    self->copyToClipboard(static_cast<QClipboard::Mode>(mode));
}

void QPdfSelection_Delete(QPdfSelection* self) {
    delete self;
}
