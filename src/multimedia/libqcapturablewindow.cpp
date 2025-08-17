#include <QCapturableWindow>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcapturablewindow.h>
#include "libqcapturablewindow.h"
#include "libqcapturablewindow.hxx"

QCapturableWindow* QCapturableWindow_new() {
    return new QCapturableWindow();
}

QCapturableWindow* QCapturableWindow_new2(const QCapturableWindow* other) {
    return new QCapturableWindow(*other);
}

void QCapturableWindow_OperatorAssign(QCapturableWindow* self, const QCapturableWindow* other) {
    self->operator=(*other);
}

void QCapturableWindow_Swap(QCapturableWindow* self, QCapturableWindow* other) {
    self->swap(*other);
}

bool QCapturableWindow_IsValid(const QCapturableWindow* self) {
    return self->isValid();
}

libqt_string QCapturableWindow_Description(const QCapturableWindow* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCapturableWindow_Delete(QCapturableWindow* self) {
    delete self;
}
