#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickAttachedPropertyPropagator>
#include <QString>
#include <QTimerEvent>
#include <qquickattachedpropertypropagator.h>
#include "libqquickattachedpropertypropagator.h"
#include "libqquickattachedpropertypropagator.hxx"

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_new() {
    return new VirtualQQuickAttachedPropertyPropagator();
}

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_new2(QObject* parent) {
    return new VirtualQQuickAttachedPropertyPropagator(parent);
}

QMetaObject* QQuickAttachedPropertyPropagator_MetaObject(const QQuickAttachedPropertyPropagator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickAttachedPropertyPropagator_Metacast(QQuickAttachedPropertyPropagator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickAttachedPropertyPropagator_Metacall(QQuickAttachedPropertyPropagator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickAttachedPropertyPropagator_Tr(const char* s) {
    auto _ret = QQuickAttachedPropertyPropagator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QQuickAttachedPropertyPropagator* */ QQuickAttachedPropertyPropagator_AttachedChildren(const QQuickAttachedPropertyPropagator* self) {
    QList<QQuickAttachedPropertyPropagator*> _ret = self->attachedChildren();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQuickAttachedPropertyPropagator** _arr = static_cast<QQuickAttachedPropertyPropagator**>(malloc(sizeof(QQuickAttachedPropertyPropagator*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QQuickAttachedPropertyPropagator* QQuickAttachedPropertyPropagator_AttachedParent(const QQuickAttachedPropertyPropagator* self) {
    return self->attachedParent();
}

void QQuickAttachedPropertyPropagator_AttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator) {
        vqquickattachedpropertypropagator->attachedParentChange(newParent, oldParent);
    }
}

libqt_string QQuickAttachedPropertyPropagator_Tr2(const char* s, const char* c) {
    auto _ret = QQuickAttachedPropertyPropagator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickAttachedPropertyPropagator_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickAttachedPropertyPropagator::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickAttachedPropertyPropagator_SuperMetaObject(const QQuickAttachedPropertyPropagator* self) {
    return (QMetaObject*)self->QQuickAttachedPropertyPropagator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnMetaObject(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self)))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_metaobject_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickAttachedPropertyPropagator_SuperMetacast(QQuickAttachedPropertyPropagator* self, const char* param1) {
    return self->QQuickAttachedPropertyPropagator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnMetacast(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_metacast_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickAttachedPropertyPropagator_SuperMetacall(QQuickAttachedPropertyPropagator* self, int param1, int param2, void** param3) {
    return self->QQuickAttachedPropertyPropagator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnMetacall(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_metacall_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Metacall_Callback>(slot);
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperAttachedParentChange(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->QQuickAttachedPropertyPropagator::attachedParentChange(newParent, oldParent);
    } else
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::attachedParentChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnAttachedParentChange(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_attachedparentchange_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_AttachedParentChange_Callback>(slot);
}

// Derived class handler implementation
bool QQuickAttachedPropertyPropagator_Event(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickAttachedPropertyPropagator_SuperEvent(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    return self->QQuickAttachedPropertyPropagator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_event_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickAttachedPropertyPropagator_EventFilter(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickAttachedPropertyPropagator_SuperEventFilter(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event) {
    return self->QQuickAttachedPropertyPropagator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnEventFilter(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_eventfilter_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_TimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator) {
        vqquickattachedpropertypropagator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperTimerEvent(QQuickAttachedPropertyPropagator* self, QTimerEvent* event) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->QQuickAttachedPropertyPropagator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnTimerEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_timerevent_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_ChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator) {
        vqquickattachedpropertypropagator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperChildEvent(QQuickAttachedPropertyPropagator* self, QChildEvent* event) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->QQuickAttachedPropertyPropagator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnChildEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_childevent_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_CustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator) {
        vqquickattachedpropertypropagator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperCustomEvent(QQuickAttachedPropertyPropagator* self, QEvent* event) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->QQuickAttachedPropertyPropagator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnCustomEvent(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_customevent_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_ConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator) {
        vqquickattachedpropertypropagator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperConnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->QQuickAttachedPropertyPropagator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnConnectNotify(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_connectnotify_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickAttachedPropertyPropagator_DisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self);
    if (vqquickattachedpropertypropagator) {
        vqquickattachedpropertypropagator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAttachedPropertyPropagator_SuperDisconnectNotify(QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->QQuickAttachedPropertyPropagator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickAttachedPropertyPropagator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAttachedPropertyPropagator_OnDisconnectNotify(QQuickAttachedPropertyPropagator* self, intptr_t slot) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self))
        vqquickattachedpropertypropagator->qquickattachedpropertypropagator_disconnectnotify_callback = reinterpret_cast<VirtualQQuickAttachedPropertyPropagator::QQuickAttachedPropertyPropagator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QQuickAttachedPropertyPropagator_Initialize(QQuickAttachedPropertyPropagator* self) {
    if (auto* vqquickattachedpropertypropagator = dynamic_cast<VirtualQQuickAttachedPropertyPropagator*>(self)) {
        vqquickattachedpropertypropagator->VirtualQQuickAttachedPropertyPropagator::initialize();
    } else
        qFatal("Error: Protected method QQuickAttachedPropertyPropagator::initialize called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuickAttachedPropertyPropagator_Sender(const QQuickAttachedPropertyPropagator* self) {
    if (auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self))) {
        return vqquickattachedpropertypropagator->VirtualQQuickAttachedPropertyPropagator::sender();
    } else
        qFatal("Error: Protected method QQuickAttachedPropertyPropagator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickAttachedPropertyPropagator_SenderSignalIndex(const QQuickAttachedPropertyPropagator* self) {
    if (auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self))) {
        return vqquickattachedpropertypropagator->VirtualQQuickAttachedPropertyPropagator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickAttachedPropertyPropagator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickAttachedPropertyPropagator_Receivers(const QQuickAttachedPropertyPropagator* self, const char* signal) {
    if (auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self))) {
        return vqquickattachedpropertypropagator->VirtualQQuickAttachedPropertyPropagator::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickAttachedPropertyPropagator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickAttachedPropertyPropagator_IsSignalConnected(const QQuickAttachedPropertyPropagator* self, const QMetaMethod* signal) {
    if (auto* vqquickattachedpropertypropagator = const_cast<VirtualQQuickAttachedPropertyPropagator*>(dynamic_cast<const VirtualQQuickAttachedPropertyPropagator*>(self))) {
        return vqquickattachedpropertypropagator->VirtualQQuickAttachedPropertyPropagator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickAttachedPropertyPropagator::isSignalConnected called without a directly constructed type");
}

void QQuickAttachedPropertyPropagator_Delete(QQuickAttachedPropertyPropagator* self) {
    delete self;
}
