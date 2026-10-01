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
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsLayout_Activate(QGraphicsLayout* self) {
    self->activate();
}

bool QGraphicsLayout_IsActivated(const QGraphicsLayout* self) {
    return self->isActivated();
}

void QGraphicsLayout_Invalidate(QGraphicsLayout* self) {
    self->invalidate();
}

void QGraphicsLayout_UpdateGeometry(QGraphicsLayout* self) {
    self->updateGeometry();
}

void QGraphicsLayout_WidgetEvent(QGraphicsLayout* self, QEvent* e) {
    self->widgetEvent(e);
}

int QGraphicsLayout_Count(const QGraphicsLayout* self) {
    return self->count();
}

QGraphicsLayoutItem* QGraphicsLayout_ItemAt(const QGraphicsLayout* self, int i) {
    return self->itemAt(static_cast<int>(i));
}

void QGraphicsLayout_RemoveAt(QGraphicsLayout* self, int index) {
    self->removeAt(static_cast<int>(index));
}

void QGraphicsLayout_SetInstantInvalidatePropagation(bool enable) {
    QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_InstantInvalidatePropagation() {
    return QGraphicsLayout::instantInvalidatePropagation();
}

// Base class handler implementation
void QGraphicsLayout_SuperGetContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
    self->QGraphicsLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnGetContentsMargins(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self)))
        vqgraphicslayout->qgraphicslayout_getcontentsmargins_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_GetContentsMargins_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLayout_SuperInvalidate(QGraphicsLayout* self) {
    self->QGraphicsLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnInvalidate(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self))
        vqgraphicslayout->qgraphicslayout_invalidate_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLayout_SuperUpdateGeometry(QGraphicsLayout* self) {
    self->QGraphicsLayout::updateGeometry();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnUpdateGeometry(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self))
        vqgraphicslayout->qgraphicslayout_updategeometry_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_UpdateGeometry_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLayout_SuperWidgetEvent(QGraphicsLayout* self, QEvent* e) {
    self->QGraphicsLayout::widgetEvent(e);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnWidgetEvent(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self))
        vqgraphicslayout->qgraphicslayout_widgetevent_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_WidgetEvent_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnCount(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self)))
        vqgraphicslayout->qgraphicslayout_count_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_Count_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnItemAt(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self)))
        vqgraphicslayout->qgraphicslayout_itemat_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_ItemAt_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnRemoveAt(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self))
        vqgraphicslayout->qgraphicslayout_removeat_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_RemoveAt_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLayout_SetGeometry(QGraphicsLayout* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

// Base class handler implementation
void QGraphicsLayout_SuperSetGeometry(QGraphicsLayout* self, const QRectF* rect) {
    self->QGraphicsLayout::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSetGeometry(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self))
        vqgraphicslayout->qgraphicslayout_setgeometry_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsLayout_IsEmpty(const QGraphicsLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGraphicsLayout_SuperIsEmpty(const QGraphicsLayout* self) {
    return self->QGraphicsLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnIsEmpty(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self)))
        vqgraphicslayout->qgraphicslayout_isempty_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
QSizeF* QGraphicsLayout_SizeHint(const QGraphicsLayout* self, int which, const QSizeF* constraint) {
    return new QSizeF((self->*&VirtualQGraphicsLayout::Base::sizeHint)(static_cast<Qt::SizeHint>(which), *constraint));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayout_OnSizeHint(QGraphicsLayout* self, intptr_t slot) {
    if (auto* vqgraphicslayout = const_cast<VirtualQGraphicsLayout*>(dynamic_cast<const VirtualQGraphicsLayout*>(self)))
        vqgraphicslayout->qgraphicslayout_sizehint_callback = reinterpret_cast<VirtualQGraphicsLayout::QGraphicsLayout_SizeHint_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsLayout_AddChildLayoutItem(QGraphicsLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->VirtualQGraphicsLayout::addChildLayoutItem(layoutItem);
    } else
        qFatal("Error: Protected method QGraphicsLayout::addChildLayoutItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLayout_SetGraphicsItem(QGraphicsLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->VirtualQGraphicsLayout::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QGraphicsLayout::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLayout_SetOwnedByLayout(QGraphicsLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicslayout = dynamic_cast<VirtualQGraphicsLayout*>(self)) {
        vqgraphicslayout->VirtualQGraphicsLayout::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QGraphicsLayout::setOwnedByLayout called without a directly constructed type");
}

void QGraphicsLayout_Delete(QGraphicsLayout* self) {
    delete self;
}
