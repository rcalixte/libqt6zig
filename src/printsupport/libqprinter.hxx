#pragma once
#ifndef PRINTSUPPORT_LIBQPRINTER_HXX
#define PRINTSUPPORT_LIBQPRINTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrinter
class VirtualQPrinter final : public QPrinter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPrinter_DevType_Callback = int (*)(const QPrinter*);
    using QPrinter_NewPage_Callback = bool (*)(QPrinter*);
    using QPrinter_PaintEngine_Callback = QPaintEngine* (*)(const QPrinter*);
    using QPrinter_Metric_Callback = int (*)(const QPrinter*, int);
    using QPrinter_SetPageLayout_Callback = bool (*)(QPrinter*, QPageLayout*);
    using QPrinter_SetPageSize_Callback = bool (*)(QPrinter*, QPageSize*);
    using QPrinter_SetPageOrientation_Callback = bool (*)(QPrinter*, int);
    using QPrinter_SetPageMargins_Callback = bool (*)(QPrinter*, QMarginsF*, int);
    using QPrinter_SetPageRanges_Callback = void (*)(QPrinter*, QPageRanges*);
    using QPrinter_InitPainter_Callback = void (*)(const QPrinter*, QPainter*);
    using QPrinter_Redirected_Callback = QPaintDevice* (*)(const QPrinter*, QPoint*);
    using QPrinter_SharedPainter_Callback = QPainter* (*)(const QPrinter*);
    using QPrinter::getDecodedMetricF;
    using QPrinter::setEngines;

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

    // Access struct
    struct Base : QPrinter {
        using QPrinter::initPainter;
        using QPrinter::metric;
        using QPrinter::redirected;
        using QPrinter::sharedPainter;
    };

    VirtualQPrinter() : QPrinter() {};
    VirtualQPrinter(const QPrinterInfo& printer) : QPrinter(printer) {};
    VirtualQPrinter(QPrinter::PrinterMode mode) : QPrinter(mode) {};
    VirtualQPrinter(const QPrinterInfo& printer, QPrinter::PrinterMode mode) : QPrinter(printer, mode) {};

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprinter_devtype_callback) {
            int callback_ret = qprinter_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPrinter::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qprinter_newpage_callback) {
            bool callback_ret = qprinter_newpage_callback(this);
            return callback_ret;
        }
        return QPrinter::newPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprinter_paintengine_callback) {
            QPaintEngine* callback_ret = qprinter_paintengine_callback(this);
            return callback_ret;
        }
        return QPrinter::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprinter_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qprinter_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrinter::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qprinter_setpagelayout_callback) {
            const QPageLayout& pageLayout_ret = pageLayout;
            // Cast returned reference into pointer
            QPageLayout* cbval1 = const_cast<QPageLayout*>(&pageLayout_ret);
            bool callback_ret = qprinter_setpagelayout_callback(this, cbval1);
            return callback_ret;
        }
        return QPrinter::setPageLayout(pageLayout);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qprinter_setpagesize_callback) {
            const QPageSize& pageSize_ret = pageSize;
            // Cast returned reference into pointer
            QPageSize* cbval1 = const_cast<QPageSize*>(&pageSize_ret);
            bool callback_ret = qprinter_setpagesize_callback(this, cbval1);
            return callback_ret;
        }
        return QPrinter::setPageSize(pageSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qprinter_setpageorientation_callback) {
            int cbval1 = static_cast<int>(orientation);
            bool callback_ret = qprinter_setpageorientation_callback(this, cbval1);
            return callback_ret;
        }
        return QPrinter::setPageOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qprinter_setpagemargins_callback) {
            const QMarginsF& margins_ret = margins;
            // Cast returned reference into pointer
            QMarginsF* cbval1 = const_cast<QMarginsF*>(&margins_ret);
            int cbval2 = static_cast<int>(units);
            bool callback_ret = qprinter_setpagemargins_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPrinter::setPageMargins(margins, units);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qprinter_setpageranges_callback) {
            const QPageRanges& ranges_ret = ranges;
            // Cast returned reference into pointer
            QPageRanges* cbval1 = const_cast<QPageRanges*>(&ranges_ret);
            qprinter_setpageranges_callback(this, cbval1);
            return;
        }
        QPrinter::setPageRanges(ranges);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprinter_initpainter_callback) {
            QPainter* cbval1 = painter;
            qprinter_initpainter_callback(this, cbval1);
            return;
        }
        QPrinter::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprinter_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qprinter_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPrinter::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprinter_sharedpainter_callback) {
            QPainter* callback_ret = qprinter_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPrinter::sharedPainter();
    }

    // Friend functions
    friend int QPrinter_SuperMetric(const QPrinter* self, int param1);
    friend void QPrinter_SuperInitPainter(const QPrinter* self, QPainter* painter);
    friend QPaintDevice* QPrinter_SuperRedirected(const QPrinter* self, QPoint* offset);
    friend QPainter* QPrinter_SuperSharedPainter(const QPrinter* self);
};

#endif
