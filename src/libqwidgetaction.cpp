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
#include <qwidgetaction.h>
#include "libqwidgetaction.h"
#include "libqwidgetaction.hxx"

QWidgetAction* QWidgetAction_new(QObject* parent) {
    return new VirtualQWidgetAction(parent);
}

QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWidgetAction_Metacast(QWidgetAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWidgetAction_Metacall(QWidgetAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWidgetAction_Tr(const char* s) {
    auto _ret = QWidgetAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
    self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self) {
    return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
    return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
    self->releaseWidget(widget);
}

bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        return vqwidgetaction->event(param1);
    }
    qFatal("Error: Protected method QWidgetAction::event called without a directly constructed type");
}

bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        return vqwidgetaction->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method QWidgetAction::eventFilter called without a directly constructed type");
}

QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        return vqwidgetaction->createWidget(parent);
    }
    qFatal("Error: Protected method QWidgetAction::createWidget called without a directly constructed type");
}

void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        vqwidgetaction->deleteWidget(widget);
    }
}

libqt_string QWidgetAction_Tr2(const char* s, const char* c) {
    auto _ret = QWidgetAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWidgetAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWidgetAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWidgetAction_SuperMetaObject(const QWidgetAction* self) {
    return (QMetaObject*)self->QWidgetAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnMetaObject(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self)))
        vqwidgetaction->qwidgetaction_metaobject_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWidgetAction_SuperMetacast(QWidgetAction* self, const char* param1) {
    return self->QWidgetAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnMetacast(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_metacast_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWidgetAction_SuperMetacall(QWidgetAction* self, int param1, int param2, void** param3) {
    return self->QWidgetAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnMetacall(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_metacall_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QWidgetAction_SuperEvent(QWidgetAction* self, QEvent* param1) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return vqwidgetaction->QWidgetAction::event(param1);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_event_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Event_Callback>(slot);
}

// Base class handler implementation
bool QWidgetAction_SuperEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return vqwidgetaction->QWidgetAction::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnEventFilter(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_eventfilter_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_EventFilter_Callback>(slot);
}

// Base class handler implementation
QWidget* QWidgetAction_SuperCreateWidget(QWidgetAction* self, QWidget* parent) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        return vqwidgetaction->QWidgetAction::createWidget(parent);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCreateWidget(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_createwidget_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CreateWidget_Callback>(slot);
}

// Base class handler implementation
void QWidgetAction_SuperDeleteWidget(QWidgetAction* self, QWidget* widget) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->QWidgetAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnDeleteWidget(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_deletewidget_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void QWidgetAction_TimerEvent(QWidgetAction* self, QTimerEvent* event) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        vqwidgetaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWidgetAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidgetAction_SuperTimerEvent(QWidgetAction* self, QTimerEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->QWidgetAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnTimerEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_timerevent_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWidgetAction_ChildEvent(QWidgetAction* self, QChildEvent* event) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        vqwidgetaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWidgetAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidgetAction_SuperChildEvent(QWidgetAction* self, QChildEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->QWidgetAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnChildEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_childevent_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWidgetAction_CustomEvent(QWidgetAction* self, QEvent* event) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        vqwidgetaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWidgetAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidgetAction_SuperCustomEvent(QWidgetAction* self, QEvent* event) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->QWidgetAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCustomEvent(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_customevent_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWidgetAction_ConnectNotify(QWidgetAction* self, const QMetaMethod* signal) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        vqwidgetaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWidgetAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidgetAction_SuperConnectNotify(QWidgetAction* self, const QMetaMethod* signal) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->QWidgetAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnConnectNotify(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_connectnotify_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWidgetAction_DisconnectNotify(QWidgetAction* self, const QMetaMethod* signal) {
    auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
    if (vqwidgetaction) {
        vqwidgetaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWidgetAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidgetAction_SuperDisconnectNotify(QWidgetAction* self, const QMetaMethod* signal) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self)) {
        vqwidgetaction->QWidgetAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWidgetAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnDisconnectNotify(QWidgetAction* self, intptr_t slot) {
    if (auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self))
        vqwidgetaction->qwidgetaction_disconnectnotify_callback = reinterpret_cast<VirtualQWidgetAction::QWidgetAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ QWidgetAction_CreatedWidgets(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        QList<QWidget*> _ret = vqwidgetaction->VirtualQWidgetAction::createdWidgets();
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
        qFatal("Error: Protected method QWidgetAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QWidgetAction_Sender(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->VirtualQWidgetAction::sender();
    } else
        qFatal("Error: Protected method QWidgetAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWidgetAction_SenderSignalIndex(const QWidgetAction* self) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->VirtualQWidgetAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWidgetAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWidgetAction_Receivers(const QWidgetAction* self, const char* signal) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->VirtualQWidgetAction::receivers(signal);
    } else
        qFatal("Error: Protected method QWidgetAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWidgetAction_IsSignalConnected(const QWidgetAction* self, const QMetaMethod* signal) {
    if (auto* vqwidgetaction = const_cast<VirtualQWidgetAction*>(dynamic_cast<const VirtualQWidgetAction*>(self))) {
        return vqwidgetaction->VirtualQWidgetAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWidgetAction::isSignalConnected called without a directly constructed type");
}

void QWidgetAction_Delete(QWidgetAction* self) {
    delete self;
}
