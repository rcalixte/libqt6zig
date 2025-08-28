#include <KTwoFingerTap>
#include <QChildEvent>
#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <ktwofingertap.h>
#include "libktwofingertap.h"
#include "libktwofingertap.hxx"

KTwoFingerTap* KTwoFingerTap_new() {
    return new VirtualKTwoFingerTap();
}

KTwoFingerTap* KTwoFingerTap_new2(QObject* parent) {
    return new VirtualKTwoFingerTap(parent);
}

QMetaObject* KTwoFingerTap_MetaObject(const KTwoFingerTap* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTwoFingerTap_Metacast(KTwoFingerTap* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTwoFingerTap_Metacall(KTwoFingerTap* self, int param1, int param2, void** param3) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTwoFingerTap*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTwoFingerTap_OnMetacall(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Metacall_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KTwoFingerTap_QBaseMetacall(KTwoFingerTap* self, int param1, int param2, void** param3) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Metacall_IsBase(true);
        return vktwofingertap->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTwoFingerTap*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTwoFingerTap_Tr(const char* s) {
    QString _ret = KTwoFingerTap::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPointF* KTwoFingerTap_Pos(const KTwoFingerTap* self) {
    return new QPointF(self->pos());
}

void KTwoFingerTap_SetPos(KTwoFingerTap* self, QPointF* pos) {
    self->setPos(*pos);
}

QPointF* KTwoFingerTap_ScreenPos(const KTwoFingerTap* self) {
    return new QPointF(self->screenPos());
}

void KTwoFingerTap_SetScreenPos(KTwoFingerTap* self, QPointF* screenPos) {
    self->setScreenPos(*screenPos);
}

QPointF* KTwoFingerTap_ScenePos(const KTwoFingerTap* self) {
    return new QPointF(self->scenePos());
}

void KTwoFingerTap_SetScenePos(KTwoFingerTap* self, QPointF* scenePos) {
    self->setScenePos(*scenePos);
}

libqt_string KTwoFingerTap_Tr2(const char* s, const char* c) {
    QString _ret = KTwoFingerTap::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTwoFingerTap_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTwoFingerTap::tr(s, c, static_cast<int>(n));
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
bool KTwoFingerTap_Event(KTwoFingerTap* self, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return vktwofingertap->event(event);
    } else {
        return self->KTwoFingerTap::event(event);
    }
}

// Base class handler implementation
bool KTwoFingerTap_QBaseEvent(KTwoFingerTap* self, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Event_IsBase(true);
        return vktwofingertap->event(event);
    } else {
        return self->KTwoFingerTap::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnEvent(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Event_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTwoFingerTap_EventFilter(KTwoFingerTap* self, QObject* watched, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return vktwofingertap->eventFilter(watched, event);
    } else {
        return self->KTwoFingerTap::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTwoFingerTap_QBaseEventFilter(KTwoFingerTap* self, QObject* watched, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_EventFilter_IsBase(true);
        return vktwofingertap->eventFilter(watched, event);
    } else {
        return self->KTwoFingerTap::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnEventFilter(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_EventFilter_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerTap_TimerEvent(KTwoFingerTap* self, QTimerEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->timerEvent(event);
    } else {
        ((VirtualKTwoFingerTap*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTwoFingerTap_QBaseTimerEvent(KTwoFingerTap* self, QTimerEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_TimerEvent_IsBase(true);
        vktwofingertap->timerEvent(event);
    } else {
        ((VirtualKTwoFingerTap*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnTimerEvent(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_TimerEvent_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerTap_ChildEvent(KTwoFingerTap* self, QChildEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->childEvent(event);
    } else {
        ((VirtualKTwoFingerTap*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTwoFingerTap_QBaseChildEvent(KTwoFingerTap* self, QChildEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_ChildEvent_IsBase(true);
        vktwofingertap->childEvent(event);
    } else {
        ((VirtualKTwoFingerTap*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnChildEvent(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_ChildEvent_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerTap_CustomEvent(KTwoFingerTap* self, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->customEvent(event);
    } else {
        ((VirtualKTwoFingerTap*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTwoFingerTap_QBaseCustomEvent(KTwoFingerTap* self, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_CustomEvent_IsBase(true);
        vktwofingertap->customEvent(event);
    } else {
        ((VirtualKTwoFingerTap*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnCustomEvent(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_CustomEvent_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerTap_ConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->connectNotify(*signal);
    } else {
        ((VirtualKTwoFingerTap*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTwoFingerTap_QBaseConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_ConnectNotify_IsBase(true);
        vktwofingertap->connectNotify(*signal);
    } else {
        ((VirtualKTwoFingerTap*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnConnectNotify(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_ConnectNotify_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerTap_DisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->disconnectNotify(*signal);
    } else {
        ((VirtualKTwoFingerTap*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTwoFingerTap_QBaseDisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_DisconnectNotify_IsBase(true);
        vktwofingertap->disconnectNotify(*signal);
    } else {
        ((VirtualKTwoFingerTap*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnDisconnectNotify(KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_DisconnectNotify_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTwoFingerTap_Sender(const KTwoFingerTap* self) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return vktwofingertap->sender();
    } else {
        return ((VirtualKTwoFingerTap*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTwoFingerTap_QBaseSender(const KTwoFingerTap* self) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Sender_IsBase(true);
        return vktwofingertap->sender();
    } else {
        return ((VirtualKTwoFingerTap*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnSender(const KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Sender_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTwoFingerTap_SenderSignalIndex(const KTwoFingerTap* self) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return vktwofingertap->senderSignalIndex();
    } else {
        return ((VirtualKTwoFingerTap*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTwoFingerTap_QBaseSenderSignalIndex(const KTwoFingerTap* self) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_SenderSignalIndex_IsBase(true);
        return vktwofingertap->senderSignalIndex();
    } else {
        return ((VirtualKTwoFingerTap*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnSenderSignalIndex(const KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTwoFingerTap_Receivers(const KTwoFingerTap* self, const char* signal) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return vktwofingertap->receivers(signal);
    } else {
        return ((VirtualKTwoFingerTap*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTwoFingerTap_QBaseReceivers(const KTwoFingerTap* self, const char* signal) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Receivers_IsBase(true);
        return vktwofingertap->receivers(signal);
    } else {
        return ((VirtualKTwoFingerTap*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnReceivers(const KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_Receivers_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTwoFingerTap_IsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        return vktwofingertap->isSignalConnected(*signal);
    } else {
        return ((VirtualKTwoFingerTap*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTwoFingerTap_QBaseIsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_IsSignalConnected_IsBase(true);
        return vktwofingertap->isSignalConnected(*signal);
    } else {
        return ((VirtualKTwoFingerTap*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnIsSignalConnected(const KTwoFingerTap* self, intptr_t slot) {
    auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self));
    if (vktwofingertap && vktwofingertap->isVirtualKTwoFingerTap) {
        vktwofingertap->setKTwoFingerTap_IsSignalConnected_Callback(reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_IsSignalConnected_Callback>(slot));
    }
}

void KTwoFingerTap_Delete(KTwoFingerTap* self) {
    delete self;
}

KTwoFingerTapRecognizer* KTwoFingerTapRecognizer_new() {
    return new VirtualKTwoFingerTapRecognizer();
}

QGesture* KTwoFingerTapRecognizer_Create(KTwoFingerTapRecognizer* self, QObject* target) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        return self->create(target);
    } else {
        return ((VirtualKTwoFingerTapRecognizer*)self)->create(target);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTwoFingerTapRecognizer_OnCreate(KTwoFingerTapRecognizer* self, intptr_t slot) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->setKTwoFingerTapRecognizer_Create_Callback(reinterpret_cast<VirtualKTwoFingerTapRecognizer::KTwoFingerTapRecognizer_Create_Callback>(slot));
    }
}

// Virtual base class handler implementation
QGesture* KTwoFingerTapRecognizer_QBaseCreate(KTwoFingerTapRecognizer* self, QObject* target) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->setKTwoFingerTapRecognizer_Create_IsBase(true);
        return vktwofingertaprecognizer->create(target);
    } else {
        return ((VirtualKTwoFingerTapRecognizer*)self)->create(target);
    }
}

int KTwoFingerTapRecognizer_Recognize(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        return static_cast<int>(self->recognize(gesture, watched, event));
    } else {
        return static_cast<int>(((VirtualKTwoFingerTapRecognizer*)self)->recognize(gesture, watched, event));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTwoFingerTapRecognizer_OnRecognize(KTwoFingerTapRecognizer* self, intptr_t slot) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->setKTwoFingerTapRecognizer_Recognize_Callback(reinterpret_cast<VirtualKTwoFingerTapRecognizer::KTwoFingerTapRecognizer_Recognize_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KTwoFingerTapRecognizer_QBaseRecognize(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->setKTwoFingerTapRecognizer_Recognize_IsBase(true);
        return static_cast<int>(vktwofingertaprecognizer->recognize(gesture, watched, event));
    } else {
        return static_cast<int>(((VirtualKTwoFingerTapRecognizer*)self)->recognize(gesture, watched, event));
    }
}

int KTwoFingerTapRecognizer_TapRadius(const KTwoFingerTapRecognizer* self) {
    return self->tapRadius();
}

void KTwoFingerTapRecognizer_SetTapRadius(KTwoFingerTapRecognizer* self, int i) {
    self->setTapRadius(static_cast<int>(i));
}

// Derived class handler implementation
void KTwoFingerTapRecognizer_Reset(KTwoFingerTapRecognizer* self, QGesture* state) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->reset(state);
    } else {
        self->KTwoFingerTapRecognizer::reset(state);
    }
}

// Base class handler implementation
void KTwoFingerTapRecognizer_QBaseReset(KTwoFingerTapRecognizer* self, QGesture* state) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->setKTwoFingerTapRecognizer_Reset_IsBase(true);
        vktwofingertaprecognizer->reset(state);
    } else {
        self->KTwoFingerTapRecognizer::reset(state);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTapRecognizer_OnReset(KTwoFingerTapRecognizer* self, intptr_t slot) {
    auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self);
    if (vktwofingertaprecognizer && vktwofingertaprecognizer->isVirtualKTwoFingerTapRecognizer) {
        vktwofingertaprecognizer->setKTwoFingerTapRecognizer_Reset_Callback(reinterpret_cast<VirtualKTwoFingerTapRecognizer::KTwoFingerTapRecognizer_Reset_Callback>(slot));
    }
}

void KTwoFingerTapRecognizer_Delete(KTwoFingerTapRecognizer* self) {
    delete self;
}
