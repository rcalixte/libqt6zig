#pragma once
#ifndef LIBQBITMAP_HXX
#define LIBQBITMAP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QBitmap
class VirtualQBitmap final : public QBitmap {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBitmap_DevType_Callback = int (*)(const QBitmap*);
    using QBitmap_PaintEngine_Callback = QPaintEngine* (*)(const QBitmap*);
    using QBitmap_Metric_Callback = int (*)(const QBitmap*, int);
    using QBitmap_InitPainter_Callback = void (*)(const QBitmap*, QPainter*);
    using QBitmap_Redirected_Callback = QPaintDevice* (*)(const QBitmap*, QPoint*);
    using QBitmap_SharedPainter_Callback = QPainter* (*)(const QBitmap*);
    using QBitmap::fromImageInPlace;
    using QBitmap::getDecodedMetricF;

    // Instance callback storage
    QBitmap_DevType_Callback qbitmap_devtype_callback = nullptr;
    QBitmap_PaintEngine_Callback qbitmap_paintengine_callback = nullptr;
    QBitmap_Metric_Callback qbitmap_metric_callback = nullptr;
    QBitmap_InitPainter_Callback qbitmap_initpainter_callback = nullptr;
    QBitmap_Redirected_Callback qbitmap_redirected_callback = nullptr;
    QBitmap_SharedPainter_Callback qbitmap_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QBitmap {
        using QBitmap::initPainter;
        using QBitmap::metric;
        using QBitmap::redirected;
        using QBitmap::sharedPainter;
    };

    VirtualQBitmap() : QBitmap() {};
    VirtualQBitmap(const QPixmap& param1) : QBitmap(param1) {};
    VirtualQBitmap(int w, int h) : QBitmap(w, h) {};
    VirtualQBitmap(const QSize& param1) : QBitmap(param1) {};
    VirtualQBitmap(const QString& fileName) : QBitmap(fileName) {};
    VirtualQBitmap(const QBitmap& param1) : QBitmap(param1) {};
    VirtualQBitmap(const QString& fileName, const char* format) : QBitmap(fileName, format) {};

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qbitmap_devtype_callback) {
            int callback_ret = qbitmap_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QBitmap::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qbitmap_paintengine_callback) {
            QPaintEngine* callback_ret = qbitmap_paintengine_callback(this);
            return callback_ret;
        }
        return QBitmap::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qbitmap_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qbitmap_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBitmap::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qbitmap_initpainter_callback) {
            QPainter* cbval1 = painter;
            qbitmap_initpainter_callback(this, cbval1);
            return;
        }
        QBitmap::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qbitmap_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qbitmap_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QBitmap::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qbitmap_sharedpainter_callback) {
            QPainter* callback_ret = qbitmap_sharedpainter_callback(this);
            return callback_ret;
        }
        return QBitmap::sharedPainter();
    }

    // Friend functions
    friend int QBitmap_SuperMetric(const QBitmap* self, int param1);
    friend void QBitmap_SuperInitPainter(const QBitmap* self, QPainter* painter);
    friend QPaintDevice* QBitmap_SuperRedirected(const QBitmap* self, QPoint* offset);
    friend QPainter* QBitmap_SuperSharedPainter(const QBitmap* self);
};

#endif
