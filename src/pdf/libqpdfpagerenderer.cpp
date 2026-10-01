#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfDocument>
#include <QPdfDocumentRenderOptions>
#include <QPdfPageRenderer>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <qpdfpagerenderer.h>
#include "libqpdfpagerenderer.h"
#include "libqpdfpagerenderer.hxx"

QPdfPageRenderer* QPdfPageRenderer_new() {
    return new VirtualQPdfPageRenderer();
}

QPdfPageRenderer* QPdfPageRenderer_new2(QObject* parent) {
    return new VirtualQPdfPageRenderer(parent);
}

QMetaObject* QPdfPageRenderer_MetaObject(const QPdfPageRenderer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfPageRenderer_Metacast(QPdfPageRenderer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfPageRenderer_Metacall(QPdfPageRenderer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfPageRenderer_Tr(const char* s) {
    auto _ret = QPdfPageRenderer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPdfPageRenderer_RenderMode(const QPdfPageRenderer* self) {
    return static_cast<int>(self->renderMode());
}

void QPdfPageRenderer_SetRenderMode(QPdfPageRenderer* self, int mode) {
    self->setRenderMode(static_cast<QPdfPageRenderer::RenderMode>(mode));
}

QPdfDocument* QPdfPageRenderer_Document(const QPdfPageRenderer* self) {
    return self->document();
}

void QPdfPageRenderer_SetDocument(QPdfPageRenderer* self, QPdfDocument* document) {
    self->setDocument(document);
}

unsigned long long QPdfPageRenderer_RequestPage(QPdfPageRenderer* self, int pageNumber, QSize* imageSize) {
    return static_cast<unsigned long long>(self->requestPage(static_cast<int>(pageNumber), *imageSize));
}

void QPdfPageRenderer_DocumentChanged(QPdfPageRenderer* self, QPdfDocument* document) {
    self->documentChanged(document);
}

void QPdfPageRenderer_Connect_DocumentChanged(QPdfPageRenderer* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageRenderer*, QPdfDocument*) = reinterpret_cast<void (*)(QPdfPageRenderer*, QPdfDocument*)>(slot);
    QPdfPageRenderer::connect(self,
                              static_cast<void (QPdfPageRenderer::*)(QPdfDocument*)>(&QPdfPageRenderer::documentChanged),
                              [self, slotFunc](QPdfDocument* document) {
                                  QPdfDocument* sigval1 = document;
                                  slotFunc(self, sigval1);
                              });
}

void QPdfPageRenderer_RenderModeChanged(QPdfPageRenderer* self, int renderMode) {
    self->renderModeChanged(static_cast<QPdfPageRenderer::RenderMode>(renderMode));
}

void QPdfPageRenderer_Connect_RenderModeChanged(QPdfPageRenderer* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageRenderer*, int) = reinterpret_cast<void (*)(QPdfPageRenderer*, int)>(slot);
    QPdfPageRenderer::connect(self,
                              static_cast<void (QPdfPageRenderer::*)(QPdfPageRenderer::RenderMode)>(&QPdfPageRenderer::renderModeChanged),
                              [self, slotFunc](QPdfPageRenderer::RenderMode renderMode) {
                                  int sigval1 = static_cast<int>(renderMode);
                                  slotFunc(self, sigval1);
                              });
}

void QPdfPageRenderer_PageRendered(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, const QImage* image, QPdfDocumentRenderOptions* options, unsigned long long requestId) {
    self->pageRendered(static_cast<int>(pageNumber), *imageSize, *image, *options, static_cast<quint64>(requestId));
}

void QPdfPageRenderer_Connect_PageRendered(QPdfPageRenderer* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageRenderer*, int, QSize*, QImage*, QPdfDocumentRenderOptions*, unsigned long long) = reinterpret_cast<void (*)(QPdfPageRenderer*, int, QSize*, QImage*, QPdfDocumentRenderOptions*, unsigned long long)>(slot);
    QPdfPageRenderer::connect(self,
                              static_cast<void (QPdfPageRenderer::*)(int, QSize, const QImage&, QPdfDocumentRenderOptions, quint64)>(&QPdfPageRenderer::pageRendered),
                              [self, slotFunc](int pageNumber, QSize imageSize, const QImage& image, QPdfDocumentRenderOptions options, quint64 requestId) {
                                  int sigval1 = pageNumber;
                                  QSize* sigval2 = new QSize(imageSize);
                                  const QImage& image_ret = image;
                                  // Cast returned reference into pointer
                                  QImage* sigval3 = const_cast<QImage*>(&image_ret);
                                  QPdfDocumentRenderOptions* sigval4 = new QPdfDocumentRenderOptions(options);
                                  unsigned long long sigval5 = static_cast<unsigned long long>(requestId);
                                  slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
                              });
}

libqt_string QPdfPageRenderer_Tr2(const char* s, const char* c) {
    auto _ret = QPdfPageRenderer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfPageRenderer_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfPageRenderer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long QPdfPageRenderer_RequestPage3(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QPdfDocumentRenderOptions* options) {
    return static_cast<unsigned long long>(self->requestPage(static_cast<int>(pageNumber), *imageSize, *options));
}

// Base class handler implementation
QMetaObject* QPdfPageRenderer_SuperMetaObject(const QPdfPageRenderer* self) {
    return (QMetaObject*)self->QPdfPageRenderer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnMetaObject(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self)))
        vqpdfpagerenderer->qpdfpagerenderer_metaobject_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfPageRenderer_SuperMetacast(QPdfPageRenderer* self, const char* param1) {
    return self->QPdfPageRenderer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnMetacast(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_metacast_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfPageRenderer_SuperMetacall(QPdfPageRenderer* self, int param1, int param2, void** param3) {
    return self->QPdfPageRenderer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnMetacall(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_metacall_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageRenderer_Event(QPdfPageRenderer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfPageRenderer_SuperEvent(QPdfPageRenderer* self, QEvent* event) {
    return self->QPdfPageRenderer::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_event_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageRenderer_EventFilter(QPdfPageRenderer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfPageRenderer_SuperEventFilter(QPdfPageRenderer* self, QObject* watched, QEvent* event) {
    return self->QPdfPageRenderer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnEventFilter(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_eventfilter_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageRenderer_TimerEvent(QPdfPageRenderer* self, QTimerEvent* event) {
    auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self);
    if (vqpdfpagerenderer) {
        vqpdfpagerenderer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageRenderer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageRenderer_SuperTimerEvent(QPdfPageRenderer* self, QTimerEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->QPdfPageRenderer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageRenderer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnTimerEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_timerevent_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageRenderer_ChildEvent(QPdfPageRenderer* self, QChildEvent* event) {
    auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self);
    if (vqpdfpagerenderer) {
        vqpdfpagerenderer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageRenderer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageRenderer_SuperChildEvent(QPdfPageRenderer* self, QChildEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->QPdfPageRenderer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageRenderer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnChildEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_childevent_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageRenderer_CustomEvent(QPdfPageRenderer* self, QEvent* event) {
    auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self);
    if (vqpdfpagerenderer) {
        vqpdfpagerenderer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageRenderer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageRenderer_SuperCustomEvent(QPdfPageRenderer* self, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->QPdfPageRenderer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageRenderer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnCustomEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_customevent_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageRenderer_ConnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal) {
    auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self);
    if (vqpdfpagerenderer) {
        vqpdfpagerenderer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfPageRenderer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageRenderer_SuperConnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->QPdfPageRenderer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfPageRenderer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnConnectNotify(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_connectnotify_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageRenderer_DisconnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal) {
    auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self);
    if (vqpdfpagerenderer) {
        vqpdfpagerenderer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfPageRenderer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageRenderer_SuperDisconnectNotify(QPdfPageRenderer* self, const QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->QPdfPageRenderer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfPageRenderer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnDisconnectNotify(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self))
        vqpdfpagerenderer->qpdfpagerenderer_disconnectnotify_callback = reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPdfPageRenderer_Sender(const QPdfPageRenderer* self) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->VirtualQPdfPageRenderer::sender();
    } else
        qFatal("Error: Protected method QPdfPageRenderer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfPageRenderer_SenderSignalIndex(const QPdfPageRenderer* self) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->VirtualQPdfPageRenderer::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfPageRenderer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfPageRenderer_Receivers(const QPdfPageRenderer* self, const char* signal) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->VirtualQPdfPageRenderer::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfPageRenderer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfPageRenderer_IsSignalConnected(const QPdfPageRenderer* self, const QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->VirtualQPdfPageRenderer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfPageRenderer::isSignalConnected called without a directly constructed type");
}

void QPdfPageRenderer_Delete(QPdfPageRenderer* self) {
    delete self;
}
