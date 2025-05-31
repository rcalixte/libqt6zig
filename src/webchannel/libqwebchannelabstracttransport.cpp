#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebChannelAbstractTransport_OnMetacall(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Metacall_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebChannelAbstractTransport_QBaseMetacall(QWebChannelAbstractTransport* self, int param1, int param2, void** param3) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Metacall_IsBase(true);
        return vqwebchannelabstracttransport->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebChannelAbstractTransport_Tr(const char* s) {
    QString _ret = QWebChannelAbstractTransport::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebChannelAbstractTransport_MessageReceived(QWebChannelAbstractTransport* self, const QJsonObject* message, QWebChannelAbstractTransport* transport) {
    self->messageReceived(*message, transport);
}

void QWebChannelAbstractTransport_Connect_MessageReceived(QWebChannelAbstractTransport* self, intptr_t slot) {
    void (*slotFunc)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*) = reinterpret_cast<void (*)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*)>(slot);
    QWebChannelAbstractTransport::connect(self, &QWebChannelAbstractTransport::messageReceived, [self, slotFunc](const QJsonObject& message, QWebChannelAbstractTransport* transport) {
        const QJsonObject& message_ret = message;
        // Cast returned reference into pointer
        QJsonObject* sigval1 = const_cast<QJsonObject*>(&message_ret);
        QWebChannelAbstractTransport* sigval2 = transport;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QWebChannelAbstractTransport_Tr2(const char* s, const char* c) {
    QString _ret = QWebChannelAbstractTransport::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebChannelAbstractTransport_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebChannelAbstractTransport::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QWebChannelAbstractTransport_SendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->sendMessage(*message);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->sendMessage(*message);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseSendMessage(QWebChannelAbstractTransport* self, const QJsonObject* message) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SendMessage_IsBase(true);
        vqwebchannelabstracttransport->sendMessage(*message);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->sendMessage(*message);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSendMessage(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SendMessage_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_SendMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_Event(QWebChannelAbstractTransport* self, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return vqwebchannelabstracttransport->event(event);
    } else {
        return self->QWebChannelAbstractTransport::event(event);
    }
}

// Base class handler implementation
bool QWebChannelAbstractTransport_QBaseEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Event_IsBase(true);
        return vqwebchannelabstracttransport->event(event);
    } else {
        return self->QWebChannelAbstractTransport::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Event_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_EventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return vqwebchannelabstracttransport->eventFilter(watched, event);
    } else {
        return self->QWebChannelAbstractTransport::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebChannelAbstractTransport_QBaseEventFilter(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_EventFilter_IsBase(true);
        return vqwebchannelabstracttransport->eventFilter(watched, event);
    } else {
        return self->QWebChannelAbstractTransport::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnEventFilter(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_EventFilter_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_TimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->timerEvent(event);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseTimerEvent(QWebChannelAbstractTransport* self, QTimerEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_TimerEvent_IsBase(true);
        vqwebchannelabstracttransport->timerEvent(event);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnTimerEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_TimerEvent_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_ChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->childEvent(event);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseChildEvent(QWebChannelAbstractTransport* self, QChildEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ChildEvent_IsBase(true);
        vqwebchannelabstracttransport->childEvent(event);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnChildEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ChildEvent_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_CustomEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->customEvent(event);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseCustomEvent(QWebChannelAbstractTransport* self, QEvent* event) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_CustomEvent_IsBase(true);
        vqwebchannelabstracttransport->customEvent(event);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnCustomEvent(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_CustomEvent_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_ConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->connectNotify(*signal);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseConnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ConnectNotify_IsBase(true);
        vqwebchannelabstracttransport->connectNotify(*signal);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnConnectNotify(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_ConnectNotify_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebChannelAbstractTransport_DisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebChannelAbstractTransport_QBaseDisconnectNotify(QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_DisconnectNotify_IsBase(true);
        vqwebchannelabstracttransport->disconnectNotify(*signal);
    } else {
        ((VirtualQWebChannelAbstractTransport*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnDisconnectNotify(QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = dynamic_cast<VirtualQWebChannelAbstractTransport*>(self);
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebChannelAbstractTransport_Sender(const QWebChannelAbstractTransport* self) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return vqwebchannelabstracttransport->sender();
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebChannelAbstractTransport_QBaseSender(const QWebChannelAbstractTransport* self) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Sender_IsBase(true);
        return vqwebchannelabstracttransport->sender();
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSender(const QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Sender_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebChannelAbstractTransport_SenderSignalIndex(const QWebChannelAbstractTransport* self) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return vqwebchannelabstracttransport->senderSignalIndex();
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebChannelAbstractTransport_QBaseSenderSignalIndex(const QWebChannelAbstractTransport* self) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SenderSignalIndex_IsBase(true);
        return vqwebchannelabstracttransport->senderSignalIndex();
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnSenderSignalIndex(const QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebChannelAbstractTransport_Receivers(const QWebChannelAbstractTransport* self, const char* signal) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return vqwebchannelabstracttransport->receivers(signal);
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebChannelAbstractTransport_QBaseReceivers(const QWebChannelAbstractTransport* self, const char* signal) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Receivers_IsBase(true);
        return vqwebchannelabstracttransport->receivers(signal);
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnReceivers(const QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_Receivers_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebChannelAbstractTransport_IsSignalConnected(const QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        return vqwebchannelabstracttransport->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebChannelAbstractTransport_QBaseIsSignalConnected(const QWebChannelAbstractTransport* self, const QMetaMethod* signal) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_IsSignalConnected_IsBase(true);
        return vqwebchannelabstracttransport->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebChannelAbstractTransport*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebChannelAbstractTransport_OnIsSignalConnected(const QWebChannelAbstractTransport* self, intptr_t slot) {
    auto* vqwebchannelabstracttransport = const_cast<VirtualQWebChannelAbstractTransport*>(dynamic_cast<const VirtualQWebChannelAbstractTransport*>(self));
    if (vqwebchannelabstracttransport && vqwebchannelabstracttransport->isVirtualQWebChannelAbstractTransport) {
        vqwebchannelabstracttransport->setQWebChannelAbstractTransport_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebChannelAbstractTransport::QWebChannelAbstractTransport_IsSignalConnected_Callback>(slot));
    }
}

void QWebChannelAbstractTransport_Delete(QWebChannelAbstractTransport* self) {
    delete self;
}
