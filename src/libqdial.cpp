#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDial>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdial.h>
#include "libqdial.h"
#include "libqdial.hxx"

QDial* QDial_new(QWidget* parent) {
    return new VirtualQDial(parent);
}

QDial* QDial_new2() {
    return new VirtualQDial();
}

QMetaObject* QDial_MetaObject(const QDial* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDial_Metacast(QDial* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDial_Metacall(QDial* self, int param1, int param2, void** param3) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDial*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnMetacall(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Metacall_Callback(reinterpret_cast<VirtualQDial::QDial_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDial_QBaseMetacall(QDial* self, int param1, int param2, void** param3) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Metacall_IsBase(true);
        return vqdial->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDial*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDial_Tr(const char* s) {
    QString _ret = QDial::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDial_Wrapping(const QDial* self) {
    return self->wrapping();
}

int QDial_NotchSize(const QDial* self) {
    return self->notchSize();
}

void QDial_SetNotchTarget(QDial* self, double target) {
    self->setNotchTarget(static_cast<double>(target));
}

double QDial_NotchTarget(const QDial* self) {
    return static_cast<double>(self->notchTarget());
}

bool QDial_NotchesVisible(const QDial* self) {
    return self->notchesVisible();
}

QSize* QDial_SizeHint(const QDial* self) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQDial*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnSizeHint(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SizeHint_Callback(reinterpret_cast<VirtualQDial::QDial_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QDial_QBaseSizeHint(const QDial* self) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SizeHint_IsBase(true);
        return new QSize(vqdial->sizeHint());
    } else {
        return new QSize(((VirtualQDial*)self)->sizeHint());
    }
}

QSize* QDial_MinimumSizeHint(const QDial* self) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDial*)self)->minimumSizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnMinimumSizeHint(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDial::QDial_MinimumSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QDial_QBaseMinimumSizeHint(const QDial* self) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MinimumSizeHint_IsBase(true);
        return new QSize(vqdial->minimumSizeHint());
    } else {
        return new QSize(((VirtualQDial*)self)->minimumSizeHint());
    }
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
    self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
    self->setWrapping(on);
}

bool QDial_Event(QDial* self, QEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->event(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Event_Callback(reinterpret_cast<VirtualQDial::QDial_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QDial_QBaseEvent(QDial* self, QEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Event_IsBase(true);
        return vqdial->event(e);
    }
    return {};
}

void QDial_ResizeEvent(QDial* self, QResizeEvent* re) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->resizeEvent(re);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnResizeEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ResizeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBaseResizeEvent(QDial* self, QResizeEvent* re) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ResizeEvent_IsBase(true);
        vqdial->resizeEvent(re);
    }
}

void QDial_PaintEvent(QDial* self, QPaintEvent* pe) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->paintEvent(pe);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnPaintEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_PaintEvent_Callback(reinterpret_cast<VirtualQDial::QDial_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBasePaintEvent(QDial* self, QPaintEvent* pe) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_PaintEvent_IsBase(true);
        vqdial->paintEvent(pe);
    }
}

void QDial_MousePressEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->mousePressEvent(me);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnMousePressEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MousePressEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MousePressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBaseMousePressEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MousePressEvent_IsBase(true);
        vqdial->mousePressEvent(me);
    }
}

void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->mouseReleaseEvent(me);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnMouseReleaseEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseReleaseEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBaseMouseReleaseEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MouseReleaseEvent_IsBase(true);
        vqdial->mouseReleaseEvent(me);
    }
}

void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->mouseMoveEvent(me);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnMouseMoveEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseMoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBaseMouseMoveEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MouseMoveEvent_IsBase(true);
        vqdial->mouseMoveEvent(me);
    }
}

void QDial_SliderChange(QDial* self, int change) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnSliderChange(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SliderChange_Callback(reinterpret_cast<VirtualQDial::QDial_SliderChange_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBaseSliderChange(QDial* self, int change) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SliderChange_IsBase(true);
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    }
}

void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->initStyleOption(option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnInitStyleOption(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InitStyleOption_Callback(reinterpret_cast<VirtualQDial::QDial_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QDial_QBaseInitStyleOption(const QDial* self, QStyleOptionSlider* option) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InitStyleOption_IsBase(true);
        vqdial->initStyleOption(option);
    }
}

libqt_string QDial_Tr2(const char* s, const char* c) {
    QString _ret = QDial::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDial_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDial::tr(s, c, static_cast<int>(n));
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
void QDial_KeyPressEvent(QDial* self, QKeyEvent* ev) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->keyPressEvent(ev);
    } else {
        ((VirtualQDial*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QDial_QBaseKeyPressEvent(QDial* self, QKeyEvent* ev) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_KeyPressEvent_IsBase(true);
        vqdial->keyPressEvent(ev);
    } else {
        ((VirtualQDial*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnKeyPressEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_KeyPressEvent_Callback(reinterpret_cast<VirtualQDial::QDial_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_TimerEvent(QDial* self, QTimerEvent* param1) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->timerEvent(param1);
    } else {
        ((VirtualQDial*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QDial_QBaseTimerEvent(QDial* self, QTimerEvent* param1) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_TimerEvent_IsBase(true);
        vqdial->timerEvent(param1);
    } else {
        ((VirtualQDial*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnTimerEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_TimerEvent_Callback(reinterpret_cast<VirtualQDial::QDial_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_WheelEvent(QDial* self, QWheelEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->wheelEvent(e);
    } else {
        ((VirtualQDial*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QDial_QBaseWheelEvent(QDial* self, QWheelEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_WheelEvent_IsBase(true);
        vqdial->wheelEvent(e);
    } else {
        ((VirtualQDial*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnWheelEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_WheelEvent_Callback(reinterpret_cast<VirtualQDial::QDial_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ChangeEvent(QDial* self, QEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->changeEvent(e);
    } else {
        ((VirtualQDial*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QDial_QBaseChangeEvent(QDial* self, QEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ChangeEvent_IsBase(true);
        vqdial->changeEvent(e);
    } else {
        ((VirtualQDial*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnChangeEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ChangeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_DevType(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->devType();
    } else {
        return self->QDial::devType();
    }
}

// Base class handler implementation
int QDial_QBaseDevType(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DevType_IsBase(true);
        return vqdial->devType();
    } else {
        return self->QDial::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDevType(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DevType_Callback(reinterpret_cast<VirtualQDial::QDial_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_SetVisible(QDial* self, bool visible) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setVisible(visible);
    } else {
        self->QDial::setVisible(visible);
    }
}

// Base class handler implementation
void QDial_QBaseSetVisible(QDial* self, bool visible) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SetVisible_IsBase(true);
        vqdial->setVisible(visible);
    } else {
        self->QDial::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSetVisible(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SetVisible_Callback(reinterpret_cast<VirtualQDial::QDial_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_HeightForWidth(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDial::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDial_QBaseHeightForWidth(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_HeightForWidth_IsBase(true);
        return vqdial->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QDial::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHeightForWidth(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_HeightForWidth_Callback(reinterpret_cast<VirtualQDial::QDial_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_HasHeightForWidth(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->hasHeightForWidth();
    } else {
        return self->QDial::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDial_QBaseHasHeightForWidth(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_HasHeightForWidth_IsBase(true);
        return vqdial->hasHeightForWidth();
    } else {
        return self->QDial::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHasHeightForWidth(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDial::QDial_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDial_PaintEngine(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->paintEngine();
    } else {
        return self->QDial::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDial_QBasePaintEngine(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_PaintEngine_IsBase(true);
        return vqdial->paintEngine();
    } else {
        return self->QDial::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnPaintEngine(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_PaintEngine_Callback(reinterpret_cast<VirtualQDial::QDial_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MouseDoubleClickEvent(QDial* self, QMouseEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDial*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseMouseDoubleClickEvent(QDial* self, QMouseEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MouseDoubleClickEvent_IsBase(true);
        vqdial->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQDial*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseDoubleClickEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_KeyReleaseEvent(QDial* self, QKeyEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->keyReleaseEvent(event);
    } else {
        ((VirtualQDial*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseKeyReleaseEvent(QDial* self, QKeyEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_KeyReleaseEvent_IsBase(true);
        vqdial->keyReleaseEvent(event);
    } else {
        ((VirtualQDial*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnKeyReleaseEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_FocusInEvent(QDial* self, QFocusEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->focusInEvent(event);
    } else {
        ((VirtualQDial*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseFocusInEvent(QDial* self, QFocusEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusInEvent_IsBase(true);
        vqdial->focusInEvent(event);
    } else {
        ((VirtualQDial*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusInEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusInEvent_Callback(reinterpret_cast<VirtualQDial::QDial_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_FocusOutEvent(QDial* self, QFocusEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->focusOutEvent(event);
    } else {
        ((VirtualQDial*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseFocusOutEvent(QDial* self, QFocusEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusOutEvent_IsBase(true);
        vqdial->focusOutEvent(event);
    } else {
        ((VirtualQDial*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusOutEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusOutEvent_Callback(reinterpret_cast<VirtualQDial::QDial_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_EnterEvent(QDial* self, QEnterEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->enterEvent(event);
    } else {
        ((VirtualQDial*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseEnterEvent(QDial* self, QEnterEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_EnterEvent_IsBase(true);
        vqdial->enterEvent(event);
    } else {
        ((VirtualQDial*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEnterEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_EnterEvent_Callback(reinterpret_cast<VirtualQDial::QDial_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_LeaveEvent(QDial* self, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->leaveEvent(event);
    } else {
        ((VirtualQDial*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseLeaveEvent(QDial* self, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_LeaveEvent_IsBase(true);
        vqdial->leaveEvent(event);
    } else {
        ((VirtualQDial*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnLeaveEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_LeaveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MoveEvent(QDial* self, QMoveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->moveEvent(event);
    } else {
        ((VirtualQDial*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseMoveEvent(QDial* self, QMoveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MoveEvent_IsBase(true);
        vqdial->moveEvent(event);
    } else {
        ((VirtualQDial*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMoveEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_MoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_CloseEvent(QDial* self, QCloseEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->closeEvent(event);
    } else {
        ((VirtualQDial*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseCloseEvent(QDial* self, QCloseEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_CloseEvent_IsBase(true);
        vqdial->closeEvent(event);
    } else {
        ((VirtualQDial*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCloseEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_CloseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ContextMenuEvent(QDial* self, QContextMenuEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->contextMenuEvent(event);
    } else {
        ((VirtualQDial*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseContextMenuEvent(QDial* self, QContextMenuEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ContextMenuEvent_IsBase(true);
        vqdial->contextMenuEvent(event);
    } else {
        ((VirtualQDial*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnContextMenuEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_TabletEvent(QDial* self, QTabletEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->tabletEvent(event);
    } else {
        ((VirtualQDial*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseTabletEvent(QDial* self, QTabletEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_TabletEvent_IsBase(true);
        vqdial->tabletEvent(event);
    } else {
        ((VirtualQDial*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnTabletEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_TabletEvent_Callback(reinterpret_cast<VirtualQDial::QDial_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ActionEvent(QDial* self, QActionEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->actionEvent(event);
    } else {
        ((VirtualQDial*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseActionEvent(QDial* self, QActionEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ActionEvent_IsBase(true);
        vqdial->actionEvent(event);
    } else {
        ((VirtualQDial*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnActionEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ActionEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DragEnterEvent(QDial* self, QDragEnterEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->dragEnterEvent(event);
    } else {
        ((VirtualQDial*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDragEnterEvent(QDial* self, QDragEnterEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DragEnterEvent_IsBase(true);
        vqdial->dragEnterEvent(event);
    } else {
        ((VirtualQDial*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragEnterEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DragEnterEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DragMoveEvent(QDial* self, QDragMoveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->dragMoveEvent(event);
    } else {
        ((VirtualQDial*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDragMoveEvent(QDial* self, QDragMoveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DragMoveEvent_IsBase(true);
        vqdial->dragMoveEvent(event);
    } else {
        ((VirtualQDial*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragMoveEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DragMoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DragLeaveEvent(QDial* self, QDragLeaveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->dragLeaveEvent(event);
    } else {
        ((VirtualQDial*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDragLeaveEvent(QDial* self, QDragLeaveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DragLeaveEvent_IsBase(true);
        vqdial->dragLeaveEvent(event);
    } else {
        ((VirtualQDial*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragLeaveEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DropEvent(QDial* self, QDropEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->dropEvent(event);
    } else {
        ((VirtualQDial*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDropEvent(QDial* self, QDropEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DropEvent_IsBase(true);
        vqdial->dropEvent(event);
    } else {
        ((VirtualQDial*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDropEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DropEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ShowEvent(QDial* self, QShowEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->showEvent(event);
    } else {
        ((VirtualQDial*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseShowEvent(QDial* self, QShowEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ShowEvent_IsBase(true);
        vqdial->showEvent(event);
    } else {
        ((VirtualQDial*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnShowEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ShowEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_HideEvent(QDial* self, QHideEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->hideEvent(event);
    } else {
        ((VirtualQDial*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseHideEvent(QDial* self, QHideEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_HideEvent_IsBase(true);
        vqdial->hideEvent(event);
    } else {
        ((VirtualQDial*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHideEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_HideEvent_Callback(reinterpret_cast<VirtualQDial::QDial_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_NativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDial*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDial_QBaseNativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_NativeEvent_IsBase(true);
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQDial*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnNativeEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_NativeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_Metric(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDial*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDial_QBaseMetric(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Metric_IsBase(true);
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQDial*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMetric(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Metric_Callback(reinterpret_cast<VirtualQDial::QDial_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_InitPainter(const QDial* self, QPainter* painter) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->initPainter(painter);
    } else {
        ((VirtualQDial*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QDial_QBaseInitPainter(const QDial* self, QPainter* painter) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InitPainter_IsBase(true);
        vqdial->initPainter(painter);
    } else {
        ((VirtualQDial*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInitPainter(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InitPainter_Callback(reinterpret_cast<VirtualQDial::QDial_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDial_Redirected(const QDial* self, QPoint* offset) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->redirected(offset);
    } else {
        return ((VirtualQDial*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDial_QBaseRedirected(const QDial* self, QPoint* offset) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Redirected_IsBase(true);
        return vqdial->redirected(offset);
    } else {
        return ((VirtualQDial*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnRedirected(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Redirected_Callback(reinterpret_cast<VirtualQDial::QDial_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDial_SharedPainter(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->sharedPainter();
    } else {
        return ((VirtualQDial*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDial_QBaseSharedPainter(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SharedPainter_IsBase(true);
        return vqdial->sharedPainter();
    } else {
        return ((VirtualQDial*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSharedPainter(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SharedPainter_Callback(reinterpret_cast<VirtualQDial::QDial_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_InputMethodEvent(QDial* self, QInputMethodEvent* param1) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->inputMethodEvent(param1);
    } else {
        ((VirtualQDial*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDial_QBaseInputMethodEvent(QDial* self, QInputMethodEvent* param1) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InputMethodEvent_IsBase(true);
        vqdial->inputMethodEvent(param1);
    } else {
        ((VirtualQDial*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInputMethodEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InputMethodEvent_Callback(reinterpret_cast<VirtualQDial::QDial_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDial_InputMethodQuery(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return new QVariant(vqdial->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDial*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDial_QBaseInputMethodQuery(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InputMethodQuery_IsBase(true);
        return new QVariant(vqdial->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQDial*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInputMethodQuery(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_InputMethodQuery_Callback(reinterpret_cast<VirtualQDial::QDial_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_FocusNextPrevChild(QDial* self, bool next) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->focusNextPrevChild(next);
    } else {
        return ((VirtualQDial*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDial_QBaseFocusNextPrevChild(QDial* self, bool next) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusNextPrevChild_IsBase(true);
        return vqdial->focusNextPrevChild(next);
    } else {
        return ((VirtualQDial*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusNextPrevChild(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDial::QDial_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_EventFilter(QDial* self, QObject* watched, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->eventFilter(watched, event);
    } else {
        return self->QDial::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDial_QBaseEventFilter(QDial* self, QObject* watched, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_EventFilter_IsBase(true);
        return vqdial->eventFilter(watched, event);
    } else {
        return self->QDial::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEventFilter(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_EventFilter_Callback(reinterpret_cast<VirtualQDial::QDial_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ChildEvent(QDial* self, QChildEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->childEvent(event);
    } else {
        ((VirtualQDial*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseChildEvent(QDial* self, QChildEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ChildEvent_IsBase(true);
        vqdial->childEvent(event);
    } else {
        ((VirtualQDial*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnChildEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ChildEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_CustomEvent(QDial* self, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->customEvent(event);
    } else {
        ((VirtualQDial*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseCustomEvent(QDial* self, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_CustomEvent_IsBase(true);
        vqdial->customEvent(event);
    } else {
        ((VirtualQDial*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCustomEvent(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_CustomEvent_Callback(reinterpret_cast<VirtualQDial::QDial_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ConnectNotify(QDial* self, const QMetaMethod* signal) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->connectNotify(*signal);
    } else {
        ((VirtualQDial*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDial_QBaseConnectNotify(QDial* self, const QMetaMethod* signal) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ConnectNotify_IsBase(true);
        vqdial->connectNotify(*signal);
    } else {
        ((VirtualQDial*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnConnectNotify(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_ConnectNotify_Callback(reinterpret_cast<VirtualQDial::QDial_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DisconnectNotify(QDial* self, const QMetaMethod* signal) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->disconnectNotify(*signal);
    } else {
        ((VirtualQDial*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDial_QBaseDisconnectNotify(QDial* self, const QMetaMethod* signal) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DisconnectNotify_IsBase(true);
        vqdial->disconnectNotify(*signal);
    } else {
        ((VirtualQDial*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDisconnectNotify(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_DisconnectNotify_Callback(reinterpret_cast<VirtualQDial::QDial_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_SetRepeatAction(QDial* self, int action) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQDial*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QDial_QBaseSetRepeatAction(QDial* self, int action) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SetRepeatAction_IsBase(true);
        vqdial->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQDial*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSetRepeatAction(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SetRepeatAction_Callback(reinterpret_cast<VirtualQDial::QDial_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_RepeatAction(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return static_cast<int>(vqdial->repeatAction());
    } else {
        return static_cast<int>(((VirtualQDial*)self)->repeatAction());
    }
}

// Base class handler implementation
int QDial_QBaseRepeatAction(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_RepeatAction_IsBase(true);
        return static_cast<int>(vqdial->repeatAction());
    } else {
        return static_cast<int>(((VirtualQDial*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnRepeatAction(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_RepeatAction_Callback(reinterpret_cast<VirtualQDial::QDial_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_UpdateMicroFocus(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->updateMicroFocus();
    } else {
        ((VirtualQDial*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QDial_QBaseUpdateMicroFocus(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_UpdateMicroFocus_IsBase(true);
        vqdial->updateMicroFocus();
    } else {
        ((VirtualQDial*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnUpdateMicroFocus(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDial::QDial_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_Create(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->create();
    } else {
        ((VirtualQDial*)self)->create();
    }
}

// Base class handler implementation
void QDial_QBaseCreate(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Create_IsBase(true);
        vqdial->create();
    } else {
        ((VirtualQDial*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCreate(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Create_Callback(reinterpret_cast<VirtualQDial::QDial_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_Destroy(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->destroy();
    } else {
        ((VirtualQDial*)self)->destroy();
    }
}

// Base class handler implementation
void QDial_QBaseDestroy(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Destroy_IsBase(true);
        vqdial->destroy();
    } else {
        ((VirtualQDial*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDestroy(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Destroy_Callback(reinterpret_cast<VirtualQDial::QDial_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_FocusNextChild(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->focusNextChild();
    } else {
        return ((VirtualQDial*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QDial_QBaseFocusNextChild(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusNextChild_IsBase(true);
        return vqdial->focusNextChild();
    } else {
        return ((VirtualQDial*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusNextChild(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusNextChild_Callback(reinterpret_cast<VirtualQDial::QDial_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_FocusPreviousChild(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->focusPreviousChild();
    } else {
        return ((VirtualQDial*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDial_QBaseFocusPreviousChild(QDial* self) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusPreviousChild_IsBase(true);
        return vqdial->focusPreviousChild();
    } else {
        return ((VirtualQDial*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusPreviousChild(QDial* self, intptr_t slot) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDial::QDial_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDial_Sender(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->sender();
    } else {
        return ((VirtualQDial*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDial_QBaseSender(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Sender_IsBase(true);
        return vqdial->sender();
    } else {
        return ((VirtualQDial*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSender(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Sender_Callback(reinterpret_cast<VirtualQDial::QDial_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_SenderSignalIndex(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->senderSignalIndex();
    } else {
        return ((VirtualQDial*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDial_QBaseSenderSignalIndex(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SenderSignalIndex_IsBase(true);
        return vqdial->senderSignalIndex();
    } else {
        return ((VirtualQDial*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSenderSignalIndex(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDial::QDial_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_Receivers(const QDial* self, const char* signal) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->receivers(signal);
    } else {
        return ((VirtualQDial*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDial_QBaseReceivers(const QDial* self, const char* signal) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Receivers_IsBase(true);
        return vqdial->receivers(signal);
    } else {
        return ((VirtualQDial*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnReceivers(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_Receivers_Callback(reinterpret_cast<VirtualQDial::QDial_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_IsSignalConnected(const QDial* self, const QMetaMethod* signal) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->isSignalConnected(*signal);
    } else {
        return ((VirtualQDial*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDial_QBaseIsSignalConnected(const QDial* self, const QMetaMethod* signal) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_IsSignalConnected_IsBase(true);
        return vqdial->isSignalConnected(*signal);
    } else {
        return ((VirtualQDial*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnIsSignalConnected(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_IsSignalConnected_Callback(reinterpret_cast<VirtualQDial::QDial_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QDial_GetDecodedMetricF(const QDial* self, int metricA, int metricB) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        return vqdial->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDial*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QDial_QBaseGetDecodedMetricF(const QDial* self, int metricA, int metricB) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_GetDecodedMetricF_IsBase(true);
        return vqdial->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQDial*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnGetDecodedMetricF(const QDial* self, intptr_t slot) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial && vqdial->isVirtualQDial) {
        vqdial->setQDial_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQDial::QDial_GetDecodedMetricF_Callback>(slot));
    }
}

void QDial_Delete(QDial* self) {
    delete self;
}
