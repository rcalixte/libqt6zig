#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSharedData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kmodifierkeyinfoprovider_p.h>
#include "libkmodifierkeyinfoprovider_p.h"
#include "libkmodifierkeyinfoprovider_p.hxx"

KModifierKeyInfoProvider* KModifierKeyInfoProvider_new() {
    return new VirtualKModifierKeyInfoProvider();
}

QMetaObject* KModifierKeyInfoProvider_MetaObject(const KModifierKeyInfoProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* KModifierKeyInfoProvider_Metacast(KModifierKeyInfoProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KModifierKeyInfoProvider_Metacall(KModifierKeyInfoProvider* self, int param1, int param2, void** param3) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KModifierKeyInfoProvider_OnMetacall(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Metacall_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KModifierKeyInfoProvider_QBaseMetacall(KModifierKeyInfoProvider* self, int param1, int param2, void** param3) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Metacall_IsBase(true);
        return vkmodifierkeyinfoprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KModifierKeyInfoProvider_Tr(const char* s) {
    QString _ret = KModifierKeyInfoProvider::tr(s);
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

bool KModifierKeyInfoProvider_IsKeyLocked(const KModifierKeyInfoProvider* self, int key) {
    return self->isKeyLocked(static_cast<Qt::Key>(key));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
    KModifierKeyInfoProvider::connect(self, &KModifierKeyInfoProvider::keyLatched, [self, slotFunc](Qt::Key key, bool state) {
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
    KModifierKeyInfoProvider::connect(self, &KModifierKeyInfoProvider::keyLocked, [self, slotFunc](Qt::Key key, bool state) {
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
    KModifierKeyInfoProvider::connect(self, &KModifierKeyInfoProvider::keyPressed, [self, slotFunc](Qt::Key key, bool state) {
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
    KModifierKeyInfoProvider::connect(self, &KModifierKeyInfoProvider::buttonPressed, [self, slotFunc](Qt::MouseButton button, bool state) {
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
    KModifierKeyInfoProvider::connect(self, &KModifierKeyInfoProvider::keyAdded, [self, slotFunc](Qt::Key key) {
        int sigval1 = static_cast<int>(key);
        slotFunc(self, sigval1);
    });
}

void KModifierKeyInfoProvider_KeyRemoved(KModifierKeyInfoProvider* self, int key) {
    self->keyRemoved(static_cast<Qt::Key>(key));
}

void KModifierKeyInfoProvider_Connect_KeyRemoved(KModifierKeyInfoProvider* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfoProvider*, int) = reinterpret_cast<void (*)(KModifierKeyInfoProvider*, int)>(slot);
    KModifierKeyInfoProvider::connect(self, &KModifierKeyInfoProvider::keyRemoved, [self, slotFunc](Qt::Key key) {
        int sigval1 = static_cast<int>(key);
        slotFunc(self, sigval1);
    });
}

libqt_string KModifierKeyInfoProvider_Tr2(const char* s, const char* c) {
    QString _ret = KModifierKeyInfoProvider::tr(s, c);
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
    QString _ret = KModifierKeyInfoProvider::tr(s, c, static_cast<int>(n));
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
bool KModifierKeyInfoProvider_SetKeyLatched(KModifierKeyInfoProvider* self, int key, bool latched) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->setKeyLatched(static_cast<Qt::Key>(key), latched);
    } else {
        return self->KModifierKeyInfoProvider::setKeyLatched(static_cast<Qt::Key>(key), latched);
    }
}

// Base class handler implementation
bool KModifierKeyInfoProvider_QBaseSetKeyLatched(KModifierKeyInfoProvider* self, int key, bool latched) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_SetKeyLatched_IsBase(true);
        return vkmodifierkeyinfoprovider->setKeyLatched(static_cast<Qt::Key>(key), latched);
    } else {
        return self->KModifierKeyInfoProvider::setKeyLatched(static_cast<Qt::Key>(key), latched);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnSetKeyLatched(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_SetKeyLatched_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_SetKeyLatched_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModifierKeyInfoProvider_SetKeyLocked(KModifierKeyInfoProvider* self, int key, bool locked) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->setKeyLocked(static_cast<Qt::Key>(key), locked);
    } else {
        return self->KModifierKeyInfoProvider::setKeyLocked(static_cast<Qt::Key>(key), locked);
    }
}

// Base class handler implementation
bool KModifierKeyInfoProvider_QBaseSetKeyLocked(KModifierKeyInfoProvider* self, int key, bool locked) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_SetKeyLocked_IsBase(true);
        return vkmodifierkeyinfoprovider->setKeyLocked(static_cast<Qt::Key>(key), locked);
    } else {
        return self->KModifierKeyInfoProvider::setKeyLocked(static_cast<Qt::Key>(key), locked);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnSetKeyLocked(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_SetKeyLocked_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_SetKeyLocked_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModifierKeyInfoProvider_Event(KModifierKeyInfoProvider* self, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->event(event);
    } else {
        return self->KModifierKeyInfoProvider::event(event);
    }
}

// Base class handler implementation
bool KModifierKeyInfoProvider_QBaseEvent(KModifierKeyInfoProvider* self, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Event_IsBase(true);
        return vkmodifierkeyinfoprovider->event(event);
    } else {
        return self->KModifierKeyInfoProvider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Event_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModifierKeyInfoProvider_EventFilter(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->eventFilter(watched, event);
    } else {
        return self->KModifierKeyInfoProvider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KModifierKeyInfoProvider_QBaseEventFilter(KModifierKeyInfoProvider* self, QObject* watched, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_EventFilter_IsBase(true);
        return vkmodifierkeyinfoprovider->eventFilter(watched, event);
    } else {
        return self->KModifierKeyInfoProvider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnEventFilter(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_EventFilter_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KModifierKeyInfoProvider_TimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->timerEvent(event);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_QBaseTimerEvent(KModifierKeyInfoProvider* self, QTimerEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_TimerEvent_IsBase(true);
        vkmodifierkeyinfoprovider->timerEvent(event);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnTimerEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_TimerEvent_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KModifierKeyInfoProvider_ChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->childEvent(event);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_QBaseChildEvent(KModifierKeyInfoProvider* self, QChildEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_ChildEvent_IsBase(true);
        vkmodifierkeyinfoprovider->childEvent(event);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnChildEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_ChildEvent_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KModifierKeyInfoProvider_CustomEvent(KModifierKeyInfoProvider* self, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->customEvent(event);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_QBaseCustomEvent(KModifierKeyInfoProvider* self, QEvent* event) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_CustomEvent_IsBase(true);
        vkmodifierkeyinfoprovider->customEvent(event);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnCustomEvent(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_CustomEvent_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KModifierKeyInfoProvider_ConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->connectNotify(*signal);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_QBaseConnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_ConnectNotify_IsBase(true);
        vkmodifierkeyinfoprovider->connectNotify(*signal);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnConnectNotify(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_ConnectNotify_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KModifierKeyInfoProvider_DisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_QBaseDisconnectNotify(KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_DisconnectNotify_IsBase(true);
        vkmodifierkeyinfoprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnDisconnectNotify(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_DisconnectNotify_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KModifierKeyInfoProvider_StateUpdated(KModifierKeyInfoProvider* self, int key, int state) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->stateUpdated(static_cast<Qt::Key>(key), static_cast<KModifierKeyInfoProvider::ModifierStates>(state));
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->stateUpdated(static_cast<Qt::Key>(key), static_cast<KModifierKeyInfoProvider::ModifierStates>(state));
    }
}

// Base class handler implementation
void KModifierKeyInfoProvider_QBaseStateUpdated(KModifierKeyInfoProvider* self, int key, int state) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_StateUpdated_IsBase(true);
        vkmodifierkeyinfoprovider->stateUpdated(static_cast<Qt::Key>(key), static_cast<KModifierKeyInfoProvider::ModifierStates>(state));
    } else {
        ((VirtualKModifierKeyInfoProvider*)self)->stateUpdated(static_cast<Qt::Key>(key), static_cast<KModifierKeyInfoProvider::ModifierStates>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnStateUpdated(KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = dynamic_cast<VirtualKModifierKeyInfoProvider*>(self);
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_StateUpdated_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_StateUpdated_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KModifierKeyInfoProvider_Sender(const KModifierKeyInfoProvider* self) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->sender();
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* KModifierKeyInfoProvider_QBaseSender(const KModifierKeyInfoProvider* self) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Sender_IsBase(true);
        return vkmodifierkeyinfoprovider->sender();
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnSender(const KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Sender_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KModifierKeyInfoProvider_SenderSignalIndex(const KModifierKeyInfoProvider* self) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->senderSignalIndex();
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KModifierKeyInfoProvider_QBaseSenderSignalIndex(const KModifierKeyInfoProvider* self) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_SenderSignalIndex_IsBase(true);
        return vkmodifierkeyinfoprovider->senderSignalIndex();
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnSenderSignalIndex(const KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_SenderSignalIndex_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KModifierKeyInfoProvider_Receivers(const KModifierKeyInfoProvider* self, const char* signal) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->receivers(signal);
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KModifierKeyInfoProvider_QBaseReceivers(const KModifierKeyInfoProvider* self, const char* signal) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Receivers_IsBase(true);
        return vkmodifierkeyinfoprovider->receivers(signal);
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnReceivers(const KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_Receivers_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KModifierKeyInfoProvider_IsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        return vkmodifierkeyinfoprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KModifierKeyInfoProvider_QBaseIsSignalConnected(const KModifierKeyInfoProvider* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_IsSignalConnected_IsBase(true);
        return vkmodifierkeyinfoprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKModifierKeyInfoProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfoProvider_OnIsSignalConnected(const KModifierKeyInfoProvider* self, intptr_t slot) {
    auto* vkmodifierkeyinfoprovider = const_cast<VirtualKModifierKeyInfoProvider*>(dynamic_cast<const VirtualKModifierKeyInfoProvider*>(self));
    if (vkmodifierkeyinfoprovider && vkmodifierkeyinfoprovider->isVirtualKModifierKeyInfoProvider) {
        vkmodifierkeyinfoprovider->setKModifierKeyInfoProvider_IsSignalConnected_Callback(reinterpret_cast<VirtualKModifierKeyInfoProvider::KModifierKeyInfoProvider_IsSignalConnected_Callback>(slot));
    }
}

void KModifierKeyInfoProvider_Delete(KModifierKeyInfoProvider* self) {
    delete self;
}
