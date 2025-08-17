#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qslider.h>
#include "libqslider.h"
#include "libqslider.hxx"

QSlider* QSlider_new(QWidget* parent) {
    return new VirtualQSlider(parent);
}

QSlider* QSlider_new2() {
    return new VirtualQSlider();
}

QSlider* QSlider_new3(int orientation) {
    return new VirtualQSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new4(int orientation, QWidget* parent) {
    return new VirtualQSlider(static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QSlider_MetaObject(const QSlider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSlider_Metacast(QSlider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSlider_Metacall(QSlider* self, int param1, int param2, void** param3) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSlider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSlider_OnMetacall(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Metacall_Callback(reinterpret_cast<VirtualQSlider::QSlider_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSlider_QBaseMetacall(QSlider* self, int param1, int param2, void** param3) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Metacall_IsBase(true);
        return vqslider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSlider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSlider_Tr(const char* s) {
    QString _ret = QSlider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSlider_SetTickPosition(QSlider* self, int position) {
    self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

int QSlider_TickPosition(const QSlider* self) {
    return static_cast<int>(self->tickPosition());
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
    self->setTickInterval(static_cast<int>(ti));
}

int QSlider_TickInterval(const QSlider* self) {
    return self->tickInterval();
}

libqt_string QSlider_Tr2(const char* s, const char* c) {
    QString _ret = QSlider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSlider_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSlider::tr(s, c, static_cast<int>(n));
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
QSize* QSlider_SizeHint(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return new QSize(vqslider->sizeHint());
    } else {
        return new QSize(((VirtualQSlider*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QSlider_QBaseSizeHint(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SizeHint_IsBase(true);
        return new QSize(vqslider->sizeHint());
    } else {
        return new QSize(((VirtualQSlider*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSizeHint(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SizeHint_Callback(reinterpret_cast<VirtualQSlider::QSlider_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSlider_MinimumSizeHint(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return new QSize(vqslider->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSlider*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSlider_QBaseMinimumSizeHint(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MinimumSizeHint_IsBase(true);
        return new QSize(vqslider->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSlider*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMinimumSizeHint(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSlider::QSlider_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_Event(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->event(event);
    } else {
        return self->QSlider::event(event);
    }
}

// Base class handler implementation
bool QSlider_QBaseEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Event_IsBase(true);
        return vqslider->event(event);
    } else {
        return self->QSlider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Event_Callback(reinterpret_cast<VirtualQSlider::QSlider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_PaintEvent(QSlider* self, QPaintEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->paintEvent(ev);
    } else {
        ((VirtualQSlider*)self)->paintEvent(ev);
    }
}

// Base class handler implementation
void QSlider_QBasePaintEvent(QSlider* self, QPaintEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_PaintEvent_IsBase(true);
        vqslider->paintEvent(ev);
    } else {
        ((VirtualQSlider*)self)->paintEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnPaintEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_PaintEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_MousePressEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->mousePressEvent(ev);
    } else {
        ((VirtualQSlider*)self)->mousePressEvent(ev);
    }
}

// Base class handler implementation
void QSlider_QBaseMousePressEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MousePressEvent_IsBase(true);
        vqslider->mousePressEvent(ev);
    } else {
        ((VirtualQSlider*)self)->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMousePressEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MousePressEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_MouseReleaseEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->mouseReleaseEvent(ev);
    } else {
        ((VirtualQSlider*)self)->mouseReleaseEvent(ev);
    }
}

// Base class handler implementation
void QSlider_QBaseMouseReleaseEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MouseReleaseEvent_IsBase(true);
        vqslider->mouseReleaseEvent(ev);
    } else {
        ((VirtualQSlider*)self)->mouseReleaseEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMouseReleaseEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_MouseMoveEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->mouseMoveEvent(ev);
    } else {
        ((VirtualQSlider*)self)->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void QSlider_QBaseMouseMoveEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MouseMoveEvent_IsBase(true);
        vqslider->mouseMoveEvent(ev);
    } else {
        ((VirtualQSlider*)self)->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMouseMoveEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_InitStyleOption(const QSlider* self, QStyleOptionSlider* option) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->initStyleOption(option);
    } else {
        ((VirtualQSlider*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QSlider_QBaseInitStyleOption(const QSlider* self, QStyleOptionSlider* option) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InitStyleOption_IsBase(true);
        vqslider->initStyleOption(option);
    } else {
        ((VirtualQSlider*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInitStyleOption(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InitStyleOption_Callback(reinterpret_cast<VirtualQSlider::QSlider_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_SliderChange(QSlider* self, int change) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->sliderChange(static_cast<VirtualQSlider::SliderChange>(change));
    } else {
        ((VirtualQSlider*)self)->sliderChange(static_cast<VirtualQSlider::SliderChange>(change));
    }
}

// Base class handler implementation
void QSlider_QBaseSliderChange(QSlider* self, int change) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SliderChange_IsBase(true);
        vqslider->sliderChange(static_cast<VirtualQSlider::SliderChange>(change));
    } else {
        ((VirtualQSlider*)self)->sliderChange(static_cast<VirtualQSlider::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSliderChange(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SliderChange_Callback(reinterpret_cast<VirtualQSlider::QSlider_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_KeyPressEvent(QSlider* self, QKeyEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->keyPressEvent(ev);
    } else {
        ((VirtualQSlider*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QSlider_QBaseKeyPressEvent(QSlider* self, QKeyEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_KeyPressEvent_IsBase(true);
        vqslider->keyPressEvent(ev);
    } else {
        ((VirtualQSlider*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnKeyPressEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_KeyPressEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_TimerEvent(QSlider* self, QTimerEvent* param1) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->timerEvent(param1);
    } else {
        ((VirtualQSlider*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QSlider_QBaseTimerEvent(QSlider* self, QTimerEvent* param1) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_TimerEvent_IsBase(true);
        vqslider->timerEvent(param1);
    } else {
        ((VirtualQSlider*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnTimerEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_TimerEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_WheelEvent(QSlider* self, QWheelEvent* e) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->wheelEvent(e);
    } else {
        ((VirtualQSlider*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QSlider_QBaseWheelEvent(QSlider* self, QWheelEvent* e) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_WheelEvent_IsBase(true);
        vqslider->wheelEvent(e);
    } else {
        ((VirtualQSlider*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnWheelEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_WheelEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ChangeEvent(QSlider* self, QEvent* e) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->changeEvent(e);
    } else {
        ((VirtualQSlider*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QSlider_QBaseChangeEvent(QSlider* self, QEvent* e) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ChangeEvent_IsBase(true);
        vqslider->changeEvent(e);
    } else {
        ((VirtualQSlider*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnChangeEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ChangeEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSlider_DevType(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->devType();
    } else {
        return self->QSlider::devType();
    }
}

// Base class handler implementation
int QSlider_QBaseDevType(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DevType_IsBase(true);
        return vqslider->devType();
    } else {
        return self->QSlider::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDevType(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DevType_Callback(reinterpret_cast<VirtualQSlider::QSlider_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_SetVisible(QSlider* self, bool visible) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setVisible(visible);
    } else {
        self->QSlider::setVisible(visible);
    }
}

// Base class handler implementation
void QSlider_QBaseSetVisible(QSlider* self, bool visible) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SetVisible_IsBase(true);
        vqslider->setVisible(visible);
    } else {
        self->QSlider::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSetVisible(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SetVisible_Callback(reinterpret_cast<VirtualQSlider::QSlider_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QSlider_HeightForWidth(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSlider::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSlider_QBaseHeightForWidth(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_HeightForWidth_IsBase(true);
        return vqslider->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSlider::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnHeightForWidth(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_HeightForWidth_Callback(reinterpret_cast<VirtualQSlider::QSlider_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_HasHeightForWidth(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->hasHeightForWidth();
    } else {
        return self->QSlider::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSlider_QBaseHasHeightForWidth(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_HasHeightForWidth_IsBase(true);
        return vqslider->hasHeightForWidth();
    } else {
        return self->QSlider::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnHasHeightForWidth(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSlider::QSlider_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSlider_PaintEngine(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->paintEngine();
    } else {
        return self->QSlider::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSlider_QBasePaintEngine(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_PaintEngine_IsBase(true);
        return vqslider->paintEngine();
    } else {
        return self->QSlider::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnPaintEngine(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_PaintEngine_Callback(reinterpret_cast<VirtualQSlider::QSlider_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_MouseDoubleClickEvent(QSlider* self, QMouseEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSlider*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseMouseDoubleClickEvent(QSlider* self, QMouseEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MouseDoubleClickEvent_IsBase(true);
        vqslider->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSlider*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMouseDoubleClickEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_KeyReleaseEvent(QSlider* self, QKeyEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->keyReleaseEvent(event);
    } else {
        ((VirtualQSlider*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseKeyReleaseEvent(QSlider* self, QKeyEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_KeyReleaseEvent_IsBase(true);
        vqslider->keyReleaseEvent(event);
    } else {
        ((VirtualQSlider*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnKeyReleaseEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_FocusInEvent(QSlider* self, QFocusEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->focusInEvent(event);
    } else {
        ((VirtualQSlider*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseFocusInEvent(QSlider* self, QFocusEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusInEvent_IsBase(true);
        vqslider->focusInEvent(event);
    } else {
        ((VirtualQSlider*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusInEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusInEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_FocusOutEvent(QSlider* self, QFocusEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->focusOutEvent(event);
    } else {
        ((VirtualQSlider*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseFocusOutEvent(QSlider* self, QFocusEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusOutEvent_IsBase(true);
        vqslider->focusOutEvent(event);
    } else {
        ((VirtualQSlider*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusOutEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusOutEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_EnterEvent(QSlider* self, QEnterEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->enterEvent(event);
    } else {
        ((VirtualQSlider*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseEnterEvent(QSlider* self, QEnterEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_EnterEvent_IsBase(true);
        vqslider->enterEvent(event);
    } else {
        ((VirtualQSlider*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEnterEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_EnterEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_LeaveEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->leaveEvent(event);
    } else {
        ((VirtualQSlider*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseLeaveEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_LeaveEvent_IsBase(true);
        vqslider->leaveEvent(event);
    } else {
        ((VirtualQSlider*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnLeaveEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_LeaveEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_MoveEvent(QSlider* self, QMoveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->moveEvent(event);
    } else {
        ((VirtualQSlider*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseMoveEvent(QSlider* self, QMoveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MoveEvent_IsBase(true);
        vqslider->moveEvent(event);
    } else {
        ((VirtualQSlider*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMoveEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_MoveEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ResizeEvent(QSlider* self, QResizeEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->resizeEvent(event);
    } else {
        ((VirtualQSlider*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseResizeEvent(QSlider* self, QResizeEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ResizeEvent_IsBase(true);
        vqslider->resizeEvent(event);
    } else {
        ((VirtualQSlider*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnResizeEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ResizeEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_CloseEvent(QSlider* self, QCloseEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->closeEvent(event);
    } else {
        ((VirtualQSlider*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseCloseEvent(QSlider* self, QCloseEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_CloseEvent_IsBase(true);
        vqslider->closeEvent(event);
    } else {
        ((VirtualQSlider*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnCloseEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_CloseEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ContextMenuEvent(QSlider* self, QContextMenuEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->contextMenuEvent(event);
    } else {
        ((VirtualQSlider*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseContextMenuEvent(QSlider* self, QContextMenuEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ContextMenuEvent_IsBase(true);
        vqslider->contextMenuEvent(event);
    } else {
        ((VirtualQSlider*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnContextMenuEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_TabletEvent(QSlider* self, QTabletEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->tabletEvent(event);
    } else {
        ((VirtualQSlider*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseTabletEvent(QSlider* self, QTabletEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_TabletEvent_IsBase(true);
        vqslider->tabletEvent(event);
    } else {
        ((VirtualQSlider*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnTabletEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_TabletEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ActionEvent(QSlider* self, QActionEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->actionEvent(event);
    } else {
        ((VirtualQSlider*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseActionEvent(QSlider* self, QActionEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ActionEvent_IsBase(true);
        vqslider->actionEvent(event);
    } else {
        ((VirtualQSlider*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnActionEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ActionEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_DragEnterEvent(QSlider* self, QDragEnterEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->dragEnterEvent(event);
    } else {
        ((VirtualQSlider*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseDragEnterEvent(QSlider* self, QDragEnterEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DragEnterEvent_IsBase(true);
        vqslider->dragEnterEvent(event);
    } else {
        ((VirtualQSlider*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDragEnterEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DragEnterEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_DragMoveEvent(QSlider* self, QDragMoveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->dragMoveEvent(event);
    } else {
        ((VirtualQSlider*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseDragMoveEvent(QSlider* self, QDragMoveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DragMoveEvent_IsBase(true);
        vqslider->dragMoveEvent(event);
    } else {
        ((VirtualQSlider*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDragMoveEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DragMoveEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_DragLeaveEvent(QSlider* self, QDragLeaveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->dragLeaveEvent(event);
    } else {
        ((VirtualQSlider*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseDragLeaveEvent(QSlider* self, QDragLeaveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DragLeaveEvent_IsBase(true);
        vqslider->dragLeaveEvent(event);
    } else {
        ((VirtualQSlider*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDragLeaveEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_DropEvent(QSlider* self, QDropEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->dropEvent(event);
    } else {
        ((VirtualQSlider*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseDropEvent(QSlider* self, QDropEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DropEvent_IsBase(true);
        vqslider->dropEvent(event);
    } else {
        ((VirtualQSlider*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDropEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DropEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ShowEvent(QSlider* self, QShowEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->showEvent(event);
    } else {
        ((VirtualQSlider*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseShowEvent(QSlider* self, QShowEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ShowEvent_IsBase(true);
        vqslider->showEvent(event);
    } else {
        ((VirtualQSlider*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnShowEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ShowEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_HideEvent(QSlider* self, QHideEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->hideEvent(event);
    } else {
        ((VirtualQSlider*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseHideEvent(QSlider* self, QHideEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_HideEvent_IsBase(true);
        vqslider->hideEvent(event);
    } else {
        ((VirtualQSlider*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnHideEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_HideEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_NativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSlider*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSlider_QBaseNativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_NativeEvent_IsBase(true);
        return vqslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSlider*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnNativeEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_NativeEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSlider_Metric(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSlider*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSlider_QBaseMetric(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Metric_IsBase(true);
        return vqslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSlider*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMetric(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Metric_Callback(reinterpret_cast<VirtualQSlider::QSlider_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_InitPainter(const QSlider* self, QPainter* painter) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->initPainter(painter);
    } else {
        ((VirtualQSlider*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSlider_QBaseInitPainter(const QSlider* self, QPainter* painter) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InitPainter_IsBase(true);
        vqslider->initPainter(painter);
    } else {
        ((VirtualQSlider*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInitPainter(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InitPainter_Callback(reinterpret_cast<VirtualQSlider::QSlider_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSlider_Redirected(const QSlider* self, QPoint* offset) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->redirected(offset);
    } else {
        return ((VirtualQSlider*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSlider_QBaseRedirected(const QSlider* self, QPoint* offset) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Redirected_IsBase(true);
        return vqslider->redirected(offset);
    } else {
        return ((VirtualQSlider*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnRedirected(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Redirected_Callback(reinterpret_cast<VirtualQSlider::QSlider_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSlider_SharedPainter(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->sharedPainter();
    } else {
        return ((VirtualQSlider*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSlider_QBaseSharedPainter(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SharedPainter_IsBase(true);
        return vqslider->sharedPainter();
    } else {
        return ((VirtualQSlider*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSharedPainter(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SharedPainter_Callback(reinterpret_cast<VirtualQSlider::QSlider_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_InputMethodEvent(QSlider* self, QInputMethodEvent* param1) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->inputMethodEvent(param1);
    } else {
        ((VirtualQSlider*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSlider_QBaseInputMethodEvent(QSlider* self, QInputMethodEvent* param1) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InputMethodEvent_IsBase(true);
        vqslider->inputMethodEvent(param1);
    } else {
        ((VirtualQSlider*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInputMethodEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InputMethodEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSlider_InputMethodQuery(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return new QVariant(vqslider->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSlider*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSlider_QBaseInputMethodQuery(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InputMethodQuery_IsBase(true);
        return new QVariant(vqslider->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSlider*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInputMethodQuery(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_InputMethodQuery_Callback(reinterpret_cast<VirtualQSlider::QSlider_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_FocusNextPrevChild(QSlider* self, bool next) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->focusNextPrevChild(next);
    } else {
        return ((VirtualQSlider*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSlider_QBaseFocusNextPrevChild(QSlider* self, bool next) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusNextPrevChild_IsBase(true);
        return vqslider->focusNextPrevChild(next);
    } else {
        return ((VirtualQSlider*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusNextPrevChild(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSlider::QSlider_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_EventFilter(QSlider* self, QObject* watched, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->eventFilter(watched, event);
    } else {
        return self->QSlider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSlider_QBaseEventFilter(QSlider* self, QObject* watched, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_EventFilter_IsBase(true);
        return vqslider->eventFilter(watched, event);
    } else {
        return self->QSlider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEventFilter(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_EventFilter_Callback(reinterpret_cast<VirtualQSlider::QSlider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ChildEvent(QSlider* self, QChildEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->childEvent(event);
    } else {
        ((VirtualQSlider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseChildEvent(QSlider* self, QChildEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ChildEvent_IsBase(true);
        vqslider->childEvent(event);
    } else {
        ((VirtualQSlider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnChildEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ChildEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_CustomEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->customEvent(event);
    } else {
        ((VirtualQSlider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSlider_QBaseCustomEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_CustomEvent_IsBase(true);
        vqslider->customEvent(event);
    } else {
        ((VirtualQSlider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnCustomEvent(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_CustomEvent_Callback(reinterpret_cast<VirtualQSlider::QSlider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_ConnectNotify(QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->connectNotify(*signal);
    } else {
        ((VirtualQSlider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSlider_QBaseConnectNotify(QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ConnectNotify_IsBase(true);
        vqslider->connectNotify(*signal);
    } else {
        ((VirtualQSlider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnConnectNotify(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_ConnectNotify_Callback(reinterpret_cast<VirtualQSlider::QSlider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_DisconnectNotify(QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->disconnectNotify(*signal);
    } else {
        ((VirtualQSlider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSlider_QBaseDisconnectNotify(QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DisconnectNotify_IsBase(true);
        vqslider->disconnectNotify(*signal);
    } else {
        ((VirtualQSlider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDisconnectNotify(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_DisconnectNotify_Callback(reinterpret_cast<VirtualQSlider::QSlider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_SetRepeatAction(QSlider* self, int action) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QSlider_QBaseSetRepeatAction(QSlider* self, int action) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SetRepeatAction_IsBase(true);
        vqslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQSlider*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSetRepeatAction(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SetRepeatAction_Callback(reinterpret_cast<VirtualQSlider::QSlider_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QSlider_RepeatAction(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return static_cast<int>(vqslider->repeatAction());
    } else {
        return static_cast<int>(((VirtualQSlider*)self)->repeatAction());
    }
}

// Base class handler implementation
int QSlider_QBaseRepeatAction(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_RepeatAction_IsBase(true);
        return static_cast<int>(vqslider->repeatAction());
    } else {
        return static_cast<int>(((VirtualQSlider*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnRepeatAction(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_RepeatAction_Callback(reinterpret_cast<VirtualQSlider::QSlider_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_UpdateMicroFocus(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->updateMicroFocus();
    } else {
        ((VirtualQSlider*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QSlider_QBaseUpdateMicroFocus(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_UpdateMicroFocus_IsBase(true);
        vqslider->updateMicroFocus();
    } else {
        ((VirtualQSlider*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnUpdateMicroFocus(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSlider::QSlider_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_Create(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->create();
    } else {
        ((VirtualQSlider*)self)->create();
    }
}

// Base class handler implementation
void QSlider_QBaseCreate(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Create_IsBase(true);
        vqslider->create();
    } else {
        ((VirtualQSlider*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnCreate(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Create_Callback(reinterpret_cast<VirtualQSlider::QSlider_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSlider_Destroy(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->destroy();
    } else {
        ((VirtualQSlider*)self)->destroy();
    }
}

// Base class handler implementation
void QSlider_QBaseDestroy(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Destroy_IsBase(true);
        vqslider->destroy();
    } else {
        ((VirtualQSlider*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDestroy(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Destroy_Callback(reinterpret_cast<VirtualQSlider::QSlider_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_FocusNextChild(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->focusNextChild();
    } else {
        return ((VirtualQSlider*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QSlider_QBaseFocusNextChild(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusNextChild_IsBase(true);
        return vqslider->focusNextChild();
    } else {
        return ((VirtualQSlider*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusNextChild(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusNextChild_Callback(reinterpret_cast<VirtualQSlider::QSlider_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_FocusPreviousChild(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->focusPreviousChild();
    } else {
        return ((VirtualQSlider*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSlider_QBaseFocusPreviousChild(QSlider* self) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusPreviousChild_IsBase(true);
        return vqslider->focusPreviousChild();
    } else {
        return ((VirtualQSlider*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusPreviousChild(QSlider* self, intptr_t slot) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSlider::QSlider_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSlider_Sender(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->sender();
    } else {
        return ((VirtualQSlider*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSlider_QBaseSender(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Sender_IsBase(true);
        return vqslider->sender();
    } else {
        return ((VirtualQSlider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSender(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Sender_Callback(reinterpret_cast<VirtualQSlider::QSlider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSlider_SenderSignalIndex(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->senderSignalIndex();
    } else {
        return ((VirtualQSlider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSlider_QBaseSenderSignalIndex(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SenderSignalIndex_IsBase(true);
        return vqslider->senderSignalIndex();
    } else {
        return ((VirtualQSlider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSenderSignalIndex(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSlider::QSlider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSlider_Receivers(const QSlider* self, const char* signal) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->receivers(signal);
    } else {
        return ((VirtualQSlider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSlider_QBaseReceivers(const QSlider* self, const char* signal) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Receivers_IsBase(true);
        return vqslider->receivers(signal);
    } else {
        return ((VirtualQSlider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnReceivers(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_Receivers_Callback(reinterpret_cast<VirtualQSlider::QSlider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSlider_IsSignalConnected(const QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->isSignalConnected(*signal);
    } else {
        return ((VirtualQSlider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSlider_QBaseIsSignalConnected(const QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_IsSignalConnected_IsBase(true);
        return vqslider->isSignalConnected(*signal);
    } else {
        return ((VirtualQSlider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnIsSignalConnected(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_IsSignalConnected_Callback(reinterpret_cast<VirtualQSlider::QSlider_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QSlider_GetDecodedMetricF(const QSlider* self, int metricA, int metricB) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        return vqslider->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSlider*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QSlider_QBaseGetDecodedMetricF(const QSlider* self, int metricA, int metricB) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_GetDecodedMetricF_IsBase(true);
        return vqslider->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSlider*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnGetDecodedMetricF(const QSlider* self, intptr_t slot) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider && vqslider->isVirtualQSlider) {
        vqslider->setQSlider_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQSlider::QSlider_GetDecodedMetricF_Callback>(slot));
    }
}

void QSlider_Delete(QSlider* self) {
    delete self;
}
