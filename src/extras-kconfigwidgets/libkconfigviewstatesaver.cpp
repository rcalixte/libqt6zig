#include <KConfigGroup>
#include <KConfigViewStateSaver>
#include <KViewStateSerializer>
#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kconfigviewstatesaver.h>
#include "libkconfigviewstatesaver.h"
#include "libkconfigviewstatesaver.hxx"

KConfigViewStateSaver* KConfigViewStateSaver_new() {
    return new VirtualKConfigViewStateSaver();
}

KConfigViewStateSaver* KConfigViewStateSaver_new2(QObject* parent) {
    return new VirtualKConfigViewStateSaver(parent);
}

QMetaObject* KConfigViewStateSaver_MetaObject(const KConfigViewStateSaver* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigViewStateSaver_Metacast(KConfigViewStateSaver* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigViewStateSaver_Metacall(KConfigViewStateSaver* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KConfigViewStateSaver_Tr(const char* s) {
    auto _ret = KConfigViewStateSaver::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigViewStateSaver_SaveState(KConfigViewStateSaver* self, KConfigGroup* configGroup) {
    self->saveState(*configGroup);
}

void KConfigViewStateSaver_RestoreState(KConfigViewStateSaver* self, const KConfigGroup* configGroup) {
    self->restoreState(*configGroup);
}

libqt_string KConfigViewStateSaver_Tr2(const char* s, const char* c) {
    auto _ret = KConfigViewStateSaver::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigViewStateSaver_Tr3(const char* s, const char* c, int n) {
    auto _ret = KConfigViewStateSaver::tr(s, c, static_cast<int>(n));
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
QMetaObject* KConfigViewStateSaver_SuperMetaObject(const KConfigViewStateSaver* self) {
    return (QMetaObject*)self->KConfigViewStateSaver::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnMetaObject(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self)))
        vkconfigviewstatesaver->kconfigviewstatesaver_metaobject_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KConfigViewStateSaver_SuperMetacast(KConfigViewStateSaver* self, const char* param1) {
    return self->KConfigViewStateSaver::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnMetacast(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_metacast_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Metacast_Callback>(slot);
}

// Base class handler implementation
int KConfigViewStateSaver_SuperMetacall(KConfigViewStateSaver* self, int param1, int param2, void** param3) {
    return self->KConfigViewStateSaver::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnMetacall(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_metacall_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Metacall_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KConfigViewStateSaver_IndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QModelIndex((self->*&VirtualKConfigViewStateSaver::Base::indexFromConfigString)(model, key_QString));
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnIndexFromConfigString(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self)))
        vkconfigviewstatesaver->kconfigviewstatesaver_indexfromconfigstring_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_IndexFromConfigString_Callback>(slot);
}

// Derived class handler implementation
libqt_string KConfigViewStateSaver_IndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver) {
        auto _ret = vkconfigviewstatesaver->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        auto _ret = ((self->*&VirtualKConfigViewStateSaver::Base::indexToConfigString)(*index));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnIndexToConfigString(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self)))
        vkconfigviewstatesaver->kconfigviewstatesaver_indextoconfigstring_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_IndexToConfigString_Callback>(slot);
}

// Derived class handler implementation
bool KConfigViewStateSaver_Event(KConfigViewStateSaver* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KConfigViewStateSaver_SuperEvent(KConfigViewStateSaver* self, QEvent* event) {
    return self->KConfigViewStateSaver::event(event);
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnEvent(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_event_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Event_Callback>(slot);
}

// Derived class handler implementation
bool KConfigViewStateSaver_EventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KConfigViewStateSaver_SuperEventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event) {
    return self->KConfigViewStateSaver::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnEventFilter(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_eventfilter_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KConfigViewStateSaver_TimerEvent(KConfigViewStateSaver* self, QTimerEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver) {
        vkconfigviewstatesaver->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigViewStateSaver::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigViewStateSaver_SuperTimerEvent(KConfigViewStateSaver* self, QTimerEvent* event) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self)) {
        vkconfigviewstatesaver->KConfigViewStateSaver::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigViewStateSaver::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnTimerEvent(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_timerevent_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigViewStateSaver_ChildEvent(KConfigViewStateSaver* self, QChildEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver) {
        vkconfigviewstatesaver->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigViewStateSaver::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigViewStateSaver_SuperChildEvent(KConfigViewStateSaver* self, QChildEvent* event) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self)) {
        vkconfigviewstatesaver->KConfigViewStateSaver::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigViewStateSaver::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnChildEvent(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_childevent_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigViewStateSaver_CustomEvent(KConfigViewStateSaver* self, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver) {
        vkconfigviewstatesaver->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigViewStateSaver::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigViewStateSaver_SuperCustomEvent(KConfigViewStateSaver* self, QEvent* event) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self)) {
        vkconfigviewstatesaver->KConfigViewStateSaver::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigViewStateSaver::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnCustomEvent(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_customevent_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigViewStateSaver_ConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver) {
        vkconfigviewstatesaver->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigViewStateSaver::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigViewStateSaver_SuperConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self)) {
        vkconfigviewstatesaver->KConfigViewStateSaver::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigViewStateSaver::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnConnectNotify(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_connectnotify_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KConfigViewStateSaver_DisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver) {
        vkconfigviewstatesaver->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigViewStateSaver::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigViewStateSaver_SuperDisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self)) {
        vkconfigviewstatesaver->KConfigViewStateSaver::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigViewStateSaver::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnDisconnectNotify(KConfigViewStateSaver* self, intptr_t slot) {
    if (auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self))
        vkconfigviewstatesaver->kconfigviewstatesaver_disconnectnotify_callback = reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KConfigViewStateSaver_Sender(const KConfigViewStateSaver* self) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self))) {
        return vkconfigviewstatesaver->VirtualKConfigViewStateSaver::sender();
    } else
        qFatal("Error: Protected method KConfigViewStateSaver::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigViewStateSaver_SenderSignalIndex(const KConfigViewStateSaver* self) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self))) {
        return vkconfigviewstatesaver->VirtualKConfigViewStateSaver::senderSignalIndex();
    } else
        qFatal("Error: Protected method KConfigViewStateSaver::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigViewStateSaver_Receivers(const KConfigViewStateSaver* self, const char* signal) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self))) {
        return vkconfigviewstatesaver->VirtualKConfigViewStateSaver::receivers(signal);
    } else
        qFatal("Error: Protected method KConfigViewStateSaver::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigViewStateSaver_IsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal) {
    if (auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self))) {
        return vkconfigviewstatesaver->VirtualKConfigViewStateSaver::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KConfigViewStateSaver::isSignalConnected called without a directly constructed type");
}

void KConfigViewStateSaver_Delete(KConfigViewStateSaver* self) {
    delete self;
}
