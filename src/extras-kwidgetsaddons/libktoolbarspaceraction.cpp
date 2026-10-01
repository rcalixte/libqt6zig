#include <KToolBarSpacerAction>
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
#include <QWidgetAction>
#include <ktoolbarspaceraction.h>
#include "libktoolbarspaceraction.h"
#include "libktoolbarspaceraction.hxx"

KToolBarSpacerAction* KToolBarSpacerAction_new(QObject* parent) {
    return new VirtualKToolBarSpacerAction(parent);
}

QMetaObject* KToolBarSpacerAction_MetaObject(const KToolBarSpacerAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBarSpacerAction_Metacast(KToolBarSpacerAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBarSpacerAction_Metacall(KToolBarSpacerAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToolBarSpacerAction_Tr(const char* s) {
    auto _ret = KToolBarSpacerAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KToolBarSpacerAction_CreateWidget(KToolBarSpacerAction* self, QWidget* parent) {
    return self->createWidget(parent);
}

libqt_string KToolBarSpacerAction_Tr2(const char* s, const char* c) {
    auto _ret = KToolBarSpacerAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBarSpacerAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KToolBarSpacerAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToolBarSpacerAction_SuperMetaObject(const KToolBarSpacerAction* self) {
    return (QMetaObject*)self->KToolBarSpacerAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnMetaObject(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self)))
        vktoolbarspaceraction->ktoolbarspaceraction_metaobject_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToolBarSpacerAction_SuperMetacast(KToolBarSpacerAction* self, const char* param1) {
    return self->KToolBarSpacerAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnMetacast(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_metacast_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToolBarSpacerAction_SuperMetacall(KToolBarSpacerAction* self, int param1, int param2, void** param3) {
    return self->KToolBarSpacerAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnMetacall(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_metacall_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KToolBarSpacerAction_SuperCreateWidget(KToolBarSpacerAction* self, QWidget* parent) {
    return self->KToolBarSpacerAction::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnCreateWidget(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_createwidget_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool KToolBarSpacerAction_Event(KToolBarSpacerAction* self, QEvent* param1) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        return vktoolbarspaceraction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBarSpacerAction_SuperEvent(KToolBarSpacerAction* self, QEvent* param1) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        return vktoolbarspaceraction->KToolBarSpacerAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnEvent(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_event_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KToolBarSpacerAction_EventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        return vktoolbarspaceraction->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBarSpacerAction_SuperEventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        return vktoolbarspaceraction->KToolBarSpacerAction::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnEventFilter(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_eventfilter_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KToolBarSpacerAction_DeleteWidget(KToolBarSpacerAction* self, QWidget* widget) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        vktoolbarspaceraction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarSpacerAction_SuperDeleteWidget(KToolBarSpacerAction* self, QWidget* widget) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        vktoolbarspaceraction->KToolBarSpacerAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnDeleteWidget(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_deletewidget_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KToolBarSpacerAction_TimerEvent(KToolBarSpacerAction* self, QTimerEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        vktoolbarspaceraction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarSpacerAction_SuperTimerEvent(KToolBarSpacerAction* self, QTimerEvent* event) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        vktoolbarspaceraction->KToolBarSpacerAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnTimerEvent(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_timerevent_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarSpacerAction_ChildEvent(KToolBarSpacerAction* self, QChildEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        vktoolbarspaceraction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarSpacerAction_SuperChildEvent(KToolBarSpacerAction* self, QChildEvent* event) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        vktoolbarspaceraction->KToolBarSpacerAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnChildEvent(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_childevent_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarSpacerAction_CustomEvent(KToolBarSpacerAction* self, QEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        vktoolbarspaceraction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarSpacerAction_SuperCustomEvent(KToolBarSpacerAction* self, QEvent* event) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        vktoolbarspaceraction->KToolBarSpacerAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnCustomEvent(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_customevent_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarSpacerAction_ConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        vktoolbarspaceraction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarSpacerAction_SuperConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        vktoolbarspaceraction->KToolBarSpacerAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnConnectNotify(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_connectnotify_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToolBarSpacerAction_DisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction) {
        vktoolbarspaceraction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBarSpacerAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarSpacerAction_SuperDisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self)) {
        vktoolbarspaceraction->KToolBarSpacerAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBarSpacerAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnDisconnectNotify(KToolBarSpacerAction* self, intptr_t slot) {
    if (auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self))
        vktoolbarspaceraction->ktoolbarspaceraction_disconnectnotify_callback = reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KToolBarSpacerAction_CreatedWidgets(const KToolBarSpacerAction* self) {
    if (auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self))) {
        QList<QWidget*> _ret = vktoolbarspaceraction->VirtualKToolBarSpacerAction::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KToolBarSpacerAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KToolBarSpacerAction_Sender(const KToolBarSpacerAction* self) {
    if (auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self))) {
        return vktoolbarspaceraction->VirtualKToolBarSpacerAction::sender();
    } else
        qFatal("Error: Protected method KToolBarSpacerAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBarSpacerAction_SenderSignalIndex(const KToolBarSpacerAction* self) {
    if (auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self))) {
        return vktoolbarspaceraction->VirtualKToolBarSpacerAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToolBarSpacerAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBarSpacerAction_Receivers(const KToolBarSpacerAction* self, const char* signal) {
    if (auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self))) {
        return vktoolbarspaceraction->VirtualKToolBarSpacerAction::receivers(signal);
    } else
        qFatal("Error: Protected method KToolBarSpacerAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolBarSpacerAction_IsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self))) {
        return vktoolbarspaceraction->VirtualKToolBarSpacerAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToolBarSpacerAction::isSignalConnected called without a directly constructed type");
}

void KToolBarSpacerAction_Delete(KToolBarSpacerAction* self) {
    delete self;
}
