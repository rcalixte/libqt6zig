#pragma once
#ifndef SRCC_LIBVIRTUALQIMAGE_H
#define SRCC_LIBVIRTUALQIMAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QImage so that we can call protected methods
class VirtualQImage final : public QImage {

  public:
    // Virtual class boolean flag
    bool isVirtualQImage = true;

    // Virtual class public types (including callbacks)
    using QImage_DevType_Callback = int (*)();
    using QImage_PaintEngine_Callback = QPaintEngine* (*)();
    using QImage_Metric_Callback = int (*)(const QImage*, int);
    using QImage_InitPainter_Callback = void (*)(const QImage*, QPainter*);
    using QImage_Redirected_Callback = QPaintDevice* (*)(const QImage*, QPoint*);
    using QImage_SharedPainter_Callback = QPainter* (*)();
    using QImage_MirroredHelper_Callback = QImage* (*)(const QImage*, bool, bool);
    using QImage_RgbSwappedHelper_Callback = QImage* (*)();
    using QImage_MirroredInplace_Callback = void (*)(QImage*, bool, bool);
    using QImage_RgbSwappedInplace_Callback = void (*)();
    using QImage_ConvertToFormatHelper_Callback = QImage* (*)(const QImage*, int, int);
    using QImage_ConvertToFormatInplace_Callback = bool (*)(QImage*, int, int);
    using QImage_SmoothScaled_Callback = QImage* (*)(const QImage*, int, int);
    using QImage_DetachMetadata_Callback = void (*)();
    using QImage_DetachMetadata1_Callback = void (*)(QImage*, bool);

  protected:
    // Instance callback storage
    QImage_DevType_Callback qimage_devtype_callback = nullptr;
    QImage_PaintEngine_Callback qimage_paintengine_callback = nullptr;
    QImage_Metric_Callback qimage_metric_callback = nullptr;
    QImage_InitPainter_Callback qimage_initpainter_callback = nullptr;
    QImage_Redirected_Callback qimage_redirected_callback = nullptr;
    QImage_SharedPainter_Callback qimage_sharedpainter_callback = nullptr;
    QImage_MirroredHelper_Callback qimage_mirroredhelper_callback = nullptr;
    QImage_RgbSwappedHelper_Callback qimage_rgbswappedhelper_callback = nullptr;
    QImage_MirroredInplace_Callback qimage_mirroredinplace_callback = nullptr;
    QImage_RgbSwappedInplace_Callback qimage_rgbswappedinplace_callback = nullptr;
    QImage_ConvertToFormatHelper_Callback qimage_converttoformathelper_callback = nullptr;
    QImage_ConvertToFormatInplace_Callback qimage_converttoformatinplace_callback = nullptr;
    QImage_SmoothScaled_Callback qimage_smoothscaled_callback = nullptr;
    QImage_DetachMetadata_Callback qimage_detachmetadata_callback = nullptr;
    QImage_DetachMetadata1_Callback qimage_detachmetadata1_callback = nullptr;

    // Instance base flags
    mutable bool qimage_devtype_isbase = false;
    mutable bool qimage_paintengine_isbase = false;
    mutable bool qimage_metric_isbase = false;
    mutable bool qimage_initpainter_isbase = false;
    mutable bool qimage_redirected_isbase = false;
    mutable bool qimage_sharedpainter_isbase = false;
    mutable bool qimage_mirroredhelper_isbase = false;
    mutable bool qimage_rgbswappedhelper_isbase = false;
    mutable bool qimage_mirroredinplace_isbase = false;
    mutable bool qimage_rgbswappedinplace_isbase = false;
    mutable bool qimage_converttoformathelper_isbase = false;
    mutable bool qimage_converttoformatinplace_isbase = false;
    mutable bool qimage_smoothscaled_isbase = false;
    mutable bool qimage_detachmetadata_isbase = false;
    mutable bool qimage_detachmetadata1_isbase = false;

  public:
    VirtualQImage() : QImage(){};
    VirtualQImage(const QSize& size, QImage::Format format) : QImage(size, format){};
    VirtualQImage(int width, int height, QImage::Format format) : QImage(width, height, format){};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format) : QImage(data, width, height, format){};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format) : QImage(data, width, height, format){};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format) : QImage(data, width, height, bytesPerLine, format){};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format) : QImage(data, width, height, bytesPerLine, format){};
    VirtualQImage(const QString& fileName) : QImage(fileName){};
    VirtualQImage(const QImage& param1) : QImage(param1){};
    VirtualQImage(const QString& fileName, const char* format) : QImage(fileName, format){};

    ~VirtualQImage() {
        qimage_devtype_callback = nullptr;
        qimage_paintengine_callback = nullptr;
        qimage_metric_callback = nullptr;
        qimage_initpainter_callback = nullptr;
        qimage_redirected_callback = nullptr;
        qimage_sharedpainter_callback = nullptr;
        qimage_mirroredhelper_callback = nullptr;
        qimage_rgbswappedhelper_callback = nullptr;
        qimage_mirroredinplace_callback = nullptr;
        qimage_rgbswappedinplace_callback = nullptr;
        qimage_converttoformathelper_callback = nullptr;
        qimage_converttoformatinplace_callback = nullptr;
        qimage_smoothscaled_callback = nullptr;
        qimage_detachmetadata_callback = nullptr;
        qimage_detachmetadata1_callback = nullptr;
    }

    // Callback setters
    inline void setQImage_DevType_Callback(QImage_DevType_Callback cb) { qimage_devtype_callback = cb; }
    inline void setQImage_PaintEngine_Callback(QImage_PaintEngine_Callback cb) { qimage_paintengine_callback = cb; }
    inline void setQImage_Metric_Callback(QImage_Metric_Callback cb) { qimage_metric_callback = cb; }
    inline void setQImage_InitPainter_Callback(QImage_InitPainter_Callback cb) { qimage_initpainter_callback = cb; }
    inline void setQImage_Redirected_Callback(QImage_Redirected_Callback cb) { qimage_redirected_callback = cb; }
    inline void setQImage_SharedPainter_Callback(QImage_SharedPainter_Callback cb) { qimage_sharedpainter_callback = cb; }
    inline void setQImage_MirroredHelper_Callback(QImage_MirroredHelper_Callback cb) { qimage_mirroredhelper_callback = cb; }
    inline void setQImage_RgbSwappedHelper_Callback(QImage_RgbSwappedHelper_Callback cb) { qimage_rgbswappedhelper_callback = cb; }
    inline void setQImage_MirroredInplace_Callback(QImage_MirroredInplace_Callback cb) { qimage_mirroredinplace_callback = cb; }
    inline void setQImage_RgbSwappedInplace_Callback(QImage_RgbSwappedInplace_Callback cb) { qimage_rgbswappedinplace_callback = cb; }
    inline void setQImage_ConvertToFormatHelper_Callback(QImage_ConvertToFormatHelper_Callback cb) { qimage_converttoformathelper_callback = cb; }
    inline void setQImage_ConvertToFormatInplace_Callback(QImage_ConvertToFormatInplace_Callback cb) { qimage_converttoformatinplace_callback = cb; }
    inline void setQImage_SmoothScaled_Callback(QImage_SmoothScaled_Callback cb) { qimage_smoothscaled_callback = cb; }
    inline void setQImage_DetachMetadata_Callback(QImage_DetachMetadata_Callback cb) { qimage_detachmetadata_callback = cb; }
    inline void setQImage_DetachMetadata1_Callback(QImage_DetachMetadata1_Callback cb) { qimage_detachmetadata1_callback = cb; }

    // Base flag setters
    inline void setQImage_DevType_IsBase(bool value) const { qimage_devtype_isbase = value; }
    inline void setQImage_PaintEngine_IsBase(bool value) const { qimage_paintengine_isbase = value; }
    inline void setQImage_Metric_IsBase(bool value) const { qimage_metric_isbase = value; }
    inline void setQImage_InitPainter_IsBase(bool value) const { qimage_initpainter_isbase = value; }
    inline void setQImage_Redirected_IsBase(bool value) const { qimage_redirected_isbase = value; }
    inline void setQImage_SharedPainter_IsBase(bool value) const { qimage_sharedpainter_isbase = value; }
    inline void setQImage_MirroredHelper_IsBase(bool value) const { qimage_mirroredhelper_isbase = value; }
    inline void setQImage_RgbSwappedHelper_IsBase(bool value) const { qimage_rgbswappedhelper_isbase = value; }
    inline void setQImage_MirroredInplace_IsBase(bool value) const { qimage_mirroredinplace_isbase = value; }
    inline void setQImage_RgbSwappedInplace_IsBase(bool value) const { qimage_rgbswappedinplace_isbase = value; }
    inline void setQImage_ConvertToFormatHelper_IsBase(bool value) const { qimage_converttoformathelper_isbase = value; }
    inline void setQImage_ConvertToFormatInplace_IsBase(bool value) const { qimage_converttoformatinplace_isbase = value; }
    inline void setQImage_SmoothScaled_IsBase(bool value) const { qimage_smoothscaled_isbase = value; }
    inline void setQImage_DetachMetadata_IsBase(bool value) const { qimage_detachmetadata_isbase = value; }
    inline void setQImage_DetachMetadata1_IsBase(bool value) const { qimage_detachmetadata1_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qimage_devtype_isbase) {
            qimage_devtype_isbase = false;
            return QImage::devType();
        } else if (qimage_devtype_callback != nullptr) {
            int callback_ret = qimage_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QImage::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qimage_paintengine_isbase) {
            qimage_paintengine_isbase = false;
            return QImage::paintEngine();
        } else if (qimage_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qimage_paintengine_callback();
            return callback_ret;
        } else {
            return QImage::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qimage_metric_isbase) {
            qimage_metric_isbase = false;
            return QImage::metric(metric);
        } else if (qimage_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = qimage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QImage::metric(metric);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qimage_initpainter_isbase) {
            qimage_initpainter_isbase = false;
            QImage::initPainter(painter);
        } else if (qimage_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qimage_initpainter_callback(this, cbval1);
        } else {
            QImage::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qimage_redirected_isbase) {
            qimage_redirected_isbase = false;
            return QImage::redirected(offset);
        } else if (qimage_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qimage_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QImage::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qimage_sharedpainter_isbase) {
            qimage_sharedpainter_isbase = false;
            return QImage::sharedPainter();
        } else if (qimage_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qimage_sharedpainter_callback();
            return callback_ret;
        } else {
            return QImage::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    QImage mirrored_helper(bool horizontal, bool vertical) const {
        if (qimage_mirroredhelper_isbase) {
            qimage_mirroredhelper_isbase = false;
            return QImage::mirrored_helper(horizontal, vertical);
        } else if (qimage_mirroredhelper_callback != nullptr) {
            bool cbval1 = horizontal;
            bool cbval2 = vertical;

            QImage* callback_ret = qimage_mirroredhelper_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QImage::mirrored_helper(horizontal, vertical);
        }
    }

    // Virtual method for C ABI access and custom callback
    QImage rgbSwapped_helper() const {
        if (qimage_rgbswappedhelper_isbase) {
            qimage_rgbswappedhelper_isbase = false;
            return QImage::rgbSwapped_helper();
        } else if (qimage_rgbswappedhelper_callback != nullptr) {
            QImage* callback_ret = qimage_rgbswappedhelper_callback();
            return *callback_ret;
        } else {
            return QImage::rgbSwapped_helper();
        }
    }

    // Virtual method for C ABI access and custom callback
    void mirrored_inplace(bool horizontal, bool vertical) {
        if (qimage_mirroredinplace_isbase) {
            qimage_mirroredinplace_isbase = false;
            QImage::mirrored_inplace(horizontal, vertical);
        } else if (qimage_mirroredinplace_callback != nullptr) {
            bool cbval1 = horizontal;
            bool cbval2 = vertical;

            qimage_mirroredinplace_callback(this, cbval1, cbval2);
        } else {
            QImage::mirrored_inplace(horizontal, vertical);
        }
    }

    // Virtual method for C ABI access and custom callback
    void rgbSwapped_inplace() {
        if (qimage_rgbswappedinplace_isbase) {
            qimage_rgbswappedinplace_isbase = false;
            QImage::rgbSwapped_inplace();
        } else if (qimage_rgbswappedinplace_callback != nullptr) {
            qimage_rgbswappedinplace_callback();
        } else {
            QImage::rgbSwapped_inplace();
        }
    }

    // Virtual method for C ABI access and custom callback
    QImage convertToFormat_helper(QImage::Format format, Qt::ImageConversionFlags flags) const {
        if (qimage_converttoformathelper_isbase) {
            qimage_converttoformathelper_isbase = false;
            return QImage::convertToFormat_helper(format, flags);
        } else if (qimage_converttoformathelper_callback != nullptr) {
            int cbval1 = static_cast<int>(format);
            int cbval2 = static_cast<int>(flags);

            QImage* callback_ret = qimage_converttoformathelper_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QImage::convertToFormat_helper(format, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool convertToFormat_inplace(QImage::Format format, Qt::ImageConversionFlags flags) {
        if (qimage_converttoformatinplace_isbase) {
            qimage_converttoformatinplace_isbase = false;
            return QImage::convertToFormat_inplace(format, flags);
        } else if (qimage_converttoformatinplace_callback != nullptr) {
            int cbval1 = static_cast<int>(format);
            int cbval2 = static_cast<int>(flags);

            bool callback_ret = qimage_converttoformatinplace_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QImage::convertToFormat_inplace(format, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    QImage smoothScaled(int w, int h) const {
        if (qimage_smoothscaled_isbase) {
            qimage_smoothscaled_isbase = false;
            return QImage::smoothScaled(w, h);
        } else if (qimage_smoothscaled_callback != nullptr) {
            int cbval1 = w;
            int cbval2 = h;

            QImage* callback_ret = qimage_smoothscaled_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QImage::smoothScaled(w, h);
        }
    }

    // Virtual method for C ABI access and custom callback
    void detachMetadata() {
        if (qimage_detachmetadata_isbase) {
            qimage_detachmetadata_isbase = false;
            QImage::detachMetadata();
        } else if (qimage_detachmetadata_callback != nullptr) {
            qimage_detachmetadata_callback();
        } else {
            QImage::detachMetadata();
        }
    }

    // Virtual method for C ABI access and custom callback
    void detachMetadata(bool invalidateCache) {
        if (qimage_detachmetadata1_isbase) {
            qimage_detachmetadata1_isbase = false;
            QImage::detachMetadata(invalidateCache);
        } else if (qimage_detachmetadata1_callback != nullptr) {
            bool cbval1 = invalidateCache;

            qimage_detachmetadata1_callback(this, cbval1);
        } else {
            QImage::detachMetadata(invalidateCache);
        }
    }

    // Friend functions
    friend int QImage_Metric(const QImage* self, int metric);
    friend int QImage_QBaseMetric(const QImage* self, int metric);
    friend void QImage_InitPainter(const QImage* self, QPainter* painter);
    friend void QImage_QBaseInitPainter(const QImage* self, QPainter* painter);
    friend QPaintDevice* QImage_Redirected(const QImage* self, QPoint* offset);
    friend QPaintDevice* QImage_QBaseRedirected(const QImage* self, QPoint* offset);
    friend QPainter* QImage_SharedPainter(const QImage* self);
    friend QPainter* QImage_QBaseSharedPainter(const QImage* self);
    friend QImage* QImage_MirroredHelper(const QImage* self, bool horizontal, bool vertical);
    friend QImage* QImage_QBaseMirroredHelper(const QImage* self, bool horizontal, bool vertical);
    friend QImage* QImage_RgbSwappedHelper(const QImage* self);
    friend QImage* QImage_QBaseRgbSwappedHelper(const QImage* self);
    friend void QImage_MirroredInplace(QImage* self, bool horizontal, bool vertical);
    friend void QImage_QBaseMirroredInplace(QImage* self, bool horizontal, bool vertical);
    friend void QImage_RgbSwappedInplace(QImage* self);
    friend void QImage_QBaseRgbSwappedInplace(QImage* self);
    friend QImage* QImage_ConvertToFormatHelper(const QImage* self, int format, int flags);
    friend QImage* QImage_QBaseConvertToFormatHelper(const QImage* self, int format, int flags);
    friend bool QImage_ConvertToFormatInplace(QImage* self, int format, int flags);
    friend bool QImage_QBaseConvertToFormatInplace(QImage* self, int format, int flags);
    friend QImage* QImage_SmoothScaled(const QImage* self, int w, int h);
    friend QImage* QImage_QBaseSmoothScaled(const QImage* self, int w, int h);
    friend void QImage_DetachMetadata(QImage* self);
    friend void QImage_QBaseDetachMetadata(QImage* self);
    friend void QImage_DetachMetadata1(QImage* self, bool invalidateCache);
    friend void QImage_QBaseDetachMetadata1(QImage* self, bool invalidateCache);
};

#endif
