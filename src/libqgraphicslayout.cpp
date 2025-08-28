#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslayout.h>
#include "libqgraphicslayout.h"
#include "libqgraphicslayout.hxx"

QGraphicsLayout* QGraphicsLayout_new() {
    return new VirtualQGraphicsLayout();
}

QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLayout(parent);
}

void QGraphicsLayout_SetContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
    self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsLayout_GetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        ((VirtualQGraphicsLayout*)self)->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

void QGraphicsLayout_Activate(QGraphicsLayout* self) {
    self->activate();
}

bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self) {
    return self->isActivated();
}

void QGraphicsLayout_Invalidate(QGraphicsLayout* self) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        self->invalidate();
    } else {
        ((VirtualQGraphicsLayout*)self)->invalidate();
    }
}

void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        self->updateGeometry();
    } else {
        ((VirtualQGraphicsLayout*)self)->updateGeometry();
    }
}

void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        self->widgetEvent(e);
    } else {
        ((VirtualQGraphicsLayout*)self)->widgetEvent(e);
    }
}

int QGraphicsLayout_Count(const QGraphicsLayout* self) {
    auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        return vqgraphicslayout->count();
    } else {
        return ((VirtualQGraphicsLayout*)self)->count();
    }
}

QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i) {
    auto* vqgraphicslayout = dynamic_cast<const VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        return vqgraphicslayout->itemAt(static_cast<int>(i));
    } else {
        return ((VirtualQGraphicsLayout*)self)->itemAt(static_cast<int>(i));
    }
}

void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->removeAt(static_cast<int>(index));
    } else {
        ((VirtualQGraphicsLayout*)self)->removeAt(static_cast<int>(index));
    }
}

void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable) {
    QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_InstantInvalidatePropagation() {
    return QGraphicsLayout::instantInvalidatePropagation();
}

// Base class handler implementation
void QGraphicsLayout_QBaseGetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_GetContentsMargins_IsBase(true);
        vqgraphicslayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnGetContentsMargins(const QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_GetContentsMargins_Callback>(slot));
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseInvalidate(QGraphicsLayout* self) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_Invalidate_IsBase(true);
        vqgraphicslayout->invalidate();
    } else {
        self->QGraphicsLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnInvalidate(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Invalidate_Callback>(slot));
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseUpdateGeometry(QGraphicsLayout* self) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_UpdateGeometry_IsBase(true);
        vqgraphicslayout->updateGeometry();
    } else {
        self->QGraphicsLayout::updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnUpdateGeometry(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_UpdateGeometry_Callback>(slot));
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseWidgetEvent(QGraphicsLayout* self, QEvent* e) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_WidgetEvent_IsBase(true);
        vqgraphicslayout->widgetEvent(e);
    } else {
        self->QGraphicsLayout::widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnWidgetEvent(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_WidgetEvent_Callback>(slot));
    }
}

// Base class handler implementation
int QGraphicsLayout_QBaseCount(const QGraphicsLayout* self) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_Count_IsBase(true);
        return vqgraphicslayout->count();
    } else {
        return ((VirtualQGraphicsLayout*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnCount(const QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Count_Callback>(slot));
    }
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsLayout_QBaseItemAt(const QGraphicsLayout* self, int i) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_ItemAt_IsBase(true);
        return vqgraphicslayout->itemAt(static_cast<int>(i));
    } else {
        return ((VirtualQGraphicsLayout*)self)->itemAt(static_cast<int>(i));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnItemAt(const QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_ItemAt_Callback>(slot));
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseRemoveAt(QGraphicsLayout* self, int index) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_RemoveAt_IsBase(true);
        vqgraphicslayout->removeAt(static_cast<int>(index));
    } else {
        ((VirtualQGraphicsLayout*)self)->removeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnRemoveAt(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_RemoveAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_SetGeometry(QGraphicsLayout* self, const QRectF* rect) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setGeometry(*rect);
    } else {
        self->QGraphicsLayout::setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseSetGeometry(QGraphicsLayout* self, const QRectF* rect) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SetGeometry_IsBase(true);
        vqgraphicslayout->setGeometry(*rect);
    } else {
        self->QGraphicsLayout::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetGeometry(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLayout_IsEmpty(const QGraphicsLayout* self) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        return vqgraphicslayout->isEmpty();
    } else {
        return self->QGraphicsLayout::isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsLayout_QBaseIsEmpty(const QGraphicsLayout* self) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_IsEmpty_IsBase(true);
        return vqgraphicslayout->isEmpty();
    } else {
        return self->QGraphicsLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnIsEmpty(const QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsLayout_SizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        return new QSizeF(vqgraphicslayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsLayout_QBaseSizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicslayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSizeHint(const QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self));
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_AddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->addChildLayoutItem(layoutItem);
    } else {
        ((VirtualQGraphicsLayout*)self)->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseAddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicslayout->addChildLayoutItem(layoutItem);
    } else {
        ((VirtualQGraphicsLayout*)self)->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnAddChildLayoutItem(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_SetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsLayout*)self)->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseSetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SetGraphicsItem_IsBase(true);
        vqgraphicslayout->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsLayout*)self)->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetGraphicsItem(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayout_SetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsLayout*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsLayout_QBaseSetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicslayout->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsLayout*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetOwnedByLayout(QGraphicsLayout* self, intptr_t slot) {
    auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self);
    if (vqgraphicslayout && vqgraphicslayout->isVirtualQGraphicsLayout) {
        vqgraphicslayout->setQGraphicsLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsLayout_Delete(QGraphicsLayout* self) {
    delete self;
}
