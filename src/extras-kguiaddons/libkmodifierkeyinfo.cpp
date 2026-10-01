#include <KModifierKeyInfo>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kmodifierkeyinfo.h>
#include "libkmodifierkeyinfo.h"
#include "libkmodifierkeyinfo.hxx"

KModifierKeyInfo* KModifierKeyInfo_new() {
    return new VirtualKModifierKeyInfo();
}

KModifierKeyInfo* KModifierKeyInfo_new2(QObject* parent) {
    return new VirtualKModifierKeyInfo(parent);
}

QMetaObject* KModifierKeyInfo_MetaObject(const KModifierKeyInfo* self) {
    return (QMetaObject*)self->metaObject();
}

void* KModifierKeyInfo_Metacast(KModifierKeyInfo* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KModifierKeyInfo_Metacall(KModifierKeyInfo* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KModifierKeyInfo_Tr(const char* s) {
    auto _ret = KModifierKeyInfo::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KModifierKeyInfo_KnowsKey(const KModifierKeyInfo* self, int key) {
    return self->knowsKey(static_cast<Qt::Key>(key));
}

libqt_list /* of int */ KModifierKeyInfo_KnownKeys(const KModifierKeyInfo* self) {
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

bool KModifierKeyInfo_IsKeyPressed(const KModifierKeyInfo* self, int key) {
    return self->isKeyPressed(static_cast<Qt::Key>(key));
}

bool KModifierKeyInfo_IsKeyLatched(const KModifierKeyInfo* self, int key) {
    return self->isKeyLatched(static_cast<Qt::Key>(key));
}

bool KModifierKeyInfo_SetKeyLatched(KModifierKeyInfo* self, int key, bool latched) {
    return self->setKeyLatched(static_cast<Qt::Key>(key), latched);
}

bool KModifierKeyInfo_IsKeyLocked(const KModifierKeyInfo* self, int key) {
    return self->isKeyLocked(static_cast<Qt::Key>(key));
}

bool KModifierKeyInfo_SetKeyLocked(KModifierKeyInfo* self, int key, bool locked) {
    return self->setKeyLocked(static_cast<Qt::Key>(key), locked);
}

bool KModifierKeyInfo_IsButtonPressed(const KModifierKeyInfo* self, int button) {
    return self->isButtonPressed(static_cast<Qt::MouseButton>(button));
}

void KModifierKeyInfo_KeyPressed(KModifierKeyInfo* self, int key, bool pressed) {
    self->keyPressed(static_cast<Qt::Key>(key), pressed);
}

void KModifierKeyInfo_Connect_KeyPressed(KModifierKeyInfo* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfo*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfo*, int, bool)>(slot);
    KModifierKeyInfo::connect(self,
                              static_cast<void (KModifierKeyInfo::*)(Qt::Key, bool)>(&KModifierKeyInfo::keyPressed),
                              [self, slotFunc](Qt::Key key, bool pressed) {
                                  int sigval1 = static_cast<int>(key);
                                  bool sigval2 = pressed;
                                  slotFunc(self, sigval1, sigval2);
                              });
}

void KModifierKeyInfo_KeyLatched(KModifierKeyInfo* self, int key, bool latched) {
    self->keyLatched(static_cast<Qt::Key>(key), latched);
}

void KModifierKeyInfo_Connect_KeyLatched(KModifierKeyInfo* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfo*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfo*, int, bool)>(slot);
    KModifierKeyInfo::connect(self,
                              static_cast<void (KModifierKeyInfo::*)(Qt::Key, bool)>(&KModifierKeyInfo::keyLatched),
                              [self, slotFunc](Qt::Key key, bool latched) {
                                  int sigval1 = static_cast<int>(key);
                                  bool sigval2 = latched;
                                  slotFunc(self, sigval1, sigval2);
                              });
}

void KModifierKeyInfo_KeyLocked(KModifierKeyInfo* self, int key, bool locked) {
    self->keyLocked(static_cast<Qt::Key>(key), locked);
}

void KModifierKeyInfo_Connect_KeyLocked(KModifierKeyInfo* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfo*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfo*, int, bool)>(slot);
    KModifierKeyInfo::connect(self,
                              static_cast<void (KModifierKeyInfo::*)(Qt::Key, bool)>(&KModifierKeyInfo::keyLocked),
                              [self, slotFunc](Qt::Key key, bool locked) {
                                  int sigval1 = static_cast<int>(key);
                                  bool sigval2 = locked;
                                  slotFunc(self, sigval1, sigval2);
                              });
}

void KModifierKeyInfo_ButtonPressed(KModifierKeyInfo* self, int button, bool pressed) {
    self->buttonPressed(static_cast<Qt::MouseButton>(button), pressed);
}

void KModifierKeyInfo_Connect_ButtonPressed(KModifierKeyInfo* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfo*, int, bool) = reinterpret_cast<void (*)(KModifierKeyInfo*, int, bool)>(slot);
    KModifierKeyInfo::connect(self,
                              static_cast<void (KModifierKeyInfo::*)(Qt::MouseButton, bool)>(&KModifierKeyInfo::buttonPressed),
                              [self, slotFunc](Qt::MouseButton button, bool pressed) {
                                  int sigval1 = static_cast<int>(button);
                                  bool sigval2 = pressed;
                                  slotFunc(self, sigval1, sigval2);
                              });
}

void KModifierKeyInfo_KeyAdded(KModifierKeyInfo* self, int key) {
    self->keyAdded(static_cast<Qt::Key>(key));
}

void KModifierKeyInfo_Connect_KeyAdded(KModifierKeyInfo* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfo*, int) = reinterpret_cast<void (*)(KModifierKeyInfo*, int)>(slot);
    KModifierKeyInfo::connect(self,
                              static_cast<void (KModifierKeyInfo::*)(Qt::Key)>(&KModifierKeyInfo::keyAdded),
                              [self, slotFunc](Qt::Key key) {
                                  int sigval1 = static_cast<int>(key);
                                  slotFunc(self, sigval1);
                              });
}

void KModifierKeyInfo_KeyRemoved(KModifierKeyInfo* self, int key) {
    self->keyRemoved(static_cast<Qt::Key>(key));
}

void KModifierKeyInfo_Connect_KeyRemoved(KModifierKeyInfo* self, intptr_t slot) {
    void (*slotFunc)(KModifierKeyInfo*, int) = reinterpret_cast<void (*)(KModifierKeyInfo*, int)>(slot);
    KModifierKeyInfo::connect(self,
                              static_cast<void (KModifierKeyInfo::*)(Qt::Key)>(&KModifierKeyInfo::keyRemoved),
                              [self, slotFunc](Qt::Key key) {
                                  int sigval1 = static_cast<int>(key);
                                  slotFunc(self, sigval1);
                              });
}

libqt_string KModifierKeyInfo_Tr2(const char* s, const char* c) {
    auto _ret = KModifierKeyInfo::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KModifierKeyInfo_Tr3(const char* s, const char* c, int n) {
    auto _ret = KModifierKeyInfo::tr(s, c, static_cast<int>(n));
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
QMetaObject* KModifierKeyInfo_SuperMetaObject(const KModifierKeyInfo* self) {
    return (QMetaObject*)self->KModifierKeyInfo::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnMetaObject(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = const_cast<VirtualKModifierKeyInfo*>(dynamic_cast<const VirtualKModifierKeyInfo*>(self)))
        vkmodifierkeyinfo->kmodifierkeyinfo_metaobject_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KModifierKeyInfo_SuperMetacast(KModifierKeyInfo* self, const char* param1) {
    return self->KModifierKeyInfo::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnMetacast(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_metacast_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_Metacast_Callback>(slot);
}

// Base class handler implementation
int KModifierKeyInfo_SuperMetacall(KModifierKeyInfo* self, int param1, int param2, void** param3) {
    return self->KModifierKeyInfo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnMetacall(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_metacall_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KModifierKeyInfo_Event(KModifierKeyInfo* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KModifierKeyInfo_SuperEvent(KModifierKeyInfo* self, QEvent* event) {
    return self->KModifierKeyInfo::event(event);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnEvent(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_event_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_Event_Callback>(slot);
}

// Derived class handler implementation
bool KModifierKeyInfo_EventFilter(KModifierKeyInfo* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KModifierKeyInfo_SuperEventFilter(KModifierKeyInfo* self, QObject* watched, QEvent* event) {
    return self->KModifierKeyInfo::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnEventFilter(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_eventfilter_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfo_TimerEvent(KModifierKeyInfo* self, QTimerEvent* event) {
    auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self);
    if (vkmodifierkeyinfo) {
        vkmodifierkeyinfo->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfo::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfo_SuperTimerEvent(KModifierKeyInfo* self, QTimerEvent* event) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self)) {
        vkmodifierkeyinfo->KModifierKeyInfo::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfo::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnTimerEvent(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_timerevent_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfo_ChildEvent(KModifierKeyInfo* self, QChildEvent* event) {
    auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self);
    if (vkmodifierkeyinfo) {
        vkmodifierkeyinfo->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfo::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfo_SuperChildEvent(KModifierKeyInfo* self, QChildEvent* event) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self)) {
        vkmodifierkeyinfo->KModifierKeyInfo::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfo::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnChildEvent(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_childevent_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfo_CustomEvent(KModifierKeyInfo* self, QEvent* event) {
    auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self);
    if (vkmodifierkeyinfo) {
        vkmodifierkeyinfo->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfo::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfo_SuperCustomEvent(KModifierKeyInfo* self, QEvent* event) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self)) {
        vkmodifierkeyinfo->KModifierKeyInfo::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfo::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnCustomEvent(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_customevent_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfo_ConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self);
    if (vkmodifierkeyinfo) {
        vkmodifierkeyinfo->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfo::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfo_SuperConnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self)) {
        vkmodifierkeyinfo->KModifierKeyInfo::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfo::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnConnectNotify(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_connectnotify_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KModifierKeyInfo_DisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal) {
    auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self);
    if (vkmodifierkeyinfo) {
        vkmodifierkeyinfo->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KModifierKeyInfo::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KModifierKeyInfo_SuperDisconnectNotify(KModifierKeyInfo* self, const QMetaMethod* signal) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self)) {
        vkmodifierkeyinfo->KModifierKeyInfo::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KModifierKeyInfo::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KModifierKeyInfo_OnDisconnectNotify(KModifierKeyInfo* self, intptr_t slot) {
    if (auto* vkmodifierkeyinfo = dynamic_cast<VirtualKModifierKeyInfo*>(self))
        vkmodifierkeyinfo->kmodifierkeyinfo_disconnectnotify_callback = reinterpret_cast<VirtualKModifierKeyInfo::KModifierKeyInfo_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KModifierKeyInfo_Sender(const KModifierKeyInfo* self) {
    if (auto* vkmodifierkeyinfo = const_cast<VirtualKModifierKeyInfo*>(dynamic_cast<const VirtualKModifierKeyInfo*>(self))) {
        return vkmodifierkeyinfo->VirtualKModifierKeyInfo::sender();
    } else
        qFatal("Error: Protected method KModifierKeyInfo::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KModifierKeyInfo_SenderSignalIndex(const KModifierKeyInfo* self) {
    if (auto* vkmodifierkeyinfo = const_cast<VirtualKModifierKeyInfo*>(dynamic_cast<const VirtualKModifierKeyInfo*>(self))) {
        return vkmodifierkeyinfo->VirtualKModifierKeyInfo::senderSignalIndex();
    } else
        qFatal("Error: Protected method KModifierKeyInfo::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KModifierKeyInfo_Receivers(const KModifierKeyInfo* self, const char* signal) {
    if (auto* vkmodifierkeyinfo = const_cast<VirtualKModifierKeyInfo*>(dynamic_cast<const VirtualKModifierKeyInfo*>(self))) {
        return vkmodifierkeyinfo->VirtualKModifierKeyInfo::receivers(signal);
    } else
        qFatal("Error: Protected method KModifierKeyInfo::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KModifierKeyInfo_IsSignalConnected(const KModifierKeyInfo* self, const QMetaMethod* signal) {
    if (auto* vkmodifierkeyinfo = const_cast<VirtualKModifierKeyInfo*>(dynamic_cast<const VirtualKModifierKeyInfo*>(self))) {
        return vkmodifierkeyinfo->VirtualKModifierKeyInfo::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KModifierKeyInfo::isSignalConnected called without a directly constructed type");
}

void KModifierKeyInfo_Delete(KModifierKeyInfo* self) {
    delete self;
}
