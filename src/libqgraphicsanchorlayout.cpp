#include <QEvent>
#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgraphicsanchorlayout.h>
#include "libqgraphicsanchorlayout.h"
#include "libqgraphicsanchorlayout.hxx"

QMetaObject* QGraphicsAnchor_MetaObject(const QGraphicsAnchor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsAnchor_Metacast(QGraphicsAnchor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsAnchor_Metacall(QGraphicsAnchor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGraphicsAnchor_Tr(const char* s) {
    QString _ret = QGraphicsAnchor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsAnchor_SetSpacing(QGraphicsAnchor* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchor_UnsetSpacing(QGraphicsAnchor* self) {
    self->unsetSpacing();
}

double QGraphicsAnchor_Spacing(const QGraphicsAnchor* self) {
    return static_cast<double>(self->spacing());
}

void QGraphicsAnchor_SetSizePolicy(QGraphicsAnchor* self, int policy) {
    self->setSizePolicy(static_cast<QSizePolicy::Policy>(policy));
}

int QGraphicsAnchor_SizePolicy(const QGraphicsAnchor* self) {
    return static_cast<int>(self->sizePolicy());
}

libqt_string QGraphicsAnchor_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsAnchor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGraphicsAnchor_Delete(QGraphicsAnchor* self) {
    delete self;
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new() {
    return new VirtualQGraphicsAnchorLayout();
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent) {
    return new VirtualQGraphicsAnchorLayout(parent);
}

QGraphicsAnchor* QGraphicsAnchorLayout_AddAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
    return self->addAnchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

QGraphicsAnchor* QGraphicsAnchorLayout_Anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
    return self->anchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

void QGraphicsAnchorLayout_AddCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner) {
    self->addCornerAnchors(firstItem, static_cast<Qt::Corner>(firstCorner), secondItem, static_cast<Qt::Corner>(secondCorner));
}

void QGraphicsAnchorLayout_AddAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem) {
    self->addAnchors(firstItem, secondItem);
}

void QGraphicsAnchorLayout_SetHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing) {
    self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_SetVerticalSpacing(QGraphicsAnchorLayout* self, double spacing) {
    self->setVerticalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_SetSpacing(QGraphicsAnchorLayout* self, double spacing) {
    self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsAnchorLayout_HorizontalSpacing(const QGraphicsAnchorLayout* self) {
    return static_cast<double>(self->horizontalSpacing());
}

double QGraphicsAnchorLayout_VerticalSpacing(const QGraphicsAnchorLayout* self) {
    return static_cast<double>(self->verticalSpacing());
}

void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations) {
    self->addAnchors(firstItem, secondItem, static_cast<Qt::Orientations>(orientations));
}

// Derived class handler implementation
void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->removeAt(static_cast<int>(index));
    } else {
        self->QGraphicsAnchorLayout::removeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseRemoveAt(QGraphicsAnchorLayout* self, int index) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_RemoveAt_IsBase(true);
        vqgraphicsanchorlayout->removeAt(static_cast<int>(index));
    } else {
        self->QGraphicsAnchorLayout::removeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnRemoveAt(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_RemoveAt_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_RemoveAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setGeometry(*rect);
    } else {
        self->QGraphicsAnchorLayout::setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGeometry_IsBase(true);
        vqgraphicsanchorlayout->setGeometry(*rect);
    } else {
        self->QGraphicsAnchorLayout::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        return vqgraphicsanchorlayout->count();
    } else {
        return self->QGraphicsAnchorLayout::count();
    }
}

// Base class handler implementation
int QGraphicsAnchorLayout_QBaseCount(const QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Count_IsBase(true);
        return vqgraphicsanchorlayout->count();
    } else {
        return self->QGraphicsAnchorLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnCount(const QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Count_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        return vqgraphicsanchorlayout->itemAt(static_cast<int>(index));
    } else {
        return self->QGraphicsAnchorLayout::itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsAnchorLayout_QBaseItemAt(const QGraphicsAnchorLayout* self, int index) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_ItemAt_IsBase(true);
        return vqgraphicsanchorlayout->itemAt(static_cast<int>(index));
    } else {
        return self->QGraphicsAnchorLayout::itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnItemAt(const QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_ItemAt_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->invalidate();
    } else {
        self->QGraphicsAnchorLayout::invalidate();
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseInvalidate(QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Invalidate_IsBase(true);
        vqgraphicsanchorlayout->invalidate();
    } else {
        self->QGraphicsAnchorLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnInvalidate(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_Invalidate_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsAnchorLayout_QBaseSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSizeHint(const QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_GetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsAnchorLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseGetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_GetContentsMargins_IsBase(true);
        vqgraphicsanchorlayout->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        self->QGraphicsAnchorLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnGetContentsMargins(const QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_UpdateGeometry(QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->updateGeometry();
    } else {
        self->QGraphicsAnchorLayout::updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseUpdateGeometry(QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_UpdateGeometry_IsBase(true);
        vqgraphicsanchorlayout->updateGeometry();
    } else {
        self->QGraphicsAnchorLayout::updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnUpdateGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_WidgetEvent(QGraphicsAnchorLayout* self, QEvent* e) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->widgetEvent(e);
    } else {
        self->QGraphicsAnchorLayout::widgetEvent(e);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseWidgetEvent(QGraphicsAnchorLayout* self, QEvent* e) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_WidgetEvent_IsBase(true);
        vqgraphicsanchorlayout->widgetEvent(e);
    } else {
        self->QGraphicsAnchorLayout::widgetEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnWidgetEvent(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsAnchorLayout_IsEmpty(const QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        return vqgraphicsanchorlayout->isEmpty();
    } else {
        return self->QGraphicsAnchorLayout::isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsAnchorLayout_QBaseIsEmpty(const QGraphicsAnchorLayout* self) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_IsEmpty_IsBase(true);
        return vqgraphicsanchorlayout->isEmpty();
    } else {
        return self->QGraphicsAnchorLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnIsEmpty(const QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self));
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_AddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->addChildLayoutItem(layoutItem);
    } else {
        ((VirtualQGraphicsAnchorLayout*)self)->addChildLayoutItem(layoutItem);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseAddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_AddChildLayoutItem_IsBase(true);
        vqgraphicsanchorlayout->addChildLayoutItem(layoutItem);
    } else {
        ((VirtualQGraphicsAnchorLayout*)self)->addChildLayoutItem(layoutItem);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnAddChildLayoutItem(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_AddChildLayoutItem_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_AddChildLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_SetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsAnchorLayout*)self)->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGraphicsItem_IsBase(true);
        vqgraphicsanchorlayout->setGraphicsItem(item);
    } else {
        ((VirtualQGraphicsAnchorLayout*)self)->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetGraphicsItem(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsAnchorLayout_SetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsAnchorLayout*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsAnchorLayout_QBaseSetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetOwnedByLayout_IsBase(true);
        vqgraphicsanchorlayout->setOwnedByLayout(ownedByLayout);
    } else {
        ((VirtualQGraphicsAnchorLayout*)self)->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetOwnedByLayout(QGraphicsAnchorLayout* self, intptr_t slot) {
    auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout && vqgraphicsanchorlayout->isVirtualQGraphicsAnchorLayout) {
        vqgraphicsanchorlayout->setQGraphicsAnchorLayout_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self) {
    delete self;
}
