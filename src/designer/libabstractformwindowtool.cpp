#include <QAction>
#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerFormWindowToolInterface>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <abstractformwindowtool.h>
#include "libabstractformwindowtool.h"
#include "libabstractformwindowtool.hxx"

QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new() {
    return new VirtualQDesignerFormWindowToolInterface();
}

QDesignerFormWindowToolInterface* QDesignerFormWindowToolInterface_new2(QObject* parent) {
    return new VirtualQDesignerFormWindowToolInterface(parent);
}

QMetaObject* QDesignerFormWindowToolInterface_MetaObject(const QDesignerFormWindowToolInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerFormWindowToolInterface_Metacast(QDesignerFormWindowToolInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerFormWindowToolInterface_Metacall(QDesignerFormWindowToolInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerFormWindowToolInterface_Tr(const char* s) {
    auto _ret = QDesignerFormWindowToolInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_Core(const QDesignerFormWindowToolInterface* self) {
    return self->core();
}

QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_FormWindow(const QDesignerFormWindowToolInterface* self) {
    return self->formWindow();
}

QWidget* QDesignerFormWindowToolInterface_Editor(const QDesignerFormWindowToolInterface* self) {
    return self->editor();
}

QAction* QDesignerFormWindowToolInterface_Action(const QDesignerFormWindowToolInterface* self) {
    return self->action();
}

void QDesignerFormWindowToolInterface_Activated(QDesignerFormWindowToolInterface* self) {
    self->activated();
}

void QDesignerFormWindowToolInterface_Deactivated(QDesignerFormWindowToolInterface* self) {
    self->deactivated();
}

bool QDesignerFormWindowToolInterface_HandleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event) {
    return self->handleEvent(widget, managedWidget, event);
}

libqt_string QDesignerFormWindowToolInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerFormWindowToolInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerFormWindowToolInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerFormWindowToolInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerFormWindowToolInterface_SuperMetaObject(const QDesignerFormWindowToolInterface* self) {
    return (QMetaObject*)self->QDesignerFormWindowToolInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnMetaObject(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self)))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerFormWindowToolInterface_SuperMetacast(QDesignerFormWindowToolInterface* self, const char* param1) {
    return self->QDesignerFormWindowToolInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnMetacast(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_metacast_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerFormWindowToolInterface_SuperMetacall(QDesignerFormWindowToolInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerFormWindowToolInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnMetacall(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_metacall_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnCore(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self)))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_core_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Core_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnFormWindow(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self)))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_formwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_FormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnEditor(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self)))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_editor_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Editor_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnAction(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self)))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_action_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Action_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnActivated(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_activated_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Activated_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnDeactivated(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_deactivated_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Deactivated_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnHandleEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_handleevent_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_HandleEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerFormWindowToolInterface_Event(QDesignerFormWindowToolInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerFormWindowToolInterface_SuperEvent(QDesignerFormWindowToolInterface* self, QEvent* event) {
    return self->QDesignerFormWindowToolInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_event_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerFormWindowToolInterface_EventFilter(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerFormWindowToolInterface_SuperEventFilter(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerFormWindowToolInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnEventFilter(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_TimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface) {
        vqdesignerformwindowtoolinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_SuperTimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self)) {
        vqdesignerformwindowtoolinterface->QDesignerFormWindowToolInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnTimerEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_ChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface) {
        vqdesignerformwindowtoolinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_SuperChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self)) {
        vqdesignerformwindowtoolinterface->QDesignerFormWindowToolInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnChildEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_childevent_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_CustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface) {
        vqdesignerformwindowtoolinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_SuperCustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self)) {
        vqdesignerformwindowtoolinterface->QDesignerFormWindowToolInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnCustomEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_customevent_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_ConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface) {
        vqdesignerformwindowtoolinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_SuperConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self)) {
        vqdesignerformwindowtoolinterface->QDesignerFormWindowToolInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnConnectNotify(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_DisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface) {
        vqdesignerformwindowtoolinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_SuperDisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self)) {
        vqdesignerformwindowtoolinterface->QDesignerFormWindowToolInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowToolInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnDisconnectNotify(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self))
        vqdesignerformwindowtoolinterface->qdesignerformwindowtoolinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerFormWindowToolInterface_Sender(const QDesignerFormWindowToolInterface* self) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self))) {
        return vqdesignerformwindowtoolinterface->VirtualQDesignerFormWindowToolInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerFormWindowToolInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerFormWindowToolInterface_SenderSignalIndex(const QDesignerFormWindowToolInterface* self) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self))) {
        return vqdesignerformwindowtoolinterface->VirtualQDesignerFormWindowToolInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerFormWindowToolInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerFormWindowToolInterface_Receivers(const QDesignerFormWindowToolInterface* self, const char* signal) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self))) {
        return vqdesignerformwindowtoolinterface->VirtualQDesignerFormWindowToolInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerFormWindowToolInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerFormWindowToolInterface_IsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self))) {
        return vqdesignerformwindowtoolinterface->VirtualQDesignerFormWindowToolInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerFormWindowToolInterface::isSignalConnected called without a directly constructed type");
}

void QDesignerFormWindowToolInterface_Delete(QDesignerFormWindowToolInterface* self) {
    delete self;
}
