#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLTimeMonitor>
#include <QOpenGLTimerQuery>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qopengltimerquery.h>
#include "libqopengltimerquery.h"
#include "libqopengltimerquery.hxx"

QOpenGLTimerQuery* QOpenGLTimerQuery_new() {
    return new VirtualQOpenGLTimerQuery();
}

QOpenGLTimerQuery* QOpenGLTimerQuery_new2(QObject* parent) {
    return new VirtualQOpenGLTimerQuery(parent);
}

QMetaObject* QOpenGLTimerQuery_MetaObject(const QOpenGLTimerQuery* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLTimerQuery_Metacast(QOpenGLTimerQuery* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLTimerQuery_Metacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLTimerQuery_Tr(const char* s) {
    QString _ret = QOpenGLTimerQuery::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLTimerQuery_Create(QOpenGLTimerQuery* self) {
    return self->create();
}

void QOpenGLTimerQuery_Destroy(QOpenGLTimerQuery* self) {
    self->destroy();
}

bool QOpenGLTimerQuery_IsCreated(const QOpenGLTimerQuery* self) {
    return self->isCreated();
}

uint32_t QOpenGLTimerQuery_ObjectId(const QOpenGLTimerQuery* self) {
    return self->objectId();
}

void QOpenGLTimerQuery_Begin(QOpenGLTimerQuery* self) {
    self->begin();
}

void QOpenGLTimerQuery_End(QOpenGLTimerQuery* self) {
    self->end();
}

uint64_t QOpenGLTimerQuery_WaitForTimestamp(const QOpenGLTimerQuery* self) {
    return self->waitForTimestamp();
}

void QOpenGLTimerQuery_RecordTimestamp(QOpenGLTimerQuery* self) {
    self->recordTimestamp();
}

bool QOpenGLTimerQuery_IsResultAvailable(const QOpenGLTimerQuery* self) {
    return self->isResultAvailable();
}

uint64_t QOpenGLTimerQuery_WaitForResult(const QOpenGLTimerQuery* self) {
    return self->waitForResult();
}

libqt_string QOpenGLTimerQuery_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLTimerQuery::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLTimerQuery_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLTimerQuery::tr(s, c, static_cast<int>(n));
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
int QOpenGLTimerQuery_QBaseMetacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Metacall_IsBase(true);
        return vqopengltimerquery->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLTimerQuery::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnMetacall(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Metacall_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLTimerQuery_Event(QOpenGLTimerQuery* self, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return vqopengltimerquery->event(event);
    } else {
        return self->QOpenGLTimerQuery::event(event);
    }
}

// Base class handler implementation
bool QOpenGLTimerQuery_QBaseEvent(QOpenGLTimerQuery* self, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Event_IsBase(true);
        return vqopengltimerquery->event(event);
    } else {
        return self->QOpenGLTimerQuery::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Event_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLTimerQuery_EventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return vqopengltimerquery->eventFilter(watched, event);
    } else {
        return self->QOpenGLTimerQuery::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLTimerQuery_QBaseEventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_EventFilter_IsBase(true);
        return vqopengltimerquery->eventFilter(watched, event);
    } else {
        return self->QOpenGLTimerQuery::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnEventFilter(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimerQuery_TimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->timerEvent(event);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_QBaseTimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_TimerEvent_IsBase(true);
        vqopengltimerquery->timerEvent(event);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnTimerEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimerQuery_ChildEvent(QOpenGLTimerQuery* self, QChildEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->childEvent(event);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_QBaseChildEvent(QOpenGLTimerQuery* self, QChildEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_ChildEvent_IsBase(true);
        vqopengltimerquery->childEvent(event);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnChildEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimerQuery_CustomEvent(QOpenGLTimerQuery* self, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->customEvent(event);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_QBaseCustomEvent(QOpenGLTimerQuery* self, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_CustomEvent_IsBase(true);
        vqopengltimerquery->customEvent(event);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnCustomEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimerQuery_ConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_QBaseConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_ConnectNotify_IsBase(true);
        vqopengltimerquery->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnConnectNotify(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimerQuery_DisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_QBaseDisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_DisconnectNotify_IsBase(true);
        vqopengltimerquery->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimerQuery*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnDisconnectNotify(QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLTimerQuery_Sender(const QOpenGLTimerQuery* self) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return vqopengltimerquery->sender();
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLTimerQuery_QBaseSender(const QOpenGLTimerQuery* self) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Sender_IsBase(true);
        return vqopengltimerquery->sender();
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnSender(const QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Sender_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLTimerQuery_SenderSignalIndex(const QOpenGLTimerQuery* self) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return vqopengltimerquery->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLTimerQuery_QBaseSenderSignalIndex(const QOpenGLTimerQuery* self) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_SenderSignalIndex_IsBase(true);
        return vqopengltimerquery->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnSenderSignalIndex(const QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLTimerQuery_Receivers(const QOpenGLTimerQuery* self, const char* signal) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return vqopengltimerquery->receivers(signal);
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLTimerQuery_QBaseReceivers(const QOpenGLTimerQuery* self, const char* signal) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Receivers_IsBase(true);
        return vqopengltimerquery->receivers(signal);
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnReceivers(const QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_Receivers_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLTimerQuery_IsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        return vqopengltimerquery->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLTimerQuery_QBaseIsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_IsSignalConnected_IsBase(true);
        return vqopengltimerquery->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLTimerQuery*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnIsSignalConnected(const QOpenGLTimerQuery* self, intptr_t slot) {
    auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self));
    if (vqopengltimerquery && vqopengltimerquery->isVirtualQOpenGLTimerQuery) {
        vqopengltimerquery->setQOpenGLTimerQuery_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_IsSignalConnected_Callback>(slot));
    }
}

void QOpenGLTimerQuery_Delete(QOpenGLTimerQuery* self) {
    delete self;
}

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new() {
    return new VirtualQOpenGLTimeMonitor();
}

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new2(QObject* parent) {
    return new VirtualQOpenGLTimeMonitor(parent);
}

QMetaObject* QOpenGLTimeMonitor_MetaObject(const QOpenGLTimeMonitor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLTimeMonitor_Metacast(QOpenGLTimeMonitor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLTimeMonitor_Metacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLTimeMonitor_Tr(const char* s) {
    QString _ret = QOpenGLTimeMonitor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLTimeMonitor_SetSampleCount(QOpenGLTimeMonitor* self, int sampleCount) {
    self->setSampleCount(static_cast<int>(sampleCount));
}

int QOpenGLTimeMonitor_SampleCount(const QOpenGLTimeMonitor* self) {
    return self->sampleCount();
}

bool QOpenGLTimeMonitor_Create(QOpenGLTimeMonitor* self) {
    return self->create();
}

void QOpenGLTimeMonitor_Destroy(QOpenGLTimeMonitor* self) {
    self->destroy();
}

bool QOpenGLTimeMonitor_IsCreated(const QOpenGLTimeMonitor* self) {
    return self->isCreated();
}

libqt_list /* of uint32_t */ QOpenGLTimeMonitor_ObjectIds(const QOpenGLTimeMonitor* self) {
    QList<GLuint> _ret = self->objectIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint32_t* _arr = static_cast<uint32_t*>(malloc(sizeof(uint32_t) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QOpenGLTimeMonitor_RecordSample(QOpenGLTimeMonitor* self) {
    return self->recordSample();
}

bool QOpenGLTimeMonitor_IsResultAvailable(const QOpenGLTimeMonitor* self) {
    return self->isResultAvailable();
}

libqt_list /* of uint64_t */ QOpenGLTimeMonitor_WaitForSamples(const QOpenGLTimeMonitor* self) {
    QList<GLuint64> _ret = self->waitForSamples();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint64_t* _arr = static_cast<uint64_t*>(malloc(sizeof(uint64_t) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of uint64_t */ QOpenGLTimeMonitor_WaitForIntervals(const QOpenGLTimeMonitor* self) {
    QList<GLuint64> _ret = self->waitForIntervals();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint64_t* _arr = static_cast<uint64_t*>(malloc(sizeof(uint64_t) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QOpenGLTimeMonitor_Reset(QOpenGLTimeMonitor* self) {
    self->reset();
}

libqt_string QOpenGLTimeMonitor_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLTimeMonitor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLTimeMonitor_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLTimeMonitor::tr(s, c, static_cast<int>(n));
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
int QOpenGLTimeMonitor_QBaseMetacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Metacall_IsBase(true);
        return vqopengltimemonitor->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLTimeMonitor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnMetacall(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Metacall_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLTimeMonitor_Event(QOpenGLTimeMonitor* self, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return vqopengltimemonitor->event(event);
    } else {
        return self->QOpenGLTimeMonitor::event(event);
    }
}

// Base class handler implementation
bool QOpenGLTimeMonitor_QBaseEvent(QOpenGLTimeMonitor* self, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Event_IsBase(true);
        return vqopengltimemonitor->event(event);
    } else {
        return self->QOpenGLTimeMonitor::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Event_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLTimeMonitor_EventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return vqopengltimemonitor->eventFilter(watched, event);
    } else {
        return self->QOpenGLTimeMonitor::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLTimeMonitor_QBaseEventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_EventFilter_IsBase(true);
        return vqopengltimemonitor->eventFilter(watched, event);
    } else {
        return self->QOpenGLTimeMonitor::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnEventFilter(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimeMonitor_TimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->timerEvent(event);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_QBaseTimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_TimerEvent_IsBase(true);
        vqopengltimemonitor->timerEvent(event);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnTimerEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimeMonitor_ChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->childEvent(event);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_QBaseChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_ChildEvent_IsBase(true);
        vqopengltimemonitor->childEvent(event);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnChildEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimeMonitor_CustomEvent(QOpenGLTimeMonitor* self, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->customEvent(event);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_QBaseCustomEvent(QOpenGLTimeMonitor* self, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_CustomEvent_IsBase(true);
        vqopengltimemonitor->customEvent(event);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnCustomEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimeMonitor_ConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_QBaseConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_ConnectNotify_IsBase(true);
        vqopengltimemonitor->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnConnectNotify(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLTimeMonitor_DisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_QBaseDisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_DisconnectNotify_IsBase(true);
        vqopengltimemonitor->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLTimeMonitor*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnDisconnectNotify(QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLTimeMonitor_Sender(const QOpenGLTimeMonitor* self) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return vqopengltimemonitor->sender();
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLTimeMonitor_QBaseSender(const QOpenGLTimeMonitor* self) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Sender_IsBase(true);
        return vqopengltimemonitor->sender();
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnSender(const QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Sender_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLTimeMonitor_SenderSignalIndex(const QOpenGLTimeMonitor* self) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return vqopengltimemonitor->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLTimeMonitor_QBaseSenderSignalIndex(const QOpenGLTimeMonitor* self) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_SenderSignalIndex_IsBase(true);
        return vqopengltimemonitor->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnSenderSignalIndex(const QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLTimeMonitor_Receivers(const QOpenGLTimeMonitor* self, const char* signal) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return vqopengltimemonitor->receivers(signal);
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLTimeMonitor_QBaseReceivers(const QOpenGLTimeMonitor* self, const char* signal) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Receivers_IsBase(true);
        return vqopengltimemonitor->receivers(signal);
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnReceivers(const QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_Receivers_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLTimeMonitor_IsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        return vqopengltimemonitor->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLTimeMonitor_QBaseIsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_IsSignalConnected_IsBase(true);
        return vqopengltimemonitor->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLTimeMonitor*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnIsSignalConnected(const QOpenGLTimeMonitor* self, intptr_t slot) {
    auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self));
    if (vqopengltimemonitor && vqopengltimemonitor->isVirtualQOpenGLTimeMonitor) {
        vqopengltimemonitor->setQOpenGLTimeMonitor_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_IsSignalConnected_Callback>(slot));
    }
}

void QOpenGLTimeMonitor_Delete(QOpenGLTimeMonitor* self) {
    delete self;
}
