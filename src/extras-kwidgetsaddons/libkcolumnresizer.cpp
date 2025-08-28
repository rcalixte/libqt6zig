#include <KColumnResizer>
#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <kcolumnresizer.h>
#include "libkcolumnresizer.h"
#include "libkcolumnresizer.hxx"

KColumnResizer* KColumnResizer_new() {
    return new VirtualKColumnResizer();
}

KColumnResizer* KColumnResizer_new2(QObject* parent) {
    return new VirtualKColumnResizer(parent);
}

QMetaObject* KColumnResizer_MetaObject(const KColumnResizer* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColumnResizer_Metacast(KColumnResizer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColumnResizer_Metacall(KColumnResizer* self, int param1, int param2, void** param3) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColumnResizer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KColumnResizer_Tr(const char* s) {
    QString _ret = KColumnResizer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KColumnResizer_AddWidgetsFromLayout(KColumnResizer* self, QLayout* layout) {
    self->addWidgetsFromLayout(layout);
}

void KColumnResizer_AddWidget(KColumnResizer* self, QWidget* widget) {
    self->addWidget(widget);
}

void KColumnResizer_RemoveWidget(KColumnResizer* self, QWidget* widget) {
    self->removeWidget(widget);
}

bool KColumnResizer_EventFilter(KColumnResizer* self, QObject* param1, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return vkcolumnresizer->eventFilter(param1, event);
    }
    return {};
}

libqt_string KColumnResizer_Tr2(const char* s, const char* c) {
    QString _ret = KColumnResizer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColumnResizer_Tr3(const char* s, const char* c, int n) {
    QString _ret = KColumnResizer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KColumnResizer_AddWidgetsFromLayout2(KColumnResizer* self, QLayout* layout, int column) {
    self->addWidgetsFromLayout(layout, static_cast<int>(column));
}

// Base class handler implementation
int KColumnResizer_QBaseMetacall(KColumnResizer* self, int param1, int param2, void** param3) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Metacall_IsBase(true);
        return vkcolumnresizer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KColumnResizer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnMetacall(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Metacall_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KColumnResizer_QBaseEventFilter(KColumnResizer* self, QObject* param1, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_EventFilter_IsBase(true);
        return vkcolumnresizer->eventFilter(param1, event);
    } else {
        return ((VirtualKColumnResizer*)self)->eventFilter(param1, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnEventFilter(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_EventFilter_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnResizer_Event(KColumnResizer* self, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return vkcolumnresizer->event(event);
    } else {
        return self->KColumnResizer::event(event);
    }
}

// Base class handler implementation
bool KColumnResizer_QBaseEvent(KColumnResizer* self, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Event_IsBase(true);
        return vkcolumnresizer->event(event);
    } else {
        return self->KColumnResizer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnEvent(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Event_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnResizer_TimerEvent(KColumnResizer* self, QTimerEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->timerEvent(event);
    } else {
        ((VirtualKColumnResizer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KColumnResizer_QBaseTimerEvent(KColumnResizer* self, QTimerEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_TimerEvent_IsBase(true);
        vkcolumnresizer->timerEvent(event);
    } else {
        ((VirtualKColumnResizer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnTimerEvent(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_TimerEvent_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnResizer_ChildEvent(KColumnResizer* self, QChildEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->childEvent(event);
    } else {
        ((VirtualKColumnResizer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColumnResizer_QBaseChildEvent(KColumnResizer* self, QChildEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_ChildEvent_IsBase(true);
        vkcolumnresizer->childEvent(event);
    } else {
        ((VirtualKColumnResizer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnChildEvent(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_ChildEvent_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnResizer_CustomEvent(KColumnResizer* self, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->customEvent(event);
    } else {
        ((VirtualKColumnResizer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColumnResizer_QBaseCustomEvent(KColumnResizer* self, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_CustomEvent_IsBase(true);
        vkcolumnresizer->customEvent(event);
    } else {
        ((VirtualKColumnResizer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnCustomEvent(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_CustomEvent_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnResizer_ConnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->connectNotify(*signal);
    } else {
        ((VirtualKColumnResizer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColumnResizer_QBaseConnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_ConnectNotify_IsBase(true);
        vkcolumnresizer->connectNotify(*signal);
    } else {
        ((VirtualKColumnResizer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnConnectNotify(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_ConnectNotify_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColumnResizer_DisconnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->disconnectNotify(*signal);
    } else {
        ((VirtualKColumnResizer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColumnResizer_QBaseDisconnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_DisconnectNotify_IsBase(true);
        vkcolumnresizer->disconnectNotify(*signal);
    } else {
        ((VirtualKColumnResizer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnDisconnectNotify(KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_DisconnectNotify_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColumnResizer_Sender(const KColumnResizer* self) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return vkcolumnresizer->sender();
    } else {
        return ((VirtualKColumnResizer*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColumnResizer_QBaseSender(const KColumnResizer* self) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Sender_IsBase(true);
        return vkcolumnresizer->sender();
    } else {
        return ((VirtualKColumnResizer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnSender(const KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Sender_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnResizer_SenderSignalIndex(const KColumnResizer* self) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return vkcolumnresizer->senderSignalIndex();
    } else {
        return ((VirtualKColumnResizer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColumnResizer_QBaseSenderSignalIndex(const KColumnResizer* self) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_SenderSignalIndex_IsBase(true);
        return vkcolumnresizer->senderSignalIndex();
    } else {
        return ((VirtualKColumnResizer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnSenderSignalIndex(const KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColumnResizer_Receivers(const KColumnResizer* self, const char* signal) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return vkcolumnresizer->receivers(signal);
    } else {
        return ((VirtualKColumnResizer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColumnResizer_QBaseReceivers(const KColumnResizer* self, const char* signal) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Receivers_IsBase(true);
        return vkcolumnresizer->receivers(signal);
    } else {
        return ((VirtualKColumnResizer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnReceivers(const KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_Receivers_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColumnResizer_IsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        return vkcolumnresizer->isSignalConnected(*signal);
    } else {
        return ((VirtualKColumnResizer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColumnResizer_QBaseIsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_IsSignalConnected_IsBase(true);
        return vkcolumnresizer->isSignalConnected(*signal);
    } else {
        return ((VirtualKColumnResizer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnIsSignalConnected(const KColumnResizer* self, intptr_t slot) {
    auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self));
    if (vkcolumnresizer && vkcolumnresizer->isVirtualKColumnResizer) {
        vkcolumnresizer->setKColumnResizer_IsSignalConnected_Callback(reinterpret_cast<VirtualKColumnResizer::KColumnResizer_IsSignalConnected_Callback>(slot));
    }
}

void KColumnResizer_Delete(KColumnResizer* self) {
    delete self;
}
