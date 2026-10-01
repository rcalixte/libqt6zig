#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Action
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <action.h>
#include "libaction.h"
#include "libaction.hxx"

KNSWidgets__Action* KNSWidgets__Action_new(const libqt_string text, const libqt_string configFile, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKNSWidgetsAction(text_QString, configFile_QString, parent);
}

QMetaObject* KNSWidgets__Action_MetaObject(const KNSWidgets__Action* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSWidgets__Action_Metacast(KNSWidgets__Action* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSWidgets__Action_Metacall(KNSWidgets__Action* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSWidgets__Action_Tr(const char* s) {
    auto _ret = KNSWidgets::Action::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSWidgets__Action_DialogFinished(KNSWidgets__Action* self, const libqt_list /* of KNSCore__Entry* */ changedEntries) {
    QList<KNSCore::Entry> changedEntries_QList;
    changedEntries_QList.reserve(changedEntries.len);
    KNSCore__Entry** changedEntries_arr = static_cast<KNSCore__Entry**>(changedEntries.data);
    for (size_t i = 0; i < changedEntries.len; ++i) {
        changedEntries_QList.push_back(*(changedEntries_arr[i]));
    }
    self->dialogFinished(changedEntries_QList);
}

void KNSWidgets__Action_Connect_DialogFinished(KNSWidgets__Action* self, intptr_t slot) {
    void (*slotFunc)(KNSWidgets__Action*, libqt_list /* of KNSCore__Entry* */) = reinterpret_cast<void (*)(KNSWidgets__Action*, libqt_list /* of KNSCore__Entry* */)>(slot);
    KNSWidgets::Action::connect(self,
                                static_cast<void (KNSWidgets::Action::*)(const QList<KNSCore::Entry>&)>(&KNSWidgets::Action::dialogFinished),
                                [self, slotFunc](const QList<KNSCore::Entry>& changedEntries) {
                                    const QList<KNSCore::Entry>& changedEntries_ret = changedEntries;
                                    // Convert QList<> from C++ memory to manually-managed C memory
                                    KNSCore__Entry** changedEntries_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (changedEntries_ret.size())));
                                    for (qsizetype i = 0; i < changedEntries_ret.size(); ++i) {
                                        changedEntries_arr[i] = new KNSCore::Entry(changedEntries_ret[i]);
                                    }
                                    libqt_list changedEntries_out;
                                    changedEntries_out.len = changedEntries_ret.size();
                                    changedEntries_out.data = static_cast<void*>(changedEntries_arr);
                                    libqt_list /* of KNSCore__Entry* */ sigval1 = changedEntries_out;
                                    slotFunc(self, sigval1);
                                    free(changedEntries_arr);
                                });
}

libqt_string KNSWidgets__Action_Tr2(const char* s, const char* c) {
    auto _ret = KNSWidgets::Action::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSWidgets__Action_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNSWidgets::Action::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNSWidgets__Action_SuperMetaObject(const KNSWidgets__Action* self) {
    return (QMetaObject*)self->KNSWidgets::Action::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnMetaObject(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self)))
        vknswidgetsaction->knswidgets__action_metaobject_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNSWidgets__Action_SuperMetacast(KNSWidgets__Action* self, const char* param1) {
    return self->KNSWidgets::Action::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnMetacast(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_metacast_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNSWidgets__Action_SuperMetacall(KNSWidgets__Action* self, int param1, int param2, void** param3) {
    return self->KNSWidgets::Action::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnMetacall(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_metacall_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Action_Event(KNSWidgets__Action* self, QEvent* param1) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction) {
        return vknswidgetsaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Action::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Action_SuperEvent(KNSWidgets__Action* self, QEvent* param1) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self)) {
        return vknswidgetsaction->KNSWidgets::Action::event(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Action::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnEvent(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_event_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Event_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Action_EventFilter(KNSWidgets__Action* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNSWidgets__Action_SuperEventFilter(KNSWidgets__Action* self, QObject* watched, QEvent* event) {
    return self->KNSWidgets::Action::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnEventFilter(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_eventfilter_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Action_TimerEvent(KNSWidgets__Action* self, QTimerEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction) {
        vknswidgetsaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Action::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Action_SuperTimerEvent(KNSWidgets__Action* self, QTimerEvent* event) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self)) {
        vknswidgetsaction->KNSWidgets::Action::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Action::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnTimerEvent(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_timerevent_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Action_ChildEvent(KNSWidgets__Action* self, QChildEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction) {
        vknswidgetsaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Action::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Action_SuperChildEvent(KNSWidgets__Action* self, QChildEvent* event) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self)) {
        vknswidgetsaction->KNSWidgets::Action::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Action::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnChildEvent(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_childevent_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Action_CustomEvent(KNSWidgets__Action* self, QEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction) {
        vknswidgetsaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Action::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Action_SuperCustomEvent(KNSWidgets__Action* self, QEvent* event) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self)) {
        vknswidgetsaction->KNSWidgets::Action::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Action::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnCustomEvent(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_customevent_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Action_ConnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction) {
        vknswidgetsaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Action::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Action_SuperConnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self)) {
        vknswidgetsaction->KNSWidgets::Action::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Action::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnConnectNotify(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_connectnotify_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Action_DisconnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction) {
        vknswidgetsaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Action::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Action_SuperDisconnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self)) {
        vknswidgetsaction->KNSWidgets::Action::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Action::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnDisconnectNotify(KNSWidgets__Action* self, intptr_t slot) {
    if (auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self))
        vknswidgetsaction->knswidgets__action_disconnectnotify_callback = reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KNSWidgets__Action_Sender(const KNSWidgets__Action* self) {
    if (auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self))) {
        return vknswidgetsaction->VirtualKNSWidgetsAction::sender();
    } else
        qFatal("Error: Protected method KNSWidgets::Action::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSWidgets__Action_SenderSignalIndex(const KNSWidgets__Action* self) {
    if (auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self))) {
        return vknswidgetsaction->VirtualKNSWidgetsAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNSWidgets::Action::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSWidgets__Action_Receivers(const KNSWidgets__Action* self, const char* signal) {
    if (auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self))) {
        return vknswidgetsaction->VirtualKNSWidgetsAction::receivers(signal);
    } else
        qFatal("Error: Protected method KNSWidgets::Action::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Action_IsSignalConnected(const KNSWidgets__Action* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self))) {
        return vknswidgetsaction->VirtualKNSWidgetsAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNSWidgets::Action::isSignalConnected called without a directly constructed type");
}

void KNSWidgets__Action_Delete(KNSWidgets__Action* self) {
    delete self;
}
