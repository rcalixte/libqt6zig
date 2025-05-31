#pragma once
#ifndef SRCC_LIBVIRTUALQBITMAP_H
#define SRCC_LIBVIRTUALQBITMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QBitmap so that we can call protected methods
class VirtualQBitmap final : public QBitmap {

  public:
    // Virtual class boolean flag
    bool isVirtualQBitmap = true;

    // Virtual class public types (including callbacks)
    using QBitmap_DevType_Callback = int (*)();
    using QBitmap_PaintEngine_Callback = QPaintEngine* (*)();
    using QBitmap_Metric_Callback = int (*)(const QBitmap*, int);
    using QBitmap_InitPainter_Callback = void (*)(const QBitmap*, QPainter*);
    using QBitmap_Redirected_Callback = QPaintDevice* (*)(const QBitmap*, QPoint*);
    using QBitmap_SharedPainter_Callback = QPainter* (*)();

  protected:
    // Instance callback storage
    QBitmap_DevType_Callback qbitmap_devtype_callback = nullptr;
    QBitmap_PaintEngine_Callback qbitmap_paintengine_callback = nullptr;
    QBitmap_Metric_Callback qbitmap_metric_callback = nullptr;
    QBitmap_InitPainter_Callback qbitmap_initpainter_callback = nullptr;
    QBitmap_Redirected_Callback qbitmap_redirected_callback = nullptr;
    QBitmap_SharedPainter_Callback qbitmap_sharedpainter_callback = nullptr;

    // Instance base flags
    mutable bool qbitmap_devtype_isbase = false;
    mutable bool qbitmap_paintengine_isbase = false;
    mutable bool qbitmap_metric_isbase = false;
    mutable bool qbitmap_initpainter_isbase = false;
    mutable bool qbitmap_redirected_isbase = false;
    mutable bool qbitmap_sharedpainter_isbase = false;

  public:
    VirtualQBitmap() : QBitmap(){};
    VirtualQBitmap(const QPixmap& param1) : QBitmap(param1){};
    VirtualQBitmap(int w, int h) : QBitmap(w, h){};
    VirtualQBitmap(const QSize& param1) : QBitmap(param1){};
    VirtualQBitmap(const QString& fileName) : QBitmap(fileName){};
    VirtualQBitmap(const QBitmap& param1) : QBitmap(param1){};
    VirtualQBitmap(const QString& fileName, const char* format) : QBitmap(fileName, format){};

    ~VirtualQBitmap() {
        qbitmap_devtype_callback = nullptr;
        qbitmap_paintengine_callback = nullptr;
        qbitmap_metric_callback = nullptr;
        qbitmap_initpainter_callback = nullptr;
        qbitmap_redirected_callback = nullptr;
        qbitmap_sharedpainter_callback = nullptr;
    }

    // Callback setters
    inline void setQBitmap_DevType_Callback(QBitmap_DevType_Callback cb) { qbitmap_devtype_callback = cb; }
    inline void setQBitmap_PaintEngine_Callback(QBitmap_PaintEngine_Callback cb) { qbitmap_paintengine_callback = cb; }
    inline void setQBitmap_Metric_Callback(QBitmap_Metric_Callback cb) { qbitmap_metric_callback = cb; }
    inline void setQBitmap_InitPainter_Callback(QBitmap_InitPainter_Callback cb) { qbitmap_initpainter_callback = cb; }
    inline void setQBitmap_Redirected_Callback(QBitmap_Redirected_Callback cb) { qbitmap_redirected_callback = cb; }
    inline void setQBitmap_SharedPainter_Callback(QBitmap_SharedPainter_Callback cb) { qbitmap_sharedpainter_callback = cb; }

    // Base flag setters
    inline void setQBitmap_DevType_IsBase(bool value) const { qbitmap_devtype_isbase = value; }
    inline void setQBitmap_PaintEngine_IsBase(bool value) const { qbitmap_paintengine_isbase = value; }
    inline void setQBitmap_Metric_IsBase(bool value) const { qbitmap_metric_isbase = value; }
    inline void setQBitmap_InitPainter_IsBase(bool value) const { qbitmap_initpainter_isbase = value; }
    inline void setQBitmap_Redirected_IsBase(bool value) const { qbitmap_redirected_isbase = value; }
    inline void setQBitmap_SharedPainter_IsBase(bool value) const { qbitmap_sharedpainter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qbitmap_devtype_isbase) {
            qbitmap_devtype_isbase = false;
            return QBitmap::devType();
        } else if (qbitmap_devtype_callback != nullptr) {
            int callback_ret = qbitmap_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QBitmap::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qbitmap_paintengine_isbase) {
            qbitmap_paintengine_isbase = false;
            return QBitmap::paintEngine();
        } else if (qbitmap_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qbitmap_paintengine_callback();
            return callback_ret;
        } else {
            return QBitmap::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qbitmap_metric_isbase) {
            qbitmap_metric_isbase = false;
            return QBitmap::metric(param1);
        } else if (qbitmap_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qbitmap_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBitmap::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qbitmap_initpainter_isbase) {
            qbitmap_initpainter_isbase = false;
            QBitmap::initPainter(painter);
        } else if (qbitmap_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qbitmap_initpainter_callback(this, cbval1);
        } else {
            QBitmap::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qbitmap_redirected_isbase) {
            qbitmap_redirected_isbase = false;
            return QBitmap::redirected(offset);
        } else if (qbitmap_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qbitmap_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBitmap::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qbitmap_sharedpainter_isbase) {
            qbitmap_sharedpainter_isbase = false;
            return QBitmap::sharedPainter();
        } else if (qbitmap_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qbitmap_sharedpainter_callback();
            return callback_ret;
        } else {
            return QBitmap::sharedPainter();
        }
    }

    // Friend functions
    friend int QBitmap_Metric(const QBitmap* self, int param1);
    friend int QBitmap_QBaseMetric(const QBitmap* self, int param1);
    friend void QBitmap_InitPainter(const QBitmap* self, QPainter* painter);
    friend void QBitmap_QBaseInitPainter(const QBitmap* self, QPainter* painter);
    friend QPaintDevice* QBitmap_Redirected(const QBitmap* self, QPoint* offset);
    friend QPaintDevice* QBitmap_QBaseRedirected(const QBitmap* self, QPoint* offset);
    friend QPainter* QBitmap_SharedPainter(const QBitmap* self);
    friend QPainter* QBitmap_QBaseSharedPainter(const QBitmap* self);
};

#endif
