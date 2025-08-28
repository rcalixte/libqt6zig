#include <QEvent>
#include <QGraphicsGridLayout>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicsgridlayout.h>
#include "libqgraphicsgridlayout.h"
#include "libqgraphicsgridlayout.hxx"

QGraphicsGridLayout* QGraphicsGridLayout_new() {
    return new VirtualQGraphicsGridLayout();
}

QGraphicsGridLayout* QGraphicsGridLayout_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsGridLayout(parent);
}

void QGraphicsGridLayout_AddItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGraphicsGridLayout_AddItem2(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGraphicsGridLayout_SetHorizontalSpacing(QGraphicsGridLayout* self, double spacing) {
    self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_HorizontalSpacing(const QGraphicsGridLayout* self) {
    return static_cast<double>(self->horizontalSpacing());
}

void QGraphicsGridLayout_SetVerticalSpacing(QGraphicsGridLayout* self, double spacing) {
    self->setVerticalSpacing(static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_VerticalSpacing(const QGraphicsGridLayout* self) {
    return static_cast<double>(self->verticalSpacing());
}

void QGraphicsGridLayout_SetSpacing(QGraphicsGridLayout* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsGridLayout_SetRowSpacing(QGraphicsGridLayout* self, int row, double spacing) {
    self->setRowSpacing(static_cast<int>(row), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_RowSpacing(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowSpacing(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetColumnSpacing(QGraphicsGridLayout* self, int column, double spacing) {
    self->setColumnSpacing(static_cast<int>(column), static_cast<qreal>(spacing));
}

double QGraphicsGridLayout_ColumnSpacing(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnSpacing(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetRowStretchFactor(QGraphicsGridLayout* self, int row, int stretch) {
    self->setRowStretchFactor(static_cast<int>(row), static_cast<int>(stretch));
}

int QGraphicsGridLayout_RowStretchFactor(const QGraphicsGridLayout* self, int row) {
    return self->rowStretchFactor(static_cast<int>(row));
}

void QGraphicsGridLayout_SetColumnStretchFactor(QGraphicsGridLayout* self, int column, int stretch) {
    self->setColumnStretchFactor(static_cast<int>(column), static_cast<int>(stretch));
}

int QGraphicsGridLayout_ColumnStretchFactor(const QGraphicsGridLayout* self, int column) {
    return self->columnStretchFactor(static_cast<int>(column));
}

void QGraphicsGridLayout_SetRowMinimumHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowMinimumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMinimumHeight(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowMinimumHeight(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetRowPreferredHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowPreferredHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowPreferredHeight(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowPreferredHeight(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetRowMaximumHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowMaximumHeight(static_cast<int>(row), static_cast<qreal>(height));
}

double QGraphicsGridLayout_RowMaximumHeight(const QGraphicsGridLayout* self, int row) {
    return static_cast<double>(self->rowMaximumHeight(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetRowFixedHeight(QGraphicsGridLayout* self, int row, double height) {
    self->setRowFixedHeight(static_cast<int>(row), static_cast<qreal>(height));
}

void QGraphicsGridLayout_SetColumnMinimumWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnMinimumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMinimumWidth(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnMinimumWidth(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetColumnPreferredWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnPreferredWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnPreferredWidth(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnPreferredWidth(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetColumnMaximumWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnMaximumWidth(static_cast<int>(column), static_cast<qreal>(width));
}

double QGraphicsGridLayout_ColumnMaximumWidth(const QGraphicsGridLayout* self, int column) {
    return static_cast<double>(self->columnMaximumWidth(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetColumnFixedWidth(QGraphicsGridLayout* self, int column, double width) {
    self->setColumnFixedWidth(static_cast<int>(column), static_cast<qreal>(width));
}

void QGraphicsGridLayout_SetRowAlignment(QGraphicsGridLayout* self, int row, int alignment) {
    self->setRowAlignment(static_cast<int>(row), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_RowAlignment(const QGraphicsGridLayout* self, int row) {
    return static_cast<int>(self->rowAlignment(static_cast<int>(row)));
}

void QGraphicsGridLayout_SetColumnAlignment(QGraphicsGridLayout* self, int column, int alignment) {
    self->setColumnAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_ColumnAlignment(const QGraphicsGridLayout* self, int column) {
    return static_cast<int>(self->columnAlignment(static_cast<int>(column)));
}

void QGraphicsGridLayout_SetAlignment(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int alignment) {
    self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsGridLayout_Alignment(const QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
    return static_cast<int>(self->alignment(item));
}

int QGraphicsGridLayout_RowCount(const QGraphicsGridLayout* self) {
    return self->rowCount();
}

int QGraphicsGridLayout_ColumnCount(const QGraphicsGridLayout* self) {
    return self->columnCount();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt(const QGraphicsGridLayout* self, int row, int column) {
    return self->itemAt(static_cast<int>(row), static_cast<int>(column));
}

int QGraphicsGridLayout_Count(const QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        return self->count();
    } else {
        return ((VirtualQGraphicsGridLayout*)self)->count();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsGridLayout_OnCount(const QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Count_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsGridLayout_QBaseCount(const QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Count_IsBase(true);
        return vqgraphicsgridlayout->count();
    } else {
        return ((VirtualQGraphicsGridLayout*)self)->count();
    }
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt2(const QGraphicsGridLayout* self, int index) {
    auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        return self->itemAt(static_cast<int>(index));
    } else {
        return ((VirtualQGraphicsGridLayout*)self)->itemAt(static_cast<int>(index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsGridLayout_OnItemAt2(const QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_ItemAt2_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_ItemAt2_Callback>(slot));
    }
}

// Virtual base class handler implementation
QGraphicsLayoutItem* QGraphicsGridLayout_QBaseItemAt2(const QGraphicsGridLayout* self, int index) {
    auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_ItemAt2_IsBase(true);
        return vqgraphicsgridlayout->itemAt(static_cast<int>(index));
    } else {
        return ((VirtualQGraphicsGridLayout*)self)->itemAt(static_cast<int>(index));
    }
}

void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        self->removeAt(static_cast<int>(index));
    } else {
        ((VirtualQGraphicsGridLayout*)self)->removeAt(static_cast<int>(index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsGridLayout_OnRemoveAt(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_RemoveAt_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QGraphicsGridLayout_QBaseRemoveAt(QGraphicsGridLayout* self, int index) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_RemoveAt_IsBase(true);
        vqgraphicsgridlayout->removeAt(static_cast<int>(index));
    } else {
        ((VirtualQGraphicsGridLayout*)self)->removeAt(static_cast<int>(index));
    }
}

void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
    self->removeItem(item);
}

void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        self->invalidate();
    } else {
        ((VirtualQGraphicsGridLayout*)self)->invalidate();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsGridLayout_OnInvalidate(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Invalidate_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QGraphicsGridLayout_QBaseInvalidate(QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_Invalidate_IsBase(true);
        vqgraphicsgridlayout->invalidate();
    } else {
        ((VirtualQGraphicsGridLayout*)self)->invalidate();
    }
}

void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, const QRectF* rect) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        self->setGeometry(*rect);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->setGeometry(*rect);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsGridLayout_OnSetGeometry(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetGeometry_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QGraphicsGridLayout_QBaseSetGeometry(QGraphicsGridLayout* self, const QRectF* rect) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGeometry_IsBase(true);
        vqgraphicsgridlayout->setGeometry(*rect);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->setGeometry(*rect);
    }
}

QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    } else {
        return new QSizeF(((VirtualQGraphicsGridLayout*)self)->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsGridLayout_OnSizeHint(const QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSizeF* QGraphicsGridLayout_QBaseSizeHint(const QGraphicsGridLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsgridlayout = dynamic_cast<const VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicsgridlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    } else {
        return new QSizeF(((VirtualQGraphicsGridLayout*)self)->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

// Derived class handler implementation
void QGraphicsGridLayout_GetContentsMargins(const QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsGridLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseGetContentsMargins(const QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_GetContentsMargins_IsBase(true);
        vqgraphicsgridlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsGridLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnGetContentsMargins(const QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_UpdateGeometry(QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->updateGeometry();
    } else {
        self->QGraphicsGridLayout::updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseUpdateGeometry(QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_UpdateGeometry_IsBase(true);
        vqgraphicsgridlayout->updateGeometry();
    } else {
        self->QGraphicsGridLayout::updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnUpdateGeometry(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_WidgetEvent(QGraphicsGridLayout* self, QEvent* e) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->widgetEvent(e);
    } else {
        self->QGraphicsGridLayout::widgetEvent(e);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseWidgetEvent(QGraphicsGridLayout* self, QEvent* e) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_WidgetEvent_IsBase(true);
        vqgraphicsgridlayout->widgetEvent(e);
    } else {
        self->QGraphicsGridLayout::widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnWidgetEvent(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsGridLayout_IsEmpty(const QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        return vqgraphicsgridlayout->isEmpty();
    } else {
        return self->QGraphicsGridLayout::isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsGridLayout_QBaseIsEmpty(const QGraphicsGridLayout* self) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_IsEmpty_IsBase(true);
        return vqgraphicsgridlayout->isEmpty();
    } else {
        return self->QGraphicsGridLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnIsEmpty(const QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self));
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_AddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->addChildLayoutItem(layoutItem);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseAddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicsgridlayout->addChildLayoutItem(layoutItem);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnAddChildLayoutItem(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_SetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseSetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGraphicsItem_IsBase(true);
        vqgraphicsgridlayout->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetGraphicsItem(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsGridLayout_SetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsGridLayout_QBaseSetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicsgridlayout->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsGridLayout*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetOwnedByLayout(QGraphicsGridLayout* self, intptr_t slot) {
    auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self);
    if (vqgraphicsgridlayout && vqgraphicsgridlayout->isVirtualQGraphicsGridLayout) {
        vqgraphicsgridlayout->setQGraphicsGridLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
    delete self;
}
