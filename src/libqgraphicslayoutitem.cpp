#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicslayoutitem.h>
#include "libqgraphicslayoutitem.h"
#include "libqgraphicslayoutitem.hxx"

QGraphicsLayoutItem* QGraphicsLayoutItem_new() {
    return new VirtualQGraphicsLayoutItem();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsLayoutItem(parent);
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new3(QGraphicsLayoutItem* parent, bool isLayout) {
    return new VirtualQGraphicsLayoutItem(parent, isLayout);
}

void QGraphicsLayoutItem_SetSizePolicy(QGraphicsLayoutItem* self, const QSizePolicy* policy) {
    self->setSizePolicy(*policy);
}

void QGraphicsLayoutItem_SetSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy) {
    self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy));
}

QSizePolicy* QGraphicsLayoutItem_SizePolicy(const QGraphicsLayoutItem* self) {
    return new QSizePolicy(self->sizePolicy());
}

void QGraphicsLayoutItem_SetMinimumSize(QGraphicsLayoutItem* self, const QSizeF* size) {
    self->setMinimumSize(*size);
}

void QGraphicsLayoutItem_SetMinimumSize2(QGraphicsLayoutItem* self, double w, double h) {
    self->setMinimumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MinimumSize(const QGraphicsLayoutItem* self) {
    return new QSizeF(self->minimumSize());
}

void QGraphicsLayoutItem_SetMinimumWidth(QGraphicsLayoutItem* self, double width) {
    self->setMinimumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MinimumWidth(const QGraphicsLayoutItem* self) {
    return static_cast<double>(self->minimumWidth());
}

void QGraphicsLayoutItem_SetMinimumHeight(QGraphicsLayoutItem* self, double height) {
    self->setMinimumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MinimumHeight(const QGraphicsLayoutItem* self) {
    return static_cast<double>(self->minimumHeight());
}

void QGraphicsLayoutItem_SetPreferredSize(QGraphicsLayoutItem* self, const QSizeF* size) {
    self->setPreferredSize(*size);
}

void QGraphicsLayoutItem_SetPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
    self->setPreferredSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_PreferredSize(const QGraphicsLayoutItem* self) {
    return new QSizeF(self->preferredSize());
}

void QGraphicsLayoutItem_SetPreferredWidth(QGraphicsLayoutItem* self, double width) {
    self->setPreferredWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_PreferredWidth(const QGraphicsLayoutItem* self) {
    return static_cast<double>(self->preferredWidth());
}

void QGraphicsLayoutItem_SetPreferredHeight(QGraphicsLayoutItem* self, double height) {
    self->setPreferredHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_PreferredHeight(const QGraphicsLayoutItem* self) {
    return static_cast<double>(self->preferredHeight());
}

void QGraphicsLayoutItem_SetMaximumSize(QGraphicsLayoutItem* self, const QSizeF* size) {
    self->setMaximumSize(*size);
}

void QGraphicsLayoutItem_SetMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
    self->setMaximumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_MaximumSize(const QGraphicsLayoutItem* self) {
    return new QSizeF(self->maximumSize());
}

void QGraphicsLayoutItem_SetMaximumWidth(QGraphicsLayoutItem* self, double width) {
    self->setMaximumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_MaximumWidth(const QGraphicsLayoutItem* self) {
    return static_cast<double>(self->maximumWidth());
}

void QGraphicsLayoutItem_SetMaximumHeight(QGraphicsLayoutItem* self, double height) {
    self->setMaximumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_MaximumHeight(const QGraphicsLayoutItem* self) {
    return static_cast<double>(self->maximumHeight());
}

QRectF* QGraphicsLayoutItem_Geometry(const QGraphicsLayoutItem* self) {
    return new QRectF(self->geometry());
}

QRectF* QGraphicsLayoutItem_ContentsRect(const QGraphicsLayoutItem* self) {
    return new QRectF(self->contentsRect());
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint(const QGraphicsLayoutItem* self, int which) {
    return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which)));
}

QGraphicsLayoutItem* QGraphicsLayoutItem_ParentLayoutItem(const QGraphicsLayoutItem* self) {
    return self->parentLayoutItem();
}

void QGraphicsLayoutItem_SetParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent) {
    self->setParentLayoutItem(parent);
}

bool QGraphicsLayoutItem_IsLayout(const QGraphicsLayoutItem* self) {
    return self->isLayout();
}

QGraphicsItem* QGraphicsLayoutItem_GraphicsItem(const QGraphicsLayoutItem* self) {
    return self->graphicsItem();
}

bool QGraphicsLayoutItem_OwnedByLayout(const QGraphicsLayoutItem* self) {
    return self->ownedByLayout();
}

void QGraphicsLayoutItem_SetSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType) {
    self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy), static_cast<QSizePolicy::ControlType>(controlType));
}

QSizeF* QGraphicsLayoutItem_EffectiveSizeHint2(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint) {
    return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

// Derived class handler implementation
void QGraphicsLayoutItem_SetGeometry(QGraphicsLayoutItem* self, const QRectF* rect) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setGeometry(*rect);
    } else {
        self->QGraphicsLayoutItem::setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseSetGeometry(QGraphicsLayoutItem* self, const QRectF* rect) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGeometry_IsBase(true);
        vqgraphicslayoutitem->setGeometry(*rect);
    } else {
        self->QGraphicsLayoutItem::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSetGeometry(QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayoutItem_GetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsLayoutItem::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseGetContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_GetContentsMargins_IsBase(true);
        vqgraphicslayoutitem->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsLayoutItem::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnGetContentsMargins(const QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayoutItem_UpdateGeometry(QGraphicsLayoutItem* self) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->updateGeometry();
    } else {
        self->QGraphicsLayoutItem::updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseUpdateGeometry(QGraphicsLayoutItem* self) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_UpdateGeometry_IsBase(true);
        vqgraphicslayoutitem->updateGeometry();
    } else {
        self->QGraphicsLayoutItem::updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnUpdateGeometry(QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLayoutItem_IsEmpty(const QGraphicsLayoutItem* self) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        return vqgraphicslayoutitem->isEmpty();
    } else {
        return self->QGraphicsLayoutItem::isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsLayoutItem_QBaseIsEmpty(const QGraphicsLayoutItem* self) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_IsEmpty_IsBase(true);
        return vqgraphicslayoutitem->isEmpty();
    } else {
        return self->QGraphicsLayoutItem::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnIsEmpty(const QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsLayoutItem_SizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        return new QSizeF(vqgraphicslayoutitem->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsLayoutItem_QBaseSizeHint(const QGraphicsLayoutItem* self, int which, const QSizeF* constraint) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicslayoutitem->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSizeHint(const QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = const_cast<VirtualQGraphicsLayoutItem*>(dynamic_cast<const VirtualQGraphicsLayoutItem*>(self));
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayoutItem_SetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsLayoutItem*)self)->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseSetGraphicsItem(QGraphicsLayoutItem* self, QGraphicsItem* item) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGraphicsItem_IsBase(true);
        vqgraphicslayoutitem->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsLayoutItem*)self)->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSetGraphicsItem(QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLayoutItem_SetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsLayoutItem*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsLayoutItem_QBaseSetOwnedByLayout(QGraphicsLayoutItem* self, bool ownedByLayout) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SetOwnedByLayout_IsBase(true);
        vqgraphicslayoutitem->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsLayoutItem*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLayoutItem_OnSetOwnedByLayout(QGraphicsLayoutItem* self, intptr_t slot) {
    auto* vqgraphicslayoutitem = dynamic_cast<VirtualQGraphicsLayoutItem*>(self);
    if (vqgraphicslayoutitem && vqgraphicslayoutitem->isVirtualQGraphicsLayoutItem) {
        vqgraphicslayoutitem->setQGraphicsLayoutItem_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsLayoutItem::QGraphicsLayoutItem_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsLayoutItem_Delete(QGraphicsLayoutItem* self) {
    delete self;
}
