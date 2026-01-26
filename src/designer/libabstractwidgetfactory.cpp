#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetFactoryInterface>
#include <QEvent>
#include <QLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractwidgetfactory.h>
#include "libabstractwidgetfactory.h"
#include "libabstractwidgetfactory.hxx"

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new() {
    return new VirtualQDesignerWidgetFactoryInterface();
}

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new2(QObject* parent) {
    return new VirtualQDesignerWidgetFactoryInterface(parent);
}

QMetaObject* QDesignerWidgetFactoryInterface_MetaObject(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerWidgetFactoryInterface*)self)->metaObject();
    }
}

void* QDesignerWidgetFactoryInterface_Metacast(QDesignerWidgetFactoryInterface* self, const char* param1) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerWidgetFactoryInterface_Metacall(QDesignerWidgetFactoryInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_Core(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->core();
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->core();
    }
}

QWidget* QDesignerWidgetFactoryInterface_ContainerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->containerOfWidget(w);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->containerOfWidget(w);
    }
}

QWidget* QDesignerWidgetFactoryInterface_WidgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->widgetOfContainer(w);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->widgetOfContainer(w);
    }
}

QWidget* QDesignerWidgetFactoryInterface_CreateWidget(const QDesignerWidgetFactoryInterface* self, const libqt_string name, QWidget* parentWidget) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->createWidget(name_QString, parentWidget);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->createWidget(name_QString, parentWidget);
    }
}

QLayout* QDesignerWidgetFactoryInterface_CreateLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int typeVal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->createLayout(widget, layout, static_cast<int>(typeVal));
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->createLayout(widget, layout, static_cast<int>(typeVal));
    }
}

bool QDesignerWidgetFactoryInterface_IsPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->isPassiveInteractor(widget);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->isPassiveInteractor(widget);
    }
}

void QDesignerWidgetFactoryInterface_Initialize(const QDesignerWidgetFactoryInterface* self, QObject* object) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->initialize(object);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->initialize(object);
    }
}

// Base class handler implementation
QMetaObject* QDesignerWidgetFactoryInterface_QBaseMetaObject(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerwidgetfactoryinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerWidgetFactoryInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnMetaObject(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerWidgetFactoryInterface_QBaseMetacast(QDesignerWidgetFactoryInterface* self, const char* param1) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Metacast_IsBase(true);
        return vqdesignerwidgetfactoryinterface->qt_metacast(param1);
    } else {
        return self->QDesignerWidgetFactoryInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnMetacast(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetFactoryInterface_QBaseMetacall(QDesignerWidgetFactoryInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Metacall_IsBase(true);
        return vqdesignerwidgetfactoryinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerWidgetFactoryInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnMetacall(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_QBaseCore(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Core_IsBase(true);
        return vqdesignerwidgetfactoryinterface->core();
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCore(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Core_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Core_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerWidgetFactoryInterface_QBaseContainerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_ContainerOfWidget_IsBase(true);
        return vqdesignerwidgetfactoryinterface->containerOfWidget(w);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->containerOfWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnContainerOfWidget(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_ContainerOfWidget_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_ContainerOfWidget_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerWidgetFactoryInterface_QBaseWidgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_WidgetOfContainer_IsBase(true);
        return vqdesignerwidgetfactoryinterface->widgetOfContainer(w);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->widgetOfContainer(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnWidgetOfContainer(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_WidgetOfContainer_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_WidgetOfContainer_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerWidgetFactoryInterface_QBaseCreateWidget(const QDesignerWidgetFactoryInterface* self, const libqt_string name, QWidget* parentWidget) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_CreateWidget_IsBase(true);
        return vqdesignerwidgetfactoryinterface->createWidget(name_QString, parentWidget);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->createWidget(name_QString, parentWidget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCreateWidget(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_CreateWidget_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_CreateWidget_Callback>(slot));
    }
}

// Base class handler implementation
QLayout* QDesignerWidgetFactoryInterface_QBaseCreateLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int typeVal) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_CreateLayout_IsBase(true);
        return vqdesignerwidgetfactoryinterface->createLayout(widget, layout, static_cast<int>(typeVal));
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->createLayout(widget, layout, static_cast<int>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCreateLayout(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_CreateLayout_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_CreateLayout_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetFactoryInterface_QBaseIsPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_IsPassiveInteractor_IsBase(true);
        return vqdesignerwidgetfactoryinterface->isPassiveInteractor(widget);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->isPassiveInteractor(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnIsPassiveInteractor(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_IsPassiveInteractor_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_QBaseInitialize(const QDesignerWidgetFactoryInterface* self, QObject* object) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Initialize_IsBase(true);
        vqdesignerwidgetfactoryinterface->initialize(object);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->initialize(object);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnInitialize(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Initialize_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Initialize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetFactoryInterface_Event(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->event(event);
    } else {
        return self->QDesignerWidgetFactoryInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerWidgetFactoryInterface_QBaseEvent(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Event_IsBase(true);
        return vqdesignerwidgetfactoryinterface->event(event);
    } else {
        return self->QDesignerWidgetFactoryInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Event_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetFactoryInterface_EventFilter(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerWidgetFactoryInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerWidgetFactoryInterface_QBaseEventFilter(QDesignerWidgetFactoryInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_EventFilter_IsBase(true);
        return vqdesignerwidgetfactoryinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerWidgetFactoryInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnEventFilter(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_TimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_QBaseTimerEvent(QDesignerWidgetFactoryInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_TimerEvent_IsBase(true);
        vqdesignerwidgetfactoryinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnTimerEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_ChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->childEvent(event);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_QBaseChildEvent(QDesignerWidgetFactoryInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_ChildEvent_IsBase(true);
        vqdesignerwidgetfactoryinterface->childEvent(event);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnChildEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_CustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->customEvent(event);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_QBaseCustomEvent(QDesignerWidgetFactoryInterface* self, QEvent* event) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_CustomEvent_IsBase(true);
        vqdesignerwidgetfactoryinterface->customEvent(event);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnCustomEvent(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_ConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_QBaseConnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_ConnectNotify_IsBase(true);
        vqdesignerwidgetfactoryinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnConnectNotify(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetFactoryInterface_DisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerWidgetFactoryInterface_QBaseDisconnectNotify(QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_DisconnectNotify_IsBase(true);
        vqdesignerwidgetfactoryinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetFactoryInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnDisconnectNotify(QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = dynamic_cast<VirtualQDesignerWidgetFactoryInterface*>(self);
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerWidgetFactoryInterface_Sender(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->sender();
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerWidgetFactoryInterface_QBaseSender(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Sender_IsBase(true);
        return vqdesignerwidgetfactoryinterface->sender();
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnSender(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetFactoryInterface_SenderSignalIndex(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerWidgetFactoryInterface_QBaseSenderSignalIndex(const QDesignerWidgetFactoryInterface* self) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerwidgetfactoryinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnSenderSignalIndex(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetFactoryInterface_Receivers(const QDesignerWidgetFactoryInterface* self, const char* signal) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerWidgetFactoryInterface_QBaseReceivers(const QDesignerWidgetFactoryInterface* self, const char* signal) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Receivers_IsBase(true);
        return vqdesignerwidgetfactoryinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnReceivers(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetFactoryInterface_IsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        return vqdesignerwidgetfactoryinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerWidgetFactoryInterface_QBaseIsSignalConnected(const QDesignerWidgetFactoryInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_IsSignalConnected_IsBase(true);
        return vqdesignerwidgetfactoryinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerWidgetFactoryInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetFactoryInterface_OnIsSignalConnected(const QDesignerWidgetFactoryInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetfactoryinterface = const_cast<VirtualQDesignerWidgetFactoryInterface*>(dynamic_cast<const VirtualQDesignerWidgetFactoryInterface*>(self));
    if (vqdesignerwidgetfactoryinterface && vqdesignerwidgetfactoryinterface->isVirtualQDesignerWidgetFactoryInterface) {
        vqdesignerwidgetfactoryinterface->setQDesignerWidgetFactoryInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerWidgetFactoryInterface::QDesignerWidgetFactoryInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerWidgetFactoryInterface_Delete(QDesignerWidgetFactoryInterface* self) {
    delete self;
}
