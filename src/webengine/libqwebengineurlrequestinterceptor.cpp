#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWebEngineUrlRequestInfo>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebengineurlrequestinterceptor.h>
#include "libqwebengineurlrequestinterceptor.h"
#include "libqwebengineurlrequestinterceptor.hxx"

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new() {
    return new VirtualQWebEngineUrlRequestInterceptor();
}

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p) {
    return new VirtualQWebEngineUrlRequestInterceptor(p);
}

QMetaObject* QWebEngineUrlRequestInterceptor_MetaObject(const QWebEngineUrlRequestInterceptor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineUrlRequestInterceptor_Metacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineUrlRequestInterceptor_Metacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineUrlRequestInterceptor_Tr(const char* s) {
    auto _ret = QWebEngineUrlRequestInterceptor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineUrlRequestInterceptor_InterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
    self->interceptRequest(*info);
}

libqt_string QWebEngineUrlRequestInterceptor_Tr2(const char* s, const char* c) {
    auto _ret = QWebEngineUrlRequestInterceptor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineUrlRequestInterceptor_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWebEngineUrlRequestInterceptor::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWebEngineUrlRequestInterceptor_SuperMetaObject(const QWebEngineUrlRequestInterceptor* self) {
    return (QMetaObject*)self->QWebEngineUrlRequestInterceptor::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnMetaObject(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self)))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_metaobject_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWebEngineUrlRequestInterceptor_SuperMetacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
    return self->QWebEngineUrlRequestInterceptor::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnMetacast(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_metacast_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWebEngineUrlRequestInterceptor_SuperMetacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3) {
    return self->QWebEngineUrlRequestInterceptor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnMetacall(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_metacall_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnInterceptRequest(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_interceptrequest_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_InterceptRequest_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_Event(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_SuperEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    return self->QWebEngineUrlRequestInterceptor::event(event);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_event_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Event_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_EventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_SuperEventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event) {
    return self->QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnEventFilter(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_eventfilter_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_TimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor) {
        vqwebengineurlrequestinterceptor->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperTimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->QWebEngineUrlRequestInterceptor::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnTimerEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_timerevent_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_ChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor) {
        vqwebengineurlrequestinterceptor->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->QWebEngineUrlRequestInterceptor::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnChildEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_childevent_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_CustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor) {
        vqwebengineurlrequestinterceptor->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperCustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->QWebEngineUrlRequestInterceptor::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnCustomEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_customevent_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_ConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor) {
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->QWebEngineUrlRequestInterceptor::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnConnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_connectnotify_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_DisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor) {
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperDisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self)) {
        vqwebengineurlrequestinterceptor->QWebEngineUrlRequestInterceptor::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebEngineUrlRequestInterceptor::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnDisconnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    if (auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self))
        vqwebengineurlrequestinterceptor->qwebengineurlrequestinterceptor_disconnectnotify_callback = reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QWebEngineUrlRequestInterceptor_Sender(const QWebEngineUrlRequestInterceptor* self) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->VirtualQWebEngineUrlRequestInterceptor::sender();
    } else
        qFatal("Error: Protected method QWebEngineUrlRequestInterceptor::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebEngineUrlRequestInterceptor_SenderSignalIndex(const QWebEngineUrlRequestInterceptor* self) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->VirtualQWebEngineUrlRequestInterceptor::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWebEngineUrlRequestInterceptor::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebEngineUrlRequestInterceptor_Receivers(const QWebEngineUrlRequestInterceptor* self, const char* signal) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->VirtualQWebEngineUrlRequestInterceptor::receivers(signal);
    } else
        qFatal("Error: Protected method QWebEngineUrlRequestInterceptor::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebEngineUrlRequestInterceptor_IsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    if (auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self))) {
        return vqwebengineurlrequestinterceptor->VirtualQWebEngineUrlRequestInterceptor::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWebEngineUrlRequestInterceptor::isSignalConnected called without a directly constructed type");
}

void QWebEngineUrlRequestInterceptor_Delete(QWebEngineUrlRequestInterceptor* self) {
    delete self;
}
