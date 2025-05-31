#pragma once
#ifndef SRCC_LIBVIRTUALQPICTURE_H
#define SRCC_LIBVIRTUALQPICTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPicture so that we can call protected methods
class VirtualQPicture final : public QPicture {

  public:
    // Virtual class boolean flag
    bool isVirtualQPicture = true;

    // Virtual class public types (including callbacks)
    using QPicture_DevType_Callback = int (*)();
    using QPicture_SetData_Callback = void (*)(QPicture*, const char*, unsigned int);
    using QPicture_PaintEngine_Callback = QPaintEngine* (*)();
    using QPicture_Metric_Callback = int (*)(const QPicture*, int);
    using QPicture_InitPainter_Callback = void (*)(const QPicture*, QPainter*);
    using QPicture_Redirected_Callback = QPaintDevice* (*)(const QPicture*, QPoint*);
    using QPicture_SharedPainter_Callback = QPainter* (*)();

  protected:
    // Instance callback storage
    QPicture_DevType_Callback qpicture_devtype_callback = nullptr;
    QPicture_SetData_Callback qpicture_setdata_callback = nullptr;
    QPicture_PaintEngine_Callback qpicture_paintengine_callback = nullptr;
    QPicture_Metric_Callback qpicture_metric_callback = nullptr;
    QPicture_InitPainter_Callback qpicture_initpainter_callback = nullptr;
    QPicture_Redirected_Callback qpicture_redirected_callback = nullptr;
    QPicture_SharedPainter_Callback qpicture_sharedpainter_callback = nullptr;

    // Instance base flags
    mutable bool qpicture_devtype_isbase = false;
    mutable bool qpicture_setdata_isbase = false;
    mutable bool qpicture_paintengine_isbase = false;
    mutable bool qpicture_metric_isbase = false;
    mutable bool qpicture_initpainter_isbase = false;
    mutable bool qpicture_redirected_isbase = false;
    mutable bool qpicture_sharedpainter_isbase = false;

  public:
    VirtualQPicture() : QPicture(){};
    VirtualQPicture(const QPicture& param1) : QPicture(param1){};
    VirtualQPicture(int formatVersion) : QPicture(formatVersion){};

    ~VirtualQPicture() {
        qpicture_devtype_callback = nullptr;
        qpicture_setdata_callback = nullptr;
        qpicture_paintengine_callback = nullptr;
        qpicture_metric_callback = nullptr;
        qpicture_initpainter_callback = nullptr;
        qpicture_redirected_callback = nullptr;
        qpicture_sharedpainter_callback = nullptr;
    }

    // Callback setters
    inline void setQPicture_DevType_Callback(QPicture_DevType_Callback cb) { qpicture_devtype_callback = cb; }
    inline void setQPicture_SetData_Callback(QPicture_SetData_Callback cb) { qpicture_setdata_callback = cb; }
    inline void setQPicture_PaintEngine_Callback(QPicture_PaintEngine_Callback cb) { qpicture_paintengine_callback = cb; }
    inline void setQPicture_Metric_Callback(QPicture_Metric_Callback cb) { qpicture_metric_callback = cb; }
    inline void setQPicture_InitPainter_Callback(QPicture_InitPainter_Callback cb) { qpicture_initpainter_callback = cb; }
    inline void setQPicture_Redirected_Callback(QPicture_Redirected_Callback cb) { qpicture_redirected_callback = cb; }
    inline void setQPicture_SharedPainter_Callback(QPicture_SharedPainter_Callback cb) { qpicture_sharedpainter_callback = cb; }

    // Base flag setters
    inline void setQPicture_DevType_IsBase(bool value) const { qpicture_devtype_isbase = value; }
    inline void setQPicture_SetData_IsBase(bool value) const { qpicture_setdata_isbase = value; }
    inline void setQPicture_PaintEngine_IsBase(bool value) const { qpicture_paintengine_isbase = value; }
    inline void setQPicture_Metric_IsBase(bool value) const { qpicture_metric_isbase = value; }
    inline void setQPicture_InitPainter_IsBase(bool value) const { qpicture_initpainter_isbase = value; }
    inline void setQPicture_Redirected_IsBase(bool value) const { qpicture_redirected_isbase = value; }
    inline void setQPicture_SharedPainter_IsBase(bool value) const { qpicture_sharedpainter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpicture_devtype_isbase) {
            qpicture_devtype_isbase = false;
            return QPicture::devType();
        } else if (qpicture_devtype_callback != nullptr) {
            int callback_ret = qpicture_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPicture::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(const char* data, uint size) override {
        if (qpicture_setdata_isbase) {
            qpicture_setdata_isbase = false;
            QPicture::setData(data, size);
        } else if (qpicture_setdata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            unsigned int cbval2 = static_cast<unsigned int>(size);

            qpicture_setdata_callback(this, cbval1, cbval2);
        } else {
            QPicture::setData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpicture_paintengine_isbase) {
            qpicture_paintengine_isbase = false;
            return QPicture::paintEngine();
        } else if (qpicture_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qpicture_paintengine_callback();
            return callback_ret;
        } else {
            return QPicture::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
        if (qpicture_metric_isbase) {
            qpicture_metric_isbase = false;
            return QPicture::metric(m);
        } else if (qpicture_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(m);

            int callback_ret = qpicture_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPicture::metric(m);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpicture_initpainter_isbase) {
            qpicture_initpainter_isbase = false;
            QPicture::initPainter(painter);
        } else if (qpicture_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qpicture_initpainter_callback(this, cbval1);
        } else {
            QPicture::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpicture_redirected_isbase) {
            qpicture_redirected_isbase = false;
            return QPicture::redirected(offset);
        } else if (qpicture_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qpicture_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPicture::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpicture_sharedpainter_isbase) {
            qpicture_sharedpainter_isbase = false;
            return QPicture::sharedPainter();
        } else if (qpicture_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qpicture_sharedpainter_callback();
            return callback_ret;
        } else {
            return QPicture::sharedPainter();
        }
    }

    // Friend functions
    friend int QPicture_Metric(const QPicture* self, int m);
    friend int QPicture_QBaseMetric(const QPicture* self, int m);
    friend void QPicture_InitPainter(const QPicture* self, QPainter* painter);
    friend void QPicture_QBaseInitPainter(const QPicture* self, QPainter* painter);
    friend QPaintDevice* QPicture_Redirected(const QPicture* self, QPoint* offset);
    friend QPaintDevice* QPicture_QBaseRedirected(const QPicture* self, QPoint* offset);
    friend QPainter* QPicture_SharedPainter(const QPicture* self);
    friend QPainter* QPicture_QBaseSharedPainter(const QPicture* self);
};

#endif
