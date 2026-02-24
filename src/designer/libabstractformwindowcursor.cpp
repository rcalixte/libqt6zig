#include <QDesignerFormWindowCursorInterface>
#include <QDesignerFormWindowInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <abstractformwindowcursor.h>
#include "libabstractformwindowcursor.h"
#include "libabstractformwindowcursor.hxx"

QDesignerFormWindowCursorInterface* QDesignerFormWindowCursorInterface_new() {
    return new VirtualQDesignerFormWindowCursorInterface();
}

QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_FormWindow(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->formWindow();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->formWindow();
    }
}

bool QDesignerFormWindowCursorInterface_MovePosition(QDesignerFormWindowCursorInterface* self, int op, int mode) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    }
}

int QDesignerFormWindowCursorInterface_Position(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->position();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->position();
    }
}

void QDesignerFormWindowCursorInterface_SetPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    }
}

QWidget* QDesignerFormWindowCursorInterface_Current(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->current();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->current();
    }
}

int QDesignerFormWindowCursorInterface_WidgetCount(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->widgetCount();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->widgetCount();
    }
}

QWidget* QDesignerFormWindowCursorInterface_Widget(const QDesignerFormWindowCursorInterface* self, int index) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->widget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->widget(static_cast<int>(index));
    }
}

bool QDesignerFormWindowCursorInterface_HasSelection(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->hasSelection();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->hasSelection();
    }
}

int QDesignerFormWindowCursorInterface_SelectedWidgetCount(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->selectedWidgetCount();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->selectedWidgetCount();
    }
}

QWidget* QDesignerFormWindowCursorInterface_SelectedWidget(const QDesignerFormWindowCursorInterface* self, int index) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        return vqdesignerformwindowcursorinterface->selectedWidget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->selectedWidget(static_cast<int>(index));
    }
}

void QDesignerFormWindowCursorInterface_SetProperty(QDesignerFormWindowCursorInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->setProperty(name_QString, *value);
    }
}

void QDesignerFormWindowCursorInterface_SetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setWidgetProperty(widget, name_QString, *value);
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->setWidgetProperty(widget, name_QString, *value);
    }
}

void QDesignerFormWindowCursorInterface_ResetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->resetWidgetProperty(widget, name_QString);
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->resetWidgetProperty(widget, name_QString);
    }
}

bool QDesignerFormWindowCursorInterface_IsWidgetSelected(const QDesignerFormWindowCursorInterface* self, QWidget* widget) {
    return self->isWidgetSelected(widget);
}

// Base class handler implementation
QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_SuperFormWindow(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_FormWindow_IsBase(true);
        return vqdesignerformwindowcursorinterface->formWindow();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->formWindow();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnFormWindow(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_FormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_FormWindow_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerFormWindowCursorInterface_SuperMovePosition(QDesignerFormWindowCursorInterface* self, int op, int mode) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_MovePosition_IsBase(true);
        return vqdesignerformwindowcursorinterface->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnMovePosition(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_MovePosition_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_MovePosition_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerFormWindowCursorInterface_SuperPosition(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_Position_IsBase(true);
        return vqdesignerformwindowcursorinterface->position();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->position();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnPosition(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_Position_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_Position_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowCursorInterface_SuperSetPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SetPosition_IsBase(true);
        vqdesignerformwindowcursorinterface->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSetPosition(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SetPosition_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SetPosition_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerFormWindowCursorInterface_SuperCurrent(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_Current_IsBase(true);
        return vqdesignerformwindowcursorinterface->current();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->current();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnCurrent(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_Current_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_Current_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerFormWindowCursorInterface_SuperWidgetCount(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_WidgetCount_IsBase(true);
        return vqdesignerformwindowcursorinterface->widgetCount();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->widgetCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnWidgetCount(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_WidgetCount_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_WidgetCount_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerFormWindowCursorInterface_SuperWidget(const QDesignerFormWindowCursorInterface* self, int index) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_Widget_IsBase(true);
        return vqdesignerformwindowcursorinterface->widget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->widget(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnWidget(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_Widget_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_Widget_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerFormWindowCursorInterface_SuperHasSelection(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_HasSelection_IsBase(true);
        return vqdesignerformwindowcursorinterface->hasSelection();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->hasSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnHasSelection(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_HasSelection_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_HasSelection_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerFormWindowCursorInterface_SuperSelectedWidgetCount(const QDesignerFormWindowCursorInterface* self) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SelectedWidgetCount_IsBase(true);
        return vqdesignerformwindowcursorinterface->selectedWidgetCount();
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->selectedWidgetCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerFormWindowCursorInterface_SuperSelectedWidget(const QDesignerFormWindowCursorInterface* self, int index) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SelectedWidget_IsBase(true);
        return vqdesignerformwindowcursorinterface->selectedWidget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerFormWindowCursorInterface*)self)->selectedWidget(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSelectedWidget(const QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self));
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SelectedWidget_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SelectedWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowCursorInterface_SuperSetProperty(QDesignerFormWindowCursorInterface* self, const libqt_string name, const QVariant* value) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SetProperty_IsBase(true);
        vqdesignerformwindowcursorinterface->setProperty(name_QString, *value);
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->setProperty(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SetProperty_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SetProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowCursorInterface_SuperSetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name, const QVariant* value) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SetWidgetProperty_IsBase(true);
        vqdesignerformwindowcursorinterface->setWidgetProperty(widget, name_QString, *value);
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->setWidgetProperty(widget, name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_SetWidgetProperty_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SetWidgetProperty_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowCursorInterface_SuperResetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_ResetWidgetProperty_IsBase(true);
        vqdesignerformwindowcursorinterface->resetWidgetProperty(widget, name_QString);
    } else {
        ((VirtualQDesignerFormWindowCursorInterface*)self)->resetWidgetProperty(widget, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnResetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self);
    if (vqdesignerformwindowcursorinterface && vqdesignerformwindowcursorinterface->isVirtualQDesignerFormWindowCursorInterface) {
        vqdesignerformwindowcursorinterface->setQDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback(reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback>(slot));
    }
}

void QDesignerFormWindowCursorInterface_Delete(QDesignerFormWindowCursorInterface* self) {
    delete self;
}
