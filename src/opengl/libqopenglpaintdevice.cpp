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
    auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        return self->devType();
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->devType();
    }
}

QPaintEngine* QOpenGLPaintDevice_PaintEngine(const QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        return self->paintEngine();
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->paintEngine();
    }
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
    self->setDotsPerMeterX(static_cast<double>(dotsPerMeterX));
}

void QOpenGLPaintDevice_SetDotsPerMeterY(QOpenGLPaintDevice* self, double dotsPerMeterY) {
    self->setDotsPerMeterY(static_cast<double>(dotsPerMeterY));
}

void QOpenGLPaintDevice_SetPaintFlipped(QOpenGLPaintDevice* self, bool flipped) {
    self->setPaintFlipped(flipped);
}

bool QOpenGLPaintDevice_PaintFlipped(const QOpenGLPaintDevice* self) {
    return self->paintFlipped();
}

void QOpenGLPaintDevice_EnsureActiveTarget(QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = dynamic_cast<VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        self->ensureActiveTarget();
    } else {
        ((VirtualQOpenGLPaintDevice*)self)->ensureActiveTarget();
    }
}

int QOpenGLPaintDevice_Metric(const QOpenGLPaintDevice* self, int metric) {
    auto* vqopenglpaintdevice = dynamic_cast<const VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        return vqopenglpaintdevice->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    return {};
}

// Base class handler implementation
int QOpenGLPaintDevice_QBaseDevType(const QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_DevType_IsBase(true);
        return vqopenglpaintdevice->devType();
    } else {
        return self->QOpenGLPaintDevice::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnDevType(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_DevType_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_DevType_Callback>(slot));
    }
}

// Base class handler implementation
QPaintEngine* QOpenGLPaintDevice_QBasePaintEngine(const QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_PaintEngine_IsBase(true);
        return vqopenglpaintdevice->paintEngine();
    } else {
        return self->QOpenGLPaintDevice::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnPaintEngine(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_PaintEngine_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_PaintEngine_Callback>(slot));
    }
}

// Base class handler implementation
void QOpenGLPaintDevice_QBaseEnsureActiveTarget(QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = dynamic_cast<VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_EnsureActiveTarget_IsBase(true);
        vqopenglpaintdevice->ensureActiveTarget();
    } else {
        self->QOpenGLPaintDevice::ensureActiveTarget();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnEnsureActiveTarget(QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = dynamic_cast<VirtualQOpenGLPaintDevice*>(self);
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_EnsureActiveTarget_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_EnsureActiveTarget_Callback>(slot));
    }
}

// Base class handler implementation
int QOpenGLPaintDevice_QBaseMetric(const QOpenGLPaintDevice* self, int metric) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_Metric_IsBase(true);
        return vqopenglpaintdevice->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnMetric(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_Metric_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLPaintDevice_InitPainter(const QOpenGLPaintDevice* self, QPainter* painter) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->initPainter(painter);
    } else {
        ((VirtualQOpenGLPaintDevice*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QOpenGLPaintDevice_QBaseInitPainter(const QOpenGLPaintDevice* self, QPainter* painter) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_InitPainter_IsBase(true);
        vqopenglpaintdevice->initPainter(painter);
    } else {
        ((VirtualQOpenGLPaintDevice*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnInitPainter(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_InitPainter_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QOpenGLPaintDevice_Redirected(const QOpenGLPaintDevice* self, QPoint* offset) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        return vqopenglpaintdevice->redirected(offset);
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QOpenGLPaintDevice_QBaseRedirected(const QOpenGLPaintDevice* self, QPoint* offset) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_Redirected_IsBase(true);
        return vqopenglpaintdevice->redirected(offset);
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnRedirected(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_Redirected_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QOpenGLPaintDevice_SharedPainter(const QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        return vqopenglpaintdevice->sharedPainter();
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QOpenGLPaintDevice_QBaseSharedPainter(const QOpenGLPaintDevice* self) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_SharedPainter_IsBase(true);
        return vqopenglpaintdevice->sharedPainter();
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnSharedPainter(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_SharedPainter_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
double QOpenGLPaintDevice_GetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        return vqopenglpaintdevice->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QOpenGLPaintDevice_QBaseGetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_GetDecodedMetricF_IsBase(true);
        return vqopenglpaintdevice->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQOpenGLPaintDevice*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLPaintDevice_OnGetDecodedMetricF(const QOpenGLPaintDevice* self, intptr_t slot) {
    auto* vqopenglpaintdevice = const_cast<VirtualQOpenGLPaintDevice*>(dynamic_cast<const VirtualQOpenGLPaintDevice*>(self));
    if (vqopenglpaintdevice && vqopenglpaintdevice->isVirtualQOpenGLPaintDevice) {
        vqopenglpaintdevice->setQOpenGLPaintDevice_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQOpenGLPaintDevice::QOpenGLPaintDevice_GetDecodedMetricF_Callback>(slot));
    }
}

void QOpenGLPaintDevice_Delete(QOpenGLPaintDevice* self) {
    delete self;
}
