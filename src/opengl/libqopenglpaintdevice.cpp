#include <QOpenGLContext>
#include <QOpenGLPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QSize>
#include <qopenglpaintdevice.h>
#include "libqopenglpaintdevice.h"
#include "libqopenglpaintdevice.hxx"

QOpenGLPaintDevice* QOpenGLPaintDevice_new() {
    return new VirtualQOpenGLPaintDevice();
}

QOpenGLPaintDevice* QOpenGLPaintDevice_new2(const QSize* size) {
    return new VirtualQOpenGLPaintDevice(*size);
}

QOpenGLPaintDevice* QOpenGLPaintDevice_new3(int width, int height) {
    return new VirtualQOpenGLPaintDevice(static_cast<int>(width), static_cast<int>(height));
}

int QOpenGLPaintDevice_DevType(const QOpenGLPaintDevice* self) {
    return self->devType();
}

QPaintEngine* QOpenGLPaintDevice_PaintEngine(const QOpenGLPaintDevice* self) {
    return self->paintEngine();
}

QOpenGLContext* QOpenGLPaintDevice_Context(const QOpenGLPaintDevice* self) {
    return self->context();
}

QSize* QOpenGLPaintDevice_Size(const QOpenGLPaintDevice* self) {
    return new QSize(self->size());
}

void QOpenGLPaintDevice_SetSize(QOpenGLPaintDevice* self, const QSize* size) {
    self->setSize(*size);
}

void QOpenGLPaintDevice_SetDevicePixelRatio(QOpenGLPaintDevice* self, double devicePixelRatio) {
    self->setDevicePixelRatio(static_cast<qreal>(devicePixelRatio));
}

double QOpenGLPaintDevice_DotsPerMeterX(const QOpenGLPaintDevice* self) {
    return static_cast<double>(self->dotsPerMeterX());
}

double QOpenGLPaintDevice_DotsPerMeterY(const QOpenGLPaintDevice* self) {
    return static_cast<double>(self->dotsPerMeterY());
}

void QOpenGLPaintDevice_SetDotsPerMeterX(QOpenGLPaintDevice* self, double dotsPerMeterX) {
    self->setDotsPerMeterX(static_cast<qreal>(dotsPerMeterX));
}

void QOpenGLPaintDevice_SetDotsPerMeterY(QOpenGLPaintDevice* self, double dotsPerMeterY) {
    self->setDotsPerMeterY(static_cast<qreal>(dotsPerMeterY));
}

void QOpenGLPaintDevice_SetPaintFlipped(QOpenGLPaintDevice* self, bool flipped) {
    self->setPaintFlipped(flipped);
}

bool QOpenGLPaintDevice_PaintFlipped(const QOpenGLPaintDevice* self) {
    return self->paintFlipped();
}

void QOpenGLPaintDevice_EnsureActiveTarget(QOpenGLPaintDevice* self) {
    self->ensureActiveTarget();
}

int QOpenGLPaintDevice_Metric(const QOpenGLPaintDevice* self, int metric) {
    auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice) {
        return vqopenglpaintdevice->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    qFatal("Error: Protected method QOpenGLPaintDevice::metric called without a directly constructed type");
}

// Base class handler implementation
int QOpenGLPaintDevice_SuperDevType(const QOpenGLPaintDevice* self) {
    return self->QOpenGLPaintDevice::devType();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnDevType(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self)))
        vqopenglpaintdevice->qopenglpaintdevice_devtype_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_DevType_Callback>(slot);
}

// Base class handler implementation
QPaintEngine* QOpenGLPaintDevice_SuperPaintEngine(const QOpenGLPaintDevice* self) {
    return self->QOpenGLPaintDevice::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnPaintEngine(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self)))
        vqopenglpaintdevice->qopenglpaintdevice_paintengine_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_PaintEngine_Callback>(slot);
}

// Base class handler implementation
void QOpenGLPaintDevice_SuperEnsureActiveTarget(QOpenGLPaintDevice* self) {
    self->QOpenGLPaintDevice::ensureActiveTarget();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnEnsureActiveTarget(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = dynamic_cast<VirtualQOpenGLPaintDevice*>(self))
        vqopenglpaintdevice->qopenglpaintdevice_ensureactivetarget_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_EnsureActiveTarget_Callback>(slot);
}

// Base class handler implementation
int QOpenGLPaintDevice_SuperMetric(const QOpenGLPaintDevice* self, int metric) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self))) {
        return vqopenglpaintdevice->QOpenGLPaintDevice::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnMetric(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self)))
        vqopenglpaintdevice->qopenglpaintdevice_metric_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_Metric_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLPaintDevice_InitPainter(const QOpenGLPaintDevice* self, QPainter* painter) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice) {
        vqopenglpaintdevice->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLPaintDevice_SuperInitPainter(const QOpenGLPaintDevice* self, QPainter* painter) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self))) {
        vqopenglpaintdevice->QOpenGLPaintDevice::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnInitPainter(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self)))
        vqopenglpaintdevice->qopenglpaintdevice_initpainter_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QOpenGLPaintDevice_Redirected(const QOpenGLPaintDevice* self, QPoint* offset) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice) {
        return vqopenglpaintdevice->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QOpenGLPaintDevice_SuperRedirected(const QOpenGLPaintDevice* self, QPoint* offset) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self))) {
        return vqopenglpaintdevice->QOpenGLPaintDevice::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnRedirected(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self)))
        vqopenglpaintdevice->qopenglpaintdevice_redirected_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QOpenGLPaintDevice_SharedPainter(const QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice) {
        return vqopenglpaintdevice->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QOpenGLPaintDevice_SuperSharedPainter(const QOpenGLPaintDevice* self) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self))) {
        return vqopenglpaintdevice->QOpenGLPaintDevice::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QOpenGLPaintDevice::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnSharedPainter(QOpenGLPaintDevice* self, intptr_t slot) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self)))
        vqopenglpaintdevice->qopenglpaintdevice_sharedpainter_callback = reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
double QOpenGLPaintDevice_GetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB) {
    if (auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self))) {
        return vqopenglpaintdevice->VirtualQOpenGLPaintDevice::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QOpenGLPaintDevice::getDecodedMetricF called without a directly constructed type");
}

void QOpenGLPaintDevice_Delete(QOpenGLPaintDevice* self) {
    delete self;
}
