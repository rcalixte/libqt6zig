#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <qpaintdevice.h>
#include "libqpaintdevice.h"
#include "libqpaintdevice.hxx"

int QPaintDevice_DevType(const QPaintDevice* self) {
    return self->devType();
}

bool QPaintDevice_PaintingActive(const QPaintDevice* self) {
    return self->paintingActive();
}

QPaintEngine* QPaintDevice_PaintEngine(const QPaintDevice* self) {
    return self->paintEngine();
}

int QPaintDevice_Width(const QPaintDevice* self) {
    return self->width();
}

int QPaintDevice_Height(const QPaintDevice* self) {
    return self->height();
}

int QPaintDevice_WidthMM(const QPaintDevice* self) {
    return self->widthMM();
}

int QPaintDevice_HeightMM(const QPaintDevice* self) {
    return self->heightMM();
}

int QPaintDevice_LogicalDpiX(const QPaintDevice* self) {
    return self->logicalDpiX();
}

int QPaintDevice_LogicalDpiY(const QPaintDevice* self) {
    return self->logicalDpiY();
}

int QPaintDevice_PhysicalDpiX(const QPaintDevice* self) {
    return self->physicalDpiX();
}

int QPaintDevice_PhysicalDpiY(const QPaintDevice* self) {
    return self->physicalDpiY();
}

double QPaintDevice_DevicePixelRatio(const QPaintDevice* self) {
    return static_cast<double>(self->devicePixelRatio());
}

double QPaintDevice_DevicePixelRatioF(const QPaintDevice* self) {
    return static_cast<double>(self->devicePixelRatioF());
}

int QPaintDevice_ColorCount(const QPaintDevice* self) {
    return self->colorCount();
}

int QPaintDevice_Depth(const QPaintDevice* self) {
    return self->depth();
}

double QPaintDevice_DevicePixelRatioFScale() {
    return static_cast<double>(QPaintDevice::devicePixelRatioFScale());
}

int QPaintDevice_EncodeMetricF(int metric, double value) {
    return QPaintDevice::encodeMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metric), static_cast<double>(value));
}

void QPaintDevice_Delete(QPaintDevice* self) {
    delete self;
}
