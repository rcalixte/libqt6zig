#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QWidget>
#include <QWidgetItem>
#include <QWidgetItemV2>
#include <qlayoutitem.h>
#include "libqlayoutitem.h"
#include "libqlayoutitem.hxx"

QLayoutItem* QLayoutItem_new() {
    return new VirtualQLayoutItem();
}

QLayoutItem* QLayoutItem_new2(const QLayoutItem* param1) {
    return new VirtualQLayoutItem(*param1);
}

QLayoutItem* QLayoutItem_new3(int alignment) {
    return new VirtualQLayoutItem(static_cast<Qt::Alignment>(alignment));
}

QSize* QLayoutItem_SizeHint(const QLayoutItem* self) {
    return new QSize(self->sizeHint());
}

QSize* QLayoutItem_MinimumSize(const QLayoutItem* self) {
    return new QSize(self->minimumSize());
}

QSize* QLayoutItem_MaximumSize(const QLayoutItem* self) {
    return new QSize(self->maximumSize());
}

int QLayoutItem_ExpandingDirections(const QLayoutItem* self) {
    return static_cast<int>(self->expandingDirections());
}

void QLayoutItem_SetGeometry(QLayoutItem* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

QRect* QLayoutItem_Geometry(const QLayoutItem* self) {
    return new QRect(self->geometry());
}

bool QLayoutItem_IsEmpty(const QLayoutItem* self) {
    return self->isEmpty();
}

bool QLayoutItem_HasHeightForWidth(const QLayoutItem* self) {
    return self->hasHeightForWidth();
}

int QLayoutItem_HeightForWidth(const QLayoutItem* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

int QLayoutItem_MinimumHeightForWidth(const QLayoutItem* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

void QLayoutItem_Invalidate(QLayoutItem* self) {
    self->invalidate();
}

QWidget* QLayoutItem_Widget(const QLayoutItem* self) {
    return self->widget();
}

QLayout* QLayoutItem_Layout(QLayoutItem* self) {
    return self->layout();
}

QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self) {
    return self->spacerItem();
}

int QLayoutItem_Alignment(const QLayoutItem* self) {
    return static_cast<int>(self->alignment());
}

void QLayoutItem_SetAlignment(QLayoutItem* self, int a) {
    self->setAlignment(static_cast<Qt::Alignment>(a));
}

int QLayoutItem_ControlTypes(const QLayoutItem* self) {
    return static_cast<int>(self->controlTypes());
}

void QLayoutItem_OperatorAssign(QLayoutItem* self, const QLayoutItem* param1) {
    self->operator=(*param1);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSizeHint(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_sizehint_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SizeHint_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMinimumSize(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_minimumsize_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MinimumSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMaximumSize(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_maximumsize_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MaximumSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnExpandingDirections(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_expandingdirections_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_ExpandingDirections_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSetGeometry(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self))
        vqlayoutitem->qlayoutitem_setgeometry_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SetGeometry_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnGeometry(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_geometry_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Geometry_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnIsEmpty(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_isempty_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_IsEmpty_Callback>(slot);
}

// Base class handler implementation
bool QLayoutItem_SuperHasHeightForWidth(const QLayoutItem* self) {
    return self->QLayoutItem::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnHasHeightForWidth(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_hasheightforwidth_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QLayoutItem_SuperHeightForWidth(const QLayoutItem* self, int param1) {
    return self->QLayoutItem::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnHeightForWidth(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_heightforwidth_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QLayoutItem_SuperMinimumHeightForWidth(const QLayoutItem* self, int param1) {
    return self->QLayoutItem::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMinimumHeightForWidth(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_minimumheightforwidth_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MinimumHeightForWidth_Callback>(slot);
}

// Base class handler implementation
void QLayoutItem_SuperInvalidate(QLayoutItem* self) {
    self->QLayoutItem::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnInvalidate(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self))
        vqlayoutitem->qlayoutitem_invalidate_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Invalidate_Callback>(slot);
}

// Base class handler implementation
QWidget* QLayoutItem_SuperWidget(const QLayoutItem* self) {
    return self->QLayoutItem::widget();
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnWidget(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_widget_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Widget_Callback>(slot);
}

// Base class handler implementation
QLayout* QLayoutItem_SuperLayout(QLayoutItem* self) {
    return self->QLayoutItem::layout();
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnLayout(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self))
        vqlayoutitem->qlayoutitem_layout_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Layout_Callback>(slot);
}

// Base class handler implementation
QSpacerItem* QLayoutItem_SuperSpacerItem(QLayoutItem* self) {
    return self->QLayoutItem::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSpacerItem(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self))
        vqlayoutitem->qlayoutitem_spaceritem_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SpacerItem_Callback>(slot);
}

// Base class handler implementation
int QLayoutItem_SuperControlTypes(const QLayoutItem* self) {
    return static_cast<int>(self->QLayoutItem::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnControlTypes(QLayoutItem* self, intptr_t slot) {
    if (auto* vqlayoutitem = const_cast<VirtualQLayoutItem*>(dynamic_cast<const VirtualQLayoutItem*>(self)))
        vqlayoutitem->qlayoutitem_controltypes_callback = reinterpret_cast<VirtualQLayoutItem::QLayoutItem_ControlTypes_Callback>(slot);
}

void QLayoutItem_Delete(QLayoutItem* self) {
    delete self;
}

QSpacerItem* QSpacerItem_new(int w, int h) {
    return new VirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h));
}

QSpacerItem* QSpacerItem_new2(const QSpacerItem* param1) {
    return new VirtualQSpacerItem(*param1);
}

QSpacerItem* QSpacerItem_new3(int w, int h, int hData) {
    return new VirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData) {
    return new VirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

void QSpacerItem_ChangeSize(QSpacerItem* self, int w, int h) {
    self->changeSize(static_cast<int>(w), static_cast<int>(h));
}

QSize* QSpacerItem_SizeHint(const QSpacerItem* self) {
    return new QSize(self->sizeHint());
}

QSize* QSpacerItem_MinimumSize(const QSpacerItem* self) {
    return new QSize(self->minimumSize());
}

QSize* QSpacerItem_MaximumSize(const QSpacerItem* self) {
    return new QSize(self->maximumSize());
}

int QSpacerItem_ExpandingDirections(const QSpacerItem* self) {
    return static_cast<int>(self->expandingDirections());
}

bool QSpacerItem_IsEmpty(const QSpacerItem* self) {
    return self->isEmpty();
}

void QSpacerItem_SetGeometry(QSpacerItem* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

QRect* QSpacerItem_Geometry(const QSpacerItem* self) {
    return new QRect(self->geometry());
}

QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self) {
    return self->spacerItem();
}

QSizePolicy* QSpacerItem_SizePolicy(const QSpacerItem* self) {
    return new QSizePolicy(self->sizePolicy());
}

void QSpacerItem_OperatorAssign(QSpacerItem* self, const QSpacerItem* param1) {
    self->operator=(*param1);
}

void QSpacerItem_ChangeSize3(QSpacerItem* self, int w, int h, int hData) {
    self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

void QSpacerItem_ChangeSize4(QSpacerItem* self, int w, int h, int hData, int vData) {
    self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

// Base class handler implementation
QSize* QSpacerItem_SuperSizeHint(const QSpacerItem* self) {
    return new QSize(self->QSpacerItem::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSizeHint(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_sizehint_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QSpacerItem_SuperMinimumSize(const QSpacerItem* self) {
    return new QSize(self->QSpacerItem::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMinimumSize(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_minimumsize_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QSpacerItem_SuperMaximumSize(const QSpacerItem* self) {
    return new QSize(self->QSpacerItem::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMaximumSize(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_maximumsize_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MaximumSize_Callback>(slot);
}

// Base class handler implementation
int QSpacerItem_SuperExpandingDirections(const QSpacerItem* self) {
    return static_cast<int>(self->QSpacerItem::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnExpandingDirections(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_expandingdirections_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_ExpandingDirections_Callback>(slot);
}

// Base class handler implementation
bool QSpacerItem_SuperIsEmpty(const QSpacerItem* self) {
    return self->QSpacerItem::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnIsEmpty(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_isempty_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_IsEmpty_Callback>(slot);
}

// Base class handler implementation
void QSpacerItem_SuperSetGeometry(QSpacerItem* self, const QRect* geometry) {
    self->QSpacerItem::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSetGeometry(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self))
        vqspaceritem->qspaceritem_setgeometry_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SetGeometry_Callback>(slot);
}

// Base class handler implementation
QRect* QSpacerItem_SuperGeometry(const QSpacerItem* self) {
    return new QRect(self->QSpacerItem::geometry());
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnGeometry(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_geometry_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Geometry_Callback>(slot);
}

// Base class handler implementation
QSpacerItem* QSpacerItem_SuperSpacerItem(QSpacerItem* self) {
    return self->QSpacerItem::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSpacerItem(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self))
        vqspaceritem->qspaceritem_spaceritem_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SpacerItem_Callback>(slot);
}

// Derived class handler implementation
bool QSpacerItem_HasHeightForWidth(const QSpacerItem* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSpacerItem_SuperHasHeightForWidth(const QSpacerItem* self) {
    return self->QSpacerItem::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnHasHeightForWidth(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_hasheightforwidth_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QSpacerItem_HeightForWidth(const QSpacerItem* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSpacerItem_SuperHeightForWidth(const QSpacerItem* self, int param1) {
    return self->QSpacerItem::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnHeightForWidth(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_heightforwidth_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QSpacerItem_MinimumHeightForWidth(const QSpacerItem* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSpacerItem_SuperMinimumHeightForWidth(const QSpacerItem* self, int param1) {
    return self->QSpacerItem::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMinimumHeightForWidth(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_minimumheightforwidth_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
void QSpacerItem_Invalidate(QSpacerItem* self) {
    self->invalidate();
}

// Base class handler implementation
void QSpacerItem_SuperInvalidate(QSpacerItem* self) {
    self->QSpacerItem::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnInvalidate(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self))
        vqspaceritem->qspaceritem_invalidate_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Invalidate_Callback>(slot);
}

// Derived class handler implementation
QWidget* QSpacerItem_Widget(const QSpacerItem* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QSpacerItem_SuperWidget(const QSpacerItem* self) {
    return self->QSpacerItem::widget();
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnWidget(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_widget_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Widget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QSpacerItem_Layout(QSpacerItem* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QSpacerItem_SuperLayout(QSpacerItem* self) {
    return self->QSpacerItem::layout();
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnLayout(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self))
        vqspaceritem->qspaceritem_layout_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Layout_Callback>(slot);
}

// Derived class handler implementation
int QSpacerItem_ControlTypes(const QSpacerItem* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QSpacerItem_SuperControlTypes(const QSpacerItem* self) {
    return static_cast<int>(self->QSpacerItem::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnControlTypes(QSpacerItem* self, intptr_t slot) {
    if (auto* vqspaceritem = const_cast<VirtualQSpacerItem*>(dynamic_cast<const VirtualQSpacerItem*>(self)))
        vqspaceritem->qspaceritem_controltypes_callback = reinterpret_cast<VirtualQSpacerItem::QSpacerItem_ControlTypes_Callback>(slot);
}

void QSpacerItem_Delete(QSpacerItem* self) {
    delete self;
}

QWidgetItem* QWidgetItem_new(QWidget* w) {
    return new VirtualQWidgetItem(w);
}

QSize* QWidgetItem_SizeHint(const QWidgetItem* self) {
    return new QSize(self->sizeHint());
}

QSize* QWidgetItem_MinimumSize(const QWidgetItem* self) {
    return new QSize(self->minimumSize());
}

QSize* QWidgetItem_MaximumSize(const QWidgetItem* self) {
    return new QSize(self->maximumSize());
}

int QWidgetItem_ExpandingDirections(const QWidgetItem* self) {
    return static_cast<int>(self->expandingDirections());
}

bool QWidgetItem_IsEmpty(const QWidgetItem* self) {
    return self->isEmpty();
}

void QWidgetItem_SetGeometry(QWidgetItem* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

QRect* QWidgetItem_Geometry(const QWidgetItem* self) {
    return new QRect(self->geometry());
}

QWidget* QWidgetItem_Widget(const QWidgetItem* self) {
    return self->widget();
}

bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self) {
    return self->hasHeightForWidth();
}

int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

int QWidgetItem_MinimumHeightForWidth(const QWidgetItem* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QWidgetItem_ControlTypes(const QWidgetItem* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
QSize* QWidgetItem_SuperSizeHint(const QWidgetItem* self) {
    return new QSize(self->QWidgetItem::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSizeHint(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_sizehint_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QWidgetItem_SuperMinimumSize(const QWidgetItem* self) {
    return new QSize(self->QWidgetItem::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMinimumSize(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_minimumsize_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QWidgetItem_SuperMaximumSize(const QWidgetItem* self) {
    return new QSize(self->QWidgetItem::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMaximumSize(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_maximumsize_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MaximumSize_Callback>(slot);
}

// Base class handler implementation
int QWidgetItem_SuperExpandingDirections(const QWidgetItem* self) {
    return static_cast<int>(self->QWidgetItem::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnExpandingDirections(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_expandingdirections_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_ExpandingDirections_Callback>(slot);
}

// Base class handler implementation
bool QWidgetItem_SuperIsEmpty(const QWidgetItem* self) {
    return self->QWidgetItem::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnIsEmpty(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_isempty_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_IsEmpty_Callback>(slot);
}

// Base class handler implementation
void QWidgetItem_SuperSetGeometry(QWidgetItem* self, const QRect* geometry) {
    self->QWidgetItem::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSetGeometry(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self))
        vqwidgetitem->qwidgetitem_setgeometry_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SetGeometry_Callback>(slot);
}

// Base class handler implementation
QRect* QWidgetItem_SuperGeometry(const QWidgetItem* self) {
    return new QRect(self->QWidgetItem::geometry());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnGeometry(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_geometry_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Geometry_Callback>(slot);
}

// Base class handler implementation
QWidget* QWidgetItem_SuperWidget(const QWidgetItem* self) {
    return self->QWidgetItem::widget();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnWidget(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_widget_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Widget_Callback>(slot);
}

// Base class handler implementation
bool QWidgetItem_SuperHasHeightForWidth(const QWidgetItem* self) {
    return self->QWidgetItem::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnHasHeightForWidth(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_hasheightforwidth_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QWidgetItem_SuperHeightForWidth(const QWidgetItem* self, int param1) {
    return self->QWidgetItem::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnHeightForWidth(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_heightforwidth_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QWidgetItem_SuperMinimumHeightForWidth(const QWidgetItem* self, int param1) {
    return self->QWidgetItem::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMinimumHeightForWidth(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_minimumheightforwidth_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MinimumHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QWidgetItem_SuperControlTypes(const QWidgetItem* self) {
    return static_cast<int>(self->QWidgetItem::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnControlTypes(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = const_cast<VirtualQWidgetItem*>(dynamic_cast<const VirtualQWidgetItem*>(self)))
        vqwidgetitem->qwidgetitem_controltypes_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
void QWidgetItem_Invalidate(QWidgetItem* self) {
    self->invalidate();
}

// Base class handler implementation
void QWidgetItem_SuperInvalidate(QWidgetItem* self) {
    self->QWidgetItem::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnInvalidate(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self))
        vqwidgetitem->qwidgetitem_invalidate_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Invalidate_Callback>(slot);
}

// Derived class handler implementation
QLayout* QWidgetItem_Layout(QWidgetItem* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QWidgetItem_SuperLayout(QWidgetItem* self) {
    return self->QWidgetItem::layout();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnLayout(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self))
        vqwidgetitem->qwidgetitem_layout_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Layout_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QWidgetItem_SpacerItem(QWidgetItem* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QWidgetItem_SuperSpacerItem(QWidgetItem* self) {
    return self->QWidgetItem::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSpacerItem(QWidgetItem* self, intptr_t slot) {
    if (auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self))
        vqwidgetitem->qwidgetitem_spaceritem_callback = reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SpacerItem_Callback>(slot);
}

void QWidgetItem_Delete(QWidgetItem* self) {
    delete self;
}

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
    return new VirtualQWidgetItemV2(widget);
}

QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self) {
    return new QSize(self->sizeHint());
}

QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self) {
    return new QSize(self->minimumSize());
}

QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self) {
    return new QSize(self->maximumSize());
}

int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width) {
    return self->heightForWidth(static_cast<int>(width));
}

// Base class handler implementation
QSize* QWidgetItemV2_SuperSizeHint(const QWidgetItemV2* self) {
    return new QSize(self->QWidgetItemV2::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSizeHint(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_sizehint_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QWidgetItemV2_SuperMinimumSize(const QWidgetItemV2* self) {
    return new QSize(self->QWidgetItemV2::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMinimumSize(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_minimumsize_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QWidgetItemV2_SuperMaximumSize(const QWidgetItemV2* self) {
    return new QSize(self->QWidgetItemV2::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMaximumSize(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_maximumsize_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MaximumSize_Callback>(slot);
}

// Base class handler implementation
int QWidgetItemV2_SuperHeightForWidth(const QWidgetItemV2* self, int width) {
    return self->QWidgetItemV2::heightForWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnHeightForWidth(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_heightforwidth_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QWidgetItemV2_ExpandingDirections(const QWidgetItemV2* self) {
    return static_cast<int>(self->expandingDirections());
}

// Base class handler implementation
int QWidgetItemV2_SuperExpandingDirections(const QWidgetItemV2* self) {
    return static_cast<int>(self->QWidgetItemV2::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnExpandingDirections(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_expandingdirections_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_ExpandingDirections_Callback>(slot);
}

// Derived class handler implementation
bool QWidgetItemV2_IsEmpty(const QWidgetItemV2* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QWidgetItemV2_SuperIsEmpty(const QWidgetItemV2* self) {
    return self->QWidgetItemV2::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnIsEmpty(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_isempty_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
void QWidgetItemV2_SetGeometry(QWidgetItemV2* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

// Base class handler implementation
void QWidgetItemV2_SuperSetGeometry(QWidgetItemV2* self, const QRect* geometry) {
    self->QWidgetItemV2::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSetGeometry(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self))
        vqwidgetitemv2->qwidgetitemv2_setgeometry_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SetGeometry_Callback>(slot);
}

// Derived class handler implementation
QRect* QWidgetItemV2_Geometry(const QWidgetItemV2* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QWidgetItemV2_SuperGeometry(const QWidgetItemV2* self) {
    return new QRect(self->QWidgetItemV2::geometry());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnGeometry(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_geometry_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Geometry_Callback>(slot);
}

// Derived class handler implementation
QWidget* QWidgetItemV2_Widget(const QWidgetItemV2* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QWidgetItemV2_SuperWidget(const QWidgetItemV2* self) {
    return self->QWidgetItemV2::widget();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnWidget(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_widget_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Widget_Callback>(slot);
}

// Derived class handler implementation
bool QWidgetItemV2_HasHeightForWidth(const QWidgetItemV2* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QWidgetItemV2_SuperHasHeightForWidth(const QWidgetItemV2* self) {
    return self->QWidgetItemV2::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnHasHeightForWidth(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_hasheightforwidth_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QWidgetItemV2_MinimumHeightForWidth(const QWidgetItemV2* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QWidgetItemV2_SuperMinimumHeightForWidth(const QWidgetItemV2* self, int param1) {
    return self->QWidgetItemV2::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMinimumHeightForWidth(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_minimumheightforwidth_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
int QWidgetItemV2_ControlTypes(const QWidgetItemV2* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QWidgetItemV2_SuperControlTypes(const QWidgetItemV2* self) {
    return static_cast<int>(self->QWidgetItemV2::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnControlTypes(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = const_cast<VirtualQWidgetItemV2*>(dynamic_cast<const VirtualQWidgetItemV2*>(self)))
        vqwidgetitemv2->qwidgetitemv2_controltypes_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
void QWidgetItemV2_Invalidate(QWidgetItemV2* self) {
    self->invalidate();
}

// Base class handler implementation
void QWidgetItemV2_SuperInvalidate(QWidgetItemV2* self) {
    self->QWidgetItemV2::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnInvalidate(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self))
        vqwidgetitemv2->qwidgetitemv2_invalidate_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Invalidate_Callback>(slot);
}

// Derived class handler implementation
QLayout* QWidgetItemV2_Layout(QWidgetItemV2* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QWidgetItemV2_SuperLayout(QWidgetItemV2* self) {
    return self->QWidgetItemV2::layout();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnLayout(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self))
        vqwidgetitemv2->qwidgetitemv2_layout_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_Layout_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QWidgetItemV2_SpacerItem(QWidgetItemV2* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QWidgetItemV2_SuperSpacerItem(QWidgetItemV2* self) {
    return self->QWidgetItemV2::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSpacerItem(QWidgetItemV2* self, intptr_t slot) {
    if (auto* vqwidgetitemv2 = dynamic_cast<VirtualQWidgetItemV2*>(self))
        vqwidgetitemv2->qwidgetitemv2_spaceritem_callback = reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SpacerItem_Callback>(slot);
}

void QWidgetItemV2_Delete(QWidgetItemV2* self) {
    delete self;
}
