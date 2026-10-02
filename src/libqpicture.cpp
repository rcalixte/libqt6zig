#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPoint>
#include <QRect>
#include <QString>
#include <qpicture.h>
#include "libqpicture.h"
#include "libqpicture.hxx"

QPicture* QPicture_new() {
    return new VirtualQPicture();
}

QPicture* QPicture_new2(const QPicture* param1) {
    return new VirtualQPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
    return new VirtualQPicture(static_cast<int>(formatVersion));
}

bool QPicture_IsNull(const QPicture* self) {
    return self->isNull();
}

int QPicture_DevType(const QPicture* self) {
    return self->devType();
}

unsigned int QPicture_Size(const QPicture* self) {
    return static_cast<unsigned int>(self->size());
}

const char* QPicture_Data(const QPicture* self) {
    return (const char*)self->data();
}

void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
    self->setData(data, static_cast<uint>(size));
}

bool QPicture_Play(QPicture* self, QPainter* p) {
    return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
    return self->load(dev);
}

bool QPicture_Load2(QPicture* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString);
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
    return self->save(dev);
}

bool QPicture_Save2(QPicture* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString);
}

QRect* QPicture_BoundingRect(const QPicture* self) {
    return new QRect(self->boundingRect());
}

void QPicture_SetBoundingRect(QPicture* self, const QRect* r) {
    self->setBoundingRect(*r);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
    self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
    self->detach();
}

bool QPicture_IsDetached(const QPicture* self) {
    return self->isDetached();
}

QPaintEngine* QPicture_PaintEngine(const QPicture* self) {
    return self->paintEngine();
}

int QPicture_Metric(const QPicture* self, int m) {
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture) {
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    }
    qFatal("Error: Protected method QPicture::metric called without a directly constructed type");
}

// Base class handler implementation
int QPicture_SuperDevType(const QPicture* self) {
    return self->QPicture::devType();
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnDevType(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self)))
        vqpicture->qpicture_devtype_callback = reinterpret_cast<VirtualQPicture::QPicture_DevType_Callback>(slot);
}

// Base class handler implementation
void QPicture_SuperSetData(QPicture* self, const char* data, unsigned int size) {
    self->QPicture::setData(data, static_cast<uint>(size));
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnSetData(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = dynamic_cast<VirtualQPicture*>(self))
        vqpicture->qpicture_setdata_callback = reinterpret_cast<VirtualQPicture::QPicture_SetData_Callback>(slot);
}

// Base class handler implementation
QPaintEngine* QPicture_SuperPaintEngine(const QPicture* self) {
    return self->QPicture::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnPaintEngine(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self)))
        vqpicture->qpicture_paintengine_callback = reinterpret_cast<VirtualQPicture::QPicture_PaintEngine_Callback>(slot);
}

// Base class handler implementation
int QPicture_SuperMetric(const QPicture* self, int m) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->QPicture::metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    } else
        qFatal("Error: Protected virtual method QPicture::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnMetric(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self)))
        vqpicture->qpicture_metric_callback = reinterpret_cast<VirtualQPicture::QPicture_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPicture_InitPainter(const QPicture* self, QPainter* painter) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture) {
        vqpicture->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPicture::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPicture_SuperInitPainter(const QPicture* self, QPainter* painter) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->QPicture::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPicture::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnInitPainter(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self)))
        vqpicture->qpicture_initpainter_callback = reinterpret_cast<VirtualQPicture::QPicture_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPicture_Redirected(const QPicture* self, QPoint* offset) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture) {
        return vqpicture->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPicture::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPicture_SuperRedirected(const QPicture* self, QPoint* offset) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->QPicture::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPicture::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnRedirected(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self)))
        vqpicture->qpicture_redirected_callback = reinterpret_cast<VirtualQPicture::QPicture_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPicture_SharedPainter(const QPicture* self) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture) {
        return vqpicture->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPicture::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPicture_SuperSharedPainter(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->QPicture::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPicture::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnSharedPainter(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self)))
        vqpicture->qpicture_sharedpainter_callback = reinterpret_cast<VirtualQPicture::QPicture_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
double QPicture_GetDecodedMetricF(const QPicture* self, int metricA, int metricB) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->VirtualQPicture::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPicture::getDecodedMetricF called without a directly constructed type");
}

void QPicture_Delete(QPicture* self) {
    delete self;
}
