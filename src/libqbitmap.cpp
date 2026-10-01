#include <QBitmap>
#include <QImage>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QTransform>
#include <QVariant>
#include <qbitmap.h>
#include "libqbitmap.h"
#include "libqbitmap.hxx"

QBitmap* QBitmap_new() {
    return new VirtualQBitmap();
}

QBitmap* QBitmap_new2(const QPixmap* param1) {
    return new VirtualQBitmap(*param1);
}

QBitmap* QBitmap_new3(int w, int h) {
    return new VirtualQBitmap(static_cast<int>(w), static_cast<int>(h));
}

QBitmap* QBitmap_new4(const QSize* param1) {
    return new VirtualQBitmap(*param1);
}

QBitmap* QBitmap_new5(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQBitmap(fileName_QString);
}

QBitmap* QBitmap_new6(const QBitmap* param1) {
    return new VirtualQBitmap(*param1);
}

QBitmap* QBitmap_new7(const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQBitmap(fileName_QString, format);
}

void QBitmap_OperatorAssign(QBitmap* self, const QPixmap* param1) {
    self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
    self->swap(*other);
}

QVariant* QBitmap_ToQVariant(const QBitmap* self) {
    return new QVariant(self->operator QVariant());
}

void QBitmap_Clear(QBitmap* self) {
    self->clear();
}

QBitmap* QBitmap_FromImage(const QImage* image) {
    return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_FromData(const QSize* size, const unsigned char* bits) {
    return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits)));
}

QBitmap* QBitmap_FromPixmap(const QPixmap* pixmap) {
    return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, const QTransform* matrix) {
    return new QBitmap(self->transformed(*matrix));
}

void QBitmap_OperatorAssign2(QBitmap* self, const QBitmap* param1) {
    self->operator=(*param1);
}

QBitmap* QBitmap_FromImage2(const QImage* image, int flags) {
    return new QBitmap(QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QBitmap* QBitmap_FromData3(const QSize* size, const unsigned char* bits, int monoFormat) {
    return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat)));
}

// Derived class handler implementation
int QBitmap_DevType(const QBitmap* self) {
    return self->devType();
}

// Base class handler implementation
int QBitmap_SuperDevType(const QBitmap* self) {
    return self->QBitmap::devType();
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnDevType(QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self)))
        vqbitmap->qbitmap_devtype_callback = reinterpret_cast<VirtualQBitmap::QBitmap_DevType_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QBitmap_PaintEngine(const QBitmap* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QBitmap_SuperPaintEngine(const QBitmap* self) {
    return self->QBitmap::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnPaintEngine(QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self)))
        vqbitmap->qbitmap_paintengine_callback = reinterpret_cast<VirtualQBitmap::QBitmap_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
int QBitmap_Metric(const QBitmap* self, int param1) {
    auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self));
    if (vqbitmap) {
        return vqbitmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QBitmap::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QBitmap_SuperMetric(const QBitmap* self, int param1) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->QBitmap::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QBitmap::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnMetric(QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self)))
        vqbitmap->qbitmap_metric_callback = reinterpret_cast<VirtualQBitmap::QBitmap_Metric_Callback>(slot);
}

// Derived class handler implementation
void QBitmap_InitPainter(const QBitmap* self, QPainter* painter) {
    auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self));
    if (vqbitmap) {
        vqbitmap->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QBitmap::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QBitmap_SuperInitPainter(const QBitmap* self, QPainter* painter) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->QBitmap::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QBitmap::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnInitPainter(QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self)))
        vqbitmap->qbitmap_initpainter_callback = reinterpret_cast<VirtualQBitmap::QBitmap_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QBitmap_Redirected(const QBitmap* self, QPoint* offset) {
    auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self));
    if (vqbitmap) {
        return vqbitmap->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QBitmap::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QBitmap_SuperRedirected(const QBitmap* self, QPoint* offset) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->QBitmap::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QBitmap::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnRedirected(QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self)))
        vqbitmap->qbitmap_redirected_callback = reinterpret_cast<VirtualQBitmap::QBitmap_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QBitmap_SharedPainter(const QBitmap* self) {
    auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self));
    if (vqbitmap) {
        return vqbitmap->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QBitmap::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QBitmap_SuperSharedPainter(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->QBitmap::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QBitmap::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnSharedPainter(QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self)))
        vqbitmap->qbitmap_sharedpainter_callback = reinterpret_cast<VirtualQBitmap::QBitmap_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
QPixmap* QBitmap_FromImageInPlace(QBitmap* self, QImage* image) {
    if (auto* vqbitmap = dynamic_cast<VirtualQBitmap*>(self))
        return new QPixmap(vqbitmap->fromImageInPlace(*image));
    qFatal("Error: Protected method QBitmap::fromImageInPlace called without a directly constructed type");
}

// Derived class protected handler implementation
double QBitmap_GetDecodedMetricF(const QBitmap* self, int metricA, int metricB) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->VirtualQBitmap::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QBitmap::getDecodedMetricF called without a directly constructed type");
}

void QBitmap_Delete(QBitmap* self) {
    delete self;
}
