#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPdfDocument>
#include <QPdfDocumentRenderOptions>
#include <QPdfPageRenderer>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
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
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfPageRenderer_OnMetacall(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_Metacall_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfPageRenderer_QBaseMetacall(QPdfPageRenderer* self, int param1, int param2, void** param3) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_Metacall_IsBase(true);
        return vqpdfpagerenderer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfPageRenderer_Tr(const char* s) {
    QString _ret = QPdfPageRenderer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    QPdfPageRenderer::connect(self, &QPdfPageRenderer::documentChanged, [self, slotFunc](QPdfDocument* document) {
        QPdfDocument* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void QPdfPageRenderer_RenderModeChanged(QPdfPageRenderer* self, int renderMode) {
    self->renderModeChanged(static_cast<QPdfPageRenderer::RenderMode>(renderMode));
}

void QPdfPageRenderer_Connect_RenderModeChanged(QPdfPageRenderer* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageRenderer*, int) = reinterpret_cast<void (*)(QPdfPageRenderer*, int)>(slot);
    QPdfPageRenderer::connect(self, &QPdfPageRenderer::renderModeChanged, [self, slotFunc](QPdfPageRenderer::RenderMode renderMode) {
        int sigval1 = static_cast<int>(renderMode);
        slotFunc(self, sigval1);
    });
}

void QPdfPageRenderer_PageRendered(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QImage* image, QPdfDocumentRenderOptions* options, unsigned long long requestId) {
    self->pageRendered(static_cast<int>(pageNumber), *imageSize, *image, *options, static_cast<quint64>(requestId));
}

void QPdfPageRenderer_Connect_PageRendered(QPdfPageRenderer* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageRenderer*, int, QSize*, QImage*, QPdfDocumentRenderOptions*, unsigned long long) = reinterpret_cast<void (*)(QPdfPageRenderer*, int, QSize*, QImage*, QPdfDocumentRenderOptions*, unsigned long long)>(slot);
    QPdfPageRenderer::connect(self, &QPdfPageRenderer::pageRendered, [self, slotFunc](int pageNumber, QSize imageSize, const QImage& image, QPdfDocumentRenderOptions options, quint64 requestId) {
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
    QString _ret = QPdfPageRenderer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPdfPageRenderer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfPageRenderer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned long long QPdfPageRenderer_RequestPage3(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QPdfDocumentRenderOptions* options) {
    return static_cast<unsigned long long>(self->requestPage(static_cast<int>(pageNumber), *imageSize, *options));
}

// Derived class handler implementation
bool QPdfPageRenderer_Event(QPdfPageRenderer* self, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        return vqpdfpagerenderer->event(event);
    } else {
        return vqpdfpagerenderer->event(event);
    }
}

// Base class handler implementation
bool QPdfPageRenderer_QBaseEvent(QPdfPageRenderer* self, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_Event_IsBase(true);
        return vqpdfpagerenderer->event(event);
    } else {
        return vqpdfpagerenderer->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_Event_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageRenderer_EventFilter(QPdfPageRenderer* self, QObject* watched, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        return vqpdfpagerenderer->eventFilter(watched, event);
    } else {
        return vqpdfpagerenderer->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfPageRenderer_QBaseEventFilter(QPdfPageRenderer* self, QObject* watched, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_EventFilter_IsBase(true);
        return vqpdfpagerenderer->eventFilter(watched, event);
    } else {
        return vqpdfpagerenderer->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnEventFilter(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_EventFilter_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageRenderer_TimerEvent(QPdfPageRenderer* self, QTimerEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->timerEvent(event);
    } else {
        vqpdfpagerenderer->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfPageRenderer_QBaseTimerEvent(QPdfPageRenderer* self, QTimerEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_TimerEvent_IsBase(true);
        vqpdfpagerenderer->timerEvent(event);
    } else {
        vqpdfpagerenderer->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnTimerEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_TimerEvent_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageRenderer_ChildEvent(QPdfPageRenderer* self, QChildEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->childEvent(event);
    } else {
        vqpdfpagerenderer->childEvent(event);
    }
}

// Base class handler implementation
void QPdfPageRenderer_QBaseChildEvent(QPdfPageRenderer* self, QChildEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_ChildEvent_IsBase(true);
        vqpdfpagerenderer->childEvent(event);
    } else {
        vqpdfpagerenderer->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnChildEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_ChildEvent_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageRenderer_CustomEvent(QPdfPageRenderer* self, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->customEvent(event);
    } else {
        vqpdfpagerenderer->customEvent(event);
    }
}

// Base class handler implementation
void QPdfPageRenderer_QBaseCustomEvent(QPdfPageRenderer* self, QEvent* event) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_CustomEvent_IsBase(true);
        vqpdfpagerenderer->customEvent(event);
    } else {
        vqpdfpagerenderer->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnCustomEvent(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_CustomEvent_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageRenderer_ConnectNotify(QPdfPageRenderer* self, QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->connectNotify(*signal);
    } else {
        vqpdfpagerenderer->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfPageRenderer_QBaseConnectNotify(QPdfPageRenderer* self, QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_ConnectNotify_IsBase(true);
        vqpdfpagerenderer->connectNotify(*signal);
    } else {
        vqpdfpagerenderer->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnConnectNotify(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageRenderer_DisconnectNotify(QPdfPageRenderer* self, QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->disconnectNotify(*signal);
    } else {
        vqpdfpagerenderer->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfPageRenderer_QBaseDisconnectNotify(QPdfPageRenderer* self, QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_DisconnectNotify_IsBase(true);
        vqpdfpagerenderer->disconnectNotify(*signal);
    } else {
        vqpdfpagerenderer->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnDisconnectNotify(QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = dynamic_cast<VirtualQPdfPageRenderer*>(self)) {
        vqpdfpagerenderer->setQPdfPageRenderer_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfPageRenderer_Sender(const QPdfPageRenderer* self) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->sender();
    } else {
        return vqpdfpagerenderer->sender();
    }
}

// Base class handler implementation
QObject* QPdfPageRenderer_QBaseSender(const QPdfPageRenderer* self) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_Sender_IsBase(true);
        return vqpdfpagerenderer->sender();
    } else {
        return vqpdfpagerenderer->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnSender(const QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_Sender_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageRenderer_SenderSignalIndex(const QPdfPageRenderer* self) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->senderSignalIndex();
    } else {
        return vqpdfpagerenderer->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfPageRenderer_QBaseSenderSignalIndex(const QPdfPageRenderer* self) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_SenderSignalIndex_IsBase(true);
        return vqpdfpagerenderer->senderSignalIndex();
    } else {
        return vqpdfpagerenderer->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnSenderSignalIndex(const QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageRenderer_Receivers(const QPdfPageRenderer* self, const char* signal) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->receivers(signal);
    } else {
        return vqpdfpagerenderer->receivers(signal);
    }
}

// Base class handler implementation
int QPdfPageRenderer_QBaseReceivers(const QPdfPageRenderer* self, const char* signal) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_Receivers_IsBase(true);
        return vqpdfpagerenderer->receivers(signal);
    } else {
        return vqpdfpagerenderer->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnReceivers(const QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_Receivers_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageRenderer_IsSignalConnected(const QPdfPageRenderer* self, QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        return vqpdfpagerenderer->isSignalConnected(*signal);
    } else {
        return vqpdfpagerenderer->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfPageRenderer_QBaseIsSignalConnected(const QPdfPageRenderer* self, QMetaMethod* signal) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_IsSignalConnected_IsBase(true);
        return vqpdfpagerenderer->isSignalConnected(*signal);
    } else {
        return vqpdfpagerenderer->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageRenderer_OnIsSignalConnected(const QPdfPageRenderer* self, intptr_t slot) {
    if (auto* vqpdfpagerenderer = const_cast<VirtualQPdfPageRenderer*>(dynamic_cast<const VirtualQPdfPageRenderer*>(self))) {
        vqpdfpagerenderer->setQPdfPageRenderer_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfPageRenderer::QPdfPageRenderer_IsSignalConnected_Callback>(slot));
    }
}

void QPdfPageRenderer_Delete(QPdfPageRenderer* self) {
    delete self;
}
