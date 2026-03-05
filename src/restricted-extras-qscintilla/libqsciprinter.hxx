#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIPRINTER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciPrinter so that we can call protected methods
class VirtualQsciPrinter final : public QsciPrinter {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciPrinter = true;

    // Virtual class public types (including callbacks)
    using QsciPrinter_FormatPage_Callback = void (*)(QsciPrinter*, QPainter*, bool, QRect*, int);
    using QsciPrinter_SetMagnification_Callback = void (*)(QsciPrinter*, int);
    using QsciPrinter_PrintRange_Callback = int (*)(QsciPrinter*, QsciScintillaBase*, QPainter*, int, int);
    using QsciPrinter_PrintRange2_Callback = int (*)(QsciPrinter*, QsciScintillaBase*, int, int);
    using QsciPrinter_SetWrapMode_Callback = void (*)(QsciPrinter*, int);
    using QsciPrinter_DevType_Callback = int (*)();
    using QsciPrinter_NewPage_Callback = bool (*)();
    using QsciPrinter_PaintEngine_Callback = QPaintEngine* (*)();
    using QsciPrinter_Metric_Callback = int (*)(const QsciPrinter*, int);
    using QsciPrinter_SetPageLayout_Callback = bool (*)(QsciPrinter*, QPageLayout*);
    using QsciPrinter_SetPageSize_Callback = bool (*)(QsciPrinter*, QPageSize*);
    using QsciPrinter_SetPageOrientation_Callback = bool (*)(QsciPrinter*, int);
    using QsciPrinter_SetPageMargins_Callback = bool (*)(QsciPrinter*, QMarginsF*, int);
    using QsciPrinter_SetPageRanges_Callback = void (*)(QsciPrinter*, QPageRanges*);
    using QsciPrinter_InitPainter_Callback = void (*)(const QsciPrinter*, QPainter*);
    using QsciPrinter_Redirected_Callback = QPaintDevice* (*)(const QsciPrinter*, QPoint*);
    using QsciPrinter_SharedPainter_Callback = QPainter* (*)();
    using QsciPrinter_SetEngines_Callback = void (*)(QsciPrinter*, QPrintEngine*, QPaintEngine*);
    using QsciPrinter_GetDecodedMetricF_Callback = double (*)(const QsciPrinter*, int, int);

  protected:
    // Instance callback storage
    QsciPrinter_FormatPage_Callback qsciprinter_formatpage_callback = nullptr;
    QsciPrinter_SetMagnification_Callback qsciprinter_setmagnification_callback = nullptr;
    QsciPrinter_PrintRange_Callback qsciprinter_printrange_callback = nullptr;
    QsciPrinter_PrintRange2_Callback qsciprinter_printrange2_callback = nullptr;
    QsciPrinter_SetWrapMode_Callback qsciprinter_setwrapmode_callback = nullptr;
    QsciPrinter_DevType_Callback qsciprinter_devtype_callback = nullptr;
    QsciPrinter_NewPage_Callback qsciprinter_newpage_callback = nullptr;
    QsciPrinter_PaintEngine_Callback qsciprinter_paintengine_callback = nullptr;
    QsciPrinter_Metric_Callback qsciprinter_metric_callback = nullptr;
    QsciPrinter_SetPageLayout_Callback qsciprinter_setpagelayout_callback = nullptr;
    QsciPrinter_SetPageSize_Callback qsciprinter_setpagesize_callback = nullptr;
    QsciPrinter_SetPageOrientation_Callback qsciprinter_setpageorientation_callback = nullptr;
    QsciPrinter_SetPageMargins_Callback qsciprinter_setpagemargins_callback = nullptr;
    QsciPrinter_SetPageRanges_Callback qsciprinter_setpageranges_callback = nullptr;
    QsciPrinter_InitPainter_Callback qsciprinter_initpainter_callback = nullptr;
    QsciPrinter_Redirected_Callback qsciprinter_redirected_callback = nullptr;
    QsciPrinter_SharedPainter_Callback qsciprinter_sharedpainter_callback = nullptr;
    QsciPrinter_SetEngines_Callback qsciprinter_setengines_callback = nullptr;
    QsciPrinter_GetDecodedMetricF_Callback qsciprinter_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qsciprinter_formatpage_isbase = false;
    mutable bool qsciprinter_setmagnification_isbase = false;
    mutable bool qsciprinter_printrange_isbase = false;
    mutable bool qsciprinter_printrange2_isbase = false;
    mutable bool qsciprinter_setwrapmode_isbase = false;
    mutable bool qsciprinter_devtype_isbase = false;
    mutable bool qsciprinter_newpage_isbase = false;
    mutable bool qsciprinter_paintengine_isbase = false;
    mutable bool qsciprinter_metric_isbase = false;
    mutable bool qsciprinter_setpagelayout_isbase = false;
    mutable bool qsciprinter_setpagesize_isbase = false;
    mutable bool qsciprinter_setpageorientation_isbase = false;
    mutable bool qsciprinter_setpagemargins_isbase = false;
    mutable bool qsciprinter_setpageranges_isbase = false;
    mutable bool qsciprinter_initpainter_isbase = false;
    mutable bool qsciprinter_redirected_isbase = false;
    mutable bool qsciprinter_sharedpainter_isbase = false;
    mutable bool qsciprinter_setengines_isbase = false;
    mutable bool qsciprinter_getdecodedmetricf_isbase = false;

  public:
    VirtualQsciPrinter() : QsciPrinter() {};
    VirtualQsciPrinter(QPrinter::PrinterMode mode) : QsciPrinter(mode) {};

    // Callback setters
    inline void setQsciPrinter_FormatPage_Callback(QsciPrinter_FormatPage_Callback cb) { qsciprinter_formatpage_callback = cb; }
    inline void setQsciPrinter_SetMagnification_Callback(QsciPrinter_SetMagnification_Callback cb) { qsciprinter_setmagnification_callback = cb; }
    inline void setQsciPrinter_PrintRange_Callback(QsciPrinter_PrintRange_Callback cb) { qsciprinter_printrange_callback = cb; }
    inline void setQsciPrinter_PrintRange2_Callback(QsciPrinter_PrintRange2_Callback cb) { qsciprinter_printrange2_callback = cb; }
    inline void setQsciPrinter_SetWrapMode_Callback(QsciPrinter_SetWrapMode_Callback cb) { qsciprinter_setwrapmode_callback = cb; }
    inline void setQsciPrinter_DevType_Callback(QsciPrinter_DevType_Callback cb) { qsciprinter_devtype_callback = cb; }
    inline void setQsciPrinter_NewPage_Callback(QsciPrinter_NewPage_Callback cb) { qsciprinter_newpage_callback = cb; }
    inline void setQsciPrinter_PaintEngine_Callback(QsciPrinter_PaintEngine_Callback cb) { qsciprinter_paintengine_callback = cb; }
    inline void setQsciPrinter_Metric_Callback(QsciPrinter_Metric_Callback cb) { qsciprinter_metric_callback = cb; }
    inline void setQsciPrinter_SetPageLayout_Callback(QsciPrinter_SetPageLayout_Callback cb) { qsciprinter_setpagelayout_callback = cb; }
    inline void setQsciPrinter_SetPageSize_Callback(QsciPrinter_SetPageSize_Callback cb) { qsciprinter_setpagesize_callback = cb; }
    inline void setQsciPrinter_SetPageOrientation_Callback(QsciPrinter_SetPageOrientation_Callback cb) { qsciprinter_setpageorientation_callback = cb; }
    inline void setQsciPrinter_SetPageMargins_Callback(QsciPrinter_SetPageMargins_Callback cb) { qsciprinter_setpagemargins_callback = cb; }
    inline void setQsciPrinter_SetPageRanges_Callback(QsciPrinter_SetPageRanges_Callback cb) { qsciprinter_setpageranges_callback = cb; }
    inline void setQsciPrinter_InitPainter_Callback(QsciPrinter_InitPainter_Callback cb) { qsciprinter_initpainter_callback = cb; }
    inline void setQsciPrinter_Redirected_Callback(QsciPrinter_Redirected_Callback cb) { qsciprinter_redirected_callback = cb; }
    inline void setQsciPrinter_SharedPainter_Callback(QsciPrinter_SharedPainter_Callback cb) { qsciprinter_sharedpainter_callback = cb; }
    inline void setQsciPrinter_SetEngines_Callback(QsciPrinter_SetEngines_Callback cb) { qsciprinter_setengines_callback = cb; }
    inline void setQsciPrinter_GetDecodedMetricF_Callback(QsciPrinter_GetDecodedMetricF_Callback cb) { qsciprinter_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQsciPrinter_FormatPage_IsBase(bool value) const { qsciprinter_formatpage_isbase = value; }
    inline void setQsciPrinter_SetMagnification_IsBase(bool value) const { qsciprinter_setmagnification_isbase = value; }
    inline void setQsciPrinter_PrintRange_IsBase(bool value) const { qsciprinter_printrange_isbase = value; }
    inline void setQsciPrinter_PrintRange2_IsBase(bool value) const { qsciprinter_printrange2_isbase = value; }
    inline void setQsciPrinter_SetWrapMode_IsBase(bool value) const { qsciprinter_setwrapmode_isbase = value; }
    inline void setQsciPrinter_DevType_IsBase(bool value) const { qsciprinter_devtype_isbase = value; }
    inline void setQsciPrinter_NewPage_IsBase(bool value) const { qsciprinter_newpage_isbase = value; }
    inline void setQsciPrinter_PaintEngine_IsBase(bool value) const { qsciprinter_paintengine_isbase = value; }
    inline void setQsciPrinter_Metric_IsBase(bool value) const { qsciprinter_metric_isbase = value; }
    inline void setQsciPrinter_SetPageLayout_IsBase(bool value) const { qsciprinter_setpagelayout_isbase = value; }
    inline void setQsciPrinter_SetPageSize_IsBase(bool value) const { qsciprinter_setpagesize_isbase = value; }
    inline void setQsciPrinter_SetPageOrientation_IsBase(bool value) const { qsciprinter_setpageorientation_isbase = value; }
    inline void setQsciPrinter_SetPageMargins_IsBase(bool value) const { qsciprinter_setpagemargins_isbase = value; }
    inline void setQsciPrinter_SetPageRanges_IsBase(bool value) const { qsciprinter_setpageranges_isbase = value; }
    inline void setQsciPrinter_InitPainter_IsBase(bool value) const { qsciprinter_initpainter_isbase = value; }
    inline void setQsciPrinter_Redirected_IsBase(bool value) const { qsciprinter_redirected_isbase = value; }
    inline void setQsciPrinter_SharedPainter_IsBase(bool value) const { qsciprinter_sharedpainter_isbase = value; }
    inline void setQsciPrinter_SetEngines_IsBase(bool value) const { qsciprinter_setengines_isbase = value; }
    inline void setQsciPrinter_GetDecodedMetricF_IsBase(bool value) const { qsciprinter_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void formatPage(QPainter& painter, bool drawing, QRect& area, int pagenr) override {
        if (qsciprinter_formatpage_isbase) {
            qsciprinter_formatpage_isbase = false;
            QsciPrinter::formatPage(painter, drawing, area, pagenr);
            return;
        }
        auto formatpage_cb = qsciprinter_formatpage_callback;
        if (formatpage_cb) {
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval1 = &painter_ret;
            bool cbval2 = drawing;
            QRect& area_ret = area;
            // Cast returned reference into pointer
            QRect* cbval3 = &area_ret;
            int cbval4 = pagenr;

            formatpage_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QsciPrinter::formatPage(painter, drawing, area, pagenr);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMagnification(int magnification) override {
        if (qsciprinter_setmagnification_isbase) {
            qsciprinter_setmagnification_isbase = false;
            QsciPrinter::setMagnification(magnification);
            return;
        }
        auto setmagnification_cb = qsciprinter_setmagnification_callback;
        if (setmagnification_cb) {
            int cbval1 = magnification;

            setmagnification_cb(this, cbval1);
            return;
        }
        QsciPrinter::setMagnification(magnification);
    }

    // Virtual method for C ABI access and custom callback
    virtual int printRange(QsciScintillaBase* qsb, QPainter& painter, int from, int to) override {
        if (qsciprinter_printrange_isbase) {
            qsciprinter_printrange_isbase = false;
            return QsciPrinter::printRange(qsb, painter, from, to);
        }
        auto printrange_cb = qsciprinter_printrange_callback;
        if (printrange_cb) {
            QsciScintillaBase* cbval1 = qsb;
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval2 = &painter_ret;
            int cbval3 = from;
            int cbval4 = to;

            int callback_ret = printrange_cb(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::printRange(qsb, painter, from, to);
    }

    // Virtual method for C ABI access and custom callback
    virtual int printRange(QsciScintillaBase* qsb, int from, int to) override {
        if (qsciprinter_printrange2_isbase) {
            qsciprinter_printrange2_isbase = false;
            return QsciPrinter::printRange(qsb, from, to);
        }
        auto printrange2_cb = qsciprinter_printrange2_callback;
        if (printrange2_cb) {
            QsciScintillaBase* cbval1 = qsb;
            int cbval2 = from;
            int cbval3 = to;

            int callback_ret = printrange2_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::printRange(qsb, from, to);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWrapMode(QsciScintilla::WrapMode wmode) override {
        if (qsciprinter_setwrapmode_isbase) {
            qsciprinter_setwrapmode_isbase = false;
            QsciPrinter::setWrapMode(wmode);
            return;
        }
        auto setwrapmode_cb = qsciprinter_setwrapmode_callback;
        if (setwrapmode_cb) {
            int cbval1 = static_cast<int>(wmode);

            setwrapmode_cb(this, cbval1);
            return;
        }
        QsciPrinter::setWrapMode(wmode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciprinter_devtype_isbase) {
            qsciprinter_devtype_isbase = false;
            return QsciPrinter::devType();
        }
        auto devtype_cb = qsciprinter_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qsciprinter_newpage_isbase) {
            qsciprinter_newpage_isbase = false;
            return QsciPrinter::newPage();
        }
        auto newpage_cb = qsciprinter_newpage_callback;
        if (newpage_cb) {
            bool callback_ret = newpage_cb();
            return callback_ret;
        }
        return QsciPrinter::newPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciprinter_paintengine_isbase) {
            qsciprinter_paintengine_isbase = false;
            return QsciPrinter::paintEngine();
        }
        auto paintengine_cb = qsciprinter_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QsciPrinter::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciprinter_metric_isbase) {
            qsciprinter_metric_isbase = false;
            return QsciPrinter::metric(param1);
        }
        auto metric_cb = qsciprinter_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qsciprinter_setpagelayout_isbase) {
            qsciprinter_setpagelayout_isbase = false;
            return QsciPrinter::setPageLayout(pageLayout);
        }
        auto setpagelayout_cb = qsciprinter_setpagelayout_callback;
        if (setpagelayout_cb) {
            const QPageLayout& pageLayout_ret = pageLayout;
            // Cast returned reference into pointer
            QPageLayout* cbval1 = const_cast<QPageLayout*>(&pageLayout_ret);

            bool callback_ret = setpagelayout_cb(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::setPageLayout(pageLayout);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qsciprinter_setpagesize_isbase) {
            qsciprinter_setpagesize_isbase = false;
            return QsciPrinter::setPageSize(pageSize);
        }
        auto setpagesize_cb = qsciprinter_setpagesize_callback;
        if (setpagesize_cb) {
            const QPageSize& pageSize_ret = pageSize;
            // Cast returned reference into pointer
            QPageSize* cbval1 = const_cast<QPageSize*>(&pageSize_ret);

            bool callback_ret = setpagesize_cb(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::setPageSize(pageSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qsciprinter_setpageorientation_isbase) {
            qsciprinter_setpageorientation_isbase = false;
            return QsciPrinter::setPageOrientation(orientation);
        }
        auto setpageorientation_cb = qsciprinter_setpageorientation_callback;
        if (setpageorientation_cb) {
            int cbval1 = static_cast<int>(orientation);

            bool callback_ret = setpageorientation_cb(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::setPageOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qsciprinter_setpagemargins_isbase) {
            qsciprinter_setpagemargins_isbase = false;
            return QsciPrinter::setPageMargins(margins, units);
        }
        auto setpagemargins_cb = qsciprinter_setpagemargins_callback;
        if (setpagemargins_cb) {
            const QMarginsF& margins_ret = margins;
            // Cast returned reference into pointer
            QMarginsF* cbval1 = const_cast<QMarginsF*>(&margins_ret);
            int cbval2 = static_cast<int>(units);

            bool callback_ret = setpagemargins_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciPrinter::setPageMargins(margins, units);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qsciprinter_setpageranges_isbase) {
            qsciprinter_setpageranges_isbase = false;
            QsciPrinter::setPageRanges(ranges);
            return;
        }
        auto setpageranges_cb = qsciprinter_setpageranges_callback;
        if (setpageranges_cb) {
            const QPageRanges& ranges_ret = ranges;
            // Cast returned reference into pointer
            QPageRanges* cbval1 = const_cast<QPageRanges*>(&ranges_ret);

            setpageranges_cb(this, cbval1);
            return;
        }
        QsciPrinter::setPageRanges(ranges);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciprinter_initpainter_isbase) {
            qsciprinter_initpainter_isbase = false;
            QsciPrinter::initPainter(painter);
            return;
        }
        auto initpainter_cb = qsciprinter_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QsciPrinter::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciprinter_redirected_isbase) {
            qsciprinter_redirected_isbase = false;
            return QsciPrinter::redirected(offset);
        }
        auto redirected_cb = qsciprinter_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciprinter_sharedpainter_isbase) {
            qsciprinter_sharedpainter_isbase = false;
            return QsciPrinter::sharedPainter();
        }
        auto sharedpainter_cb = qsciprinter_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QsciPrinter::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    void setEngines(QPrintEngine* printEngine, QPaintEngine* paintEngine) {
        if (qsciprinter_setengines_isbase) {
            qsciprinter_setengines_isbase = false;
            QsciPrinter::setEngines(printEngine, paintEngine);
            return;
        }
        auto setengines_cb = qsciprinter_setengines_callback;
        if (setengines_cb) {
            QPrintEngine* cbval1 = printEngine;
            QPaintEngine* cbval2 = paintEngine;

            setengines_cb(this, cbval1, cbval2);
            return;
        }
        QsciPrinter::setEngines(printEngine, paintEngine);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qsciprinter_getdecodedmetricf_isbase) {
            qsciprinter_getdecodedmetricf_isbase = false;
            return QsciPrinter::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qsciprinter_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QsciPrinter::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend int QsciPrinter_Metric(const QsciPrinter* self, int param1);
    friend int QsciPrinter_SuperMetric(const QsciPrinter* self, int param1);
    friend void QsciPrinter_InitPainter(const QsciPrinter* self, QPainter* painter);
    friend void QsciPrinter_SuperInitPainter(const QsciPrinter* self, QPainter* painter);
    friend QPaintDevice* QsciPrinter_Redirected(const QsciPrinter* self, QPoint* offset);
    friend QPaintDevice* QsciPrinter_SuperRedirected(const QsciPrinter* self, QPoint* offset);
    friend QPainter* QsciPrinter_SharedPainter(const QsciPrinter* self);
    friend QPainter* QsciPrinter_SuperSharedPainter(const QsciPrinter* self);
    friend void QsciPrinter_SetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
    friend void QsciPrinter_SuperSetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
    friend double QsciPrinter_GetDecodedMetricF(const QsciPrinter* self, int metricA, int metricB);
    friend double QsciPrinter_SuperGetDecodedMetricF(const QsciPrinter* self, int metricA, int metricB);
};

#endif
