#include <KSycoca>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <ksycoca.h>
#include "libksycoca.h"
#include "libksycoca.hxx"

KSycoca* KSycoca_new() {
    return new VirtualKSycoca();
}

QMetaObject* KSycoca_MetaObject(const KSycoca* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSycoca_Metacast(KSycoca* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSycoca_Metacall(KSycoca* self, int param1, int param2, void** param3) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSycoca*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSycoca_Tr(const char* s) {
    QString _ret = KSycoca::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KSycoca* KSycoca_Self() {
    return KSycoca::self();
}

int KSycoca_Version() {
    return KSycoca::version();
}

bool KSycoca_IsAvailable() {
    return KSycoca::isAvailable();
}

QDataStream* KSycoca_FindEntry(KSycoca* self, int offset, int* typeVal) {
    return self->findEntry(static_cast<int>(offset), (KSycocaType&)(*typeVal));
}

QDataStream* KSycoca_FindFactory(KSycoca* self, int id) {
    return self->findFactory(static_cast<KSycocaFactoryId>(id));
}

libqt_string KSycoca_AbsoluteFilePath() {
    QString _ret = KSycoca::absoluteFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KSycoca_AllResourceDirs(KSycoca* self) {
    QList<QString> _ret = self->allResourceDirs();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KSycoca_IsBuilding(KSycoca* self) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return self->isBuilding();
    } else {
        return ((VirtualKSycoca*)self)->isBuilding();
    }
}

void KSycoca_DisableAutoRebuild() {
    KSycoca::disableAutoRebuild();
}

void KSycoca_FlagError() {
    KSycoca::flagError();
}

void KSycoca_EnsureCacheValid(KSycoca* self) {
    self->ensureCacheValid();
}

void KSycoca_SetupTestMenu() {
    KSycoca::setupTestMenu();
}

void KSycoca_DatabaseChanged(KSycoca* self) {
    self->databaseChanged();
}

void KSycoca_ConnectNotify(KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->connectNotify(*signal);
    }
}

libqt_string KSycoca_Tr2(const char* s, const char* c) {
    QString _ret = KSycoca::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSycoca_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSycoca::tr(s, c, static_cast<int>(n));
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
int KSycoca_QBaseMetacall(KSycoca* self, int param1, int param2, void** param3) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Metacall_IsBase(true);
        return vksycoca->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSycoca::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnMetacall(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Metacall_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KSycoca_QBaseIsBuilding(KSycoca* self) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_IsBuilding_IsBase(true);
        return vksycoca->isBuilding();
    } else {
        return self->KSycoca::isBuilding();
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnIsBuilding(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_IsBuilding_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_IsBuilding_Callback>(slot));
    }
}

// Base class handler implementation
void KSycoca_QBaseConnectNotify(KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_ConnectNotify_IsBase(true);
        vksycoca->connectNotify(*signal);
    } else {
        ((VirtualKSycoca*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnConnectNotify(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_ConnectNotify_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSycoca_Event(KSycoca* self, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return vksycoca->event(event);
    } else {
        return self->KSycoca::event(event);
    }
}

// Base class handler implementation
bool KSycoca_QBaseEvent(KSycoca* self, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Event_IsBase(true);
        return vksycoca->event(event);
    } else {
        return self->KSycoca::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnEvent(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Event_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSycoca_EventFilter(KSycoca* self, QObject* watched, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return vksycoca->eventFilter(watched, event);
    } else {
        return self->KSycoca::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSycoca_QBaseEventFilter(KSycoca* self, QObject* watched, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_EventFilter_IsBase(true);
        return vksycoca->eventFilter(watched, event);
    } else {
        return self->KSycoca::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnEventFilter(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_EventFilter_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSycoca_TimerEvent(KSycoca* self, QTimerEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->timerEvent(event);
    } else {
        ((VirtualKSycoca*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSycoca_QBaseTimerEvent(KSycoca* self, QTimerEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_TimerEvent_IsBase(true);
        vksycoca->timerEvent(event);
    } else {
        ((VirtualKSycoca*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnTimerEvent(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_TimerEvent_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSycoca_ChildEvent(KSycoca* self, QChildEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->childEvent(event);
    } else {
        ((VirtualKSycoca*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSycoca_QBaseChildEvent(KSycoca* self, QChildEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_ChildEvent_IsBase(true);
        vksycoca->childEvent(event);
    } else {
        ((VirtualKSycoca*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnChildEvent(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_ChildEvent_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSycoca_CustomEvent(KSycoca* self, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->customEvent(event);
    } else {
        ((VirtualKSycoca*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSycoca_QBaseCustomEvent(KSycoca* self, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_CustomEvent_IsBase(true);
        vksycoca->customEvent(event);
    } else {
        ((VirtualKSycoca*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnCustomEvent(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_CustomEvent_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSycoca_DisconnectNotify(KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->disconnectNotify(*signal);
    } else {
        ((VirtualKSycoca*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSycoca_QBaseDisconnectNotify(KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_DisconnectNotify_IsBase(true);
        vksycoca->disconnectNotify(*signal);
    } else {
        ((VirtualKSycoca*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnDisconnectNotify(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_DisconnectNotify_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QDataStream** KSycoca_Stream(KSycoca* self) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        QDataStream*& _ret = vksycoca->stream();
        // Cast returned reference into pointer
        return &_ret;
    } else {
        QDataStream*& _ret = ((VirtualKSycoca*)self)->stream();
        // Cast returned reference into pointer
        return &_ret;
    }
}

// Base class handler implementation
QDataStream** KSycoca_QBaseStream(KSycoca* self) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Stream_IsBase(true);
        QDataStream*& _ret = vksycoca->stream();
        // Cast returned reference into pointer
        return &_ret;
    } else {
        QDataStream*& _ret = ((VirtualKSycoca*)self)->stream();
        // Cast returned reference into pointer
        return &_ret;
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnStream(KSycoca* self, intptr_t slot) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Stream_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_Stream_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSycoca_Sender(const KSycoca* self) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return vksycoca->sender();
    } else {
        return ((VirtualKSycoca*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSycoca_QBaseSender(const KSycoca* self) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Sender_IsBase(true);
        return vksycoca->sender();
    } else {
        return ((VirtualKSycoca*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnSender(const KSycoca* self, intptr_t slot) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Sender_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSycoca_SenderSignalIndex(const KSycoca* self) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return vksycoca->senderSignalIndex();
    } else {
        return ((VirtualKSycoca*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSycoca_QBaseSenderSignalIndex(const KSycoca* self) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_SenderSignalIndex_IsBase(true);
        return vksycoca->senderSignalIndex();
    } else {
        return ((VirtualKSycoca*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnSenderSignalIndex(const KSycoca* self, intptr_t slot) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSycoca_Receivers(const KSycoca* self, const char* signal) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return vksycoca->receivers(signal);
    } else {
        return ((VirtualKSycoca*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSycoca_QBaseReceivers(const KSycoca* self, const char* signal) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Receivers_IsBase(true);
        return vksycoca->receivers(signal);
    } else {
        return ((VirtualKSycoca*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnReceivers(const KSycoca* self, intptr_t slot) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_Receivers_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSycoca_IsSignalConnected(const KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        return vksycoca->isSignalConnected(*signal);
    } else {
        return ((VirtualKSycoca*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSycoca_QBaseIsSignalConnected(const KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_IsSignalConnected_IsBase(true);
        return vksycoca->isSignalConnected(*signal);
    } else {
        return ((VirtualKSycoca*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnIsSignalConnected(const KSycoca* self, intptr_t slot) {
    auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self));
    if (vksycoca && vksycoca->isVirtualKSycoca) {
        vksycoca->setKSycoca_IsSignalConnected_Callback(reinterpret_cast<VirtualKSycoca::KSycoca_IsSignalConnected_Callback>(slot));
    }
}

void KSycoca_Delete(KSycoca* self) {
    delete self;
}
