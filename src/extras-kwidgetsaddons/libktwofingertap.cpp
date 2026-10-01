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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTwoFingerTap_Tr(const char* s) {
    auto _ret = KTwoFingerTap::tr(s);
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
    auto _ret = KTwoFingerTap::tr(s, c);
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
    auto _ret = KTwoFingerTap::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTwoFingerTap_SuperMetaObject(const KTwoFingerTap* self) {
    return (QMetaObject*)self->KTwoFingerTap::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnMetaObject(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self)))
        vktwofingertap->ktwofingertap_metaobject_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTwoFingerTap_SuperMetacast(KTwoFingerTap* self, const char* param1) {
    return self->KTwoFingerTap::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnMetacast(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_metacast_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTwoFingerTap_SuperMetacall(KTwoFingerTap* self, int param1, int param2, void** param3) {
    return self->KTwoFingerTap::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnMetacall(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_metacall_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KTwoFingerTap_Event(KTwoFingerTap* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTwoFingerTap_SuperEvent(KTwoFingerTap* self, QEvent* event) {
    return self->KTwoFingerTap::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnEvent(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_event_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTwoFingerTap_EventFilter(KTwoFingerTap* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTwoFingerTap_SuperEventFilter(KTwoFingerTap* self, QObject* watched, QEvent* event) {
    return self->KTwoFingerTap::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnEventFilter(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_eventfilter_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTwoFingerTap_TimerEvent(KTwoFingerTap* self, QTimerEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap) {
        vktwofingertap->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTwoFingerTap::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTwoFingerTap_SuperTimerEvent(KTwoFingerTap* self, QTimerEvent* event) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self)) {
        vktwofingertap->KTwoFingerTap::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTwoFingerTap::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnTimerEvent(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_timerevent_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTwoFingerTap_ChildEvent(KTwoFingerTap* self, QChildEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap) {
        vktwofingertap->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTwoFingerTap::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTwoFingerTap_SuperChildEvent(KTwoFingerTap* self, QChildEvent* event) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self)) {
        vktwofingertap->KTwoFingerTap::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTwoFingerTap::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnChildEvent(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_childevent_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTwoFingerTap_CustomEvent(KTwoFingerTap* self, QEvent* event) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap) {
        vktwofingertap->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTwoFingerTap::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTwoFingerTap_SuperCustomEvent(KTwoFingerTap* self, QEvent* event) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self)) {
        vktwofingertap->KTwoFingerTap::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTwoFingerTap::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnCustomEvent(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_customevent_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTwoFingerTap_ConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap) {
        vktwofingertap->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTwoFingerTap::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTwoFingerTap_SuperConnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self)) {
        vktwofingertap->KTwoFingerTap::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTwoFingerTap::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnConnectNotify(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_connectnotify_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTwoFingerTap_DisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self);
    if (vktwofingertap) {
        vktwofingertap->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTwoFingerTap::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTwoFingerTap_SuperDisconnectNotify(KTwoFingerTap* self, const QMetaMethod* signal) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self)) {
        vktwofingertap->KTwoFingerTap::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTwoFingerTap::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTap_OnDisconnectNotify(KTwoFingerTap* self, intptr_t slot) {
    if (auto* vktwofingertap = dynamic_cast<VirtualKTwoFingerTap*>(self))
        vktwofingertap->ktwofingertap_disconnectnotify_callback = reinterpret_cast<VirtualKTwoFingerTap::KTwoFingerTap_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KTwoFingerTap_Sender(const KTwoFingerTap* self) {
    if (auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self))) {
        return vktwofingertap->VirtualKTwoFingerTap::sender();
    } else
        qFatal("Error: Protected method KTwoFingerTap::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTwoFingerTap_SenderSignalIndex(const KTwoFingerTap* self) {
    if (auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self))) {
        return vktwofingertap->VirtualKTwoFingerTap::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTwoFingerTap::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTwoFingerTap_Receivers(const KTwoFingerTap* self, const char* signal) {
    if (auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self))) {
        return vktwofingertap->VirtualKTwoFingerTap::receivers(signal);
    } else
        qFatal("Error: Protected method KTwoFingerTap::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTwoFingerTap_IsSignalConnected(const KTwoFingerTap* self, const QMetaMethod* signal) {
    if (auto* vktwofingertap = const_cast<VirtualKTwoFingerTap*>(dynamic_cast<const VirtualKTwoFingerTap*>(self))) {
        return vktwofingertap->VirtualKTwoFingerTap::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTwoFingerTap::isSignalConnected called without a directly constructed type");
}

void KTwoFingerTap_Delete(KTwoFingerTap* self) {
    delete self;
}

KTwoFingerTapRecognizer* KTwoFingerTapRecognizer_new() {
    return new VirtualKTwoFingerTapRecognizer();
}

QGesture* KTwoFingerTapRecognizer_Create(KTwoFingerTapRecognizer* self, QObject* target) {
    return self->create(target);
}

int KTwoFingerTapRecognizer_Recognize(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event) {
    return static_cast<int>(self->recognize(gesture, watched, event));
}

int KTwoFingerTapRecognizer_TapRadius(const KTwoFingerTapRecognizer* self) {
    return self->tapRadius();
}

void KTwoFingerTapRecognizer_SetTapRadius(KTwoFingerTapRecognizer* self, int i) {
    self->setTapRadius(static_cast<int>(i));
}

// Base class handler implementation
QGesture* KTwoFingerTapRecognizer_SuperCreate(KTwoFingerTapRecognizer* self, QObject* target) {
    return self->KTwoFingerTapRecognizer::create(target);
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTapRecognizer_OnCreate(KTwoFingerTapRecognizer* self, intptr_t slot) {
    if (auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self))
        vktwofingertaprecognizer->ktwofingertaprecognizer_create_callback = reinterpret_cast<VirtualKTwoFingerTapRecognizer::KTwoFingerTapRecognizer_Create_Callback>(slot);
}

// Base class handler implementation
int KTwoFingerTapRecognizer_SuperRecognize(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event) {
    return static_cast<int>(self->KTwoFingerTapRecognizer::recognize(gesture, watched, event));
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTapRecognizer_OnRecognize(KTwoFingerTapRecognizer* self, intptr_t slot) {
    if (auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self))
        vktwofingertaprecognizer->ktwofingertaprecognizer_recognize_callback = reinterpret_cast<VirtualKTwoFingerTapRecognizer::KTwoFingerTapRecognizer_Recognize_Callback>(slot);
}

// Derived class handler implementation
void KTwoFingerTapRecognizer_Reset(KTwoFingerTapRecognizer* self, QGesture* state) {
    self->reset(state);
}

// Base class handler implementation
void KTwoFingerTapRecognizer_SuperReset(KTwoFingerTapRecognizer* self, QGesture* state) {
    self->KTwoFingerTapRecognizer::reset(state);
}

// Auxiliary method to allow providing re-implementation
void KTwoFingerTapRecognizer_OnReset(KTwoFingerTapRecognizer* self, intptr_t slot) {
    if (auto* vktwofingertaprecognizer = dynamic_cast<VirtualKTwoFingerTapRecognizer*>(self))
        vktwofingertaprecognizer->ktwofingertaprecognizer_reset_callback = reinterpret_cast<VirtualKTwoFingerTapRecognizer::KTwoFingerTapRecognizer_Reset_Callback>(slot);
}

void KTwoFingerTapRecognizer_Delete(KTwoFingerTapRecognizer* self) {
    delete self;
}
