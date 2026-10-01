#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslinearlayout.h>
#include "libqgraphicslinearlayout.h"
#include "libqgraphicslinearlayout.hxx"

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
    return new VirtualQGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(int orientation) {
    return new VirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation));
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLinearLayout(parent);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new4(int orientation, QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation), parent);
}

void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QGraphicsLinearLayout_Orientation(const QGraphicsLinearLayout* self) {
    return static_cast<int>(self->orientation());
}

void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    self->addItem(item);
}

void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self) {
    self->addStretch();
}

void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
    self->insertItem(static_cast<int>(index), item);
}

void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index) {
    self->insertStretch(static_cast<int>(index));
}

void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    self->removeItem(item);
}

void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index) {
    self->removeAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_Spacing(const QGraphicsLinearLayout* self) {
    return static_cast<double>(self->spacing());
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
    self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_ItemSpacing(const QGraphicsLinearLayout* self, int index) {
    return static_cast<double>(self->itemSpacing(static_cast<int>(index)));
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
    self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_StretchFactor(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    return self->stretchFactor(item);
}

void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
    self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsLinearLayout_Alignment(const QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
    return static_cast<int>(self->alignment(item));
}

void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

int QGraphicsLinearLayout_Count(const QGraphicsLinearLayout* self) {
    return self->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(const QGraphicsLinearLayout* self, int index) {
    return self->itemAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
    self->invalidate();
}

QSizeF* QGraphicsLinearLayout_SizeHint(const QGraphicsLinearLayout* self, int which, const QSizeF* constraint) {
    return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

void QGraphicsLinearLayout_Dump(const QGraphicsLinearLayout* self) {
    self->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
    self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
    self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QGraphicsLinearLayout_Dump1(const QGraphicsLinearLayout* self, int indent) {
    self->dump(static_cast<int>(indent));
}

// Base class handler implementation
void QGraphicsLinearLayout_SuperRemoveAt(QGraphicsLinearLayout* self, int index) {
    self->QGraphicsLinearLayout::removeAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnRemoveAt(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self))
        vqgraphicslinearlayout->qgraphicslinearlayout_removeat_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_RemoveAt_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLinearLayout_SuperSetGeometry(QGraphicsLinearLayout* self, const QRectF* rect) {
    self->QGraphicsLinearLayout::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSetGeometry(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self))
        vqgraphicslinearlayout->qgraphicslinearlayout_setgeometry_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SetGeometry_Callback>(slot);
}

// Base class handler implementation
int QGraphicsLinearLayout_SuperCount(const QGraphicsLinearLayout* self) {
    return self->QGraphicsLinearLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnCount(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self)))
        vqgraphicslinearlayout->qgraphicslinearlayout_count_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_Count_Callback>(slot);
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsLinearLayout_SuperItemAt(const QGraphicsLinearLayout* self, int index) {
    return self->QGraphicsLinearLayout::itemAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnItemAt(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self)))
        vqgraphicslinearlayout->qgraphicslinearlayout_itemat_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_ItemAt_Callback>(slot);
}

// Base class handler implementation
void QGraphicsLinearLayout_SuperInvalidate(QGraphicsLinearLayout* self) {
    self->QGraphicsLinearLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnInvalidate(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self))
        vqgraphicslinearlayout->qgraphicslinearlayout_invalidate_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
QSizeF* QGraphicsLinearLayout_SuperSizeHint(const QGraphicsLinearLayout* self, int which, const QSizeF* constraint) {
    return new QSizeF(self->QGraphicsLinearLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnSizeHint(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self)))
        vqgraphicslinearlayout->qgraphicslinearlayout_sizehint_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLinearLayout_GetContentsMargins(const QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Base class handler implementation
void QGraphicsLinearLayout_SuperGetContentsMargins(const QGraphicsLinearLayout* self, double* left, double* top, double* right, double* bottom) {
    self->QGraphicsLinearLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnGetContentsMargins(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self)))
        vqgraphicslinearlayout->qgraphicslinearlayout_getcontentsmargins_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_GetContentsMargins_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLinearLayout_UpdateGeometry(QGraphicsLinearLayout* self) {
    self->updateGeometry();
}

// Base class handler implementation
void QGraphicsLinearLayout_SuperUpdateGeometry(QGraphicsLinearLayout* self) {
    self->QGraphicsLinearLayout::updateGeometry();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnUpdateGeometry(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self))
        vqgraphicslinearlayout->qgraphicslinearlayout_updategeometry_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_UpdateGeometry_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsLinearLayout_WidgetEvent(QGraphicsLinearLayout* self, QEvent* e) {
    self->widgetEvent(e);
}

// Base class handler implementation
void QGraphicsLinearLayout_SuperWidgetEvent(QGraphicsLinearLayout* self, QEvent* e) {
    self->QGraphicsLinearLayout::widgetEvent(e);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnWidgetEvent(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self))
        vqgraphicslinearlayout->qgraphicslinearlayout_widgetevent_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_WidgetEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsLinearLayout_IsEmpty(const QGraphicsLinearLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGraphicsLinearLayout_SuperIsEmpty(const QGraphicsLinearLayout* self) {
    return self->QGraphicsLinearLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLinearLayout_OnIsEmpty(QGraphicsLinearLayout* self, intptr_t slot) {
    if (auto* vqgraphicslinearlayout = const_cast<VirtualQGraphicsLinearLayout*>(dynamic_cast<const VirtualQGraphicsLinearLayout*>(self)))
        vqgraphicslinearlayout->qgraphicslinearlayout_isempty_callback = reinterpret_cast<VirtualQGraphicsLinearLayout::QGraphicsLinearLayout_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsLinearLayout_AddChildLayoutItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->VirtualQGraphicsLinearLayout::addChildLayoutItem(layoutItem);
    } else
        qFatal("Error: Protected method QGraphicsLinearLayout::addChildLayoutItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLinearLayout_SetGraphicsItem(QGraphicsLinearLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->VirtualQGraphicsLinearLayout::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QGraphicsLinearLayout::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsLinearLayout_SetOwnedByLayout(QGraphicsLinearLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicslinearlayout = dynamic_cast<VirtualQGraphicsLinearLayout*>(self)) {
        vqgraphicslinearlayout->VirtualQGraphicsLinearLayout::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QGraphicsLinearLayout::setOwnedByLayout called without a directly constructed type");
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
    delete self;
}
