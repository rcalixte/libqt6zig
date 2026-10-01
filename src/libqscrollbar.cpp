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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScrollBar_Tr(const char* s) {
    auto _ret = QScrollBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QScrollBar_SizeHint(const QScrollBar* self) {
    return new QSize(self->sizeHint());
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
    return self->event(event);
}

void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->wheelEvent(param1);
    }
}

void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->paintEvent(param1);
    }
}

void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->mousePressEvent(param1);
    }
}

void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->mouseReleaseEvent(param1);
    }
}

void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->mouseMoveEvent(param1);
    }
}

void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->hideEvent(param1);
    }
}

void QScrollBar_SliderChange(QScrollBar* self, int change) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    }
}

void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->contextMenuEvent(param1);
    }
}

void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
    auto* vqscrollbar = dynamic_cast<const VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->initStyleOption(option);
    }
}

libqt_string QScrollBar_Tr2(const char* s, const char* c) {
    auto _ret = QScrollBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = QScrollBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* QScrollBar_SuperMetaObject(const QScrollBar* self) {
    return (QMetaObject*)self->QScrollBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMetaObject(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_metaobject_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QScrollBar_SuperMetacast(QScrollBar* self, const char* param1) {
    return self->QScrollBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMetacast(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_metacast_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QScrollBar_SuperMetacall(QScrollBar* self, int param1, int param2, void** param3) {
    return self->QScrollBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMetacall(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_metacall_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QScrollBar_SuperSizeHint(const QScrollBar* self) {
    return new QSize(self->QScrollBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSizeHint(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_sizehint_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QScrollBar_SuperEvent(QScrollBar* self, QEvent* event) {
    return self->QScrollBar::event(event);
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_event_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_Event_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperWheelEvent(QScrollBar* self, QWheelEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnWheelEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_wheelevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperPaintEvent(QScrollBar* self, QPaintEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_paintevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperMousePressEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMousePressEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_mousepressevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseReleaseEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_mousereleaseevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperMouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseMoveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_mousemoveevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperHideEvent(QScrollBar* self, QHideEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHideEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_hideevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperSliderChange(QScrollBar* self, int change) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method QScrollBar::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSliderChange(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_sliderchange_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_SliderChange_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnContextMenuEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_contextmenuevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QScrollBar_SuperInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->QScrollBar::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QScrollBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitStyleOption(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_initstyleoption_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_KeyPressEvent(QScrollBar* self, QKeyEvent* ev) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperKeyPressEvent(QScrollBar* self, QKeyEvent* ev) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QScrollBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnKeyPressEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_keypressevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_TimerEvent(QScrollBar* self, QTimerEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperTimerEvent(QScrollBar* self, QTimerEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnTimerEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_timerevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_ChangeEvent(QScrollBar* self, QEvent* e) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperChangeEvent(QScrollBar* self, QEvent* e) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QScrollBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnChangeEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_changeevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QScrollBar_DevType(const QScrollBar* self) {
    return self->devType();
}

// Base class handler implementation
int QScrollBar_SuperDevType(const QScrollBar* self) {
    return self->QScrollBar::devType();
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDevType(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_devtype_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_SetVisible(QScrollBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QScrollBar_SuperSetVisible(QScrollBar* self, bool visible) {
    self->QScrollBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSetVisible(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_setvisible_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QScrollBar_MinimumSizeHint(const QScrollBar* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QScrollBar_SuperMinimumSizeHint(const QScrollBar* self) {
    return new QSize(self->QScrollBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMinimumSizeHint(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_minimumsizehint_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QScrollBar_HeightForWidth(const QScrollBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QScrollBar_SuperHeightForWidth(const QScrollBar* self, int param1) {
    return self->QScrollBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHeightForWidth(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_heightforwidth_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QScrollBar_HasHeightForWidth(const QScrollBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QScrollBar_SuperHasHeightForWidth(const QScrollBar* self) {
    return self->QScrollBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHasHeightForWidth(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_hasheightforwidth_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QScrollBar_PaintEngine(const QScrollBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QScrollBar_SuperPaintEngine(const QScrollBar* self) {
    return self->QScrollBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEngine(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_paintengine_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_MouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperMouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseDoubleClickEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_KeyReleaseEvent(QScrollBar* self, QKeyEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperKeyReleaseEvent(QScrollBar* self, QKeyEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnKeyReleaseEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_keyreleaseevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_FocusInEvent(QScrollBar* self, QFocusEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperFocusInEvent(QScrollBar* self, QFocusEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusInEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_focusinevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_FocusOutEvent(QScrollBar* self, QFocusEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperFocusOutEvent(QScrollBar* self, QFocusEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusOutEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_focusoutevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_EnterEvent(QScrollBar* self, QEnterEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperEnterEvent(QScrollBar* self, QEnterEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEnterEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_enterevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_LeaveEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperLeaveEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnLeaveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_leaveevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_MoveEvent(QScrollBar* self, QMoveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperMoveEvent(QScrollBar* self, QMoveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMoveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_moveevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_ResizeEvent(QScrollBar* self, QResizeEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperResizeEvent(QScrollBar* self, QResizeEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnResizeEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_resizeevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_CloseEvent(QScrollBar* self, QCloseEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperCloseEvent(QScrollBar* self, QCloseEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCloseEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_closeevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_TabletEvent(QScrollBar* self, QTabletEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperTabletEvent(QScrollBar* self, QTabletEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnTabletEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_tabletevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_ActionEvent(QScrollBar* self, QActionEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperActionEvent(QScrollBar* self, QActionEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnActionEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_actionevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_DragEnterEvent(QScrollBar* self, QDragEnterEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperDragEnterEvent(QScrollBar* self, QDragEnterEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragEnterEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_dragenterevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_DragMoveEvent(QScrollBar* self, QDragMoveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperDragMoveEvent(QScrollBar* self, QDragMoveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragMoveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_dragmoveevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_DragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperDragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragLeaveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_dragleaveevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_DropEvent(QScrollBar* self, QDropEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperDropEvent(QScrollBar* self, QDropEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDropEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_dropevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_ShowEvent(QScrollBar* self, QShowEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperShowEvent(QScrollBar* self, QShowEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnShowEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_showevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
bool QScrollBar_NativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QScrollBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QScrollBar_SuperNativeEvent(QScrollBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->QScrollBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QScrollBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnNativeEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_nativeevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QScrollBar_Metric(const QScrollBar* self, int param1) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar) {
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QScrollBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QScrollBar_SuperMetric(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->QScrollBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QScrollBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMetric(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_metric_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_InitPainter(const QScrollBar* self, QPainter* painter) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar) {
        vqscrollbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperInitPainter(const QScrollBar* self, QPainter* painter) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->QScrollBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QScrollBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitPainter(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_initpainter_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QScrollBar_Redirected(const QScrollBar* self, QPoint* offset) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar) {
        return vqscrollbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QScrollBar_SuperRedirected(const QScrollBar* self, QPoint* offset) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->QScrollBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QScrollBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnRedirected(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_redirected_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QScrollBar_SharedPainter(const QScrollBar* self) {
    auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self));
    if (vqscrollbar) {
        return vqscrollbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QScrollBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QScrollBar_SuperSharedPainter(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->QScrollBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QScrollBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSharedPainter(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_sharedpainter_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_InputMethodEvent(QScrollBar* self, QInputMethodEvent* param1) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperInputMethodEvent(QScrollBar* self, QInputMethodEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QScrollBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInputMethodEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_inputmethodevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QScrollBar_InputMethodQuery(const QScrollBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QScrollBar_SuperInputMethodQuery(const QScrollBar* self, int param1) {
    return new QVariant(self->QScrollBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInputMethodQuery(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self)))
        vqscrollbar->qscrollbar_inputmethodquery_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QScrollBar_FocusNextPrevChild(QScrollBar* self, bool next) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        return vqscrollbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QScrollBar_SuperFocusNextPrevChild(QScrollBar* self, bool next) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->QScrollBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QScrollBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusNextPrevChild(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_focusnextprevchild_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QScrollBar_EventFilter(QScrollBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QScrollBar_SuperEventFilter(QScrollBar* self, QObject* watched, QEvent* event) {
    return self->QScrollBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEventFilter(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_eventfilter_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_ChildEvent(QScrollBar* self, QChildEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperChildEvent(QScrollBar* self, QChildEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnChildEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_childevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_CustomEvent(QScrollBar* self, QEvent* event) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperCustomEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QScrollBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCustomEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_customevent_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_ConnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperConnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScrollBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnConnectNotify(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_connectnotify_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QScrollBar_DisconnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self);
    if (vqscrollbar) {
        vqscrollbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScrollBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScrollBar_SuperDisconnectNotify(QScrollBar* self, const QMetaMethod* signal) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->QScrollBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScrollBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDisconnectNotify(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self))
        vqscrollbar->qscrollbar_disconnectnotify_callback = reinterpret_cast<VirtualQScrollBar::QScrollBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QScrollBar_SetRepeatAction(QScrollBar* self, int action) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->VirtualQScrollBar::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method QScrollBar::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int QScrollBar_RepeatAction(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return static_cast<int>(vqscrollbar->VirtualQScrollBar::repeatAction());
    } else
        qFatal("Error: Protected method QScrollBar::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollBar_UpdateMicroFocus(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->VirtualQScrollBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method QScrollBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollBar_Create(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->VirtualQScrollBar::create();
    } else
        qFatal("Error: Protected method QScrollBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QScrollBar_Destroy(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->VirtualQScrollBar::destroy();
    } else
        qFatal("Error: Protected method QScrollBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScrollBar_FocusNextChild(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->VirtualQScrollBar::focusNextChild();
    } else
        qFatal("Error: Protected method QScrollBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScrollBar_FocusPreviousChild(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->VirtualQScrollBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method QScrollBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QScrollBar_Sender(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->VirtualQScrollBar::sender();
    } else
        qFatal("Error: Protected method QScrollBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QScrollBar_SenderSignalIndex(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->VirtualQScrollBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QScrollBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QScrollBar_Receivers(const QScrollBar* self, const char* signal) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->VirtualQScrollBar::receivers(signal);
    } else
        qFatal("Error: Protected method QScrollBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScrollBar_IsSignalConnected(const QScrollBar* self, const QMetaMethod* signal) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->VirtualQScrollBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QScrollBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QScrollBar_GetDecodedMetricF(const QScrollBar* self, int metricA, int metricB) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->VirtualQScrollBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QScrollBar::getDecodedMetricF called without a directly constructed type");
}

void QScrollBar_Delete(QScrollBar* self) {
    delete self;
}
