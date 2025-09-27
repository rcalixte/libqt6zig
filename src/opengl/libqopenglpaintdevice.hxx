#pragma once
#ifndef SRC_OPENGLC_LIBVIRTUALQOPENGLPAINTDEVICE_H
#define SRC_OPENGLC_LIBVIRTUALQOPENGLPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLPaintDevice so that we can call protected methods
class VirtualQOpenGLPaintDevice final : public QOpenGLPaintDevice {

  public:
    // Virtual class boolean flag
    bool isVirtualQOpenGLPaintDevice = true;

    // Virtual class public types (including callbacks)
    using QOpenGLPaintDevice_DevType_Callback = int (*)();
    using QOpenGLPaintDevice_PaintEngine_Callback = QPaintEngine* (*)();
    using QOpenGLPaintDevice_EnsureActiveTarget_Callback = void (*)();
    using QOpenGLPaintDevice_Metric_Callback = int (*)(const QOpenGLPaintDevice*, int);
    using QOpenGLPaintDevice_InitPainter_Callback = void (*)(const QOpenGLPaintDevice*, QPainter*);
    using QOpenGLPaintDevice_Redirected_Callback = QPaintDevice* (*)(const QOpenGLPaintDevice*, QPoint*);
    using QOpenGLPaintDevice_SharedPainter_Callback = QPainter* (*)();
    using QOpenGLPaintDevice_GetDecodedMetricF_Callback = double (*)(const QOpenGLPaintDevice*, int, int);

  protected:
    // Instance callback storage
    QOpenGLPaintDevice_DevType_Callback qopenglpaintdevice_devtype_callback = nullptr;
    QOpenGLPaintDevice_PaintEngine_Callback qopenglpaintdevice_paintengine_callback = nullptr;
    QOpenGLPaintDevice_EnsureActiveTarget_Callback qopenglpaintdevice_ensureactivetarget_callback = nullptr;
    QOpenGLPaintDevice_Metric_Callback qopenglpaintdevice_metric_callback = nullptr;
    QOpenGLPaintDevice_InitPainter_Callback qopenglpaintdevice_initpainter_callback = nullptr;
    QOpenGLPaintDevice_Redirected_Callback qopenglpaintdevice_redirected_callback = nullptr;
    QOpenGLPaintDevice_SharedPainter_Callback qopenglpaintdevice_sharedpainter_callback = nullptr;
    QOpenGLPaintDevice_GetDecodedMetricF_Callback qopenglpaintdevice_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qopenglpaintdevice_devtype_isbase = false;
    mutable bool qopenglpaintdevice_paintengine_isbase = false;
    mutable bool qopenglpaintdevice_ensureactivetarget_isbase = false;
    mutable bool qopenglpaintdevice_metric_isbase = false;
    mutable bool qopenglpaintdevice_initpainter_isbase = false;
    mutable bool qopenglpaintdevice_redirected_isbase = false;
    mutable bool qopenglpaintdevice_sharedpainter_isbase = false;
    mutable bool qopenglpaintdevice_getdecodedmetricf_isbase = false;

  public:
    VirtualQOpenGLPaintDevice() : QOpenGLPaintDevice() {};
    VirtualQOpenGLPaintDevice(const QSize& size) : QOpenGLPaintDevice(size) {};
    VirtualQOpenGLPaintDevice(int width, int height) : QOpenGLPaintDevice(width, height) {};

    ~VirtualQOpenGLPaintDevice() {
        qopenglpaintdevice_devtype_callback = nullptr;
        qopenglpaintdevice_paintengine_callback = nullptr;
        qopenglpaintdevice_ensureactivetarget_callback = nullptr;
        qopenglpaintdevice_metric_callback = nullptr;
        qopenglpaintdevice_initpainter_callback = nullptr;
        qopenglpaintdevice_redirected_callback = nullptr;
        qopenglpaintdevice_sharedpainter_callback = nullptr;
        qopenglpaintdevice_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQOpenGLPaintDevice_DevType_Callback(QOpenGLPaintDevice_DevType_Callback cb) { qopenglpaintdevice_devtype_callback = cb; }
    inline void setQOpenGLPaintDevice_PaintEngine_Callback(QOpenGLPaintDevice_PaintEngine_Callback cb) { qopenglpaintdevice_paintengine_callback = cb; }
    inline void setQOpenGLPaintDevice_EnsureActiveTarget_Callback(QOpenGLPaintDevice_EnsureActiveTarget_Callback cb) { qopenglpaintdevice_ensureactivetarget_callback = cb; }
    inline void setQOpenGLPaintDevice_Metric_Callback(QOpenGLPaintDevice_Metric_Callback cb) { qopenglpaintdevice_metric_callback = cb; }
    inline void setQOpenGLPaintDevice_InitPainter_Callback(QOpenGLPaintDevice_InitPainter_Callback cb) { qopenglpaintdevice_initpainter_callback = cb; }
    inline void setQOpenGLPaintDevice_Redirected_Callback(QOpenGLPaintDevice_Redirected_Callback cb) { qopenglpaintdevice_redirected_callback = cb; }
    inline void setQOpenGLPaintDevice_SharedPainter_Callback(QOpenGLPaintDevice_SharedPainter_Callback cb) { qopenglpaintdevice_sharedpainter_callback = cb; }
    inline void setQOpenGLPaintDevice_GetDecodedMetricF_Callback(QOpenGLPaintDevice_GetDecodedMetricF_Callback cb) { qopenglpaintdevice_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQOpenGLPaintDevice_DevType_IsBase(bool value) const { qopenglpaintdevice_devtype_isbase = value; }
    inline void setQOpenGLPaintDevice_PaintEngine_IsBase(bool value) const { qopenglpaintdevice_paintengine_isbase = value; }
    inline void setQOpenGLPaintDevice_EnsureActiveTarget_IsBase(bool value) const { qopenglpaintdevice_ensureactivetarget_isbase = value; }
    inline void setQOpenGLPaintDevice_Metric_IsBase(bool value) const { qopenglpaintdevice_metric_isbase = value; }
    inline void setQOpenGLPaintDevice_InitPainter_IsBase(bool value) const { qopenglpaintdevice_initpainter_isbase = value; }
    inline void setQOpenGLPaintDevice_Redirected_IsBase(bool value) const { qopenglpaintdevice_redirected_isbase = value; }
    inline void setQOpenGLPaintDevice_SharedPainter_IsBase(bool value) const { qopenglpaintdevice_sharedpainter_isbase = value; }
    inline void setQOpenGLPaintDevice_GetDecodedMetricF_IsBase(bool value) const { qopenglpaintdevice_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qopenglpaintdevice_devtype_isbase) {
            qopenglpaintdevice_devtype_isbase = false;
            return QOpenGLPaintDevice::devType();
        } else if (qopenglpaintdevice_devtype_callback != nullptr) {
            int callback_ret = qopenglpaintdevice_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLPaintDevice::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qopenglpaintdevice_paintengine_isbase) {
            qopenglpaintdevice_paintengine_isbase = false;
            return QOpenGLPaintDevice::paintEngine();
        } else if (qopenglpaintdevice_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qopenglpaintdevice_paintengine_callback();
            return callback_ret;
        } else {
            return QOpenGLPaintDevice::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ensureActiveTarget() override {
        if (qopenglpaintdevice_ensureactivetarget_isbase) {
            qopenglpaintdevice_ensureactivetarget_isbase = false;
            QOpenGLPaintDevice::ensureActiveTarget();
        } else if (qopenglpaintdevice_ensureactivetarget_callback != nullptr) {
            qopenglpaintdevice_ensureactivetarget_callback();
        } else {
            QOpenGLPaintDevice::ensureActiveTarget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qopenglpaintdevice_metric_isbase) {
            qopenglpaintdevice_metric_isbase = false;
            return QOpenGLPaintDevice::metric(metric);
        } else if (qopenglpaintdevice_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = qopenglpaintdevice_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QOpenGLPaintDevice::metric(metric);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qopenglpaintdevice_initpainter_isbase) {
            qopenglpaintdevice_initpainter_isbase = false;
            QOpenGLPaintDevice::initPainter(painter);
        } else if (qopenglpaintdevice_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qopenglpaintdevice_initpainter_callback(this, cbval1);
        } else {
            QOpenGLPaintDevice::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qopenglpaintdevice_redirected_isbase) {
            qopenglpaintdevice_redirected_isbase = false;
            return QOpenGLPaintDevice::redirected(offset);
        } else if (qopenglpaintdevice_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qopenglpaintdevice_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QOpenGLPaintDevice::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qopenglpaintdevice_sharedpainter_isbase) {
            qopenglpaintdevice_sharedpainter_isbase = false;
            return QOpenGLPaintDevice::sharedPainter();
        } else if (qopenglpaintdevice_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qopenglpaintdevice_sharedpainter_callback();
            return callback_ret;
        } else {
            return QOpenGLPaintDevice::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qopenglpaintdevice_getdecodedmetricf_isbase) {
            qopenglpaintdevice_getdecodedmetricf_isbase = false;
            return QOpenGLPaintDevice::getDecodedMetricF(metricA, metricB);
        } else if (qopenglpaintdevice_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qopenglpaintdevice_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QOpenGLPaintDevice::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend int QOpenGLPaintDevice_Metric(const QOpenGLPaintDevice* self, int metric);
    friend int QOpenGLPaintDevice_QBaseMetric(const QOpenGLPaintDevice* self, int metric);
    friend void QOpenGLPaintDevice_InitPainter(const QOpenGLPaintDevice* self, QPainter* painter);
    friend void QOpenGLPaintDevice_QBaseInitPainter(const QOpenGLPaintDevice* self, QPainter* painter);
    friend QPaintDevice* QOpenGLPaintDevice_Redirected(const QOpenGLPaintDevice* self, QPoint* offset);
    friend QPaintDevice* QOpenGLPaintDevice_QBaseRedirected(const QOpenGLPaintDevice* self, QPoint* offset);
    friend QPainter* QOpenGLPaintDevice_SharedPainter(const QOpenGLPaintDevice* self);
    friend QPainter* QOpenGLPaintDevice_QBaseSharedPainter(const QOpenGLPaintDevice* self);
    friend double QOpenGLPaintDevice_GetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB);
    friend double QOpenGLPaintDevice_QBaseGetDecodedMetricF(const QOpenGLPaintDevice* self, int metricA, int metricB);
};

#endif
