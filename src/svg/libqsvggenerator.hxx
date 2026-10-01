#pragma once
#ifndef SVG_LIBQSVGGENERATOR_HXX
#define SVG_LIBQSVGGENERATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgGenerator
class VirtualQSvgGenerator final : public QSvgGenerator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSvgGenerator_PaintEngine_Callback = QPaintEngine* (*)(const QSvgGenerator*);
    using QSvgGenerator_Metric_Callback = int (*)(const QSvgGenerator*, int);
    using QSvgGenerator_DevType_Callback = int (*)(const QSvgGenerator*);
    using QSvgGenerator_InitPainter_Callback = void (*)(const QSvgGenerator*, QPainter*);
    using QSvgGenerator_Redirected_Callback = QPaintDevice* (*)(const QSvgGenerator*, QPoint*);
    using QSvgGenerator_SharedPainter_Callback = QPainter* (*)(const QSvgGenerator*);
    using QSvgGenerator::getDecodedMetricF;

    // Instance callback storage
    QSvgGenerator_PaintEngine_Callback qsvggenerator_paintengine_callback = nullptr;
    QSvgGenerator_Metric_Callback qsvggenerator_metric_callback = nullptr;
    QSvgGenerator_DevType_Callback qsvggenerator_devtype_callback = nullptr;
    QSvgGenerator_InitPainter_Callback qsvggenerator_initpainter_callback = nullptr;
    QSvgGenerator_Redirected_Callback qsvggenerator_redirected_callback = nullptr;
    QSvgGenerator_SharedPainter_Callback qsvggenerator_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QSvgGenerator {
        using QSvgGenerator::initPainter;
        using QSvgGenerator::metric;
        using QSvgGenerator::paintEngine;
        using QSvgGenerator::redirected;
        using QSvgGenerator::sharedPainter;
    };

    VirtualQSvgGenerator() : QSvgGenerator() {};
    VirtualQSvgGenerator(QSvgGenerator::SvgVersion version) : QSvgGenerator(version) {};

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsvggenerator_paintengine_callback) {
            QPaintEngine* callback_ret = qsvggenerator_paintengine_callback(this);
            return callback_ret;
        }
        return QSvgGenerator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qsvggenerator_metric_callback) {
            int cbval1 = static_cast<int>(metric);
            int callback_ret = qsvggenerator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QSvgGenerator::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsvggenerator_devtype_callback) {
            int callback_ret = qsvggenerator_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QSvgGenerator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsvggenerator_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsvggenerator_initpainter_callback(this, cbval1);
            return;
        }
        QSvgGenerator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsvggenerator_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsvggenerator_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QSvgGenerator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsvggenerator_sharedpainter_callback) {
            QPainter* callback_ret = qsvggenerator_sharedpainter_callback(this);
            return callback_ret;
        }
        return QSvgGenerator::sharedPainter();
    }

    // Friend functions
    friend QPaintEngine* QSvgGenerator_SuperPaintEngine(const QSvgGenerator* self);
    friend int QSvgGenerator_SuperMetric(const QSvgGenerator* self, int metric);
    friend void QSvgGenerator_SuperInitPainter(const QSvgGenerator* self, QPainter* painter);
    friend QPaintDevice* QSvgGenerator_SuperRedirected(const QSvgGenerator* self, QPoint* offset);
    friend QPainter* QSvgGenerator_SuperSharedPainter(const QSvgGenerator* self);
};

#endif
