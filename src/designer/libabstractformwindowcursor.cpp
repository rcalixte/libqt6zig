#include <QDesignerFormWindowCursorInterface>
#include <QDesignerFormWindowInterface>
#include <QString>
#include <QVariant>
#include <QWidget>
#include <abstractformwindowcursor.h>
#include "libabstractformwindowcursor.h"
#include "libabstractformwindowcursor.hxx"

QDesignerFormWindowCursorInterface* QDesignerFormWindowCursorInterface_new() {
    return new VirtualQDesignerFormWindowCursorInterface();
}

QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_FormWindow(const QDesignerFormWindowCursorInterface* self) {
    return self->formWindow();
}

bool QDesignerFormWindowCursorInterface_MovePosition(QDesignerFormWindowCursorInterface* self, int op, int mode) {
    return self->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
}

int QDesignerFormWindowCursorInterface_Position(const QDesignerFormWindowCursorInterface* self) {
    return self->position();
}

void QDesignerFormWindowCursorInterface_SetPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode) {
    self->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
}

QWidget* QDesignerFormWindowCursorInterface_Current(const QDesignerFormWindowCursorInterface* self) {
    return self->current();
}

int QDesignerFormWindowCursorInterface_WidgetCount(const QDesignerFormWindowCursorInterface* self) {
    return self->widgetCount();
}

QWidget* QDesignerFormWindowCursorInterface_Widget(const QDesignerFormWindowCursorInterface* self, int index) {
    return self->widget(static_cast<int>(index));
}

bool QDesignerFormWindowCursorInterface_HasSelection(const QDesignerFormWindowCursorInterface* self) {
    return self->hasSelection();
}

int QDesignerFormWindowCursorInterface_SelectedWidgetCount(const QDesignerFormWindowCursorInterface* self) {
    return self->selectedWidgetCount();
}

QWidget* QDesignerFormWindowCursorInterface_SelectedWidget(const QDesignerFormWindowCursorInterface* self, int index) {
    return self->selectedWidget(static_cast<int>(index));
}

void QDesignerFormWindowCursorInterface_SetProperty(QDesignerFormWindowCursorInterface* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setProperty(name_QString, *value);
}

void QDesignerFormWindowCursorInterface_SetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setWidgetProperty(widget, name_QString, *value);
}

void QDesignerFormWindowCursorInterface_ResetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->resetWidgetProperty(widget, name_QString);
}

bool QDesignerFormWindowCursorInterface_IsWidgetSelected(const QDesignerFormWindowCursorInterface* self, QWidget* widget) {
    return self->isWidgetSelected(widget);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnFormWindow(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_formwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_FormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnMovePosition(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_moveposition_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_MovePosition_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnPosition(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_position_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_Position_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSetPosition(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_setposition_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SetPosition_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnCurrent(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_current_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_Current_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnWidgetCount(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_widgetcount_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_WidgetCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnWidget(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_widget_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_Widget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnHasSelection(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_hasselection_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_HasSelection_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_selectedwidgetcount_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SelectedWidgetCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSelectedWidget(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = const_cast<VirtualQDesignerFormWindowCursorInterface*>(dynamic_cast<const VirtualQDesignerFormWindowCursorInterface*>(self)))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_selectedwidget_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SelectedWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_setproperty_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SetProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnSetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_setwidgetproperty_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_SetWidgetProperty_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowCursorInterface_OnResetWidgetProperty(QDesignerFormWindowCursorInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowcursorinterface = dynamic_cast<VirtualQDesignerFormWindowCursorInterface*>(self))
        vqdesignerformwindowcursorinterface->qdesignerformwindowcursorinterface_resetwidgetproperty_callback = reinterpret_cast<VirtualQDesignerFormWindowCursorInterface::QDesignerFormWindowCursorInterface_ResetWidgetProperty_Callback>(slot);
}

void QDesignerFormWindowCursorInterface_Delete(QDesignerFormWindowCursorInterface* self) {
    delete self;
}
