#include <QBackingStore>
#include <QPaintDevice>
#include <QPoint>
#include <QRegion>
#include <QSize>
#include <QWindow>
#include <qbackingstore.h>
#include "libqbackingstore.h"
#include "libqbackingstore.hxx"

QBackingStore* QBackingStore_new(QWindow* window) {
    return new QBackingStore(window);
}

QWindow* QBackingStore_Window(const QBackingStore* self) {
    return self->window();
}

QPaintDevice* QBackingStore_PaintDevice(QBackingStore* self) {
    return self->paintDevice();
}

void QBackingStore_Flush(QBackingStore* self, const QRegion* region) {
    self->flush(*region);
}

void QBackingStore_Resize(QBackingStore* self, const QSize* size) {
    self->resize(*size);
}

QSize* QBackingStore_Size(const QBackingStore* self) {
    return new QSize(self->size());
}

bool QBackingStore_Scroll(QBackingStore* self, const QRegion* area, int dx, int dy) {
    return self->scroll(*area, static_cast<int>(dx), static_cast<int>(dy));
}

void QBackingStore_BeginPaint(QBackingStore* self, const QRegion* param1) {
    self->beginPaint(*param1);
}

void QBackingStore_EndPaint(QBackingStore* self) {
    self->endPaint();
}

void QBackingStore_SetStaticContents(QBackingStore* self, const QRegion* region) {
    self->setStaticContents(*region);
}

QRegion* QBackingStore_StaticContents(const QBackingStore* self) {
    return new QRegion(self->staticContents());
}

bool QBackingStore_HasStaticContents(const QBackingStore* self) {
    return self->hasStaticContents();
}

void QBackingStore_Flush2(QBackingStore* self, const QRegion* region, QWindow* window) {
    self->flush(*region, window);
}

void QBackingStore_Flush3(QBackingStore* self, const QRegion* region, QWindow* window, const QPoint* offset) {
    self->flush(*region, window, *offset);
}

void QBackingStore_Delete(QBackingStore* self) {
    delete self;
}
