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
#include <QByteArray>
#include <cstring>
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
    auto* vknswidgets__action = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgets__action && vknswidgets__action->isVirtualKNSWidgetsAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSWidgets__Action_Tr(const char* s) {
    QString _ret = KNSWidgets::Action::tr(s);
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
    void (*slotFunc)(KNSWidgets__Action*, KNSCore__Entry**) = reinterpret_cast<void (*)(KNSWidgets__Action*, KNSCore__Entry**)>(slot);
    KNSWidgets::Action::connect(self, &KNSWidgets::Action::dialogFinished, [self, slotFunc](const QList<KNSCore::Entry>& changedEntries) {
        const QList<KNSCore::Entry>& changedEntries_ret = changedEntries;
        // Convert QList<> from C++ memory to manually-managed C memory
        KNSCore__Entry** changedEntries_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (changedEntries_ret.size() + 1)));
        for (qsizetype i = 0; i < changedEntries_ret.size(); ++i) {
            changedEntries_arr[i] = new KNSCore::Entry(changedEntries_ret[i]);
        }
        // Append sentinel value to the list
        changedEntries_arr[changedEntries_ret.size()] = nullptr;
        KNSCore__Entry** sigval1 = changedEntries_arr;
        slotFunc(self, sigval1);
        free(changedEntries_arr);
    });
}

libqt_string KNSWidgets__Action_Tr2(const char* s, const char* c) {
    QString _ret = KNSWidgets::Action::tr(s, c);
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
    QString _ret = KNSWidgets::Action::tr(s, c, static_cast<int>(n));
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
int KNSWidgets__Action_QBaseMetacall(KNSWidgets__Action* self, int param1, int param2, void** param3) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Metacall_IsBase(true);
        return vknswidgetsaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSWidgets::Action::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnMetacall(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Metacall_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Action_Event(KNSWidgets__Action* self, QEvent* param1) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        return vknswidgetsaction->event(param1);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KNSWidgets__Action_QBaseEvent(KNSWidgets__Action* self, QEvent* param1) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Event_IsBase(true);
        return vknswidgetsaction->event(param1);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnEvent(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Event_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Action_EventFilter(KNSWidgets__Action* self, QObject* watched, QEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        return vknswidgetsaction->eventFilter(watched, event);
    } else {
        return self->KNSWidgets::Action::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSWidgets__Action_QBaseEventFilter(KNSWidgets__Action* self, QObject* watched, QEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_EventFilter_IsBase(true);
        return vknswidgetsaction->eventFilter(watched, event);
    } else {
        return self->KNSWidgets::Action::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnEventFilter(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_EventFilter_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Action_TimerEvent(KNSWidgets__Action* self, QTimerEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->timerEvent(event);
    } else {
        ((VirtualKNSWidgetsAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Action_QBaseTimerEvent(KNSWidgets__Action* self, QTimerEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_TimerEvent_IsBase(true);
        vknswidgetsaction->timerEvent(event);
    } else {
        ((VirtualKNSWidgetsAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnTimerEvent(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_TimerEvent_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Action_ChildEvent(KNSWidgets__Action* self, QChildEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->childEvent(event);
    } else {
        ((VirtualKNSWidgetsAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Action_QBaseChildEvent(KNSWidgets__Action* self, QChildEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_ChildEvent_IsBase(true);
        vknswidgetsaction->childEvent(event);
    } else {
        ((VirtualKNSWidgetsAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnChildEvent(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_ChildEvent_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Action_CustomEvent(KNSWidgets__Action* self, QEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->customEvent(event);
    } else {
        ((VirtualKNSWidgetsAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Action_QBaseCustomEvent(KNSWidgets__Action* self, QEvent* event) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_CustomEvent_IsBase(true);
        vknswidgetsaction->customEvent(event);
    } else {
        ((VirtualKNSWidgetsAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnCustomEvent(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_CustomEvent_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Action_ConnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->connectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSWidgets__Action_QBaseConnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_ConnectNotify_IsBase(true);
        vknswidgetsaction->connectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnConnectNotify(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_ConnectNotify_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Action_DisconnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->disconnectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSWidgets__Action_QBaseDisconnectNotify(KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_DisconnectNotify_IsBase(true);
        vknswidgetsaction->disconnectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnDisconnectNotify(KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = dynamic_cast<VirtualKNSWidgetsAction*>(self);
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSWidgets__Action_Sender(const KNSWidgets__Action* self) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        return vknswidgetsaction->sender();
    } else {
        return ((VirtualKNSWidgetsAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSWidgets__Action_QBaseSender(const KNSWidgets__Action* self) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Sender_IsBase(true);
        return vknswidgetsaction->sender();
    } else {
        return ((VirtualKNSWidgetsAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnSender(const KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Sender_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Action_SenderSignalIndex(const KNSWidgets__Action* self) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        return vknswidgetsaction->senderSignalIndex();
    } else {
        return ((VirtualKNSWidgetsAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSWidgets__Action_QBaseSenderSignalIndex(const KNSWidgets__Action* self) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_SenderSignalIndex_IsBase(true);
        return vknswidgetsaction->senderSignalIndex();
    } else {
        return ((VirtualKNSWidgetsAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnSenderSignalIndex(const KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Action_Receivers(const KNSWidgets__Action* self, const char* signal) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        return vknswidgetsaction->receivers(signal);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSWidgets__Action_QBaseReceivers(const KNSWidgets__Action* self, const char* signal) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Receivers_IsBase(true);
        return vknswidgetsaction->receivers(signal);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnReceivers(const KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_Receivers_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Action_IsSignalConnected(const KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        return vknswidgetsaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSWidgets__Action_QBaseIsSignalConnected(const KNSWidgets__Action* self, const QMetaMethod* signal) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_IsSignalConnected_IsBase(true);
        return vknswidgetsaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSWidgetsAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Action_OnIsSignalConnected(const KNSWidgets__Action* self, intptr_t slot) {
    auto* vknswidgetsaction = const_cast<VirtualKNSWidgetsAction*>(dynamic_cast<const VirtualKNSWidgetsAction*>(self));
    if (vknswidgetsaction && vknswidgetsaction->isVirtualKNSWidgetsAction) {
        vknswidgetsaction->setKNSWidgets__Action_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSWidgetsAction::KNSWidgets__Action_IsSignalConnected_Callback>(slot));
    }
}

void KNSWidgets__Action_Delete(KNSWidgets__Action* self) {
    delete self;
}
