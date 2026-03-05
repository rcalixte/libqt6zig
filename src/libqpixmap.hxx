#pragma once
#ifndef SRCC_LIBVIRTUALQPIXMAP_H
#define SRCC_LIBVIRTUALQPIXMAP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPixmap so that we can call protected methods
class VirtualQPixmap final : public QPixmap {

  public:
    // Virtual class boolean flag
    bool isVirtualQPixmap = true;

    // Virtual class public types (including callbacks)
    using QPixmap_DevType_Callback = int (*)();
    using QPixmap_PaintEngine_Callback = QPaintEngine* (*)();
    using QPixmap_Metric_Callback = int (*)(const QPixmap*, int);
    using QPixmap_InitPainter_Callback = void (*)(const QPixmap*, QPainter*);
    using QPixmap_Redirected_Callback = QPaintDevice* (*)(const QPixmap*, QPoint*);
    using QPixmap_SharedPainter_Callback = QPainter* (*)();
    using QPixmap_GetDecodedMetricF_Callback = double (*)(const QPixmap*, int, int);

  protected:
    // Instance callback storage
    QPixmap_DevType_Callback qpixmap_devtype_callback = nullptr;
    QPixmap_PaintEngine_Callback qpixmap_paintengine_callback = nullptr;
    QPixmap_Metric_Callback qpixmap_metric_callback = nullptr;
    QPixmap_InitPainter_Callback qpixmap_initpainter_callback = nullptr;
    QPixmap_Redirected_Callback qpixmap_redirected_callback = nullptr;
    QPixmap_SharedPainter_Callback qpixmap_sharedpainter_callback = nullptr;
    QPixmap_GetDecodedMetricF_Callback qpixmap_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qpixmap_devtype_isbase = false;
    mutable bool qpixmap_paintengine_isbase = false;
    mutable bool qpixmap_metric_isbase = false;
    mutable bool qpixmap_initpainter_isbase = false;
    mutable bool qpixmap_redirected_isbase = false;
    mutable bool qpixmap_sharedpainter_isbase = false;
    mutable bool qpixmap_getdecodedmetricf_isbase = false;

  public:
    VirtualQPixmap() : QPixmap() {};
    VirtualQPixmap(int w, int h) : QPixmap(w, h) {};
    VirtualQPixmap(const QSize& param1) : QPixmap(param1) {};
    VirtualQPixmap(const QString& fileName) : QPixmap(fileName) {};
    VirtualQPixmap(const char** xpm) : QPixmap(xpm) {};
    VirtualQPixmap(const QPixmap& param1) : QPixmap(param1) {};
    VirtualQPixmap(const QString& fileName, const char* format) : QPixmap(fileName, format) {};
    VirtualQPixmap(const QString& fileName, const char* format, Qt::ImageConversionFlags flags) : QPixmap(fileName, format, flags) {};

    // Callback setters
    inline void setQPixmap_DevType_Callback(QPixmap_DevType_Callback cb) { qpixmap_devtype_callback = cb; }
    inline void setQPixmap_PaintEngine_Callback(QPixmap_PaintEngine_Callback cb) { qpixmap_paintengine_callback = cb; }
    inline void setQPixmap_Metric_Callback(QPixmap_Metric_Callback cb) { qpixmap_metric_callback = cb; }
    inline void setQPixmap_InitPainter_Callback(QPixmap_InitPainter_Callback cb) { qpixmap_initpainter_callback = cb; }
    inline void setQPixmap_Redirected_Callback(QPixmap_Redirected_Callback cb) { qpixmap_redirected_callback = cb; }
    inline void setQPixmap_SharedPainter_Callback(QPixmap_SharedPainter_Callback cb) { qpixmap_sharedpainter_callback = cb; }
    inline void setQPixmap_GetDecodedMetricF_Callback(QPixmap_GetDecodedMetricF_Callback cb) { qpixmap_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPixmap_DevType_IsBase(bool value) const { qpixmap_devtype_isbase = value; }
    inline void setQPixmap_PaintEngine_IsBase(bool value) const { qpixmap_paintengine_isbase = value; }
    inline void setQPixmap_Metric_IsBase(bool value) const { qpixmap_metric_isbase = value; }
    inline void setQPixmap_InitPainter_IsBase(bool value) const { qpixmap_initpainter_isbase = value; }
    inline void setQPixmap_Redirected_IsBase(bool value) const { qpixmap_redirected_isbase = value; }
    inline void setQPixmap_SharedPainter_IsBase(bool value) const { qpixmap_sharedpainter_isbase = value; }
    inline void setQPixmap_GetDecodedMetricF_IsBase(bool value) const { qpixmap_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpixmap_devtype_isbase) {
            qpixmap_devtype_isbase = false;
            return QPixmap::devType();
        }
        auto devtype_cb = qpixmap_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QPixmap::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpixmap_paintengine_isbase) {
            qpixmap_paintengine_isbase = false;
            return QPixmap::paintEngine();
        }
        auto paintengine_cb = qpixmap_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QPixmap::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpixmap_metric_isbase) {
            qpixmap_metric_isbase = false;
            return QPixmap::metric(param1);
        }
        auto metric_cb = qpixmap_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPixmap::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpixmap_initpainter_isbase) {
            qpixmap_initpainter_isbase = false;
            QPixmap::initPainter(painter);
            return;
        }
        auto initpainter_cb = qpixmap_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QPixmap::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpixmap_redirected_isbase) {
            qpixmap_redirected_isbase = false;
            return QPixmap::redirected(offset);
        }
        auto redirected_cb = qpixmap_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QPixmap::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpixmap_sharedpainter_isbase) {
            qpixmap_sharedpainter_isbase = false;
            return QPixmap::sharedPainter();
        }
        auto sharedpainter_cb = qpixmap_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QPixmap::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qpixmap_getdecodedmetricf_isbase) {
            qpixmap_getdecodedmetricf_isbase = false;
            return QPixmap::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qpixmap_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QPixmap::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend int QPixmap_Metric(const QPixmap* self, int param1);
    friend int QPixmap_SuperMetric(const QPixmap* self, int param1);
    friend void QPixmap_InitPainter(const QPixmap* self, QPainter* painter);
    friend void QPixmap_SuperInitPainter(const QPixmap* self, QPainter* painter);
    friend QPaintDevice* QPixmap_Redirected(const QPixmap* self, QPoint* offset);
    friend QPaintDevice* QPixmap_SuperRedirected(const QPixmap* self, QPoint* offset);
    friend QPainter* QPixmap_SharedPainter(const QPixmap* self);
    friend QPainter* QPixmap_SuperSharedPainter(const QPixmap* self);
    friend double QPixmap_GetDecodedMetricF(const QPixmap* self, int metricA, int metricB);
    friend double QPixmap_SuperGetDecodedMetricF(const QPixmap* self, int metricA, int metricB);
};

#endif
