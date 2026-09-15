#include <QChildEvent>
#include <QEvent>
#include <QFileSelector>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlFileSelector>
#include <QString>
#include <QTimerEvent>
#include <qqmlfileselector.h>
#include "libqqmlfileselector.h"
#include "libqqmlfileselector.hxx"

QQmlFileSelector* QQmlFileSelector_new(QQmlEngine* engine) {
    return new VirtualQQmlFileSelector(engine);
}

QQmlFileSelector* QQmlFileSelector_new2(QQmlEngine* engine, QObject* parent) {
    return new VirtualQQmlFileSelector(engine, parent);
}

QMetaObject* QQmlFileSelector_MetaObject(const QQmlFileSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlFileSelector_Metacast(QQmlFileSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlFileSelector_Metacall(QQmlFileSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlFileSelector_Tr(const char* s) {
    auto _ret = QQmlFileSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QFileSelector* QQmlFileSelector_Selector(const QQmlFileSelector* self) {
    return self->selector();
}

void QQmlFileSelector_SetSelector(QQmlFileSelector* self, QFileSelector* selector) {
    self->setSelector(selector);
}

void QQmlFileSelector_SetExtraSelectors(QQmlFileSelector* self, const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    self->setExtraSelectors(strings_QList);
}

QQmlFileSelector* QQmlFileSelector_Get(QQmlEngine* param1) {
    return QQmlFileSelector::get(param1);
}

libqt_string QQmlFileSelector_Tr2(const char* s, const char* c) {
    auto _ret = QQmlFileSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlFileSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlFileSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlFileSelector_SuperMetaObject(const QQmlFileSelector* self) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlfileselector->metaObject();
    } else {
        return (QMetaObject*)self->QQmlFileSelector::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnMetaObject(const QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_MetaObject_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlFileSelector_SuperMetacast(QQmlFileSelector* self, const char* param1) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_Metacast_IsBase(true);
        return vqqmlfileselector->qt_metacast(param1);
    } else {
        return self->QQmlFileSelector::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnMetacast(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_Metacast_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlFileSelector_SuperMetacall(QQmlFileSelector* self, int param1, int param2, void** param3) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_Metacall_IsBase(true);
        return vqqmlfileselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlFileSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnMetacall(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_Metacall_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QQmlFileSelector_Event(QQmlFileSelector* self, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        return vqqmlfileselector->event(event);
    } else {
        return self->QQmlFileSelector::event(event);
    }
}

// Base class handler implementation
bool QQmlFileSelector_SuperEvent(QQmlFileSelector* self, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_Event_IsBase(true);
        return vqqmlfileselector->event(event);
    } else {
        return self->QQmlFileSelector::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnEvent(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_Event_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlFileSelector_EventFilter(QQmlFileSelector* self, QObject* watched, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        return vqqmlfileselector->eventFilter(watched, event);
    } else {
        return self->QQmlFileSelector::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlFileSelector_SuperEventFilter(QQmlFileSelector* self, QObject* watched, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_EventFilter_IsBase(true);
        return vqqmlfileselector->eventFilter(watched, event);
    } else {
        return self->QQmlFileSelector::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnEventFilter(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_EventFilter_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlFileSelector_TimerEvent(QQmlFileSelector* self, QTimerEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->timerEvent(event);
    } else {
        ((VirtualQQmlFileSelector*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperTimerEvent(QQmlFileSelector* self, QTimerEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_TimerEvent_IsBase(true);
        vqqmlfileselector->timerEvent(event);
    } else {
        ((VirtualQQmlFileSelector*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnTimerEvent(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_TimerEvent_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlFileSelector_ChildEvent(QQmlFileSelector* self, QChildEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->childEvent(event);
    } else {
        ((VirtualQQmlFileSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperChildEvent(QQmlFileSelector* self, QChildEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_ChildEvent_IsBase(true);
        vqqmlfileselector->childEvent(event);
    } else {
        ((VirtualQQmlFileSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnChildEvent(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_ChildEvent_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlFileSelector_CustomEvent(QQmlFileSelector* self, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->customEvent(event);
    } else {
        ((VirtualQQmlFileSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperCustomEvent(QQmlFileSelector* self, QEvent* event) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_CustomEvent_IsBase(true);
        vqqmlfileselector->customEvent(event);
    } else {
        ((VirtualQQmlFileSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnCustomEvent(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_CustomEvent_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlFileSelector_ConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->connectNotify(*signal);
    } else {
        ((VirtualQQmlFileSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperConnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_ConnectNotify_IsBase(true);
        vqqmlfileselector->connectNotify(*signal);
    } else {
        ((VirtualQQmlFileSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnConnectNotify(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlFileSelector_DisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlFileSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlFileSelector_SuperDisconnectNotify(QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_DisconnectNotify_IsBase(true);
        vqqmlfileselector->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlFileSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnDisconnectNotify(QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = dynamic_cast<VirtualQQmlFileSelector*>(self);
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlFileSelector_Sender(const QQmlFileSelector* self) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        return vqqmlfileselector->sender();
    } else {
        return ((VirtualQQmlFileSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlFileSelector_SuperSender(const QQmlFileSelector* self) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_Sender_IsBase(true);
        return vqqmlfileselector->sender();
    } else {
        return ((VirtualQQmlFileSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnSender(const QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_Sender_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlFileSelector_SenderSignalIndex(const QQmlFileSelector* self) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        return vqqmlfileselector->senderSignalIndex();
    } else {
        return ((VirtualQQmlFileSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlFileSelector_SuperSenderSignalIndex(const QQmlFileSelector* self) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_SenderSignalIndex_IsBase(true);
        return vqqmlfileselector->senderSignalIndex();
    } else {
        return ((VirtualQQmlFileSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnSenderSignalIndex(const QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlFileSelector_Receivers(const QQmlFileSelector* self, const char* signal) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        return vqqmlfileselector->receivers(signal);
    } else {
        return ((VirtualQQmlFileSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlFileSelector_SuperReceivers(const QQmlFileSelector* self, const char* signal) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_Receivers_IsBase(true);
        return vqqmlfileselector->receivers(signal);
    } else {
        return ((VirtualQQmlFileSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnReceivers(const QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_Receivers_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlFileSelector_IsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        return vqqmlfileselector->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlFileSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlFileSelector_SuperIsSignalConnected(const QQmlFileSelector* self, const QMetaMethod* signal) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector) {
        vqqmlfileselector->setQQmlFileSelector_IsSignalConnected_IsBase(true);
        return vqqmlfileselector->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlFileSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlFileSelector_OnIsSignalConnected(const QQmlFileSelector* self, intptr_t slot) {
    auto* vqqmlfileselector = const_cast<VirtualQQmlFileSelector*>(dynamic_cast<const VirtualQQmlFileSelector*>(self));
    if (vqqmlfileselector && vqqmlfileselector->isVirtualQQmlFileSelector)
        vqqmlfileselector->setQQmlFileSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlFileSelector::QQmlFileSelector_IsSignalConnected_Callback>(slot));
}

void QQmlFileSelector_Delete(QQmlFileSelector* self) {
    delete self;
}
