#pragma once
#ifndef LIBQPIXMAP_HXX
#define LIBQPIXMAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPixmap
class VirtualQPixmap final : public QPixmap {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPixmap_DevType_Callback = int (*)(const QPixmap*);
    using QPixmap_PaintEngine_Callback = QPaintEngine* (*)(const QPixmap*);
    using QPixmap_Metric_Callback = int (*)(const QPixmap*, int);
    using QPixmap_InitPainter_Callback = void (*)(const QPixmap*, QPainter*);
    using QPixmap_Redirected_Callback = QPaintDevice* (*)(const QPixmap*, QPoint*);
    using QPixmap_SharedPainter_Callback = QPainter* (*)(const QPixmap*);
    using QPixmap::fromImageInPlace;
    using QPixmap::getDecodedMetricF;

    // Instance callback storage
    QPixmap_DevType_Callback qpixmap_devtype_callback = nullptr;
    QPixmap_PaintEngine_Callback qpixmap_paintengine_callback = nullptr;
    QPixmap_Metric_Callback qpixmap_metric_callback = nullptr;
    QPixmap_InitPainter_Callback qpixmap_initpainter_callback = nullptr;
    QPixmap_Redirected_Callback qpixmap_redirected_callback = nullptr;
    QPixmap_SharedPainter_Callback qpixmap_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QPixmap {
        using QPixmap::initPainter;
        using QPixmap::metric;
        using QPixmap::redirected;
        using QPixmap::sharedPainter;
    };

    VirtualQPixmap() : QPixmap() {};
    VirtualQPixmap(int w, int h) : QPixmap(w, h) {};
    VirtualQPixmap(const QSize& param1) : QPixmap(param1) {};
    VirtualQPixmap(const QString& fileName) : QPixmap(fileName) {};
    VirtualQPixmap(const char** xpm) : QPixmap(xpm) {};
    VirtualQPixmap(const QPixmap& param1) : QPixmap(param1) {};
    VirtualQPixmap(const QString& fileName, const char* format) : QPixmap(fileName, format) {};
    VirtualQPixmap(const QString& fileName, const char* format, Qt::ImageConversionFlags flags) : QPixmap(fileName, format, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpixmap_devtype_callback) {
            int callback_ret = qpixmap_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPixmap::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpixmap_paintengine_callback) {
            QPaintEngine* callback_ret = qpixmap_paintengine_callback(this);
            return callback_ret;
        }
        return QPixmap::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpixmap_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qpixmap_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPixmap::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpixmap_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpixmap_initpainter_callback(this, cbval1);
            return;
        }
        QPixmap::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpixmap_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpixmap_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPixmap::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpixmap_sharedpainter_callback) {
            QPainter* callback_ret = qpixmap_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPixmap::sharedPainter();
    }

    // Friend functions
    friend int QPixmap_SuperMetric(const QPixmap* self, int param1);
    friend void QPixmap_SuperInitPainter(const QPixmap* self, QPainter* painter);
    friend QPaintDevice* QPixmap_SuperRedirected(const QPixmap* self, QPoint* offset);
    friend QPainter* QPixmap_SuperSharedPainter(const QPixmap* self);
};

#endif
