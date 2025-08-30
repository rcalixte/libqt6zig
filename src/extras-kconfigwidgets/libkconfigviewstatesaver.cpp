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
#include <QByteArray>
#include <cstring>
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
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KConfigViewStateSaver_Tr(const char* s) {
    QString _ret = KConfigViewStateSaver::tr(s);
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
    QString _ret = KConfigViewStateSaver::tr(s, c);
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
    QString _ret = KConfigViewStateSaver::tr(s, c, static_cast<int>(n));
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
int KConfigViewStateSaver_QBaseMetacall(KConfigViewStateSaver* self, int param1, int param2, void** param3) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Metacall_IsBase(true);
        return vkconfigviewstatesaver->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigViewStateSaver::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnMetacall(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Metacall_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KConfigViewStateSaver_IndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return new QModelIndex(vkconfigviewstatesaver->indexFromConfigString(model, key_QString));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KConfigViewStateSaver_QBaseIndexFromConfigString(const KConfigViewStateSaver* self, const QAbstractItemModel* model, const libqt_string key) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_IndexFromConfigString_IsBase(true);
        return new QModelIndex(vkconfigviewstatesaver->indexFromConfigString(model, key_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnIndexFromConfigString(const KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_IndexFromConfigString_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_IndexFromConfigString_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KConfigViewStateSaver_IndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        QString _ret = vkconfigviewstatesaver->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKConfigViewStateSaver*)self)->indexToConfigString(*index);
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

// Base class handler implementation
libqt_string KConfigViewStateSaver_QBaseIndexToConfigString(const KConfigViewStateSaver* self, const QModelIndex* index) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_IndexToConfigString_IsBase(true);
        QString _ret = vkconfigviewstatesaver->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKConfigViewStateSaver*)self)->indexToConfigString(*index);
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
void KConfigViewStateSaver_OnIndexToConfigString(const KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_IndexToConfigString_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_IndexToConfigString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigViewStateSaver_Event(KConfigViewStateSaver* self, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return vkconfigviewstatesaver->event(event);
    } else {
        return self->KConfigViewStateSaver::event(event);
    }
}

// Base class handler implementation
bool KConfigViewStateSaver_QBaseEvent(KConfigViewStateSaver* self, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Event_IsBase(true);
        return vkconfigviewstatesaver->event(event);
    } else {
        return self->KConfigViewStateSaver::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnEvent(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Event_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigViewStateSaver_EventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return vkconfigviewstatesaver->eventFilter(watched, event);
    } else {
        return self->KConfigViewStateSaver::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KConfigViewStateSaver_QBaseEventFilter(KConfigViewStateSaver* self, QObject* watched, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_EventFilter_IsBase(true);
        return vkconfigviewstatesaver->eventFilter(watched, event);
    } else {
        return self->KConfigViewStateSaver::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnEventFilter(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_EventFilter_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigViewStateSaver_TimerEvent(KConfigViewStateSaver* self, QTimerEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->timerEvent(event);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KConfigViewStateSaver_QBaseTimerEvent(KConfigViewStateSaver* self, QTimerEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_TimerEvent_IsBase(true);
        vkconfigviewstatesaver->timerEvent(event);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnTimerEvent(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_TimerEvent_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigViewStateSaver_ChildEvent(KConfigViewStateSaver* self, QChildEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->childEvent(event);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KConfigViewStateSaver_QBaseChildEvent(KConfigViewStateSaver* self, QChildEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_ChildEvent_IsBase(true);
        vkconfigviewstatesaver->childEvent(event);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnChildEvent(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_ChildEvent_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigViewStateSaver_CustomEvent(KConfigViewStateSaver* self, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->customEvent(event);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KConfigViewStateSaver_QBaseCustomEvent(KConfigViewStateSaver* self, QEvent* event) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_CustomEvent_IsBase(true);
        vkconfigviewstatesaver->customEvent(event);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnCustomEvent(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_CustomEvent_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigViewStateSaver_ConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->connectNotify(*signal);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigViewStateSaver_QBaseConnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_ConnectNotify_IsBase(true);
        vkconfigviewstatesaver->connectNotify(*signal);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnConnectNotify(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_ConnectNotify_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigViewStateSaver_DisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigViewStateSaver_QBaseDisconnectNotify(KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_DisconnectNotify_IsBase(true);
        vkconfigviewstatesaver->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigViewStateSaver*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnDisconnectNotify(KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = dynamic_cast<VirtualKConfigViewStateSaver*>(self);
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_DisconnectNotify_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KConfigViewStateSaver_Sender(const KConfigViewStateSaver* self) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return vkconfigviewstatesaver->sender();
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->sender();
    }
}

// Base class handler implementation
QObject* KConfigViewStateSaver_QBaseSender(const KConfigViewStateSaver* self) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Sender_IsBase(true);
        return vkconfigviewstatesaver->sender();
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnSender(const KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Sender_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigViewStateSaver_SenderSignalIndex(const KConfigViewStateSaver* self) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return vkconfigviewstatesaver->senderSignalIndex();
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KConfigViewStateSaver_QBaseSenderSignalIndex(const KConfigViewStateSaver* self) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_SenderSignalIndex_IsBase(true);
        return vkconfigviewstatesaver->senderSignalIndex();
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnSenderSignalIndex(const KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_SenderSignalIndex_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigViewStateSaver_Receivers(const KConfigViewStateSaver* self, const char* signal) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return vkconfigviewstatesaver->receivers(signal);
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KConfigViewStateSaver_QBaseReceivers(const KConfigViewStateSaver* self, const char* signal) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Receivers_IsBase(true);
        return vkconfigviewstatesaver->receivers(signal);
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnReceivers(const KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_Receivers_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigViewStateSaver_IsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        return vkconfigviewstatesaver->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KConfigViewStateSaver_QBaseIsSignalConnected(const KConfigViewStateSaver* self, const QMetaMethod* signal) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_IsSignalConnected_IsBase(true);
        return vkconfigviewstatesaver->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigViewStateSaver*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigViewStateSaver_OnIsSignalConnected(const KConfigViewStateSaver* self, intptr_t slot) {
    auto* vkconfigviewstatesaver = const_cast<VirtualKConfigViewStateSaver*>(dynamic_cast<const VirtualKConfigViewStateSaver*>(self));
    if (vkconfigviewstatesaver && vkconfigviewstatesaver->isVirtualKConfigViewStateSaver) {
        vkconfigviewstatesaver->setKConfigViewStateSaver_IsSignalConnected_Callback(reinterpret_cast<VirtualKConfigViewStateSaver::KConfigViewStateSaver_IsSignalConnected_Callback>(slot));
    }
}

void KConfigViewStateSaver_Delete(KConfigViewStateSaver* self) {
    delete self;
}
