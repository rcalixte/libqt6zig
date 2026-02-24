#include <QDesignerContainerExtension>
#include <QWidget>
#include <container.h>
#include "libcontainer.h"
#include "libcontainer.hxx"

QDesignerContainerExtension* QDesignerContainerExtension_new() {
    return new VirtualQDesignerContainerExtension();
}

int QDesignerContainerExtension_Count(const QDesignerContainerExtension* self) {
    auto* vqdesignercontainerextension = dynamic_cast<const VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        return vqdesignercontainerextension->count();
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->count();
    }
}

QWidget* QDesignerContainerExtension_Widget(const QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = dynamic_cast<const VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        return vqdesignercontainerextension->widget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->widget(static_cast<int>(index));
    }
}

int QDesignerContainerExtension_CurrentIndex(const QDesignerContainerExtension* self) {
    auto* vqdesignercontainerextension = dynamic_cast<const VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        return vqdesignercontainerextension->currentIndex();
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->currentIndex();
    }
}

void QDesignerContainerExtension_SetCurrentIndex(QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setCurrentIndex(static_cast<int>(index));
    } else {
        ((VirtualQDesignerContainerExtension*)self)->setCurrentIndex(static_cast<int>(index));
    }
}

bool QDesignerContainerExtension_CanAddWidget(const QDesignerContainerExtension* self) {
    auto* vqdesignercontainerextension = dynamic_cast<const VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        return vqdesignercontainerextension->canAddWidget();
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->canAddWidget();
    }
}

void QDesignerContainerExtension_AddWidget(QDesignerContainerExtension* self, QWidget* widget) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->addWidget(widget);
    } else {
        ((VirtualQDesignerContainerExtension*)self)->addWidget(widget);
    }
}

void QDesignerContainerExtension_InsertWidget(QDesignerContainerExtension* self, int index, QWidget* widget) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->insertWidget(static_cast<int>(index), widget);
    } else {
        ((VirtualQDesignerContainerExtension*)self)->insertWidget(static_cast<int>(index), widget);
    }
}

bool QDesignerContainerExtension_CanRemove(const QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = dynamic_cast<const VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        return vqdesignercontainerextension->canRemove(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->canRemove(static_cast<int>(index));
    }
}

void QDesignerContainerExtension_Remove(QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->remove(static_cast<int>(index));
    } else {
        ((VirtualQDesignerContainerExtension*)self)->remove(static_cast<int>(index));
    }
}

// Base class handler implementation
int QDesignerContainerExtension_SuperCount(const QDesignerContainerExtension* self) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_Count_IsBase(true);
        return vqdesignercontainerextension->count();
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCount(const QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_Count_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_Count_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QDesignerContainerExtension_SuperWidget(const QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_Widget_IsBase(true);
        return vqdesignercontainerextension->widget(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->widget(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnWidget(const QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_Widget_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_Widget_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerContainerExtension_SuperCurrentIndex(const QDesignerContainerExtension* self) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_CurrentIndex_IsBase(true);
        return vqdesignercontainerextension->currentIndex();
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->currentIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCurrentIndex(const QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_CurrentIndex_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_CurrentIndex_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerContainerExtension_SuperSetCurrentIndex(QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_SetCurrentIndex_IsBase(true);
        vqdesignercontainerextension->setCurrentIndex(static_cast<int>(index));
    } else {
        ((VirtualQDesignerContainerExtension*)self)->setCurrentIndex(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnSetCurrentIndex(QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_SetCurrentIndex_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_SetCurrentIndex_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerContainerExtension_SuperCanAddWidget(const QDesignerContainerExtension* self) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_CanAddWidget_IsBase(true);
        return vqdesignercontainerextension->canAddWidget();
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->canAddWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCanAddWidget(const QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_CanAddWidget_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_CanAddWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerContainerExtension_SuperAddWidget(QDesignerContainerExtension* self, QWidget* widget) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_AddWidget_IsBase(true);
        vqdesignercontainerextension->addWidget(widget);
    } else {
        ((VirtualQDesignerContainerExtension*)self)->addWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnAddWidget(QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_AddWidget_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_AddWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerContainerExtension_SuperInsertWidget(QDesignerContainerExtension* self, int index, QWidget* widget) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_InsertWidget_IsBase(true);
        vqdesignercontainerextension->insertWidget(static_cast<int>(index), widget);
    } else {
        ((VirtualQDesignerContainerExtension*)self)->insertWidget(static_cast<int>(index), widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnInsertWidget(QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_InsertWidget_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_InsertWidget_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerContainerExtension_SuperCanRemove(const QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_CanRemove_IsBase(true);
        return vqdesignercontainerextension->canRemove(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerContainerExtension*)self)->canRemove(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnCanRemove(const QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = const_cast<VirtualQDesignerContainerExtension*>(dynamic_cast<const VirtualQDesignerContainerExtension*>(self));
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_CanRemove_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_CanRemove_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerContainerExtension_SuperRemove(QDesignerContainerExtension* self, int index) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_Remove_IsBase(true);
        vqdesignercontainerextension->remove(static_cast<int>(index));
    } else {
        ((VirtualQDesignerContainerExtension*)self)->remove(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerContainerExtension_OnRemove(QDesignerContainerExtension* self, intptr_t slot) {
    auto* vqdesignercontainerextension = dynamic_cast<VirtualQDesignerContainerExtension*>(self);
    if (vqdesignercontainerextension && vqdesignercontainerextension->isVirtualQDesignerContainerExtension) {
        vqdesignercontainerextension->setQDesignerContainerExtension_Remove_Callback(reinterpret_cast<VirtualQDesignerContainerExtension::QDesignerContainerExtension_Remove_Callback>(slot));
    }
}

void QDesignerContainerExtension_Delete(QDesignerContainerExtension* self) {
    delete self;
}
