#include <QBoxLayout>
#include <QChildEvent>
#include <QEvent>
#include <QHBoxLayout>
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
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include "libqboxlayout.h"
#include "libqboxlayout.hxx"

QBoxLayout* QBoxLayout_new(int param1) {
    return new VirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1));
}

QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent) {
    return new VirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1), parent);
}

QMetaObject* QBoxLayout_MetaObject(const QBoxLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBoxLayout_Metacast(QBoxLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBoxLayout_Metacall(QBoxLayout* self, int param1, int param2, void** param3) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBoxLayout_OnMetacall(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Metacall_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBoxLayout_QBaseMetacall(QBoxLayout* self, int param1, int param2, void** param3) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Metacall_IsBase(true);
        return vqboxlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQBoxLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBoxLayout_Tr(const char* s) {
    QString _ret = QBoxLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QBoxLayout_Direction(const QBoxLayout* self) {
    return static_cast<int>(self->direction());
}

void QBoxLayout_SetDirection(QBoxLayout* self, int direction) {
    self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_AddSpacing(QBoxLayout* self, int size) {
    self->addSpacing(static_cast<int>(size));
}

void QBoxLayout_AddStretch(QBoxLayout* self) {
    self->addStretch();
}

void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
    self->addSpacerItem(spacerItem);
}

void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1) {
    self->addWidget(param1);
}

void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout) {
    self->addLayout(layout);
}

void QBoxLayout_AddStrut(QBoxLayout* self, int param1) {
    self->addStrut(static_cast<int>(param1));
}

void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size) {
    self->insertSpacing(static_cast<int>(index), static_cast<int>(size));
}

void QBoxLayout_InsertStretch(QBoxLayout* self, int index) {
    self->insertStretch(static_cast<int>(index));
}

void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
    self->insertSpacerItem(static_cast<int>(index), spacerItem);
}

void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget) {
    self->insertWidget(static_cast<int>(index), widget);
}

void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout) {
    self->insertLayout(static_cast<int>(index), layout);
}

void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
    self->insertItem(static_cast<int>(index), param2);
}

bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
    return self->setStretchFactor(w, static_cast<int>(stretch));
}

bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
    return self->setStretchFactor(l, static_cast<int>(stretch));
}

void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch) {
    self->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

int QBoxLayout_Stretch(const QBoxLayout* self, int index) {
    return self->stretch(static_cast<int>(index));
}

libqt_string QBoxLayout_Tr2(const char* s, const char* c) {
    QString _ret = QBoxLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBoxLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBoxLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch) {
    self->addStretch(static_cast<int>(stretch));
}

void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
    self->addWidget(param1, static_cast<int>(stretch));
}

void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
    self->addWidget(param1, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
    self->addLayout(layout, static_cast<int>(stretch));
}

void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch) {
    self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
    self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
    self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
    self->insertLayout(static_cast<int>(index), layout, static_cast<int>(stretch));
}

// Derived class handler implementation
void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->addItem(param1);
    } else {
        self->QBoxLayout::addItem(param1);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseAddItem(QBoxLayout* self, QLayoutItem* param1) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AddItem_IsBase(true);
        vqboxlayout->addItem(param1);
    } else {
        self->QBoxLayout::addItem(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAddItem(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AddItem_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AddItem_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_Spacing(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->spacing();
    } else {
        return self->QBoxLayout::spacing();
    }
}

// Base class handler implementation
int QBoxLayout_QBaseSpacing(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Spacing_IsBase(true);
        return vqboxlayout->spacing();
    } else {
        return self->QBoxLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSpacing(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Spacing_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QBoxLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QBoxLayout_QBaseSetSpacing(QBoxLayout* self, int spacing) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SetSpacing_IsBase(true);
        vqboxlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QBoxLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSetSpacing(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SetSpacing_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QBoxLayout_SizeHint(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return new QSize(vqboxlayout->sizeHint());
    } else {
        return new QSize(((VirtualQBoxLayout*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QBoxLayout_QBaseSizeHint(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SizeHint_IsBase(true);
        return new QSize(vqboxlayout->sizeHint());
    } else {
        return new QSize(((VirtualQBoxLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSizeHint(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SizeHint_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QBoxLayout_MinimumSize(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return new QSize(vqboxlayout->minimumSize());
    } else {
        return new QSize(((VirtualQBoxLayout*)self)->minimumSize());
    }
}

// Base class handler implementation
QSize* QBoxLayout_QBaseMinimumSize(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_MinimumSize_IsBase(true);
        return new QSize(vqboxlayout->minimumSize());
    } else {
        return new QSize(((VirtualQBoxLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMinimumSize(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_MinimumSize_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QBoxLayout_MaximumSize(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return new QSize(vqboxlayout->maximumSize());
    } else {
        return new QSize(((VirtualQBoxLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QBoxLayout_QBaseMaximumSize(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_MaximumSize_IsBase(true);
        return new QSize(vqboxlayout->maximumSize());
    } else {
        return new QSize(((VirtualQBoxLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMaximumSize(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_MaximumSize_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->hasHeightForWidth();
    } else {
        return self->QBoxLayout::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QBoxLayout_QBaseHasHeightForWidth(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_HasHeightForWidth_IsBase(true);
        return vqboxlayout->hasHeightForWidth();
    } else {
        return self->QBoxLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnHasHeightForWidth(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QBoxLayout_QBaseHeightForWidth(const QBoxLayout* self, int param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_HeightForWidth_IsBase(true);
        return vqboxlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnHeightForWidth(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QBoxLayout_QBaseMinimumHeightForWidth(const QBoxLayout* self, int param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_MinimumHeightForWidth_IsBase(true);
        return vqboxlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMinimumHeightForWidth(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_ExpandingDirections(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return static_cast<int>(vqboxlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QBoxLayout::expandingDirections());
    }
}

// Base class handler implementation
int QBoxLayout_QBaseExpandingDirections(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqboxlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QBoxLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnExpandingDirections(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_Invalidate(QBoxLayout* self) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->invalidate();
    } else {
        self->QBoxLayout::invalidate();
    }
}

// Base class handler implementation
void QBoxLayout_QBaseInvalidate(QBoxLayout* self) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Invalidate_IsBase(true);
        vqboxlayout->invalidate();
    } else {
        self->QBoxLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnInvalidate(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Invalidate_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::itemAt(static_cast<int>(param1));
    }
}

// Base class handler implementation
QLayoutItem* QBoxLayout_QBaseItemAt(const QBoxLayout* self, int param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ItemAt_IsBase(true);
        return vqboxlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::itemAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnItemAt(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ItemAt_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::takeAt(static_cast<int>(param1));
    }
}

// Base class handler implementation
QLayoutItem* QBoxLayout_QBaseTakeAt(QBoxLayout* self, int param1) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_TakeAt_IsBase(true);
        return vqboxlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QBoxLayout::takeAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnTakeAt(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_TakeAt_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_Count(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->count();
    } else {
        return self->QBoxLayout::count();
    }
}

// Base class handler implementation
int QBoxLayout_QBaseCount(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Count_IsBase(true);
        return vqboxlayout->count();
    } else {
        return self->QBoxLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnCount(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Count_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_SetGeometry(QBoxLayout* self, const QRect* geometry) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setGeometry(*geometry);
    } else {
        self->QBoxLayout::setGeometry(*geometry);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseSetGeometry(QBoxLayout* self, const QRect* geometry) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SetGeometry_IsBase(true);
        vqboxlayout->setGeometry(*geometry);
    } else {
        self->QBoxLayout::setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSetGeometry(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SetGeometry_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QBoxLayout_Geometry(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return new QRect(vqboxlayout->geometry());
    } else {
        return new QRect(((VirtualQBoxLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QBoxLayout_QBaseGeometry(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Geometry_IsBase(true);
        return new QRect(vqboxlayout->geometry());
    } else {
        return new QRect(((VirtualQBoxLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnGeometry(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Geometry_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_IndexOf(const QBoxLayout* self, const QWidget* param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->indexOf(param1);
    } else {
        return self->QBoxLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QBoxLayout_QBaseIndexOf(const QBoxLayout* self, const QWidget* param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_IndexOf_IsBase(true);
        return vqboxlayout->indexOf(param1);
    } else {
        return self->QBoxLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnIndexOf(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_IndexOf_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxLayout_IsEmpty(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->isEmpty();
    } else {
        return self->QBoxLayout::isEmpty();
    }
}

// Base class handler implementation
bool QBoxLayout_QBaseIsEmpty(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_IsEmpty_IsBase(true);
        return vqboxlayout->isEmpty();
    } else {
        return self->QBoxLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnIsEmpty(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_IsEmpty_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_ControlTypes(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return static_cast<int>(vqboxlayout->controlTypes());
    } else {
        return static_cast<int>(self->QBoxLayout::controlTypes());
    }
}

// Base class handler implementation
int QBoxLayout_QBaseControlTypes(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqboxlayout->controlTypes());
    } else {
        return static_cast<int>(self->QBoxLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnControlTypes(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ControlTypes_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QBoxLayout_ReplaceWidget(QBoxLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QBoxLayout_QBaseReplaceWidget(QBoxLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ReplaceWidget_IsBase(true);
        return vqboxlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnReplaceWidget(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QBoxLayout_Layout(QBoxLayout* self) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->layout();
    } else {
        return self->QBoxLayout::layout();
    }
}

// Base class handler implementation
QLayout* QBoxLayout_QBaseLayout(QBoxLayout* self) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Layout_IsBase(true);
        return vqboxlayout->layout();
    } else {
        return self->QBoxLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnLayout(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Layout_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_ChildEvent(QBoxLayout* self, QChildEvent* e) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->childEvent(e);
    } else {
        ((VirtualQBoxLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseChildEvent(QBoxLayout* self, QChildEvent* e) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ChildEvent_IsBase(true);
        vqboxlayout->childEvent(e);
    } else {
        ((VirtualQBoxLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnChildEvent(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ChildEvent_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxLayout_Event(QBoxLayout* self, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->event(event);
    } else {
        return self->QBoxLayout::event(event);
    }
}

// Base class handler implementation
bool QBoxLayout_QBaseEvent(QBoxLayout* self, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Event_IsBase(true);
        return vqboxlayout->event(event);
    } else {
        return self->QBoxLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnEvent(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Event_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxLayout_EventFilter(QBoxLayout* self, QObject* watched, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->eventFilter(watched, event);
    } else {
        return self->QBoxLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBoxLayout_QBaseEventFilter(QBoxLayout* self, QObject* watched, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_EventFilter_IsBase(true);
        return vqboxlayout->eventFilter(watched, event);
    } else {
        return self->QBoxLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnEventFilter(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_EventFilter_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_TimerEvent(QBoxLayout* self, QTimerEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->timerEvent(event);
    } else {
        ((VirtualQBoxLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseTimerEvent(QBoxLayout* self, QTimerEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_TimerEvent_IsBase(true);
        vqboxlayout->timerEvent(event);
    } else {
        ((VirtualQBoxLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnTimerEvent(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_TimerEvent_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_CustomEvent(QBoxLayout* self, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->customEvent(event);
    } else {
        ((VirtualQBoxLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseCustomEvent(QBoxLayout* self, QEvent* event) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_CustomEvent_IsBase(true);
        vqboxlayout->customEvent(event);
    } else {
        ((VirtualQBoxLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnCustomEvent(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_CustomEvent_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_ConnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->connectNotify(*signal);
    } else {
        ((VirtualQBoxLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseConnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ConnectNotify_IsBase(true);
        vqboxlayout->connectNotify(*signal);
    } else {
        ((VirtualQBoxLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnConnectNotify(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_DisconnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseDisconnectNotify(QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_DisconnectNotify_IsBase(true);
        vqboxlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQBoxLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnDisconnectNotify(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QBoxLayout_Widget(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->widget();
    } else {
        return self->QBoxLayout::widget();
    }
}

// Base class handler implementation
QWidget* QBoxLayout_QBaseWidget(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Widget_IsBase(true);
        return vqboxlayout->widget();
    } else {
        return self->QBoxLayout::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnWidget(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Widget_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QBoxLayout_SpacerItem(QBoxLayout* self) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->spacerItem();
    } else {
        return self->QBoxLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QBoxLayout_QBaseSpacerItem(QBoxLayout* self) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SpacerItem_IsBase(true);
        return vqboxlayout->spacerItem();
    } else {
        return self->QBoxLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSpacerItem(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SpacerItem_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_WidgetEvent(QBoxLayout* self, QEvent* param1) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->widgetEvent(param1);
    } else {
        ((VirtualQBoxLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseWidgetEvent(QBoxLayout* self, QEvent* param1) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_WidgetEvent_IsBase(true);
        vqboxlayout->widgetEvent(param1);
    } else {
        ((VirtualQBoxLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnWidgetEvent(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_AddChildLayout(QBoxLayout* self, QLayout* l) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->addChildLayout(l);
    } else {
        ((VirtualQBoxLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseAddChildLayout(QBoxLayout* self, QLayout* l) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AddChildLayout_IsBase(true);
        vqboxlayout->addChildLayout(l);
    } else {
        ((VirtualQBoxLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAddChildLayout(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QBoxLayout_AddChildWidget(QBoxLayout* self, QWidget* w) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->addChildWidget(w);
    } else {
        ((VirtualQBoxLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QBoxLayout_QBaseAddChildWidget(QBoxLayout* self, QWidget* w) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AddChildWidget_IsBase(true);
        vqboxlayout->addChildWidget(w);
    } else {
        ((VirtualQBoxLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAddChildWidget(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxLayout_AdoptLayout(QBoxLayout* self, QLayout* layout) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->adoptLayout(layout);
    } else {
        return ((VirtualQBoxLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QBoxLayout_QBaseAdoptLayout(QBoxLayout* self, QLayout* layout) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AdoptLayout_IsBase(true);
        return vqboxlayout->adoptLayout(layout);
    } else {
        return ((VirtualQBoxLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAdoptLayout(QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QBoxLayout_AlignmentRect(const QBoxLayout* self, const QRect* param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return new QRect(vqboxlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QBoxLayout_QBaseAlignmentRect(const QBoxLayout* self, const QRect* param1) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AlignmentRect_IsBase(true);
        return new QRect(vqboxlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAlignmentRect(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBoxLayout_Sender(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->sender();
    } else {
        return ((VirtualQBoxLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QBoxLayout_QBaseSender(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Sender_IsBase(true);
        return vqboxlayout->sender();
    } else {
        return ((VirtualQBoxLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSender(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Sender_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_SenderSignalIndex(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->senderSignalIndex();
    } else {
        return ((VirtualQBoxLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QBoxLayout_QBaseSenderSignalIndex(const QBoxLayout* self) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SenderSignalIndex_IsBase(true);
        return vqboxlayout->senderSignalIndex();
    } else {
        return ((VirtualQBoxLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSenderSignalIndex(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBoxLayout_Receivers(const QBoxLayout* self, const char* signal) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->receivers(signal);
    } else {
        return ((VirtualQBoxLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QBoxLayout_QBaseReceivers(const QBoxLayout* self, const char* signal) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Receivers_IsBase(true);
        return vqboxlayout->receivers(signal);
    } else {
        return ((VirtualQBoxLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnReceivers(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_Receivers_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBoxLayout_IsSignalConnected(const QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        return vqboxlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBoxLayout_QBaseIsSignalConnected(const QBoxLayout* self, const QMetaMethod* signal) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_IsSignalConnected_IsBase(true);
        return vqboxlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQBoxLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnIsSignalConnected(const QBoxLayout* self, intptr_t slot) {
    auto* vqboxlayout = const_cast<VirtualQBoxLayout*>(dynamic_cast<const VirtualQBoxLayout*>(self));
    if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
        vqboxlayout->setQBoxLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_IsSignalConnected_Callback>(slot));
    }
}

void QBoxLayout_Delete(QBoxLayout* self) {
    delete self;
}

QHBoxLayout* QHBoxLayout_new(QWidget* parent) {
    return new VirtualQHBoxLayout(parent);
}

QHBoxLayout* QHBoxLayout_new2() {
    return new VirtualQHBoxLayout();
}

QMetaObject* QHBoxLayout_MetaObject(const QHBoxLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHBoxLayout_Metacast(QHBoxLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHBoxLayout_Metacall(QHBoxLayout* self, int param1, int param2, void** param3) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHBoxLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHBoxLayout_OnMetacall(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Metacall_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHBoxLayout_QBaseMetacall(QHBoxLayout* self, int param1, int param2, void** param3) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Metacall_IsBase(true);
        return vqhboxlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQHBoxLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHBoxLayout_Tr(const char* s) {
    QString _ret = QHBoxLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBoxLayout_Tr2(const char* s, const char* c) {
    QString _ret = QHBoxLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHBoxLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QHBoxLayout_AddItem(QHBoxLayout* self, QLayoutItem* param1) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->addItem(param1);
    } else {
        self->QHBoxLayout::addItem(param1);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseAddItem(QHBoxLayout* self, QLayoutItem* param1) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AddItem_IsBase(true);
        vqhboxlayout->addItem(param1);
    } else {
        self->QHBoxLayout::addItem(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnAddItem(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AddItem_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_AddItem_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_Spacing(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->spacing();
    } else {
        return self->QHBoxLayout::spacing();
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseSpacing(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Spacing_IsBase(true);
        return vqhboxlayout->spacing();
    } else {
        return self->QHBoxLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSpacing(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Spacing_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_SetSpacing(QHBoxLayout* self, int spacing) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QHBoxLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseSetSpacing(QHBoxLayout* self, int spacing) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SetSpacing_IsBase(true);
        vqhboxlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QHBoxLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSetSpacing(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SetSpacing_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHBoxLayout_SizeHint(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return new QSize(vqhboxlayout->sizeHint());
    } else {
        return new QSize(((VirtualQHBoxLayout*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QHBoxLayout_QBaseSizeHint(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SizeHint_IsBase(true);
        return new QSize(vqhboxlayout->sizeHint());
    } else {
        return new QSize(((VirtualQHBoxLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSizeHint(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SizeHint_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHBoxLayout_MinimumSize(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return new QSize(vqhboxlayout->minimumSize());
    } else {
        return new QSize(((VirtualQHBoxLayout*)self)->minimumSize());
    }
}

// Base class handler implementation
QSize* QHBoxLayout_QBaseMinimumSize(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_MinimumSize_IsBase(true);
        return new QSize(vqhboxlayout->minimumSize());
    } else {
        return new QSize(((VirtualQHBoxLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMinimumSize(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_MinimumSize_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHBoxLayout_MaximumSize(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return new QSize(vqhboxlayout->maximumSize());
    } else {
        return new QSize(((VirtualQHBoxLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QHBoxLayout_QBaseMaximumSize(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_MaximumSize_IsBase(true);
        return new QSize(vqhboxlayout->maximumSize());
    } else {
        return new QSize(((VirtualQHBoxLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMaximumSize(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_MaximumSize_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxLayout_HasHeightForWidth(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->hasHeightForWidth();
    } else {
        return self->QHBoxLayout::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QHBoxLayout_QBaseHasHeightForWidth(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_HasHeightForWidth_IsBase(true);
        return vqhboxlayout->hasHeightForWidth();
    } else {
        return self->QHBoxLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnHasHeightForWidth(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_HeightForWidth(const QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseHeightForWidth(const QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_HeightForWidth_IsBase(true);
        return vqhboxlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnHeightForWidth(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_MinimumHeightForWidth(const QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseMinimumHeightForWidth(const QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_MinimumHeightForWidth_IsBase(true);
        return vqhboxlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnMinimumHeightForWidth(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_ExpandingDirections(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return static_cast<int>(vqhboxlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QHBoxLayout::expandingDirections());
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseExpandingDirections(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqhboxlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QHBoxLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnExpandingDirections(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_Invalidate(QHBoxLayout* self) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->invalidate();
    } else {
        self->QHBoxLayout::invalidate();
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseInvalidate(QHBoxLayout* self) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Invalidate_IsBase(true);
        vqhboxlayout->invalidate();
    } else {
        self->QHBoxLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnInvalidate(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Invalidate_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QHBoxLayout_ItemAt(const QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::itemAt(static_cast<int>(param1));
    }
}

// Base class handler implementation
QLayoutItem* QHBoxLayout_QBaseItemAt(const QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ItemAt_IsBase(true);
        return vqhboxlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::itemAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnItemAt(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ItemAt_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QHBoxLayout_TakeAt(QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::takeAt(static_cast<int>(param1));
    }
}

// Base class handler implementation
QLayoutItem* QHBoxLayout_QBaseTakeAt(QHBoxLayout* self, int param1) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_TakeAt_IsBase(true);
        return vqhboxlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QHBoxLayout::takeAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnTakeAt(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_TakeAt_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_Count(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->count();
    } else {
        return self->QHBoxLayout::count();
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseCount(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Count_IsBase(true);
        return vqhboxlayout->count();
    } else {
        return self->QHBoxLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnCount(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Count_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_SetGeometry(QHBoxLayout* self, const QRect* geometry) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setGeometry(*geometry);
    } else {
        self->QHBoxLayout::setGeometry(*geometry);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseSetGeometry(QHBoxLayout* self, const QRect* geometry) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SetGeometry_IsBase(true);
        vqhboxlayout->setGeometry(*geometry);
    } else {
        self->QHBoxLayout::setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSetGeometry(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SetGeometry_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QHBoxLayout_Geometry(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return new QRect(vqhboxlayout->geometry());
    } else {
        return new QRect(((VirtualQHBoxLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QHBoxLayout_QBaseGeometry(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Geometry_IsBase(true);
        return new QRect(vqhboxlayout->geometry());
    } else {
        return new QRect(((VirtualQHBoxLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnGeometry(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Geometry_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_IndexOf(const QHBoxLayout* self, const QWidget* param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->indexOf(param1);
    } else {
        return self->QHBoxLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseIndexOf(const QHBoxLayout* self, const QWidget* param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_IndexOf_IsBase(true);
        return vqhboxlayout->indexOf(param1);
    } else {
        return self->QHBoxLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnIndexOf(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_IndexOf_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxLayout_IsEmpty(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->isEmpty();
    } else {
        return self->QHBoxLayout::isEmpty();
    }
}

// Base class handler implementation
bool QHBoxLayout_QBaseIsEmpty(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_IsEmpty_IsBase(true);
        return vqhboxlayout->isEmpty();
    } else {
        return self->QHBoxLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnIsEmpty(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_IsEmpty_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_ControlTypes(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return static_cast<int>(vqhboxlayout->controlTypes());
    } else {
        return static_cast<int>(self->QHBoxLayout::controlTypes());
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseControlTypes(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqhboxlayout->controlTypes());
    } else {
        return static_cast<int>(self->QHBoxLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnControlTypes(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ControlTypes_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QHBoxLayout_ReplaceWidget(QHBoxLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QHBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QHBoxLayout_QBaseReplaceWidget(QHBoxLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ReplaceWidget_IsBase(true);
        return vqhboxlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QHBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnReplaceWidget(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QHBoxLayout_Layout(QHBoxLayout* self) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->layout();
    } else {
        return self->QHBoxLayout::layout();
    }
}

// Base class handler implementation
QLayout* QHBoxLayout_QBaseLayout(QHBoxLayout* self) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Layout_IsBase(true);
        return vqhboxlayout->layout();
    } else {
        return self->QHBoxLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnLayout(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Layout_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_ChildEvent(QHBoxLayout* self, QChildEvent* e) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->childEvent(e);
    } else {
        ((VirtualQHBoxLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseChildEvent(QHBoxLayout* self, QChildEvent* e) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ChildEvent_IsBase(true);
        vqhboxlayout->childEvent(e);
    } else {
        ((VirtualQHBoxLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnChildEvent(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ChildEvent_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxLayout_Event(QHBoxLayout* self, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->event(event);
    } else {
        return self->QHBoxLayout::event(event);
    }
}

// Base class handler implementation
bool QHBoxLayout_QBaseEvent(QHBoxLayout* self, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Event_IsBase(true);
        return vqhboxlayout->event(event);
    } else {
        return self->QHBoxLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnEvent(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Event_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxLayout_EventFilter(QHBoxLayout* self, QObject* watched, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->eventFilter(watched, event);
    } else {
        return self->QHBoxLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QHBoxLayout_QBaseEventFilter(QHBoxLayout* self, QObject* watched, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_EventFilter_IsBase(true);
        return vqhboxlayout->eventFilter(watched, event);
    } else {
        return self->QHBoxLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnEventFilter(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_EventFilter_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_TimerEvent(QHBoxLayout* self, QTimerEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->timerEvent(event);
    } else {
        ((VirtualQHBoxLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseTimerEvent(QHBoxLayout* self, QTimerEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_TimerEvent_IsBase(true);
        vqhboxlayout->timerEvent(event);
    } else {
        ((VirtualQHBoxLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnTimerEvent(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_TimerEvent_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_CustomEvent(QHBoxLayout* self, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->customEvent(event);
    } else {
        ((VirtualQHBoxLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseCustomEvent(QHBoxLayout* self, QEvent* event) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_CustomEvent_IsBase(true);
        vqhboxlayout->customEvent(event);
    } else {
        ((VirtualQHBoxLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnCustomEvent(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_CustomEvent_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_ConnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->connectNotify(*signal);
    } else {
        ((VirtualQHBoxLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseConnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ConnectNotify_IsBase(true);
        vqhboxlayout->connectNotify(*signal);
    } else {
        ((VirtualQHBoxLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnConnectNotify(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_DisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQHBoxLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseDisconnectNotify(QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_DisconnectNotify_IsBase(true);
        vqhboxlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQHBoxLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnDisconnectNotify(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QHBoxLayout_Widget(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->widget();
    } else {
        return self->QHBoxLayout::widget();
    }
}

// Base class handler implementation
QWidget* QHBoxLayout_QBaseWidget(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Widget_IsBase(true);
        return vqhboxlayout->widget();
    } else {
        return self->QHBoxLayout::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnWidget(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Widget_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QHBoxLayout_SpacerItem(QHBoxLayout* self) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->spacerItem();
    } else {
        return self->QHBoxLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QHBoxLayout_QBaseSpacerItem(QHBoxLayout* self) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SpacerItem_IsBase(true);
        return vqhboxlayout->spacerItem();
    } else {
        return self->QHBoxLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSpacerItem(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SpacerItem_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_WidgetEvent(QHBoxLayout* self, QEvent* param1) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->widgetEvent(param1);
    } else {
        ((VirtualQHBoxLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseWidgetEvent(QHBoxLayout* self, QEvent* param1) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_WidgetEvent_IsBase(true);
        vqhboxlayout->widgetEvent(param1);
    } else {
        ((VirtualQHBoxLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnWidgetEvent(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_AddChildLayout(QHBoxLayout* self, QLayout* l) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->addChildLayout(l);
    } else {
        ((VirtualQHBoxLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseAddChildLayout(QHBoxLayout* self, QLayout* l) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AddChildLayout_IsBase(true);
        vqhboxlayout->addChildLayout(l);
    } else {
        ((VirtualQHBoxLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnAddChildLayout(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHBoxLayout_AddChildWidget(QHBoxLayout* self, QWidget* w) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->addChildWidget(w);
    } else {
        ((VirtualQHBoxLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QHBoxLayout_QBaseAddChildWidget(QHBoxLayout* self, QWidget* w) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AddChildWidget_IsBase(true);
        vqhboxlayout->addChildWidget(w);
    } else {
        ((VirtualQHBoxLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnAddChildWidget(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxLayout_AdoptLayout(QHBoxLayout* self, QLayout* layout) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->adoptLayout(layout);
    } else {
        return ((VirtualQHBoxLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QHBoxLayout_QBaseAdoptLayout(QHBoxLayout* self, QLayout* layout) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AdoptLayout_IsBase(true);
        return vqhboxlayout->adoptLayout(layout);
    } else {
        return ((VirtualQHBoxLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnAdoptLayout(QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = dynamic_cast<VirtualQHBoxLayout*>(self);
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QHBoxLayout_AlignmentRect(const QHBoxLayout* self, const QRect* param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return new QRect(vqhboxlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QHBoxLayout_QBaseAlignmentRect(const QHBoxLayout* self, const QRect* param1) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AlignmentRect_IsBase(true);
        return new QRect(vqhboxlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnAlignmentRect(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHBoxLayout_Sender(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->sender();
    } else {
        return ((VirtualQHBoxLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QHBoxLayout_QBaseSender(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Sender_IsBase(true);
        return vqhboxlayout->sender();
    } else {
        return ((VirtualQHBoxLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSender(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Sender_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_SenderSignalIndex(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->senderSignalIndex();
    } else {
        return ((VirtualQHBoxLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseSenderSignalIndex(const QHBoxLayout* self) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SenderSignalIndex_IsBase(true);
        return vqhboxlayout->senderSignalIndex();
    } else {
        return ((VirtualQHBoxLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnSenderSignalIndex(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHBoxLayout_Receivers(const QHBoxLayout* self, const char* signal) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->receivers(signal);
    } else {
        return ((VirtualQHBoxLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QHBoxLayout_QBaseReceivers(const QHBoxLayout* self, const char* signal) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Receivers_IsBase(true);
        return vqhboxlayout->receivers(signal);
    } else {
        return ((VirtualQHBoxLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnReceivers(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_Receivers_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHBoxLayout_IsSignalConnected(const QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        return vqhboxlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQHBoxLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHBoxLayout_QBaseIsSignalConnected(const QHBoxLayout* self, const QMetaMethod* signal) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_IsSignalConnected_IsBase(true);
        return vqhboxlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQHBoxLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHBoxLayout_OnIsSignalConnected(const QHBoxLayout* self, intptr_t slot) {
    auto* vqhboxlayout = const_cast<VirtualQHBoxLayout*>(dynamic_cast<const VirtualQHBoxLayout*>(self));
    if (vqhboxlayout && vqhboxlayout->isVirtualQHBoxLayout) {
        vqhboxlayout->setQHBoxLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQHBoxLayout::QHBoxLayout_IsSignalConnected_Callback>(slot));
    }
}

void QHBoxLayout_Delete(QHBoxLayout* self) {
    delete self;
}

QVBoxLayout* QVBoxLayout_new(QWidget* parent) {
    return new VirtualQVBoxLayout(parent);
}

QVBoxLayout* QVBoxLayout_new2() {
    return new VirtualQVBoxLayout();
}

QMetaObject* QVBoxLayout_MetaObject(const QVBoxLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVBoxLayout_Metacast(QVBoxLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVBoxLayout_Metacall(QVBoxLayout* self, int param1, int param2, void** param3) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVBoxLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVBoxLayout_OnMetacall(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Metacall_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVBoxLayout_QBaseMetacall(QVBoxLayout* self, int param1, int param2, void** param3) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Metacall_IsBase(true);
        return vqvboxlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVBoxLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVBoxLayout_Tr(const char* s) {
    QString _ret = QVBoxLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBoxLayout_Tr2(const char* s, const char* c) {
    QString _ret = QVBoxLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVBoxLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QVBoxLayout_AddItem(QVBoxLayout* self, QLayoutItem* param1) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->addItem(param1);
    } else {
        self->QVBoxLayout::addItem(param1);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseAddItem(QVBoxLayout* self, QLayoutItem* param1) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AddItem_IsBase(true);
        vqvboxlayout->addItem(param1);
    } else {
        self->QVBoxLayout::addItem(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnAddItem(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AddItem_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_AddItem_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_Spacing(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->spacing();
    } else {
        return self->QVBoxLayout::spacing();
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseSpacing(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Spacing_IsBase(true);
        return vqvboxlayout->spacing();
    } else {
        return self->QVBoxLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSpacing(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Spacing_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_SetSpacing(QVBoxLayout* self, int spacing) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QVBoxLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseSetSpacing(QVBoxLayout* self, int spacing) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SetSpacing_IsBase(true);
        vqvboxlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QVBoxLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSetSpacing(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SetSpacing_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QVBoxLayout_SizeHint(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return new QSize(vqvboxlayout->sizeHint());
    } else {
        return new QSize(((VirtualQVBoxLayout*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QVBoxLayout_QBaseSizeHint(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SizeHint_IsBase(true);
        return new QSize(vqvboxlayout->sizeHint());
    } else {
        return new QSize(((VirtualQVBoxLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSizeHint(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SizeHint_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QVBoxLayout_MinimumSize(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return new QSize(vqvboxlayout->minimumSize());
    } else {
        return new QSize(((VirtualQVBoxLayout*)self)->minimumSize());
    }
}

// Base class handler implementation
QSize* QVBoxLayout_QBaseMinimumSize(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_MinimumSize_IsBase(true);
        return new QSize(vqvboxlayout->minimumSize());
    } else {
        return new QSize(((VirtualQVBoxLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMinimumSize(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_MinimumSize_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MinimumSize_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QVBoxLayout_MaximumSize(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return new QSize(vqvboxlayout->maximumSize());
    } else {
        return new QSize(((VirtualQVBoxLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QVBoxLayout_QBaseMaximumSize(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_MaximumSize_IsBase(true);
        return new QSize(vqvboxlayout->maximumSize());
    } else {
        return new QSize(((VirtualQVBoxLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMaximumSize(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_MaximumSize_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxLayout_HasHeightForWidth(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->hasHeightForWidth();
    } else {
        return self->QVBoxLayout::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QVBoxLayout_QBaseHasHeightForWidth(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_HasHeightForWidth_IsBase(true);
        return vqvboxlayout->hasHeightForWidth();
    } else {
        return self->QVBoxLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnHasHeightForWidth(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_HeightForWidth(const QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseHeightForWidth(const QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_HeightForWidth_IsBase(true);
        return vqvboxlayout->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnHeightForWidth(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_MinimumHeightForWidth(const QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseMinimumHeightForWidth(const QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_MinimumHeightForWidth_IsBase(true);
        return vqvboxlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnMinimumHeightForWidth(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_ExpandingDirections(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return static_cast<int>(vqvboxlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QVBoxLayout::expandingDirections());
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseExpandingDirections(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqvboxlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QVBoxLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnExpandingDirections(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_Invalidate(QVBoxLayout* self) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->invalidate();
    } else {
        self->QVBoxLayout::invalidate();
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseInvalidate(QVBoxLayout* self) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Invalidate_IsBase(true);
        vqvboxlayout->invalidate();
    } else {
        self->QVBoxLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnInvalidate(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Invalidate_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QVBoxLayout_ItemAt(const QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::itemAt(static_cast<int>(param1));
    }
}

// Base class handler implementation
QLayoutItem* QVBoxLayout_QBaseItemAt(const QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ItemAt_IsBase(true);
        return vqvboxlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::itemAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnItemAt(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ItemAt_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ItemAt_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QVBoxLayout_TakeAt(QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::takeAt(static_cast<int>(param1));
    }
}

// Base class handler implementation
QLayoutItem* QVBoxLayout_QBaseTakeAt(QVBoxLayout* self, int param1) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_TakeAt_IsBase(true);
        return vqvboxlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QVBoxLayout::takeAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnTakeAt(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_TakeAt_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_TakeAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_Count(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->count();
    } else {
        return self->QVBoxLayout::count();
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseCount(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Count_IsBase(true);
        return vqvboxlayout->count();
    } else {
        return self->QVBoxLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnCount(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Count_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Count_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_SetGeometry(QVBoxLayout* self, const QRect* geometry) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setGeometry(*geometry);
    } else {
        self->QVBoxLayout::setGeometry(*geometry);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseSetGeometry(QVBoxLayout* self, const QRect* geometry) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SetGeometry_IsBase(true);
        vqvboxlayout->setGeometry(*geometry);
    } else {
        self->QVBoxLayout::setGeometry(*geometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSetGeometry(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SetGeometry_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QVBoxLayout_Geometry(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return new QRect(vqvboxlayout->geometry());
    } else {
        return new QRect(((VirtualQVBoxLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QVBoxLayout_QBaseGeometry(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Geometry_IsBase(true);
        return new QRect(vqvboxlayout->geometry());
    } else {
        return new QRect(((VirtualQVBoxLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnGeometry(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Geometry_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_IndexOf(const QVBoxLayout* self, const QWidget* param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->indexOf(param1);
    } else {
        return self->QVBoxLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseIndexOf(const QVBoxLayout* self, const QWidget* param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_IndexOf_IsBase(true);
        return vqvboxlayout->indexOf(param1);
    } else {
        return self->QVBoxLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnIndexOf(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_IndexOf_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxLayout_IsEmpty(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->isEmpty();
    } else {
        return self->QVBoxLayout::isEmpty();
    }
}

// Base class handler implementation
bool QVBoxLayout_QBaseIsEmpty(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_IsEmpty_IsBase(true);
        return vqvboxlayout->isEmpty();
    } else {
        return self->QVBoxLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnIsEmpty(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_IsEmpty_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_ControlTypes(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return static_cast<int>(vqvboxlayout->controlTypes());
    } else {
        return static_cast<int>(self->QVBoxLayout::controlTypes());
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseControlTypes(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqvboxlayout->controlTypes());
    } else {
        return static_cast<int>(self->QVBoxLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnControlTypes(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ControlTypes_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QVBoxLayout_ReplaceWidget(QVBoxLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QVBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QVBoxLayout_QBaseReplaceWidget(QVBoxLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ReplaceWidget_IsBase(true);
        return vqvboxlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QVBoxLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnReplaceWidget(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QVBoxLayout_Layout(QVBoxLayout* self) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->layout();
    } else {
        return self->QVBoxLayout::layout();
    }
}

// Base class handler implementation
QLayout* QVBoxLayout_QBaseLayout(QVBoxLayout* self) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Layout_IsBase(true);
        return vqvboxlayout->layout();
    } else {
        return self->QVBoxLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnLayout(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Layout_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_ChildEvent(QVBoxLayout* self, QChildEvent* e) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->childEvent(e);
    } else {
        ((VirtualQVBoxLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseChildEvent(QVBoxLayout* self, QChildEvent* e) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ChildEvent_IsBase(true);
        vqvboxlayout->childEvent(e);
    } else {
        ((VirtualQVBoxLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnChildEvent(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ChildEvent_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxLayout_Event(QVBoxLayout* self, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->event(event);
    } else {
        return self->QVBoxLayout::event(event);
    }
}

// Base class handler implementation
bool QVBoxLayout_QBaseEvent(QVBoxLayout* self, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Event_IsBase(true);
        return vqvboxlayout->event(event);
    } else {
        return self->QVBoxLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnEvent(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Event_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxLayout_EventFilter(QVBoxLayout* self, QObject* watched, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->eventFilter(watched, event);
    } else {
        return self->QVBoxLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVBoxLayout_QBaseEventFilter(QVBoxLayout* self, QObject* watched, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_EventFilter_IsBase(true);
        return vqvboxlayout->eventFilter(watched, event);
    } else {
        return self->QVBoxLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnEventFilter(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_EventFilter_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_TimerEvent(QVBoxLayout* self, QTimerEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->timerEvent(event);
    } else {
        ((VirtualQVBoxLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseTimerEvent(QVBoxLayout* self, QTimerEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_TimerEvent_IsBase(true);
        vqvboxlayout->timerEvent(event);
    } else {
        ((VirtualQVBoxLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnTimerEvent(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_TimerEvent_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_CustomEvent(QVBoxLayout* self, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->customEvent(event);
    } else {
        ((VirtualQVBoxLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseCustomEvent(QVBoxLayout* self, QEvent* event) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_CustomEvent_IsBase(true);
        vqvboxlayout->customEvent(event);
    } else {
        ((VirtualQVBoxLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnCustomEvent(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_CustomEvent_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_ConnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->connectNotify(*signal);
    } else {
        ((VirtualQVBoxLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseConnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ConnectNotify_IsBase(true);
        vqvboxlayout->connectNotify(*signal);
    } else {
        ((VirtualQVBoxLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnConnectNotify(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_DisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQVBoxLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseDisconnectNotify(QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_DisconnectNotify_IsBase(true);
        vqvboxlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQVBoxLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnDisconnectNotify(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QVBoxLayout_Widget(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->widget();
    } else {
        return self->QVBoxLayout::widget();
    }
}

// Base class handler implementation
QWidget* QVBoxLayout_QBaseWidget(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Widget_IsBase(true);
        return vqvboxlayout->widget();
    } else {
        return self->QVBoxLayout::widget();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnWidget(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Widget_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Widget_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QVBoxLayout_SpacerItem(QVBoxLayout* self) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->spacerItem();
    } else {
        return self->QVBoxLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QVBoxLayout_QBaseSpacerItem(QVBoxLayout* self) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SpacerItem_IsBase(true);
        return vqvboxlayout->spacerItem();
    } else {
        return self->QVBoxLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSpacerItem(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SpacerItem_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_WidgetEvent(QVBoxLayout* self, QEvent* param1) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->widgetEvent(param1);
    } else {
        ((VirtualQVBoxLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseWidgetEvent(QVBoxLayout* self, QEvent* param1) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_WidgetEvent_IsBase(true);
        vqvboxlayout->widgetEvent(param1);
    } else {
        ((VirtualQVBoxLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnWidgetEvent(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_AddChildLayout(QVBoxLayout* self, QLayout* l) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->addChildLayout(l);
    } else {
        ((VirtualQVBoxLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseAddChildLayout(QVBoxLayout* self, QLayout* l) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AddChildLayout_IsBase(true);
        vqvboxlayout->addChildLayout(l);
    } else {
        ((VirtualQVBoxLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnAddChildLayout(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QVBoxLayout_AddChildWidget(QVBoxLayout* self, QWidget* w) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->addChildWidget(w);
    } else {
        ((VirtualQVBoxLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QVBoxLayout_QBaseAddChildWidget(QVBoxLayout* self, QWidget* w) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AddChildWidget_IsBase(true);
        vqvboxlayout->addChildWidget(w);
    } else {
        ((VirtualQVBoxLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnAddChildWidget(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxLayout_AdoptLayout(QVBoxLayout* self, QLayout* layout) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->adoptLayout(layout);
    } else {
        return ((VirtualQVBoxLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QVBoxLayout_QBaseAdoptLayout(QVBoxLayout* self, QLayout* layout) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AdoptLayout_IsBase(true);
        return vqvboxlayout->adoptLayout(layout);
    } else {
        return ((VirtualQVBoxLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnAdoptLayout(QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = dynamic_cast<VirtualQVBoxLayout*>(self);
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QVBoxLayout_AlignmentRect(const QVBoxLayout* self, const QRect* param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return new QRect(vqvboxlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QVBoxLayout_QBaseAlignmentRect(const QVBoxLayout* self, const QRect* param1) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AlignmentRect_IsBase(true);
        return new QRect(vqvboxlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnAlignmentRect(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVBoxLayout_Sender(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->sender();
    } else {
        return ((VirtualQVBoxLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVBoxLayout_QBaseSender(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Sender_IsBase(true);
        return vqvboxlayout->sender();
    } else {
        return ((VirtualQVBoxLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSender(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Sender_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_SenderSignalIndex(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->senderSignalIndex();
    } else {
        return ((VirtualQVBoxLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseSenderSignalIndex(const QVBoxLayout* self) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SenderSignalIndex_IsBase(true);
        return vqvboxlayout->senderSignalIndex();
    } else {
        return ((VirtualQVBoxLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnSenderSignalIndex(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVBoxLayout_Receivers(const QVBoxLayout* self, const char* signal) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->receivers(signal);
    } else {
        return ((VirtualQVBoxLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVBoxLayout_QBaseReceivers(const QVBoxLayout* self, const char* signal) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Receivers_IsBase(true);
        return vqvboxlayout->receivers(signal);
    } else {
        return ((VirtualQVBoxLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnReceivers(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_Receivers_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVBoxLayout_IsSignalConnected(const QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        return vqvboxlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQVBoxLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVBoxLayout_QBaseIsSignalConnected(const QVBoxLayout* self, const QMetaMethod* signal) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_IsSignalConnected_IsBase(true);
        return vqvboxlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQVBoxLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVBoxLayout_OnIsSignalConnected(const QVBoxLayout* self, intptr_t slot) {
    auto* vqvboxlayout = const_cast<VirtualQVBoxLayout*>(dynamic_cast<const VirtualQVBoxLayout*>(self));
    if (vqvboxlayout && vqvboxlayout->isVirtualQVBoxLayout) {
        vqvboxlayout->setQVBoxLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQVBoxLayout::QVBoxLayout_IsSignalConnected_Callback>(slot));
    }
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
    delete self;
}
