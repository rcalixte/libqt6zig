#include <KCoreUrlNavigator>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <kcoreurlnavigator.h>
#include "libkcoreurlnavigator.h"
#include "libkcoreurlnavigator.hxx"

KCoreUrlNavigator* KCoreUrlNavigator_new() {
    return new VirtualKCoreUrlNavigator();
}

KCoreUrlNavigator* KCoreUrlNavigator_new2(const QUrl* url) {
    return new VirtualKCoreUrlNavigator(*url);
}

KCoreUrlNavigator* KCoreUrlNavigator_new3(const QUrl* url, QObject* parent) {
    return new VirtualKCoreUrlNavigator(*url, parent);
}

QMetaObject* KCoreUrlNavigator_MetaObject(const KCoreUrlNavigator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCoreUrlNavigator_Metacast(KCoreUrlNavigator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCoreUrlNavigator_Metacall(KCoreUrlNavigator* self, int param1, int param2, void** param3) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCoreUrlNavigator_Tr(const char* s) {
    QString _ret = KCoreUrlNavigator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KCoreUrlNavigator_CurrentLocationUrl(const KCoreUrlNavigator* self) {
    return new QUrl(self->currentLocationUrl());
}

void KCoreUrlNavigator_SetCurrentLocationUrl(KCoreUrlNavigator* self, const QUrl* url) {
    self->setCurrentLocationUrl(*url);
}

void KCoreUrlNavigator_CurrentLocationUrlChanged(KCoreUrlNavigator* self) {
    self->currentLocationUrlChanged();
}

void KCoreUrlNavigator_CurrentUrlAboutToChange(KCoreUrlNavigator* self, const QUrl* newUrl) {
    self->currentUrlAboutToChange(*newUrl);
}

int KCoreUrlNavigator_HistorySize(const KCoreUrlNavigator* self) {
    return self->historySize();
}

void KCoreUrlNavigator_HistorySizeChanged(KCoreUrlNavigator* self) {
    self->historySizeChanged();
}

void KCoreUrlNavigator_UrlSelectionRequested(KCoreUrlNavigator* self, const QUrl* url) {
    self->urlSelectionRequested(*url);
}

int KCoreUrlNavigator_HistoryIndex(const KCoreUrlNavigator* self) {
    return self->historyIndex();
}

void KCoreUrlNavigator_HistoryIndexChanged(KCoreUrlNavigator* self) {
    self->historyIndexChanged();
}

void KCoreUrlNavigator_HistoryChanged(KCoreUrlNavigator* self) {
    self->historyChanged();
}

QUrl* KCoreUrlNavigator_LocationUrl(const KCoreUrlNavigator* self) {
    return new QUrl(self->locationUrl());
}

void KCoreUrlNavigator_SaveLocationState(KCoreUrlNavigator* self, const QVariant* state) {
    self->saveLocationState(*state);
}

QVariant* KCoreUrlNavigator_LocationState(const KCoreUrlNavigator* self) {
    return new QVariant(self->locationState());
}

bool KCoreUrlNavigator_GoBack(KCoreUrlNavigator* self) {
    return self->goBack();
}

bool KCoreUrlNavigator_GoForward(KCoreUrlNavigator* self) {
    return self->goForward();
}

bool KCoreUrlNavigator_GoUp(KCoreUrlNavigator* self) {
    return self->goUp();
}

libqt_string KCoreUrlNavigator_Tr2(const char* s, const char* c) {
    QString _ret = KCoreUrlNavigator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCoreUrlNavigator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCoreUrlNavigator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KCoreUrlNavigator_LocationUrl1(const KCoreUrlNavigator* self, int historyIndex) {
    return new QUrl(self->locationUrl(static_cast<int>(historyIndex)));
}

QVariant* KCoreUrlNavigator_LocationState1(const KCoreUrlNavigator* self, int historyIndex) {
    return new QVariant(self->locationState(static_cast<int>(historyIndex)));
}

// Base class handler implementation
int KCoreUrlNavigator_QBaseMetacall(KCoreUrlNavigator* self, int param1, int param2, void** param3) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Metacall_IsBase(true);
        return vkcoreurlnavigator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCoreUrlNavigator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnMetacall(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Metacall_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreUrlNavigator_Event(KCoreUrlNavigator* self, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return vkcoreurlnavigator->event(event);
    } else {
        return self->KCoreUrlNavigator::event(event);
    }
}

// Base class handler implementation
bool KCoreUrlNavigator_QBaseEvent(KCoreUrlNavigator* self, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Event_IsBase(true);
        return vkcoreurlnavigator->event(event);
    } else {
        return self->KCoreUrlNavigator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnEvent(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Event_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreUrlNavigator_EventFilter(KCoreUrlNavigator* self, QObject* watched, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return vkcoreurlnavigator->eventFilter(watched, event);
    } else {
        return self->KCoreUrlNavigator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCoreUrlNavigator_QBaseEventFilter(KCoreUrlNavigator* self, QObject* watched, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_EventFilter_IsBase(true);
        return vkcoreurlnavigator->eventFilter(watched, event);
    } else {
        return self->KCoreUrlNavigator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnEventFilter(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_EventFilter_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreUrlNavigator_TimerEvent(KCoreUrlNavigator* self, QTimerEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->timerEvent(event);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCoreUrlNavigator_QBaseTimerEvent(KCoreUrlNavigator* self, QTimerEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_TimerEvent_IsBase(true);
        vkcoreurlnavigator->timerEvent(event);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnTimerEvent(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_TimerEvent_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreUrlNavigator_ChildEvent(KCoreUrlNavigator* self, QChildEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->childEvent(event);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCoreUrlNavigator_QBaseChildEvent(KCoreUrlNavigator* self, QChildEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_ChildEvent_IsBase(true);
        vkcoreurlnavigator->childEvent(event);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnChildEvent(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_ChildEvent_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreUrlNavigator_CustomEvent(KCoreUrlNavigator* self, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->customEvent(event);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCoreUrlNavigator_QBaseCustomEvent(KCoreUrlNavigator* self, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_CustomEvent_IsBase(true);
        vkcoreurlnavigator->customEvent(event);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnCustomEvent(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_CustomEvent_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreUrlNavigator_ConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->connectNotify(*signal);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCoreUrlNavigator_QBaseConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_ConnectNotify_IsBase(true);
        vkcoreurlnavigator->connectNotify(*signal);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnConnectNotify(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_ConnectNotify_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCoreUrlNavigator_DisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->disconnectNotify(*signal);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCoreUrlNavigator_QBaseDisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_DisconnectNotify_IsBase(true);
        vkcoreurlnavigator->disconnectNotify(*signal);
    } else {
        ((VirtualKCoreUrlNavigator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnDisconnectNotify(KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_DisconnectNotify_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCoreUrlNavigator_Sender(const KCoreUrlNavigator* self) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return vkcoreurlnavigator->sender();
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCoreUrlNavigator_QBaseSender(const KCoreUrlNavigator* self) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Sender_IsBase(true);
        return vkcoreurlnavigator->sender();
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnSender(const KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Sender_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCoreUrlNavigator_SenderSignalIndex(const KCoreUrlNavigator* self) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return vkcoreurlnavigator->senderSignalIndex();
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCoreUrlNavigator_QBaseSenderSignalIndex(const KCoreUrlNavigator* self) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_SenderSignalIndex_IsBase(true);
        return vkcoreurlnavigator->senderSignalIndex();
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnSenderSignalIndex(const KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCoreUrlNavigator_Receivers(const KCoreUrlNavigator* self, const char* signal) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return vkcoreurlnavigator->receivers(signal);
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCoreUrlNavigator_QBaseReceivers(const KCoreUrlNavigator* self, const char* signal) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Receivers_IsBase(true);
        return vkcoreurlnavigator->receivers(signal);
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnReceivers(const KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_Receivers_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCoreUrlNavigator_IsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        return vkcoreurlnavigator->isSignalConnected(*signal);
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCoreUrlNavigator_QBaseIsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_IsSignalConnected_IsBase(true);
        return vkcoreurlnavigator->isSignalConnected(*signal);
    } else {
        return ((VirtualKCoreUrlNavigator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnIsSignalConnected(const KCoreUrlNavigator* self, intptr_t slot) {
    auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self));
    if (vkcoreurlnavigator && vkcoreurlnavigator->isVirtualKCoreUrlNavigator) {
        vkcoreurlnavigator->setKCoreUrlNavigator_IsSignalConnected_Callback(reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_IsSignalConnected_Callback>(slot));
    }
}

void KCoreUrlNavigator_Delete(KCoreUrlNavigator* self) {
    delete self;
}
