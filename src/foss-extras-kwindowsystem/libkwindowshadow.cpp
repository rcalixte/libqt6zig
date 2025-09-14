#include <KWindowShadow>
#include <KWindowShadowTile>
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWindow>
#include <kwindowshadow.h>
#include "libkwindowshadow.h"
#include "libkwindowshadow.hxx"

KWindowShadowTile* KWindowShadowTile_new() {
    return new KWindowShadowTile();
}

QImage* KWindowShadowTile_Image(const KWindowShadowTile* self) {
    return new QImage(self->image());
}

void KWindowShadowTile_SetImage(KWindowShadowTile* self, const QImage* image) {
    self->setImage(*image);
}

bool KWindowShadowTile_IsCreated(const KWindowShadowTile* self) {
    return self->isCreated();
}

bool KWindowShadowTile_Create(KWindowShadowTile* self) {
    return self->create();
}

void KWindowShadowTile_Delete(KWindowShadowTile* self) {
    delete self;
}

KWindowShadow* KWindowShadow_new() {
    return new VirtualKWindowShadow();
}

KWindowShadow* KWindowShadow_new2(QObject* parent) {
    return new VirtualKWindowShadow(parent);
}

QMetaObject* KWindowShadow_MetaObject(const KWindowShadow* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWindowShadow_Metacast(KWindowShadow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWindowShadow_Metacall(KWindowShadow* self, int param1, int param2, void** param3) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWindowShadow*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KWindowShadow_Tr(const char* s) {
    QString _ret = KWindowShadow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMargins* KWindowShadow_Padding(const KWindowShadow* self) {
    return new QMargins(self->padding());
}

void KWindowShadow_SetPadding(KWindowShadow* self, const QMargins* padding) {
    self->setPadding(*padding);
}

QWindow* KWindowShadow_Window(const KWindowShadow* self) {
    return self->window();
}

void KWindowShadow_SetWindow(KWindowShadow* self, QWindow* window) {
    self->setWindow(window);
}

bool KWindowShadow_IsCreated(const KWindowShadow* self) {
    return self->isCreated();
}

bool KWindowShadow_Create(KWindowShadow* self) {
    return self->create();
}

void KWindowShadow_Destroy(KWindowShadow* self) {
    self->destroy();
}

libqt_string KWindowShadow_Tr2(const char* s, const char* c) {
    QString _ret = KWindowShadow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowShadow_Tr3(const char* s, const char* c, int n) {
    QString _ret = KWindowShadow::tr(s, c, static_cast<int>(n));
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
int KWindowShadow_QBaseMetacall(KWindowShadow* self, int param1, int param2, void** param3) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Metacall_IsBase(true);
        return vkwindowshadow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KWindowShadow::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnMetacall(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Metacall_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowShadow_Event(KWindowShadow* self, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return vkwindowshadow->event(event);
    } else {
        return self->KWindowShadow::event(event);
    }
}

// Base class handler implementation
bool KWindowShadow_QBaseEvent(KWindowShadow* self, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Event_IsBase(true);
        return vkwindowshadow->event(event);
    } else {
        return self->KWindowShadow::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnEvent(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Event_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowShadow_EventFilter(KWindowShadow* self, QObject* watched, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return vkwindowshadow->eventFilter(watched, event);
    } else {
        return self->KWindowShadow::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KWindowShadow_QBaseEventFilter(KWindowShadow* self, QObject* watched, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_EventFilter_IsBase(true);
        return vkwindowshadow->eventFilter(watched, event);
    } else {
        return self->KWindowShadow::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnEventFilter(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_EventFilter_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowShadow_TimerEvent(KWindowShadow* self, QTimerEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->timerEvent(event);
    } else {
        ((VirtualKWindowShadow*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KWindowShadow_QBaseTimerEvent(KWindowShadow* self, QTimerEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_TimerEvent_IsBase(true);
        vkwindowshadow->timerEvent(event);
    } else {
        ((VirtualKWindowShadow*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnTimerEvent(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_TimerEvent_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowShadow_ChildEvent(KWindowShadow* self, QChildEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->childEvent(event);
    } else {
        ((VirtualKWindowShadow*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KWindowShadow_QBaseChildEvent(KWindowShadow* self, QChildEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_ChildEvent_IsBase(true);
        vkwindowshadow->childEvent(event);
    } else {
        ((VirtualKWindowShadow*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnChildEvent(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_ChildEvent_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowShadow_CustomEvent(KWindowShadow* self, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->customEvent(event);
    } else {
        ((VirtualKWindowShadow*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KWindowShadow_QBaseCustomEvent(KWindowShadow* self, QEvent* event) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_CustomEvent_IsBase(true);
        vkwindowshadow->customEvent(event);
    } else {
        ((VirtualKWindowShadow*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnCustomEvent(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_CustomEvent_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowShadow_ConnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->connectNotify(*signal);
    } else {
        ((VirtualKWindowShadow*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KWindowShadow_QBaseConnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_ConnectNotify_IsBase(true);
        vkwindowshadow->connectNotify(*signal);
    } else {
        ((VirtualKWindowShadow*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnConnectNotify(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_ConnectNotify_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowShadow_DisconnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->disconnectNotify(*signal);
    } else {
        ((VirtualKWindowShadow*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KWindowShadow_QBaseDisconnectNotify(KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_DisconnectNotify_IsBase(true);
        vkwindowshadow->disconnectNotify(*signal);
    } else {
        ((VirtualKWindowShadow*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnDisconnectNotify(KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = dynamic_cast<VirtualKWindowShadow*>(self);
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_DisconnectNotify_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KWindowShadow_Sender(const KWindowShadow* self) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return vkwindowshadow->sender();
    } else {
        return ((VirtualKWindowShadow*)self)->sender();
    }
}

// Base class handler implementation
QObject* KWindowShadow_QBaseSender(const KWindowShadow* self) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Sender_IsBase(true);
        return vkwindowshadow->sender();
    } else {
        return ((VirtualKWindowShadow*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnSender(const KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Sender_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KWindowShadow_SenderSignalIndex(const KWindowShadow* self) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return vkwindowshadow->senderSignalIndex();
    } else {
        return ((VirtualKWindowShadow*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KWindowShadow_QBaseSenderSignalIndex(const KWindowShadow* self) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_SenderSignalIndex_IsBase(true);
        return vkwindowshadow->senderSignalIndex();
    } else {
        return ((VirtualKWindowShadow*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnSenderSignalIndex(const KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_SenderSignalIndex_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KWindowShadow_Receivers(const KWindowShadow* self, const char* signal) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return vkwindowshadow->receivers(signal);
    } else {
        return ((VirtualKWindowShadow*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KWindowShadow_QBaseReceivers(const KWindowShadow* self, const char* signal) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Receivers_IsBase(true);
        return vkwindowshadow->receivers(signal);
    } else {
        return ((VirtualKWindowShadow*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnReceivers(const KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_Receivers_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowShadow_IsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        return vkwindowshadow->isSignalConnected(*signal);
    } else {
        return ((VirtualKWindowShadow*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KWindowShadow_QBaseIsSignalConnected(const KWindowShadow* self, const QMetaMethod* signal) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_IsSignalConnected_IsBase(true);
        return vkwindowshadow->isSignalConnected(*signal);
    } else {
        return ((VirtualKWindowShadow*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowShadow_OnIsSignalConnected(const KWindowShadow* self, intptr_t slot) {
    auto* vkwindowshadow = const_cast<VirtualKWindowShadow*>(dynamic_cast<const VirtualKWindowShadow*>(self));
    if (vkwindowshadow && vkwindowshadow->isVirtualKWindowShadow) {
        vkwindowshadow->setKWindowShadow_IsSignalConnected_Callback(reinterpret_cast<VirtualKWindowShadow::KWindowShadow_IsSignalConnected_Callback>(slot));
    }
}

void KWindowShadow_Delete(KWindowShadow* self) {
    delete self;
}
