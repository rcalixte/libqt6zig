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
#include <QByteArray>
#include <cstring>
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
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_Core(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->core();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->core();
    }
}

QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_FormWindow(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->formWindow();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->formWindow();
    }
}

QWidget* QDesignerFormWindowToolInterface_Editor(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->editor();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->editor();
    }
}

QAction* QDesignerFormWindowToolInterface_Action(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->action();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->action();
    }
}

void QDesignerFormWindowToolInterface_Activated(QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->activated();
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->activated();
    }
}

void QDesignerFormWindowToolInterface_Deactivated(QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->deactivated();
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->deactivated();
    }
}

bool QDesignerFormWindowToolInterface_HandleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->handleEvent(widget, managedWidget, event);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->handleEvent(widget, managedWidget, event);
    }
}

// Base class handler implementation
int QDesignerFormWindowToolInterface_QBaseMetacall(QDesignerFormWindowToolInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Metacall_IsBase(true);
        return vqdesignerformwindowtoolinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerFormWindowToolInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnMetacall(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerFormWindowToolInterface_QBaseCore(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Core_IsBase(true);
        return vqdesignerformwindowtoolinterface->core();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnCore(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Core_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Core_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormWindowInterface* QDesignerFormWindowToolInterface_QBaseFormWindow(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_FormWindow_IsBase(true);
        return vqdesignerformwindowtoolinterface->formWindow();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->formWindow();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnFormWindow(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_FormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_FormWindow_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerFormWindowToolInterface_QBaseEditor(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Editor_IsBase(true);
        return vqdesignerformwindowtoolinterface->editor();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->editor();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnEditor(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Editor_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Editor_Callback>(slot));
    }
}

// Base class handler implementation
QAction* QDesignerFormWindowToolInterface_QBaseAction(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Action_IsBase(true);
        return vqdesignerformwindowtoolinterface->action();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->action();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnAction(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Action_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Action_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseActivated(QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Activated_IsBase(true);
        vqdesignerformwindowtoolinterface->activated();
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->activated();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnActivated(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Activated_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Activated_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseDeactivated(QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Deactivated_IsBase(true);
        vqdesignerformwindowtoolinterface->deactivated();
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->deactivated();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnDeactivated(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Deactivated_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Deactivated_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerFormWindowToolInterface_QBaseHandleEvent(QDesignerFormWindowToolInterface* self, QWidget* widget, QWidget* managedWidget, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_HandleEvent_IsBase(true);
        return vqdesignerformwindowtoolinterface->handleEvent(widget, managedWidget, event);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->handleEvent(widget, managedWidget, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnHandleEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_HandleEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_HandleEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormWindowToolInterface_Event(QDesignerFormWindowToolInterface* self, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->event(event);
    } else {
        return self->QDesignerFormWindowToolInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerFormWindowToolInterface_QBaseEvent(QDesignerFormWindowToolInterface* self, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Event_IsBase(true);
        return vqdesignerformwindowtoolinterface->event(event);
    } else {
        return self->QDesignerFormWindowToolInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Event_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormWindowToolInterface_EventFilter(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerFormWindowToolInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerFormWindowToolInterface_QBaseEventFilter(QDesignerFormWindowToolInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_EventFilter_IsBase(true);
        return vqdesignerformwindowtoolinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerFormWindowToolInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnEventFilter(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_TimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseTimerEvent(QDesignerFormWindowToolInterface* self, QTimerEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_TimerEvent_IsBase(true);
        vqdesignerformwindowtoolinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnTimerEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_ChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->childEvent(event);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseChildEvent(QDesignerFormWindowToolInterface* self, QChildEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_ChildEvent_IsBase(true);
        vqdesignerformwindowtoolinterface->childEvent(event);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnChildEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_CustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->customEvent(event);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseCustomEvent(QDesignerFormWindowToolInterface* self, QEvent* event) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_CustomEvent_IsBase(true);
        vqdesignerformwindowtoolinterface->customEvent(event);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnCustomEvent(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_ConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseConnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_ConnectNotify_IsBase(true);
        vqdesignerformwindowtoolinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnConnectNotify(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowToolInterface_DisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerFormWindowToolInterface_QBaseDisconnectNotify(QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_DisconnectNotify_IsBase(true);
        vqdesignerformwindowtoolinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowToolInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnDisconnectNotify(QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = dynamic_cast<VirtualQDesignerFormWindowToolInterface*>(self);
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerFormWindowToolInterface_Sender(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->sender();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerFormWindowToolInterface_QBaseSender(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Sender_IsBase(true);
        return vqdesignerformwindowtoolinterface->sender();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnSender(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerFormWindowToolInterface_SenderSignalIndex(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerFormWindowToolInterface_QBaseSenderSignalIndex(const QDesignerFormWindowToolInterface* self) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerformwindowtoolinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnSenderSignalIndex(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerFormWindowToolInterface_Receivers(const QDesignerFormWindowToolInterface* self, const char* signal) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerFormWindowToolInterface_QBaseReceivers(const QDesignerFormWindowToolInterface* self, const char* signal) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Receivers_IsBase(true);
        return vqdesignerformwindowtoolinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnReceivers(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormWindowToolInterface_IsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        return vqdesignerformwindowtoolinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerFormWindowToolInterface_QBaseIsSignalConnected(const QDesignerFormWindowToolInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_IsSignalConnected_IsBase(true);
        return vqdesignerformwindowtoolinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerFormWindowToolInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowToolInterface_OnIsSignalConnected(const QDesignerFormWindowToolInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowtoolinterface = const_cast<VirtualQDesignerFormWindowToolInterface*>(dynamic_cast<const VirtualQDesignerFormWindowToolInterface*>(self));
    if (vqdesignerformwindowtoolinterface && vqdesignerformwindowtoolinterface->isVirtualQDesignerFormWindowToolInterface) {
        vqdesignerformwindowtoolinterface->setQDesignerFormWindowToolInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerFormWindowToolInterface::QDesignerFormWindowToolInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerFormWindowToolInterface_Delete(QDesignerFormWindowToolInterface* self) {
    delete self;
}
