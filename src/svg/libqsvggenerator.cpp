#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QSvgGenerator>
#include <qsvggenerator.h>
#include "libqsvggenerator.h"
#include "libqsvggenerator.hxx"

QSvgGenerator* QSvgGenerator_new() {
    return new VirtualQSvgGenerator();
}

QSvgGenerator* QSvgGenerator_new2(int version) {
    return new VirtualQSvgGenerator(static_cast<QSvgGenerator::SvgVersion>(version));
}

libqt_string QSvgGenerator_Title(const QSvgGenerator* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSvgGenerator_SetTitle(QSvgGenerator* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QSvgGenerator_Description(const QSvgGenerator* self) {
    auto _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSvgGenerator_SetDescription(QSvgGenerator* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

QSize* QSvgGenerator_Size(const QSvgGenerator* self) {
    return new QSize(self->size());
}

void QSvgGenerator_SetSize(QSvgGenerator* self, const QSize* size) {
    self->setSize(*size);
}

QRect* QSvgGenerator_ViewBox(const QSvgGenerator* self) {
    return new QRect(self->viewBox());
}

QRectF* QSvgGenerator_ViewBoxF(const QSvgGenerator* self) {
    return new QRectF(self->viewBoxF());
}

void QSvgGenerator_SetViewBox(QSvgGenerator* self, const QRect* viewBox) {
    self->setViewBox(*viewBox);
}

void QSvgGenerator_SetViewBox2(QSvgGenerator* self, const QRectF* viewBox) {
    self->setViewBox(*viewBox);
}

libqt_string QSvgGenerator_FileName(const QSvgGenerator* self) {
    auto _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSvgGenerator_SetFileName(QSvgGenerator* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

QIODevice* QSvgGenerator_OutputDevice(const QSvgGenerator* self) {
    return self->outputDevice();
}

void QSvgGenerator_SetOutputDevice(QSvgGenerator* self, QIODevice* outputDevice) {
    self->setOutputDevice(outputDevice);
}

void QSvgGenerator_SetResolution(QSvgGenerator* self, int dpi) {
    self->setResolution(static_cast<int>(dpi));
}

int QSvgGenerator_Resolution(const QSvgGenerator* self) {
    return self->resolution();
}

int QSvgGenerator_SvgVersion(const QSvgGenerator* self) {
    return static_cast<int>(self->svgVersion());
}

QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self) {
    auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
    if (vqsvggenerator) {
        return vqsvggenerator->paintEngine();
    }
    qFatal("Error: Protected method QSvgGenerator::paintEngine called without a directly constructed type");
}

int QSvgGenerator_Metric(const QSvgGenerator* self, int metric) {
    auto* vqsvggenerator = dynamic_cast<const VirtualQSvgGenerator*>(self);
    if (vqsvggenerator) {
        return vqsvggenerator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
    qFatal("Error: Protected method QSvgGenerator::metric called without a directly constructed type");
}

// Base class handler implementation
QPaintEngine* QSvgGenerator_SuperPaintEngine(const QSvgGenerator* self) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self))) {
        return vqsvggenerator->QSvgGenerator::paintEngine();
    } else
        qFatal("Error: Protected virtual method QSvgGenerator::paintEngine called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnPaintEngine(QSvgGenerator* self, intptr_t slot) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self)))
        vqsvggenerator->qsvggenerator_paintengine_callback = reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_PaintEngine_Callback>(slot);
}

// Base class handler implementation
int QSvgGenerator_SuperMetric(const QSvgGenerator* self, int metric) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self))) {
        return vqsvggenerator->QSvgGenerator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else
        qFatal("Error: Protected virtual method QSvgGenerator::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnMetric(QSvgGenerator* self, intptr_t slot) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self)))
        vqsvggenerator->qsvggenerator_metric_callback = reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_Metric_Callback>(slot);
}

// Derived class handler implementation
int QSvgGenerator_DevType(const QSvgGenerator* self) {
    return self->devType();
}

// Base class handler implementation
int QSvgGenerator_SuperDevType(const QSvgGenerator* self) {
    return self->QSvgGenerator::devType();
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnDevType(QSvgGenerator* self, intptr_t slot) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self)))
        vqsvggenerator->qsvggenerator_devtype_callback = reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSvgGenerator_InitPainter(const QSvgGenerator* self, QPainter* painter) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator) {
        vqsvggenerator->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSvgGenerator::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSvgGenerator_SuperInitPainter(const QSvgGenerator* self, QPainter* painter) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self))) {
        vqsvggenerator->QSvgGenerator::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSvgGenerator::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnInitPainter(QSvgGenerator* self, intptr_t slot) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self)))
        vqsvggenerator->qsvggenerator_initpainter_callback = reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSvgGenerator_Redirected(const QSvgGenerator* self, QPoint* offset) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator) {
        return vqsvggenerator->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSvgGenerator::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSvgGenerator_SuperRedirected(const QSvgGenerator* self, QPoint* offset) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self))) {
        return vqsvggenerator->QSvgGenerator::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSvgGenerator::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnRedirected(QSvgGenerator* self, intptr_t slot) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self)))
        vqsvggenerator->qsvggenerator_redirected_callback = reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSvgGenerator_SharedPainter(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator) {
        return vqsvggenerator->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSvgGenerator::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSvgGenerator_SuperSharedPainter(const QSvgGenerator* self) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self))) {
        return vqsvggenerator->QSvgGenerator::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSvgGenerator::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnSharedPainter(QSvgGenerator* self, intptr_t slot) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self)))
        vqsvggenerator->qsvggenerator_sharedpainter_callback = reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
double QSvgGenerator_GetDecodedMetricF(const QSvgGenerator* self, int metricA, int metricB) {
    if (auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self))) {
        return vqsvggenerator->VirtualQSvgGenerator::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSvgGenerator::getDecodedMetricF called without a directly constructed type");
}

void QSvgGenerator_Delete(QSvgGenerator* self) {
    delete self;
}
