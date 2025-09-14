#include <KCoreDirLister>
#include <KDirLister>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ListJob
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <kdirlister.h>
#include "libkdirlister.h"
#include "libkdirlister.hxx"

KDirLister* KDirLister_new() {
    return new VirtualKDirLister();
}

KDirLister* KDirLister_new2(QObject* parent) {
    return new VirtualKDirLister(parent);
}

QMetaObject* KDirLister_MetaObject(const KDirLister* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDirLister_Metacast(KDirLister* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDirLister_Metacall(KDirLister* self, int param1, int param2, void** param3) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDirLister*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDirLister_Tr(const char* s) {
    QString _ret = KDirLister::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDirLister_AutoErrorHandlingEnabled(const KDirLister* self) {
    return self->autoErrorHandlingEnabled();
}

void KDirLister_SetMainWindow(KDirLister* self, QWidget* window) {
    self->setMainWindow(window);
}

QWidget* KDirLister_MainWindow(KDirLister* self) {
    return self->mainWindow();
}

void KDirLister_JobStarted(KDirLister* self, KIO__ListJob* param1) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->jobStarted(param1);
    }
}

libqt_string KDirLister_Tr2(const char* s, const char* c) {
    QString _ret = KDirLister::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirLister_Tr3(const char* s, const char* c, int n) {
    QString _ret = KDirLister::tr(s, c, static_cast<int>(n));
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
int KDirLister_QBaseMetacall(KDirLister* self, int param1, int param2, void** param3) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Metacall_IsBase(true);
        return vkdirlister->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDirLister::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnMetacall(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Metacall_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KDirLister_QBaseJobStarted(KDirLister* self, KIO__ListJob* param1) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_JobStarted_IsBase(true);
        vkdirlister->jobStarted(param1);
    } else {
        ((VirtualKDirLister*)self)->jobStarted(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnJobStarted(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_JobStarted_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_JobStarted_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirLister_Event(KDirLister* self, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return vkdirlister->event(event);
    } else {
        return self->KDirLister::event(event);
    }
}

// Base class handler implementation
bool KDirLister_QBaseEvent(KDirLister* self, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Event_IsBase(true);
        return vkdirlister->event(event);
    } else {
        return self->KDirLister::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnEvent(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Event_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirLister_EventFilter(KDirLister* self, QObject* watched, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return vkdirlister->eventFilter(watched, event);
    } else {
        return self->KDirLister::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDirLister_QBaseEventFilter(KDirLister* self, QObject* watched, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_EventFilter_IsBase(true);
        return vkdirlister->eventFilter(watched, event);
    } else {
        return self->KDirLister::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnEventFilter(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_EventFilter_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirLister_TimerEvent(KDirLister* self, QTimerEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->timerEvent(event);
    } else {
        ((VirtualKDirLister*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDirLister_QBaseTimerEvent(KDirLister* self, QTimerEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_TimerEvent_IsBase(true);
        vkdirlister->timerEvent(event);
    } else {
        ((VirtualKDirLister*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnTimerEvent(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_TimerEvent_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirLister_ChildEvent(KDirLister* self, QChildEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->childEvent(event);
    } else {
        ((VirtualKDirLister*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDirLister_QBaseChildEvent(KDirLister* self, QChildEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_ChildEvent_IsBase(true);
        vkdirlister->childEvent(event);
    } else {
        ((VirtualKDirLister*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnChildEvent(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_ChildEvent_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirLister_CustomEvent(KDirLister* self, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->customEvent(event);
    } else {
        ((VirtualKDirLister*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDirLister_QBaseCustomEvent(KDirLister* self, QEvent* event) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_CustomEvent_IsBase(true);
        vkdirlister->customEvent(event);
    } else {
        ((VirtualKDirLister*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnCustomEvent(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_CustomEvent_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirLister_ConnectNotify(KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->connectNotify(*signal);
    } else {
        ((VirtualKDirLister*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDirLister_QBaseConnectNotify(KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_ConnectNotify_IsBase(true);
        vkdirlister->connectNotify(*signal);
    } else {
        ((VirtualKDirLister*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnConnectNotify(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_ConnectNotify_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirLister_DisconnectNotify(KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->disconnectNotify(*signal);
    } else {
        ((VirtualKDirLister*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDirLister_QBaseDisconnectNotify(KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_DisconnectNotify_IsBase(true);
        vkdirlister->disconnectNotify(*signal);
    } else {
        ((VirtualKDirLister*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnDisconnectNotify(KDirLister* self, intptr_t slot) {
    auto* vkdirlister = dynamic_cast<VirtualKDirLister*>(self);
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_DisconnectNotify_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDirLister_Sender(const KDirLister* self) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return vkdirlister->sender();
    } else {
        return ((VirtualKDirLister*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDirLister_QBaseSender(const KDirLister* self) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Sender_IsBase(true);
        return vkdirlister->sender();
    } else {
        return ((VirtualKDirLister*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnSender(const KDirLister* self, intptr_t slot) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Sender_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirLister_SenderSignalIndex(const KDirLister* self) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return vkdirlister->senderSignalIndex();
    } else {
        return ((VirtualKDirLister*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDirLister_QBaseSenderSignalIndex(const KDirLister* self) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_SenderSignalIndex_IsBase(true);
        return vkdirlister->senderSignalIndex();
    } else {
        return ((VirtualKDirLister*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnSenderSignalIndex(const KDirLister* self, intptr_t slot) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirLister_Receivers(const KDirLister* self, const char* signal) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return vkdirlister->receivers(signal);
    } else {
        return ((VirtualKDirLister*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDirLister_QBaseReceivers(const KDirLister* self, const char* signal) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Receivers_IsBase(true);
        return vkdirlister->receivers(signal);
    } else {
        return ((VirtualKDirLister*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnReceivers(const KDirLister* self, intptr_t slot) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_Receivers_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirLister_IsSignalConnected(const KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        return vkdirlister->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirLister*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDirLister_QBaseIsSignalConnected(const KDirLister* self, const QMetaMethod* signal) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_IsSignalConnected_IsBase(true);
        return vkdirlister->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirLister*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirLister_OnIsSignalConnected(const KDirLister* self, intptr_t slot) {
    auto* vkdirlister = const_cast<VirtualKDirLister*>(dynamic_cast<const VirtualKDirLister*>(self));
    if (vkdirlister && vkdirlister->isVirtualKDirLister) {
        vkdirlister->setKDirLister_IsSignalConnected_Callback(reinterpret_cast<VirtualKDirLister::KDirLister_IsSignalConnected_Callback>(slot));
    }
}

void KDirLister_Delete(KDirLister* self) {
    delete self;
}
