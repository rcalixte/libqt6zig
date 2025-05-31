#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgGenerator>
#include <qsvggenerator.h>
#include "libqsvggenerator.h"
#include "libqsvggenerator.hxx"

QSvgGenerator* QSvgGenerator_new() {
    return new VirtualQSvgGenerator();
}

libqt_string QSvgGenerator_Title(const QSvgGenerator* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSvgGenerator_SetTitle(QSvgGenerator* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QSvgGenerator_Description(const QSvgGenerator* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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

void QSvgGenerator_SetViewBoxWithViewBox(QSvgGenerator* self, const QRectF* viewBox) {
    self->setViewBox(*viewBox);
}

libqt_string QSvgGenerator_FileName(const QSvgGenerator* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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

// Derived class handler implementation
QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        return vqsvggenerator->paintEngine();
    } else {
        return ((VirtualQSvgGenerator*)self)->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSvgGenerator_QBasePaintEngine(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_PaintEngine_IsBase(true);
        return vqsvggenerator->paintEngine();
    } else {
        return ((VirtualQSvgGenerator*)self)->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnPaintEngine(const QSvgGenerator* self, intptr_t slot) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_PaintEngine_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgGenerator_Metric(const QSvgGenerator* self, int metric) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        return vqsvggenerator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQSvgGenerator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Base class handler implementation
int QSvgGenerator_QBaseMetric(const QSvgGenerator* self, int metric) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_Metric_IsBase(true);
        return vqsvggenerator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return ((VirtualQSvgGenerator*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnMetric(const QSvgGenerator* self, intptr_t slot) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_Metric_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgGenerator_DevType(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        return vqsvggenerator->devType();
    } else {
        return self->QSvgGenerator::devType();
    }
}

// Base class handler implementation
int QSvgGenerator_QBaseDevType(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_DevType_IsBase(true);
        return vqsvggenerator->devType();
    } else {
        return self->QSvgGenerator::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnDevType(const QSvgGenerator* self, intptr_t slot) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_DevType_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgGenerator_InitPainter(const QSvgGenerator* self, QPainter* painter) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->initPainter(painter);
    } else {
        ((VirtualQSvgGenerator*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSvgGenerator_QBaseInitPainter(const QSvgGenerator* self, QPainter* painter) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_InitPainter_IsBase(true);
        vqsvggenerator->initPainter(painter);
    } else {
        ((VirtualQSvgGenerator*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnInitPainter(const QSvgGenerator* self, intptr_t slot) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_InitPainter_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSvgGenerator_Redirected(const QSvgGenerator* self, QPoint* offset) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        return vqsvggenerator->redirected(offset);
    } else {
        return ((VirtualQSvgGenerator*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSvgGenerator_QBaseRedirected(const QSvgGenerator* self, QPoint* offset) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_Redirected_IsBase(true);
        return vqsvggenerator->redirected(offset);
    } else {
        return ((VirtualQSvgGenerator*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnRedirected(const QSvgGenerator* self, intptr_t slot) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_Redirected_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSvgGenerator_SharedPainter(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        return vqsvggenerator->sharedPainter();
    } else {
        return ((VirtualQSvgGenerator*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSvgGenerator_QBaseSharedPainter(const QSvgGenerator* self) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_SharedPainter_IsBase(true);
        return vqsvggenerator->sharedPainter();
    } else {
        return ((VirtualQSvgGenerator*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgGenerator_OnSharedPainter(const QSvgGenerator* self, intptr_t slot) {
    auto* vqsvggenerator = const_cast<VirtualQSvgGenerator*>(dynamic_cast<const VirtualQSvgGenerator*>(self));
    if (vqsvggenerator && vqsvggenerator->isVirtualQSvgGenerator) {
        vqsvggenerator->setQSvgGenerator_SharedPainter_Callback(reinterpret_cast<VirtualQSvgGenerator::QSvgGenerator_SharedPainter_Callback>(slot));
    }
}

void QSvgGenerator_Delete(QSvgGenerator* self) {
    delete self;
}
