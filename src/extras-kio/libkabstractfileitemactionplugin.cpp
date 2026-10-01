#include <KAbstractFileItemActionPlugin>
#include <KFileItemListProperties>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kabstractfileitemactionplugin.h>
#include "libkabstractfileitemactionplugin.h"
#include "libkabstractfileitemactionplugin.hxx"

KAbstractFileItemActionPlugin* KAbstractFileItemActionPlugin_new(QObject* parent) {
    return new VirtualKAbstractFileItemActionPlugin(parent);
}

QMetaObject* KAbstractFileItemActionPlugin_MetaObject(const KAbstractFileItemActionPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAbstractFileItemActionPlugin_Metacast(KAbstractFileItemActionPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAbstractFileItemActionPlugin_Metacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAbstractFileItemActionPlugin_Tr(const char* s) {
    auto _ret = KAbstractFileItemActionPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_Actions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget) {
    QList<QAction*> _ret = self->actions(*fileItemInfos, parentWidget);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KAbstractFileItemActionPlugin_Error(KAbstractFileItemActionPlugin* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->error(errorMessage_QString);
}

void KAbstractFileItemActionPlugin_Connect_Error(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    void (*slotFunc)(KAbstractFileItemActionPlugin*, const char*) = reinterpret_cast<void (*)(KAbstractFileItemActionPlugin*, const char*)>(slot);
    KAbstractFileItemActionPlugin::connect(self,
                                           static_cast<void (KAbstractFileItemActionPlugin::*)(const QString&)>(&KAbstractFileItemActionPlugin::error),
                                           [self, slotFunc](const QString& errorMessage) {
                                               const auto errorMessage_ret = errorMessage;
                                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                               QByteArray errorMessage_b = errorMessage_ret.toUtf8();
                                               auto errorMessage_str_len = errorMessage_b.length();
                                               const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_str_len + 1));
                                               memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_str_len);
                                               ((char*)errorMessage_str)[errorMessage_str_len] = '\0';
                                               const char* sigval1 = errorMessage_str;
                                               slotFunc(self, sigval1);
                                               libqt_free(errorMessage_str);
                                           });
}

libqt_string KAbstractFileItemActionPlugin_Tr2(const char* s, const char* c) {
    auto _ret = KAbstractFileItemActionPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAbstractFileItemActionPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAbstractFileItemActionPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* KAbstractFileItemActionPlugin_SuperMetaObject(const KAbstractFileItemActionPlugin* self) {
    return (QMetaObject*)self->KAbstractFileItemActionPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnMetaObject(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self)))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_metaobject_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAbstractFileItemActionPlugin_SuperMetacast(KAbstractFileItemActionPlugin* self, const char* param1) {
    return self->KAbstractFileItemActionPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnMetacast(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_metacast_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAbstractFileItemActionPlugin_SuperMetacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3) {
    return self->KAbstractFileItemActionPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnMetacall(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_metacall_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnActions(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_actions_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Actions_Callback>(slot);
}

// Derived class handler implementation
bool KAbstractFileItemActionPlugin_Event(KAbstractFileItemActionPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KAbstractFileItemActionPlugin_SuperEvent(KAbstractFileItemActionPlugin* self, QEvent* event) {
    return self->KAbstractFileItemActionPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_event_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KAbstractFileItemActionPlugin_EventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KAbstractFileItemActionPlugin_SuperEventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event) {
    return self->KAbstractFileItemActionPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnEventFilter(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_eventfilter_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_TimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin) {
        vkabstractfileitemactionplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_SuperTimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self)) {
        vkabstractfileitemactionplugin->KAbstractFileItemActionPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnTimerEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_timerevent_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_ChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin) {
        vkabstractfileitemactionplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_SuperChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self)) {
        vkabstractfileitemactionplugin->KAbstractFileItemActionPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnChildEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_childevent_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_CustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin) {
        vkabstractfileitemactionplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_SuperCustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self)) {
        vkabstractfileitemactionplugin->KAbstractFileItemActionPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnCustomEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_customevent_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_ConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin) {
        vkabstractfileitemactionplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_SuperConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self)) {
        vkabstractfileitemactionplugin->KAbstractFileItemActionPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnConnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_connectnotify_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_DisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin) {
        vkabstractfileitemactionplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_SuperDisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self)) {
        vkabstractfileitemactionplugin->KAbstractFileItemActionPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAbstractFileItemActionPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnDisconnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    if (auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self))
        vkabstractfileitemactionplugin->kabstractfileitemactionplugin_disconnectnotify_callback = reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KAbstractFileItemActionPlugin_Sender(const KAbstractFileItemActionPlugin* self) {
    if (auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self))) {
        return vkabstractfileitemactionplugin->VirtualKAbstractFileItemActionPlugin::sender();
    } else
        qFatal("Error: Protected method KAbstractFileItemActionPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAbstractFileItemActionPlugin_SenderSignalIndex(const KAbstractFileItemActionPlugin* self) {
    if (auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self))) {
        return vkabstractfileitemactionplugin->VirtualKAbstractFileItemActionPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAbstractFileItemActionPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAbstractFileItemActionPlugin_Receivers(const KAbstractFileItemActionPlugin* self, const char* signal) {
    if (auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self))) {
        return vkabstractfileitemactionplugin->VirtualKAbstractFileItemActionPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KAbstractFileItemActionPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAbstractFileItemActionPlugin_IsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    if (auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self))) {
        return vkabstractfileitemactionplugin->VirtualKAbstractFileItemActionPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAbstractFileItemActionPlugin::isSignalConnected called without a directly constructed type");
}

void KAbstractFileItemActionPlugin_Delete(KAbstractFileItemActionPlugin* self) {
    delete self;
}
