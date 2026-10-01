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
    QQuickRenderControl::connect(self,
                                 static_cast<void (QQuickRenderControl::*)()>(&QQuickRenderControl::renderRequested),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

void QQuickRenderControl_SceneChanged(QQuickRenderControl* self) {
    self->sceneChanged();
}

void QQuickRenderControl_Connect_SceneChanged(QQuickRenderControl* self, intptr_t slot) {
    void (*slotFunc)(QQuickRenderControl*) = reinterpret_cast<void (*)(QQuickRenderControl*)>(slot);
    QQuickRenderControl::connect(self,
                                 static_cast<void (QQuickRenderControl::*)()>(&QQuickRenderControl::sceneChanged),
                                 [self, slotFunc]() {
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
    return (QMetaObject*)self->QQuickRenderControl::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnMetaObject(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self)))
        vqquickrendercontrol->qquickrendercontrol_metaobject_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickRenderControl_SuperMetacast(QQuickRenderControl* self, const char* param1) {
    return self->QQuickRenderControl::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnMetacast(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_metacast_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickRenderControl_SuperMetacall(QQuickRenderControl* self, int param1, int param2, void** param3) {
    return self->QQuickRenderControl::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnMetacall(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_metacall_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Metacall_Callback>(slot);
}

// Base class handler implementation
QWindow* QQuickRenderControl_SuperRenderWindow(QQuickRenderControl* self, QPoint* offset) {
    return self->QQuickRenderControl::renderWindow(offset);
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnRenderWindow(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_renderwindow_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_RenderWindow_Callback>(slot);
}

// Derived class handler implementation
bool QQuickRenderControl_Event(QQuickRenderControl* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickRenderControl_SuperEvent(QQuickRenderControl* self, QEvent* event) {
    return self->QQuickRenderControl::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnEvent(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_event_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickRenderControl_EventFilter(QQuickRenderControl* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickRenderControl_SuperEventFilter(QQuickRenderControl* self, QObject* watched, QEvent* event) {
    return self->QQuickRenderControl::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnEventFilter(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_eventfilter_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickRenderControl_TimerEvent(QQuickRenderControl* self, QTimerEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol) {
        vqquickrendercontrol->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRenderControl::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperTimerEvent(QQuickRenderControl* self, QTimerEvent* event) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self)) {
        vqquickrendercontrol->QQuickRenderControl::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRenderControl::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnTimerEvent(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_timerevent_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRenderControl_ChildEvent(QQuickRenderControl* self, QChildEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol) {
        vqquickrendercontrol->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRenderControl::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperChildEvent(QQuickRenderControl* self, QChildEvent* event) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self)) {
        vqquickrendercontrol->QQuickRenderControl::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRenderControl::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnChildEvent(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_childevent_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRenderControl_CustomEvent(QQuickRenderControl* self, QEvent* event) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol) {
        vqquickrendercontrol->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRenderControl::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperCustomEvent(QQuickRenderControl* self, QEvent* event) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self)) {
        vqquickrendercontrol->QQuickRenderControl::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRenderControl::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnCustomEvent(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_customevent_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRenderControl_ConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol) {
        vqquickrendercontrol->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickRenderControl::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperConnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self)) {
        vqquickrendercontrol->QQuickRenderControl::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickRenderControl::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnConnectNotify(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_connectnotify_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickRenderControl_DisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self);
    if (vqquickrendercontrol) {
        vqquickrendercontrol->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickRenderControl::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRenderControl_SuperDisconnectNotify(QQuickRenderControl* self, const QMetaMethod* signal) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self)) {
        vqquickrendercontrol->QQuickRenderControl::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickRenderControl::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRenderControl_OnDisconnectNotify(QQuickRenderControl* self, intptr_t slot) {
    if (auto* vqquickrendercontrol = dynamic_cast<VirtualQQuickRenderControl*>(self))
        vqquickrendercontrol->qquickrendercontrol_disconnectnotify_callback = reinterpret_cast<VirtualQQuickRenderControl::QQuickRenderControl_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickRenderControl_Sender(const QQuickRenderControl* self) {
    if (auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self))) {
        return vqquickrendercontrol->VirtualQQuickRenderControl::sender();
    } else
        qFatal("Error: Protected method QQuickRenderControl::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickRenderControl_SenderSignalIndex(const QQuickRenderControl* self) {
    if (auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self))) {
        return vqquickrendercontrol->VirtualQQuickRenderControl::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickRenderControl::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickRenderControl_Receivers(const QQuickRenderControl* self, const char* signal) {
    if (auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self))) {
        return vqquickrendercontrol->VirtualQQuickRenderControl::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickRenderControl::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickRenderControl_IsSignalConnected(const QQuickRenderControl* self, const QMetaMethod* signal) {
    if (auto* vqquickrendercontrol = const_cast<VirtualQQuickRenderControl*>(dynamic_cast<const VirtualQQuickRenderControl*>(self))) {
        return vqquickrendercontrol->VirtualQQuickRenderControl::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickRenderControl::isSignalConnected called without a directly constructed type");
}

void QQuickRenderControl_Delete(QQuickRenderControl* self) {
    delete self;
}
