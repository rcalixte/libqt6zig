#pragma once
#ifndef LIBQIMAGE_HXX
#define LIBQIMAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QImage
class VirtualQImage final : public QImage {
  public:
    // Virtual class public types (including callbacks and access types)
    using QImage_DevType_Callback = int (*)(const QImage*);
    using QImage_PaintEngine_Callback = QPaintEngine* (*)(const QImage*);
    using QImage_Metric_Callback = int (*)(const QImage*, int);
    using QImage_InitPainter_Callback = void (*)(const QImage*, QPainter*);
    using QImage_Redirected_Callback = QPaintDevice* (*)(const QImage*, QPoint*);
    using QImage_SharedPainter_Callback = QPainter* (*)(const QImage*);
    using QImage::convertToFormat_helper;
    using QImage::convertToFormat_inplace;
    using QImage::detachMetadata;
    using QImage::getDecodedMetricF;
    using QImage::mirrored_helper;
    using QImage::mirrored_inplace;
    using QImage::rgbSwapped_helper;
    using QImage::rgbSwapped_inplace;
    using QImage::smoothScaled;

    // Instance callback storage
    QImage_DevType_Callback qimage_devtype_callback = nullptr;
    QImage_PaintEngine_Callback qimage_paintengine_callback = nullptr;
    QImage_Metric_Callback qimage_metric_callback = nullptr;
    QImage_InitPainter_Callback qimage_initpainter_callback = nullptr;
    QImage_Redirected_Callback qimage_redirected_callback = nullptr;
    QImage_SharedPainter_Callback qimage_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QImage {
        using QImage::initPainter;
        using QImage::metric;
        using QImage::redirected;
        using QImage::sharedPainter;
    };

    VirtualQImage() : QImage() {};
    VirtualQImage(const QSize& size, QImage::Format format) : QImage(size, format) {};
    VirtualQImage(int width, int height, QImage::Format format) : QImage(width, height, format) {};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format) : QImage(data, width, height, format) {};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format) : QImage(data, width, height, format) {};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format) : QImage(data, width, height, bytesPerLine, format) {};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format) : QImage(data, width, height, bytesPerLine, format) {};
    VirtualQImage(const char** xpm) : QImage(xpm) {};
    VirtualQImage(const QString& fileName) : QImage(fileName) {};
    VirtualQImage(const QImage& param1) : QImage(param1) {};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, format, cleanupFunction) {};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, format, cleanupFunction) {};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, bytesPerLine, format, cleanupFunction) {};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, bytesPerLine, format, cleanupFunction) {};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(const QString& fileName, const char* format) : QImage(fileName, format) {};

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qimage_devtype_callback) {
            int callback_ret = qimage_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QImage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qimage_paintengine_callback) {
            QPaintEngine* callback_ret = qimage_paintengine_callback(this);
            return callback_ret;
        }
        return QImage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qimage_metric_callback) {
            int cbval1 = static_cast<int>(metric);
            int callback_ret = qimage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QImage::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qimage_initpainter_callback) {
            QPainter* cbval1 = painter;
            qimage_initpainter_callback(this, cbval1);
            return;
        }
        QImage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qimage_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qimage_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QImage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qimage_sharedpainter_callback) {
            QPainter* callback_ret = qimage_sharedpainter_callback(this);
            return callback_ret;
        }
        return QImage::sharedPainter();
    }

    // Friend functions
    friend int QImage_SuperMetric(const QImage* self, int metric);
    friend void QImage_SuperInitPainter(const QImage* self, QPainter* painter);
    friend QPaintDevice* QImage_SuperRedirected(const QImage* self, QPoint* offset);
    friend QPainter* QImage_SuperSharedPainter(const QImage* self);
};

#endif
