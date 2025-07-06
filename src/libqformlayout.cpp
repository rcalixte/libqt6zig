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
#include <QByteArray>
#include <cstring>
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
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFormLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFormLayout_OnMetacall(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Metacall_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFormLayout_QBaseMetacall(QFormLayout* self, int param1, int param2, void** param3) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Metacall_IsBase(true);
        return vqformlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFormLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFormLayout_Tr(const char* s) {
    QString _ret = QFormLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
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

void QFormLayout_AddRowWithWidget(QFormLayout* self, QWidget* widget) {
    self->addRow(widget);
}

void QFormLayout_AddRowWithLayout(QFormLayout* self, QLayout* layout) {
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

void QFormLayout_RemoveRowWithWidget(QFormLayout* self, QWidget* widget) {
    self->removeRow(widget);
}

void QFormLayout_RemoveRowWithLayout(QFormLayout* self, QLayout* layout) {
    self->removeRow(layout);
}

QFormLayout__TakeRowResult* QFormLayout_TakeRow(QFormLayout* self, int row) {
    return new QFormLayout::TakeRowResult(self->takeRow(static_cast<int>(row)));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRowWithWidget(QFormLayout* self, QWidget* widget) {
    return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_TakeRowWithLayout(QFormLayout* self, QLayout* layout) {
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

bool QFormLayout_IsRowVisibleWithWidget(const QFormLayout* self, QWidget* widget) {
    return self->isRowVisible(widget);
}

bool QFormLayout_IsRowVisibleWithLayout(const QFormLayout* self, QLayout* layout) {
    return self->isRowVisible(layout);
}

QLayoutItem* QFormLayout_ItemAt(const QFormLayout* self, int row, int role) {
    return self->itemAt(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role));
}

QWidget* QFormLayout_LabelForField(const QFormLayout* self, QWidget* field) {
    return self->labelForField(field);
}

QWidget* QFormLayout_LabelForFieldWithField(const QFormLayout* self, QLayout* field) {
    return self->labelForField(field);
}

int QFormLayout_RowCount(const QFormLayout* self) {
    return self->rowCount();
}

libqt_string QFormLayout_Tr2(const char* s, const char* c) {
    QString _ret = QFormLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFormLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFormLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QFormLayout_Spacing(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->spacing();
    } else {
        return self->QFormLayout::spacing();
    }
}

// Base class handler implementation
int QFormLayout_QBaseSpacing(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Spacing_IsBase(true);
        return vqformlayout->spacing();
    } else {
        return self->QFormLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSpacing(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Spacing_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_SetSpacing(QFormLayout* self, int spacing) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QFormLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QFormLayout_QBaseSetSpacing(QFormLayout* self, int spacing) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SetSpacing_IsBase(true);
        vqformlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QFormLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSetSpacing(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SetSpacing_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_AddItem(QFormLayout* self, QLayoutItem* item) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->addItem(item);
    } else {
        self->QFormLayout::addItem(item);
    }
}

// Base class handler implementation
void QFormLayout_QBaseAddItem(QFormLayout* self, QLayoutItem* item) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AddItem_IsBase(true);
        vqformlayout->addItem(item);
    } else {
        self->QFormLayout::addItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAddItem(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AddItem_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_AddItem_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QFormLayout_ItemAtWithIndex(const QFormLayout* self, int index) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->itemAt(static_cast<int>(index));
    } else {
        return self->QFormLayout::itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QFormLayout_QBaseItemAtWithIndex(const QFormLayout* self, int index) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ItemAtWithIndex_IsBase(true);
        return vqformlayout->itemAt(static_cast<int>(index));
    } else {
        return self->QFormLayout::itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnItemAtWithIndex(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ItemAtWithIndex_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ItemAtWithIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QFormLayout_TakeAt(QFormLayout* self, int index) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->takeAt(static_cast<int>(index));
    } else {
        return self->QFormLayout::takeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QFormLayout_QBaseTakeAt(QFormLayout* self, int index) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_TakeAt_IsBase(true);
        return vqformlayout->takeAt(static_cast<int>(index));
    } else {
        return self->QFormLayout::takeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnTakeAt(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_TakeAt_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_SetGeometry(QFormLayout* self, const QRect* rect) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setGeometry(*rect);
    } else {
        self->QFormLayout::setGeometry(*rect);
    }
}

// Base class handler implementation
void QFormLayout_QBaseSetGeometry(QFormLayout* self, const QRect* rect) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SetGeometry_IsBase(true);
        vqformlayout->setGeometry(*rect);
    } else {
        self->QFormLayout::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSetGeometry(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SetGeometry_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFormLayout_MinimumSize(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return new QSize(vqformlayout->minimumSize());
    } else {
        return new QSize(((VirtualQFormLayout*)self)->minimumSize());
    }
}

// Base class handler implementation
QSize* QFormLayout_QBaseMinimumSize(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_MinimumSize_IsBase(true);
        return new QSize(vqformlayout->minimumSize());
    } else {
        return new QSize(((VirtualQFormLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMinimumSize(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_MinimumSize_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFormLayout_SizeHint(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return new QSize(vqformlayout->sizeHint());
    } else {
        return new QSize(((VirtualQFormLayout*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QFormLayout_QBaseSizeHint(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SizeHint_IsBase(true);
        return new QSize(vqformlayout->sizeHint());
    } else {
        return new QSize(((VirtualQFormLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSizeHint(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SizeHint_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_Invalidate(QFormLayout* self) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->invalidate();
    } else {
        self->QFormLayout::invalidate();
    }
}

// Base class handler implementation
void QFormLayout_QBaseInvalidate(QFormLayout* self) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Invalidate_IsBase(true);
        vqformlayout->invalidate();
    } else {
        self->QFormLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnInvalidate(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Invalidate_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormLayout_HasHeightForWidth(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->hasHeightForWidth();
    } else {
        return self->QFormLayout::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFormLayout_QBaseHasHeightForWidth(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_HasHeightForWidth_IsBase(true);
        return vqformlayout->hasHeightForWidth();
    } else {
        return self->QFormLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnHasHeightForWidth(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_HeightForWidth(const QFormLayout* self, int width) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->heightForWidth(static_cast<int>(width));
    } else {
        return self->QFormLayout::heightForWidth(static_cast<int>(width));
    }
}

// Base class handler implementation
int QFormLayout_QBaseHeightForWidth(const QFormLayout* self, int width) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_HeightForWidth_IsBase(true);
        return vqformlayout->heightForWidth(static_cast<int>(width));
    } else {
        return self->QFormLayout::heightForWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnHeightForWidth(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_ExpandingDirections(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return static_cast<int>(vqformlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QFormLayout::expandingDirections());
    }
}

// Base class handler implementation
int QFormLayout_QBaseExpandingDirections(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqformlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QFormLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnExpandingDirections(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_Count(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->count();
    } else {
        return self->QFormLayout::count();
    }
}

// Base class handler implementation
int QFormLayout_QBaseCount(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Count_IsBase(true);
        return vqformlayout->count();
    } else {
        return self->QFormLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnCount(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Count_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QFormLayout_Geometry(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return new QRect(vqformlayout->geometry());
    } else {
        return new QRect(((VirtualQFormLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QFormLayout_QBaseGeometry(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Geometry_IsBase(true);
        return new QRect(vqformlayout->geometry());
    } else {
        return new QRect(((VirtualQFormLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnGeometry(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Geometry_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFormLayout_MaximumSize(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return new QSize(vqformlayout->maximumSize());
    } else {
        return new QSize(((VirtualQFormLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QFormLayout_QBaseMaximumSize(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_MaximumSize_IsBase(true);
        return new QSize(vqformlayout->maximumSize());
    } else {
        return new QSize(((VirtualQFormLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMaximumSize(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_MaximumSize_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_IndexOf(const QFormLayout* self, const QWidget* param1) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->indexOf(param1);
    } else {
        return self->QFormLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QFormLayout_QBaseIndexOf(const QFormLayout* self, const QWidget* param1) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_IndexOf_IsBase(true);
        return vqformlayout->indexOf(param1);
    } else {
        return self->QFormLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnIndexOf(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_IndexOf_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormLayout_IsEmpty(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->isEmpty();
    } else {
        return self->QFormLayout::isEmpty();
    }
}

// Base class handler implementation
bool QFormLayout_QBaseIsEmpty(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_IsEmpty_IsBase(true);
        return vqformlayout->isEmpty();
    } else {
        return self->QFormLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnIsEmpty(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_IsEmpty_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_ControlTypes(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return static_cast<int>(vqformlayout->controlTypes());
    } else {
        return static_cast<int>(self->QFormLayout::controlTypes());
    }
}

// Base class handler implementation
int QFormLayout_QBaseControlTypes(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqformlayout->controlTypes());
    } else {
        return static_cast<int>(self->QFormLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnControlTypes(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ControlTypes_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QFormLayout_ReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QFormLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QFormLayout_QBaseReplaceWidget(QFormLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ReplaceWidget_IsBase(true);
        return vqformlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QFormLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnReplaceWidget(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QFormLayout_Layout(QFormLayout* self) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->layout();
    } else {
        return self->QFormLayout::layout();
    }
}

// Base class handler implementation
QLayout* QFormLayout_QBaseLayout(QFormLayout* self) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Layout_IsBase(true);
        return vqformlayout->layout();
    } else {
        return self->QFormLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnLayout(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Layout_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_ChildEvent(QFormLayout* self, QChildEvent* e) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->childEvent(e);
    } else {
        ((VirtualQFormLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QFormLayout_QBaseChildEvent(QFormLayout* self, QChildEvent* e) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ChildEvent_IsBase(true);
        vqformlayout->childEvent(e);
    } else {
        ((VirtualQFormLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnChildEvent(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ChildEvent_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormLayout_Event(QFormLayout* self, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->event(event);
    } else {
        return self->QFormLayout::event(event);
    }
}

// Base class handler implementation
bool QFormLayout_QBaseEvent(QFormLayout* self, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Event_IsBase(true);
        return vqformlayout->event(event);
    } else {
        return self->QFormLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnEvent(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Event_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormLayout_EventFilter(QFormLayout* self, QObject* watched, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->eventFilter(watched, event);
    } else {
        return self->QFormLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFormLayout_QBaseEventFilter(QFormLayout* self, QObject* watched, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_EventFilter_IsBase(true);
        return vqformlayout->eventFilter(watched, event);
    } else {
        return self->QFormLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnEventFilter(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_EventFilter_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_TimerEvent(QFormLayout* self, QTimerEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->timerEvent(event);
    } else {
        ((VirtualQFormLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFormLayout_QBaseTimerEvent(QFormLayout* self, QTimerEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_TimerEvent_IsBase(true);
        vqformlayout->timerEvent(event);
    } else {
        ((VirtualQFormLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnTimerEvent(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_TimerEvent_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_CustomEvent(QFormLayout* self, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->customEvent(event);
    } else {
        ((VirtualQFormLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFormLayout_QBaseCustomEvent(QFormLayout* self, QEvent* event) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_CustomEvent_IsBase(true);
        vqformlayout->customEvent(event);
    } else {
        ((VirtualQFormLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnCustomEvent(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_CustomEvent_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_ConnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->connectNotify(*signal);
    } else {
        ((VirtualQFormLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFormLayout_QBaseConnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ConnectNotify_IsBase(true);
        vqformlayout->connectNotify(*signal);
    } else {
        ((VirtualQFormLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnConnectNotify(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_DisconnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQFormLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFormLayout_QBaseDisconnectNotify(QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_DisconnectNotify_IsBase(true);
        vqformlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQFormLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnDisconnectNotify(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_MinimumHeightForWidth(const QFormLayout* self, int param1) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QFormLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFormLayout_QBaseMinimumHeightForWidth(const QFormLayout* self, int param1) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_MinimumHeightForWidth_IsBase(true);
        return vqformlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QFormLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnMinimumHeightForWidth(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QFormLayout_Widget(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->widget();
    } else {
        return self->QFormLayout::widget();
    }
}

// Base class handler implementation
QWidget* QFormLayout_QBaseWidget(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Widget_IsBase(true);
        return vqformlayout->widget();
    } else {
        return self->QFormLayout::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnWidget(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Widget_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QFormLayout_SpacerItem(QFormLayout* self) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->spacerItem();
    } else {
        return self->QFormLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QFormLayout_QBaseSpacerItem(QFormLayout* self) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SpacerItem_IsBase(true);
        return vqformlayout->spacerItem();
    } else {
        return self->QFormLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSpacerItem(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SpacerItem_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_WidgetEvent(QFormLayout* self, QEvent* param1) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->widgetEvent(param1);
    } else {
        ((VirtualQFormLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QFormLayout_QBaseWidgetEvent(QFormLayout* self, QEvent* param1) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_WidgetEvent_IsBase(true);
        vqformlayout->widgetEvent(param1);
    } else {
        ((VirtualQFormLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnWidgetEvent(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_AddChildLayout(QFormLayout* self, QLayout* l) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->addChildLayout(l);
    } else {
        ((VirtualQFormLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QFormLayout_QBaseAddChildLayout(QFormLayout* self, QLayout* l) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AddChildLayout_IsBase(true);
        vqformlayout->addChildLayout(l);
    } else {
        ((VirtualQFormLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAddChildLayout(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormLayout_AddChildWidget(QFormLayout* self, QWidget* w) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->addChildWidget(w);
    } else {
        ((VirtualQFormLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QFormLayout_QBaseAddChildWidget(QFormLayout* self, QWidget* w) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AddChildWidget_IsBase(true);
        vqformlayout->addChildWidget(w);
    } else {
        ((VirtualQFormLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAddChildWidget(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormLayout_AdoptLayout(QFormLayout* self, QLayout* layout) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->adoptLayout(layout);
    } else {
        return ((VirtualQFormLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QFormLayout_QBaseAdoptLayout(QFormLayout* self, QLayout* layout) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AdoptLayout_IsBase(true);
        return vqformlayout->adoptLayout(layout);
    } else {
        return ((VirtualQFormLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAdoptLayout(QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = dynamic_cast<VirtualQFormLayout*>(self);
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QFormLayout_AlignmentRect(const QFormLayout* self, const QRect* param1) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return new QRect(vqformlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QFormLayout_QBaseAlignmentRect(const QFormLayout* self, const QRect* param1) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AlignmentRect_IsBase(true);
        return new QRect(vqformlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnAlignmentRect(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFormLayout_Sender(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->sender();
    } else {
        return ((VirtualQFormLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFormLayout_QBaseSender(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Sender_IsBase(true);
        return vqformlayout->sender();
    } else {
        return ((VirtualQFormLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSender(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Sender_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_SenderSignalIndex(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->senderSignalIndex();
    } else {
        return ((VirtualQFormLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFormLayout_QBaseSenderSignalIndex(const QFormLayout* self) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SenderSignalIndex_IsBase(true);
        return vqformlayout->senderSignalIndex();
    } else {
        return ((VirtualQFormLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnSenderSignalIndex(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFormLayout_Receivers(const QFormLayout* self, const char* signal) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->receivers(signal);
    } else {
        return ((VirtualQFormLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFormLayout_QBaseReceivers(const QFormLayout* self, const char* signal) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Receivers_IsBase(true);
        return vqformlayout->receivers(signal);
    } else {
        return ((VirtualQFormLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnReceivers(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_Receivers_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormLayout_IsSignalConnected(const QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        return vqformlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQFormLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFormLayout_QBaseIsSignalConnected(const QFormLayout* self, const QMetaMethod* signal) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_IsSignalConnected_IsBase(true);
        return vqformlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQFormLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormLayout_OnIsSignalConnected(const QFormLayout* self, intptr_t slot) {
    auto* vqformlayout = const_cast<VirtualQFormLayout*>(dynamic_cast<const VirtualQFormLayout*>(self));
    if (vqformlayout && vqformlayout->isVirtualQFormLayout) {
        vqformlayout->setQFormLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQFormLayout::QFormLayout_IsSignalConnected_Callback>(slot));
    }
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

void QFormLayout__TakeRowResult_Delete(QFormLayout__TakeRowResult* self) {
    delete self;
}
