#include <KGlobalShortcutInfo>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kglobalshortcutinfo.h>
#include "libkglobalshortcutinfo.h"
#include "libkglobalshortcutinfo.hxx"

KGlobalShortcutInfo* KGlobalShortcutInfo_new() {
    return new VirtualKGlobalShortcutInfo();
}

KGlobalShortcutInfo* KGlobalShortcutInfo_new2(const KGlobalShortcutInfo* rhs) {
    return new VirtualKGlobalShortcutInfo(*rhs);
}

QMetaObject* KGlobalShortcutInfo_MetaObject(const KGlobalShortcutInfo* self) {
    return (QMetaObject*)self->metaObject();
}

void* KGlobalShortcutInfo_Metacast(KGlobalShortcutInfo* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KGlobalShortcutInfo_Metacall(KGlobalShortcutInfo* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KGlobalShortcutInfo_Tr(const char* s) {
    auto _ret = KGlobalShortcutInfo::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGlobalShortcutInfo_OperatorAssign(KGlobalShortcutInfo* self, const KGlobalShortcutInfo* rhs) {
    self->operator=(*rhs);
}

libqt_string KGlobalShortcutInfo_ContextFriendlyName(const KGlobalShortcutInfo* self) {
    auto _ret = self->contextFriendlyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGlobalShortcutInfo_ContextUniqueName(const KGlobalShortcutInfo* self) {
    auto _ret = self->contextUniqueName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGlobalShortcutInfo_ComponentFriendlyName(const KGlobalShortcutInfo* self) {
    auto _ret = self->componentFriendlyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGlobalShortcutInfo_ComponentUniqueName(const KGlobalShortcutInfo* self) {
    auto _ret = self->componentUniqueName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QKeySequence* */ KGlobalShortcutInfo_DefaultKeys(const KGlobalShortcutInfo* self) {
    QList<QKeySequence> _ret = self->defaultKeys();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KGlobalShortcutInfo_FriendlyName(const KGlobalShortcutInfo* self) {
    auto _ret = self->friendlyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QKeySequence* */ KGlobalShortcutInfo_Keys(const KGlobalShortcutInfo* self) {
    QList<QKeySequence> _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KGlobalShortcutInfo_UniqueName(const KGlobalShortcutInfo* self) {
    auto _ret = self->uniqueName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGlobalShortcutInfo_Tr2(const char* s, const char* c) {
    auto _ret = KGlobalShortcutInfo::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGlobalShortcutInfo_Tr3(const char* s, const char* c, int n) {
    auto _ret = KGlobalShortcutInfo::tr(s, c, static_cast<int>(n));
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
QMetaObject* KGlobalShortcutInfo_SuperMetaObject(const KGlobalShortcutInfo* self) {
    return (QMetaObject*)self->KGlobalShortcutInfo::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnMetaObject(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self)))
        vkglobalshortcutinfo->kglobalshortcutinfo_metaobject_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KGlobalShortcutInfo_SuperMetacast(KGlobalShortcutInfo* self, const char* param1) {
    return self->KGlobalShortcutInfo::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnMetacast(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_metacast_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Metacast_Callback>(slot);
}

// Base class handler implementation
int KGlobalShortcutInfo_SuperMetacall(KGlobalShortcutInfo* self, int param1, int param2, void** param3) {
    return self->KGlobalShortcutInfo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnMetacall(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_metacall_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KGlobalShortcutInfo_Event(KGlobalShortcutInfo* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KGlobalShortcutInfo_SuperEvent(KGlobalShortcutInfo* self, QEvent* event) {
    return self->KGlobalShortcutInfo::event(event);
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_event_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Event_Callback>(slot);
}

// Derived class handler implementation
bool KGlobalShortcutInfo_EventFilter(KGlobalShortcutInfo* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KGlobalShortcutInfo_SuperEventFilter(KGlobalShortcutInfo* self, QObject* watched, QEvent* event) {
    return self->KGlobalShortcutInfo::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnEventFilter(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_eventfilter_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KGlobalShortcutInfo_TimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo) {
        vkglobalshortcutinfo->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_SuperTimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self)) {
        vkglobalshortcutinfo->KGlobalShortcutInfo::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnTimerEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_timerevent_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KGlobalShortcutInfo_ChildEvent(KGlobalShortcutInfo* self, QChildEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo) {
        vkglobalshortcutinfo->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_SuperChildEvent(KGlobalShortcutInfo* self, QChildEvent* event) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self)) {
        vkglobalshortcutinfo->KGlobalShortcutInfo::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnChildEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_childevent_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KGlobalShortcutInfo_CustomEvent(KGlobalShortcutInfo* self, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo) {
        vkglobalshortcutinfo->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_SuperCustomEvent(KGlobalShortcutInfo* self, QEvent* event) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self)) {
        vkglobalshortcutinfo->KGlobalShortcutInfo::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnCustomEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_customevent_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KGlobalShortcutInfo_ConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo) {
        vkglobalshortcutinfo->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_SuperConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self)) {
        vkglobalshortcutinfo->KGlobalShortcutInfo::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnConnectNotify(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_connectnotify_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KGlobalShortcutInfo_DisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo) {
        vkglobalshortcutinfo->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_SuperDisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self)) {
        vkglobalshortcutinfo->KGlobalShortcutInfo::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KGlobalShortcutInfo::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnDisconnectNotify(KGlobalShortcutInfo* self, intptr_t slot) {
    if (auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self))
        vkglobalshortcutinfo->kglobalshortcutinfo_disconnectnotify_callback = reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KGlobalShortcutInfo_Sender(const KGlobalShortcutInfo* self) {
    if (auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self))) {
        return vkglobalshortcutinfo->VirtualKGlobalShortcutInfo::sender();
    } else
        qFatal("Error: Protected method KGlobalShortcutInfo::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KGlobalShortcutInfo_SenderSignalIndex(const KGlobalShortcutInfo* self) {
    if (auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self))) {
        return vkglobalshortcutinfo->VirtualKGlobalShortcutInfo::senderSignalIndex();
    } else
        qFatal("Error: Protected method KGlobalShortcutInfo::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KGlobalShortcutInfo_Receivers(const KGlobalShortcutInfo* self, const char* signal) {
    if (auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self))) {
        return vkglobalshortcutinfo->VirtualKGlobalShortcutInfo::receivers(signal);
    } else
        qFatal("Error: Protected method KGlobalShortcutInfo::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KGlobalShortcutInfo_IsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    if (auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self))) {
        return vkglobalshortcutinfo->VirtualKGlobalShortcutInfo::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KGlobalShortcutInfo::isSignalConnected called without a directly constructed type");
}

void KGlobalShortcutInfo_Delete(KGlobalShortcutInfo* self) {
    delete self;
}
