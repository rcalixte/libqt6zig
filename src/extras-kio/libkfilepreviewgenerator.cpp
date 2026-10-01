#include <KAbstractViewAdapter>
#include <KFilePreviewGenerator>
#include <QAbstractItemView>
#include <QAbstractProxyModel>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kfilepreviewgenerator.h>
#include "libkfilepreviewgenerator.h"
#include "libkfilepreviewgenerator.hxx"

KFilePreviewGenerator* KFilePreviewGenerator_new(QAbstractItemView* parent) {
    return new VirtualKFilePreviewGenerator(parent);
}

KFilePreviewGenerator* KFilePreviewGenerator_new2(KAbstractViewAdapter* parent, QAbstractProxyModel* model) {
    return new VirtualKFilePreviewGenerator(parent, model);
}

QMetaObject* KFilePreviewGenerator_MetaObject(const KFilePreviewGenerator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFilePreviewGenerator_Metacast(KFilePreviewGenerator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFilePreviewGenerator_Metacall(KFilePreviewGenerator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFilePreviewGenerator_Tr(const char* s) {
    auto _ret = KFilePreviewGenerator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFilePreviewGenerator_SetPreviewShown(KFilePreviewGenerator* self, bool show) {
    self->setPreviewShown(show);
}

bool KFilePreviewGenerator_IsPreviewShown(const KFilePreviewGenerator* self) {
    return self->isPreviewShown();
}

void KFilePreviewGenerator_SetEnabledPlugins(KFilePreviewGenerator* self, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->setEnabledPlugins(list_QList);
}

libqt_list /* of libqt_string */ KFilePreviewGenerator_EnabledPlugins(const KFilePreviewGenerator* self) {
    QList<QString> _ret = self->enabledPlugins();
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

void KFilePreviewGenerator_UpdateIcons(KFilePreviewGenerator* self) {
    self->updateIcons();
}

void KFilePreviewGenerator_CancelPreviews(KFilePreviewGenerator* self) {
    self->cancelPreviews();
}

libqt_string KFilePreviewGenerator_Tr2(const char* s, const char* c) {
    auto _ret = KFilePreviewGenerator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFilePreviewGenerator_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFilePreviewGenerator::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFilePreviewGenerator_SuperMetaObject(const KFilePreviewGenerator* self) {
    return (QMetaObject*)self->KFilePreviewGenerator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnMetaObject(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self)))
        vkfilepreviewgenerator->kfilepreviewgenerator_metaobject_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFilePreviewGenerator_SuperMetacast(KFilePreviewGenerator* self, const char* param1) {
    return self->KFilePreviewGenerator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnMetacast(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_metacast_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFilePreviewGenerator_SuperMetacall(KFilePreviewGenerator* self, int param1, int param2, void** param3) {
    return self->KFilePreviewGenerator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnMetacall(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_metacall_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KFilePreviewGenerator_Event(KFilePreviewGenerator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFilePreviewGenerator_SuperEvent(KFilePreviewGenerator* self, QEvent* event) {
    return self->KFilePreviewGenerator::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnEvent(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_event_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFilePreviewGenerator_EventFilter(KFilePreviewGenerator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFilePreviewGenerator_SuperEventFilter(KFilePreviewGenerator* self, QObject* watched, QEvent* event) {
    return self->KFilePreviewGenerator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnEventFilter(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_eventfilter_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFilePreviewGenerator_TimerEvent(KFilePreviewGenerator* self, QTimerEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator) {
        vkfilepreviewgenerator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePreviewGenerator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePreviewGenerator_SuperTimerEvent(KFilePreviewGenerator* self, QTimerEvent* event) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self)) {
        vkfilepreviewgenerator->KFilePreviewGenerator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePreviewGenerator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnTimerEvent(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_timerevent_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePreviewGenerator_ChildEvent(KFilePreviewGenerator* self, QChildEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator) {
        vkfilepreviewgenerator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePreviewGenerator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePreviewGenerator_SuperChildEvent(KFilePreviewGenerator* self, QChildEvent* event) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self)) {
        vkfilepreviewgenerator->KFilePreviewGenerator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePreviewGenerator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnChildEvent(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_childevent_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePreviewGenerator_CustomEvent(KFilePreviewGenerator* self, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator) {
        vkfilepreviewgenerator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFilePreviewGenerator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePreviewGenerator_SuperCustomEvent(KFilePreviewGenerator* self, QEvent* event) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self)) {
        vkfilepreviewgenerator->KFilePreviewGenerator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFilePreviewGenerator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnCustomEvent(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_customevent_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFilePreviewGenerator_ConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator) {
        vkfilepreviewgenerator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePreviewGenerator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePreviewGenerator_SuperConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self)) {
        vkfilepreviewgenerator->KFilePreviewGenerator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePreviewGenerator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnConnectNotify(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_connectnotify_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFilePreviewGenerator_DisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator) {
        vkfilepreviewgenerator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFilePreviewGenerator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFilePreviewGenerator_SuperDisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self)) {
        vkfilepreviewgenerator->KFilePreviewGenerator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFilePreviewGenerator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnDisconnectNotify(KFilePreviewGenerator* self, intptr_t slot) {
    if (auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self))
        vkfilepreviewgenerator->kfilepreviewgenerator_disconnectnotify_callback = reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KFilePreviewGenerator_Sender(const KFilePreviewGenerator* self) {
    if (auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self))) {
        return vkfilepreviewgenerator->VirtualKFilePreviewGenerator::sender();
    } else
        qFatal("Error: Protected method KFilePreviewGenerator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePreviewGenerator_SenderSignalIndex(const KFilePreviewGenerator* self) {
    if (auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self))) {
        return vkfilepreviewgenerator->VirtualKFilePreviewGenerator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFilePreviewGenerator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFilePreviewGenerator_Receivers(const KFilePreviewGenerator* self, const char* signal) {
    if (auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self))) {
        return vkfilepreviewgenerator->VirtualKFilePreviewGenerator::receivers(signal);
    } else
        qFatal("Error: Protected method KFilePreviewGenerator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFilePreviewGenerator_IsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal) {
    if (auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self))) {
        return vkfilepreviewgenerator->VirtualKFilePreviewGenerator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFilePreviewGenerator::isSignalConnected called without a directly constructed type");
}

void KFilePreviewGenerator_Delete(KFilePreviewGenerator* self) {
    delete self;
}
