#include <KSycoca>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSycoca_Tr(const char* s) {
    auto _ret = KSycoca::tr(s);
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
    auto _ret = KSycoca::absoluteFilePath();
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    return self->isBuilding();
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
    if (vksycoca) {
        vksycoca->connectNotify(*signal);
    }
}

libqt_string KSycoca_Tr2(const char* s, const char* c) {
    auto _ret = KSycoca::tr(s, c);
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
    auto _ret = KSycoca::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSycoca_SuperMetaObject(const KSycoca* self) {
    return (QMetaObject*)self->KSycoca::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnMetaObject(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self)))
        vksycoca->ksycoca_metaobject_callback = reinterpret_cast<VirtualKSycoca::KSycoca_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSycoca_SuperMetacast(KSycoca* self, const char* param1) {
    return self->KSycoca::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnMetacast(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_metacast_callback = reinterpret_cast<VirtualKSycoca::KSycoca_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSycoca_SuperMetacall(KSycoca* self, int param1, int param2, void** param3) {
    return self->KSycoca::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnMetacall(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_metacall_callback = reinterpret_cast<VirtualKSycoca::KSycoca_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KSycoca_SuperIsBuilding(KSycoca* self) {
    return self->KSycoca::isBuilding();
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnIsBuilding(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_isbuilding_callback = reinterpret_cast<VirtualKSycoca::KSycoca_IsBuilding_Callback>(slot);
}

// Base class handler implementation
void KSycoca_SuperConnectNotify(KSycoca* self, const QMetaMethod* signal) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self)) {
        vksycoca->KSycoca::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSycoca::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnConnectNotify(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_connectnotify_callback = reinterpret_cast<VirtualKSycoca::KSycoca_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
bool KSycoca_Event(KSycoca* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSycoca_SuperEvent(KSycoca* self, QEvent* event) {
    return self->KSycoca::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnEvent(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_event_callback = reinterpret_cast<VirtualKSycoca::KSycoca_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSycoca_EventFilter(KSycoca* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSycoca_SuperEventFilter(KSycoca* self, QObject* watched, QEvent* event) {
    return self->KSycoca::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnEventFilter(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_eventfilter_callback = reinterpret_cast<VirtualKSycoca::KSycoca_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSycoca_TimerEvent(KSycoca* self, QTimerEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca) {
        vksycoca->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSycoca::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSycoca_SuperTimerEvent(KSycoca* self, QTimerEvent* event) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self)) {
        vksycoca->KSycoca::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSycoca::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnTimerEvent(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_timerevent_callback = reinterpret_cast<VirtualKSycoca::KSycoca_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSycoca_ChildEvent(KSycoca* self, QChildEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca) {
        vksycoca->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSycoca::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSycoca_SuperChildEvent(KSycoca* self, QChildEvent* event) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self)) {
        vksycoca->KSycoca::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSycoca::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnChildEvent(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_childevent_callback = reinterpret_cast<VirtualKSycoca::KSycoca_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSycoca_CustomEvent(KSycoca* self, QEvent* event) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca) {
        vksycoca->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSycoca::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSycoca_SuperCustomEvent(KSycoca* self, QEvent* event) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self)) {
        vksycoca->KSycoca::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSycoca::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnCustomEvent(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_customevent_callback = reinterpret_cast<VirtualKSycoca::KSycoca_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSycoca_DisconnectNotify(KSycoca* self, const QMetaMethod* signal) {
    auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self);
    if (vksycoca) {
        vksycoca->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSycoca::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSycoca_SuperDisconnectNotify(KSycoca* self, const QMetaMethod* signal) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self)) {
        vksycoca->KSycoca::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSycoca::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSycoca_OnDisconnectNotify(KSycoca* self, intptr_t slot) {
    if (auto* vksycoca = dynamic_cast<VirtualKSycoca*>(self))
        vksycoca->ksycoca_disconnectnotify_callback = reinterpret_cast<VirtualKSycoca::KSycoca_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KSycoca_Sender(const KSycoca* self) {
    if (auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self))) {
        return vksycoca->VirtualKSycoca::sender();
    } else
        qFatal("Error: Protected method KSycoca::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSycoca_SenderSignalIndex(const KSycoca* self) {
    if (auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self))) {
        return vksycoca->VirtualKSycoca::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSycoca::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSycoca_Receivers(const KSycoca* self, const char* signal) {
    if (auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self))) {
        return vksycoca->VirtualKSycoca::receivers(signal);
    } else
        qFatal("Error: Protected method KSycoca::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSycoca_IsSignalConnected(const KSycoca* self, const QMetaMethod* signal) {
    if (auto* vksycoca = const_cast<VirtualKSycoca*>(dynamic_cast<const VirtualKSycoca*>(self))) {
        return vksycoca->VirtualKSycoca::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSycoca::isSignalConnected called without a directly constructed type");
}

void KSycoca_Delete(KSycoca* self) {
    delete self;
}
