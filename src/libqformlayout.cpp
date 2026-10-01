#include <QChildEvent>
#include <QEvent>
#include <QFormLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult
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
#include <qformlayout.h>
#include "libqformlayout.h"
#include "libqformlayout.hxx"

QFormLayout* QFormLayout_new(QWidget* parent) {
    return new VirtualQFormLayout(parent);
}

QFormLayout* QFormLayout_new2() {
    return new VirtualQFormLayout();
}

QMetaObject* QFormLayout_MetaObject(const QFormLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFormLayout_Metacast(QFormLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFormLayout_Metacall(QFormLayout* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFormLayout_Tr(const char* s) {
    auto _ret = QFormLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFormLayout_SetFieldGrowthPolicy(QFormLayout* self, int policy) {
    self->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
}

int QFormLayout_FieldGrowthPolicy(const QFormLayout* self) {
    return static_cast<int>(self->fieldGrowthPolicy());
}

void QFormLayout_SetRowWrapPolicy(QFormLayout* self, int policy) {
    self->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
}

int QFormLayout_RowWrapPolicy(const QFormLayout* self) {
    return static_cast<int>(self->rowWrapPolicy());
}

void QFormLayout_SetLabelAlignment(QFormLayout* self, int alignment) {
    self->setLabelAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_LabelAlignment(const QFormLayout* self) {
    return static_cast<int>(self->labelAlignment());
}

void QFormLayout_SetFormAlignment(QFormLayout* self, int alignment) {
    self->setFormAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_FormAlignment(const QFormLayout* self) {
    return static_cast<int>(self->formAlignment());
}

void QFormLayout_SetHorizontalSpacing(QFormLayout* self, int spacing) {
    self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QFormLayout_HorizontalSpacing(const QFormLayout* self) {
    return self->horizontalSpacing();
}

void QFormLayout_SetVerticalSpacing(QFormLayout* self, int spacing) {
    self->setVerticalSpacing(static_cast<int>(spacing));
}

int QFormLayout_VerticalSpacing(const QFormLayout* self) {
    return self->verticalSpacing();
}

int QFormLayout_Spacing(const QFormLayout* self) {
    return self->spacing();
}

void QFormLayout_SetSpacing(QFormLayout* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

void QFormLayout_AddRow(QFormLayout* self, QWidget* label, QWidget* field) {
    self->addRow(label, field);
}

void QFormLayout_AddRow2(QFormLayout* self, QWidget* label, QLayout* field) {
    self->addRow(label, field);
}

void QFormLayout_AddRow3(QFormLayout* self, const libqt_string labelText, QWidget* field) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    self->addRow(labelText_QString, field);
}

void QFormLayout_AddRow4(QFormLayout* self, const libqt_string labelText, QLayout* field) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    self->addRow(labelText_QString, field);
}

void QFormLayout_AddRow5(QFormLayout* self, QWidget* widget) {
    self->addRow(widget);
}

void QFormLayout_AddRow6(QFormLayout* self, QLayout* layout) {
    self->addRow(layout);
}

void QFormLayout_InsertRow(QFormLayout* self, int row, QWidget* label, QWidget* field) {
    self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_InsertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field) {
    self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_InsertRow3(QFormLayout* self, int row, const libqt_string labelText, QWidget* field) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow4(QFormLayout* self, int row, const libqt_string labelText, QLayout* field) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_InsertRow5(QFormLayout* self, int row, QWidget* widget) {
    self->insertRow(static_cast<int>(row), widget);
}

void QFormLayout_InsertRow6(QFormLayout* self, int row, QLayout* layout) {
    self->insertRow(static_cast<int>(row), layout);
}

void QFormLayout_RemoveRow(QFormLayout* self, int row) {
    self->removeRow(static_cast<int>(row));
}

void QFormLayout_RemoveRow2(QFormLayout* self, QWidget* widget) {
    self->removeRow(widget);
}

void QFormLayout_RemoveRow3(QFormLayout* self, QLayout* layout) {
    self->removeRow(layout);
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row) {
    return new QFormLayout::TakeRowResult(self->takeRow(static_cast<int>(row)));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow2(QFormLayout* self, QWidget* widget) {
    return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow3(QFormLayout* self, QLayout* layout) {
    return new QFormLayout::TakeRowResult(self->takeRow(layout));
}

void QFormLayout_SetItem(QFormLayout* self, int row, int role, QLayoutItem* item) {
    self->setItem(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), item);
}

void QFormLayout_SetWidget(QFormLayout* self, int row, int role, QWidget* widget) {
    self->setWidget(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), widget);
}

void QFormLayout_SetLayout(QFormLayout* self, int row, int role, QLayout* layout) {
    self->setLayout(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), layout);
}

void QFormLayout_SetRowVisible(QFormLayout* self, int row, bool on) {
    self->setRowVisible(static_cast<int>(row), on);
}

void QFormLayout_SetRowVisible2(QFormLayout* self, QWidget* widget, bool on) {
    self->setRowVisible(widget, on);
}

void QFormLayout_SetRowVisible3(QFormLayout* self, QLayout* layout, bool on) {
    self->setRowVisible(layout, on);
}

bool QFormLayout_IsRowVisible(const QFormLayout* self, int row) {
    return self->isRowVisible(static_cast<int>(row));
}

bool QFormLayout_IsRowVisible2(const QFormLayout* self, QWidget* widget) {
    return self->isRowVisible(widget);
}

bool QFormLayout_IsRowVisible3(const QFormLayout* self, QLayout* layout) {
    return self->isRowVisible(layout);
}

QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role) {
    return self->itemAt(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role));
}

void QFormLayout_GetItemPosition(const QFormLayout* self, int index, int* rowPtr, int* rolePtr) {
    self->getItemPosition(static_cast<int>(index), static_cast<int*>(rowPtr), reinterpret_cast<QFormLayout::ItemRole*>(rolePtr));
}

void QFormLayout_GetWidgetPosition(const QFormLayout* self, QWidget* widget, int* rowPtr, int* rolePtr) {
    self->getWidgetPosition(widget, static_cast<int*>(rowPtr), reinterpret_cast<QFormLayout::ItemRole*>(rolePtr));
}

void QFormLayout_GetLayoutPosition(const QFormLayout* self, QLayout* layout, int* rowPtr, int* rolePtr) {
    self->getLayoutPosition(layout, static_cast<int*>(rowPtr), reinterpret_cast<QFormLayout::ItemRole*>(rolePtr));
}

QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field) {
    return self->labelForField(field);
}

QWidget* QFormLayout_LabelForField2(const QFormLayout* self, QLayout* field) {
    return self->labelForField(field);
}

void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item) {
    self->addItem(item);
}

QLayoutItem* QFormLayout_ItemAt2(const QFormLayout* self, int index) {
    return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index) {
    return self->takeAt(static_cast<int>(index));
}

void QFormLayout_SetGeometry(QFormLayout* self, const QRect* rect) {
    self->setGeometry(*rect);
}

QSize* QFormLayout_MinimumSize(const QFormLayout* self) {
    return new QSize(self->minimumSize());
}

QSize* QFormLayout_SizeHint(const QFormLayout* self) {
    return new QSize(self->sizeHint());
}

void QFormLayout_Invalidate(QFormLayout* self) {
    self->invalidate();
}

bool QFormLayout_HasHeightForWidth(const QFormLayout* self) {
    return self->hasHeightForWidth();
}

int QFormLayout_HeightForWidth(const QFormLayout* self, int width) {
    return self->heightForWidth(static_cast<int>(width));
}

int QFormLayout_ExpandingDirections(const QFormLayout* self) {
    return static_cast<int>(self->expandingDirections());
}

int QFormLayout_Count(const QFormLayout* self) {
    return self->count();
}

int QFormLayout_RowCount(const QFormLayout* self) {
    return self->rowCount();
}

libqt_string QFormLayout_Tr2(const char* s, const char* c) {
    auto _ret = QFormLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFormLayout_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFormLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QFormLayout_SuperMetaObject(const QFormLayout* self) {
    return (QMetaObject*)self->QFormLayout::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMetaObject(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_metaobject_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFormLayout_SuperMetacast(QFormLayout* self, const char* param1) {
    return self->QFormLayout::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMetacast(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_metacast_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFormLayout_SuperMetacall(QFormLayout* self, int param1, int param2, void** param3) {
    return self->QFormLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMetacall(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_metacall_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Metacall_Callback>(slot);
}

// Base class handler implementation
int QFormLayout_SuperSpacing(const QFormLayout* self) {
    return self->QFormLayout::spacing();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSpacing(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_spacing_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Spacing_Callback>(slot);
}

// Base class handler implementation
void QFormLayout_SuperSetSpacing(QFormLayout* self, int spacing) {
    self->QFormLayout::setSpacing(static_cast<int>(spacing));
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSetSpacing(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_setspacing_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_SetSpacing_Callback>(slot);
}

// Base class handler implementation
void QFormLayout_SuperAddItem(QFormLayout* self, QLayoutItem* item) {
    self->QFormLayout::addItem(item);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAddItem(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_additem_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_AddItem_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QFormLayout_SuperItemAt2(const QFormLayout* self, int index) {
    return self->QFormLayout::itemAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnItemAt2(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_itemat2_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_ItemAt2_Callback>(slot);
}

// Base class handler implementation
QLayoutItem* QFormLayout_SuperTakeAt(QFormLayout* self, int index) {
    return self->QFormLayout::takeAt(static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnTakeAt(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_takeat_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_TakeAt_Callback>(slot);
}

// Base class handler implementation
void QFormLayout_SuperSetGeometry(QFormLayout* self, const QRect* rect) {
    self->QFormLayout::setGeometry(*rect);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSetGeometry(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_setgeometry_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_SetGeometry_Callback>(slot);
}

// Base class handler implementation
QSize* QFormLayout_SuperMinimumSize(const QFormLayout* self) {
    return new QSize(self->QFormLayout::minimumSize());
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMinimumSize(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_minimumsize_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_MinimumSize_Callback>(slot);
}

// Base class handler implementation
QSize* QFormLayout_SuperSizeHint(const QFormLayout* self) {
    return new QSize(self->QFormLayout::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSizeHint(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_sizehint_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QFormLayout_SuperInvalidate(QFormLayout* self) {
    self->QFormLayout::invalidate();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnInvalidate(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_invalidate_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Invalidate_Callback>(slot);
}

// Base class handler implementation
bool QFormLayout_SuperHasHeightForWidth(const QFormLayout* self) {
    return self->QFormLayout::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnHasHeightForWidth(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_hasheightforwidth_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QFormLayout_SuperHeightForWidth(const QFormLayout* self, int width) {
    return self->QFormLayout::heightForWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnHeightForWidth(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_heightforwidth_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
int QFormLayout_SuperExpandingDirections(const QFormLayout* self) {
    return static_cast<int>(self->QFormLayout::expandingDirections());
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnExpandingDirections(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_expandingdirections_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_ExpandingDirections_Callback>(slot);
}

// Base class handler implementation
int QFormLayout_SuperCount(const QFormLayout* self) {
    return self->QFormLayout::count();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnCount(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_count_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Count_Callback>(slot);
}

// Derived class handler implementation
QRect* QFormLayout_Geometry(const QFormLayout* self) {
    return new QRect(self->geometry());
}

// Base class handler implementation
QRect* QFormLayout_SuperGeometry(const QFormLayout* self) {
    return new QRect(self->QFormLayout::geometry());
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnGeometry(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_geometry_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Geometry_Callback>(slot);
}

// Derived class handler implementation
QSize* QFormLayout_MaximumSize(const QFormLayout* self) {
    return new QSize(self->maximumSize());
}

// Base class handler implementation
QSize* QFormLayout_SuperMaximumSize(const QFormLayout* self) {
    return new QSize(self->QFormLayout::maximumSize());
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMaximumSize(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_maximumsize_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_MaximumSize_Callback>(slot);
}

// Derived class handler implementation
int QFormLayout_IndexOf(const QFormLayout* self, const QWidget* param1) {
    return self->indexOf(param1);
}

// Base class handler implementation
int QFormLayout_SuperIndexOf(const QFormLayout* self, const QWidget* param1) {
    return self->QFormLayout::indexOf(param1);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnIndexOf(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_indexof_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_IndexOf_Callback>(slot);
}

// Derived class handler implementation
bool QFormLayout_IsEmpty(const QFormLayout* self) {
    return self->isEmpty();
}

// Base class handler implementation
bool QFormLayout_SuperIsEmpty(const QFormLayout* self) {
    return self->QFormLayout::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnIsEmpty(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_isempty_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
int QFormLayout_ControlTypes(const QFormLayout* self) {
    return static_cast<int>(self->controlTypes());
}

// Base class handler implementation
int QFormLayout_SuperControlTypes(const QFormLayout* self) {
    return static_cast<int>(self->QFormLayout::controlTypes());
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnControlTypes(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_controltypes_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_ControlTypes_Callback>(slot);
}

// Derived class handler implementation
QLayoutItem* QFormLayout_ReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options) {
    return self->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Base class handler implementation
QLayoutItem* QFormLayout_SuperReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options) {
    return self->QFormLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnReplaceWidget(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_replacewidget_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_ReplaceWidget_Callback>(slot);
}

// Derived class handler implementation
QLayout* QFormLayout_Layout(QFormLayout* self) {
    return self->layout();
}

// Base class handler implementation
QLayout* QFormLayout_SuperLayout(QFormLayout* self) {
    return self->QFormLayout::layout();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnLayout(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_layout_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Layout_Callback>(slot);
}

// Derived class handler implementation
void QFormLayout_ChildEvent(QFormLayout* self, QChildEvent* e) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout) {
        vqformlayout->childEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFormLayout::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFormLayout_SuperChildEvent(QFormLayout* self, QChildEvent* e) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->QFormLayout::childEvent(e);
    } else
        qFatal("Error: Protected virtual method QFormLayout::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnChildEvent(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_childevent_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFormLayout_Event(QFormLayout* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QFormLayout_SuperEvent(QFormLayout* self, QEvent* event) {
    return self->QFormLayout::event(event);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnEvent(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_event_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Event_Callback>(slot);
}

// Derived class handler implementation
bool QFormLayout_EventFilter(QFormLayout* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFormLayout_SuperEventFilter(QFormLayout* self, QObject* watched, QEvent* event) {
    return self->QFormLayout::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnEventFilter(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_eventfilter_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFormLayout_TimerEvent(QFormLayout* self, QTimerEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout) {
        vqformlayout->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFormLayout::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFormLayout_SuperTimerEvent(QFormLayout* self, QTimerEvent* event) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->QFormLayout::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFormLayout::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnTimerEvent(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_timerevent_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFormLayout_CustomEvent(QFormLayout* self, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout) {
        vqformlayout->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFormLayout::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFormLayout_SuperCustomEvent(QFormLayout* self, QEvent* event) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->QFormLayout::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFormLayout::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnCustomEvent(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_customevent_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFormLayout_ConnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout) {
        vqformlayout->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFormLayout::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFormLayout_SuperConnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->QFormLayout::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFormLayout::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnConnectNotify(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_connectnotify_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFormLayout_DisconnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout) {
        vqformlayout->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFormLayout::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFormLayout_SuperDisconnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->QFormLayout::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFormLayout::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnDisconnectNotify(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_disconnectnotify_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
int QFormLayout_MinimumHeightForWidth(const QFormLayout* self, int param1) {
    return self->minimumHeightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QFormLayout_SuperMinimumHeightForWidth(const QFormLayout* self, int param1) {
    return self->QFormLayout::minimumHeightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMinimumHeightForWidth(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_minimumheightforwidth_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_MinimumHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QWidget* QFormLayout_Widget(const QFormLayout* self) {
    return self->widget();
}

// Base class handler implementation
QWidget* QFormLayout_SuperWidget(const QFormLayout* self) {
    return self->QFormLayout::widget();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnWidget(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        vqformlayout->qformlayout_widget_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_Widget_Callback>(slot);
}

// Derived class handler implementation
QSpacerItem* QFormLayout_SpacerItem(QFormLayout* self) {
    return self->spacerItem();
}

// Base class handler implementation
QSpacerItem* QFormLayout_SuperSpacerItem(QFormLayout* self) {
    return self->QFormLayout::spacerItem();
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSpacerItem(QFormLayout* self, intptr_t slot) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self))
        vqformlayout->qformlayout_spaceritem_callback = reinterpret_cast<VirtualQFormLayout::QFormLayout_SpacerItem_Callback>(slot);
}

// Derived class protected handler implementation
void QFormLayout_WidgetEvent(QFormLayout* self, QEvent* param1) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->VirtualQFormLayout::widgetEvent(param1);
    } else
        qFatal("Error: Protected method QFormLayout::widgetEvent called without a directly constructed type");
}

// Derived class protected handler implementation
void QFormLayout_AddChildLayout(QFormLayout* self, QLayout* l) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->VirtualQFormLayout::addChildLayout(l);
    } else
        qFatal("Error: Protected method QFormLayout::addChildLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QFormLayout_AddChildWidget(QFormLayout* self, QWidget* w) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        vqformlayout->VirtualQFormLayout::addChildWidget(w);
    } else
        qFatal("Error: Protected method QFormLayout::addChildWidget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFormLayout_AdoptLayout(QFormLayout* self, QLayout* layout) {
    if (auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self)) {
        return vqformlayout->VirtualQFormLayout::adoptLayout(layout);
    } else
        qFatal("Error: Protected method QFormLayout::adoptLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QFormLayout_AlignmentRect(const QFormLayout* self, const QRect* param1) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self)))
        return new QRect(vqformlayout->alignmentRect(*param1));
    qFatal("Error: Protected method QFormLayout::alignmentRect called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFormLayout_Sender(const QFormLayout* self) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self))) {
        return vqformlayout->VirtualQFormLayout::sender();
    } else
        qFatal("Error: Protected method QFormLayout::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFormLayout_SenderSignalIndex(const QFormLayout* self) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self))) {
        return vqformlayout->VirtualQFormLayout::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFormLayout::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFormLayout_Receivers(const QFormLayout* self, const char* signal) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self))) {
        return vqformlayout->VirtualQFormLayout::receivers(signal);
    } else
        qFatal("Error: Protected method QFormLayout::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFormLayout_IsSignalConnected(const QFormLayout* self, const QMetaMethod* signal) {
    if (auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self))) {
        return vqformlayout->VirtualQFormLayout::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFormLayout::isSignalConnected called without a directly constructed type");
}

void QFormLayout_Delete(QFormLayout* self) {
    delete self;
}

QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new() {
    return new QFormLayout::TakeRowResult();
}

QFormLayout__TakeRowResult* QFormLayout__TakeRowResult_new2(const QFormLayout__TakeRowResult* param1) {
    return new QFormLayout::TakeRowResult(*param1);
}

QLayoutItem* QFormLayout__TakeRowResult_LabelItem(const QFormLayout__TakeRowResult* self) {
    return self->labelItem;
}

void QFormLayout__TakeRowResult_SetLabelItem(QFormLayout__TakeRowResult* self, QLayoutItem* labelItem) {
    self->labelItem = labelItem;
}

QLayoutItem* QFormLayout__TakeRowResult_FieldItem(const QFormLayout__TakeRowResult* self) {
    return self->fieldItem;
}

void QFormLayout__TakeRowResult_SetFieldItem(QFormLayout__TakeRowResult* self, QLayoutItem* fieldItem) {
    self->fieldItem = fieldItem;
}

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self) {
    delete self;
}
