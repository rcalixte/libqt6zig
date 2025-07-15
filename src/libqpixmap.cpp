#include <QBitmap>
#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qpixmap.h>
#include "libqpixmap.h"
#include "libqpixmap.hxx"

QPixmap* QPixmap_new() {
    return new VirtualQPixmap();
}

QPixmap* QPixmap_new2(int w, int h) {
    return new VirtualQPixmap(static_cast<int>(w), static_cast<int>(h));
}

QPixmap* QPixmap_new3(const QSize* param1) {
    return new VirtualQPixmap(*param1);
}

QPixmap* QPixmap_new4(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQPixmap(fileName_QString);
}

QPixmap* QPixmap_new5(const QPixmap* param1) {
    return new VirtualQPixmap(*param1);
}

QPixmap* QPixmap_new6(const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQPixmap(fileName_QString, format);
}

QPixmap* QPixmap_new7(const libqt_string fileName, const char* format, int flags) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQPixmap(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPixmap_OperatorAssign(QPixmap* self, const QPixmap* param1) {
    self->operator=(*param1);
}

void QPixmap_Swap(QPixmap* self, QPixmap* other) {
    self->swap(*other);
}

QVariant* QPixmap_ToQVariant(const QPixmap* self) {
    return new QVariant(self->operator QVariant());
}

bool QPixmap_IsNull(const QPixmap* self) {
    return self->isNull();
}

int QPixmap_Width(const QPixmap* self) {
    return self->width();
}

int QPixmap_Height(const QPixmap* self) {
    return self->height();
}

QSize* QPixmap_Size(const QPixmap* self) {
    return new QSize(self->size());
}

QRect* QPixmap_Rect(const QPixmap* self) {
    return new QRect(self->rect());
}

int QPixmap_Depth(const QPixmap* self) {
    return self->depth();
}

int QPixmap_DefaultDepth() {
    return QPixmap::defaultDepth();
}

void QPixmap_Fill(QPixmap* self) {
    self->fill();
}

QBitmap* QPixmap_Mask(const QPixmap* self) {
    return new QBitmap(self->mask());
}

void QPixmap_SetMask(QPixmap* self, const QBitmap* mask) {
    self->setMask(*mask);
}

double QPixmap_DevicePixelRatio(const QPixmap* self) {
    return static_cast<double>(self->devicePixelRatio());
}

void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor) {
    self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

QSizeF* QPixmap_DeviceIndependentSize(const QPixmap* self) {
    return new QSizeF(self->deviceIndependentSize());
}

bool QPixmap_HasAlpha(const QPixmap* self) {
    return self->hasAlpha();
}

bool QPixmap_HasAlphaChannel(const QPixmap* self) {
    return self->hasAlphaChannel();
}

QBitmap* QPixmap_CreateHeuristicMask(const QPixmap* self) {
    return new QBitmap(self->createHeuristicMask());
}

QBitmap* QPixmap_CreateMaskFromColor(const QPixmap* self, const QColor* maskColor) {
    return new QBitmap(self->createMaskFromColor(*maskColor));
}

QPixmap* QPixmap_Scaled(const QPixmap* self, int w, int h) {
    return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_Scaled2(const QPixmap* self, const QSize* s) {
    return new QPixmap(self->scaled(*s));
}

QPixmap* QPixmap_ScaledToWidth(const QPixmap* self, int w) {
    return new QPixmap(self->scaledToWidth(static_cast<int>(w)));
}

QPixmap* QPixmap_ScaledToHeight(const QPixmap* self, int h) {
    return new QPixmap(self->scaledToHeight(static_cast<int>(h)));
}

QPixmap* QPixmap_Transformed(const QPixmap* self, const QTransform* param1) {
    return new QPixmap(self->transformed(*param1));
}

QTransform* QPixmap_TrueMatrix(const QTransform* m, int w, int h) {
    return new QTransform(QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QPixmap_ToImage(const QPixmap* self) {
    return new QImage(self->toImage());
}

QPixmap* QPixmap_FromImage(const QImage* image) {
    return new QPixmap(QPixmap::fromImage(*image));
}

QPixmap* QPixmap_FromImageReader(QImageReader* imageReader) {
    return new QPixmap(QPixmap::fromImageReader(imageReader));
}

bool QPixmap_Load(QPixmap* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString);
}

bool QPixmap_LoadFromData(QPixmap* self, const unsigned char* buf, unsigned int lenVal) {
    return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal));
}

bool QPixmap_LoadFromData2(QPixmap* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->loadFromData(data_QByteArray);
}

bool QPixmap_Save(const QPixmap* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString);
}

bool QPixmap_Save2(const QPixmap* self, QIODevice* device) {
    return self->save(device);
}

bool QPixmap_ConvertFromImage(QPixmap* self, const QImage* img) {
    return self->convertFromImage(*img);
}

QPixmap* QPixmap_Copy(const QPixmap* self, int x, int y, int width, int height) {
    return new QPixmap(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height)));
}

QPixmap* QPixmap_Copy2(const QPixmap* self) {
    return new QPixmap(self->copy());
}

void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
    self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

void QPixmap_Scroll2(QPixmap* self, int dx, int dy, const QRect* rect) {
    self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect);
}

long long QPixmap_CacheKey(const QPixmap* self) {
    return static_cast<long long>(self->cacheKey());
}

bool QPixmap_IsDetached(const QPixmap* self) {
    return self->isDetached();
}

void QPixmap_Detach(QPixmap* self) {
    self->detach();
}

bool QPixmap_IsQBitmap(const QPixmap* self) {
    return self->isQBitmap();
}

bool QPixmap_OperatorNot(const QPixmap* self) {
    return self->operator!();
}

void QPixmap_Fill1(QPixmap* self, const QColor* fillColor) {
    self->fill(*fillColor);
}

QBitmap* QPixmap_CreateHeuristicMask1(const QPixmap* self, bool clipTight) {
    return new QBitmap(self->createHeuristicMask(clipTight));
}

QBitmap* QPixmap_CreateMaskFromColor2(const QPixmap* self, const QColor* maskColor, int mode) {
    return new QBitmap(self->createMaskFromColor(*maskColor, static_cast<Qt::MaskMode>(mode)));
}

QPixmap* QPixmap_Scaled3(const QPixmap* self, int w, int h, int aspectMode) {
    return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_Scaled4(const QPixmap* self, int w, int h, int aspectMode, int mode) {
    return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Scaled22(const QPixmap* self, const QSize* s, int aspectMode) {
    return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_Scaled32(const QPixmap* self, const QSize* s, int aspectMode, int mode) {
    return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_ScaledToWidth2(const QPixmap* self, int w, int mode) {
    return new QPixmap(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_ScaledToHeight2(const QPixmap* self, int h, int mode) {
    return new QPixmap(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Transformed2(const QPixmap* self, const QTransform* param1, int mode) {
    return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_FromImage2(const QImage* image, int flags) {
    return new QPixmap(QPixmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags) {
    return new QPixmap(QPixmap::fromImageReader(imageReader, static_cast<Qt::ImageConversionFlags>(flags)));
}

bool QPixmap_Load2(QPixmap* self, const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString, format);
}

bool QPixmap_Load3(QPixmap* self, const libqt_string fileName, const char* format, int flags) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_LoadFromData3(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format) {
    return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal), format);
}

bool QPixmap_LoadFromData4(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format, int flags) {
    return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal), format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_LoadFromData22(QPixmap* self, const libqt_string data, const char* format) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->loadFromData(data_QByteArray, format);
}

bool QPixmap_LoadFromData32(QPixmap* self, const libqt_string data, const char* format, int flags) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->loadFromData(data_QByteArray, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_Save22(const QPixmap* self, const libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString, format);
}

bool QPixmap_Save3(const QPixmap* self, const libqt_string fileName, const char* format, int quality) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QPixmap_Save23(const QPixmap* self, QIODevice* device, const char* format) {
    return self->save(device, format);
}

bool QPixmap_Save32(const QPixmap* self, QIODevice* device, const char* format, int quality) {
    return self->save(device, format, static_cast<int>(quality));
}

bool QPixmap_ConvertFromImage2(QPixmap* self, const QImage* img, int flags) {
    return self->convertFromImage(*img, static_cast<Qt::ImageConversionFlags>(flags));
}

QPixmap* QPixmap_Copy1(const QPixmap* self, const QRect* rect) {
    return new QPixmap(self->copy(*rect));
}

void QPixmap_Scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed) {
    self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), exposed);
}

void QPixmap_Scroll4(QPixmap* self, int dx, int dy, const QRect* rect, QRegion* exposed) {
    self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect, exposed);
}

// Derived class handler implementation
int QPixmap_DevType(const QPixmap* self) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        return vqpixmap->devType();
    } else {
        return self->QPixmap::devType();
    }
}

// Base class handler implementation
int QPixmap_QBaseDevType(const QPixmap* self) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_DevType_IsBase(true);
        return vqpixmap->devType();
    } else {
        return self->QPixmap::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnDevType(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_DevType_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPixmap_PaintEngine(const QPixmap* self) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        return vqpixmap->paintEngine();
    } else {
        return self->QPixmap::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPixmap_QBasePaintEngine(const QPixmap* self) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_PaintEngine_IsBase(true);
        return vqpixmap->paintEngine();
    } else {
        return self->QPixmap::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnPaintEngine(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_PaintEngine_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QPixmap_Metric(const QPixmap* self, int param1) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        return vqpixmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPixmap*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPixmap_QBaseMetric(const QPixmap* self, int param1) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_Metric_IsBase(true);
        return vqpixmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPixmap*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnMetric(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_Metric_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPixmap_InitPainter(const QPixmap* self, QPainter* painter) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->initPainter(painter);
    } else {
        ((VirtualQPixmap*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPixmap_QBaseInitPainter(const QPixmap* self, QPainter* painter) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_InitPainter_IsBase(true);
        vqpixmap->initPainter(painter);
    } else {
        ((VirtualQPixmap*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnInitPainter(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_InitPainter_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPixmap_Redirected(const QPixmap* self, QPoint* offset) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        return vqpixmap->redirected(offset);
    } else {
        return ((VirtualQPixmap*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPixmap_QBaseRedirected(const QPixmap* self, QPoint* offset) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_Redirected_IsBase(true);
        return vqpixmap->redirected(offset);
    } else {
        return ((VirtualQPixmap*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnRedirected(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_Redirected_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPixmap_SharedPainter(const QPixmap* self) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        return vqpixmap->sharedPainter();
    } else {
        return ((VirtualQPixmap*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPixmap_QBaseSharedPainter(const QPixmap* self) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_SharedPainter_IsBase(true);
        return vqpixmap->sharedPainter();
    } else {
        return ((VirtualQPixmap*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnSharedPainter(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_SharedPainter_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
double QPixmap_GetDecodedMetricF(const QPixmap* self, int metricA, int metricB) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        return vqpixmap->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPixmap*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPixmap_QBaseGetDecodedMetricF(const QPixmap* self, int metricA, int metricB) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_GetDecodedMetricF_IsBase(true);
        return vqpixmap->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPixmap*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPixmap_OnGetDecodedMetricF(const QPixmap* self, intptr_t slot) {
    auto* vqpixmap = const_cast<VirtualQPixmap*>(dynamic_cast<const VirtualQPixmap*>(self));
    if (vqpixmap && vqpixmap->isVirtualQPixmap) {
        vqpixmap->setQPixmap_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPixmap::QPixmap_GetDecodedMetricF_Callback>(slot));
    }
}

void QPixmap_Delete(QPixmap* self) {
    delete self;
}
