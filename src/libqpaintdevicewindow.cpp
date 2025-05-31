#include <QEvent>
#include <QExposeEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QRect>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QWindow>
#include <qpaintdevicewindow.h>
#include "libqpaintdevicewindow.h"
#include "libqpaintdevicewindow.hxx"

QMetaObject* QPaintDeviceWindow_MetaObject(const QPaintDeviceWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPaintDeviceWindow_Metacast(QPaintDeviceWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPaintDeviceWindow_Metacall(QPaintDeviceWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPaintDeviceWindow_Tr(const char* s) {
    QString _ret = QPaintDeviceWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, const QRect* rect) {
    self->update(*rect);
}

void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, const QRegion* region) {
    self->update(*region);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self) {
    self->update();
}

libqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c) {
    QString _ret = QPaintDeviceWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPaintDeviceWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
    delete self;
}
