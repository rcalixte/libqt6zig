#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebEngineUrlSchemeHandler_Tr(const char* s) {
    QString _ret = QWebEngineUrlSchemeHandler::tr(s);
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
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->requestStarted(param1);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->requestStarted(param1);
    }
}

libqt_string QWebEngineUrlSchemeHandler_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineUrlSchemeHandler::tr(s, c);
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
    QString _ret = QWebEngineUrlSchemeHandler::tr(s, c, static_cast<int>(n));
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
int QWebEngineUrlSchemeHandler_QBaseMetacall(QWebEngineUrlSchemeHandler* self, int param1, int param2, void** param3) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Metacall_IsBase(true);
        return vqwebengineurlschemehandler->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QWebEngineUrlSchemeHandler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnMetacall(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Metacall_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_QBaseRequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_RequestStarted_IsBase(true);
        vqwebengineurlschemehandler->requestStarted(param1);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->requestStarted(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnRequestStarted(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_RequestStarted_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_RequestStarted_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlSchemeHandler_Event(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return vqwebengineurlschemehandler->event(event);
    } else {
        return self->QWebEngineUrlSchemeHandler::event(event);
    }
}

// Base class handler implementation
bool QWebEngineUrlSchemeHandler_QBaseEvent(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Event_IsBase(true);
        return vqwebengineurlschemehandler->event(event);
    } else {
        return self->QWebEngineUrlSchemeHandler::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Event_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlSchemeHandler_EventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return vqwebengineurlschemehandler->eventFilter(watched, event);
    } else {
        return self->QWebEngineUrlSchemeHandler::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebEngineUrlSchemeHandler_QBaseEventFilter(QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_EventFilter_IsBase(true);
        return vqwebengineurlschemehandler->eventFilter(watched, event);
    } else {
        return self->QWebEngineUrlSchemeHandler::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnEventFilter(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_EventFilter_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_TimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->timerEvent(event);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_QBaseTimerEvent(QWebEngineUrlSchemeHandler* self, QTimerEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_TimerEvent_IsBase(true);
        vqwebengineurlschemehandler->timerEvent(event);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnTimerEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_TimerEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_ChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->childEvent(event);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_QBaseChildEvent(QWebEngineUrlSchemeHandler* self, QChildEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_ChildEvent_IsBase(true);
        vqwebengineurlschemehandler->childEvent(event);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnChildEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_ChildEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_CustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->customEvent(event);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_QBaseCustomEvent(QWebEngineUrlSchemeHandler* self, QEvent* event) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_CustomEvent_IsBase(true);
        vqwebengineurlschemehandler->customEvent(event);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnCustomEvent(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_CustomEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_ConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->connectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_QBaseConnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_ConnectNotify_IsBase(true);
        vqwebengineurlschemehandler->connectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnConnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_ConnectNotify_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlSchemeHandler_DisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->disconnectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineUrlSchemeHandler_QBaseDisconnectNotify(QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_DisconnectNotify_IsBase(true);
        vqwebengineurlschemehandler->disconnectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlSchemeHandler*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnDisconnectNotify(QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = dynamic_cast<VirtualQWebEngineUrlSchemeHandler*>(self);
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebEngineUrlSchemeHandler_Sender(const QWebEngineUrlSchemeHandler* self) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return vqwebengineurlschemehandler->sender();
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebEngineUrlSchemeHandler_QBaseSender(const QWebEngineUrlSchemeHandler* self) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Sender_IsBase(true);
        return vqwebengineurlschemehandler->sender();
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnSender(const QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Sender_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineUrlSchemeHandler_SenderSignalIndex(const QWebEngineUrlSchemeHandler* self) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return vqwebengineurlschemehandler->senderSignalIndex();
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebEngineUrlSchemeHandler_QBaseSenderSignalIndex(const QWebEngineUrlSchemeHandler* self) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_SenderSignalIndex_IsBase(true);
        return vqwebengineurlschemehandler->senderSignalIndex();
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnSenderSignalIndex(const QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineUrlSchemeHandler_Receivers(const QWebEngineUrlSchemeHandler* self, const char* signal) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return vqwebengineurlschemehandler->receivers(signal);
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebEngineUrlSchemeHandler_QBaseReceivers(const QWebEngineUrlSchemeHandler* self, const char* signal) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Receivers_IsBase(true);
        return vqwebengineurlschemehandler->receivers(signal);
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnReceivers(const QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_Receivers_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlSchemeHandler_IsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        return vqwebengineurlschemehandler->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebEngineUrlSchemeHandler_QBaseIsSignalConnected(const QWebEngineUrlSchemeHandler* self, const QMetaMethod* signal) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_IsSignalConnected_IsBase(true);
        return vqwebengineurlschemehandler->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebEngineUrlSchemeHandler*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlSchemeHandler_OnIsSignalConnected(const QWebEngineUrlSchemeHandler* self, intptr_t slot) {
    auto* vqwebengineurlschemehandler = const_cast<VirtualQWebEngineUrlSchemeHandler*>(dynamic_cast<const VirtualQWebEngineUrlSchemeHandler*>(self));
    if (vqwebengineurlschemehandler && vqwebengineurlschemehandler->isVirtualQWebEngineUrlSchemeHandler) {
        vqwebengineurlschemehandler->setQWebEngineUrlSchemeHandler_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebEngineUrlSchemeHandler::QWebEngineUrlSchemeHandler_IsSignalConnected_Callback>(slot));
    }
}

void QWebEngineUrlSchemeHandler_Delete(QWebEngineUrlSchemeHandler* self) {
    delete self;
}
