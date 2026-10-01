#include <KColumnResizer>
#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColumnResizer_Tr(const char* s) {
    auto _ret = KColumnResizer::tr(s);
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
    if (vkcolumnresizer) {
        return vkcolumnresizer->eventFilter(param1, event);
    }
    qFatal("Error: Protected method KColumnResizer::eventFilter called without a directly constructed type");
}

libqt_string KColumnResizer_Tr2(const char* s, const char* c) {
    auto _ret = KColumnResizer::tr(s, c);
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
    auto _ret = KColumnResizer::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColumnResizer_SuperMetaObject(const KColumnResizer* self) {
    return (QMetaObject*)self->KColumnResizer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnMetaObject(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self)))
        vkcolumnresizer->kcolumnresizer_metaobject_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColumnResizer_SuperMetacast(KColumnResizer* self, const char* param1) {
    return self->KColumnResizer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnMetacast(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_metacast_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColumnResizer_SuperMetacall(KColumnResizer* self, int param1, int param2, void** param3) {
    return self->KColumnResizer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnMetacall(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_metacall_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KColumnResizer_SuperEventFilter(KColumnResizer* self, QObject* param1, QEvent* event) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self)) {
        return vkcolumnresizer->KColumnResizer::eventFilter(param1, event);
    } else
        qFatal("Error: Protected virtual method KColumnResizer::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnEventFilter(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_eventfilter_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KColumnResizer_Event(KColumnResizer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KColumnResizer_SuperEvent(KColumnResizer* self, QEvent* event) {
    return self->KColumnResizer::event(event);
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnEvent(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_event_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_Event_Callback>(slot);
}

// Derived class handler implementation
void KColumnResizer_TimerEvent(KColumnResizer* self, QTimerEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer) {
        vkcolumnresizer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColumnResizer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnResizer_SuperTimerEvent(KColumnResizer* self, QTimerEvent* event) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self)) {
        vkcolumnresizer->KColumnResizer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KColumnResizer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnTimerEvent(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_timerevent_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KColumnResizer_ChildEvent(KColumnResizer* self, QChildEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer) {
        vkcolumnresizer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColumnResizer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnResizer_SuperChildEvent(KColumnResizer* self, QChildEvent* event) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self)) {
        vkcolumnresizer->KColumnResizer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColumnResizer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnChildEvent(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_childevent_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColumnResizer_CustomEvent(KColumnResizer* self, QEvent* event) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer) {
        vkcolumnresizer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColumnResizer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnResizer_SuperCustomEvent(KColumnResizer* self, QEvent* event) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self)) {
        vkcolumnresizer->KColumnResizer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColumnResizer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnCustomEvent(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_customevent_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColumnResizer_ConnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer) {
        vkcolumnresizer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColumnResizer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnResizer_SuperConnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self)) {
        vkcolumnresizer->KColumnResizer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColumnResizer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnConnectNotify(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_connectnotify_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColumnResizer_DisconnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self);
    if (vkcolumnresizer) {
        vkcolumnresizer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColumnResizer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColumnResizer_SuperDisconnectNotify(KColumnResizer* self, const QMetaMethod* signal) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self)) {
        vkcolumnresizer->KColumnResizer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColumnResizer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColumnResizer_OnDisconnectNotify(KColumnResizer* self, intptr_t slot) {
    if (auto* vkcolumnresizer = dynamic_cast<VirtualKColumnResizer*>(self))
        vkcolumnresizer->kcolumnresizer_disconnectnotify_callback = reinterpret_cast<VirtualKColumnResizer::KColumnResizer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KColumnResizer_Sender(const KColumnResizer* self) {
    if (auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self))) {
        return vkcolumnresizer->VirtualKColumnResizer::sender();
    } else
        qFatal("Error: Protected method KColumnResizer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColumnResizer_SenderSignalIndex(const KColumnResizer* self) {
    if (auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self))) {
        return vkcolumnresizer->VirtualKColumnResizer::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColumnResizer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColumnResizer_Receivers(const KColumnResizer* self, const char* signal) {
    if (auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self))) {
        return vkcolumnresizer->VirtualKColumnResizer::receivers(signal);
    } else
        qFatal("Error: Protected method KColumnResizer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColumnResizer_IsSignalConnected(const KColumnResizer* self, const QMetaMethod* signal) {
    if (auto* vkcolumnresizer = const_cast<VirtualKColumnResizer*>(dynamic_cast<const VirtualKColumnResizer*>(self))) {
        return vkcolumnresizer->VirtualKColumnResizer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColumnResizer::isSignalConnected called without a directly constructed type");
}

void KColumnResizer_Delete(KColumnResizer* self) {
    delete self;
}
