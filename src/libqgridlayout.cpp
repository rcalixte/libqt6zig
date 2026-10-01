#include <QChildEvent>
#include <QEvent>
#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <qgridlayout.h>
#include "libqgridlayout.h"
#include "libqgridlayout.hxx"

QGridLayout* QGridLayout_new(QWidget* parent) {
    return new VirtualQGridLayout(parent);
}

QGridLayout* QGridLayout_new2() {
    return new VirtualQGridLayout();
}

QMetaObject* QGridLayout_MetaObject(const QGridLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGridLayout_Metacast(QGridLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGridLayout_Metacall(QGridLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QGridLayout_Tr(const char* s) {
    auto _ret = QGridLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QGridLayout_SizeHint(const QGridLayout* self) {
    return new QSize(self->sizeHint());
}

QSize* QGridLayout_MinimumSize(const QGridLayout* self) {
    return new QSize(self->minimumSize());
}

QSize* QGridLayout_MaximumSize(const QGridLayout* self) {
    return new QSize(self->maximumSize());
}

void QGridLayout_SetHorizontalSpacing(QGridLayout* self, int spacing) {
    self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_HorizontalSpacing(const QGridLayout* self) {
    return self->horizontalSpacing();
}

void QGridLayout_SetVerticalSpacing(QGridLayout* self, int spacing) {
    self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_VerticalSpacing(const QGridLayout* self) {
    return self->verticalSpacing();
}

void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

int QGridLayout_Spacing(const QGridLayout* self) {
    return self->spacing();
}

void QGridLayout_SetRowStretch(QGridLayout* self, int row, int stretch) {
    self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_SetColumnStretch(QGridLayout* self, int column, int stretch) {
    self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_RowStretch(const QGridLayout* self, int row) {
    return self->rowStretch(static_cast<int>(row));
}

int QGridLayout_ColumnStretch(const QGridLayout* self, int column) {
    return self->columnStretch(static_cast<int>(column));
}

void QGridLayout_SetRowMinimumHeight(QGridLayout* self, int row, int minSize) {
    self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_SetColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
    self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_RowMinimumHeight(const QGridLayout* self, int row) {
    return self->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_ColumnMinimumWidth(const QGridLayout* self, int column) {
    return self->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_ColumnCount(const QGridLayout* self) {
    return self->columnCount();
}

int QGridLayout_RowCount(const QGridLayout* self) {
    return self->rowCount();
}

QRect* QGridLayout_CellRect(const QGridLayout* self, int row, int column) {
    return new QRect(self->cellRect(static_cast<int>(row), static_cast<int>(column)));
}

bool QGridLayout_HasHeightForWidth(const QGridLayout* self) {
    return self->hasHeightForWidth();
}

int QGridLayout_HeightForWidth(const QGridLayout* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QGridLayout_ExpandingDirections(const QGridLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

void QGridLayout_Invalidate(QGridLayout* self) {
    self->invalidate();
}

void QGridLayout_AddWidget(QGridLayout* self, QWidget* w) {
    self->addWidget(w);
}

void QGridLayout_AddWidget2(QGridLayout* self, QWidget* param1, int row, int column) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddLayout(QGridLayout* self, QLayout* param1, int row, int column) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_AddLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_SetOriginCorner(QGridLayout* self, int originCorner) {
    self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

int QGridLayout_OriginCorner(const QGridLayout* self) {
    return static_cast<int>(self->originCorner());
}

QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index) {
    return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column) {
    return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
    return self->takeAt(static_cast<int>(index));
}

int QGridLayout_Count(const QGridLayout* self) {
    return self->count();
}

void QGridLayout_SetGeometry(QGridLayout* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

void QGridLayout_AddItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_SetDefaultPositioning(QGridLayout* self, int n, int orient) {
    self->setDefaultPositioning(static_cast<int>(n), static_cast<Qt::Orientation>(orient));
}

void QGridLayout_GetItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
    self->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

void QGridLayout_AddItem2(QGridLayout* self, QLayoutItem* param1) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout) {
        vqgridlayout->addItem(param1);
    }
}

libqt_string QGridLayout_Tr2(const char* s, const char* c) {
    auto _ret = QGridLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QGridLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QGridLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan));
}

void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

// Base class handler implementation
QMetaObject* QGridLayout_SuperMetaObject(const QGridLayout* self) {
    return (QMetaObject*)self->QGridLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMetaObject(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_metaobject_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QGridLayout_SuperMetacast(QGridLayout* self, const char* param1) {
    return self->QGridLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMetacast(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_metacast_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QGridLayout_SuperMetacall(QGridLayout* self, int param1, int param2, void** param3) {
    return self->QGridLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMetacall(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_metacall_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QGridLayout_SuperSizeHint(const QGridLayout* self) {
    return new QSize(self->QGridLayout::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSizeHint(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_sizehint_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QGridLayout_SuperMinimumSize(const QGridLayout* self) {
    return new QSize(self->QGridLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumSize(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_minimumsize_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QGridLayout_SuperMaximumSize(const QGridLayout* self) {
    return new QSize(self->QGridLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMaximumSize(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_maximumsize_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_MaximumSize_Callback>(slot);
}

// Base class handler implementation
void QGridLayout_SuperSetSpacing(QGridLayout* self, int spacing) {
    self->QGridLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetSpacing(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_setspacing_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_SetSpacing_Callback>(slot);
}

// Base class handler implementation
int QGridLayout_SuperSpacing(const QGridLayout* self) {
    return self->QGridLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacing(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_spacing_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Spacing_Callback>(slot);
}

// Base class handler implementation
bool QGridLayout_SuperHasHeightForWidth(const QGridLayout* self) {
    return self->QGridLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHasHeightForWidth(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QGridLayout_SuperHeightForWidth(const QGridLayout* self, int param1) {
    return self->QGridLayout::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHeightForWidth(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_heightforwidth_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QGridLayout_SuperMinimumHeightForWidth(const QGridLayout* self, int param1) {
    return self->QGridLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumHeightForWidth(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QGridLayout_SuperExpandingDirections(const QGridLayout* self) {
    return static_cast<int>(self->QGridLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnExpandingDirections(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_expandingdirections_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_ExpandingDirections_Callback>(slot);
}

// Base class handler implementation
void QGridLayout_SuperInvalidate(QGridLayout* self) {
    self->QGridLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnInvalidate(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_invalidate_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QGridLayout_SuperItemAt(const QGridLayout* self, int index) {
    return self->QGridLayout::itemAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnItemAt(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_itemat_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_ItemAt_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QGridLayout_SuperTakeAt(QGridLayout* self, int index) {
    return self->QGridLayout::takeAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTakeAt(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_takeat_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_TakeAt_Callback>(slot);
}

// Base class handler implementation
int QGridLayout_SuperCount(const QGridLayout* self) {
    return self->QGridLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCount(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_count_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Count_Callback>(slot);
}

// Base class handler implementation
void QGridLayout_SuperSetGeometry(QGridLayout* self, const QRect* geometry) {
    self->QGridLayout::setGeometry(*geometry);
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetGeometry(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_setgeometry_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_SetGeometry_Callback>(slot);
}

// Base class handler implementation
void QGridLayout_SuperAddItem2(QGridLayout* self, QLayoutItem* param1) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->QGridLayout::addItem(param1);
    } else
        qFatal("Error: Protected virtual method QGridLayout::addItem2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddItem2(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_additem2_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_AddItem2_Callback>(slot);
}

// Derived class handler implementation
QRect* QGridLayout_Geometry(const QGridLayout* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QGridLayout_SuperGeometry(const QGridLayout* self) {
    return new QRect(self->QGridLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnGeometry(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_geometry_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Geometry_Callback>(slot);
}

// Derived class handler implementation
int QGridLayout_IndexOf(const QGridLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

// Base class handler implementation
int QGridLayout_SuperIndexOf(const QGridLayout* self, const QWidget* param1) {
    return self->QGridLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIndexOf(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_indexof_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_IndexOf_Callback>(slot);
}

// Derived class handler implementation
bool QGridLayout_IsEmpty(const QGridLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QGridLayout_SuperIsEmpty(const QGridLayout* self) {
    return self->QGridLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIsEmpty(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_isempty_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
int QGridLayout_ControlTypes(const QGridLayout* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QGridLayout_SuperControlTypes(const QGridLayout* self) {
    return static_cast<int>(self->QGridLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnControlTypes(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_controltypes_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QGridLayout_ReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Base class handler implementation
QLayoutItem* QGridLayout_SuperReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QGridLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnReplaceWidget(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_replacewidget_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_ReplaceWidget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QGridLayout_Layout(QGridLayout* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QGridLayout_SuperLayout(QGridLayout* self) {
    return self->QGridLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnLayout(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_layout_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Layout_Callback>(slot);
}

// Derived class handler implementation
void QGridLayout_ChildEvent(QGridLayout* self, QChildEvent* e) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout) {
        vqgridlayout->childEvent(e);
    } else {
        qFatal("Error: Protected virtual method QGridLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGridLayout_SuperChildEvent(QGridLayout* self, QChildEvent* e) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->QGridLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QGridLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnChildEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_childevent_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QGridLayout_Event(QGridLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QGridLayout_SuperEvent(QGridLayout* self, QEvent* event) {
    return self->QGridLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_event_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QGridLayout_EventFilter(QGridLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QGridLayout_SuperEventFilter(QGridLayout* self, QObject* watched, QEvent* event) {
    return self->QGridLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnEventFilter(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_eventfilter_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QGridLayout_TimerEvent(QGridLayout* self, QTimerEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout) {
        vqgridlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGridLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGridLayout_SuperTimerEvent(QGridLayout* self, QTimerEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->QGridLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QGridLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTimerEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_timerevent_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QGridLayout_CustomEvent(QGridLayout* self, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout) {
        vqgridlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QGridLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QGridLayout_SuperCustomEvent(QGridLayout* self, QEvent* event) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->QGridLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QGridLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCustomEvent(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_customevent_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QGridLayout_ConnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout) {
        vqgridlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGridLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGridLayout_SuperConnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->QGridLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGridLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnConnectNotify(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_connectnotify_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QGridLayout_DisconnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout) {
        vqgridlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QGridLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QGridLayout_SuperDisconnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->QGridLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QGridLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnDisconnectNotify(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_disconnectnotify_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QWidget* QGridLayout_Widget(const QGridLayout* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QGridLayout_SuperWidget(const QGridLayout* self) {
    return self->QGridLayout::widget();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnWidget(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        vqgridlayout->qgridlayout_widget_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_Widget_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QGridLayout_SpacerItem(QGridLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QGridLayout_SuperSpacerItem(QGridLayout* self) {
    return self->QGridLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacerItem(QGridLayout* self, intptr_t slot) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self))
        vqgridlayout->qgridlayout_spaceritem_callback = reinterpret_cast<VirtualQGridLayout::QGridLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QGridLayout_WidgetEvent(QGridLayout* self, QEvent* param1) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->VirtualQGridLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QGridLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QGridLayout_AddChildLayout(QGridLayout* self, QLayout* l) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->VirtualQGridLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QGridLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QGridLayout_AddChildWidget(QGridLayout* self, QWidget* w) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        vqgridlayout->VirtualQGridLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QGridLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGridLayout_AdoptLayout(QGridLayout* self, QLayout* layout) {
    if (auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self)) {
        return vqgridlayout->VirtualQGridLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QGridLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QGridLayout_AlignmentRect(const QGridLayout* self, const QRect* param1) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self)))
        return new QRect(vqgridlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QGridLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QGridLayout_Sender(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->VirtualQGridLayout::sender();
    } else
        qFatal("Error: Protected method QGridLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QGridLayout_SenderSignalIndex(const QGridLayout* self) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->VirtualQGridLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QGridLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QGridLayout_Receivers(const QGridLayout* self, const char* signal) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->VirtualQGridLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QGridLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QGridLayout_IsSignalConnected(const QGridLayout* self, const QMetaMethod* signal) {
    if (auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self))) {
        return vqgridlayout->VirtualQGridLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QGridLayout::isSignalConnected called without a directly constructed type");
}

void QGridLayout_Delete(QGridLayout* self) {
    delete self;
}
