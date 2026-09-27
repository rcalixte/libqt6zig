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
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_MetaObject_IsBase(true);
        return (QMetaObject*)vqquick3drenderextension->metaObject();
    } else {
        return (QMetaObject*)self->QQuick3DRenderExtension::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMetaObject(const QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_MetaObject_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuick3DRenderExtension_SuperMetacast(QQuick3DRenderExtension* self, const char* param1) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_Metacast_IsBase(true);
        return vqquick3drenderextension->qt_metacast(param1);
    } else {
        return self->QQuick3DRenderExtension::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMetacast(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_Metacast_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuick3DRenderExtension_SuperMetacall(QQuick3DRenderExtension* self, int param1, int param2, void** param3) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_Metacall_IsBase(true);
        return vqquick3drenderextension->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuick3DRenderExtension::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMetacall(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_Metacall_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Metacall_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_MarkAllDirty(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->markAllDirty();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->markAllDirty();
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperMarkAllDirty(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_MarkAllDirty_IsBase(true);
        vqquick3drenderextension->markAllDirty();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->markAllDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnMarkAllDirty(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_MarkAllDirty_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_MarkAllDirty_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_ItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperItemChange(QQuick3DRenderExtension* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_ItemChange_IsBase(true);
        vqquick3drenderextension->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnItemChange(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_ItemChange_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ItemChange_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_ClassBegin(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->classBegin();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperClassBegin(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_ClassBegin_IsBase(true);
        vqquick3drenderextension->classBegin();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnClassBegin(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_ClassBegin_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_ComponentComplete(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->componentComplete();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperComponentComplete(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_ComponentComplete_IsBase(true);
        vqquick3drenderextension->componentComplete();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnComponentComplete(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_ComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_PreSync(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->preSync();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->preSync();
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperPreSync(QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_PreSync_IsBase(true);
        vqquick3drenderextension->preSync();
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->preSync();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnPreSync(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_PreSync_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_PreSync_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DRenderExtension_Event(QQuick3DRenderExtension* self, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->event(event);
    } else {
        return self->QQuick3DRenderExtension::event(event);
    }
}

// Base class handler implementation
bool QQuick3DRenderExtension_SuperEvent(QQuick3DRenderExtension* self, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_Event_IsBase(true);
        return vqquick3drenderextension->event(event);
    } else {
        return self->QQuick3DRenderExtension::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_Event_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DRenderExtension_EventFilter(QQuick3DRenderExtension* self, QObject* watched, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->eventFilter(watched, event);
    } else {
        return self->QQuick3DRenderExtension::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuick3DRenderExtension_SuperEventFilter(QQuick3DRenderExtension* self, QObject* watched, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_EventFilter_IsBase(true);
        return vqquick3drenderextension->eventFilter(watched, event);
    } else {
        return self->QQuick3DRenderExtension::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnEventFilter(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_EventFilter_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_TimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->timerEvent(event);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperTimerEvent(QQuick3DRenderExtension* self, QTimerEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_TimerEvent_IsBase(true);
        vqquick3drenderextension->timerEvent(event);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnTimerEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_TimerEvent_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_ChildEvent(QQuick3DRenderExtension* self, QChildEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->childEvent(event);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperChildEvent(QQuick3DRenderExtension* self, QChildEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_ChildEvent_IsBase(true);
        vqquick3drenderextension->childEvent(event);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnChildEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_ChildEvent_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_CustomEvent(QQuick3DRenderExtension* self, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->customEvent(event);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperCustomEvent(QQuick3DRenderExtension* self, QEvent* event) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_CustomEvent_IsBase(true);
        vqquick3drenderextension->customEvent(event);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnCustomEvent(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_CustomEvent_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_ConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperConnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_ConnectNotify_IsBase(true);
        vqquick3drenderextension->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnConnectNotify(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_ConnectNotify_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DRenderExtension_DisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DRenderExtension_SuperDisconnectNotify(QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_DisconnectNotify_IsBase(true);
        vqquick3drenderextension->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DRenderExtension*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnDisconnectNotify(QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = dynamic_cast<VirtualQQuick3DRenderExtension*>(self);
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DRenderExtension_IsComponentComplete(const QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->isComponentComplete();
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuick3DRenderExtension_SuperIsComponentComplete(const QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_IsComponentComplete_IsBase(true);
        return vqquick3drenderextension->isComponentComplete();
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnIsComponentComplete(const QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuick3DRenderExtension_Sender(const QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->sender();
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuick3DRenderExtension_SuperSender(const QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_Sender_IsBase(true);
        return vqquick3drenderextension->sender();
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnSender(const QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_Sender_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DRenderExtension_SenderSignalIndex(const QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuick3DRenderExtension_SuperSenderSignalIndex(const QQuick3DRenderExtension* self) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_SenderSignalIndex_IsBase(true);
        return vqquick3drenderextension->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnSenderSignalIndex(const QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DRenderExtension_Receivers(const QQuick3DRenderExtension* self, const char* signal) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->receivers(signal);
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuick3DRenderExtension_SuperReceivers(const QQuick3DRenderExtension* self, const char* signal) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_Receivers_IsBase(true);
        return vqquick3drenderextension->receivers(signal);
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnReceivers(const QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_Receivers_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DRenderExtension_IsSignalConnected(const QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        return vqquick3drenderextension->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuick3DRenderExtension_SuperIsSignalConnected(const QQuick3DRenderExtension* self, const QMetaMethod* signal) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension) {
        vqquick3drenderextension->setQQuick3DRenderExtension_IsSignalConnected_IsBase(true);
        return vqquick3drenderextension->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DRenderExtension*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DRenderExtension_OnIsSignalConnected(const QQuick3DRenderExtension* self, intptr_t slot) {
    auto* vqquick3drenderextension = const_cast<VirtualQQuick3DRenderExtension*>(dynamic_cast<const VirtualQQuick3DRenderExtension*>(self));
    if (vqquick3drenderextension && vqquick3drenderextension->isVirtualQQuick3DRenderExtension)
        vqquick3drenderextension->setQQuick3DRenderExtension_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuick3DRenderExtension::QQuick3DRenderExtension_IsSignalConnected_Callback>(slot));
}

void QQuick3DRenderExtension_Delete(QQuick3DRenderExtension* self) {
    delete self;
}
