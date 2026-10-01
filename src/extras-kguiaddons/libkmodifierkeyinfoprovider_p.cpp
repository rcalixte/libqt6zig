#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSharedData>
#include <QString>
#include <QTimerEvent>
#include <kmodifierkeyinfoprovider_p.h>
#include "libkmodifierkeyinfoprovider_p.h"
#include "libkmodifierkeyinfoprovider_p.hxx"

KModifierKeyInfoProvider* KModifierKeyInfoProvider_new() {
    return new VirtualKModifierKeyInfoProvider();
}

QSharedData* KModifierKeyInfoProvider_AsQSharedData(KModifierKeyInfoProvider* self) {
    return static_cast<QSharedData*>(self);
}

QMetaObject* KModifierKeyInfoProvider_MetaObject(const KModifierKeyInfoProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* KModifierKeyInfoProvider_Metacast(KModifierKeyInfoProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KModifierKeyInfoProvider_Metacall(KModifierKeyInfoProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KModifierKeyInfoProvider_Tr(const char* s) {
    auto _ret = KModifierKeyInfoProvider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KModifierKeyInfoProvider_IsKeyPressed(const KModifierKeyInfoProvider* self, int key) {
    return self->isKeyPressed(static_cast<Qt::Key>(key));
}

bool KModifierKeyInfoProvider_IsKeyLatched(const KModifierKeyInfoProvider* self, int key) {
    return self->isKeyLatched(static_cast<Qt::Key>(key));
}

bool KModifierKeyInfoProvider_SetKeyLatched(KModifierKeyInfoProvider* self, int key, bool latched) {
    return self->setKeyLatched(static_cast<Qt::Key>(key), latched);
}

bool KModifierKeyInfoProvider_IsKeyLocked(const KModifierKeyInfoProvider* self, int key) {
    return self->isKeyLocked(static_cast<Qt::Key>(key));
}

bool KModifierKeyInfoProvider_SetKeyLocked(KModifierKeyInfoProvider* self, int key, bool locked) {
    return self->setKeyLocked(static_cast<Qt::Key>(key), locked);
}

bool KModifierKeyInfoProvider_IsButtonPressed(const KModifierKeyInfoProvider* self, int button) {
    return self->isButtonPressed(static_cast<Qt::MouseButton>(button));
}

bool KModifierKeyInfoProvider_KnowsKey(const KModifierKeyInfoProvider* self, int key) {
    return self->knowsKey(static_cast<Qt::Key>(key));
}

libqt_list /* of int */ KModifierKeyInfoProvider_KnownKeys(const KModifierKeyInfoProvider* self) {
    const QList<Qt::Key> _ret = self->knownKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KModifierKeyInfoProvider_KeyLatched(KModifierKeyInfoProvider* self, int key, bool state) {
    self->keyLatched(static_cast<Qt::Key>(key), state);
}

void KModifierKeyInfoProvider_Connect_KeyLatched(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int, bool)>(slot);
    KModifierKeyInfoProvider::connect(self,
                                      static_cast<void (KModifierKeyInfoProvider::*)(Qt::Key, bool)>(&KModifierKeyInfoProvider::keyLatched),
                                      [self, slotFunc](Qt::Key key, bool state) {
                                          int sigval1 = static_cast<int>(key);
                                          bool sigval2 = state;
                                          slotFunc(self, sigval1, sigval2);
                                      });
}

void KModifierKeyInfoProvider_KeyLocked(KModifierKeyInfoProvider* self, int key, bool state) {
    self->keyLocked(static_cast<Qt::Key>(key), state);
}

void KModifierKeyInfoProvider_Connect_KeyLocked(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int, bool)>(slot);
    KModifierKeyInfoProvider::connect(self,
                                      static_cast<void (KModifierKeyInfoProvider::*)(Qt::Key, bool)>(&KModifierKeyInfoProvider::keyLocked),
                                      [self, slotFunc](Qt::Key key, bool state) {
                                          int sigval1 = static_cast<int>(key);
                                          bool sigval2 = state;
                                          slotFunc(self, sigval1, sigval2);
                                      });
}

void KModifierKeyInfoProvider_KeyPressed(KModifierKeyInfoProvider* self, int key, bool state) {
    self->keyPressed(static_cast<Qt::Key>(key), state);
}

void KModifierKeyInfoProvider_Connect_KeyPressed(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int, bool)>(slot);
    KModifierKeyInfoProvider::connect(self,
                                      static_cast<void (KModifierKeyInfoProvider::*)(Qt::Key, bool)>(&KModifierKeyInfoProvider::keyPressed),
                                      [self, slotFunc](Qt::Key key, bool state) {
                                          int sigval1 = static_cast<int>(key);
                                          bool sigval2 = state;
                                          slotFunc(self, sigval1, sigval2);
                                      });
}

void KModifierKeyInfoProvider_ButtonPressed(KModifierKeyInfoProvider* self, int button, bool state) {
    self->buttonPressed(static_cast<Qt::MouseButton>(button), state);
}

void KModifierKeyInfoProvider_Connect_ButtonPressed(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int, bool)>(slot);
    KModifierKeyInfoProvider::connect(self,
                                      static_cast<void (KModifierKeyInfoProvider::*)(Qt::MouseButton, bool)>(&KModifierKeyInfoProvider::buttonPressed),
                                      [self, slotFunc](Qt::MouseButton button, bool state) {
                                          int sigval1 = static_cast<int>(button);
                                          bool sigval2 = state;
                                          slotFunc(self, sigval1, sigval2);
                                      });
}

void KModifierKeyInfoProvider_KeyAdded(KModifierKeyInfoProvider* self, int key) {
    self->keyAdded(static_cast<Qt::Key>(key));
}

void KModifierKeyInfoProvider_Connect_KeyAdded(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int)>(slot);
    KModifierKeyInfoProvider::connect(self,
                                      static_cast<void (KModifierKeyInfoProvider::*)(Qt::Key)>(&KModifierKeyInfoProvider::keyAdded),
                                      [self, slotFunc](Qt::Key key) {
                                          int sigval1 = static_cast<int>(key);
                                          slotFunc(self, sigval1);
                                      });
}

void KModifierKeyInfoProvider_KeyRemoved(KModifierKeyInfoProvider* self, int key) {
    self->keyRemoved(static_cast<Qt::Key>(key));
}

void KModifierKeyInfoProvider_Connect_KeyRemoved(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int)>(slot);
    KModifierKeyInfoProvider::connect(self,
                                      static_cast<void (KModifierKeyInfoProvider::*)(Qt::Key)>(&KModifierKeyInfoProvider::keyRemoved),
                                      [self, slotFunc](Qt::Key key) {
                                          int sigval1 = static_cast<int>(key);
                                          slotFunc(self, sigval1);
                                      });
}

libqt_string KModifierKeyInfoProvider_Tr2(const char* s, const char* c) {
    auto _ret = KModifierKeyInfoProvider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KModifierKeyInfoProvider_Tr3(const char* s, const char* c, int n) {
    auto _ret = KModifierKeyInfoProvider::tr(s, c, static_cast<int>(n));
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
QMetaObject* KModifierKeyInfoProvider_SuperMetaObject(const KModifierKeyInfoProvider* self) {
    return (QMetaObject*)self->KModifierKeyInfoProvider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnMetaObject(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self)))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_metaobject_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KModifierKeyInfoProvider_SuperMetacast(KModifierKeyInfoProvider* self, const char* param1) {
    return self->KModifierKeyInfoProvider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnMetacast(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_metacast_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Metacast_Callback>(slot);
}

// Base class handler implementation
int KModifierKeyInfoProvider_SuperMetacall(KModifierKeyInfoProvider* self, int param1, int param2, void** param3) {
    return self->KModifierKeyInfoProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnMetacall(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_metacall_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KModifierKeyInfoProvider_SuperSetKeyLatched(KModifierKeyInfoProvider* self, int key, bool latched) {
    return self->KModifierKeyInfoProvider::setKeyLatched(static_cast<Qt::Key>(key), latched);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnSetKeyLatched(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_setkeylatched_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_SetKeyLatched_Callback>(slot);
}

// Base class handler implementation
bool KModifierKeyInfoProvider_SuperSetKeyLocked(KModifierKeyInfoProvider* self, int key, bool locked) {
    return self->KModifierKeyInfoProvider::setKeyLocked(static_cast<Qt::Key>(key), locked);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnSetKeyLocked(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_setkeylocked_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_SetKeyLocked_Callback>(slot);
}

// Derived class handler implementation
bool KModifierKeyInfoProvider_Event(KModifierKeyInfoProvider* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KModifierKeyInfoProvider_SuperEvent(KModifierKeyInfoProvider* self, QEvent* event) {
    return self->KModifierKeyInfoProvider::event(event);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_event_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Event_Callback>(slot);
}

// Derived class handler implementation
bool KModifierKeyInfoProvider_EventFilter(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KModifierKeyInfoProvider_SuperEventFilter(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event) {
    return self->KModifierKeyInfoProvider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnEventFilter(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_eventfilter_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfoProvider_TimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider) {
        vkmodifierkeyinfoprovider->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_SuperTimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self)) {
        vkmodifierkeyinfoprovider->KModifierKeyInfoProvider::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnTimerEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_timerevent_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfoProvider_ChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider) {
        vkmodifierkeyinfoprovider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_SuperChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self)) {
        vkmodifierkeyinfoprovider->KModifierKeyInfoProvider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnChildEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_childevent_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfoProvider_CustomEvent(KModifierKeyInfoProvider* self, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider) {
        vkmodifierkeyinfoprovider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_SuperCustomEvent(KModifierKeyInfoProvider* self, QEvent* event) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self)) {
        vkmodifierkeyinfoprovider->KModifierKeyInfoProvider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnCustomEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_customevent_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfoProvider_ConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider) {
        vkmodifierkeyinfoprovider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_SuperConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self)) {
        vkmodifierkeyinfoprovider->KModifierKeyInfoProvider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnConnectNotify(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_connectnotify_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfoProvider_DisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider) {
        vkmodifierkeyinfoprovider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_SuperDisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self)) {
        vkmodifierkeyinfoprovider->KModifierKeyInfoProvider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfoProvider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnDisconnectNotify(KModifierKeyInfoProvider* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self))
        vkmodifierkeyinfoprovider->kmodifierkeyinfoprovider_disconnectnotify_callback = reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KModifierKeyInfoProvider_StateUpdated(KModifierKeyInfoProvider* self, int key, int state) {
    if (auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self)) {
        vkmodifierkeyinfoprovider->VirtualKModifierKeyInfoProvider::stateUpdated(static_cast<Qt::Key>(key), static_cast<KModifierKeyInfoProvider::ModifierStates>(state));
    } else
        qFatal("Error: Protected method KModifierKeyInfoProvider::stateUpdated called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KModifierKeyInfoProvider_Sender(const KModifierKeyInfoProvider* self) {
    if (auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self))) {
        return vkmodifierkeyinfoprovider->VirtualKModifierKeyInfoProvider::sender();
    } else
        qFatal("Error: Protected method KModifierKeyInfoProvider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KModifierKeyInfoProvider_SenderSignalIndex(const KModifierKeyInfoProvider* self) {
    if (auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self))) {
        return vkmodifierkeyinfoprovider->VirtualKModifierKeyInfoProvider::senderSignalIndex();
    } else
        qFatal("Error: Protected method KModifierKeyInfoProvider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KModifierKeyInfoProvider_Receivers(const KModifierKeyInfoProvider* self, const char* signal) {
    if (auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self))) {
        return vkmodifierkeyinfoprovider->VirtualKModifierKeyInfoProvider::receivers(signal);
    } else
        qFatal("Error: Protected method KModifierKeyInfoProvider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KModifierKeyInfoProvider_IsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    if (auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self))) {
        return vkmodifierkeyinfoprovider->VirtualKModifierKeyInfoProvider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KModifierKeyInfoProvider::isSignalConnected called without a directly constructed type");
}

void KModifierKeyInfoProvider_Delete(KModifierKeyInfoProvider* self) {
    delete self;
}
