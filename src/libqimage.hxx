#pragma once
#ifndef SRCC_LIBVIRTUALQIMAGE_H
#define SRCC_LIBVIRTUALQIMAGE_H

#include <stdbool.h>
#include <stddef.h>

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
    using QImage_GetDecodedMetricF_Callback = double (*)(const QImage*, int, int);

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
    QImage_GetDecodedMetricF_Callback qimage_getdecodedmetricf_callback = nullptr;

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
    mutable bool qimage_getdecodedmetricf_isbase = false;

  public:
    VirtualQImage() : QImage() {};
    VirtualQImage(const QSize& size, QImage::Format format) : QImage(size, format) {};
    VirtualQImage(int width, int height, QImage::Format format) : QImage(width, height, format) {};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format) : QImage(data, width, height, format) {};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format) : QImage(data, width, height, format) {};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format) : QImage(data, width, height, bytesPerLine, format) {};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format) : QImage(data, width, height, bytesPerLine, format) {};
    VirtualQImage(const char** xpm) : QImage(xpm) {};
    VirtualQImage(const QString& fileName) : QImage(fileName) {};
    VirtualQImage(const QImage& param1) : QImage(param1) {};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, format, cleanupFunction) {};
    VirtualQImage(uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, format, cleanupFunction) {};
    VirtualQImage(const uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, bytesPerLine, format, cleanupFunction) {};
    VirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction) : QImage(data, width, height, bytesPerLine, format, cleanupFunction) {};
    VirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo) : QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo) {};
    VirtualQImage(const QString& fileName, const char* format) : QImage(fileName, format) {};

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
    inline void setQImage_GetDecodedMetricF_Callback(QImage_GetDecodedMetricF_Callback cb) { qimage_getdecodedmetricf_callback = cb; }

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
    inline void setQImage_GetDecodedMetricF_IsBase(bool value) const { qimage_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qimage_devtype_isbase) {
            qimage_devtype_isbase = false;
            return QImage::devType();
        }
        auto devtype_cb = qimage_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QImage::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qimage_paintengine_isbase) {
            qimage_paintengine_isbase = false;
            return QImage::paintEngine();
        }
        auto paintengine_cb = qimage_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QImage::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qimage_metric_isbase) {
            qimage_metric_isbase = false;
            return QImage::metric(metric);
        }
        auto metric_cb = qimage_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(metric);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QImage::metric(metric);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qimage_initpainter_isbase) {
            qimage_initpainter_isbase = false;
            QImage::initPainter(painter);
            return;
        }
        auto initpainter_cb = qimage_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QImage::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qimage_redirected_isbase) {
            qimage_redirected_isbase = false;
            return QImage::redirected(offset);
        }
        auto redirected_cb = qimage_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QImage::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qimage_sharedpainter_isbase) {
            qimage_sharedpainter_isbase = false;
            return QImage::sharedPainter();
        }
        auto sharedpainter_cb = qimage_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QImage::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    QImage mirrored_helper(bool horizontal, bool vertical) const {
        if (qimage_mirroredhelper_isbase) {
            qimage_mirroredhelper_isbase = false;
            return QImage::mirrored_helper(horizontal, vertical);
        }
        auto mirroredhelper_cb = qimage_mirroredhelper_callback;
        if (mirroredhelper_cb) {
            bool cbval1 = horizontal;
            bool cbval2 = vertical;

            QImage* callback_ret = mirroredhelper_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QImage::mirrored_helper(horizontal, vertical);
    }

    // Virtual method for C ABI access and custom callback
    QImage rgbSwapped_helper() const {
        if (qimage_rgbswappedhelper_isbase) {
            qimage_rgbswappedhelper_isbase = false;
            return QImage::rgbSwapped_helper();
        }
        auto rgbswappedhelper_cb = qimage_rgbswappedhelper_callback;
        if (rgbswappedhelper_cb) {
            QImage* callback_ret = rgbswappedhelper_cb();
            return *callback_ret;
        }
        return QImage::rgbSwapped_helper();
    }

    // Virtual method for C ABI access and custom callback
    void mirrored_inplace(bool horizontal, bool vertical) {
        if (qimage_mirroredinplace_isbase) {
            qimage_mirroredinplace_isbase = false;
            QImage::mirrored_inplace(horizontal, vertical);
            return;
        }
        auto mirroredinplace_cb = qimage_mirroredinplace_callback;
        if (mirroredinplace_cb) {
            bool cbval1 = horizontal;
            bool cbval2 = vertical;

            mirroredinplace_cb(this, cbval1, cbval2);
            return;
        }
        QImage::mirrored_inplace(horizontal, vertical);
    }

    // Virtual method for C ABI access and custom callback
    void rgbSwapped_inplace() {
        if (qimage_rgbswappedinplace_isbase) {
            qimage_rgbswappedinplace_isbase = false;
            QImage::rgbSwapped_inplace();
            return;
        }
        auto rgbswappedinplace_cb = qimage_rgbswappedinplace_callback;
        if (rgbswappedinplace_cb) {
            rgbswappedinplace_cb();
            return;
        }
        QImage::rgbSwapped_inplace();
    }

    // Virtual method for C ABI access and custom callback
    QImage convertToFormat_helper(QImage::Format format, Qt::ImageConversionFlags flags) const {
        if (qimage_converttoformathelper_isbase) {
            qimage_converttoformathelper_isbase = false;
            return QImage::convertToFormat_helper(format, flags);
        }
        auto converttoformathelper_cb = qimage_converttoformathelper_callback;
        if (converttoformathelper_cb) {
            int cbval1 = static_cast<int>(format);
            int cbval2 = static_cast<int>(flags);

            QImage* callback_ret = converttoformathelper_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QImage::convertToFormat_helper(format, flags);
    }

    // Virtual method for C ABI access and custom callback
    bool convertToFormat_inplace(QImage::Format format, Qt::ImageConversionFlags flags) {
        if (qimage_converttoformatinplace_isbase) {
            qimage_converttoformatinplace_isbase = false;
            return QImage::convertToFormat_inplace(format, flags);
        }
        auto converttoformatinplace_cb = qimage_converttoformatinplace_callback;
        if (converttoformatinplace_cb) {
            int cbval1 = static_cast<int>(format);
            int cbval2 = static_cast<int>(flags);

            bool callback_ret = converttoformatinplace_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QImage::convertToFormat_inplace(format, flags);
    }

    // Virtual method for C ABI access and custom callback
    QImage smoothScaled(int w, int h) const {
        if (qimage_smoothscaled_isbase) {
            qimage_smoothscaled_isbase = false;
            return QImage::smoothScaled(w, h);
        }
        auto smoothscaled_cb = qimage_smoothscaled_callback;
        if (smoothscaled_cb) {
            int cbval1 = w;
            int cbval2 = h;

            QImage* callback_ret = smoothscaled_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return QImage::smoothScaled(w, h);
    }

    // Virtual method for C ABI access and custom callback
    void detachMetadata() {
        if (qimage_detachmetadata_isbase) {
            qimage_detachmetadata_isbase = false;
            QImage::detachMetadata();
            return;
        }
        auto detachmetadata_cb = qimage_detachmetadata_callback;
        if (detachmetadata_cb) {
            detachmetadata_cb();
            return;
        }
        QImage::detachMetadata();
    }

    // Virtual method for C ABI access and custom callback
    void detachMetadata(bool invalidateCache) {
        if (qimage_detachmetadata1_isbase) {
            qimage_detachmetadata1_isbase = false;
            QImage::detachMetadata(invalidateCache);
            return;
        }
        auto detachmetadata1_cb = qimage_detachmetadata1_callback;
        if (detachmetadata1_cb) {
            bool cbval1 = invalidateCache;

            detachmetadata1_cb(this, cbval1);
            return;
        }
        QImage::detachMetadata(invalidateCache);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qimage_getdecodedmetricf_isbase) {
            qimage_getdecodedmetricf_isbase = false;
            return QImage::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qimage_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QImage::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend int QImage_Metric(const QImage* self, int metric);
    friend int QImage_SuperMetric(const QImage* self, int metric);
    friend void QImage_InitPainter(const QImage* self, QPainter* painter);
    friend void QImage_SuperInitPainter(const QImage* self, QPainter* painter);
    friend QPaintDevice* QImage_Redirected(const QImage* self, QPoint* offset);
    friend QPaintDevice* QImage_SuperRedirected(const QImage* self, QPoint* offset);
    friend QPainter* QImage_SharedPainter(const QImage* self);
    friend QPainter* QImage_SuperSharedPainter(const QImage* self);
    friend QImage* QImage_MirroredHelper(const QImage* self, bool horizontal, bool vertical);
    friend QImage* QImage_SuperMirroredHelper(const QImage* self, bool horizontal, bool vertical);
    friend QImage* QImage_RgbSwappedHelper(const QImage* self);
    friend QImage* QImage_SuperRgbSwappedHelper(const QImage* self);
    friend void QImage_MirroredInplace(QImage* self, bool horizontal, bool vertical);
    friend void QImage_SuperMirroredInplace(QImage* self, bool horizontal, bool vertical);
    friend void QImage_RgbSwappedInplace(QImage* self);
    friend void QImage_SuperRgbSwappedInplace(QImage* self);
    friend QImage* QImage_ConvertToFormatHelper(const QImage* self, int format, int flags);
    friend QImage* QImage_SuperConvertToFormatHelper(const QImage* self, int format, int flags);
    friend bool QImage_ConvertToFormatInplace(QImage* self, int format, int flags);
    friend bool QImage_SuperConvertToFormatInplace(QImage* self, int format, int flags);
    friend QImage* QImage_SmoothScaled(const QImage* self, int w, int h);
    friend QImage* QImage_SuperSmoothScaled(const QImage* self, int w, int h);
    friend void QImage_DetachMetadata(QImage* self);
    friend void QImage_SuperDetachMetadata(QImage* self);
    friend void QImage_DetachMetadata1(QImage* self, bool invalidateCache);
    friend void QImage_SuperDetachMetadata1(QImage* self, bool invalidateCache);
    friend double QImage_GetDecodedMetricF(const QImage* self, int metricA, int metricB);
    friend double QImage_SuperGetDecodedMetricF(const QImage* self, int metricA, int metricB);
};

#endif
