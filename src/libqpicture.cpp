#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        return self->devType();
    } else {
        return ((VirtualQPicture*)self)->devType();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPicture_OnDevType(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_DevType_Callback(reinterpret_cast<VirtualQPicture::QPicture_DevType_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPicture_QBaseDevType(const QPicture* self) {
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_DevType_IsBase(true);
        return vqpicture->devType();
    } else {
        return ((VirtualQPicture*)self)->devType();
    }
}

unsigned int QPicture_Size(const QPicture* self) {
    return static_cast<unsigned int>(self->size());
}

const char* QPicture_Data(const QPicture* self) {
    return (const char*)self->data();
}

void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
    auto* vqpicture = dynamic_cast<VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        self->setData(data, static_cast<uint>(size));
    } else {
        ((VirtualQPicture*)self)->setData(data, static_cast<uint>(size));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPicture_OnSetData(QPicture* self, intptr_t slot) {
    auto* vqpicture = dynamic_cast<VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_SetData_Callback(reinterpret_cast<VirtualQPicture::QPicture_SetData_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QPicture_QBaseSetData(QPicture* self, const char* data, unsigned int size) {
    auto* vqpicture = dynamic_cast<VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_SetData_IsBase(true);
        vqpicture->setData(data, static_cast<uint>(size));
    } else {
        ((VirtualQPicture*)self)->setData(data, static_cast<uint>(size));
    }
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

void QPicture_OperatorAssign(QPicture* self, const QPicture* p) {
    self->operator=(*p);
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
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        return self->paintEngine();
    } else {
        return ((VirtualQPicture*)self)->paintEngine();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPicture_OnPaintEngine(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_PaintEngine_Callback(reinterpret_cast<VirtualQPicture::QPicture_PaintEngine_Callback>(slot));
    }
}

// Virtual base class handler implementation
QPaintEngine* QPicture_QBasePaintEngine(const QPicture* self) {
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_PaintEngine_IsBase(true);
        return vqpicture->paintEngine();
    } else {
        return ((VirtualQPicture*)self)->paintEngine();
    }
}

int QPicture_Metric(const QPicture* self, int m) {
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QPicture_OnMetric(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_Metric_Callback(reinterpret_cast<VirtualQPicture::QPicture_Metric_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPicture_QBaseMetric(const QPicture* self, int m) {
    auto* vqpicture = dynamic_cast<const VirtualQPicture*>(self);
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_Metric_IsBase(true);
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    }
    return {};
}

// Derived class handler implementation
void QPicture_InitPainter(const QPicture* self, QPainter* painter) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->initPainter(painter);
    } else {
        ((VirtualQPicture*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPicture_QBaseInitPainter(const QPicture* self, QPainter* painter) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_InitPainter_IsBase(true);
        vqpicture->initPainter(painter);
    } else {
        ((VirtualQPicture*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnInitPainter(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_InitPainter_Callback(reinterpret_cast<VirtualQPicture::QPicture_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPicture_Redirected(const QPicture* self, QPoint* offset) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        return vqpicture->redirected(offset);
    } else {
        return ((VirtualQPicture*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPicture_QBaseRedirected(const QPicture* self, QPoint* offset) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_Redirected_IsBase(true);
        return vqpicture->redirected(offset);
    } else {
        return ((VirtualQPicture*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnRedirected(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_Redirected_Callback(reinterpret_cast<VirtualQPicture::QPicture_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPicture_SharedPainter(const QPicture* self) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        return vqpicture->sharedPainter();
    } else {
        return ((VirtualQPicture*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPicture_QBaseSharedPainter(const QPicture* self) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_SharedPainter_IsBase(true);
        return vqpicture->sharedPainter();
    } else {
        return ((VirtualQPicture*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnSharedPainter(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_SharedPainter_Callback(reinterpret_cast<VirtualQPicture::QPicture_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
double QPicture_GetDecodedMetricF(const QPicture* self, int metricA, int metricB) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        return vqpicture->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPicture*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPicture_QBaseGetDecodedMetricF(const QPicture* self, int metricA, int metricB) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_GetDecodedMetricF_IsBase(true);
        return vqpicture->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPicture*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnGetDecodedMetricF(const QPicture* self, intptr_t slot) {
    auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self));
    if (vqpicture && vqpicture->isVirtualQPicture) {
        vqpicture->setQPicture_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPicture::QPicture_GetDecodedMetricF_Callback>(slot));
    }
}

void QPicture_Delete(QPicture* self) {
    delete self;
}
