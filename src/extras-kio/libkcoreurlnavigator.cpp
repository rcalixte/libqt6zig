#include <KCoreUrlNavigator>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCoreUrlNavigator_Tr(const char* s) {
    auto _ret = KCoreUrlNavigator::tr(s);
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
    auto _ret = KCoreUrlNavigator::tr(s, c);
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
    auto _ret = KCoreUrlNavigator::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCoreUrlNavigator_SuperMetaObject(const KCoreUrlNavigator* self) {
    return (QMetaObject*)self->KCoreUrlNavigator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnMetaObject(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self)))
        vkcoreurlnavigator->kcoreurlnavigator_metaobject_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCoreUrlNavigator_SuperMetacast(KCoreUrlNavigator* self, const char* param1) {
    return self->KCoreUrlNavigator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnMetacast(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_metacast_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCoreUrlNavigator_SuperMetacall(KCoreUrlNavigator* self, int param1, int param2, void** param3) {
    return self->KCoreUrlNavigator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnMetacall(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_metacall_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KCoreUrlNavigator_Event(KCoreUrlNavigator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCoreUrlNavigator_SuperEvent(KCoreUrlNavigator* self, QEvent* event) {
    return self->KCoreUrlNavigator::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnEvent(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_event_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCoreUrlNavigator_EventFilter(KCoreUrlNavigator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCoreUrlNavigator_SuperEventFilter(KCoreUrlNavigator* self, QObject* watched, QEvent* event) {
    return self->KCoreUrlNavigator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnEventFilter(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_eventfilter_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCoreUrlNavigator_TimerEvent(KCoreUrlNavigator* self, QTimerEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator) {
        vkcoreurlnavigator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCoreUrlNavigator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreUrlNavigator_SuperTimerEvent(KCoreUrlNavigator* self, QTimerEvent* event) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self)) {
        vkcoreurlnavigator->KCoreUrlNavigator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCoreUrlNavigator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnTimerEvent(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_timerevent_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCoreUrlNavigator_ChildEvent(KCoreUrlNavigator* self, QChildEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator) {
        vkcoreurlnavigator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCoreUrlNavigator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreUrlNavigator_SuperChildEvent(KCoreUrlNavigator* self, QChildEvent* event) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self)) {
        vkcoreurlnavigator->KCoreUrlNavigator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCoreUrlNavigator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnChildEvent(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_childevent_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCoreUrlNavigator_CustomEvent(KCoreUrlNavigator* self, QEvent* event) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator) {
        vkcoreurlnavigator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCoreUrlNavigator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreUrlNavigator_SuperCustomEvent(KCoreUrlNavigator* self, QEvent* event) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self)) {
        vkcoreurlnavigator->KCoreUrlNavigator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCoreUrlNavigator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnCustomEvent(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_customevent_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCoreUrlNavigator_ConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator) {
        vkcoreurlnavigator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCoreUrlNavigator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreUrlNavigator_SuperConnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self)) {
        vkcoreurlnavigator->KCoreUrlNavigator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCoreUrlNavigator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnConnectNotify(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_connectnotify_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCoreUrlNavigator_DisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self);
    if (vkcoreurlnavigator) {
        vkcoreurlnavigator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCoreUrlNavigator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCoreUrlNavigator_SuperDisconnectNotify(KCoreUrlNavigator* self, const QMetaMethod* signal) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self)) {
        vkcoreurlnavigator->KCoreUrlNavigator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCoreUrlNavigator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCoreUrlNavigator_OnDisconnectNotify(KCoreUrlNavigator* self, intptr_t slot) {
    if (auto* vkcoreurlnavigator = dynamic_cast<VirtualKCoreUrlNavigator*>(self))
        vkcoreurlnavigator->kcoreurlnavigator_disconnectnotify_callback = reinterpret_cast<VirtualKCoreUrlNavigator::KCoreUrlNavigator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KCoreUrlNavigator_Sender(const KCoreUrlNavigator* self) {
    if (auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self))) {
        return vkcoreurlnavigator->VirtualKCoreUrlNavigator::sender();
    } else
        qFatal("Error: Protected method KCoreUrlNavigator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCoreUrlNavigator_SenderSignalIndex(const KCoreUrlNavigator* self) {
    if (auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self))) {
        return vkcoreurlnavigator->VirtualKCoreUrlNavigator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCoreUrlNavigator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCoreUrlNavigator_Receivers(const KCoreUrlNavigator* self, const char* signal) {
    if (auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self))) {
        return vkcoreurlnavigator->VirtualKCoreUrlNavigator::receivers(signal);
    } else
        qFatal("Error: Protected method KCoreUrlNavigator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCoreUrlNavigator_IsSignalConnected(const KCoreUrlNavigator* self, const QMetaMethod* signal) {
    if (auto* vkcoreurlnavigator = const_cast<VirtualKCoreUrlNavigator*>(dynamic_cast<const VirtualKCoreUrlNavigator*>(self))) {
        return vkcoreurlnavigator->VirtualKCoreUrlNavigator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCoreUrlNavigator::isSignalConnected called without a directly constructed type");
}

void KCoreUrlNavigator_Delete(KCoreUrlNavigator* self) {
    delete self;
}
