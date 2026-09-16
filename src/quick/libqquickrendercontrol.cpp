#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QQuickRenderControl>
#include <QQuickWindow>
#include <QString>
#include <QThread>
#include <QTimerEvent>
#include <QWindow>
#include <qquickrendercontrol.h>
#include "libqquickrendercontrol.h"
#include "libqquickrendercontrol.hxx"

QQuickRenderControl* QQuickRenderControl_new() {
    return new VirtualQQuickRenderControl();
}

QQuickRenderControl* QQuickRenderControl_new2(QObject* parent) {
    return new VirtualQQuickRenderControl(parent);
}

QMetaObject* QQuickRenderControl_MetaObject(const QQuickRenderControl* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickRenderControl_Metacast(QQuickRenderControl* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickRenderControl_Metacall(QQuickRenderControl* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickRenderControl_Tr(const char* s) {
    auto _ret = QQuickRenderControl::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickRenderControl_PrepareThread(QQuickRenderControl* self, QThread* targetThread) {
    self->prepareThread(targetThread);
}

void QQuickRenderControl_SetSamples(QQuickRenderControl* self, int sampleCount) {
    self->setSamples(static_cast<int>(sampleCount));
}

int QQuickRenderControl_Samples(const QQuickRenderControl* self) {
    return self->samples();
}

bool QQuickRenderControl_Initialize(QQuickRenderControl* self) {
    return self->initialize();
}

void QQuickRenderControl_Invalidate(QQuickRenderControl* self) {
    self->invalidate();
}

void QQuickRenderControl_BeginFrame(QQuickRenderControl* self) {
    self->beginFrame();
}

void QQuickRenderControl_EndFrame(QQuickRenderControl* self) {
    self->endFrame();
}

void QQuickRenderControl_PolishItems(QQuickRenderControl* self) {
    self->polishItems();
}

bool QQuickRenderControl_Sync(QQuickRenderControl* self) {
    return self->sync();
}

void QQuickRenderControl_Render(QQuickRenderControl* self) {
    self->render();
}

QWindow* QQuickRenderControl_RenderWindowFor(QQuickWindow* win) {
    return QQuickRenderControl::renderWindowFor(win);
}

QWindow* QQuickRenderControl_RenderWindow(QQuickRenderControl* self, QPoint* offset) {
    return self->renderWindow(offset);
}

QQuickWindow* QQuickRenderControl_Window(const QQuickRenderControl* self) {
    return self->window();
}

void QQuickRenderControl_RenderRequested(QQuickRenderControl* self) {
    self->renderRequested();
}

void QQuickRenderControl_Connect_RenderRequested(QQuickRenderControl* self, intptr_t slot) {
    void (*slotFunc)(QQuickRenderControl*) = reinterpret_cast<void (*)(QQuickRenderControl*)>(slot);
    QQuickRenderControl::connect(self, &QQuickRenderControl::renderRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRenderControl_SceneChanged(QQuickRenderControl* self) {
    self->sceneChanged();
}

void QQuickRenderControl_Connect_SceneChanged(QQuickRenderControl* self, intptr_t slot) {
    void (*slotFunc)(QQuickRenderControl*) = reinterpret_cast<void (*)(QQuickRenderControl*)>(slot);
    QQuickRenderControl::connect(self, &QQuickRenderControl::sceneChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QQuickRenderControl_Tr2(const char* s, const char* c) {
    auto _ret = QQuickRenderControl::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickRenderControl_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickRenderControl::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWindow* QQuickRenderControl_RenderWindowFor2(QQuickWindow* win, QPoint* offset) {
    return QQuickRenderControl::renderWindowFor(win, offset);
}

// Base class handler implementation
QMetaObject* QQuickRenderControl_SuperMetaObject(const QQuickRenderControl* self) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickrendercontrol->metaObject();
    } else {
        return (QMetaObject*)self->QQuickRenderControl::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnMetaObject(const QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_MetaObject_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickRenderControl_SuperMetacast(QQuickRenderControl* self, const char* param1) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_Metacast_IsBase(true);
        return vqquickrendercontrol->qt_metacast(param1);
    } else {
        return self->QQuickRenderControl::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnMetacast(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_Metacast_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickRenderControl_SuperMetacall(QQuickRenderControl* self, int param1, int param2, void** param3) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_Metacall_IsBase(true);
        return vqquickrendercontrol->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickRenderControl::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnMetacall(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_Metacall_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Metacall_Callback>(slot));
}

// Base class handler implementation
QWindow* QQuickRenderControl_SuperRenderWindow(QQuickRenderControl* self, QPoint* offset) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_RenderWindow_IsBase(true);
        return vqquickrendercontrol->renderWindow(offset);
    } else {
        return self->QQuickRenderControl::renderWindow(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnRenderWindow(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_RenderWindow_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_RenderWindow_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRenderControl_Event(QQuickRenderControl* self, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        return vqquickrendercontrol->event(event);
    } else {
        return self->QQuickRenderControl::event(event);
    }
}

// Base class handler implementation
bool QQuickRenderControl_SuperEvent(QQuickRenderControl* self, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_Event_IsBase(true);
        return vqquickrendercontrol->event(event);
    } else {
        return self->QQuickRenderControl::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnEvent(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_Event_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRenderControl_EventFilter(QQuickRenderControl* self, QObject* watched, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        return vqquickrendercontrol->eventFilter(watched, event);
    } else {
        return self->QQuickRenderControl::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickRenderControl_SuperEventFilter(QQuickRenderControl* self, QObject* watched, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_EventFilter_IsBase(true);
        return vqquickrendercontrol->eventFilter(watched, event);
    } else {
        return self->QQuickRenderControl::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnEventFilter(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_EventFilter_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickRenderControl_TimerEvent(QQuickRenderControl* self, QTimerEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->timerEvent(event);
    } else {
        ((VirtualQQuickRenderControl*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperTimerEvent(QQuickRenderControl* self, QTimerEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_TimerEvent_IsBase(true);
        vqquickrendercontrol->timerEvent(event);
    } else {
        ((VirtualQQuickRenderControl*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnTimerEvent(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_TimerEvent_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRenderControl_ChildEvent(QQuickRenderControl* self, QChildEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->childEvent(event);
    } else {
        ((VirtualQQuickRenderControl*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperChildEvent(QQuickRenderControl* self, QChildEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_ChildEvent_IsBase(true);
        vqquickrendercontrol->childEvent(event);
    } else {
        ((VirtualQQuickRenderControl*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnChildEvent(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_ChildEvent_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRenderControl_CustomEvent(QQuickRenderControl* self, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->customEvent(event);
    } else {
        ((VirtualQQuickRenderControl*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperCustomEvent(QQuickRenderControl* self, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_CustomEvent_IsBase(true);
        vqquickrendercontrol->customEvent(event);
    } else {
        ((VirtualQQuickRenderControl*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnCustomEvent(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_CustomEvent_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRenderControl_ConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->connectNotify(*signal);
    } else {
        ((VirtualQQuickRenderControl*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_ConnectNotify_IsBase(true);
        vqquickrendercontrol->connectNotify(*signal);
    } else {
        ((VirtualQQuickRenderControl*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnConnectNotify(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickRenderControl_DisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickRenderControl*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperDisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_DisconnectNotify_IsBase(true);
        vqquickrendercontrol->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickRenderControl*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnDisconnectNotify(QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickRenderControl_Sender(const QQuickRenderControl* self) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        return vqquickrendercontrol->sender();
    } else {
        return ((VirtualQQuickRenderControl*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickRenderControl_SuperSender(const QQuickRenderControl* self) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_Sender_IsBase(true);
        return vqquickrendercontrol->sender();
    } else {
        return ((VirtualQQuickRenderControl*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnSender(const QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_Sender_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickRenderControl_SenderSignalIndex(const QQuickRenderControl* self) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        return vqquickrendercontrol->senderSignalIndex();
    } else {
        return ((VirtualQQuickRenderControl*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickRenderControl_SuperSenderSignalIndex(const QQuickRenderControl* self) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_SenderSignalIndex_IsBase(true);
        return vqquickrendercontrol->senderSignalIndex();
    } else {
        return ((VirtualQQuickRenderControl*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnSenderSignalIndex(const QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickRenderControl_Receivers(const QQuickRenderControl* self, const char* signal) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        return vqquickrendercontrol->receivers(signal);
    } else {
        return ((VirtualQQuickRenderControl*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickRenderControl_SuperReceivers(const QQuickRenderControl* self, const char* signal) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_Receivers_IsBase(true);
        return vqquickrendercontrol->receivers(signal);
    } else {
        return ((VirtualQQuickRenderControl*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnReceivers(const QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_Receivers_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRenderControl_IsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        return vqquickrendercontrol->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickRenderControl*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickRenderControl_SuperIsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl) {
        vqquickrendercontrol->setQQuickRenderControl_IsSignalConnected_IsBase(true);
        return vqquickrendercontrol->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickRenderControl*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnIsSignalConnected(const QQuickRenderControl* self, intptr_t slot) {
    auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self));
    if (vqquickrendercontrol && vqquickrendercontrol->isVirtualQQuickRenderControl)
        vqquickrendercontrol->setQQuickRenderControl_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_IsSignalConnected_Callback>(slot));
}

void QQuickRenderControl_Delete(QQuickRenderControl* self) {
    delete self;
}
