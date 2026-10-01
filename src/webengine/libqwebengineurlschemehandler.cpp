#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWebEngineUrlRequestJob>
#include <QWebEngineUrlSchemeHandler>
#include <qwebengineurlschemehandler.h>
#include "libqwebengineurlschemehandler.h"
#include "libqwebengineurlschemehandler.hxx"

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new() {
    return new VirtualQWebEngineUrlSchemeHandler();
}

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new2(QObject* parent) {
    return new VirtualQWebEngineUrlSchemeHandler(parent);
}

QMetaObject* QWebEngineUrlSchemeHandler_MetaObject(const QWebEngineUrlSchemeHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineUrlSchemeHandler_Metacast(QWebEngineUrlSchemeHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineUrlSchemeHandler_Metacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineUrlSchemeHandler_Tr(const char* s) {
    auto _ret = QWebEngineUrlSchemeHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineUrlSchemeHandler_RequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1) {
    self->requestStarted(param1);
}

libqt_string QWebEngineUrlSchemeHandler_Tr2(const char* s, const char* c) {
    auto _ret = QWebEngineUrlSchemeHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineUrlSchemeHandler_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWebEngineUrlSchemeHandler::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWebEngineUrlSchemeHandler_SuperMetaObject(const QWebEngineUrlSchemeHandler* self) {
    return (QMetaObject*)self->QWebEngineUrlSchemeHandler::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnMetaObject(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self)))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_metaobject_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWebEngineUrlSchemeHandler_SuperMetacast(QWebEngineUrlSchemeHandler* self, const char* param1) {
    return self->QWebEngineUrlSchemeHandler::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnMetacast(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_metacast_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWebEngineUrlSchemeHandler_SuperMetacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3) {
    return self->QWebEngineUrlSchemeHandler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnMetacall(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_metacall_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnRequestStarted(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_requeststarted_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_RequestStarted_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineUrlSchemeHandler_Event(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QWebEngineUrlSchemeHandler_SuperEvent(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    return self->QWebEngineUrlSchemeHandler::event(event);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_event_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Event_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineUrlSchemeHandler_EventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWebEngineUrlSchemeHandler_SuperEventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event) {
    return self->QWebEngineUrlSchemeHandler::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnEventFilter(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_eventfilter_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_TimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler) {
        vqwebengineurlschemehandler->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_SuperTimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self)) {
        vqwebengineurlschemehandler->QWebEngineUrlSchemeHandler::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnTimerEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_timerevent_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_ChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler) {
        vqwebengineurlschemehandler->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_SuperChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self)) {
        vqwebengineurlschemehandler->QWebEngineUrlSchemeHandler::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnChildEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_childevent_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_CustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler) {
        vqwebengineurlschemehandler->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_SuperCustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self)) {
        vqwebengineurlschemehandler->QWebEngineUrlSchemeHandler::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnCustomEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_customevent_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_ConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler) {
        vqwebengineurlschemehandler->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_SuperConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self)) {
        vqwebengineurlschemehandler->QWebEngineUrlSchemeHandler::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnConnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_connectnotify_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_DisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler) {
        vqwebengineurlschemehandler->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_SuperDisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self)) {
        vqwebengineurlschemehandler->QWebEngineUrlSchemeHandler::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlSchemeHandler::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnDisconnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    if (auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self))
        vqwebengineurlschemehandler->qwebengineurlschemehandler_disconnectnotify_callback = reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QWebEngineUrlSchemeHandler_Sender(const QWebEngineUrlSchemeHandler* self) {
    if (auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self))) {
        return vqwebengineurlschemehandler->VirtualQWebEngineUrlSchemeHandler::sender();
    } else
        qFatal("Error: Protected method QWebEngineUrlSchemeHandler::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebEngineUrlSchemeHandler_SenderSignalIndex(const QWebEngineUrlSchemeHandler* self) {
    if (auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self))) {
        return vqwebengineurlschemehandler->VirtualQWebEngineUrlSchemeHandler::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWebEngineUrlSchemeHandler::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebEngineUrlSchemeHandler_Receivers(const QWebEngineUrlSchemeHandler* self, const char* signal) {
    if (auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self))) {
        return vqwebengineurlschemehandler->VirtualQWebEngineUrlSchemeHandler::receivers(signal);
    } else
        qFatal("Error: Protected method QWebEngineUrlSchemeHandler::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebEngineUrlSchemeHandler_IsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    if (auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self))) {
        return vqwebengineurlschemehandler->VirtualQWebEngineUrlSchemeHandler::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWebEngineUrlSchemeHandler::isSignalConnected called without a directly constructed type");
}

void QWebEngineUrlSchemeHandler_Delete(QWebEngineUrlSchemeHandler* self) {
    delete self;
}
