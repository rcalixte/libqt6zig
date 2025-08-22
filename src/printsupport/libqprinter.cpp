#include <QList>
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
#include <QPrinterInfo>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinter.h>
#include "libqprinter.h"
#include "libqprinter.hxx"

QPrinter* QPrinter_new() {
    return new VirtualQPrinter();
}

QPrinter* QPrinter_new2(const QPrinterInfo* printer) {
    return new VirtualQPrinter(*printer);
}

QPrinter* QPrinter_new3(int mode) {
    return new VirtualQPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

QPrinter* QPrinter_new4(const QPrinterInfo* printer, int mode) {
    return new VirtualQPrinter(*printer, static_cast<QPrinter::PrinterMode>(mode));
}

void QPrinter_SetOutputFormat(QPrinter* self, int format) {
    self->setOutputFormat(static_cast<QPrinter::OutputFormat>(format));
}

int QPrinter_OutputFormat(const QPrinter* self) {
    return static_cast<int>(self->outputFormat());
}

void QPrinter_SetPdfVersion(QPrinter* self, int version) {
    self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPrinter_PdfVersion(const QPrinter* self) {
    return static_cast<int>(self->pdfVersion());
}

void QPrinter_SetPrinterName(QPrinter* self, const libqt_string printerName) {
    QString printerName_QString = QString::fromUtf8(printerName.data, printerName.len);
    self->setPrinterName(printerName_QString);
}

libqt_string QPrinter_PrinterName(const QPrinter* self) {
    QString _ret = self->printerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPrinter_IsValid(const QPrinter* self) {
    return self->isValid();
}

void QPrinter_SetOutputFileName(QPrinter* self, const libqt_string outputFileName) {
    QString outputFileName_QString = QString::fromUtf8(outputFileName.data, outputFileName.len);
    self->setOutputFileName(outputFileName_QString);
}

libqt_string QPrinter_OutputFileName(const QPrinter* self) {
    QString _ret = self->outputFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrinter_SetPrintProgram(QPrinter* self, const libqt_string printProgram) {
    QString printProgram_QString = QString::fromUtf8(printProgram.data, printProgram.len);
    self->setPrintProgram(printProgram_QString);
}

libqt_string QPrinter_PrintProgram(const QPrinter* self) {
    QString _ret = self->printProgram();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrinter_SetDocName(QPrinter* self, const libqt_string docName) {
    QString docName_QString = QString::fromUtf8(docName.data, docName.len);
    self->setDocName(docName_QString);
}

libqt_string QPrinter_DocName(const QPrinter* self) {
    QString _ret = self->docName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrinter_SetCreator(QPrinter* self, const libqt_string creator) {
    QString creator_QString = QString::fromUtf8(creator.data, creator.len);
    self->setCreator(creator_QString);
}

libqt_string QPrinter_Creator(const QPrinter* self) {
    QString _ret = self->creator();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrinter_SetPageOrder(QPrinter* self, int pageOrder) {
    self->setPageOrder(static_cast<QPrinter::PageOrder>(pageOrder));
}

int QPrinter_PageOrder(const QPrinter* self) {
    return static_cast<int>(self->pageOrder());
}

void QPrinter_SetResolution(QPrinter* self, int resolution) {
    self->setResolution(static_cast<int>(resolution));
}

int QPrinter_Resolution(const QPrinter* self) {
    return self->resolution();
}

void QPrinter_SetColorMode(QPrinter* self, int colorMode) {
    self->setColorMode(static_cast<QPrinter::ColorMode>(colorMode));
}

int QPrinter_ColorMode(const QPrinter* self) {
    return static_cast<int>(self->colorMode());
}

void QPrinter_SetCollateCopies(QPrinter* self, bool collate) {
    self->setCollateCopies(collate);
}

bool QPrinter_CollateCopies(const QPrinter* self) {
    return self->collateCopies();
}

void QPrinter_SetFullPage(QPrinter* self, bool fullPage) {
    self->setFullPage(fullPage);
}

bool QPrinter_FullPage(const QPrinter* self) {
    return self->fullPage();
}

void QPrinter_SetCopyCount(QPrinter* self, int copyCount) {
    self->setCopyCount(static_cast<int>(copyCount));
}

int QPrinter_CopyCount(const QPrinter* self) {
    return self->copyCount();
}

bool QPrinter_SupportsMultipleCopies(const QPrinter* self) {
    return self->supportsMultipleCopies();
}

void QPrinter_SetPaperSource(QPrinter* self, int paperSource) {
    self->setPaperSource(static_cast<QPrinter::PaperSource>(paperSource));
}

int QPrinter_PaperSource(const QPrinter* self) {
    return static_cast<int>(self->paperSource());
}

void QPrinter_SetDuplex(QPrinter* self, int duplex) {
    self->setDuplex(static_cast<QPrinter::DuplexMode>(duplex));
}

int QPrinter_Duplex(const QPrinter* self) {
    return static_cast<int>(self->duplex());
}

libqt_list /* of int */ QPrinter_SupportedResolutions(const QPrinter* self) {
    QList<int> _ret = self->supportedResolutions();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPrinter_SetFontEmbeddingEnabled(QPrinter* self, bool enable) {
    self->setFontEmbeddingEnabled(enable);
}

bool QPrinter_FontEmbeddingEnabled(const QPrinter* self) {
    return self->fontEmbeddingEnabled();
}

QRectF* QPrinter_PaperRect(const QPrinter* self, int param1) {
    return new QRectF(self->paperRect(static_cast<QPrinter::Unit>(param1)));
}

QRectF* QPrinter_PageRect(const QPrinter* self, int param1) {
    return new QRectF(self->pageRect(static_cast<QPrinter::Unit>(param1)));
}

libqt_string QPrinter_PrinterSelectionOption(const QPrinter* self) {
    QString _ret = self->printerSelectionOption();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPrinter_SetPrinterSelectionOption(QPrinter* self, const libqt_string printerSelectionOption) {
    QString printerSelectionOption_QString = QString::fromUtf8(printerSelectionOption.data, printerSelectionOption.len);
    self->setPrinterSelectionOption(printerSelectionOption_QString);
}

bool QPrinter_Abort(QPrinter* self) {
    return self->abort();
}

int QPrinter_PrinterState(const QPrinter* self) {
    return static_cast<int>(self->printerState());
}

QPrintEngine* QPrinter_PrintEngine(const QPrinter* self) {
    return self->printEngine();
}

void QPrinter_SetFromTo(QPrinter* self, int fromPage, int toPage) {
    self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QPrinter_FromPage(const QPrinter* self) {
    return self->fromPage();
}

int QPrinter_ToPage(const QPrinter* self) {
    return self->toPage();
}

void QPrinter_SetPrintRange(QPrinter* self, int range) {
    self->setPrintRange(static_cast<QPrinter::PrintRange>(range));
}

int QPrinter_PrintRange(const QPrinter* self) {
    return static_cast<int>(self->printRange());
}

// Derived class handler implementation
int QPrinter_DevType(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->devType();
    } else {
        return self->QPrinter::devType();
    }
}

// Base class handler implementation
int QPrinter_QBaseDevType(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_DevType_IsBase(true);
        return vqprinter->devType();
    } else {
        return self->QPrinter::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnDevType(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_DevType_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrinter_NewPage(QPrinter* self) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->newPage();
    } else {
        return self->QPrinter::newPage();
    }
}

// Base class handler implementation
bool QPrinter_QBaseNewPage(QPrinter* self) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_NewPage_IsBase(true);
        return vqprinter->newPage();
    } else {
        return self->QPrinter::newPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnNewPage(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_NewPage_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_NewPage_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPrinter_PaintEngine(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->paintEngine();
    } else {
        return self->QPrinter::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPrinter_QBasePaintEngine(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_PaintEngine_IsBase(true);
        return vqprinter->paintEngine();
    } else {
        return self->QPrinter::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnPaintEngine(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_PaintEngine_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrinter_Metric(const QPrinter* self, int param1) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrinter*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPrinter_QBaseMetric(const QPrinter* self, int param1) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_Metric_IsBase(true);
        return vqprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPrinter*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnMetric(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_Metric_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrinter_SetPageLayout(QPrinter* self, const QPageLayout* pageLayout) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->setPageLayout(*pageLayout);
    } else {
        return self->QPrinter::setPageLayout(*pageLayout);
    }
}

// Base class handler implementation
bool QPrinter_QBaseSetPageLayout(QPrinter* self, const QPageLayout* pageLayout) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageLayout_IsBase(true);
        return vqprinter->setPageLayout(*pageLayout);
    } else {
        return self->QPrinter::setPageLayout(*pageLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageLayout(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageLayout_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetPageLayout_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrinter_SetPageSize(QPrinter* self, const QPageSize* pageSize) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->setPageSize(*pageSize);
    } else {
        return self->QPrinter::setPageSize(*pageSize);
    }
}

// Base class handler implementation
bool QPrinter_QBaseSetPageSize(QPrinter* self, const QPageSize* pageSize) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageSize_IsBase(true);
        return vqprinter->setPageSize(*pageSize);
    } else {
        return self->QPrinter::setPageSize(*pageSize);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageSize(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageSize_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetPageSize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrinter_SetPageOrientation(QPrinter* self, int orientation) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    } else {
        return self->QPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    }
}

// Base class handler implementation
bool QPrinter_QBaseSetPageOrientation(QPrinter* self, int orientation) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageOrientation_IsBase(true);
        return vqprinter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    } else {
        return self->QPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageOrientation(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageOrientation_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetPageOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrinter_SetPageMargins(QPrinter* self, const QMarginsF* margins, int units) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    } else {
        return self->QPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    }
}

// Base class handler implementation
bool QPrinter_QBaseSetPageMargins(QPrinter* self, const QMarginsF* margins, int units) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageMargins_IsBase(true);
        return vqprinter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    } else {
        return self->QPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageMargins(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageMargins_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetPageMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrinter_SetPageRanges(QPrinter* self, const QPageRanges* ranges) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setPageRanges(*ranges);
    } else {
        self->QPrinter::setPageRanges(*ranges);
    }
}

// Base class handler implementation
void QPrinter_QBaseSetPageRanges(QPrinter* self, const QPageRanges* ranges) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageRanges_IsBase(true);
        vqprinter->setPageRanges(*ranges);
    } else {
        self->QPrinter::setPageRanges(*ranges);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageRanges(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetPageRanges_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetPageRanges_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrinter_InitPainter(const QPrinter* self, QPainter* painter) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->initPainter(painter);
    } else {
        ((VirtualQPrinter*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPrinter_QBaseInitPainter(const QPrinter* self, QPainter* painter) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_InitPainter_IsBase(true);
        vqprinter->initPainter(painter);
    } else {
        ((VirtualQPrinter*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnInitPainter(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_InitPainter_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPrinter_Redirected(const QPrinter* self, QPoint* offset) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->redirected(offset);
    } else {
        return ((VirtualQPrinter*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPrinter_QBaseRedirected(const QPrinter* self, QPoint* offset) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_Redirected_IsBase(true);
        return vqprinter->redirected(offset);
    } else {
        return ((VirtualQPrinter*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnRedirected(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_Redirected_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPrinter_SharedPainter(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->sharedPainter();
    } else {
        return ((VirtualQPrinter*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPrinter_QBaseSharedPainter(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SharedPainter_IsBase(true);
        return vqprinter->sharedPainter();
    } else {
        return ((VirtualQPrinter*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSharedPainter(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SharedPainter_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrinter_SetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setEngines(printEngine, paintEngine);
    } else {
        ((VirtualQPrinter*)self)->setEngines(printEngine, paintEngine);
    }
}

// Base class handler implementation
void QPrinter_QBaseSetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetEngines_IsBase(true);
        vqprinter->setEngines(printEngine, paintEngine);
    } else {
        ((VirtualQPrinter*)self)->setEngines(printEngine, paintEngine);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetEngines(QPrinter* self, intptr_t slot) {
    auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_SetEngines_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetEngines_Callback>(slot));
    }
}

// Derived class handler implementation
double QPrinter_GetDecodedMetricF(const QPrinter* self, int metricA, int metricB) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        return vqprinter->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPrinter*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPrinter_QBaseGetDecodedMetricF(const QPrinter* self, int metricA, int metricB) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_GetDecodedMetricF_IsBase(true);
        return vqprinter->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPrinter*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnGetDecodedMetricF(const QPrinter* self, intptr_t slot) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter && vqprinter->isVirtualQPrinter) {
        vqprinter->setQPrinter_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_GetDecodedMetricF_Callback>(slot));
    }
}

void QPrinter_Delete(QPrinter* self) {
    delete self;
}
