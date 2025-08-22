#include <QList>
#include <QPdfLink>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qpdflink.h>
#include "libqpdflink.h"
#include "libqpdflink.hxx"

QPdfLink* QPdfLink_new() {
    return new QPdfLink();
}

QPdfLink* QPdfLink_new2(const QPdfLink* other) {
    return new QPdfLink(*other);
}

void QPdfLink_OperatorAssign(QPdfLink* self, const QPdfLink* other) {
    self->operator=(*other);
}

void QPdfLink_Swap(QPdfLink* self, QPdfLink* other) {
    self->swap(*other);
}

bool QPdfLink_IsValid(const QPdfLink* self) {
    return self->isValid();
}

int QPdfLink_Page(const QPdfLink* self) {
    return self->page();
}

QPointF* QPdfLink_Location(const QPdfLink* self) {
    return new QPointF(self->location());
}

double QPdfLink_Zoom(const QPdfLink* self) {
    return static_cast<double>(self->zoom());
}

QUrl* QPdfLink_Url(const QPdfLink* self) {
    return new QUrl(self->url());
}

libqt_string QPdfLink_ContextBefore(const QPdfLink* self) {
    QString _ret = self->contextBefore();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfLink_ContextAfter(const QPdfLink* self) {
    QString _ret = self->contextAfter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QRectF* */ QPdfLink_Rectangles(const QPdfLink* self) {
    QList<QRectF> _ret = self->rectangles();
    // Convert QList<> from C++ memory to manually-managed C memory
    QRectF** _arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QRectF(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QPdfLink_ToString(const QPdfLink* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfLink_CopyToClipboard(const QPdfLink* self) {
    self->copyToClipboard();
}

void QPdfLink_CopyToClipboard1(const QPdfLink* self, int mode) {
    self->copyToClipboard(static_cast<QClipboard::Mode>(mode));
}

void QPdfLink_Delete(QPdfLink* self) {
    delete self;
}
