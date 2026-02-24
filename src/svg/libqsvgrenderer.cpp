#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <QTimerEvent>
#include <QTransform>
#include <QXmlStreamReader>
#include <qsvgrenderer.h>
#include "libqsvgrenderer.h"
#include "libqsvgrenderer.hxx"

QSvgRenderer* QSvgRenderer_new() {
    return new VirtualQSvgRenderer();
}

QSvgRenderer* QSvgRenderer_new2(const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQSvgRenderer(filename_QString);
}

QSvgRenderer* QSvgRenderer_new3(const libqt_string contents) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    return new VirtualQSvgRenderer(contents_QByteArray);
}

QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents) {
    return new VirtualQSvgRenderer(contents);
}

QSvgRenderer* QSvgRenderer_new5(QObject* parent) {
    return new VirtualQSvgRenderer(parent);
}

QSvgRenderer* QSvgRenderer_new6(const libqt_string filename, QObject* parent) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQSvgRenderer(filename_QString, parent);
}

QSvgRenderer* QSvgRenderer_new7(const libqt_string contents, QObject* parent) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    return new VirtualQSvgRenderer(contents_QByteArray, parent);
}

QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent) {
    return new VirtualQSvgRenderer(contents, parent);
}

QMetaObject* QSvgRenderer_MetaObject(const QSvgRenderer* self) {
    auto* vqsvgrenderer = dynamic_cast<const VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQSvgRenderer*)self)->metaObject();
    }
}

void* QSvgRenderer_Metacast(QSvgRenderer* self, const char* param1) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQSvgRenderer*)self)->qt_metacast(param1);
    }
}

int QSvgRenderer_Metacall(QSvgRenderer* self, int param1, int param2, void** param3) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSvgRenderer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QSvgRenderer_IsValid(const QSvgRenderer* self) {
    return self->isValid();
}

QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self) {
    return new QSize(self->defaultSize());
}

QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self) {
    return new QRect(self->viewBox());
}

QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self) {
    return new QRectF(self->viewBoxF());
}

void QSvgRenderer_SetViewBox(QSvgRenderer* self, const QRect* viewbox) {
    self->setViewBox(*viewbox);
}

void QSvgRenderer_SetViewBox2(QSvgRenderer* self, const QRectF* viewbox) {
    self->setViewBox(*viewbox);
}

int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self) {
    return static_cast<int>(self->aspectRatioMode());
}

void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

uint32_t QSvgRenderer_Options(const QSvgRenderer* self) {
    return static_cast<uint32_t>(self->options());
}

void QSvgRenderer_SetOptions(QSvgRenderer* self, uint32_t flags) {
    self->setOptions(static_cast<QtSvg::Options>(flags));
}

bool QSvgRenderer_Animated(const QSvgRenderer* self) {
    return self->animated();
}

int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self) {
    return self->framesPerSecond();
}

void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num) {
    self->setFramesPerSecond(static_cast<int>(num));
}

int QSvgRenderer_CurrentFrame(const QSvgRenderer* self) {
    return self->currentFrame();
}

void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame) {
    self->setCurrentFrame(static_cast<int>(currentFrame));
}

int QSvgRenderer_AnimationDuration(const QSvgRenderer* self) {
    return self->animationDuration();
}

bool QSvgRenderer_IsAnimationEnabled(const QSvgRenderer* self) {
    return self->isAnimationEnabled();
}

void QSvgRenderer_SetAnimationEnabled(QSvgRenderer* self, bool enable) {
    self->setAnimationEnabled(enable);
}

QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QRectF(self->boundsOnElement(id_QString));
}

bool QSvgRenderer_ElementExists(const QSvgRenderer* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->elementExists(id_QString);
}

QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QTransform(self->transformForElement(id_QString));
}

void QSvgRenderer_SetDefaultOptions(uint32_t flags) {
    QSvgRenderer::setDefaultOptions(static_cast<QtSvg::Options>(flags));
}

bool QSvgRenderer_Load(QSvgRenderer* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(filename_QString);
}

bool QSvgRenderer_Load2(QSvgRenderer* self, const libqt_string contents) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    return self->load(contents_QByteArray);
}

bool QSvgRenderer_Load3(QSvgRenderer* self, QXmlStreamReader* contents) {
    return self->load(contents);
}

void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p) {
    self->render(p);
}

void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, const QRectF* bounds) {
    self->render(p, *bounds);
}

void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, const libqt_string elementId) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    self->render(p, elementId_QString);
}

void QSvgRenderer_RepaintNeeded(QSvgRenderer* self) {
    self->repaintNeeded();
}

void QSvgRenderer_Connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot) {
    void (*slotFunc)(QSvgRenderer*) = reinterpret_cast<void (*)(QSvgRenderer*)>(slot);
    QSvgRenderer::connect(self, &QSvgRenderer::repaintNeeded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, const libqt_string elementId, const QRectF* bounds) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    self->render(p, elementId_QString, *bounds);
}

// Base class handler implementation
QMetaObject* QSvgRenderer_SuperMetaObject(const QSvgRenderer* self) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_MetaObject_IsBase(true);
        return (QMetaObject*)vqsvgrenderer->metaObject();
    } else {
        return (QMetaObject*)self->QSvgRenderer::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnMetaObject(const QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_MetaObject_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QSvgRenderer_SuperMetacast(QSvgRenderer* self, const char* param1) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Metacast_IsBase(true);
        return vqsvgrenderer->qt_metacast(param1);
    } else {
        return self->QSvgRenderer::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnMetacast(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Metacast_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QSvgRenderer_SuperMetacall(QSvgRenderer* self, int param1, int param2, void** param3) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Metacall_IsBase(true);
        return vqsvgrenderer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSvgRenderer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnMetacall(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Metacall_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgRenderer_Event(QSvgRenderer* self, QEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return vqsvgrenderer->event(event);
    } else {
        return self->QSvgRenderer::event(event);
    }
}

// Base class handler implementation
bool QSvgRenderer_SuperEvent(QSvgRenderer* self, QEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Event_IsBase(true);
        return vqsvgrenderer->event(event);
    } else {
        return self->QSvgRenderer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnEvent(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Event_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgRenderer_EventFilter(QSvgRenderer* self, QObject* watched, QEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return vqsvgrenderer->eventFilter(watched, event);
    } else {
        return self->QSvgRenderer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSvgRenderer_SuperEventFilter(QSvgRenderer* self, QObject* watched, QEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_EventFilter_IsBase(true);
        return vqsvgrenderer->eventFilter(watched, event);
    } else {
        return self->QSvgRenderer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnEventFilter(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_EventFilter_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_TimerEvent(QSvgRenderer* self, QTimerEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->timerEvent(event);
    } else {
        ((VirtualQSvgRenderer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSvgRenderer_SuperTimerEvent(QSvgRenderer* self, QTimerEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_TimerEvent_IsBase(true);
        vqsvgrenderer->timerEvent(event);
    } else {
        ((VirtualQSvgRenderer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnTimerEvent(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_TimerEvent_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_ChildEvent(QSvgRenderer* self, QChildEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->childEvent(event);
    } else {
        ((VirtualQSvgRenderer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSvgRenderer_SuperChildEvent(QSvgRenderer* self, QChildEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_ChildEvent_IsBase(true);
        vqsvgrenderer->childEvent(event);
    } else {
        ((VirtualQSvgRenderer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnChildEvent(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_ChildEvent_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_CustomEvent(QSvgRenderer* self, QEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->customEvent(event);
    } else {
        ((VirtualQSvgRenderer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSvgRenderer_SuperCustomEvent(QSvgRenderer* self, QEvent* event) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_CustomEvent_IsBase(true);
        vqsvgrenderer->customEvent(event);
    } else {
        ((VirtualQSvgRenderer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnCustomEvent(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_CustomEvent_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_ConnectNotify(QSvgRenderer* self, const QMetaMethod* signal) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->connectNotify(*signal);
    } else {
        ((VirtualQSvgRenderer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSvgRenderer_SuperConnectNotify(QSvgRenderer* self, const QMetaMethod* signal) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_ConnectNotify_IsBase(true);
        vqsvgrenderer->connectNotify(*signal);
    } else {
        ((VirtualQSvgRenderer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnConnectNotify(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_ConnectNotify_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_DisconnectNotify(QSvgRenderer* self, const QMetaMethod* signal) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->disconnectNotify(*signal);
    } else {
        ((VirtualQSvgRenderer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSvgRenderer_SuperDisconnectNotify(QSvgRenderer* self, const QMetaMethod* signal) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_DisconnectNotify_IsBase(true);
        vqsvgrenderer->disconnectNotify(*signal);
    } else {
        ((VirtualQSvgRenderer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnDisconnectNotify(QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self);
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_DisconnectNotify_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSvgRenderer_Sender(const QSvgRenderer* self) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return vqsvgrenderer->sender();
    } else {
        return ((VirtualQSvgRenderer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSvgRenderer_SuperSender(const QSvgRenderer* self) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Sender_IsBase(true);
        return vqsvgrenderer->sender();
    } else {
        return ((VirtualQSvgRenderer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnSender(const QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Sender_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgRenderer_SenderSignalIndex(const QSvgRenderer* self) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return vqsvgrenderer->senderSignalIndex();
    } else {
        return ((VirtualQSvgRenderer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSvgRenderer_SuperSenderSignalIndex(const QSvgRenderer* self) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_SenderSignalIndex_IsBase(true);
        return vqsvgrenderer->senderSignalIndex();
    } else {
        return ((VirtualQSvgRenderer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnSenderSignalIndex(const QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgRenderer_Receivers(const QSvgRenderer* self, const char* signal) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return vqsvgrenderer->receivers(signal);
    } else {
        return ((VirtualQSvgRenderer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSvgRenderer_SuperReceivers(const QSvgRenderer* self, const char* signal) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Receivers_IsBase(true);
        return vqsvgrenderer->receivers(signal);
    } else {
        return ((VirtualQSvgRenderer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnReceivers(const QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_Receivers_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgRenderer_IsSignalConnected(const QSvgRenderer* self, const QMetaMethod* signal) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        return vqsvgrenderer->isSignalConnected(*signal);
    } else {
        return ((VirtualQSvgRenderer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSvgRenderer_SuperIsSignalConnected(const QSvgRenderer* self, const QMetaMethod* signal) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_IsSignalConnected_IsBase(true);
        return vqsvgrenderer->isSignalConnected(*signal);
    } else {
        return ((VirtualQSvgRenderer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnIsSignalConnected(const QSvgRenderer* self, intptr_t slot) {
    auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self));
    if (vqsvgrenderer && vqsvgrenderer->isVirtualQSvgRenderer) {
        vqsvgrenderer->setQSvgRenderer_IsSignalConnected_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_IsSignalConnected_Callback>(slot));
    }
}

void QSvgRenderer_Delete(QSvgRenderer* self) {
    delete self;
}
