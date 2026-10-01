#pragma once
#ifndef OPENGL_LIBQOPENGLPAINTDEVICE_HXX
#define OPENGL_LIBQOPENGLPAINTDEVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLPaintDevice
class VirtualQOpenGLPaintDevice final : public QOpenGLPaintDevice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLPaintDevice_DevType_Callback = int (*)(const QOpenGLPaintDevice*);
    using QOpenGLPaintDevice_PaintEngine_Callback = QPaintEngine* (*)(const QOpenGLPaintDevice*);
    using QOpenGLPaintDevice_EnsureActiveTarget_Callback = void (*)(QOpenGLPaintDevice*);
    using QOpenGLPaintDevice_Metric_Callback = int (*)(const QOpenGLPaintDevice*, int);
    using QOpenGLPaintDevice_InitPainter_Callback = void (*)(const QOpenGLPaintDevice*, QPainter*);
    using QOpenGLPaintDevice_Redirected_Callback = QPaintDevice* (*)(const QOpenGLPaintDevice*, QPoint*);
    using QOpenGLPaintDevice_SharedPainter_Callback = QPainter* (*)(const QOpenGLPaintDevice*);
    using QOpenGLPaintDevice::getDecodedMetricF;

    // Instance callback storage
    QOpenGLPaintDevice_DevType_Callback qopenglpaintdevice_devtype_callback = nullptr;
    QOpenGLPaintDevice_PaintEngine_Callback qopenglpaintdevice_paintengine_callback = nullptr;
    QOpenGLPaintDevice_EnsureActiveTarget_Callback qopenglpaintdevice_ensureactivetarget_callback = nullptr;
    QOpenGLPaintDevice_Metric_Callback qopenglpaintdevice_metric_callback = nullptr;
    QOpenGLPaintDevice_InitPainter_Callback qopenglpaintdevice_initpainter_callback = nullptr;
    QOpenGLPaintDevice_Redirected_Callback qopenglpaintdevice_redirected_callback = nullptr;
    QOpenGLPaintDevice_SharedPainter_Callback qopenglpaintdevice_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QOpenGLPaintDevice {
        using QOpenGLPaintDevice::initPainter;
        using QOpenGLPaintDevice::metric;
        using QOpenGLPaintDevice::redirected;
        using QOpenGLPaintDevice::sharedPainter;
    };

    VirtualQOpenGLPaintDevice() : QOpenGLPaintDevice() {};
    VirtualQOpenGLPaintDevice(const QSize& size) : QOpenGLPaintDevice(size) {};
    VirtualQOpenGLPaintDevice(int width, int height) : QOpenGLPaintDevice(width, height) {};

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qopenglpaintdevice_devtype_callback) {
            int callback_ret = qopenglpaintdevice_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLPaintDevice::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qopenglpaintdevice_paintengine_callback) {
            QPaintEngine* callback_ret = qopenglpaintdevice_paintengine_callback(this);
            return callback_ret;
        }
        return QOpenGLPaintDevice::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void ensureActiveTarget() override {
        if (qopenglpaintdevice_ensureactivetarget_callback) {
            qopenglpaintdevice_ensureactivetarget_callback(this);
            return;
        }
        QOpenGLPaintDevice::ensureActiveTarget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qopenglpaintdevice_metric_callback) {
            int cbval1 = static_cast<int>(metric);
            int callback_ret = qopenglpaintdevice_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLPaintDevice::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qopenglpaintdevice_initpainter_callback) {
            QPainter* cbval1 = painter;
            qopenglpaintdevice_initpainter_callback(this, cbval1);
            return;
        }
        QOpenGLPaintDevice::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qopenglpaintdevice_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qopenglpaintdevice_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLPaintDevice::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qopenglpaintdevice_sharedpainter_callback) {
            QPainter* callback_ret = qopenglpaintdevice_sharedpainter_callback(this);
            return callback_ret;
        }
        return QOpenGLPaintDevice::sharedPainter();
    }

    // Friend functions
    friend int QOpenGLPaintDevice_SuperMetric(const QOpenGLPaintDevice* self, int metric);
    friend void QOpenGLPaintDevice_SuperInitPainter(const QOpenGLPaintDevice* self, QPainter* painter);
    friend QPaintDevice* QOpenGLPaintDevice_SuperRedirected(const QOpenGLPaintDevice* self, QPoint* offset);
    friend QPainter* QOpenGLPaintDevice_SuperSharedPainter(const QOpenGLPaintDevice* self);
};

#endif
