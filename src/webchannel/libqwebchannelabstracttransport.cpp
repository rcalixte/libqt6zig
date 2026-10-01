#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWebChannelAbstractTransport>
#include <qwebchannelabstracttransport.h>
#include "libqwebchannelabstracttransport.h"
#include "libqwebchannelabstracttransport.hxx"

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new() {
    return new VirtualQWebChannelAbstractTransport();
}

QWebChannelAbstractTransport* QWebChannelAbstractTransport_new2(QObject* parent) {
    return new VirtualQWebChannelAbstractTransport(parent);
}

QMetaObject* QWebChannelAbstractTransport_MetaObject(const QWebChannelAbstractTransport* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebChannelAbstractTransport_Metacast(QWebChannelAbstractTransport* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebChannelAbstractTransport_Metacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebChannelAbstractTransport_Tr(const char* s) {
    auto _ret = QWebChannelAbstractTransport::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message) {
    self->sendMessage(*message);
}

void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, const QJsonObject* message, QWebChannelAbstractTransport* transport) {
    self->messageReceived(*message, transport);
}

void QWebChannelAbstractTransport_Connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot) {
    void (*slotFunc)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*) = reinterpret_cast<void (*)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*)>(slot);
    QWebChannelAbstractTransport::connect(self,
                                          static_cast<void (QWebChannelAbstractTransport::*)(const QJsonObject&, QWebChannelAbstractTransport*)>(&QWebChannelAbstractTransport::messageReceived),
                                          [self, slotFunc](const QJsonObject& message, QWebChannelAbstractTransport* transport) {
                                              const QJsonObject& message_ret = message;
                                              // Cast returned reference into pointer
                                              QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);
                                              QWebChannelAbstractTransport* sigval2 = transport;
                                              slotFunc(self, sigval1, sigval2);
                                          });
}

libqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c) {
    auto _ret = QWebChannelAbstractTransport::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWebChannelAbstractTransport::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWebChannelAbstractTransport_SuperMetaObject(const QWebChannelAbstractTransport* self) {
    return (QMetaObject*)self->QWebChannelAbstractTransport::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnMetaObject(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self)))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_metaobject_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWebChannelAbstractTransport_SuperMetacast(QWebChannelAbstractTransport* self, const char* param1) {
    return self->QWebChannelAbstractTransport::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnMetacast(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_metacast_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWebChannelAbstractTransport_SuperMetacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3) {
    return self->QWebChannelAbstractTransport::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnMetacall(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_metacall_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSendMessage(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_sendmessage_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_SendMessage_Callback>(slot);
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_Event(QWebChannelAbstractTransport* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QWebChannelAbstractTransport_SuperEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    return self->QWebChannelAbstractTransport::event(event);
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_event_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Event_Callback>(slot);
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_EventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWebChannelAbstractTransport_SuperEventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event) {
    return self->QWebChannelAbstractTransport::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnEventFilter(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_eventfilter_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWebChannelAbstractTransport_TimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport) {
        vqwebchannelabstracttransport->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_SuperTimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->QWebChannelAbstractTransport::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnTimerEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_timerevent_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebChannelAbstractTransport_ChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport) {
        vqwebchannelabstracttransport->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_SuperChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->QWebChannelAbstractTransport::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnChildEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_childevent_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebChannelAbstractTransport_CustomEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport) {
        vqwebchannelabstracttransport->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_SuperCustomEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->QWebChannelAbstractTransport::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnCustomEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_customevent_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebChannelAbstractTransport_ConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport) {
        vqwebchannelabstracttransport->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_SuperConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->QWebChannelAbstractTransport::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnConnectNotify(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_connectnotify_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWebChannelAbstractTransport_DisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport) {
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_SuperDisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self)) {
        vqwebchannelabstracttransport->QWebChannelAbstractTransport::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebChannelAbstractTransport::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnDisconnectNotify(QWebChannelAbstractTransport* self, intptr_t slot) {
    if (auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self))
        vqwebchannelabstracttransport->qwebchannelabstracttransport_disconnectnotify_callback = reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QWebChannelAbstractTransport_Sender(const QWebChannelAbstractTransport* self) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->VirtualQWebChannelAbstractTransport::sender();
    } else
        qFatal("Error: Protected method QWebChannelAbstractTransport::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebChannelAbstractTransport_SenderSignalIndex(const QWebChannelAbstractTransport* self) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->VirtualQWebChannelAbstractTransport::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWebChannelAbstractTransport::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebChannelAbstractTransport_Receivers(const QWebChannelAbstractTransport* self, const char* signal) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->VirtualQWebChannelAbstractTransport::receivers(signal);
    } else
        qFatal("Error: Protected method QWebChannelAbstractTransport::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebChannelAbstractTransport_IsSignalConnected(const QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    if (auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self))) {
        return vqwebchannelabstracttransport->VirtualQWebChannelAbstractTransport::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWebChannelAbstractTransport::isSignalConnected called without a directly constructed type");
}

void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self) {
    delete self;
}
