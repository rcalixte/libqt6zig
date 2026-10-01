#include <KConfigDialogManager>
#include <KCoreConfigSkeleton>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHash>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kconfigdialogmanager.h>
#include "libkconfigdialogmanager.h"
#include "libkconfigdialogmanager.hxx"

KConfigDialogManager* KConfigDialogManager_new(QWidget* parent, KCoreConfigSkeleton* conf) {
    return new VirtualKConfigDialogManager(parent, conf);
}

QMetaObject* KConfigDialogManager_MetaObject(const KConfigDialogManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigDialogManager_Metacast(KConfigDialogManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigDialogManager_Metacall(KConfigDialogManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KConfigDialogManager_Tr(const char* s) {
    auto _ret = KConfigDialogManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigDialogManager_SettingsChanged(KConfigDialogManager* self) {
    self->settingsChanged();
}

void KConfigDialogManager_Connect_SettingsChanged(KConfigDialogManager* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialogManager*) = reinterpret_cast<void (*)(KConfigDialogManager*)>(slot);
    KConfigDialogManager::connect(self,
                                  static_cast<void (KConfigDialogManager::*)()>(&KConfigDialogManager::settingsChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KConfigDialogManager_WidgetModified(KConfigDialogManager* self) {
    self->widgetModified();
}

void KConfigDialogManager_Connect_WidgetModified(KConfigDialogManager* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialogManager*) = reinterpret_cast<void (*)(KConfigDialogManager*)>(slot);
    KConfigDialogManager::connect(self,
                                  static_cast<void (KConfigDialogManager::*)()>(&KConfigDialogManager::widgetModified),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

void KConfigDialogManager_AddWidget(KConfigDialogManager* self, QWidget* widget) {
    self->addWidget(widget);
}

bool KConfigDialogManager_HasChanged(const KConfigDialogManager* self) {
    return self->hasChanged();
}

bool KConfigDialogManager_IsDefault(const KConfigDialogManager* self) {
    return self->isDefault();
}

libqt_map* /* of libqt_string to libqt_string */ KConfigDialogManager_PropertyMap() {
    QHash<QString, QByteArray>* _ret = KConfigDialogManager::propertyMap();
    // Convert QHash<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret->size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret->size()));
    int _ctr = 0;
    for (auto _itr = _ret->keyValueBegin(); _itr != _ret->keyValueEnd(); ++_itr) {
        auto _hashkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _hashkey_b = _hashkey_ret.toUtf8();
        libqt_string _hashkey_str;
        _hashkey_str.len = _hashkey_b.length();
        _hashkey_str.data = static_cast<const char*>(malloc(_hashkey_str.len + 1));
        memcpy((void*)_hashkey_str.data, _hashkey_b.data(), _hashkey_str.len);
        ((char*)_hashkey_str.data)[_hashkey_str.len] = '\0';
        _karr[_ctr] = _hashkey_str;
        QByteArray _hashval_qb = _itr->second;
        libqt_string _hashval_str;
        _hashval_str.len = _hashval_qb.length();
        _hashval_str.data = static_cast<char*>(malloc(_hashval_str.len));
        memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
        _varr[_ctr] = _hashval_str;
        _ctr++;
    }
    libqt_map* _out = static_cast<libqt_map*>(malloc(sizeof(libqt_map)));
    _out->len = _ret->size();
    _out->keys = static_cast<void*>(_karr);
    _out->values = static_cast<void*>(_varr);
    return _out;
}

void KConfigDialogManager_UpdateSettings(KConfigDialogManager* self) {
    self->updateSettings();
}

void KConfigDialogManager_UpdateWidgets(KConfigDialogManager* self) {
    self->updateWidgets();
}

void KConfigDialogManager_UpdateWidgetsDefault(KConfigDialogManager* self) {
    self->updateWidgetsDefault();
}

void KConfigDialogManager_SetDefaultsIndicatorsVisible(KConfigDialogManager* self, bool enabled) {
    self->setDefaultsIndicatorsVisible(enabled);
}

libqt_string KConfigDialogManager_Tr2(const char* s, const char* c) {
    auto _ret = KConfigDialogManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigDialogManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = KConfigDialogManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* KConfigDialogManager_SuperMetaObject(const KConfigDialogManager* self) {
    return (QMetaObject*)self->KConfigDialogManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnMetaObject(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self)))
        vkconfigdialogmanager->kconfigdialogmanager_metaobject_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KConfigDialogManager_SuperMetacast(KConfigDialogManager* self, const char* param1) {
    return self->KConfigDialogManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnMetacast(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_metacast_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int KConfigDialogManager_SuperMetacall(KConfigDialogManager* self, int param1, int param2, void** param3) {
    return self->KConfigDialogManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnMetacall(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_metacall_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialogManager_Event(KConfigDialogManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KConfigDialogManager_SuperEvent(KConfigDialogManager* self, QEvent* event) {
    return self->KConfigDialogManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnEvent(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_event_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialogManager_EventFilter(KConfigDialogManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KConfigDialogManager_SuperEventFilter(KConfigDialogManager* self, QObject* watched, QEvent* event) {
    return self->KConfigDialogManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnEventFilter(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_eventfilter_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialogManager_TimerEvent(KConfigDialogManager* self, QTimerEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager) {
        vkconfigdialogmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialogManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialogManager_SuperTimerEvent(KConfigDialogManager* self, QTimerEvent* event) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->KConfigDialogManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialogManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnTimerEvent(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_timerevent_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialogManager_ChildEvent(KConfigDialogManager* self, QChildEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager) {
        vkconfigdialogmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialogManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialogManager_SuperChildEvent(KConfigDialogManager* self, QChildEvent* event) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->KConfigDialogManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialogManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnChildEvent(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_childevent_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialogManager_CustomEvent(KConfigDialogManager* self, QEvent* event) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager) {
        vkconfigdialogmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialogManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialogManager_SuperCustomEvent(KConfigDialogManager* self, QEvent* event) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->KConfigDialogManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialogManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnCustomEvent(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_customevent_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialogManager_ConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager) {
        vkconfigdialogmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigDialogManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialogManager_SuperConnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->KConfigDialogManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigDialogManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnConnectNotify(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_connectnotify_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialogManager_DisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self);
    if (vkconfigdialogmanager) {
        vkconfigdialogmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigDialogManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialogManager_SuperDisconnectNotify(KConfigDialogManager* self, const QMetaMethod* signal) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->KConfigDialogManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigDialogManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialogManager_OnDisconnectNotify(KConfigDialogManager* self, intptr_t slot) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self))
        vkconfigdialogmanager->kconfigdialogmanager_disconnectnotify_callback = reinterpret_cast<VirtualKConfigDialogManager::KConfigDialogManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KConfigDialogManager_Init(KConfigDialogManager* self, bool trackChanges) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->VirtualKConfigDialogManager::init(trackChanges);
    } else
        qFatal("Error: Protected method KConfigDialogManager::init called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigDialogManager_ParseChildren(KConfigDialogManager* self, const QWidget* widget, bool trackChanges) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        return vkconfigdialogmanager->VirtualKConfigDialogManager::parseChildren(widget, trackChanges);
    } else
        qFatal("Error: Protected method KConfigDialogManager::parseChildren called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KConfigDialogManager_GetUserProperty(const KConfigDialogManager* self, const QWidget* widget) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        QByteArray _qb = vkconfigdialogmanager->VirtualKConfigDialogManager::getUserProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method KConfigDialogManager::getUserProperty called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KConfigDialogManager_GetCustomProperty(const KConfigDialogManager* self, const QWidget* widget) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        QByteArray _qb = vkconfigdialogmanager->VirtualKConfigDialogManager::getCustomProperty(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method KConfigDialogManager::getCustomProperty called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KConfigDialogManager_GetUserPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        QByteArray _qb = vkconfigdialogmanager->VirtualKConfigDialogManager::getUserPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method KConfigDialogManager::getUserPropertyChangedSignal called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string KConfigDialogManager_GetCustomPropertyChangedSignal(const KConfigDialogManager* self, const QWidget* widget) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        QByteArray _qb = vkconfigdialogmanager->VirtualKConfigDialogManager::getCustomPropertyChangedSignal(widget);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method KConfigDialogManager::getCustomPropertyChangedSignal called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialogManager_SetProperty(KConfigDialogManager* self, QWidget* w, const QVariant* v) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->VirtualKConfigDialogManager::setProperty(w, *v);
    } else
        qFatal("Error: Protected method KConfigDialogManager::setProperty called without a directly constructed type");
}

// Derived class handler implementation
QVariant* KConfigDialogManager_Property(const KConfigDialogManager* self, QWidget* w) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self)))
        return new QVariant(vkconfigdialogmanager->property(w));
    qFatal("Error: Protected method KConfigDialogManager::property called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialogManager_SetupWidget(KConfigDialogManager* self, QWidget* widget, KConfigSkeletonItem* item) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->VirtualKConfigDialogManager::setupWidget(widget, item);
    } else
        qFatal("Error: Protected method KConfigDialogManager::setupWidget called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialogManager_InitMaps(KConfigDialogManager* self) {
    if (auto* vkconfigdialogmanager = dynamic_cast<VirtualKConfigDialogManager*>(self)) {
        vkconfigdialogmanager->VirtualKConfigDialogManager::initMaps();
    } else
        qFatal("Error: Protected method KConfigDialogManager::initMaps called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KConfigDialogManager_Sender(const KConfigDialogManager* self) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        return vkconfigdialogmanager->VirtualKConfigDialogManager::sender();
    } else
        qFatal("Error: Protected method KConfigDialogManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigDialogManager_SenderSignalIndex(const KConfigDialogManager* self) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        return vkconfigdialogmanager->VirtualKConfigDialogManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method KConfigDialogManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigDialogManager_Receivers(const KConfigDialogManager* self, const char* signal) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        return vkconfigdialogmanager->VirtualKConfigDialogManager::receivers(signal);
    } else
        qFatal("Error: Protected method KConfigDialogManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigDialogManager_IsSignalConnected(const KConfigDialogManager* self, const QMetaMethod* signal) {
    if (auto* vkconfigdialogmanager = const_cast<VirtualKConfigDialogManager*>(dynamic_cast<const VirtualKConfigDialogManager*>(self))) {
        return vkconfigdialogmanager->VirtualKConfigDialogManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KConfigDialogManager::isSignalConnected called without a directly constructed type");
}

void KConfigDialogManager_Delete(KConfigDialogManager* self) {
    delete self;
}
