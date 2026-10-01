#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QVirtualKeyboardObserver>
#include <qvirtualkeyboardobserver.h>
#include "libqvirtualkeyboardobserver.h"
#include "libqvirtualkeyboardobserver.hxx"

QVirtualKeyboardObserver* QVirtualKeyboardObserver_new() {
    return new VirtualQVirtualKeyboardObserver();
}

QVirtualKeyboardObserver* QVirtualKeyboardObserver_new2(QObject* parent) {
    return new VirtualQVirtualKeyboardObserver(parent);
}

QMetaObject* QVirtualKeyboardObserver_MetaObject(const QVirtualKeyboardObserver* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardObserver_Metacast(QVirtualKeyboardObserver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardObserver_Metacall(QVirtualKeyboardObserver* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardObserver_Tr(const char* s) {
    auto _ret = QVirtualKeyboardObserver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QVirtualKeyboardObserver_Layout(QVirtualKeyboardObserver* self) {
    return new QVariant(self->layout());
}

void QVirtualKeyboardObserver_LayoutChanged(QVirtualKeyboardObserver* self) {
    self->layoutChanged();
}

void QVirtualKeyboardObserver_Connect_LayoutChanged(QVirtualKeyboardObserver* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardObserver*) = reinterpret_cast<void (*)(QVirtualKeyboardObserver*)>(slot);
    QVirtualKeyboardObserver::connect(self,
                                      static_cast<void (QVirtualKeyboardObserver::*)()>(&QVirtualKeyboardObserver::layoutChanged),
                                      [self, slotFunc]() {
                                          slotFunc(self);
                                      });
}

libqt_string QVirtualKeyboardObserver_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardObserver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardObserver_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardObserver::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QVirtualKeyboardObserver_SuperMetaObject(const QVirtualKeyboardObserver* self) {
    return (QMetaObject*)self->QVirtualKeyboardObserver::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnMetaObject(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self)))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_metaobject_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVirtualKeyboardObserver_SuperMetacast(QVirtualKeyboardObserver* self, const char* param1) {
    return self->QVirtualKeyboardObserver::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnMetacast(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_metacast_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVirtualKeyboardObserver_SuperMetacall(QVirtualKeyboardObserver* self, int param1, int param2, void** param3) {
    return self->QVirtualKeyboardObserver::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnMetacall(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_metacall_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVirtualKeyboardObserver_Event(QVirtualKeyboardObserver* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVirtualKeyboardObserver_SuperEvent(QVirtualKeyboardObserver* self, QEvent* event) {
    return self->QVirtualKeyboardObserver::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_event_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVirtualKeyboardObserver_EventFilter(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVirtualKeyboardObserver_SuperEventFilter(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event) {
    return self->QVirtualKeyboardObserver::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnEventFilter(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_eventfilter_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardObserver_TimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver) {
        vqvirtualkeyboardobserver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperTimerEvent(QVirtualKeyboardObserver* self, QTimerEvent* event) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self)) {
        vqvirtualkeyboardobserver->QVirtualKeyboardObserver::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnTimerEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_timerevent_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardObserver_ChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver) {
        vqvirtualkeyboardobserver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperChildEvent(QVirtualKeyboardObserver* self, QChildEvent* event) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self)) {
        vqvirtualkeyboardobserver->QVirtualKeyboardObserver::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnChildEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_childevent_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardObserver_CustomEvent(QVirtualKeyboardObserver* self, QEvent* event) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver) {
        vqvirtualkeyboardobserver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperCustomEvent(QVirtualKeyboardObserver* self, QEvent* event) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self)) {
        vqvirtualkeyboardobserver->QVirtualKeyboardObserver::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnCustomEvent(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_customevent_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardObserver_ConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver) {
        vqvirtualkeyboardobserver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperConnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self)) {
        vqvirtualkeyboardobserver->QVirtualKeyboardObserver::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnConnectNotify(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_connectnotify_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardObserver_DisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self);
    if (vqvirtualkeyboardobserver) {
        vqvirtualkeyboardobserver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardObserver_SuperDisconnectNotify(QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self)) {
        vqvirtualkeyboardobserver->QVirtualKeyboardObserver::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardObserver::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardObserver_OnDisconnectNotify(QVirtualKeyboardObserver* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardobserver = dynamic_cast<VirtualQVirtualKeyboardObserver*>(self))
        vqvirtualkeyboardobserver->qvirtualkeyboardobserver_disconnectnotify_callback = reinterpret_cast<VirtualQVirtualKeyboardObserver::QVirtualKeyboardObserver_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QVirtualKeyboardObserver_Sender(const QVirtualKeyboardObserver* self) {
    if (auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self))) {
        return vqvirtualkeyboardobserver->VirtualQVirtualKeyboardObserver::sender();
    } else
        qFatal("Error: Protected method QVirtualKeyboardObserver::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVirtualKeyboardObserver_SenderSignalIndex(const QVirtualKeyboardObserver* self) {
    if (auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self))) {
        return vqvirtualkeyboardobserver->VirtualQVirtualKeyboardObserver::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVirtualKeyboardObserver::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVirtualKeyboardObserver_Receivers(const QVirtualKeyboardObserver* self, const char* signal) {
    if (auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self))) {
        return vqvirtualkeyboardobserver->VirtualQVirtualKeyboardObserver::receivers(signal);
    } else
        qFatal("Error: Protected method QVirtualKeyboardObserver::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVirtualKeyboardObserver_IsSignalConnected(const QVirtualKeyboardObserver* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardobserver = const_cast<VirtualQVirtualKeyboardObserver*>(dynamic_cast<const VirtualQVirtualKeyboardObserver*>(self))) {
        return vqvirtualkeyboardobserver->VirtualQVirtualKeyboardObserver::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVirtualKeyboardObserver::isSignalConnected called without a directly constructed type");
}

void QVirtualKeyboardObserver_Delete(QVirtualKeyboardObserver* self) {
    delete self;
}
