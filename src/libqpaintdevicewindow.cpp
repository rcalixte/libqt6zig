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

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, const QRect* rect) {
    self->update(*rect);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self, const QRegion* region) {
    self->update(*region);
}

void QPaintDeviceWindow_Update3(QPaintDeviceWindow* self) {
    self->update();
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
    delete self;
}
