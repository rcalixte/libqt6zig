#include <KTwoFingerSwipe>
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
#include <ktwofingerswipe.h>
#include "libktwofingerswipe.h"
#include "libktwofingerswipe.hxx"

KTwoFingerSwipe* KTwoFingerSwipe_new() {
    return new VirtualKTwoFingerSwipe();
}

KTwoFingerSwipe* KTwoFingerSwipe_new2(QObject* parent) {
    return new VirtualKTwoFingerSwipe(parent);
}

QMetaObject* KTwoFingerSwipe_MetaObject(const KTwoFingerSwipe* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTwoFingerSwipe_Metacast(KTwoFingerSwipe* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTwoFingerSwipe_Metacall(KTwoFingerSwipe* self, int param1, int param2, void** param3) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTwoFingerSwipe_OnMetacall(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Metacall_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KTwoFingerSwipe_QBaseMetacall(KTwoFingerSwipe* self, int param1, int param2, void** param3) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Metacall_IsBase(true);
        return vktwofingerswipe->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTwoFingerSwipe_Tr(const char* s) {
    QString _ret = KTwoFingerSwipe::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPointF* KTwoFingerSwipe_Pos(const KTwoFingerSwipe* self) {
    return new QPointF(self->pos());
}

void KTwoFingerSwipe_SetPos(KTwoFingerSwipe* self, QPointF* pos) {
    self->setPos(*pos);
}

QPointF* KTwoFingerSwipe_ScreenPos(const KTwoFingerSwipe* self) {
    return new QPointF(self->screenPos());
}

void KTwoFingerSwipe_SetScreenPos(KTwoFingerSwipe* self, QPointF* screenPos) {
    self->setScreenPos(*screenPos);
}

QPointF* KTwoFingerSwipe_ScenePos(const KTwoFingerSwipe* self) {
    return new QPointF(self->scenePos());
}

void KTwoFingerSwipe_SetScenePos(KTwoFingerSwipe* self, QPointF* scenePos) {
    self->setScenePos(*scenePos);
}

double KTwoFingerSwipe_SwipeAngle(const KTwoFingerSwipe* self) {
    return static_cast<double>(self->swipeAngle());
}

void KTwoFingerSwipe_SetSwipeAngle(KTwoFingerSwipe* self, double swipeAngle) {
    self->setSwipeAngle(static_cast<qreal>(swipeAngle));
}

libqt_string KTwoFingerSwipe_Tr2(const char* s, const char* c) {
    QString _ret = KTwoFingerSwipe::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTwoFingerSwipe_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTwoFingerSwipe::tr(s, c, static_cast<int>(n));
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
bool KTwoFingerSwipe_Event(KTwoFingerSwipe* self, QEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return vktwofingerswipe->event(event);
    } else {
        return self->KTwoFingerSwipe::event(event);
    }
}

// Base class handler implementation
bool KTwoFingerSwipe_QBaseEvent(KTwoFingerSwipe* self, QEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Event_IsBase(true);
        return vktwofingerswipe->event(event);
    } else {
        return self->KTwoFingerSwipe::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnEvent(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Event_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTwoFingerSwipe_EventFilter(KTwoFingerSwipe* self, QObject* watched, QEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return vktwofingerswipe->eventFilter(watched, event);
    } else {
        return self->KTwoFingerSwipe::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTwoFingerSwipe_QBaseEventFilter(KTwoFingerSwipe* self, QObject* watched, QEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_EventFilter_IsBase(true);
        return vktwofingerswipe->eventFilter(watched, event);
    } else {
        return self->KTwoFingerSwipe::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnEventFilter(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_EventFilter_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerSwipe_TimerEvent(KTwoFingerSwipe* self, QTimerEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->timerEvent(event);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTwoFingerSwipe_QBaseTimerEvent(KTwoFingerSwipe* self, QTimerEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_TimerEvent_IsBase(true);
        vktwofingerswipe->timerEvent(event);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnTimerEvent(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_TimerEvent_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerSwipe_ChildEvent(KTwoFingerSwipe* self, QChildEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->childEvent(event);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTwoFingerSwipe_QBaseChildEvent(KTwoFingerSwipe* self, QChildEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_ChildEvent_IsBase(true);
        vktwofingerswipe->childEvent(event);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnChildEvent(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_ChildEvent_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerSwipe_CustomEvent(KTwoFingerSwipe* self, QEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->customEvent(event);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTwoFingerSwipe_QBaseCustomEvent(KTwoFingerSwipe* self, QEvent* event) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_CustomEvent_IsBase(true);
        vktwofingerswipe->customEvent(event);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnCustomEvent(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_CustomEvent_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerSwipe_ConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->connectNotify(*signal);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTwoFingerSwipe_QBaseConnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_ConnectNotify_IsBase(true);
        vktwofingerswipe->connectNotify(*signal);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnConnectNotify(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_ConnectNotify_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerSwipe_DisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->disconnectNotify(*signal);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTwoFingerSwipe_QBaseDisconnectNotify(KTwoFingerSwipe* self, const QMetaMethod* signal) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_DisconnectNotify_IsBase(true);
        vktwofingerswipe->disconnectNotify(*signal);
    } else {
        ((VirtualKTwoFingerSwipe*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnDisconnectNotify(KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = dynamic_cast<VirtualKTwoFingerSwipe*>(self);
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_DisconnectNotify_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTwoFingerSwipe_Sender(const KTwoFingerSwipe* self) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return vktwofingerswipe->sender();
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTwoFingerSwipe_QBaseSender(const KTwoFingerSwipe* self) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Sender_IsBase(true);
        return vktwofingerswipe->sender();
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnSender(const KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Sender_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTwoFingerSwipe_SenderSignalIndex(const KTwoFingerSwipe* self) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return vktwofingerswipe->senderSignalIndex();
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTwoFingerSwipe_QBaseSenderSignalIndex(const KTwoFingerSwipe* self) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_SenderSignalIndex_IsBase(true);
        return vktwofingerswipe->senderSignalIndex();
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnSenderSignalIndex(const KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTwoFingerSwipe_Receivers(const KTwoFingerSwipe* self, const char* signal) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return vktwofingerswipe->receivers(signal);
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTwoFingerSwipe_QBaseReceivers(const KTwoFingerSwipe* self, const char* signal) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Receivers_IsBase(true);
        return vktwofingerswipe->receivers(signal);
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnReceivers(const KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_Receivers_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTwoFingerSwipe_IsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        return vktwofingerswipe->isSignalConnected(*signal);
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTwoFingerSwipe_QBaseIsSignalConnected(const KTwoFingerSwipe* self, const QMetaMethod* signal) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_IsSignalConnected_IsBase(true);
        return vktwofingerswipe->isSignalConnected(*signal);
    } else {
        return ((VirtualKTwoFingerSwipe*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipe_OnIsSignalConnected(const KTwoFingerSwipe* self, intptr_t slot) {
    auto* vktwofingerswipe = const_cast<VirtualKTwoFingerSwipe*>(dynamic_cast<const VirtualKTwoFingerSwipe*>(self));
    if (vktwofingerswipe && vktwofingerswipe->isVirtualKTwoFingerSwipe) {
        vktwofingerswipe->setKTwoFingerSwipe_IsSignalConnected_Callback(reinterpret_cast<VirtualKTwoFingerSwipe::KTwoFingerSwipe_IsSignalConnected_Callback>(slot));
    }
}

void KTwoFingerSwipe_Delete(KTwoFingerSwipe* self) {
    delete self;
}

KTwoFingerSwipeRecognizer* KTwoFingerSwipeRecognizer_new() {
    return new VirtualKTwoFingerSwipeRecognizer();
}

int KTwoFingerSwipeRecognizer_MaxSwipeTime(const KTwoFingerSwipeRecognizer* self) {
    return self->maxSwipeTime();
}

void KTwoFingerSwipeRecognizer_SetMaxSwipeTime(KTwoFingerSwipeRecognizer* self, int i) {
    self->setMaxSwipeTime(static_cast<int>(i));
}

int KTwoFingerSwipeRecognizer_MinSswipeDistance(const KTwoFingerSwipeRecognizer* self) {
    return self->minSswipeDistance();
}

void KTwoFingerSwipeRecognizer_SetSwipeDistance(KTwoFingerSwipeRecognizer* self, int i) {
    self->setSwipeDistance(static_cast<int>(i));
}

// Derived class handler implementation
QGesture* KTwoFingerSwipeRecognizer_Create(KTwoFingerSwipeRecognizer* self, QObject* target) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        return vktwofingerswiperecognizer->create(target);
    } else {
        return self->KTwoFingerSwipeRecognizer::create(target);
    }
}

// Base class handler implementation
QGesture* KTwoFingerSwipeRecognizer_QBaseCreate(KTwoFingerSwipeRecognizer* self, QObject* target) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->setKTwoFingerSwipeRecognizer_Create_IsBase(true);
        return vktwofingerswiperecognizer->create(target);
    } else {
        return self->KTwoFingerSwipeRecognizer::create(target);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipeRecognizer_OnCreate(KTwoFingerSwipeRecognizer* self, intptr_t slot) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->setKTwoFingerSwipeRecognizer_Create_Callback(reinterpret_cast<VirtualKTwoFingerSwipeRecognizer::KTwoFingerSwipeRecognizer_Create_Callback>(slot));
    }
}

// Derived class handler implementation
int KTwoFingerSwipeRecognizer_Recognize(KTwoFingerSwipeRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        return static_cast<int>(vktwofingerswiperecognizer->recognize(gesture, watched, event));
    } else {
        return static_cast<int>(self->KTwoFingerSwipeRecognizer::recognize(gesture, watched, event));
    }
}

// Base class handler implementation
int KTwoFingerSwipeRecognizer_QBaseRecognize(KTwoFingerSwipeRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->setKTwoFingerSwipeRecognizer_Recognize_IsBase(true);
        return static_cast<int>(vktwofingerswiperecognizer->recognize(gesture, watched, event));
    } else {
        return static_cast<int>(self->KTwoFingerSwipeRecognizer::recognize(gesture, watched, event));
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipeRecognizer_OnRecognize(KTwoFingerSwipeRecognizer* self, intptr_t slot) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->setKTwoFingerSwipeRecognizer_Recognize_Callback(reinterpret_cast<VirtualKTwoFingerSwipeRecognizer::KTwoFingerSwipeRecognizer_Recognize_Callback>(slot));
    }
}

// Derived class handler implementation
void KTwoFingerSwipeRecognizer_Reset(KTwoFingerSwipeRecognizer* self, QGesture* state) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->reset(state);
    } else {
        self->KTwoFingerSwipeRecognizer::reset(state);
    }
}

// Base class handler implementation
void KTwoFingerSwipeRecognizer_QBaseReset(KTwoFingerSwipeRecognizer* self, QGesture* state) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->setKTwoFingerSwipeRecognizer_Reset_IsBase(true);
        vktwofingerswiperecognizer->reset(state);
    } else {
        self->KTwoFingerSwipeRecognizer::reset(state);
    }
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerSwipeRecognizer_OnReset(KTwoFingerSwipeRecognizer* self, intptr_t slot) {
    auto* vktwofingerswiperecognizer = dynamic_cast<VirtualKTwoFingerSwipeRecognizer*>(self);
    if (vktwofingerswiperecognizer && vktwofingerswiperecognizer->isVirtualKTwoFingerSwipeRecognizer) {
        vktwofingerswiperecognizer->setKTwoFingerSwipeRecognizer_Reset_Callback(reinterpret_cast<VirtualKTwoFingerSwipeRecognizer::KTwoFingerSwipeRecognizer_Reset_Callback>(slot));
    }
}

void KTwoFingerSwipeRecognizer_Delete(KTwoFingerSwipeRecognizer* self) {
    delete self;
}
