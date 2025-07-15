#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMargins>
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
#include <qlayout.h>
#include "libqlayout.h"
#include "libqlayout.hxx"

QLayout* QLayout_new(QWidget* parent) {
    return new VirtualQLayout(parent);
}

QLayout* QLayout_new2() {
    return new VirtualQLayout();
}

QMetaObject* QLayout_MetaObject(const QLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLayout_Metacast(QLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLayout_Metacall(QLayout* self, int param1, int param2, void** param3) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLayout_OnMetacall(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Metacall_Callback(reinterpret_cast<VirtualQLayout::QLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLayout_QBaseMetacall(QLayout* self, int param1, int param2, void** param3) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Metacall_IsBase(true);
        return vqlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLayout_Tr(const char* s) {
    QString _ret = QLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
    self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLayout_SetContentsMargins2(QLayout* self, const QMargins* margins) {
    self->setContentsMargins(*margins);
}

void QLayout_UnsetContentsMargins(QLayout* self) {
    self->unsetContentsMargins();
}

void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom) {
    self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QLayout_ContentsMargins(const QLayout* self) {
    return new QMargins(self->contentsMargins());
}

QRect* QLayout_ContentsRect(const QLayout* self) {
    return new QRect(self->contentsRect());
}

bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment) {
    return self->setAlignment(w, static_cast<Qt::Alignment>(alignment));
}

bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment) {
    return self->setAlignment(l, static_cast<Qt::Alignment>(alignment));
}

void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint) {
    self->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

int QLayout_SizeConstraint(const QLayout* self) {
    return static_cast<int>(self->sizeConstraint());
}

void QLayout_SetMenuBar(QLayout* self, QWidget* w) {
    self->setMenuBar(w);
}

QWidget* QLayout_MenuBar(const QLayout* self) {
    return self->menuBar();
}

QWidget* QLayout_ParentWidget(const QLayout* self) {
    return self->parentWidget();
}

bool QLayout_Activate(QLayout* self) {
    return self->activate();
}

void QLayout_Update(QLayout* self) {
    self->update();
}

void QLayout_AddWidget(QLayout* self, QWidget* w) {
    self->addWidget(w);
}

void QLayout_RemoveWidget(QLayout* self, QWidget* w) {
    self->removeWidget(w);
}

void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1) {
    self->removeItem(param1);
}

int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w) {
    return self->totalMinimumHeightForWidth(static_cast<int>(w));
}

int QLayout_TotalHeightForWidth(const QLayout* self, int w) {
    return self->totalHeightForWidth(static_cast<int>(w));
}

QSize* QLayout_TotalMinimumSize(const QLayout* self) {
    return new QSize(self->totalMinimumSize());
}

QSize* QLayout_TotalMaximumSize(const QLayout* self) {
    return new QSize(self->totalMaximumSize());
}

QSize* QLayout_TotalSizeHint(const QLayout* self) {
    return new QSize(self->totalSizeHint());
}

void QLayout_SetEnabled(QLayout* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QLayout_IsEnabled(const QLayout* self) {
    return self->isEnabled();
}

QSize* QLayout_ClosestAcceptableSize(const QWidget* w, const QSize* s) {
    return new QSize(QLayout::closestAcceptableSize(w, *s));
}

libqt_string QLayout_Tr2(const char* s, const char* c) {
    QString _ret = QLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLayout::tr(s, c, static_cast<int>(n));
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
int QLayout_Spacing(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->spacing();
    } else {
        return self->QLayout::spacing();
    }
}

// Base class handler implementation
int QLayout_QBaseSpacing(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Spacing_IsBase(true);
        return vqlayout->spacing();
    } else {
        return self->QLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSpacing(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Spacing_Callback(reinterpret_cast<VirtualQLayout::QLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_SetSpacing(QLayout* self, int spacing) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QLayout_QBaseSetSpacing(QLayout* self, int spacing) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SetSpacing_IsBase(true);
        vqlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSetSpacing(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SetSpacing_Callback(reinterpret_cast<VirtualQLayout::QLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_Invalidate(QLayout* self) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->invalidate();
    } else {
        self->QLayout::invalidate();
    }
}

// Base class handler implementation
void QLayout_QBaseInvalidate(QLayout* self) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Invalidate_IsBase(true);
        vqlayout->invalidate();
    } else {
        self->QLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnInvalidate(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Invalidate_Callback(reinterpret_cast<VirtualQLayout::QLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QLayout_Geometry(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return new QRect(vqlayout->geometry());
    } else {
        return new QRect(((VirtualQLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QLayout_QBaseGeometry(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Geometry_IsBase(true);
        return new QRect(vqlayout->geometry());
    } else {
        return new QRect(((VirtualQLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnGeometry(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Geometry_Callback(reinterpret_cast<VirtualQLayout::QLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_AddItem(QLayout* self, QLayoutItem* param1) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->addItem(param1);
    } else {
        ((VirtualQLayout*)self)->addItem(param1);
    }
}

// Base class handler implementation
void QLayout_QBaseAddItem(QLayout* self, QLayoutItem* param1) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AddItem_IsBase(true);
        vqlayout->addItem(param1);
    } else {
        ((VirtualQLayout*)self)->addItem(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddItem(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AddItem_Callback(reinterpret_cast<VirtualQLayout::QLayout_AddItem_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_ExpandingDirections(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return static_cast<int>(vqlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QLayout::expandingDirections());
    }
}

// Base class handler implementation
int QLayout_QBaseExpandingDirections(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnExpandingDirections(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQLayout::QLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLayout_MinimumSize(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return new QSize(vqlayout->minimumSize());
    } else {
        return new QSize(((VirtualQLayout*)self)->minimumSize());
    }
}

// Base class handler implementation
QSize* QLayout_QBaseMinimumSize(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_MinimumSize_IsBase(true);
        return new QSize(vqlayout->minimumSize());
    } else {
        return new QSize(((VirtualQLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMinimumSize(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_MinimumSize_Callback(reinterpret_cast<VirtualQLayout::QLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLayout_MaximumSize(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return new QSize(vqlayout->maximumSize());
    } else {
        return new QSize(((VirtualQLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QLayout_QBaseMaximumSize(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_MaximumSize_IsBase(true);
        return new QSize(vqlayout->maximumSize());
    } else {
        return new QSize(((VirtualQLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMaximumSize(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_MaximumSize_Callback(reinterpret_cast<VirtualQLayout::QLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_SetGeometry(QLayout* self, const QRect* geometry) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setGeometry(*geometry);
    } else {
        self->QLayout::setGeometry(*geometry);
    }
}

// Base class handler implementation
void QLayout_QBaseSetGeometry(QLayout* self, const QRect* geometry) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SetGeometry_IsBase(true);
        vqlayout->setGeometry(*geometry);
    } else {
        self->QLayout::setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSetGeometry(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SetGeometry_Callback(reinterpret_cast<VirtualQLayout::QLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QLayout_ItemAt(const QLayout* self, int index) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->itemAt(static_cast<int>(index));
    } else {
        return ((VirtualQLayout*)self)->itemAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QLayout_QBaseItemAt(const QLayout* self, int index) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ItemAt_IsBase(true);
        return vqlayout->itemAt(static_cast<int>(index));
    } else {
        return ((VirtualQLayout*)self)->itemAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnItemAt(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ItemAt_Callback(reinterpret_cast<VirtualQLayout::QLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QLayout_TakeAt(QLayout* self, int index) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->takeAt(static_cast<int>(index));
    } else {
        return ((VirtualQLayout*)self)->takeAt(static_cast<int>(index));
    }
}

// Base class handler implementation
QLayoutItem* QLayout_QBaseTakeAt(QLayout* self, int index) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_TakeAt_IsBase(true);
        return vqlayout->takeAt(static_cast<int>(index));
    } else {
        return ((VirtualQLayout*)self)->takeAt(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnTakeAt(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_TakeAt_Callback(reinterpret_cast<VirtualQLayout::QLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_IndexOf(const QLayout* self, const QWidget* param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->indexOf(param1);
    } else {
        return self->QLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QLayout_QBaseIndexOf(const QLayout* self, const QWidget* param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IndexOf_IsBase(true);
        return vqlayout->indexOf(param1);
    } else {
        return self->QLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIndexOf(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IndexOf_Callback(reinterpret_cast<VirtualQLayout::QLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_IndexOf2(const QLayout* self, const QLayoutItem* param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->indexOf(param1);
    } else {
        return self->QLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QLayout_QBaseIndexOf2(const QLayout* self, const QLayoutItem* param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IndexOf2_IsBase(true);
        return vqlayout->indexOf(param1);
    } else {
        return self->QLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIndexOf2(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IndexOf2_Callback(reinterpret_cast<VirtualQLayout::QLayout_IndexOf2_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_Count(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->count();
    } else {
        return ((VirtualQLayout*)self)->count();
    }
}

// Base class handler implementation
int QLayout_QBaseCount(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Count_IsBase(true);
        return vqlayout->count();
    } else {
        return ((VirtualQLayout*)self)->count();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnCount(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Count_Callback(reinterpret_cast<VirtualQLayout::QLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayout_IsEmpty(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->isEmpty();
    } else {
        return self->QLayout::isEmpty();
    }
}

// Base class handler implementation
bool QLayout_QBaseIsEmpty(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IsEmpty_IsBase(true);
        return vqlayout->isEmpty();
    } else {
        return self->QLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIsEmpty(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IsEmpty_Callback(reinterpret_cast<VirtualQLayout::QLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_ControlTypes(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return static_cast<int>(vqlayout->controlTypes());
    } else {
        return static_cast<int>(self->QLayout::controlTypes());
    }
}

// Base class handler implementation
int QLayout_QBaseControlTypes(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqlayout->controlTypes());
    } else {
        return static_cast<int>(self->QLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnControlTypes(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ControlTypes_Callback(reinterpret_cast<VirtualQLayout::QLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QLayout_QBaseReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ReplaceWidget_IsBase(true);
        return vqlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnReplaceWidget(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQLayout::QLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QLayout_Layout(QLayout* self) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->layout();
    } else {
        return self->QLayout::layout();
    }
}

// Base class handler implementation
QLayout* QLayout_QBaseLayout(QLayout* self) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Layout_IsBase(true);
        return vqlayout->layout();
    } else {
        return self->QLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnLayout(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Layout_Callback(reinterpret_cast<VirtualQLayout::QLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_ChildEvent(QLayout* self, QChildEvent* e) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->childEvent(e);
    } else {
        ((VirtualQLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QLayout_QBaseChildEvent(QLayout* self, QChildEvent* e) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ChildEvent_IsBase(true);
        vqlayout->childEvent(e);
    } else {
        ((VirtualQLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnChildEvent(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ChildEvent_Callback(reinterpret_cast<VirtualQLayout::QLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayout_Event(QLayout* self, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->event(event);
    } else {
        return self->QLayout::event(event);
    }
}

// Base class handler implementation
bool QLayout_QBaseEvent(QLayout* self, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Event_IsBase(true);
        return vqlayout->event(event);
    } else {
        return self->QLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnEvent(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Event_Callback(reinterpret_cast<VirtualQLayout::QLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayout_EventFilter(QLayout* self, QObject* watched, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->eventFilter(watched, event);
    } else {
        return self->QLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLayout_QBaseEventFilter(QLayout* self, QObject* watched, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_EventFilter_IsBase(true);
        return vqlayout->eventFilter(watched, event);
    } else {
        return self->QLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnEventFilter(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_EventFilter_Callback(reinterpret_cast<VirtualQLayout::QLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_TimerEvent(QLayout* self, QTimerEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->timerEvent(event);
    } else {
        ((VirtualQLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QLayout_QBaseTimerEvent(QLayout* self, QTimerEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_TimerEvent_IsBase(true);
        vqlayout->timerEvent(event);
    } else {
        ((VirtualQLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnTimerEvent(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_TimerEvent_Callback(reinterpret_cast<VirtualQLayout::QLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_CustomEvent(QLayout* self, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->customEvent(event);
    } else {
        ((VirtualQLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLayout_QBaseCustomEvent(QLayout* self, QEvent* event) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_CustomEvent_IsBase(true);
        vqlayout->customEvent(event);
    } else {
        ((VirtualQLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnCustomEvent(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_CustomEvent_Callback(reinterpret_cast<VirtualQLayout::QLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_ConnectNotify(QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->connectNotify(*signal);
    } else {
        ((VirtualQLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLayout_QBaseConnectNotify(QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ConnectNotify_IsBase(true);
        vqlayout->connectNotify(*signal);
    } else {
        ((VirtualQLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnConnectNotify(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQLayout::QLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_DisconnectNotify(QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLayout_QBaseDisconnectNotify(QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_DisconnectNotify_IsBase(true);
        vqlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnDisconnectNotify(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQLayout::QLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLayout_SizeHint(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return new QSize(vqlayout->sizeHint());
    } else {
        return new QSize(((VirtualQLayout*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QLayout_QBaseSizeHint(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SizeHint_IsBase(true);
        return new QSize(vqlayout->sizeHint());
    } else {
        return new QSize(((VirtualQLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSizeHint(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SizeHint_Callback(reinterpret_cast<VirtualQLayout::QLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayout_HasHeightForWidth(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->hasHeightForWidth();
    } else {
        return self->QLayout::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QLayout_QBaseHasHeightForWidth(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_HasHeightForWidth_IsBase(true);
        return vqlayout->hasHeightForWidth();
    } else {
        return self->QLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnHasHeightForWidth(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLayout::QLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_HeightForWidth(const QLayout* self, int param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLayout_QBaseHeightForWidth(const QLayout* self, int param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_HeightForWidth_IsBase(true);
        return vqlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnHeightForWidth(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQLayout::QLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_MinimumHeightForWidth(const QLayout* self, int param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLayout_QBaseMinimumHeightForWidth(const QLayout* self, int param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_MinimumHeightForWidth_IsBase(true);
        return vqlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMinimumHeightForWidth(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQLayout::QLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QLayout_Widget(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->widget();
    } else {
        return self->QLayout::widget();
    }
}

// Base class handler implementation
QWidget* QLayout_QBaseWidget(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Widget_IsBase(true);
        return vqlayout->widget();
    } else {
        return self->QLayout::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnWidget(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Widget_Callback(reinterpret_cast<VirtualQLayout::QLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QLayout_SpacerItem(QLayout* self) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->spacerItem();
    } else {
        return self->QLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QLayout_QBaseSpacerItem(QLayout* self) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SpacerItem_IsBase(true);
        return vqlayout->spacerItem();
    } else {
        return self->QLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSpacerItem(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SpacerItem_Callback(reinterpret_cast<VirtualQLayout::QLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_WidgetEvent(QLayout* self, QEvent* param1) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->widgetEvent(param1);
    } else {
        ((VirtualQLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QLayout_QBaseWidgetEvent(QLayout* self, QEvent* param1) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_WidgetEvent_IsBase(true);
        vqlayout->widgetEvent(param1);
    } else {
        ((VirtualQLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnWidgetEvent(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQLayout::QLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_AddChildLayout(QLayout* self, QLayout* l) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->addChildLayout(l);
    } else {
        ((VirtualQLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QLayout_QBaseAddChildLayout(QLayout* self, QLayout* l) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AddChildLayout_IsBase(true);
        vqlayout->addChildLayout(l);
    } else {
        ((VirtualQLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddChildLayout(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQLayout::QLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QLayout_AddChildWidget(QLayout* self, QWidget* w) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->addChildWidget(w);
    } else {
        ((VirtualQLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QLayout_QBaseAddChildWidget(QLayout* self, QWidget* w) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AddChildWidget_IsBase(true);
        vqlayout->addChildWidget(w);
    } else {
        ((VirtualQLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddChildWidget(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQLayout::QLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayout_AdoptLayout(QLayout* self, QLayout* layout) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->adoptLayout(layout);
    } else {
        return ((VirtualQLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QLayout_QBaseAdoptLayout(QLayout* self, QLayout* layout) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AdoptLayout_IsBase(true);
        return vqlayout->adoptLayout(layout);
    } else {
        return ((VirtualQLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAdoptLayout(QLayout* self, intptr_t slot) {
    auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQLayout::QLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return new QRect(vqlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QLayout_QBaseAlignmentRect(const QLayout* self, const QRect* param1) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AlignmentRect_IsBase(true);
        return new QRect(vqlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAlignmentRect(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQLayout::QLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLayout_Sender(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->sender();
    } else {
        return ((VirtualQLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLayout_QBaseSender(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Sender_IsBase(true);
        return vqlayout->sender();
    } else {
        return ((VirtualQLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSender(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Sender_Callback(reinterpret_cast<VirtualQLayout::QLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_SenderSignalIndex(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->senderSignalIndex();
    } else {
        return ((VirtualQLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLayout_QBaseSenderSignalIndex(const QLayout* self) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SenderSignalIndex_IsBase(true);
        return vqlayout->senderSignalIndex();
    } else {
        return ((VirtualQLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSenderSignalIndex(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLayout::QLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLayout_Receivers(const QLayout* self, const char* signal) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->receivers(signal);
    } else {
        return ((VirtualQLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLayout_QBaseReceivers(const QLayout* self, const char* signal) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Receivers_IsBase(true);
        return vqlayout->receivers(signal);
    } else {
        return ((VirtualQLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnReceivers(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_Receivers_Callback(reinterpret_cast<VirtualQLayout::QLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLayout_IsSignalConnected(const QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        return vqlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLayout_QBaseIsSignalConnected(const QLayout* self, const QMetaMethod* signal) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IsSignalConnected_IsBase(true);
        return vqlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIsSignalConnected(const QLayout* self, intptr_t slot) {
    auto* vqlayout = const_cast<VirtualQLayout*>(dynamic_cast<const VirtualQLayout*>(self));
    if (vqlayout && vqlayout->isVirtualQLayout) {
        vqlayout->setQLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQLayout::QLayout_IsSignalConnected_Callback>(slot));
    }
}

void QLayout_Delete(QLayout* self) {
    delete self;
}
