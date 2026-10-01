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
    return self->count();
}

QGraphicsLayoutItem* QGraphicsGridLayout_ItemAt2(const QGraphicsGridLayout* self, int index) {
    return self->itemAt(static_cast<int>(index));
}

void QGraphicsGridLayout_RemoveAt(QGraphicsGridLayout* self, int index) {
    self->removeAt(static_cast<int>(index));
}

void QGraphicsGridLayout_RemoveItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* item) {
    self->removeItem(item);
}

void QGraphicsGridLayout_Invalidate(QGraphicsGridLayout* self) {
    self->invalidate();
}

void QGraphicsGridLayout_SetGeometry(QGraphicsGridLayout* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

QSizeF* QGraphicsGridLayout_SizeHint(const QGraphicsGridLayout* self, int which, const QSizeF* constraint) {
    return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsGridLayout_AddItem6(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int alignment) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(alignment));
}

void QGraphicsGridLayout_AddItem4(QGraphicsGridLayout* self, QGraphicsLayoutItem* item, int row, int column, int alignment) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

// Base class handler implementation
int QGraphicsGridLayout_SuperCount(const QGraphicsGridLayout* self) {
    return self->QGraphicsGridLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnCount(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self)))
        vqgraphicsgridlayout->qgraphicsgridlayout_count_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Count_Callback>(slot);
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsGridLayout_SuperItemAt2(const QGraphicsGridLayout* self, int index) {
    return self->QGraphicsGridLayout::itemAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnItemAt2(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self)))
        vqgraphicsgridlayout->qgraphicsgridlayout_itemat2_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_ItemAt2_Callback>(slot);
}

// Base class handler implementation
void QGraphicsGridLayout_SuperRemoveAt(QGraphicsGridLayout* self, int index) {
    self->QGraphicsGridLayout::removeAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnRemoveAt(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self))
        vqgraphicsgridlayout->qgraphicsgridlayout_removeat_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_RemoveAt_Callback>(slot);
}

// Base class handler implementation
void QGraphicsGridLayout_SuperInvalidate(QGraphicsGridLayout* self) {
    self->QGraphicsGridLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnInvalidate(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self))
        vqgraphicsgridlayout->qgraphicsgridlayout_invalidate_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
void QGraphicsGridLayout_SuperSetGeometry(QGraphicsGridLayout* self, const QRectF* rect) {
    self->QGraphicsGridLayout::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSetGeometry(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self))
        vqgraphicsgridlayout->qgraphicsgridlayout_setgeometry_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SetGeometry_Callback>(slot);
}

// Base class handler implementation
QSizeF* QGraphicsGridLayout_SuperSizeHint(const QGraphicsGridLayout* self, int which, const QSizeF* constraint) {
    return new QSizeF(self->QGraphicsGridLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnSizeHint(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self)))
        vqgraphicsgridlayout->qgraphicsgridlayout_sizehint_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsGridLayout_GetContentsMargins(const QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Base class handler implementation
void QGraphicsGridLayout_SuperGetContentsMargins(const QGraphicsGridLayout* self, double* left, double* top, double* right, double* bottom) {
    self->QGraphicsGridLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnGetContentsMargins(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self)))
        vqgraphicsgridlayout->qgraphicsgridlayout_getcontentsmargins_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_GetContentsMargins_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsGridLayout_UpdateGeometry(QGraphicsGridLayout* self) {
    self->updateGeometry();
}

// Base class handler implementation
void QGraphicsGridLayout_SuperUpdateGeometry(QGraphicsGridLayout* self) {
    self->QGraphicsGridLayout::updateGeometry();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnUpdateGeometry(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self))
        vqgraphicsgridlayout->qgraphicsgridlayout_updategeometry_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_UpdateGeometry_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsGridLayout_WidgetEvent(QGraphicsGridLayout* self, QEvent* e) {
    self->widgetEvent(e);
}

// Base class handler implementation
void QGraphicsGridLayout_SuperWidgetEvent(QGraphicsGridLayout* self, QEvent* e) {
    self->QGraphicsGridLayout::widgetEvent(e);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnWidgetEvent(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self))
        vqgraphicsgridlayout->qgraphicsgridlayout_widgetevent_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_WidgetEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsGridLayout_IsEmpty(const QGraphicsGridLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGraphicsGridLayout_SuperIsEmpty(const QGraphicsGridLayout* self) {
    return self->QGraphicsGridLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsGridLayout_OnIsEmpty(QGraphicsGridLayout* self, intptr_t slot) {
    if (auto* vqgraphicsgridlayout = const_cast<VirtualQGraphicsGridLayout*>(dynamic_cast<const VirtualQGraphicsGridLayout*>(self)))
        vqgraphicsgridlayout->qgraphicsgridlayout_isempty_callback = reinterpret_cast<VirtualQGraphicsGridLayout::QGraphicsGridLayout_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsGridLayout_AddChildLayoutItem(QGraphicsGridLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->VirtualQGraphicsGridLayout::addChildLayoutItem(layoutItem);
    } else
        qFatal("Error: Protected method QGraphicsGridLayout::addChildLayoutItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsGridLayout_SetGraphicsItem(QGraphicsGridLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->VirtualQGraphicsGridLayout::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QGraphicsGridLayout::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsGridLayout_SetOwnedByLayout(QGraphicsGridLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicsgridlayout = dynamic_cast<VirtualQGraphicsGridLayout*>(self)) {
        vqgraphicsgridlayout->VirtualQGraphicsGridLayout::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QGraphicsGridLayout::setOwnedByLayout called without a directly constructed type");
}

void QGraphicsGridLayout_Delete(QGraphicsGridLayout* self) {
    delete self;
}
