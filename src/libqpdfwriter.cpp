#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPdfOutputIntent>
#include <QPdfWriter>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <QUuid>
#include <qpdfwriter.h>
#include "libqpdfwriter.h"
#include "libqpdfwriter.hxx"

QPdfWriter* QPdfWriter_new(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQPdfWriter(filename_QString);
}

QPdfWriter* QPdfWriter_new2(QIODevice* device) {
    return new VirtualQPdfWriter(device);
}

QPagedPaintDevice* QPdfWriter_AsQPagedPaintDevice(const QPdfWriter* self) {
    return const_cast<QPdfWriter*>(self);
}

QPdfWriter* QPdfWriter_FromQPagedPaintDevice(const QPagedPaintDevice* _qpagedpaintdevice) {
    return dynamic_cast<QPdfWriter*>(const_cast<QPagedPaintDevice*>(_qpagedpaintdevice));
}

QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfWriter_Metacall(QPdfWriter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfWriter_Tr(const char* s) {
    auto _ret = QPdfWriter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version) {
    self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPdfWriter_PdfVersion(const QPdfWriter* self) {
    return static_cast<int>(self->pdfVersion());
}

libqt_string QPdfWriter_Title(const QPdfWriter* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfWriter_SetTitle(QPdfWriter* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QPdfWriter_Creator(const QPdfWriter* self) {
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

void QPdfWriter_SetCreator(QPdfWriter* self, const libqt_string creator) {
    QString creator_QString = QString::fromUtf8(creator.data, creator.len);
    self->setCreator(creator_QString);
}

QUuid* QPdfWriter_DocumentId(const QPdfWriter* self) {
    return new QUuid(self->documentId());
}

void QPdfWriter_SetDocumentId(QPdfWriter* self, QUuid* documentId) {
    self->setDocumentId(*documentId);
}

bool QPdfWriter_NewPage(QPdfWriter* self) {
    return self->newPage();
}

void QPdfWriter_SetResolution(QPdfWriter* self, int resolution) {
    self->setResolution(static_cast<int>(resolution));
}

int QPdfWriter_Resolution(const QPdfWriter* self) {
    return self->resolution();
}

void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, const libqt_string xmpMetadata) {
    QByteArray xmpMetadata_QByteArray(xmpMetadata.data, xmpMetadata.len);
    self->setDocumentXmpMetadata(xmpMetadata_QByteArray);
}

libqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self) {
    QByteArray _qb = self->documentXmpMetadata();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QPdfWriter_AddFileAttachment(QPdfWriter* self, const libqt_string fileName, const libqt_string data) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray data_QByteArray(data.data, data.len);
    self->addFileAttachment(fileName_QString, data_QByteArray);
}

int QPdfWriter_ColorModel(const QPdfWriter* self) {
    return static_cast<int>(self->colorModel());
}

void QPdfWriter_SetColorModel(QPdfWriter* self, int model) {
    self->setColorModel(static_cast<QPdfWriter::ColorModel>(model));
}

QPdfOutputIntent* QPdfWriter_OutputIntent(const QPdfWriter* self) {
    return new QPdfOutputIntent(self->outputIntent());
}

void QPdfWriter_SetOutputIntent(QPdfWriter* self, const QPdfOutputIntent* intent) {
    self->setOutputIntent(*intent);
}

QPaintEngine* QPdfWriter_PaintEngine(const QPdfWriter* self) {
    auto* vqpdfwriter = dynamic_cast<const VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        return vqpdfwriter->paintEngine();
    }
    qFatal("Error: Protected method QPdfWriter::paintEngine called without a directly constructed type");
}

int QPdfWriter_Metric(const QPdfWriter* self, int id) {
    auto* vqpdfwriter = dynamic_cast<const VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        return vqpdfwriter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));
    }
    qFatal("Error: Protected method QPdfWriter::metric called without a directly constructed type");
}

libqt_string QPdfWriter_Tr2(const char* s, const char* c) {
    auto _ret = QPdfWriter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfWriter_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfWriter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfWriter_AddFileAttachment3(QPdfWriter* self, const libqt_string fileName, const libqt_string data, const libqt_string mimeType) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->addFileAttachment(fileName_QString, data_QByteArray, mimeType_QString);
}

// Base class handler implementation
QMetaObject* QPdfWriter_SuperMetaObject(const QPdfWriter* self) {
    return (QMetaObject*)self->QPdfWriter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnMetaObject(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_metaobject_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfWriter_SuperMetacast(QPdfWriter* self, const char* param1) {
    return self->QPdfWriter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnMetacast(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_metacast_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfWriter_SuperMetacall(QPdfWriter* self, int param1, int param2, void** param3) {
    return self->QPdfWriter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnMetacall(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_metacall_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QPdfWriter_SuperNewPage(QPdfWriter* self) {
    return self->QPdfWriter::newPage();
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnNewPage(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_newpage_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_NewPage_Callback>(slot);
}

// Base class handler implementation
QPaintEngine* QPdfWriter_SuperPaintEngine(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->QPdfWriter::paintEngine();
    } else
        qFatal("Error: Protected virtual method QPdfWriter::paintEngine called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnPaintEngine(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_paintengine_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_PaintEngine_Callback>(slot);
}

// Base class handler implementation
int QPdfWriter_SuperMetric(const QPdfWriter* self, int id) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->QPdfWriter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));
    } else
        qFatal("Error: Protected virtual method QPdfWriter::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnMetric(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_metric_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Metric_Callback>(slot);
}

// Derived class handler implementation
bool QPdfWriter_Event(QPdfWriter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfWriter_SuperEvent(QPdfWriter* self, QEvent* event) {
    return self->QPdfWriter::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_event_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfWriter_EventFilter(QPdfWriter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfWriter_SuperEventFilter(QPdfWriter* self, QObject* watched, QEvent* event) {
    return self->QPdfWriter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnEventFilter(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_eventfilter_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_TimerEvent(QPdfWriter* self, QTimerEvent* event) {
    auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        vqpdfwriter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfWriter_SuperTimerEvent(QPdfWriter* self, QTimerEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->QPdfWriter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnTimerEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_timerevent_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_ChildEvent(QPdfWriter* self, QChildEvent* event) {
    auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        vqpdfwriter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfWriter_SuperChildEvent(QPdfWriter* self, QChildEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->QPdfWriter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnChildEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_childevent_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_CustomEvent(QPdfWriter* self, QEvent* event) {
    auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        vqpdfwriter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfWriter_SuperCustomEvent(QPdfWriter* self, QEvent* event) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->QPdfWriter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnCustomEvent(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_customevent_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_ConnectNotify(QPdfWriter* self, const QMetaMethod* signal) {
    auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        vqpdfwriter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfWriter_SuperConnectNotify(QPdfWriter* self, const QMetaMethod* signal) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->QPdfWriter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnConnectNotify(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_connectnotify_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_DisconnectNotify(QPdfWriter* self, const QMetaMethod* signal) {
    auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self);
    if (vqpdfwriter) {
        vqpdfwriter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfWriter_SuperDisconnectNotify(QPdfWriter* self, const QMetaMethod* signal) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self)) {
        vqpdfwriter->QPdfWriter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnDisconnectNotify(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_disconnectnotify_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
bool QPdfWriter_SetPageLayout(QPdfWriter* self, const QPageLayout* pageLayout) {
    return self->setPageLayout(*pageLayout);
}

// Base class handler implementation
bool QPdfWriter_SuperSetPageLayout(QPdfWriter* self, const QPageLayout* pageLayout) {
    return self->QPdfWriter::setPageLayout(*pageLayout);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageLayout(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_setpagelayout_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageLayout_Callback>(slot);
}

// Derived class handler implementation
bool QPdfWriter_SetPageSize(QPdfWriter* self, const QPageSize* pageSize) {
    return self->setPageSize(*pageSize);
}

// Base class handler implementation
bool QPdfWriter_SuperSetPageSize(QPdfWriter* self, const QPageSize* pageSize) {
    return self->QPdfWriter::setPageSize(*pageSize);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageSize(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_setpagesize_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageSize_Callback>(slot);
}

// Derived class handler implementation
bool QPdfWriter_SetPageOrientation(QPdfWriter* self, int orientation) {
    return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

// Base class handler implementation
bool QPdfWriter_SuperSetPageOrientation(QPdfWriter* self, int orientation) {
    return self->QPdfWriter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageOrientation(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_setpageorientation_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageOrientation_Callback>(slot);
}

// Derived class handler implementation
bool QPdfWriter_SetPageMargins(QPdfWriter* self, const QMarginsF* margins, int units) {
    return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

// Base class handler implementation
bool QPdfWriter_SuperSetPageMargins(QPdfWriter* self, const QMarginsF* margins, int units) {
    return self->QPdfWriter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageMargins(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_setpagemargins_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageMargins_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_SetPageRanges(QPdfWriter* self, const QPageRanges* ranges) {
    self->setPageRanges(*ranges);
}

// Base class handler implementation
void QPdfWriter_SuperSetPageRanges(QPdfWriter* self, const QPageRanges* ranges) {
    self->QPdfWriter::setPageRanges(*ranges);
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSetPageRanges(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = dynamic_cast<VirtualQPdfWriter*>(self))
        vqpdfwriter->qpdfwriter_setpageranges_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SetPageRanges_Callback>(slot);
}

// Derived class handler implementation
int QPdfWriter_DevType(const QPdfWriter* self) {
    return self->devType();
}

// Base class handler implementation
int QPdfWriter_SuperDevType(const QPdfWriter* self) {
    return self->QPdfWriter::devType();
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnDevType(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_devtype_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_DevType_Callback>(slot);
}

// Derived class handler implementation
void QPdfWriter_InitPainter(const QPdfWriter* self, QPainter* painter) {
    auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self));
    if (vqpdfwriter) {
        vqpdfwriter->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfWriter_SuperInitPainter(const QPdfWriter* self, QPainter* painter) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        vqpdfwriter->QPdfWriter::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnInitPainter(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_initpainter_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPdfWriter_Redirected(const QPdfWriter* self, QPoint* offset) {
    auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self));
    if (vqpdfwriter) {
        return vqpdfwriter->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPdfWriter_SuperRedirected(const QPdfWriter* self, QPoint* offset) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->QPdfWriter::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPdfWriter::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnRedirected(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_redirected_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPdfWriter_SharedPainter(const QPdfWriter* self) {
    auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self));
    if (vqpdfwriter) {
        return vqpdfwriter->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPdfWriter::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPdfWriter_SuperSharedPainter(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->QPdfWriter::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPdfWriter::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfWriter_OnSharedPainter(QPdfWriter* self, intptr_t slot) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self)))
        vqpdfwriter->qpdfwriter_sharedpainter_callback = reinterpret_cast<VirtualQPdfWriter::QPdfWriter_SharedPainter_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPdfWriter_Sender(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->VirtualQPdfWriter::sender();
    } else
        qFatal("Error: Protected method QPdfWriter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfWriter_SenderSignalIndex(const QPdfWriter* self) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->VirtualQPdfWriter::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfWriter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfWriter_Receivers(const QPdfWriter* self, const char* signal) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->VirtualQPdfWriter::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfWriter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfWriter_IsSignalConnected(const QPdfWriter* self, const QMetaMethod* signal) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->VirtualQPdfWriter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfWriter::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPdfWriter_GetDecodedMetricF(const QPdfWriter* self, int metricA, int metricB) {
    if (auto* vqpdfwriter = const_cast<VirtualQPdfWriter*>(dynamic_cast<const VirtualQPdfWriter*>(self))) {
        return vqpdfwriter->VirtualQPdfWriter::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPdfWriter::getDecodedMetricF called without a directly constructed type");
}

void QPdfWriter_Delete(QPdfWriter* self) {
    delete self;
}
