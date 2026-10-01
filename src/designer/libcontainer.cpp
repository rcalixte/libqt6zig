#include <QDesignerContainerExtension>
#include <QWidget>
#include <container.h>
#include "libcontainer.h"
#include "libcontainer.hxx"

QDesignerContainerExtension* QDesignerContainerExtension_new() {
    return new VirtualQDesignerContainerExtension();
}

int QDesignerContainerExtension_Count(const QDesignerContainerExtension* self) {
    return self->count();
}

QWidget* QDesignerContainerExtension_Widget(const QDesignerContainerExtension* self, int index) {
    return self->widget(static_cast<int>(index));
}

int QDesignerContainerExtension_CurrentIndex(const QDesignerContainerExtension* self) {
    return self->currentIndex();
}

void QDesignerContainerExtension_SetCurrentIndex(QDesignerContainerExtension* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

bool QDesignerContainerExtension_CanAddWidget(const QDesignerContainerExtension* self) {
    return self->canAddWidget();
}

void QDesignerContainerExtension_AddWidget(QDesignerContainerExtension* self, QWidget* widget) {
    self->addWidget(widget);
}

void QDesignerContainerExtension_InsertWidget(QDesignerContainerExtension* self, int index, QWidget* widget) {
    self->insertWidget(static_cast<int>(index), widget);
}

bool QDesignerContainerExtension_CanRemove(const QDesignerContainerExtension* self, int index) {
    return self->canRemove(static_cast<int>(index));
}

void QDesignerContainerExtension_Remove(QDesignerContainerExtension* self, int index) {
    self->remove(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCount(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self)))
        vqdesignercontainerextension->qdesignercontainerextension_count_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_Count_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnWidget(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self)))
        vqdesignercontainerextension->qdesignercontainerextension_widget_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_Widget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCurrentIndex(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self)))
        vqdesignercontainerextension->qdesignercontainerextension_currentindex_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_CurrentIndex_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnSetCurrentIndex(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self))
        vqdesignercontainerextension->qdesignercontainerextension_setcurrentindex_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_SetCurrentIndex_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCanAddWidget(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self)))
        vqdesignercontainerextension->qdesignercontainerextension_canaddwidget_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_CanAddWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnAddWidget(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self))
        vqdesignercontainerextension->qdesignercontainerextension_addwidget_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_AddWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnInsertWidget(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self))
        vqdesignercontainerextension->qdesignercontainerextension_insertwidget_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_InsertWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCanRemove(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self)))
        vqdesignercontainerextension->qdesignercontainerextension_canremove_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_CanRemove_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnRemove(QDesignerContainerExtension* self, intptr_t slot) {
    if (auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self))
        vqdesignercontainerextension->qdesignercontainerextension_remove_callback = reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_Remove_Callback>(slot);
}

void QDesignerContainerExtension_Delete(QDesignerContainerExtension* self) {
    delete self;
}
