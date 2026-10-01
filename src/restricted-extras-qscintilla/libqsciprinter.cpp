#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QPrintEngine>
#include <QPrinter>
#include <QRect>
#include <qsciprinter.h>
#include "libqsciprinter.h"
#include "libqsciprinter.hxx"

QsciPrinter* QsciPrinter_new() {
    return new VirtualQsciPrinter();
}

QsciPrinter* QsciPrinter_new2(int mode) {
    return new VirtualQsciPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
    self->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
}

int QsciPrinter_Magnification(const QsciPrinter* self) {
    return self->magnification();
}

void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification) {
    self->setMagnification(static_cast<int>(magnification));
}

int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
    return self->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
    return self->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_WrapMode(const QsciPrinter* self) {
    return static_cast<int>(self->wrapMode());
}

void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode) {
    self->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
}

// Base class handler implementation
void QsciPrinter_SuperFormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
    self->QsciPrinter::formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnFormatPage(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_formatpage_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_FormatPage_Callback>(slot);
}

// Base class handler implementation
void QsciPrinter_SuperSetMagnification(QsciPrinter* self, int magnification) {
    self->QsciPrinter::setMagnification(static_cast<int>(magnification));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetMagnification(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setmagnification_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetMagnification_Callback>(slot);
}

// Base class handler implementation
int QsciPrinter_SuperPrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
    return self->QsciPrinter::printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnPrintRange(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_printrange_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_PrintRange_Callback>(slot);
}

// Base class handler implementation
int QsciPrinter_SuperPrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
    return self->QsciPrinter::printRange(qsb, static_cast<int>(from), static_cast<int>(to));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnPrintRange2(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_printrange2_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_PrintRange2_Callback>(slot);
}

// Base class handler implementation
void QsciPrinter_SuperSetWrapMode(QsciPrinter* self, int wmode) {
    self->QsciPrinter::setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetWrapMode(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setwrapmode_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetWrapMode_Callback>(slot);
}

// Derived class handler implementation
int QsciPrinter_DevType(const QsciPrinter* self) {
    return self->devType();
}

// Base class handler implementation
int QsciPrinter_SuperDevType(const QsciPrinter* self) {
    return self->QsciPrinter::devType();
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnDevType(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self)))
        vqsciprinter->qsciprinter_devtype_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_DevType_Callback>(slot);
}

// Derived class handler implementation
bool QsciPrinter_NewPage(QsciPrinter* self) {
    return self->newPage();
}

// Base class handler implementation
bool QsciPrinter_SuperNewPage(QsciPrinter* self) {
    return self->QsciPrinter::newPage();
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnNewPage(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_newpage_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_NewPage_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QsciPrinter_PaintEngine(const QsciPrinter* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QsciPrinter_SuperPaintEngine(const QsciPrinter* self) {
    return self->QsciPrinter::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnPaintEngine(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self)))
        vqsciprinter->qsciprinter_paintengine_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
int QsciPrinter_Metric(const QsciPrinter* self, int param1) {
    auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self));
    if (vqsciprinter) {
        return vqsciprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QsciPrinter::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QsciPrinter_SuperMetric(const QsciPrinter* self, int param1) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->QsciPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QsciPrinter::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnMetric(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self)))
        vqsciprinter->qsciprinter_metric_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_Metric_Callback>(slot);
}

// Derived class handler implementation
bool QsciPrinter_SetPageLayout(QsciPrinter* self, const QPageLayout* pageLayout) {
    return self->setPageLayout(*pageLayout);
}

// Base class handler implementation
bool QsciPrinter_SuperSetPageLayout(QsciPrinter* self, const QPageLayout* pageLayout) {
    return self->QsciPrinter::setPageLayout(*pageLayout);
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageLayout(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setpagelayout_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageLayout_Callback>(slot);
}

// Derived class handler implementation
bool QsciPrinter_SetPageSize(QsciPrinter* self, const QPageSize* pageSize) {
    return self->setPageSize(*pageSize);
}

// Base class handler implementation
bool QsciPrinter_SuperSetPageSize(QsciPrinter* self, const QPageSize* pageSize) {
    return self->QsciPrinter::setPageSize(*pageSize);
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageSize(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setpagesize_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageSize_Callback>(slot);
}

// Derived class handler implementation
bool QsciPrinter_SetPageOrientation(QsciPrinter* self, int orientation) {
    return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

// Base class handler implementation
bool QsciPrinter_SuperSetPageOrientation(QsciPrinter* self, int orientation) {
    return self->QsciPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageOrientation(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setpageorientation_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageOrientation_Callback>(slot);
}

// Derived class handler implementation
bool QsciPrinter_SetPageMargins(QsciPrinter* self, const QMarginsF* margins, int units) {
    return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

// Base class handler implementation
bool QsciPrinter_SuperSetPageMargins(QsciPrinter* self, const QMarginsF* margins, int units) {
    return self->QsciPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageMargins(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setpagemargins_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageMargins_Callback>(slot);
}

// Derived class handler implementation
void QsciPrinter_SetPageRanges(QsciPrinter* self, const QPageRanges* ranges) {
    self->setPageRanges(*ranges);
}

// Base class handler implementation
void QsciPrinter_SuperSetPageRanges(QsciPrinter* self, const QPageRanges* ranges) {
    self->QsciPrinter::setPageRanges(*ranges);
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageRanges(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self))
        vqsciprinter->qsciprinter_setpageranges_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageRanges_Callback>(slot);
}

// Derived class handler implementation
void QsciPrinter_InitPainter(const QsciPrinter* self, QPainter* painter) {
    auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self));
    if (vqsciprinter) {
        vqsciprinter->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QsciPrinter::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciPrinter_SuperInitPainter(const QsciPrinter* self, QPainter* painter) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->QsciPrinter::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QsciPrinter::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnInitPainter(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self)))
        vqsciprinter->qsciprinter_initpainter_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QsciPrinter_Redirected(const QsciPrinter* self, QPoint* offset) {
    auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self));
    if (vqsciprinter) {
        return vqsciprinter->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QsciPrinter::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QsciPrinter_SuperRedirected(const QsciPrinter* self, QPoint* offset) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->QsciPrinter::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QsciPrinter::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnRedirected(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self)))
        vqsciprinter->qsciprinter_redirected_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QsciPrinter_SharedPainter(const QsciPrinter* self) {
    auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self));
    if (vqsciprinter) {
        return vqsciprinter->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QsciPrinter::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QsciPrinter_SuperSharedPainter(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->QsciPrinter::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QsciPrinter::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSharedPainter(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self)))
        vqsciprinter->qsciprinter_sharedpainter_callback = reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
void QsciPrinter_SetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->VirtualQsciPrinter::setEngines(printEngine, paintEngine);
    } else
        qFatal("Error: Protected method QsciPrinter::setEngines called without a directly constructed type");
}

// Derived class protected handler implementation
double QsciPrinter_GetDecodedMetricF(const QsciPrinter* self, int metricA, int metricB) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->VirtualQsciPrinter::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QsciPrinter::getDecodedMetricF called without a directly constructed type");
}

void QsciPrinter_Delete(QsciPrinter* self) {
    delete self;
}
