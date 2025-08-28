#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QStackedLayout>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qstackedlayout.h>
#include "libqstackedlayout.h"
#include "libqstackedlayout.hxx"

QStackedLayout* QStackedLayout_new(QWidget* parent) {
    return new VirtualQStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new2() {
    return new VirtualQStackedLayout();
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
    return new VirtualQStackedLayout(parentLayout);
}

QMetaObject* QStackedLayout_MetaObject(const QStackedLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStackedLayout_Metacast(QStackedLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStackedLayout_Metacall(QStackedLayout* self, int param1, int param2, void** param3) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStackedLayout*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStackedLayout_Tr(const char* s) {
    QString _ret = QStackedLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w) {
    return self->addWidget(w);
}

int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w) {
    return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self) {
    return self->currentWidget();
}

int QStackedLayout_CurrentIndex(const QStackedLayout* self) {
    return self->currentIndex();
}

QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1) {
    return self->widget(static_cast<int>(param1));
}

int QStackedLayout_Count(const QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return self->count();
    } else {
        return ((VirtualQStackedLayout*)self)->count();
    }
}

int QStackedLayout_StackingMode(const QStackedLayout* self) {
    return static_cast<int>(self->stackingMode());
}

void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode) {
    self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        self->addItem(item);
    } else {
        ((VirtualQStackedLayout*)self)->addItem(item);
    }
}

QSize* QStackedLayout_SizeHint(const QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQStackedLayout*)self)->sizeHint());
    }
}

QSize* QStackedLayout_MinimumSize(const QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return new QSize(self->minimumSize());
    } else {
        return new QSize(((VirtualQStackedLayout*)self)->minimumSize());
    }
}

QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1) {
    auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return self->itemAt(static_cast<int>(param1));
    } else {
        return ((VirtualQStackedLayout*)self)->itemAt(static_cast<int>(param1));
    }
}

QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return self->takeAt(static_cast<int>(param1));
    } else {
        return ((VirtualQStackedLayout*)self)->takeAt(static_cast<int>(param1));
    }
}

void QStackedLayout_SetGeometry(QStackedLayout* self, const QRect* rect) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        self->setGeometry(*rect);
    } else {
        ((VirtualQStackedLayout*)self)->setGeometry(*rect);
    }
}

bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return self->hasHeightForWidth();
    } else {
        return ((VirtualQStackedLayout*)self)->hasHeightForWidth();
    }
}

int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width) {
    auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return self->heightForWidth(static_cast<int>(width));
    } else {
        return ((VirtualQStackedLayout*)self)->heightForWidth(static_cast<int>(width));
    }
}

void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index) {
    self->widgetRemoved(static_cast<int>(index));
}

void QStackedLayout_Connect_WidgetRemoved(QStackedLayout* self, intptr_t slot) {
    void (*slotFunc)(QStackedLayout*, int) = reinterpret_cast<void (*)(QStackedLayout*, int)>(slot);
    QStackedLayout::connect(self, &QStackedLayout::widgetRemoved, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QStackedLayout_CurrentChanged(QStackedLayout* self, int index) {
    self->currentChanged(static_cast<int>(index));
}

void QStackedLayout_Connect_CurrentChanged(QStackedLayout* self, intptr_t slot) {
    void (*slotFunc)(QStackedLayout*, int) = reinterpret_cast<void (*)(QStackedLayout*, int)>(slot);
    QStackedLayout::connect(self, &QStackedLayout::currentChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w) {
    self->setCurrentWidget(w);
}

libqt_string QStackedLayout_Tr2(const char* s, const char* c) {
    QString _ret = QStackedLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStackedLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStackedLayout::tr(s, c, static_cast<int>(n));
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
int QStackedLayout_QBaseMetacall(QStackedLayout* self, int param1, int param2, void** param3) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Metacall_IsBase(true);
        return vqstackedlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QStackedLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMetacall(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Metacall_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QStackedLayout_QBaseCount(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Count_IsBase(true);
        return vqstackedlayout->count();
    } else {
        return self->QStackedLayout::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnCount(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Count_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Count_Callback>(slot));
    }
}

// Base class handler implementation
void QStackedLayout_QBaseAddItem(QStackedLayout* self, QLayoutItem* item) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AddItem_IsBase(true);
        vqstackedlayout->addItem(item);
    } else {
        self->QStackedLayout::addItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAddItem(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AddItem_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AddItem_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QStackedLayout_QBaseSizeHint(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SizeHint_IsBase(true);
        return new QSize(vqstackedlayout->sizeHint());
    } else {
        return new QSize(((VirtualQStackedLayout*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSizeHint(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SizeHint_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QStackedLayout_QBaseMinimumSize(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_MinimumSize_IsBase(true);
        return new QSize(vqstackedlayout->minimumSize());
    } else {
        return new QSize(((VirtualQStackedLayout*)self)->minimumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMinimumSize(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_MinimumSize_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MinimumSize_Callback>(slot));
    }
}

// Base class handler implementation
QLayoutItem* QStackedLayout_QBaseItemAt(const QStackedLayout* self, int param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ItemAt_IsBase(true);
        return vqstackedlayout->itemAt(static_cast<int>(param1));
    } else {
        return self->QStackedLayout::itemAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnItemAt(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ItemAt_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ItemAt_Callback>(slot));
    }
}

// Base class handler implementation
QLayoutItem* QStackedLayout_QBaseTakeAt(QStackedLayout* self, int param1) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_TakeAt_IsBase(true);
        return vqstackedlayout->takeAt(static_cast<int>(param1));
    } else {
        return self->QStackedLayout::takeAt(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnTakeAt(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_TakeAt_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_TakeAt_Callback>(slot));
    }
}

// Base class handler implementation
void QStackedLayout_QBaseSetGeometry(QStackedLayout* self, const QRect* rect) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SetGeometry_IsBase(true);
        vqstackedlayout->setGeometry(*rect);
    } else {
        self->QStackedLayout::setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSetGeometry(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SetGeometry_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SetGeometry_Callback>(slot));
    }
}

// Base class handler implementation
bool QStackedLayout_QBaseHasHeightForWidth(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_HasHeightForWidth_IsBase(true);
        return vqstackedlayout->hasHeightForWidth();
    } else {
        return self->QStackedLayout::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnHasHeightForWidth(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_HasHeightForWidth_Callback>(slot));
    }
}

// Base class handler implementation
int QStackedLayout_QBaseHeightForWidth(const QStackedLayout* self, int width) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_HeightForWidth_IsBase(true);
        return vqstackedlayout->heightForWidth(static_cast<int>(width));
    } else {
        return self->QStackedLayout::heightForWidth(static_cast<int>(width));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnHeightForWidth(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_Spacing(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->spacing();
    } else {
        return self->QStackedLayout::spacing();
    }
}

// Base class handler implementation
int QStackedLayout_QBaseSpacing(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Spacing_IsBase(true);
        return vqstackedlayout->spacing();
    } else {
        return self->QStackedLayout::spacing();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSpacing(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Spacing_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Spacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_SetSpacing(QStackedLayout* self, int spacing) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QStackedLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Base class handler implementation
void QStackedLayout_QBaseSetSpacing(QStackedLayout* self, int spacing) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SetSpacing_IsBase(true);
        vqstackedlayout->setSpacing(static_cast<int>(spacing));
    } else {
        self->QStackedLayout::setSpacing(static_cast<int>(spacing));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSetSpacing(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SetSpacing_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SetSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_Invalidate(QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->invalidate();
    } else {
        self->QStackedLayout::invalidate();
    }
}

// Base class handler implementation
void QStackedLayout_QBaseInvalidate(QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Invalidate_IsBase(true);
        vqstackedlayout->invalidate();
    } else {
        self->QStackedLayout::invalidate();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnInvalidate(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Invalidate_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Invalidate_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QStackedLayout_Geometry(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return new QRect(vqstackedlayout->geometry());
    } else {
        return new QRect(((VirtualQStackedLayout*)self)->geometry());
    }
}

// Base class handler implementation
QRect* QStackedLayout_QBaseGeometry(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Geometry_IsBase(true);
        return new QRect(vqstackedlayout->geometry());
    } else {
        return new QRect(((VirtualQStackedLayout*)self)->geometry());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnGeometry(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Geometry_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Geometry_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_ExpandingDirections(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return static_cast<int>(vqstackedlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QStackedLayout::expandingDirections());
    }
}

// Base class handler implementation
int QStackedLayout_QBaseExpandingDirections(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ExpandingDirections_IsBase(true);
        return static_cast<int>(vqstackedlayout->expandingDirections());
    } else {
        return static_cast<int>(self->QStackedLayout::expandingDirections());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnExpandingDirections(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ExpandingDirections_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStackedLayout_MaximumSize(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return new QSize(vqstackedlayout->maximumSize());
    } else {
        return new QSize(((VirtualQStackedLayout*)self)->maximumSize());
    }
}

// Base class handler implementation
QSize* QStackedLayout_QBaseMaximumSize(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_MaximumSize_IsBase(true);
        return new QSize(vqstackedlayout->maximumSize());
    } else {
        return new QSize(((VirtualQStackedLayout*)self)->maximumSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMaximumSize(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_MaximumSize_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MaximumSize_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_IndexOf(const QStackedLayout* self, const QWidget* param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->indexOf(param1);
    } else {
        return self->QStackedLayout::indexOf(param1);
    }
}

// Base class handler implementation
int QStackedLayout_QBaseIndexOf(const QStackedLayout* self, const QWidget* param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_IndexOf_IsBase(true);
        return vqstackedlayout->indexOf(param1);
    } else {
        return self->QStackedLayout::indexOf(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnIndexOf(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_IndexOf_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_IndexOf_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedLayout_IsEmpty(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->isEmpty();
    } else {
        return self->QStackedLayout::isEmpty();
    }
}

// Base class handler implementation
bool QStackedLayout_QBaseIsEmpty(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_IsEmpty_IsBase(true);
        return vqstackedlayout->isEmpty();
    } else {
        return self->QStackedLayout::isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnIsEmpty(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_IsEmpty_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_ControlTypes(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return static_cast<int>(vqstackedlayout->controlTypes());
    } else {
        return static_cast<int>(self->QStackedLayout::controlTypes());
    }
}

// Base class handler implementation
int QStackedLayout_QBaseControlTypes(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ControlTypes_IsBase(true);
        return static_cast<int>(vqstackedlayout->controlTypes());
    } else {
        return static_cast<int>(self->QStackedLayout::controlTypes());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnControlTypes(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ControlTypes_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ControlTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QLayoutItem* QStackedLayout_ReplaceWidget(QStackedLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QStackedLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Base class handler implementation
QLayoutItem* QStackedLayout_QBaseReplaceWidget(QStackedLayout* self, QWidget* from, QWidget* to, int options) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ReplaceWidget_IsBase(true);
        return vqstackedlayout->replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    } else {
        return self->QStackedLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnReplaceWidget(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ReplaceWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QLayout* QStackedLayout_Layout(QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->layout();
    } else {
        return self->QStackedLayout::layout();
    }
}

// Base class handler implementation
QLayout* QStackedLayout_QBaseLayout(QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Layout_IsBase(true);
        return vqstackedlayout->layout();
    } else {
        return self->QStackedLayout::layout();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnLayout(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Layout_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Layout_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_ChildEvent(QStackedLayout* self, QChildEvent* e) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->childEvent(e);
    } else {
        ((VirtualQStackedLayout*)self)->childEvent(e);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseChildEvent(QStackedLayout* self, QChildEvent* e) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ChildEvent_IsBase(true);
        vqstackedlayout->childEvent(e);
    } else {
        ((VirtualQStackedLayout*)self)->childEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnChildEvent(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ChildEvent_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedLayout_Event(QStackedLayout* self, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->event(event);
    } else {
        return self->QStackedLayout::event(event);
    }
}

// Base class handler implementation
bool QStackedLayout_QBaseEvent(QStackedLayout* self, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Event_IsBase(true);
        return vqstackedlayout->event(event);
    } else {
        return self->QStackedLayout::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnEvent(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Event_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedLayout_EventFilter(QStackedLayout* self, QObject* watched, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->eventFilter(watched, event);
    } else {
        return self->QStackedLayout::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStackedLayout_QBaseEventFilter(QStackedLayout* self, QObject* watched, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_EventFilter_IsBase(true);
        return vqstackedlayout->eventFilter(watched, event);
    } else {
        return self->QStackedLayout::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnEventFilter(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_EventFilter_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_TimerEvent(QStackedLayout* self, QTimerEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->timerEvent(event);
    } else {
        ((VirtualQStackedLayout*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseTimerEvent(QStackedLayout* self, QTimerEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_TimerEvent_IsBase(true);
        vqstackedlayout->timerEvent(event);
    } else {
        ((VirtualQStackedLayout*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnTimerEvent(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_TimerEvent_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_CustomEvent(QStackedLayout* self, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->customEvent(event);
    } else {
        ((VirtualQStackedLayout*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseCustomEvent(QStackedLayout* self, QEvent* event) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_CustomEvent_IsBase(true);
        vqstackedlayout->customEvent(event);
    } else {
        ((VirtualQStackedLayout*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnCustomEvent(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_CustomEvent_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_ConnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->connectNotify(*signal);
    } else {
        ((VirtualQStackedLayout*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseConnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ConnectNotify_IsBase(true);
        vqstackedlayout->connectNotify(*signal);
    } else {
        ((VirtualQStackedLayout*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnConnectNotify(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_DisconnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQStackedLayout*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseDisconnectNotify(QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_DisconnectNotify_IsBase(true);
        vqstackedlayout->disconnectNotify(*signal);
    } else {
        ((VirtualQStackedLayout*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnDisconnectNotify(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_MinimumHeightForWidth(const QStackedLayout* self, int param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QStackedLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QStackedLayout_QBaseMinimumHeightForWidth(const QStackedLayout* self, int param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_MinimumHeightForWidth_IsBase(true);
        return vqstackedlayout->minimumHeightForWidth(static_cast<int>(param1));
    } else {
        return self->QStackedLayout::minimumHeightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMinimumHeightForWidth(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MinimumHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QSpacerItem* QStackedLayout_SpacerItem(QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->spacerItem();
    } else {
        return self->QStackedLayout::spacerItem();
    }
}

// Base class handler implementation
QSpacerItem* QStackedLayout_QBaseSpacerItem(QStackedLayout* self) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SpacerItem_IsBase(true);
        return vqstackedlayout->spacerItem();
    } else {
        return self->QStackedLayout::spacerItem();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSpacerItem(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SpacerItem_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SpacerItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_WidgetEvent(QStackedLayout* self, QEvent* param1) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->widgetEvent(param1);
    } else {
        ((VirtualQStackedLayout*)self)->widgetEvent(param1);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseWidgetEvent(QStackedLayout* self, QEvent* param1) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_WidgetEvent_IsBase(true);
        vqstackedlayout->widgetEvent(param1);
    } else {
        ((VirtualQStackedLayout*)self)->widgetEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnWidgetEvent(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_WidgetEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_AddChildLayout(QStackedLayout* self, QLayout* l) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->addChildLayout(l);
    } else {
        ((VirtualQStackedLayout*)self)->addChildLayout(l);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseAddChildLayout(QStackedLayout* self, QLayout* l) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AddChildLayout_IsBase(true);
        vqstackedlayout->addChildLayout(l);
    } else {
        ((VirtualQStackedLayout*)self)->addChildLayout(l);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAddChildLayout(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AddChildLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedLayout_AddChildWidget(QStackedLayout* self, QWidget* w) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->addChildWidget(w);
    } else {
        ((VirtualQStackedLayout*)self)->addChildWidget(w);
    }
}

// Base class handler implementation
void QStackedLayout_QBaseAddChildWidget(QStackedLayout* self, QWidget* w) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AddChildWidget_IsBase(true);
        vqstackedlayout->addChildWidget(w);
    } else {
        ((VirtualQStackedLayout*)self)->addChildWidget(w);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAddChildWidget(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AddChildWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedLayout_AdoptLayout(QStackedLayout* self, QLayout* layout) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->adoptLayout(layout);
    } else {
        return ((VirtualQStackedLayout*)self)->adoptLayout(layout);
    }
}

// Base class handler implementation
bool QStackedLayout_QBaseAdoptLayout(QStackedLayout* self, QLayout* layout) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AdoptLayout_IsBase(true);
        return vqstackedlayout->adoptLayout(layout);
    } else {
        return ((VirtualQStackedLayout*)self)->adoptLayout(layout);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAdoptLayout(QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AdoptLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QStackedLayout_AlignmentRect(const QStackedLayout* self, const QRect* param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return new QRect(vqstackedlayout->alignmentRect(*param1));
    }
    return {};
}

// Base class handler implementation
QRect* QStackedLayout_QBaseAlignmentRect(const QStackedLayout* self, const QRect* param1) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AlignmentRect_IsBase(true);
        return new QRect(vqstackedlayout->alignmentRect(*param1));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAlignmentRect(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AlignmentRect_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStackedLayout_Sender(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->sender();
    } else {
        return ((VirtualQStackedLayout*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStackedLayout_QBaseSender(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Sender_IsBase(true);
        return vqstackedlayout->sender();
    } else {
        return ((VirtualQStackedLayout*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSender(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Sender_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_SenderSignalIndex(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->senderSignalIndex();
    } else {
        return ((VirtualQStackedLayout*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStackedLayout_QBaseSenderSignalIndex(const QStackedLayout* self) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SenderSignalIndex_IsBase(true);
        return vqstackedlayout->senderSignalIndex();
    } else {
        return ((VirtualQStackedLayout*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSenderSignalIndex(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedLayout_Receivers(const QStackedLayout* self, const char* signal) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->receivers(signal);
    } else {
        return ((VirtualQStackedLayout*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStackedLayout_QBaseReceivers(const QStackedLayout* self, const char* signal) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Receivers_IsBase(true);
        return vqstackedlayout->receivers(signal);
    } else {
        return ((VirtualQStackedLayout*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnReceivers(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_Receivers_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedLayout_IsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        return vqstackedlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQStackedLayout*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStackedLayout_QBaseIsSignalConnected(const QStackedLayout* self, const QMetaMethod* signal) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_IsSignalConnected_IsBase(true);
        return vqstackedlayout->isSignalConnected(*signal);
    } else {
        return ((VirtualQStackedLayout*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnIsSignalConnected(const QStackedLayout* self, intptr_t slot) {
    auto* vqstackedlayout = const_cast<VirtualQStackedLayout*>(dynamic_cast<const VirtualQStackedLayout*>(self));
    if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
        vqstackedlayout->setQStackedLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_IsSignalConnected_Callback>(slot));
    }
}

void QStackedLayout_Delete(QStackedLayout* self) {
    delete self;
}
