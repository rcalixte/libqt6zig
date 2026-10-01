#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIPRINTER_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIPRINTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciPrinter
class VirtualQsciPrinter final : public QsciPrinter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciPrinter_FormatPage_Callback = void (*)(QsciPrinter*, QPainter*, bool, QRect*, int);
    using QsciPrinter_SetMagnification_Callback = void (*)(QsciPrinter*, int);
    using QsciPrinter_PrintRange_Callback = int (*)(QsciPrinter*, QsciScintillaBase*, QPainter*, int, int);
    using QsciPrinter_PrintRange2_Callback = int (*)(QsciPrinter*, QsciScintillaBase*, int, int);
    using QsciPrinter_SetWrapMode_Callback = void (*)(QsciPrinter*, int);
    using QsciPrinter_DevType_Callback = int (*)(const QsciPrinter*);
    using QsciPrinter_NewPage_Callback = bool (*)(QsciPrinter*);
    using QsciPrinter_PaintEngine_Callback = QPaintEngine* (*)(const QsciPrinter*);
    using QsciPrinter_Metric_Callback = int (*)(const QsciPrinter*, int);
    using QsciPrinter_SetPageLayout_Callback = bool (*)(QsciPrinter*, QPageLayout*);
    using QsciPrinter_SetPageSize_Callback = bool (*)(QsciPrinter*, QPageSize*);
    using QsciPrinter_SetPageOrientation_Callback = bool (*)(QsciPrinter*, int);
    using QsciPrinter_SetPageMargins_Callback = bool (*)(QsciPrinter*, QMarginsF*, int);
    using QsciPrinter_SetPageRanges_Callback = void (*)(QsciPrinter*, QPageRanges*);
    using QsciPrinter_InitPainter_Callback = void (*)(const QsciPrinter*, QPainter*);
    using QsciPrinter_Redirected_Callback = QPaintDevice* (*)(const QsciPrinter*, QPoint*);
    using QsciPrinter_SharedPainter_Callback = QPainter* (*)(const QsciPrinter*);
    using QsciPrinter::getDecodedMetricF;
    using QsciPrinter::setEngines;

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

    // Access struct
    struct Base : QsciPrinter {
        using QsciPrinter::initPainter;
        using QsciPrinter::metric;
        using QsciPrinter::redirected;
        using QsciPrinter::sharedPainter;
    };

    VirtualQsciPrinter() : QsciPrinter() {};
    VirtualQsciPrinter(QPrinter::PrinterMode mode) : QsciPrinter(mode) {};

    // Virtual method for C ABI access and custom callback
    virtual void formatPage(QPainter& painter, bool drawing, QRect& area, int pagenr) override {
        if (qsciprinter_formatpage_callback) {
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval1 = &painter_ret;
            bool cbval2 = drawing;
            QRect& area_ret = area;
            // Cast returned reference into pointer
            QRect* cbval3 = &area_ret;
            int cbval4 = pagenr;
            qsciprinter_formatpage_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QsciPrinter::formatPage(painter, drawing, area, pagenr);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMagnification(int magnification) override {
        if (qsciprinter_setmagnification_callback) {
            int cbval1 = magnification;
            qsciprinter_setmagnification_callback(this, cbval1);
            return;
        }
        QsciPrinter::setMagnification(magnification);
    }

    // Virtual method for C ABI access and custom callback
    virtual int printRange(QsciScintillaBase* qsb, QPainter& painter, int from, int to) override {
        if (qsciprinter_printrange_callback) {
            QsciScintillaBase* cbval1 = qsb;
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval2 = &painter_ret;
            int cbval3 = from;
            int cbval4 = to;
            int callback_ret = qsciprinter_printrange_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::printRange(qsb, painter, from, to);
    }

    // Virtual method for C ABI access and custom callback
    virtual int printRange(QsciScintillaBase* qsb, int from, int to) override {
        if (qsciprinter_printrange2_callback) {
            QsciScintillaBase* cbval1 = qsb;
            int cbval2 = from;
            int cbval3 = to;
            int callback_ret = qsciprinter_printrange2_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::printRange(qsb, from, to);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWrapMode(QsciScintilla::WrapMode wmode) override {
        if (qsciprinter_setwrapmode_callback) {
            int cbval1 = static_cast<int>(wmode);
            qsciprinter_setwrapmode_callback(this, cbval1);
            return;
        }
        QsciPrinter::setWrapMode(wmode);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciprinter_devtype_callback) {
            int callback_ret = qsciprinter_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qsciprinter_newpage_callback) {
            bool callback_ret = qsciprinter_newpage_callback(this);
            return callback_ret;
        }
        return QsciPrinter::newPage();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciprinter_paintengine_callback) {
            QPaintEngine* callback_ret = qsciprinter_paintengine_callback(this);
            return callback_ret;
        }
        return QsciPrinter::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciprinter_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qsciprinter_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciPrinter::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qsciprinter_setpagelayout_callback) {
            const QPageLayout& pageLayout_ret = pageLayout;
            // Cast returned reference into pointer
            QPageLayout* cbval1 = const_cast<QPageLayout*>(&pageLayout_ret);
            bool callback_ret = qsciprinter_setpagelayout_callback(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::setPageLayout(pageLayout);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qsciprinter_setpagesize_callback) {
            const QPageSize& pageSize_ret = pageSize;
            // Cast returned reference into pointer
            QPageSize* cbval1 = const_cast<QPageSize*>(&pageSize_ret);
            bool callback_ret = qsciprinter_setpagesize_callback(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::setPageSize(pageSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qsciprinter_setpageorientation_callback) {
            int cbval1 = static_cast<int>(orientation);
            bool callback_ret = qsciprinter_setpageorientation_callback(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::setPageOrientation(orientation);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qsciprinter_setpagemargins_callback) {
            const QMarginsF& margins_ret = margins;
            // Cast returned reference into pointer
            QMarginsF* cbval1 = const_cast<QMarginsF*>(&margins_ret);
            int cbval2 = static_cast<int>(units);
            bool callback_ret = qsciprinter_setpagemargins_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciPrinter::setPageMargins(margins, units);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qsciprinter_setpageranges_callback) {
            const QPageRanges& ranges_ret = ranges;
            // Cast returned reference into pointer
            QPageRanges* cbval1 = const_cast<QPageRanges*>(&ranges_ret);
            qsciprinter_setpageranges_callback(this, cbval1);
            return;
        }
        QsciPrinter::setPageRanges(ranges);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciprinter_initpainter_callback) {
            QPainter* cbval1 = painter;
            qsciprinter_initpainter_callback(this, cbval1);
            return;
        }
        QsciPrinter::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciprinter_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qsciprinter_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QsciPrinter::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciprinter_sharedpainter_callback) {
            QPainter* callback_ret = qsciprinter_sharedpainter_callback(this);
            return callback_ret;
        }
        return QsciPrinter::sharedPainter();
    }

    // Friend functions
    friend int QsciPrinter_SuperMetric(const QsciPrinter* self, int param1);
    friend void QsciPrinter_SuperInitPainter(const QsciPrinter* self, QPainter* painter);
    friend QPaintDevice* QsciPrinter_SuperRedirected(const QsciPrinter* self, QPoint* offset);
    friend QPainter* QsciPrinter_SuperSharedPainter(const QsciPrinter* self);
};

#endif
