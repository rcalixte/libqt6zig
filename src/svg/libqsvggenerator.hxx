#pragma once
#ifndef SRC_SVGC_LIBVIRTUALQSVGGENERATOR_H
#define SRC_SVGC_LIBVIRTUALQSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgGenerator so that we can call protected methods
class VirtualQSvgGenerator final : public QSvgGenerator {

  public:
    // Virtual class boolean flag
    bool isVirtualQSvgGenerator = true;

    // Virtual class public types (including callbacks)
    using QSvgGenerator_PaintEngine_Callback = QPaintEngine* (*)();
    using QSvgGenerator_Metric_Callback = int (*)(const QSvgGenerator*, int);
    using QSvgGenerator_DevType_Callback = int (*)();
    using QSvgGenerator_InitPainter_Callback = void (*)(const QSvgGenerator*, QPainter*);
    using QSvgGenerator_Redirected_Callback = QPaintDevice* (*)(const QSvgGenerator*, QPoint*);
    using QSvgGenerator_SharedPainter_Callback = QPainter* (*)();
    using QSvgGenerator_GetDecodedMetricF_Callback = double (*)(const QSvgGenerator*, int, int);

  protected:
    // Instance callback storage
    QSvgGenerator_PaintEngine_Callback qsvggenerator_paintengine_callback = nullptr;
    QSvgGenerator_Metric_Callback qsvggenerator_metric_callback = nullptr;
    QSvgGenerator_DevType_Callback qsvggenerator_devtype_callback = nullptr;
    QSvgGenerator_InitPainter_Callback qsvggenerator_initpainter_callback = nullptr;
    QSvgGenerator_Redirected_Callback qsvggenerator_redirected_callback = nullptr;
    QSvgGenerator_SharedPainter_Callback qsvggenerator_sharedpainter_callback = nullptr;
    QSvgGenerator_GetDecodedMetricF_Callback qsvggenerator_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qsvggenerator_paintengine_isbase = false;
    mutable bool qsvggenerator_metric_isbase = false;
    mutable bool qsvggenerator_devtype_isbase = false;
    mutable bool qsvggenerator_initpainter_isbase = false;
    mutable bool qsvggenerator_redirected_isbase = false;
    mutable bool qsvggenerator_sharedpainter_isbase = false;
    mutable bool qsvggenerator_getdecodedmetricf_isbase = false;

  public:
    VirtualQSvgGenerator() : QSvgGenerator() {};
    VirtualQSvgGenerator(QSvgGenerator::SvgVersion version) : QSvgGenerator(version) {};

    // Callback setters
    inline void setQSvgGenerator_PaintEngine_Callback(QSvgGenerator_PaintEngine_Callback cb) { qsvggenerator_paintengine_callback = cb; }
    inline void setQSvgGenerator_Metric_Callback(QSvgGenerator_Metric_Callback cb) { qsvggenerator_metric_callback = cb; }
    inline void setQSvgGenerator_DevType_Callback(QSvgGenerator_DevType_Callback cb) { qsvggenerator_devtype_callback = cb; }
    inline void setQSvgGenerator_InitPainter_Callback(QSvgGenerator_InitPainter_Callback cb) { qsvggenerator_initpainter_callback = cb; }
    inline void setQSvgGenerator_Redirected_Callback(QSvgGenerator_Redirected_Callback cb) { qsvggenerator_redirected_callback = cb; }
    inline void setQSvgGenerator_SharedPainter_Callback(QSvgGenerator_SharedPainter_Callback cb) { qsvggenerator_sharedpainter_callback = cb; }
    inline void setQSvgGenerator_GetDecodedMetricF_Callback(QSvgGenerator_GetDecodedMetricF_Callback cb) { qsvggenerator_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQSvgGenerator_PaintEngine_IsBase(bool value) const { qsvggenerator_paintengine_isbase = value; }
    inline void setQSvgGenerator_Metric_IsBase(bool value) const { qsvggenerator_metric_isbase = value; }
    inline void setQSvgGenerator_DevType_IsBase(bool value) const { qsvggenerator_devtype_isbase = value; }
    inline void setQSvgGenerator_InitPainter_IsBase(bool value) const { qsvggenerator_initpainter_isbase = value; }
    inline void setQSvgGenerator_Redirected_IsBase(bool value) const { qsvggenerator_redirected_isbase = value; }
    inline void setQSvgGenerator_SharedPainter_IsBase(bool value) const { qsvggenerator_sharedpainter_isbase = value; }
    inline void setQSvgGenerator_GetDecodedMetricF_IsBase(bool value) const { qsvggenerator_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsvggenerator_paintengine_isbase) {
            qsvggenerator_paintengine_isbase = false;
            return QSvgGenerator::paintEngine();
        }
        auto paintengine_cb = qsvggenerator_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QSvgGenerator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qsvggenerator_metric_isbase) {
            qsvggenerator_metric_isbase = false;
            return QSvgGenerator::metric(metric);
        }
        auto metric_cb = qsvggenerator_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSvgGenerator::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsvggenerator_devtype_isbase) {
            qsvggenerator_devtype_isbase = false;
            return QSvgGenerator::devType();
        }
        auto devtype_cb = qsvggenerator_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QSvgGenerator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsvggenerator_initpainter_isbase) {
            qsvggenerator_initpainter_isbase = false;
            QSvgGenerator::initPainter(painter);
            return;
        }
        auto initpainter_cb = qsvggenerator_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QSvgGenerator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsvggenerator_redirected_isbase) {
            qsvggenerator_redirected_isbase = false;
            return QSvgGenerator::redirected(offset);
        }
        auto redirected_cb = qsvggenerator_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QSvgGenerator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsvggenerator_sharedpainter_isbase) {
            qsvggenerator_sharedpainter_isbase = false;
            return QSvgGenerator::sharedPainter();
        }
        auto sharedpainter_cb = qsvggenerator_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QSvgGenerator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qsvggenerator_getdecodedmetricf_isbase) {
            qsvggenerator_getdecodedmetricf_isbase = false;
            return QSvgGenerator::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qsvggenerator_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QSvgGenerator::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self);
    friend QPaintEngine* QSvgGenerator_SuperPaintEngine(const QSvgGenerator* self);
    friend int QSvgGenerator_Metric(const QSvgGenerator* self, int metric);
    friend int QSvgGenerator_SuperMetric(const QSvgGenerator* self, int metric);
    friend void QSvgGenerator_InitPainter(const QSvgGenerator* self, QPainter* painter);
    friend void QSvgGenerator_SuperInitPainter(const QSvgGenerator* self, QPainter* painter);
    friend QPaintDevice* QSvgGenerator_Redirected(const QSvgGenerator* self, QPoint* offset);
    friend QPaintDevice* QSvgGenerator_SuperRedirected(const QSvgGenerator* self, QPoint* offset);
    friend QPainter* QSvgGenerator_SharedPainter(const QSvgGenerator* self);
    friend QPainter* QSvgGenerator_SuperSharedPainter(const QSvgGenerator* self);
    friend double QSvgGenerator_GetDecodedMetricF(const QSvgGenerator* self, int metricA, int metricB);
    friend double QSvgGenerator_SuperGetDecodedMetricF(const QSvgGenerator* self, int metricA, int metricB);
};

#endif
