#include <KToolBarPopupAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <ktoolbarpopupaction.h>
#include "libktoolbarpopupaction.h"
#include "libktoolbarpopupaction.hxx"

KToolBarPopupAction* KToolBarPopupAction_new(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToolBarPopupAction(*icon, text_QString, parent);
}

QMetaObject* KToolBarPopupAction_MetaObject(const KToolBarPopupAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBarPopupAction_Metacast(KToolBarPopupAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBarPopupAction_Metacall(KToolBarPopupAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToolBarPopupAction_Tr(const char* s) {
    auto _ret = KToolBarPopupAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMenu* KToolBarPopupAction_PopupMenu(const KToolBarPopupAction* self) {
    return self->popupMenu();
}

int KToolBarPopupAction_PopupMode(const KToolBarPopupAction* self) {
    return static_cast<int>(self->popupMode());
}

void KToolBarPopupAction_SetPopupMode(KToolBarPopupAction* self, int popupMode) {
    self->setPopupMode(static_cast<KToolBarPopupAction::PopupMode>(popupMode));
}

QWidget* KToolBarPopupAction_CreateWidget(KToolBarPopupAction* self, QWidget* parent) {
    return self->createWidget(parent);
}

libqt_string KToolBarPopupAction_Tr2(const char* s, const char* c) {
    auto _ret = KToolBarPopupAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBarPopupAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KToolBarPopupAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToolBarPopupAction_SuperMetaObject(const KToolBarPopupAction* self) {
    return (QMetaObject*)self->KToolBarPopupAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnMetaObject(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self)))
        vktoolbarpopupaction->ktoolbarpopupaction_metaobject_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToolBarPopupAction_SuperMetacast(KToolBarPopupAction* self, const char* param1) {
    return self->KToolBarPopupAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnMetacast(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_metacast_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToolBarPopupAction_SuperMetacall(KToolBarPopupAction* self, int param1, int param2, void** param3) {
    return self->KToolBarPopupAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnMetacall(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_metacall_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KToolBarPopupAction_SuperCreateWidget(KToolBarPopupAction* self, QWidget* parent) {
    return self->KToolBarPopupAction::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnCreateWidget(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_createwidget_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool KToolBarPopupAction_Event(KToolBarPopupAction* self, QEvent* param1) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        return vktoolbarpopupaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBarPopupAction_SuperEvent(KToolBarPopupAction* self, QEvent* param1) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        return vktoolbarpopupaction->KToolBarPopupAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnEvent(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_event_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KToolBarPopupAction_EventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        return vktoolbarpopupaction->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KToolBarPopupAction_SuperEventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        return vktoolbarpopupaction->KToolBarPopupAction::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnEventFilter(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_eventfilter_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KToolBarPopupAction_DeleteWidget(KToolBarPopupAction* self, QWidget* widget) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        vktoolbarpopupaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarPopupAction_SuperDeleteWidget(KToolBarPopupAction* self, QWidget* widget) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        vktoolbarpopupaction->KToolBarPopupAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnDeleteWidget(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_deletewidget_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KToolBarPopupAction_TimerEvent(KToolBarPopupAction* self, QTimerEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        vktoolbarpopupaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarPopupAction_SuperTimerEvent(KToolBarPopupAction* self, QTimerEvent* event) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        vktoolbarpopupaction->KToolBarPopupAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnTimerEvent(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_timerevent_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarPopupAction_ChildEvent(KToolBarPopupAction* self, QChildEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        vktoolbarpopupaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarPopupAction_SuperChildEvent(KToolBarPopupAction* self, QChildEvent* event) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        vktoolbarpopupaction->KToolBarPopupAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnChildEvent(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_childevent_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarPopupAction_CustomEvent(KToolBarPopupAction* self, QEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        vktoolbarpopupaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarPopupAction_SuperCustomEvent(KToolBarPopupAction* self, QEvent* event) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        vktoolbarpopupaction->KToolBarPopupAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnCustomEvent(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_customevent_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarPopupAction_ConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        vktoolbarpopupaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarPopupAction_SuperConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        vktoolbarpopupaction->KToolBarPopupAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnConnectNotify(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_connectnotify_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToolBarPopupAction_DisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction) {
        vktoolbarpopupaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBarPopupAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarPopupAction_SuperDisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self)) {
        vktoolbarpopupaction->KToolBarPopupAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBarPopupAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnDisconnectNotify(KToolBarPopupAction* self, intptr_t slot) {
    if (auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self))
        vktoolbarpopupaction->ktoolbarpopupaction_disconnectnotify_callback = reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KToolBarPopupAction_CreatedWidgets(const KToolBarPopupAction* self) {
    if (auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self))) {
        QList<QWidget*> _ret = vktoolbarpopupaction->VirtualKToolBarPopupAction::createdWidgets();
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
        qFatal("Error: Protected method KToolBarPopupAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KToolBarPopupAction_Sender(const KToolBarPopupAction* self) {
    if (auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self))) {
        return vktoolbarpopupaction->VirtualKToolBarPopupAction::sender();
    } else
        qFatal("Error: Protected method KToolBarPopupAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBarPopupAction_SenderSignalIndex(const KToolBarPopupAction* self) {
    if (auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self))) {
        return vktoolbarpopupaction->VirtualKToolBarPopupAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToolBarPopupAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBarPopupAction_Receivers(const KToolBarPopupAction* self, const char* signal) {
    if (auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self))) {
        return vktoolbarpopupaction->VirtualKToolBarPopupAction::receivers(signal);
    } else
        qFatal("Error: Protected method KToolBarPopupAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolBarPopupAction_IsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self))) {
        return vktoolbarpopupaction->VirtualKToolBarPopupAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToolBarPopupAction::isSignalConnected called without a directly constructed type");
}

void KToolBarPopupAction_Delete(KToolBarPopupAction* self) {
    delete self;
}
