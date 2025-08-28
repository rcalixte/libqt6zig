#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYLegendMarker>
#include <QXYSeries>
#include <qxylegendmarker.h>
#include "libqxylegendmarker.h"
#include "libqxylegendmarker.hxx"

QXYLegendMarker* QXYLegendMarker_new(QXYSeries* series, QLegend* legend) {
    return new VirtualQXYLegendMarker(series, legend);
}

QXYLegendMarker* QXYLegendMarker_new2(QXYSeries* series, QLegend* legend, QObject* parent) {
    return new VirtualQXYLegendMarker(series, legend, parent);
}

QMetaObject* QXYLegendMarker_MetaObject(const QXYLegendMarker* self) {
    return (QMetaObject*)self->metaObject();
}

void* QXYLegendMarker_Metacast(QXYLegendMarker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QXYLegendMarker_Metacall(QXYLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQXYLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QXYLegendMarker_OnMetacall(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Metacall_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QXYLegendMarker_QBaseMetacall(QXYLegendMarker* self, int param1, int param2, void** param3) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Metacall_IsBase(true);
        return vqxylegendmarker->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQXYLegendMarker*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QXYLegendMarker_Tr(const char* s) {
    QString _ret = QXYLegendMarker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QXYLegendMarker_Type(QXYLegendMarker* self) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQXYLegendMarker*)self)->type());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QXYLegendMarker_OnType(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Type_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Type_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QXYLegendMarker_QBaseType(QXYLegendMarker* self) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Type_IsBase(true);
        return static_cast<int>(vqxylegendmarker->type());
    } else {
        return static_cast<int>(((VirtualQXYLegendMarker*)self)->type());
    }
}

QXYSeries* QXYLegendMarker_Series(QXYLegendMarker* self) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return self->series();
    } else {
        return ((VirtualQXYLegendMarker*)self)->series();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QXYLegendMarker_OnSeries(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Series_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Series_Callback>(slot));
    }
}

// Virtual base class handler implementation
QXYSeries* QXYLegendMarker_QBaseSeries(QXYLegendMarker* self) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Series_IsBase(true);
        return vqxylegendmarker->series();
    } else {
        return ((VirtualQXYLegendMarker*)self)->series();
    }
}

libqt_string QXYLegendMarker_Tr2(const char* s, const char* c) {
    QString _ret = QXYLegendMarker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QXYLegendMarker_Tr3(const char* s, const char* c, int n) {
    QString _ret = QXYLegendMarker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QXYLegendMarker_Event(QXYLegendMarker* self, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return vqxylegendmarker->event(event);
    } else {
        return self->QXYLegendMarker::event(event);
    }
}

// Base class handler implementation
bool QXYLegendMarker_QBaseEvent(QXYLegendMarker* self, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Event_IsBase(true);
        return vqxylegendmarker->event(event);
    } else {
        return self->QXYLegendMarker::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnEvent(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Event_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QXYLegendMarker_EventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return vqxylegendmarker->eventFilter(watched, event);
    } else {
        return self->QXYLegendMarker::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QXYLegendMarker_QBaseEventFilter(QXYLegendMarker* self, QObject* watched, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_EventFilter_IsBase(true);
        return vqxylegendmarker->eventFilter(watched, event);
    } else {
        return self->QXYLegendMarker::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnEventFilter(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_EventFilter_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_TimerEvent(QXYLegendMarker* self, QTimerEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->timerEvent(event);
    } else {
        ((VirtualQXYLegendMarker*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseTimerEvent(QXYLegendMarker* self, QTimerEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_TimerEvent_IsBase(true);
        vqxylegendmarker->timerEvent(event);
    } else {
        ((VirtualQXYLegendMarker*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnTimerEvent(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_TimerEvent_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_ChildEvent(QXYLegendMarker* self, QChildEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->childEvent(event);
    } else {
        ((VirtualQXYLegendMarker*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseChildEvent(QXYLegendMarker* self, QChildEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_ChildEvent_IsBase(true);
        vqxylegendmarker->childEvent(event);
    } else {
        ((VirtualQXYLegendMarker*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnChildEvent(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_ChildEvent_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_CustomEvent(QXYLegendMarker* self, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->customEvent(event);
    } else {
        ((VirtualQXYLegendMarker*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseCustomEvent(QXYLegendMarker* self, QEvent* event) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_CustomEvent_IsBase(true);
        vqxylegendmarker->customEvent(event);
    } else {
        ((VirtualQXYLegendMarker*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnCustomEvent(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_CustomEvent_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_ConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQXYLegendMarker*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseConnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_ConnectNotify_IsBase(true);
        vqxylegendmarker->connectNotify(*signal);
    } else {
        ((VirtualQXYLegendMarker*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnConnectNotify(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_ConnectNotify_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QXYLegendMarker_DisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQXYLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QXYLegendMarker_QBaseDisconnectNotify(QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_DisconnectNotify_IsBase(true);
        vqxylegendmarker->disconnectNotify(*signal);
    } else {
        ((VirtualQXYLegendMarker*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnDisconnectNotify(QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = dynamic_cast<VirtualQXYLegendMarker*>(self);
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_DisconnectNotify_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QXYLegendMarker_Sender(const QXYLegendMarker* self) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return vqxylegendmarker->sender();
    } else {
        return ((VirtualQXYLegendMarker*)self)->sender();
    }
}

// Base class handler implementation
QObject* QXYLegendMarker_QBaseSender(const QXYLegendMarker* self) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Sender_IsBase(true);
        return vqxylegendmarker->sender();
    } else {
        return ((VirtualQXYLegendMarker*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSender(const QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Sender_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QXYLegendMarker_SenderSignalIndex(const QXYLegendMarker* self) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return vqxylegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQXYLegendMarker*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QXYLegendMarker_QBaseSenderSignalIndex(const QXYLegendMarker* self) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_SenderSignalIndex_IsBase(true);
        return vqxylegendmarker->senderSignalIndex();
    } else {
        return ((VirtualQXYLegendMarker*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnSenderSignalIndex(const QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_SenderSignalIndex_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QXYLegendMarker_Receivers(const QXYLegendMarker* self, const char* signal) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return vqxylegendmarker->receivers(signal);
    } else {
        return ((VirtualQXYLegendMarker*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QXYLegendMarker_QBaseReceivers(const QXYLegendMarker* self, const char* signal) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Receivers_IsBase(true);
        return vqxylegendmarker->receivers(signal);
    } else {
        return ((VirtualQXYLegendMarker*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnReceivers(const QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_Receivers_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QXYLegendMarker_IsSignalConnected(const QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        return vqxylegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQXYLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QXYLegendMarker_QBaseIsSignalConnected(const QXYLegendMarker* self, const QMetaMethod* signal) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_IsSignalConnected_IsBase(true);
        return vqxylegendmarker->isSignalConnected(*signal);
    } else {
        return ((VirtualQXYLegendMarker*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QXYLegendMarker_OnIsSignalConnected(const QXYLegendMarker* self, intptr_t slot) {
    auto* vqxylegendmarker = const_cast<VirtualQXYLegendMarker*>(dynamic_cast<const VirtualQXYLegendMarker*>(self));
    if (vqxylegendmarker && vqxylegendmarker->isVirtualQXYLegendMarker) {
        vqxylegendmarker->setQXYLegendMarker_IsSignalConnected_Callback(reinterpret_cast<VirtualQXYLegendMarker::QXYLegendMarker_IsSignalConnected_Callback>(slot));
    }
}

void QXYLegendMarker_Delete(QXYLegendMarker* self) {
    delete self;
}
