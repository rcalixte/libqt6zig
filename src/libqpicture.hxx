#pragma once
#ifndef LIBQPICTURE_HXX
#define LIBQPICTURE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPicture
class VirtualQPicture final : public QPicture {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPicture_DevType_Callback = int (*)(const QPicture*);
    using QPicture_SetData_Callback = void (*)(QPicture*, const char*, unsigned int);
    using QPicture_PaintEngine_Callback = QPaintEngine* (*)(const QPicture*);
    using QPicture_Metric_Callback = int (*)(const QPicture*, int);
    using QPicture_InitPainter_Callback = void (*)(const QPicture*, QPainter*);
    using QPicture_Redirected_Callback = QPaintDevice* (*)(const QPicture*, QPoint*);
    using QPicture_SharedPainter_Callback = QPainter* (*)(const QPicture*);
    using QPicture::getDecodedMetricF;

    // Instance callback storage
    QPicture_DevType_Callback qpicture_devtype_callback = nullptr;
    QPicture_SetData_Callback qpicture_setdata_callback = nullptr;
    QPicture_PaintEngine_Callback qpicture_paintengine_callback = nullptr;
    QPicture_Metric_Callback qpicture_metric_callback = nullptr;
    QPicture_InitPainter_Callback qpicture_initpainter_callback = nullptr;
    QPicture_Redirected_Callback qpicture_redirected_callback = nullptr;
    QPicture_SharedPainter_Callback qpicture_sharedpainter_callback = nullptr;

    // Access struct
    struct Base : QPicture {
        using QPicture::initPainter;
        using QPicture::metric;
        using QPicture::redirected;
        using QPicture::sharedPainter;
    };

    VirtualQPicture() : QPicture() {};
    VirtualQPicture(const QPicture& param1) : QPicture(param1) {};
    VirtualQPicture(int formatVersion) : QPicture(formatVersion) {};

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpicture_devtype_callback) {
            int callback_ret = qpicture_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPicture::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(const char* data, uint size) override {
        if (qpicture_setdata_callback) {
            const char* cbval1 = (const char*)data;
            unsigned int cbval2 = static_cast<unsigned int>(size);
            qpicture_setdata_callback(this, cbval1, cbval2);
            return;
        }
        QPicture::setData(data, size);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpicture_paintengine_callback) {
            QPaintEngine* callback_ret = qpicture_paintengine_callback(this);
            return callback_ret;
        }
        return QPicture::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
        if (qpicture_metric_callback) {
            int cbval1 = static_cast<int>(m);
            int callback_ret = qpicture_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPicture::metric(m);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpicture_initpainter_callback) {
            QPainter* cbval1 = painter;
            qpicture_initpainter_callback(this, cbval1);
            return;
        }
        QPicture::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpicture_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qpicture_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPicture::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpicture_sharedpainter_callback) {
            QPainter* callback_ret = qpicture_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPicture::sharedPainter();
    }

    // Friend functions
    friend int QPicture_SuperMetric(const QPicture* self, int m);
    friend void QPicture_SuperInitPainter(const QPicture* self, QPainter* painter);
    friend QPaintDevice* QPicture_SuperRedirected(const QPicture* self, QPoint* offset);
    friend QPainter* QPicture_SuperSharedPainter(const QPicture* self);
};

#endif
