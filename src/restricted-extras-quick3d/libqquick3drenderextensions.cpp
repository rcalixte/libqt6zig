#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlParserStatus>
#include <QQuick3DObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData
#include <QQuick3DRenderExtension>
#include <QString>
#include <QTimerEvent>
#include <qquick3drenderextensions.h>
#include "libqquick3drenderextensions.h"
#include "libqquick3drenderextensions.hxx"

QQuick3DRenderExtension* QQuick3DRenderExtension_new() {
    return new VirtualQQuick3DRenderExtension();
}

QQuick3DRenderExtension* QQuick3DRenderExtension_new2(QQuick3DObject* parent) {
    return new VirtualQQuick3DRenderExtension(parent);
}

QMetaObject* QQuick3DRenderExtension_MetaObject(const QQuick3DRenderExtension* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuick3DRenderExtension_Metacast(QQuick3DRenderExtension* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuick3DRenderExtension_Metacall(QQuick3DRenderExtension* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuick3DRenderExtension_Tr(const char* s) {
    auto _ret = QQuick3DRenderExtension::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DRenderExtension_Tr2(const char* s, const char* c) {
    auto _ret = QQuick3DRenderExtension::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DRenderExtension_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuick3DRenderExtension::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuick3DRenderExtension_SuperMetaObject(const QQuick3DRenderExtension* self) {
    return (QMetaObject*)self->QQuick3DRenderExtension::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMetaObject(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self)))
        vqquick3drenderextension->qquick3drenderextension_metaobject_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuick3DRenderExtension_SuperMetacast(QQuick3DRenderExtension* self, const char* param1) {
    return self->QQuick3DRenderExtension::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMetacast(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_metacast_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuick3DRenderExtension_SuperMetacall(QQuick3DRenderExtension* self, int param1, int param2, void** param3) {
    return self->QQuick3DRenderExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMetacall(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_metacall_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_MarkAllDirty(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->markAllDirty();
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::markAllDirty called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperMarkAllDirty(QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::markAllDirty();
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::markAllDirty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMarkAllDirty(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_markalldirty_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_MarkAllDirty_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_ItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::itemChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnItemChange(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_itemchange_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ItemChange_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_ClassBegin(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->classBegin();
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::classBegin called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperClassBegin(QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnClassBegin(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_classbegin_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ClassBegin_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_ComponentComplete(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->componentComplete();
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::componentComplete called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperComponentComplete(QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnComponentComplete(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_componentcomplete_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ComponentComplete_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_PreSync(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->preSync();
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::preSync called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperPreSync(QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::preSync();
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::preSync called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnPreSync(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_presync_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_PreSync_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DRenderExtension_Event(QQuick3DRenderExtension* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuick3DRenderExtension_SuperEvent(QQuick3DRenderExtension* self, QEvent* event) {
    return self->QQuick3DRenderExtension::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_event_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DRenderExtension_EventFilter(QQuick3DRenderExtension* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuick3DRenderExtension_SuperEventFilter(QQuick3DRenderExtension* self, QObject* watched, QEvent* event) {
    return self->QQuick3DRenderExtension::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnEventFilter(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_eventfilter_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_TimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperTimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnTimerEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_timerevent_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_ChildEvent(QQuick3DRenderExtension* self, QChildEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperChildEvent(QQuick3DRenderExtension* self, QChildEvent* event) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnChildEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_childevent_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_CustomEvent(QQuick3DRenderExtension* self, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperCustomEvent(QQuick3DRenderExtension* self, QEvent* event) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnCustomEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_customevent_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_ConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnConnectNotify(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_connectnotify_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DRenderExtension_DisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension) {
        vqquick3drenderextension->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperDisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self)) {
        vqquick3drenderextension->QQuick3DRenderExtension::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DRenderExtension::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnDisconnectNotify(QQuick3DRenderExtension* self, intptr_t slot) {
    if (auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self))
        vqquick3drenderextension->qquick3drenderextension_disconnectnotify_callback = reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QQuick3DRenderExtension_IsComponentComplete(const QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self))) {
        return vqquick3drenderextension->VirtualQQuick3DRenderExtension::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuick3DRenderExtension::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuick3DRenderExtension_Sender(const QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self))) {
        return vqquick3drenderextension->VirtualQQuick3DRenderExtension::sender();
    } else
        qFatal("Error: Protected method QQuick3DRenderExtension::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DRenderExtension_SenderSignalIndex(const QQuick3DRenderExtension* self) {
    if (auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self))) {
        return vqquick3drenderextension->VirtualQQuick3DRenderExtension::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuick3DRenderExtension::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DRenderExtension_Receivers(const QQuick3DRenderExtension* self, const char* signal) {
    if (auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self))) {
        return vqquick3drenderextension->VirtualQQuick3DRenderExtension::receivers(signal);
    } else
        qFatal("Error: Protected method QQuick3DRenderExtension::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuick3DRenderExtension_IsSignalConnected(const QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    if (auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self))) {
        return vqquick3drenderextension->VirtualQQuick3DRenderExtension::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuick3DRenderExtension::isSignalConnected called without a directly constructed type");
}

void QQuick3DRenderExtension_Delete(QQuick3DRenderExtension* self) {
    delete self;
}
