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

int QPrinter_DevType(const QPrinter* self) {
    return self->devType();
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
    auto _ret = self->printerName();
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
    auto _ret = self->outputFileName();
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
    auto _ret = self->printProgram();
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
    auto _ret = self->docName();
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
    auto _ret = self->creator();
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
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
    auto _ret = self->printerSelectionOption();
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

bool QPrinter_NewPage(QPrinter* self) {
    return self->newPage();
}

bool QPrinter_Abort(QPrinter* self) {
    return self->abort();
}

int QPrinter_PrinterState(const QPrinter* self) {
    return static_cast<int>(self->printerState());
}

QPaintEngine* QPrinter_PaintEngine(const QPrinter* self) {
    return self->paintEngine();
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

int QPrinter_Metric(const QPrinter* self, int param1) {
    auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
    if (vqprinter) {
        return vqprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
    qFatal("Error: Protected method QPrinter::metric called without a directly constructed type");
}

// Base class handler implementation
int QPrinter_SuperDevType(const QPrinter* self) {
    return self->QPrinter::devType();
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnDevType(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self)))
        vqprinter->qprinter_devtype_callback = reinterpret_cast<VirtualQPrinter::QPrinter_DevType_Callback>(slot);
}

// Base class handler implementation
bool QPrinter_SuperNewPage(QPrinter* self) {
    return self->QPrinter::newPage();
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnNewPage(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self))
        vqprinter->qprinter_newpage_callback = reinterpret_cast<VirtualQPrinter::QPrinter_NewPage_Callback>(slot);
}

// Base class handler implementation
QPaintEngine* QPrinter_SuperPaintEngine(const QPrinter* self) {
    return self->QPrinter::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnPaintEngine(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self)))
        vqprinter->qprinter_paintengine_callback = reinterpret_cast<VirtualQPrinter::QPrinter_PaintEngine_Callback>(slot);
}

// Base class handler implementation
int QPrinter_SuperMetric(const QPrinter* self, int param1) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self))) {
        return vqprinter->QPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPrinter::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnMetric(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self)))
        vqprinter->qprinter_metric_callback = reinterpret_cast<VirtualQPrinter::QPrinter_Metric_Callback>(slot);
}

// Derived class handler implementation
bool QPrinter_SetPageLayout(QPrinter* self, const QPageLayout* pageLayout) {
    return self->setPageLayout(*pageLayout);
}

// Base class handler implementation
bool QPrinter_SuperSetPageLayout(QPrinter* self, const QPageLayout* pageLayout) {
    return self->QPrinter::setPageLayout(*pageLayout);
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageLayout(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self))
        vqprinter->qprinter_setpagelayout_callback = reinterpret_cast<VirtualQPrinter::QPrinter_SetPageLayout_Callback>(slot);
}

// Derived class handler implementation
bool QPrinter_SetPageSize(QPrinter* self, const QPageSize* pageSize) {
    return self->setPageSize(*pageSize);
}

// Base class handler implementation
bool QPrinter_SuperSetPageSize(QPrinter* self, const QPageSize* pageSize) {
    return self->QPrinter::setPageSize(*pageSize);
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageSize(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self))
        vqprinter->qprinter_setpagesize_callback = reinterpret_cast<VirtualQPrinter::QPrinter_SetPageSize_Callback>(slot);
}

// Derived class handler implementation
bool QPrinter_SetPageOrientation(QPrinter* self, int orientation) {
    return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

// Base class handler implementation
bool QPrinter_SuperSetPageOrientation(QPrinter* self, int orientation) {
    return self->QPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageOrientation(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self))
        vqprinter->qprinter_setpageorientation_callback = reinterpret_cast<VirtualQPrinter::QPrinter_SetPageOrientation_Callback>(slot);
}

// Derived class handler implementation
bool QPrinter_SetPageMargins(QPrinter* self, const QMarginsF* margins, int units) {
    return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

// Base class handler implementation
bool QPrinter_SuperSetPageMargins(QPrinter* self, const QMarginsF* margins, int units) {
    return self->QPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageMargins(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self))
        vqprinter->qprinter_setpagemargins_callback = reinterpret_cast<VirtualQPrinter::QPrinter_SetPageMargins_Callback>(slot);
}

// Derived class handler implementation
void QPrinter_SetPageRanges(QPrinter* self, const QPageRanges* ranges) {
    self->setPageRanges(*ranges);
}

// Base class handler implementation
void QPrinter_SuperSetPageRanges(QPrinter* self, const QPageRanges* ranges) {
    self->QPrinter::setPageRanges(*ranges);
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetPageRanges(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self))
        vqprinter->qprinter_setpageranges_callback = reinterpret_cast<VirtualQPrinter::QPrinter_SetPageRanges_Callback>(slot);
}

// Derived class handler implementation
void QPrinter_InitPainter(const QPrinter* self, QPainter* painter) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter) {
        vqprinter->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPrinter::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPrinter_SuperInitPainter(const QPrinter* self, QPainter* painter) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self))) {
        vqprinter->QPrinter::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPrinter::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnInitPainter(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self)))
        vqprinter->qprinter_initpainter_callback = reinterpret_cast<VirtualQPrinter::QPrinter_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPrinter_Redirected(const QPrinter* self, QPoint* offset) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter) {
        return vqprinter->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPrinter::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPrinter_SuperRedirected(const QPrinter* self, QPoint* offset) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self))) {
        return vqprinter->QPrinter::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPrinter::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnRedirected(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self)))
        vqprinter->qprinter_redirected_callback = reinterpret_cast<VirtualQPrinter::QPrinter_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPrinter_SharedPainter(const QPrinter* self) {
    auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self));
    if (vqprinter) {
        return vqprinter->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPrinter::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPrinter_SuperSharedPainter(const QPrinter* self) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self))) {
        return vqprinter->QPrinter::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPrinter::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSharedPainter(QPrinter* self, intptr_t slot) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self)))
        vqprinter->qprinter_sharedpainter_callback = reinterpret_cast<VirtualQPrinter::QPrinter_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
void QPrinter_SetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
    if (auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self)) {
        vqprinter->VirtualQPrinter::setEngines(printEngine, paintEngine);
    } else
        qFatal("Error: Protected method QPrinter::setEngines called without a directly constructed type");
}

// Derived class protected handler implementation
double QPrinter_GetDecodedMetricF(const QPrinter* self, int metricA, int metricB) {
    if (auto* vqprinter = const_cast<VirtualQPrinter*>(dynamic_cast<const VirtualQPrinter*>(self))) {
        return vqprinter->VirtualQPrinter::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPrinter::getDecodedMetricF called without a directly constructed type");
}

void QPrinter_Delete(QPrinter* self) {
    delete self;
}
