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
#include <QByteArray>
#include <cstring>
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
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGridLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGridLayout_OnMetacall(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Metacall_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGridLayout_QBaseMetacall(QGridLayout* self, int param1, int param2, void** param3) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Metacall_IsBase(true);
        return vqgridlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGridLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGridLayout_Tr(const char* s) {
    QString _ret = QGridLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
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

QLayoutItem* QGridLayout_ItemAtPosition(const QGridLayout* self, int row, int column) {
    return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
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

libqt_string QGridLayout_Tr2(const char* s, const char* c) {
    QString _ret = QGridLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGridLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGridLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGridLayout_AddWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<QFlags<Qt::AlignmentFlag>>(param4));
}

void QGridLayout_AddWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

void QGridLayout_AddLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<QFlags<Qt::AlignmentFlag>>(param4));
}

void QGridLayout_AddLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

void QGridLayout_AddItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan));
}

void QGridLayout_AddItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_AddItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
    self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<QFlags<Qt::AlignmentFlag>>(param6));
}

// Derived class handler implementation
QSize* QGridLayout_SizeHint(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return new QSize(vqgridlayout->sizeHint());
    } else {
        return new QSize(((VirtualQGridLayout*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QGridLayout_QBaseSizeHint(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SizeHint_IsBase(true);
        return new QSize(vqgridlayout->sizeHint());
    } else {
        return new QSize(((VirtualQGridLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSizeHint(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SizeHint_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGridLayout_MinimumSize(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return new QSize(vqgridlayout->minimumSize());
    } else {
        return new QSize(((VirtualQGridLayout*)self)->minimumSize());
    }
}

// Base class handler implementation
QSize* QGridLayout_QBaseMinimumSize(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_MinimumSize_IsBase(true);
        return new QSize(vqgridlayout->minimumSize());
    } else {
        return new QSize(((VirtualQGridLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumSize(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_MinimumSize_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGridLayout_MaximumSize(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return new QSize(vqgridlayout->maximumSize());
    } else {
        return new QSize(((VirtualQGridLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QGridLayout_QBaseMaximumSize(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_MaximumSize_IsBase(true);
        return new QSize(vqgridlayout->maximumSize());
    } else {
        return new QSize(((VirtualQGridLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMaximumSize(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_MaximumSize_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_SetSpacing(QGridLayout* self, int spacing) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QGridLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QGridLayout_QBaseSetSpacing(QGridLayout* self, int spacing) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SetSpacing_IsBase(true);
        vqgridlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QGridLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetSpacing(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SetSpacing_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_Spacing(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->spacing();
    } else {
        return self->QGridLayout::spacing();
    }
}

// Base class handler implementation
int QGridLayout_QBaseSpacing(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Spacing_IsBase(true);
        return vqgridlayout->spacing();
    } else {
        return self->QGridLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacing(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Spacing_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_HasHeightForWidth(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->hasHeightForWidth();
    } else {
        return self->QGridLayout::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QGridLayout_QBaseHasHeightForWidth(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_HasHeightForWidth_IsBase(true);
        return vqgridlayout->hasHeightForWidth();
    } else {
        return self->QGridLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHasHeightForWidth(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_HeightForWidth(const QGridLayout* self, int param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QGridLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGridLayout_QBaseHeightForWidth(const QGridLayout* self, int param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_HeightForWidth_IsBase(true);
        return vqgridlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QGridLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnHeightForWidth(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_MinimumHeightForWidth(const QGridLayout* self, int param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QGridLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGridLayout_QBaseMinimumHeightForWidth(const QGridLayout* self, int param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_MinimumHeightForWidth_IsBase(true);
        return vqgridlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QGridLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnMinimumHeightForWidth(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_ExpandingDirections(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return static_cast<int>(vqgridlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QGridLayout::expandingDirections());
    }
}

// Base class handler implementation
int QGridLayout_QBaseExpandingDirections(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqgridlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QGridLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnExpandingDirections(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_Invalidate(QGridLayout* self) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->invalidate();
    } else {
        self->QGridLayout::invalidate();
    }
}

// Base class handler implementation
void QGridLayout_QBaseInvalidate(QGridLayout* self) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Invalidate_IsBase(true);
        vqgridlayout->invalidate();
    } else {
        self->QGridLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnInvalidate(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Invalidate_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QGridLayout_ItemAt(const QGridLayout* self, int index) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->itemAt(static_cast<int>(index));
    } else {
        return self->QGridLayout::itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseItemAt(const QGridLayout* self, int index) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ItemAt_IsBase(true);
        return vqgridlayout->itemAt(static_cast<int>(index));
    } else {
        return self->QGridLayout::itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnItemAt(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ItemAt_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QGridLayout_TakeAt(QGridLayout* self, int index) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->takeAt(static_cast<int>(index));
    } else {
        return self->QGridLayout::takeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseTakeAt(QGridLayout* self, int index) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_TakeAt_IsBase(true);
        return vqgridlayout->takeAt(static_cast<int>(index));
    } else {
        return self->QGridLayout::takeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTakeAt(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_TakeAt_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_Count(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->count();
    } else {
        return self->QGridLayout::count();
    }
}

// Base class handler implementation
int QGridLayout_QBaseCount(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Count_IsBase(true);
        return vqgridlayout->count();
    } else {
        return self->QGridLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCount(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Count_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_SetGeometry(QGridLayout* self, const QRect* geometry) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setGeometry(*geometry);
    } else {
        self->QGridLayout::setGeometry(*geometry);
    }
}

// Base class handler implementation
void QGridLayout_QBaseSetGeometry(QGridLayout* self, const QRect* geometry) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SetGeometry_IsBase(true);
        vqgridlayout->setGeometry(*geometry);
    } else {
        self->QGridLayout::setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSetGeometry(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SetGeometry_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_AddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->addItem(param1);
    } else {
        ((VirtualQGridLayout*)self)->addItem(param1);
    }
}

// Base class handler implementation
void QGridLayout_QBaseAddItemWithQLayoutItem(QGridLayout* self, QLayoutItem* param1) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AddItemWithQLayoutItem_IsBase(true);
        vqgridlayout->addItem(param1);
    } else {
        ((VirtualQGridLayout*)self)->addItem(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddItemWithQLayoutItem(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AddItemWithQLayoutItem_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddItemWithQLayoutItem_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QGridLayout_Geometry(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return new QRect(vqgridlayout->geometry());
    } else {
        return new QRect(((VirtualQGridLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QGridLayout_QBaseGeometry(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Geometry_IsBase(true);
        return new QRect(vqgridlayout->geometry());
    } else {
        return new QRect(((VirtualQGridLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnGeometry(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Geometry_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_IndexOf(const QGridLayout* self, const QWidget* param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->indexOf(param1);
    } else {
        return self->QGridLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QGridLayout_QBaseIndexOf(const QGridLayout* self, const QWidget* param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_IndexOf_IsBase(true);
        return vqgridlayout->indexOf(param1);
    } else {
        return self->QGridLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIndexOf(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_IndexOf_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_IsEmpty(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->isEmpty();
    } else {
        return self->QGridLayout::isEmpty();
    }
}

// Base class handler implementation
bool QGridLayout_QBaseIsEmpty(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_IsEmpty_IsBase(true);
        return vqgridlayout->isEmpty();
    } else {
        return self->QGridLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIsEmpty(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_IsEmpty_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_ControlTypes(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return static_cast<int>(vqgridlayout->controlTypes());
    } else {
        return static_cast<int>(self->QGridLayout::controlTypes());
    }
}

// Base class handler implementation
int QGridLayout_QBaseControlTypes(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqgridlayout->controlTypes());
    } else {
        return static_cast<int>(self->QGridLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnControlTypes(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ControlTypes_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QGridLayout_ReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QGridLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QGridLayout_QBaseReplaceWidget(QGridLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ReplaceWidget_IsBase(true);
        return vqgridlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QGridLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnReplaceWidget(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QGridLayout_Layout(QGridLayout* self) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->layout();
    } else {
        return self->QGridLayout::layout();
    }
}

// Base class handler implementation
QLayout* QGridLayout_QBaseLayout(QGridLayout* self) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Layout_IsBase(true);
        return vqgridlayout->layout();
    } else {
        return self->QGridLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnLayout(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Layout_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_ChildEvent(QGridLayout* self, QChildEvent* e) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->childEvent(e);
    } else {
        ((VirtualQGridLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QGridLayout_QBaseChildEvent(QGridLayout* self, QChildEvent* e) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ChildEvent_IsBase(true);
        vqgridlayout->childEvent(e);
    } else {
        ((VirtualQGridLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnChildEvent(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ChildEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_Event(QGridLayout* self, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->event(event);
    } else {
        return self->QGridLayout::event(event);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseEvent(QGridLayout* self, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Event_IsBase(true);
        return vqgridlayout->event(event);
    } else {
        return self->QGridLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnEvent(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Event_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_EventFilter(QGridLayout* self, QObject* watched, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->eventFilter(watched, event);
    } else {
        return self->QGridLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseEventFilter(QGridLayout* self, QObject* watched, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_EventFilter_IsBase(true);
        return vqgridlayout->eventFilter(watched, event);
    } else {
        return self->QGridLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnEventFilter(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_EventFilter_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_TimerEvent(QGridLayout* self, QTimerEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->timerEvent(event);
    } else {
        ((VirtualQGridLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGridLayout_QBaseTimerEvent(QGridLayout* self, QTimerEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_TimerEvent_IsBase(true);
        vqgridlayout->timerEvent(event);
    } else {
        ((VirtualQGridLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnTimerEvent(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_TimerEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_CustomEvent(QGridLayout* self, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->customEvent(event);
    } else {
        ((VirtualQGridLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGridLayout_QBaseCustomEvent(QGridLayout* self, QEvent* event) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_CustomEvent_IsBase(true);
        vqgridlayout->customEvent(event);
    } else {
        ((VirtualQGridLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnCustomEvent(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_CustomEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_ConnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->connectNotify(*signal);
    } else {
        ((VirtualQGridLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGridLayout_QBaseConnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ConnectNotify_IsBase(true);
        vqgridlayout->connectNotify(*signal);
    } else {
        ((VirtualQGridLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnConnectNotify(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_DisconnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQGridLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGridLayout_QBaseDisconnectNotify(QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_DisconnectNotify_IsBase(true);
        vqgridlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQGridLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnDisconnectNotify(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QGridLayout_Widget(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->widget();
    } else {
        return self->QGridLayout::widget();
    }
}

// Base class handler implementation
QWidget* QGridLayout_QBaseWidget(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Widget_IsBase(true);
        return vqgridlayout->widget();
    } else {
        return self->QGridLayout::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnWidget(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Widget_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QGridLayout_SpacerItem(QGridLayout* self) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->spacerItem();
    } else {
        return self->QGridLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QGridLayout_QBaseSpacerItem(QGridLayout* self) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SpacerItem_IsBase(true);
        return vqgridlayout->spacerItem();
    } else {
        return self->QGridLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSpacerItem(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SpacerItem_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_WidgetEvent(QGridLayout* self, QEvent* param1) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->widgetEvent(param1);
    } else {
        ((VirtualQGridLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QGridLayout_QBaseWidgetEvent(QGridLayout* self, QEvent* param1) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_WidgetEvent_IsBase(true);
        vqgridlayout->widgetEvent(param1);
    } else {
        ((VirtualQGridLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnWidgetEvent(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_AddChildLayout(QGridLayout* self, QLayout* l) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->addChildLayout(l);
    } else {
        ((VirtualQGridLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QGridLayout_QBaseAddChildLayout(QGridLayout* self, QLayout* l) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AddChildLayout_IsBase(true);
        vqgridlayout->addChildLayout(l);
    } else {
        ((VirtualQGridLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddChildLayout(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QGridLayout_AddChildWidget(QGridLayout* self, QWidget* w) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->addChildWidget(w);
    } else {
        ((VirtualQGridLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QGridLayout_QBaseAddChildWidget(QGridLayout* self, QWidget* w) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AddChildWidget_IsBase(true);
        vqgridlayout->addChildWidget(w);
    } else {
        ((VirtualQGridLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAddChildWidget(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_AdoptLayout(QGridLayout* self, QLayout* layout) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->adoptLayout(layout);
    } else {
        return ((VirtualQGridLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseAdoptLayout(QGridLayout* self, QLayout* layout) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AdoptLayout_IsBase(true);
        return vqgridlayout->adoptLayout(layout);
    } else {
        return ((VirtualQGridLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAdoptLayout(QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = dynamic_cast<VirtualQGridLayout*>(self);
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QGridLayout_AlignmentRect(const QGridLayout* self, const QRect* param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return new QRect(vqgridlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QGridLayout_QBaseAlignmentRect(const QGridLayout* self, const QRect* param1) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AlignmentRect_IsBase(true);
        return new QRect(vqgridlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnAlignmentRect(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGridLayout_Sender(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->sender();
    } else {
        return ((VirtualQGridLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGridLayout_QBaseSender(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Sender_IsBase(true);
        return vqgridlayout->sender();
    } else {
        return ((VirtualQGridLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSender(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Sender_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_SenderSignalIndex(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->senderSignalIndex();
    } else {
        return ((VirtualQGridLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGridLayout_QBaseSenderSignalIndex(const QGridLayout* self) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SenderSignalIndex_IsBase(true);
        return vqgridlayout->senderSignalIndex();
    } else {
        return ((VirtualQGridLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnSenderSignalIndex(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGridLayout_Receivers(const QGridLayout* self, const char* signal) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->receivers(signal);
    } else {
        return ((VirtualQGridLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGridLayout_QBaseReceivers(const QGridLayout* self, const char* signal) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Receivers_IsBase(true);
        return vqgridlayout->receivers(signal);
    } else {
        return ((VirtualQGridLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnReceivers(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_Receivers_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGridLayout_IsSignalConnected(const QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        return vqgridlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQGridLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGridLayout_QBaseIsSignalConnected(const QGridLayout* self, const QMetaMethod* signal) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_IsSignalConnected_IsBase(true);
        return vqgridlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQGridLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGridLayout_OnIsSignalConnected(const QGridLayout* self, intptr_t slot) {
    auto* vqgridlayout = const_cast<VirtualQGridLayout*>(dynamic_cast<const VirtualQGridLayout*>(self));
    if (vqgridlayout && vqgridlayout->isVirtualQGridLayout) {
        vqgridlayout->setQGridLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQGridLayout::QGridLayout_IsSignalConnected_Callback>(slot));
    }
}

void QGridLayout_Delete(QGridLayout* self) {
    delete self;
}
