#include <KConfigGroup>
#include <KWindowStateSaver>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <kwindowstatesaver.h>
#include "libkwindowstatesaver.h"
#include "libkwindowstatesaver.hxx"

KWindowStateSaver* KWindowStateSaver_new(QWindow* window, const KConfigGroup* configGroup) {
    return new VirtualKWindowStateSaver(window, *configGroup);
}

KWindowStateSaver* KWindowStateSaver_new2(QWindow* window, const libqt_string configGroupName) {
    QString configGroupName_QString = QString::fromUtf8(configGroupName.data, configGroupName.len);
    return new VirtualKWindowStateSaver(window, configGroupName_QString);
}

QMetaObject* KWindowStateSaver_MetaObject(const KWindowStateSaver* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWindowStateSaver_Metacast(KWindowStateSaver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWindowStateSaver_Metacall(KWindowStateSaver* self, int param1, int param2, void** param3) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWindowStateSaver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KWindowStateSaver_OnMetacall(KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Metacall_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KWindowStateSaver_QBaseMetacall(KWindowStateSaver* self, int param1, int param2, void** param3) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Metacall_IsBase(true);
        return vkwindowstatesaver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWindowStateSaver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KWindowStateSaver_Tr(const char* s) {
    QString _ret = KWindowStateSaver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowStateSaver_Tr2(const char* s, const char* c) {
    QString _ret = KWindowStateSaver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowStateSaver_Tr3(const char* s, const char* c, int n) {
    QString _ret = KWindowStateSaver::tr(s, c, static_cast<int>(n));
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
bool KWindowStateSaver_Event(KWindowStateSaver* self, QEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        return vkwindowstatesaver->event(event);
    } else {
        return self->KWindowStateSaver::event(event);
    }
}

// Base class handler implementation
bool KWindowStateSaver_QBaseEvent(KWindowStateSaver* self, QEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Event_IsBase(true);
        return vkwindowstatesaver->event(event);
    } else {
        return self->KWindowStateSaver::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnEvent(KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Event_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowStateSaver_ChildEvent(KWindowStateSaver* self, QChildEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->childEvent(event);
    } else {
        ((VirtualKWindowStateSaver*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KWindowStateSaver_QBaseChildEvent(KWindowStateSaver* self, QChildEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_ChildEvent_IsBase(true);
        vkwindowstatesaver->childEvent(event);
    } else {
        ((VirtualKWindowStateSaver*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnChildEvent(KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_ChildEvent_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowStateSaver_CustomEvent(KWindowStateSaver* self, QEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->customEvent(event);
    } else {
        ((VirtualKWindowStateSaver*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KWindowStateSaver_QBaseCustomEvent(KWindowStateSaver* self, QEvent* event) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_CustomEvent_IsBase(true);
        vkwindowstatesaver->customEvent(event);
    } else {
        ((VirtualKWindowStateSaver*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnCustomEvent(KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_CustomEvent_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowStateSaver_ConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->connectNotify(*signal);
    } else {
        ((VirtualKWindowStateSaver*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KWindowStateSaver_QBaseConnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_ConnectNotify_IsBase(true);
        vkwindowstatesaver->connectNotify(*signal);
    } else {
        ((VirtualKWindowStateSaver*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnConnectNotify(KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_ConnectNotify_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KWindowStateSaver_DisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->disconnectNotify(*signal);
    } else {
        ((VirtualKWindowStateSaver*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KWindowStateSaver_QBaseDisconnectNotify(KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_DisconnectNotify_IsBase(true);
        vkwindowstatesaver->disconnectNotify(*signal);
    } else {
        ((VirtualKWindowStateSaver*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnDisconnectNotify(KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = dynamic_cast<VirtualKWindowStateSaver*>(self);
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_DisconnectNotify_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KWindowStateSaver_Sender(const KWindowStateSaver* self) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        return vkwindowstatesaver->sender();
    } else {
        return ((VirtualKWindowStateSaver*)self)->sender();
    }
}

// Base class handler implementation
QObject* KWindowStateSaver_QBaseSender(const KWindowStateSaver* self) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Sender_IsBase(true);
        return vkwindowstatesaver->sender();
    } else {
        return ((VirtualKWindowStateSaver*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnSender(const KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Sender_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KWindowStateSaver_SenderSignalIndex(const KWindowStateSaver* self) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        return vkwindowstatesaver->senderSignalIndex();
    } else {
        return ((VirtualKWindowStateSaver*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KWindowStateSaver_QBaseSenderSignalIndex(const KWindowStateSaver* self) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_SenderSignalIndex_IsBase(true);
        return vkwindowstatesaver->senderSignalIndex();
    } else {
        return ((VirtualKWindowStateSaver*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnSenderSignalIndex(const KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_SenderSignalIndex_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KWindowStateSaver_Receivers(const KWindowStateSaver* self, const char* signal) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        return vkwindowstatesaver->receivers(signal);
    } else {
        return ((VirtualKWindowStateSaver*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KWindowStateSaver_QBaseReceivers(const KWindowStateSaver* self, const char* signal) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Receivers_IsBase(true);
        return vkwindowstatesaver->receivers(signal);
    } else {
        return ((VirtualKWindowStateSaver*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnReceivers(const KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_Receivers_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWindowStateSaver_IsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        return vkwindowstatesaver->isSignalConnected(*signal);
    } else {
        return ((VirtualKWindowStateSaver*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KWindowStateSaver_QBaseIsSignalConnected(const KWindowStateSaver* self, const QMetaMethod* signal) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_IsSignalConnected_IsBase(true);
        return vkwindowstatesaver->isSignalConnected(*signal);
    } else {
        return ((VirtualKWindowStateSaver*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWindowStateSaver_OnIsSignalConnected(const KWindowStateSaver* self, intptr_t slot) {
    auto* vkwindowstatesaver = const_cast<VirtualKWindowStateSaver*>(dynamic_cast<const VirtualKWindowStateSaver*>(self));
    if (vkwindowstatesaver && vkwindowstatesaver->isVirtualKWindowStateSaver) {
        vkwindowstatesaver->setKWindowStateSaver_IsSignalConnected_Callback(reinterpret_cast<VirtualKWindowStateSaver::KWindowStateSaver_IsSignalConnected_Callback>(slot));
    }
}

void KWindowStateSaver_Delete(KWindowStateSaver* self) {
    delete self;
}
