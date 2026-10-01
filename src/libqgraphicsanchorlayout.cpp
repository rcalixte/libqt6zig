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
    auto _ret = QGraphicsAnchor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = QGraphicsAnchor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsAnchor_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QGraphicsAnchorLayout_RemoveAt(QGraphicsAnchorLayout* self, int index) {
    self->removeAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_SetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect) {
    self->setGeometry(*rect);
}

int QGraphicsAnchorLayout_Count(const QGraphicsAnchorLayout* self) {
    return self->count();
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_ItemAt(const QGraphicsAnchorLayout* self, int index) {
    return self->itemAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_Invalidate(QGraphicsAnchorLayout* self) {
    self->invalidate();
}

QSizeF* QGraphicsAnchorLayout_SizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint) {
    auto* vqgraphicsanchorlayout = dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self);
    if (vqgraphicsanchorlayout) {
        return new QSizeF(vqgraphicsanchorlayout->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    qFatal("Error: Protected method QGraphicsAnchorLayout::sizeHint called without a directly constructed type");
}

void QGraphicsAnchorLayout_AddAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations) {
    self->addAnchors(firstItem, secondItem, static_cast<Qt::Orientations>(orientations));
}

// Base class handler implementation
void QGraphicsAnchorLayout_SuperRemoveAt(QGraphicsAnchorLayout* self, int index) {
    self->QGraphicsAnchorLayout::removeAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnRemoveAt(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_removeat_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_RemoveAt_Callback>(slot);
}

// Base class handler implementation
void QGraphicsAnchorLayout_SuperSetGeometry(QGraphicsAnchorLayout* self, const QRectF* rect) {
    self->QGraphicsAnchorLayout::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSetGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_setgeometry_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SetGeometry_Callback>(slot);
}

// Base class handler implementation
int QGraphicsAnchorLayout_SuperCount(const QGraphicsAnchorLayout* self) {
    return self->QGraphicsAnchorLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnCount(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self)))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_count_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Count_Callback>(slot);
}

// Base class handler implementation
QGraphicsLayoutItem* QGraphicsAnchorLayout_SuperItemAt(const QGraphicsAnchorLayout* self, int index) {
    return self->QGraphicsAnchorLayout::itemAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnItemAt(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self)))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_itemat_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_ItemAt_Callback>(slot);
}

// Base class handler implementation
void QGraphicsAnchorLayout_SuperInvalidate(QGraphicsAnchorLayout* self) {
    self->QGraphicsAnchorLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnInvalidate(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_invalidate_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
QSizeF* QGraphicsAnchorLayout_SuperSizeHint(const QGraphicsAnchorLayout* self, int which, const QSizeF* constraint) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self)))
        return new QSizeF(vqgraphicsanchorlayout->QGraphicsAnchorLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    qFatal("Error: Protected virtual method QGraphicsAnchorLayout::sizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnSizeHint(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self)))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_sizehint_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsAnchorLayout_GetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom) {
    self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Base class handler implementation
void QGraphicsAnchorLayout_SuperGetContentsMargins(const QGraphicsAnchorLayout* self, double* left, double* top, double* right, double* bottom) {
    self->QGraphicsAnchorLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnGetContentsMargins(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self)))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_getcontentsmargins_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_GetContentsMargins_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsAnchorLayout_UpdateGeometry(QGraphicsAnchorLayout* self) {
    self->updateGeometry();
}

// Base class handler implementation
void QGraphicsAnchorLayout_SuperUpdateGeometry(QGraphicsAnchorLayout* self) {
    self->QGraphicsAnchorLayout::updateGeometry();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnUpdateGeometry(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_updategeometry_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_UpdateGeometry_Callback>(slot);
}

// Derived class handler implementation
void QGraphicsAnchorLayout_WidgetEvent(QGraphicsAnchorLayout* self, QEvent* e) {
    self->widgetEvent(e);
}

// Base class handler implementation
void QGraphicsAnchorLayout_SuperWidgetEvent(QGraphicsAnchorLayout* self, QEvent* e) {
    self->QGraphicsAnchorLayout::widgetEvent(e);
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnWidgetEvent(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_widgetevent_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_WidgetEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGraphicsAnchorLayout_IsEmpty(const QGraphicsAnchorLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGraphicsAnchorLayout_SuperIsEmpty(const QGraphicsAnchorLayout* self) {
    return self->QGraphicsAnchorLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGraphicsAnchorLayout_OnIsEmpty(QGraphicsAnchorLayout* self, intptr_t slot) {
    if (auto* vqgraphicsanchorlayout = const_cast<VirtualQGraphicsAnchorLayout*>(dynamic_cast<const VirtualQGraphicsAnchorLayout*>(self)))
        vqgraphicsanchorlayout->qgraphicsanchorlayout_isempty_callback = reinterpret_cast<VirtualQGraphicsAnchorLayout::QGraphicsAnchorLayout_IsEmpty_Callback>(slot);
}

// Derived class protected handler implementation
void QGraphicsAnchorLayout_AddChildLayoutItem(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* layoutItem) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->VirtualQGraphicsAnchorLayout::addChildLayoutItem(layoutItem);
    } else
        qFatal("Error: Protected method QGraphicsAnchorLayout::addChildLayoutItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsAnchorLayout_SetGraphicsItem(QGraphicsAnchorLayout* self, QGraphicsItem* item) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->VirtualQGraphicsAnchorLayout::setGraphicsItem(item);
    } else
        qFatal("Error: Protected method QGraphicsAnchorLayout::setGraphicsItem called without a directly constructed type");
}

// Derived class protected handler implementation
void QGraphicsAnchorLayout_SetOwnedByLayout(QGraphicsAnchorLayout* self, bool ownedByLayout) {
    if (auto* vqgraphicsanchorlayout = dynamic_cast<VirtualQGraphicsAnchorLayout*>(self)) {
        vqgraphicsanchorlayout->VirtualQGraphicsAnchorLayout::setOwnedByLayout(ownedByLayout);
    } else
        qFatal("Error: Protected method QGraphicsAnchorLayout::setOwnedByLayout called without a directly constructed type");
}

void QGraphicsAnchorLayout_Delete(QGraphicsAnchorLayout* self) {
    delete self;
}
