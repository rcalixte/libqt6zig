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
#include <QScrollBar>
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
#include <qscrollbar.h>
#include "libqscrollbar.h"
#include "libqscrollbar.hxx"

QScrollBar* QScrollBar_new(QWidget* parent) {
    return new VirtualQScrollBar(parent);
}

QScrollBar* QScrollBar_new2() {
    return new VirtualQScrollBar();
}

QScrollBar* QScrollBar_new3(int param1) {
    return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
    return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

QMetaObject* QScrollBar_MetaObject(const QScrollBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScrollBar_Metacast(QScrollBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScrollBar_Metacall(QScrollBar* self, int param1, int param2, void** param3) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScrollBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QScrollBar_OnMetacall(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Metacall_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QScrollBar_QBaseMetacall(QScrollBar* self, int param1, int param2, void** param3) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Metacall_IsBase(true);
        return vqscrollbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQScrollBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScrollBar_Tr(const char* s) {
    QString _ret = QScrollBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QScrollBar_Tr2(const char* s, const char* c) {
    QString _ret = QScrollBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScrollBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QScrollBar_SizeHint(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return new QSize(vqscrollbar->sizeHint());
    } else {
        return new QSize(((VirtualQScrollBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QScrollBar_QBaseSizeHint(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SizeHint_IsBase(true);
        return new QSize(vqscrollbar->sizeHint());
    } else {
        return new QSize(((VirtualQScrollBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSizeHint(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SizeHint_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->event(event);
    } else {
        return self->QScrollBar::event(event);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Event_IsBase(true);
        return vqscrollbar->event(event);
    } else {
        return self->QScrollBar::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Event_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->wheelEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_WheelEvent_IsBase(true);
        vqscrollbar->wheelEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnWheelEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_WheelEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->paintEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_PaintEvent_IsBase(true);
        vqscrollbar->paintEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_PaintEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->mousePressEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MousePressEvent_IsBase(true);
        vqscrollbar->mousePressEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMousePressEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MousePressEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->mouseReleaseEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MouseReleaseEvent_IsBase(true);
        vqscrollbar->mouseReleaseEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseReleaseEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->mouseMoveEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MouseMoveEvent_IsBase(true);
        vqscrollbar->mouseMoveEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseMoveEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->hideEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->hideEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_HideEvent_IsBase(true);
        vqscrollbar->hideEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHideEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_HideEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_SliderChange(QScrollBar* self, int change) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    } else {
        ((VirtualQScrollBar*)self)->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    }
}

// Base class handler implementation
void QScrollBar_QBaseSliderChange(QScrollBar* self, int change) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SliderChange_IsBase(true);
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    } else {
        ((VirtualQScrollBar*)self)->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSliderChange(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SliderChange_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->contextMenuEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ContextMenuEvent_IsBase(true);
        vqscrollbar->contextMenuEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnContextMenuEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->initStyleOption(option);
    } else {
        ((VirtualQScrollBar*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InitStyleOption_IsBase(true);
        vqscrollbar->initStyleOption(option);
    } else {
        ((VirtualQScrollBar*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitStyleOption(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InitStyleOption_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_KeyPressEvent(QScrollBar* self, QKeyEvent* ev) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->keyPressEvent(ev);
    } else {
        ((VirtualQScrollBar*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QScrollBar_QBaseKeyPressEvent(QScrollBar* self, QKeyEvent* ev) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_KeyPressEvent_IsBase(true);
        vqscrollbar->keyPressEvent(ev);
    } else {
        ((VirtualQScrollBar*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnKeyPressEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_TimerEvent(QScrollBar* self, QTimerEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->timerEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseTimerEvent(QScrollBar* self, QTimerEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_TimerEvent_IsBase(true);
        vqscrollbar->timerEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnTimerEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_TimerEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ChangeEvent(QScrollBar* self, QEvent* e) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->changeEvent(e);
    } else {
        ((VirtualQScrollBar*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QScrollBar_QBaseChangeEvent(QScrollBar* self, QEvent* e) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ChangeEvent_IsBase(true);
        vqscrollbar->changeEvent(e);
    } else {
        ((VirtualQScrollBar*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnChangeEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ChangeEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_DevType(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->devType();
    } else {
        return self->QScrollBar::devType();
    }
}

// Base class handler implementation
int QScrollBar_QBaseDevType(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DevType_IsBase(true);
        return vqscrollbar->devType();
    } else {
        return self->QScrollBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDevType(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DevType_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_SetVisible(QScrollBar* self, bool visible) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setVisible(visible);
    } else {
        self->QScrollBar::setVisible(visible);
    }
}

// Base class handler implementation
void QScrollBar_QBaseSetVisible(QScrollBar* self, bool visible) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SetVisible_IsBase(true);
        vqscrollbar->setVisible(visible);
    } else {
        self->QScrollBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSetVisible(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SetVisible_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QScrollBar_MinimumSizeHint(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return new QSize(vqscrollbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQScrollBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QScrollBar_QBaseMinimumSizeHint(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqscrollbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQScrollBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMinimumSizeHint(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_HeightForWidth(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QScrollBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QScrollBar_QBaseHeightForWidth(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_HeightForWidth_IsBase(true);
        return vqscrollbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QScrollBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHeightForWidth(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_HeightForWidth_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_HasHeightForWidth(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->hasHeightForWidth();
    } else {
        return self->QScrollBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QScrollBar_QBaseHasHeightForWidth(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_HasHeightForWidth_IsBase(true);
        return vqscrollbar->hasHeightForWidth();
    } else {
        return self->QScrollBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHasHeightForWidth(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QScrollBar_PaintEngine(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->paintEngine();
    } else {
        return self->QScrollBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QScrollBar_QBasePaintEngine(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_PaintEngine_IsBase(true);
        return vqscrollbar->paintEngine();
    } else {
        return self->QScrollBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEngine(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_PaintEngine_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MouseDoubleClickEvent_IsBase(true);
        vqscrollbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseDoubleClickEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_KeyReleaseEvent(QScrollBar* self, QKeyEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->keyReleaseEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseKeyReleaseEvent(QScrollBar* self, QKeyEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_KeyReleaseEvent_IsBase(true);
        vqscrollbar->keyReleaseEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnKeyReleaseEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_FocusInEvent(QScrollBar* self, QFocusEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->focusInEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseFocusInEvent(QScrollBar* self, QFocusEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusInEvent_IsBase(true);
        vqscrollbar->focusInEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusInEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusInEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_FocusOutEvent(QScrollBar* self, QFocusEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->focusOutEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseFocusOutEvent(QScrollBar* self, QFocusEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusOutEvent_IsBase(true);
        vqscrollbar->focusOutEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusOutEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_EnterEvent(QScrollBar* self, QEnterEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->enterEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseEnterEvent(QScrollBar* self, QEnterEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_EnterEvent_IsBase(true);
        vqscrollbar->enterEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEnterEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_EnterEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_LeaveEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->leaveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseLeaveEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_LeaveEvent_IsBase(true);
        vqscrollbar->leaveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnLeaveEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_LeaveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MoveEvent(QScrollBar* self, QMoveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->moveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMoveEvent(QScrollBar* self, QMoveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MoveEvent_IsBase(true);
        vqscrollbar->moveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMoveEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_MoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ResizeEvent(QScrollBar* self, QResizeEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->resizeEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseResizeEvent(QScrollBar* self, QResizeEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ResizeEvent_IsBase(true);
        vqscrollbar->resizeEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnResizeEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ResizeEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_CloseEvent(QScrollBar* self, QCloseEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->closeEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseCloseEvent(QScrollBar* self, QCloseEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_CloseEvent_IsBase(true);
        vqscrollbar->closeEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCloseEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_CloseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_TabletEvent(QScrollBar* self, QTabletEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->tabletEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseTabletEvent(QScrollBar* self, QTabletEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_TabletEvent_IsBase(true);
        vqscrollbar->tabletEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnTabletEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_TabletEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ActionEvent(QScrollBar* self, QActionEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->actionEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseActionEvent(QScrollBar* self, QActionEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ActionEvent_IsBase(true);
        vqscrollbar->actionEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnActionEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ActionEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DragEnterEvent(QScrollBar* self, QDragEnterEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->dragEnterEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDragEnterEvent(QScrollBar* self, QDragEnterEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DragEnterEvent_IsBase(true);
        vqscrollbar->dragEnterEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragEnterEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DragMoveEvent(QScrollBar* self, QDragMoveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->dragMoveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDragMoveEvent(QScrollBar* self, QDragMoveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DragMoveEvent_IsBase(true);
        vqscrollbar->dragMoveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragMoveEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->dragLeaveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DragLeaveEvent_IsBase(true);
        vqscrollbar->dragLeaveEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragLeaveEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DropEvent(QScrollBar* self, QDropEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->dropEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDropEvent(QScrollBar* self, QDropEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DropEvent_IsBase(true);
        vqscrollbar->dropEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDropEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DropEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ShowEvent(QScrollBar* self, QShowEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->showEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseShowEvent(QScrollBar* self, QShowEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ShowEvent_IsBase(true);
        vqscrollbar->showEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnShowEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ShowEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_NativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQScrollBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QScrollBar_QBaseNativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_NativeEvent_IsBase(true);
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQScrollBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnNativeEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_NativeEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_Metric(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQScrollBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QScrollBar_QBaseMetric(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Metric_IsBase(true);
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQScrollBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMetric(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Metric_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_InitPainter(const QScrollBar* self, QPainter* painter) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->initPainter(painter);
    } else {
        ((VirtualQScrollBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QScrollBar_QBaseInitPainter(const QScrollBar* self, QPainter* painter) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InitPainter_IsBase(true);
        vqscrollbar->initPainter(painter);
    } else {
        ((VirtualQScrollBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitPainter(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InitPainter_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QScrollBar_Redirected(const QScrollBar* self, QPoint* offset) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->redirected(offset);
    } else {
        return ((VirtualQScrollBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QScrollBar_QBaseRedirected(const QScrollBar* self, QPoint* offset) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Redirected_IsBase(true);
        return vqscrollbar->redirected(offset);
    } else {
        return ((VirtualQScrollBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnRedirected(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Redirected_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QScrollBar_SharedPainter(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->sharedPainter();
    } else {
        return ((VirtualQScrollBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QScrollBar_QBaseSharedPainter(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SharedPainter_IsBase(true);
        return vqscrollbar->sharedPainter();
    } else {
        return ((VirtualQScrollBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSharedPainter(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SharedPainter_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_InputMethodEvent(QScrollBar* self, QInputMethodEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->inputMethodEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseInputMethodEvent(QScrollBar* self, QInputMethodEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InputMethodEvent_IsBase(true);
        vqscrollbar->inputMethodEvent(param1);
    } else {
        ((VirtualQScrollBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInputMethodEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QScrollBar_InputMethodQuery(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return new QVariant(vqscrollbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQScrollBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QScrollBar_QBaseInputMethodQuery(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqscrollbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQScrollBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInputMethodQuery(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_FocusNextPrevChild(QScrollBar* self, bool next) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQScrollBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseFocusNextPrevChild(QScrollBar* self, bool next) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusNextPrevChild_IsBase(true);
        return vqscrollbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQScrollBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusNextPrevChild(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_EventFilter(QScrollBar* self, QObject* watched, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->eventFilter(watched, event);
    } else {
        return self->QScrollBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseEventFilter(QScrollBar* self, QObject* watched, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_EventFilter_IsBase(true);
        return vqscrollbar->eventFilter(watched, event);
    } else {
        return self->QScrollBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEventFilter(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_EventFilter_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ChildEvent(QScrollBar* self, QChildEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->childEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseChildEvent(QScrollBar* self, QChildEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ChildEvent_IsBase(true);
        vqscrollbar->childEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnChildEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ChildEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_CustomEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->customEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseCustomEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_CustomEvent_IsBase(true);
        vqscrollbar->customEvent(event);
    } else {
        ((VirtualQScrollBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCustomEvent(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_CustomEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ConnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->connectNotify(*signal);
    } else {
        ((VirtualQScrollBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollBar_QBaseConnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ConnectNotify_IsBase(true);
        vqscrollbar->connectNotify(*signal);
    } else {
        ((VirtualQScrollBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnConnectNotify(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_ConnectNotify_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DisconnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->disconnectNotify(*signal);
    } else {
        ((VirtualQScrollBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDisconnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DisconnectNotify_IsBase(true);
        vqscrollbar->disconnectNotify(*signal);
    } else {
        ((VirtualQScrollBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDisconnectNotify(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_SetRepeatAction(QScrollBar* self, int action) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQScrollBar*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QScrollBar_QBaseSetRepeatAction(QScrollBar* self, int action) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SetRepeatAction_IsBase(true);
        vqscrollbar->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualQScrollBar*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSetRepeatAction(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SetRepeatAction_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_RepeatAction(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return static_cast<int>(vqscrollbar->repeatAction());
    } else {
        return static_cast<int>(((VirtualQScrollBar*)self)->repeatAction());
    }
}

// Base class handler implementation
int QScrollBar_QBaseRepeatAction(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_RepeatAction_IsBase(true);
        return static_cast<int>(vqscrollbar->repeatAction());
    } else {
        return static_cast<int>(((VirtualQScrollBar*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnRepeatAction(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_RepeatAction_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_UpdateMicroFocus(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->updateMicroFocus();
    } else {
        ((VirtualQScrollBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QScrollBar_QBaseUpdateMicroFocus(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_UpdateMicroFocus_IsBase(true);
        vqscrollbar->updateMicroFocus();
    } else {
        ((VirtualQScrollBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnUpdateMicroFocus(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_Create(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->create();
    } else {
        ((VirtualQScrollBar*)self)->create();
    }
}

// Base class handler implementation
void QScrollBar_QBaseCreate(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Create_IsBase(true);
        vqscrollbar->create();
    } else {
        ((VirtualQScrollBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCreate(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Create_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_Destroy(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->destroy();
    } else {
        ((VirtualQScrollBar*)self)->destroy();
    }
}

// Base class handler implementation
void QScrollBar_QBaseDestroy(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Destroy_IsBase(true);
        vqscrollbar->destroy();
    } else {
        ((VirtualQScrollBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDestroy(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Destroy_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_FocusNextChild(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->focusNextChild();
    } else {
        return ((VirtualQScrollBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QScrollBar_QBaseFocusNextChild(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusNextChild_IsBase(true);
        return vqscrollbar->focusNextChild();
    } else {
        return ((VirtualQScrollBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusNextChild(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusNextChild_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_FocusPreviousChild(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->focusPreviousChild();
    } else {
        return ((VirtualQScrollBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QScrollBar_QBaseFocusPreviousChild(QScrollBar* self) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusPreviousChild_IsBase(true);
        return vqscrollbar->focusPreviousChild();
    } else {
        return ((VirtualQScrollBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusPreviousChild(QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScrollBar_Sender(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->sender();
    } else {
        return ((VirtualQScrollBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* QScrollBar_QBaseSender(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Sender_IsBase(true);
        return vqscrollbar->sender();
    } else {
        return ((VirtualQScrollBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSender(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Sender_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_SenderSignalIndex(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->senderSignalIndex();
    } else {
        return ((VirtualQScrollBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QScrollBar_QBaseSenderSignalIndex(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SenderSignalIndex_IsBase(true);
        return vqscrollbar->senderSignalIndex();
    } else {
        return ((VirtualQScrollBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSenderSignalIndex(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_Receivers(const QScrollBar* self, const char* signal) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->receivers(signal);
    } else {
        return ((VirtualQScrollBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QScrollBar_QBaseReceivers(const QScrollBar* self, const char* signal) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Receivers_IsBase(true);
        return vqscrollbar->receivers(signal);
    } else {
        return ((VirtualQScrollBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnReceivers(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_Receivers_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_IsSignalConnected(const QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        return vqscrollbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQScrollBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseIsSignalConnected(const QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_IsSignalConnected_IsBase(true);
        return vqscrollbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQScrollBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnIsSignalConnected(const QScrollBar* self, intptr_t slot) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar && vqscrollbar->isVirtualQScrollBar) {
        vqscrollbar->setQScrollBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_IsSignalConnected_Callback>(slot));
    }
}

void QScrollBar_Delete(QScrollBar* self) {
    delete self;
}
