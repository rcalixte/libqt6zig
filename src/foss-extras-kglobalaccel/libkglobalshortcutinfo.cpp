#include <KGlobalShortcutInfo>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KGlobalShortcutInfo_Tr(const char* s) {
    QString _ret = KGlobalShortcutInfo::tr(s);
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
    QString _ret = self->contextFriendlyName();
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
    QString _ret = self->contextUniqueName();
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
    QString _ret = self->componentFriendlyName();
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
    QString _ret = self->componentUniqueName();
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
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KGlobalShortcutInfo_FriendlyName(const KGlobalShortcutInfo* self) {
    QString _ret = self->friendlyName();
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
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KGlobalShortcutInfo_UniqueName(const KGlobalShortcutInfo* self) {
    QString _ret = self->uniqueName();
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
    QString _ret = KGlobalShortcutInfo::tr(s, c);
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
    QString _ret = KGlobalShortcutInfo::tr(s, c, static_cast<int>(n));
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
int KGlobalShortcutInfo_QBaseMetacall(KGlobalShortcutInfo* self, int param1, int param2, void** param3) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Metacall_IsBase(true);
        return vkglobalshortcutinfo->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KGlobalShortcutInfo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnMetacall(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Metacall_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGlobalShortcutInfo_Event(KGlobalShortcutInfo* self, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return vkglobalshortcutinfo->event(event);
    } else {
        return self->KGlobalShortcutInfo::event(event);
    }
}

// Base class handler implementation
bool KGlobalShortcutInfo_QBaseEvent(KGlobalShortcutInfo* self, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Event_IsBase(true);
        return vkglobalshortcutinfo->event(event);
    } else {
        return self->KGlobalShortcutInfo::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Event_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGlobalShortcutInfo_EventFilter(KGlobalShortcutInfo* self, QObject* watched, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return vkglobalshortcutinfo->eventFilter(watched, event);
    } else {
        return self->KGlobalShortcutInfo::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KGlobalShortcutInfo_QBaseEventFilter(KGlobalShortcutInfo* self, QObject* watched, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_EventFilter_IsBase(true);
        return vkglobalshortcutinfo->eventFilter(watched, event);
    } else {
        return self->KGlobalShortcutInfo::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnEventFilter(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_EventFilter_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KGlobalShortcutInfo_TimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->timerEvent(event);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_QBaseTimerEvent(KGlobalShortcutInfo* self, QTimerEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_TimerEvent_IsBase(true);
        vkglobalshortcutinfo->timerEvent(event);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnTimerEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_TimerEvent_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGlobalShortcutInfo_ChildEvent(KGlobalShortcutInfo* self, QChildEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->childEvent(event);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_QBaseChildEvent(KGlobalShortcutInfo* self, QChildEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_ChildEvent_IsBase(true);
        vkglobalshortcutinfo->childEvent(event);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnChildEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_ChildEvent_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGlobalShortcutInfo_CustomEvent(KGlobalShortcutInfo* self, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->customEvent(event);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_QBaseCustomEvent(KGlobalShortcutInfo* self, QEvent* event) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_CustomEvent_IsBase(true);
        vkglobalshortcutinfo->customEvent(event);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnCustomEvent(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_CustomEvent_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KGlobalShortcutInfo_ConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->connectNotify(*signal);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_QBaseConnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_ConnectNotify_IsBase(true);
        vkglobalshortcutinfo->connectNotify(*signal);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnConnectNotify(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_ConnectNotify_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KGlobalShortcutInfo_DisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->disconnectNotify(*signal);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KGlobalShortcutInfo_QBaseDisconnectNotify(KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_DisconnectNotify_IsBase(true);
        vkglobalshortcutinfo->disconnectNotify(*signal);
    } else {
        ((VirtualKGlobalShortcutInfo*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnDisconnectNotify(KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = dynamic_cast<VirtualKGlobalShortcutInfo*>(self);
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_DisconnectNotify_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KGlobalShortcutInfo_Sender(const KGlobalShortcutInfo* self) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return vkglobalshortcutinfo->sender();
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->sender();
    }
}

// Base class handler implementation
QObject* KGlobalShortcutInfo_QBaseSender(const KGlobalShortcutInfo* self) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Sender_IsBase(true);
        return vkglobalshortcutinfo->sender();
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnSender(const KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Sender_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KGlobalShortcutInfo_SenderSignalIndex(const KGlobalShortcutInfo* self) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return vkglobalshortcutinfo->senderSignalIndex();
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KGlobalShortcutInfo_QBaseSenderSignalIndex(const KGlobalShortcutInfo* self) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_SenderSignalIndex_IsBase(true);
        return vkglobalshortcutinfo->senderSignalIndex();
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnSenderSignalIndex(const KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_SenderSignalIndex_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KGlobalShortcutInfo_Receivers(const KGlobalShortcutInfo* self, const char* signal) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return vkglobalshortcutinfo->receivers(signal);
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KGlobalShortcutInfo_QBaseReceivers(const KGlobalShortcutInfo* self, const char* signal) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Receivers_IsBase(true);
        return vkglobalshortcutinfo->receivers(signal);
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnReceivers(const KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_Receivers_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KGlobalShortcutInfo_IsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        return vkglobalshortcutinfo->isSignalConnected(*signal);
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KGlobalShortcutInfo_QBaseIsSignalConnected(const KGlobalShortcutInfo* self, const QMetaMethod* signal) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_IsSignalConnected_IsBase(true);
        return vkglobalshortcutinfo->isSignalConnected(*signal);
    } else {
        return ((VirtualKGlobalShortcutInfo*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KGlobalShortcutInfo_OnIsSignalConnected(const KGlobalShortcutInfo* self, intptr_t slot) {
    auto* vkglobalshortcutinfo = const_cast<VirtualKGlobalShortcutInfo*>(dynamic_cast<const VirtualKGlobalShortcutInfo*>(self));
    if (vkglobalshortcutinfo && vkglobalshortcutinfo->isVirtualKGlobalShortcutInfo) {
        vkglobalshortcutinfo->setKGlobalShortcutInfo_IsSignalConnected_Callback(reinterpret_cast<VirtualKGlobalShortcutInfo::KGlobalShortcutInfo_IsSignalConnected_Callback>(slot));
    }
}

void KGlobalShortcutInfo_Delete(KGlobalShortcutInfo* self) {
    delete self;
}
