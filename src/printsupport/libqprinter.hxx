#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTER_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrinter so that we can call protected methods
class VirtualQPrinter final : public QPrinter {

  public:
    // Virtual class boolean flag
    bool isVirtualQPrinter = true;

    // Virtual class public types (including callbacks)
    using QPrinter_DevType_Callback = int (*)();
    using QPrinter_NewPage_Callback = bool (*)();
    using QPrinter_PaintEngine_Callback = QPaintEngine* (*)();
    using QPrinter_Metric_Callback = int (*)(const QPrinter*, int);
    using QPrinter_SetPageLayout_Callback = bool (*)(QPrinter*, QPageLayout*);
    using QPrinter_SetPageSize_Callback = bool (*)(QPrinter*, QPageSize*);
    using QPrinter_SetPageOrientation_Callback = bool (*)(QPrinter*, int);
    using QPrinter_SetPageMargins_Callback = bool (*)(QPrinter*, QMarginsF*, int);
    using QPrinter_SetPageRanges_Callback = void (*)(QPrinter*, QPageRanges*);
    using QPrinter_InitPainter_Callback = void (*)(const QPrinter*, QPainter*);
    using QPrinter_Redirected_Callback = QPaintDevice* (*)(const QPrinter*, QPoint*);
    using QPrinter_SharedPainter_Callback = QPainter* (*)();
    using QPrinter_SetEngines_Callback = void (*)(QPrinter*, QPrintEngine*, QPaintEngine*);
    using QPrinter_GetDecodedMetricF_Callback = double (*)(const QPrinter*, int, int);

  protected:
    // Instance callback storage
    QPrinter_DevType_Callback qprinter_devtype_callback = nullptr;
    QPrinter_NewPage_Callback qprinter_newpage_callback = nullptr;
    QPrinter_PaintEngine_Callback qprinter_paintengine_callback = nullptr;
    QPrinter_Metric_Callback qprinter_metric_callback = nullptr;
    QPrinter_SetPageLayout_Callback qprinter_setpagelayout_callback = nullptr;
    QPrinter_SetPageSize_Callback qprinter_setpagesize_callback = nullptr;
    QPrinter_SetPageOrientation_Callback qprinter_setpageorientation_callback = nullptr;
    QPrinter_SetPageMargins_Callback qprinter_setpagemargins_callback = nullptr;
    QPrinter_SetPageRanges_Callback qprinter_setpageranges_callback = nullptr;
    QPrinter_InitPainter_Callback qprinter_initpainter_callback = nullptr;
    QPrinter_Redirected_Callback qprinter_redirected_callback = nullptr;
    QPrinter_SharedPainter_Callback qprinter_sharedpainter_callback = nullptr;
    QPrinter_SetEngines_Callback qprinter_setengines_callback = nullptr;
    QPrinter_GetDecodedMetricF_Callback qprinter_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qprinter_devtype_isbase = false;
    mutable bool qprinter_newpage_isbase = false;
    mutable bool qprinter_paintengine_isbase = false;
    mutable bool qprinter_metric_isbase = false;
    mutable bool qprinter_setpagelayout_isbase = false;
    mutable bool qprinter_setpagesize_isbase = false;
    mutable bool qprinter_setpageorientation_isbase = false;
    mutable bool qprinter_setpagemargins_isbase = false;
    mutable bool qprinter_setpageranges_isbase = false;
    mutable bool qprinter_initpainter_isbase = false;
    mutable bool qprinter_redirected_isbase = false;
    mutable bool qprinter_sharedpainter_isbase = false;
    mutable bool qprinter_setengines_isbase = false;
    mutable bool qprinter_getdecodedmetricf_isbase = false;

  public:
    VirtualQPrinter() : QPrinter() {};
    VirtualQPrinter(const QPrinterInfo& printer) : QPrinter(printer) {};
    VirtualQPrinter(QPrinter::PrinterMode mode) : QPrinter(mode) {};
    VirtualQPrinter(const QPrinterInfo& printer, QPrinter::PrinterMode mode) : QPrinter(printer, mode) {};

    ~VirtualQPrinter() {
        qprinter_devtype_callback = nullptr;
        qprinter_newpage_callback = nullptr;
        qprinter_paintengine_callback = nullptr;
        qprinter_metric_callback = nullptr;
        qprinter_setpagelayout_callback = nullptr;
        qprinter_setpagesize_callback = nullptr;
        qprinter_setpageorientation_callback = nullptr;
        qprinter_setpagemargins_callback = nullptr;
        qprinter_setpageranges_callback = nullptr;
        qprinter_initpainter_callback = nullptr;
        qprinter_redirected_callback = nullptr;
        qprinter_sharedpainter_callback = nullptr;
        qprinter_setengines_callback = nullptr;
        qprinter_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQPrinter_DevType_Callback(QPrinter_DevType_Callback cb) { qprinter_devtype_callback = cb; }
    inline void setQPrinter_NewPage_Callback(QPrinter_NewPage_Callback cb) { qprinter_newpage_callback = cb; }
    inline void setQPrinter_PaintEngine_Callback(QPrinter_PaintEngine_Callback cb) { qprinter_paintengine_callback = cb; }
    inline void setQPrinter_Metric_Callback(QPrinter_Metric_Callback cb) { qprinter_metric_callback = cb; }
    inline void setQPrinter_SetPageLayout_Callback(QPrinter_SetPageLayout_Callback cb) { qprinter_setpagelayout_callback = cb; }
    inline void setQPrinter_SetPageSize_Callback(QPrinter_SetPageSize_Callback cb) { qprinter_setpagesize_callback = cb; }
    inline void setQPrinter_SetPageOrientation_Callback(QPrinter_SetPageOrientation_Callback cb) { qprinter_setpageorientation_callback = cb; }
    inline void setQPrinter_SetPageMargins_Callback(QPrinter_SetPageMargins_Callback cb) { qprinter_setpagemargins_callback = cb; }
    inline void setQPrinter_SetPageRanges_Callback(QPrinter_SetPageRanges_Callback cb) { qprinter_setpageranges_callback = cb; }
    inline void setQPrinter_InitPainter_Callback(QPrinter_InitPainter_Callback cb) { qprinter_initpainter_callback = cb; }
    inline void setQPrinter_Redirected_Callback(QPrinter_Redirected_Callback cb) { qprinter_redirected_callback = cb; }
    inline void setQPrinter_SharedPainter_Callback(QPrinter_SharedPainter_Callback cb) { qprinter_sharedpainter_callback = cb; }
    inline void setQPrinter_SetEngines_Callback(QPrinter_SetEngines_Callback cb) { qprinter_setengines_callback = cb; }
    inline void setQPrinter_GetDecodedMetricF_Callback(QPrinter_GetDecodedMetricF_Callback cb) { qprinter_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQPrinter_DevType_IsBase(bool value) const { qprinter_devtype_isbase = value; }
    inline void setQPrinter_NewPage_IsBase(bool value) const { qprinter_newpage_isbase = value; }
    inline void setQPrinter_PaintEngine_IsBase(bool value) const { qprinter_paintengine_isbase = value; }
    inline void setQPrinter_Metric_IsBase(bool value) const { qprinter_metric_isbase = value; }
    inline void setQPrinter_SetPageLayout_IsBase(bool value) const { qprinter_setpagelayout_isbase = value; }
    inline void setQPrinter_SetPageSize_IsBase(bool value) const { qprinter_setpagesize_isbase = value; }
    inline void setQPrinter_SetPageOrientation_IsBase(bool value) const { qprinter_setpageorientation_isbase = value; }
    inline void setQPrinter_SetPageMargins_IsBase(bool value) const { qprinter_setpagemargins_isbase = value; }
    inline void setQPrinter_SetPageRanges_IsBase(bool value) const { qprinter_setpageranges_isbase = value; }
    inline void setQPrinter_InitPainter_IsBase(bool value) const { qprinter_initpainter_isbase = value; }
    inline void setQPrinter_Redirected_IsBase(bool value) const { qprinter_redirected_isbase = value; }
    inline void setQPrinter_SharedPainter_IsBase(bool value) const { qprinter_sharedpainter_isbase = value; }
    inline void setQPrinter_SetEngines_IsBase(bool value) const { qprinter_setengines_isbase = value; }
    inline void setQPrinter_GetDecodedMetricF_IsBase(bool value) const { qprinter_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprinter_devtype_isbase) {
            qprinter_devtype_isbase = false;
            return QPrinter::devType();
        } else if (qprinter_devtype_callback != nullptr) {
            int callback_ret = qprinter_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPrinter::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qprinter_newpage_isbase) {
            qprinter_newpage_isbase = false;
            return QPrinter::newPage();
        } else if (qprinter_newpage_callback != nullptr) {
            bool callback_ret = qprinter_newpage_callback();
            return callback_ret;
        } else {
            return QPrinter::newPage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprinter_paintengine_isbase) {
            qprinter_paintengine_isbase = false;
            return QPrinter::paintEngine();
        } else if (qprinter_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qprinter_paintengine_callback();
            return callback_ret;
        } else {
            return QPrinter::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprinter_metric_isbase) {
            qprinter_metric_isbase = false;
            return QPrinter::metric(param1);
        } else if (qprinter_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qprinter_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPrinter::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qprinter_setpagelayout_isbase) {
            qprinter_setpagelayout_isbase = false;
            return QPrinter::setPageLayout(pageLayout);
        } else if (qprinter_setpagelayout_callback != nullptr) {
            const QPageLayout& pageLayout_ret = pageLayout;
            // Cast returned reference into pointer
            QPageLayout* cbval1 = const_cast<QPageLayout*>(&pageLayout_ret);

            bool callback_ret = qprinter_setpagelayout_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrinter::setPageLayout(pageLayout);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qprinter_setpagesize_isbase) {
            qprinter_setpagesize_isbase = false;
            return QPrinter::setPageSize(pageSize);
        } else if (qprinter_setpagesize_callback != nullptr) {
            const QPageSize& pageSize_ret = pageSize;
            // Cast returned reference into pointer
            QPageSize* cbval1 = const_cast<QPageSize*>(&pageSize_ret);

            bool callback_ret = qprinter_setpagesize_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrinter::setPageSize(pageSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qprinter_setpageorientation_isbase) {
            qprinter_setpageorientation_isbase = false;
            return QPrinter::setPageOrientation(orientation);
        } else if (qprinter_setpageorientation_callback != nullptr) {
            int cbval1 = static_cast<int>(orientation);

            bool callback_ret = qprinter_setpageorientation_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrinter::setPageOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qprinter_setpagemargins_isbase) {
            qprinter_setpagemargins_isbase = false;
            return QPrinter::setPageMargins(margins, units);
        } else if (qprinter_setpagemargins_callback != nullptr) {
            const QMarginsF& margins_ret = margins;
            // Cast returned reference into pointer
            QMarginsF* cbval1 = const_cast<QMarginsF*>(&margins_ret);
            int cbval2 = static_cast<int>(units);

            bool callback_ret = qprinter_setpagemargins_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPrinter::setPageMargins(margins, units);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qprinter_setpageranges_isbase) {
            qprinter_setpageranges_isbase = false;
            QPrinter::setPageRanges(ranges);
        } else if (qprinter_setpageranges_callback != nullptr) {
            const QPageRanges& ranges_ret = ranges;
            // Cast returned reference into pointer
            QPageRanges* cbval1 = const_cast<QPageRanges*>(&ranges_ret);

            qprinter_setpageranges_callback(this, cbval1);
        } else {
            QPrinter::setPageRanges(ranges);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprinter_initpainter_isbase) {
            qprinter_initpainter_isbase = false;
            QPrinter::initPainter(painter);
        } else if (qprinter_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qprinter_initpainter_callback(this, cbval1);
        } else {
            QPrinter::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprinter_redirected_isbase) {
            qprinter_redirected_isbase = false;
            return QPrinter::redirected(offset);
        } else if (qprinter_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qprinter_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPrinter::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprinter_sharedpainter_isbase) {
            qprinter_sharedpainter_isbase = false;
            return QPrinter::sharedPainter();
        } else if (qprinter_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qprinter_sharedpainter_callback();
            return callback_ret;
        } else {
            return QPrinter::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setEngines(QPrintEngine* printEngine, QPaintEngine* paintEngine) {
        if (qprinter_setengines_isbase) {
            qprinter_setengines_isbase = false;
            QPrinter::setEngines(printEngine, paintEngine);
        } else if (qprinter_setengines_callback != nullptr) {
            QPrintEngine* cbval1 = printEngine;
            QPaintEngine* cbval2 = paintEngine;

            qprinter_setengines_callback(this, cbval1, cbval2);
        } else {
            QPrinter::setEngines(printEngine, paintEngine);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qprinter_getdecodedmetricf_isbase) {
            qprinter_getdecodedmetricf_isbase = false;
            return QPrinter::getDecodedMetricF(metricA, metricB);
        } else if (qprinter_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qprinter_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QPrinter::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend int QPrinter_Metric(const QPrinter* self, int param1);
    friend int QPrinter_QBaseMetric(const QPrinter* self, int param1);
    friend void QPrinter_InitPainter(const QPrinter* self, QPainter* painter);
    friend void QPrinter_QBaseInitPainter(const QPrinter* self, QPainter* painter);
    friend QPaintDevice* QPrinter_Redirected(const QPrinter* self, QPoint* offset);
    friend QPaintDevice* QPrinter_QBaseRedirected(const QPrinter* self, QPoint* offset);
    friend QPainter* QPrinter_SharedPainter(const QPrinter* self);
    friend QPainter* QPrinter_QBaseSharedPainter(const QPrinter* self);
    friend void QPrinter_SetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
    friend void QPrinter_QBaseSetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
    friend double QPrinter_GetDecodedMetricF(const QPrinter* self, int metricA, int metricB);
    friend double QPrinter_QBaseGetDecodedMetricF(const QPrinter* self, int metricA, int metricB);
};

#endif
