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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSlider_Tr(const char* s) {
    auto _ret = QSlider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QSlider_SizeHint(const QSlider* self) {
    return new QSize(self->sizeHint());
}

QSize* QSlider_MinimumSizeHint(const QSlider* self) {
    return new QSize(self->minimumSizeHint());
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

bool QSlider_Event(QSlider* self, QEvent* event) {
    return self->event(event);
}

void QSlider_PaintEvent(QSlider* self, QPaintEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->paintEvent(ev);
    }
}

void QSlider_MousePressEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->mousePressEvent(ev);
    }
}

void QSlider_MouseReleaseEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->mouseReleaseEvent(ev);
    }
}

void QSlider_MouseMoveEvent(QSlider* self, QMouseEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->mouseMoveEvent(ev);
    }
}

void QSlider_InitStyleOption(const QSlider* self, QStyleOptionSlider* option) {
    auto* vqslider = dynamic_cast<const VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->initStyleOption(option);
    }
}

libqt_string QSlider_Tr2(const char* s, const char* c) {
    auto _ret = QSlider::tr(s, c);
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
    auto _ret = QSlider::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSlider_SuperMetaObject(const QSlider* self) {
    return (QMetaObject*)self->QSlider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMetaObject(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_metaobject_callback = reinterpret_cast<VirtualQSlider::QSlider_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSlider_SuperMetacast(QSlider* self, const char* param1) {
    return self->QSlider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMetacast(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_metacast_callback = reinterpret_cast<VirtualQSlider::QSlider_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSlider_SuperMetacall(QSlider* self, int param1, int param2, void** param3) {
    return self->QSlider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMetacall(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_metacall_callback = reinterpret_cast<VirtualQSlider::QSlider_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QSlider_SuperSizeHint(const QSlider* self) {
    return new QSize(self->QSlider::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSizeHint(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_sizehint_callback = reinterpret_cast<VirtualQSlider::QSlider_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QSlider_SuperMinimumSizeHint(const QSlider* self) {
    return new QSize(self->QSlider::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMinimumSizeHint(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_minimumsizehint_callback = reinterpret_cast<VirtualQSlider::QSlider_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QSlider_SuperEvent(QSlider* self, QEvent* event) {
    return self->QSlider::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_event_callback = reinterpret_cast<VirtualQSlider::QSlider_Event_Callback>(slot);
}

// Base class handler implementation
void QSlider_SuperPaintEvent(QSlider* self, QPaintEvent* ev) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::paintEvent(ev);
    } else
        qFatal("Error: Protected virtual method QSlider::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnPaintEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_paintevent_callback = reinterpret_cast<VirtualQSlider::QSlider_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QSlider_SuperMousePressEvent(QSlider* self, QMouseEvent* ev) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::mousePressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QSlider::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMousePressEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_mousepressevent_callback = reinterpret_cast<VirtualQSlider::QSlider_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QSlider_SuperMouseReleaseEvent(QSlider* self, QMouseEvent* ev) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::mouseReleaseEvent(ev);
    } else
        qFatal("Error: Protected virtual method QSlider::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMouseReleaseEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_mousereleaseevent_callback = reinterpret_cast<VirtualQSlider::QSlider_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QSlider_SuperMouseMoveEvent(QSlider* self, QMouseEvent* ev) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::mouseMoveEvent(ev);
    } else
        qFatal("Error: Protected virtual method QSlider::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMouseMoveEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_mousemoveevent_callback = reinterpret_cast<VirtualQSlider::QSlider_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QSlider_SuperInitStyleOption(const QSlider* self, QStyleOptionSlider* option) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        vqslider->QSlider::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QSlider::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInitStyleOption(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_initstyleoption_callback = reinterpret_cast<VirtualQSlider::QSlider_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QSlider_SliderChange(QSlider* self, int change) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->sliderChange(static_cast<VirtualQSlider::SliderChange>(change));
    } else {
        qFatal("Error: Protected virtual method QSlider::sliderChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperSliderChange(QSlider* self, int change) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::sliderChange(static_cast<VirtualQSlider::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method QSlider::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSliderChange(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_sliderchange_callback = reinterpret_cast<VirtualQSlider::QSlider_SliderChange_Callback>(slot);
}

// Derived class handler implementation
void QSlider_KeyPressEvent(QSlider* self, QKeyEvent* ev) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method QSlider::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperKeyPressEvent(QSlider* self, QKeyEvent* ev) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QSlider::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnKeyPressEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_keypressevent_callback = reinterpret_cast<VirtualQSlider::QSlider_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_TimerEvent(QSlider* self, QTimerEvent* param1) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSlider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperTimerEvent(QSlider* self, QTimerEvent* param1) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSlider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnTimerEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_timerevent_callback = reinterpret_cast<VirtualQSlider::QSlider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_WheelEvent(QSlider* self, QWheelEvent* e) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method QSlider::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperWheelEvent(QSlider* self, QWheelEvent* e) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QSlider::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnWheelEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_wheelevent_callback = reinterpret_cast<VirtualQSlider::QSlider_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ChangeEvent(QSlider* self, QEvent* e) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QSlider::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperChangeEvent(QSlider* self, QEvent* e) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QSlider::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnChangeEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_changeevent_callback = reinterpret_cast<VirtualQSlider::QSlider_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSlider_DevType(const QSlider* self) {
    return self->devType();
}

// Base class handler implementation
int QSlider_SuperDevType(const QSlider* self) {
    return self->QSlider::devType();
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDevType(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_devtype_callback = reinterpret_cast<VirtualQSlider::QSlider_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSlider_SetVisible(QSlider* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QSlider_SuperSetVisible(QSlider* self, bool visible) {
    self->QSlider::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSetVisible(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_setvisible_callback = reinterpret_cast<VirtualQSlider::QSlider_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QSlider_HeightForWidth(const QSlider* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSlider_SuperHeightForWidth(const QSlider* self, int param1) {
    return self->QSlider::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnHeightForWidth(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_heightforwidth_callback = reinterpret_cast<VirtualQSlider::QSlider_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSlider_HasHeightForWidth(const QSlider* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSlider_SuperHasHeightForWidth(const QSlider* self) {
    return self->QSlider::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnHasHeightForWidth(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_hasheightforwidth_callback = reinterpret_cast<VirtualQSlider::QSlider_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSlider_PaintEngine(const QSlider* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSlider_SuperPaintEngine(const QSlider* self) {
    return self->QSlider::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnPaintEngine(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_paintengine_callback = reinterpret_cast<VirtualQSlider::QSlider_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QSlider_MouseDoubleClickEvent(QSlider* self, QMouseEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperMouseDoubleClickEvent(QSlider* self, QMouseEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMouseDoubleClickEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSlider::QSlider_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_KeyReleaseEvent(QSlider* self, QKeyEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperKeyReleaseEvent(QSlider* self, QKeyEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnKeyReleaseEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_keyreleaseevent_callback = reinterpret_cast<VirtualQSlider::QSlider_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_FocusInEvent(QSlider* self, QFocusEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperFocusInEvent(QSlider* self, QFocusEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusInEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_focusinevent_callback = reinterpret_cast<VirtualQSlider::QSlider_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_FocusOutEvent(QSlider* self, QFocusEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperFocusOutEvent(QSlider* self, QFocusEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusOutEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_focusoutevent_callback = reinterpret_cast<VirtualQSlider::QSlider_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_EnterEvent(QSlider* self, QEnterEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperEnterEvent(QSlider* self, QEnterEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEnterEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_enterevent_callback = reinterpret_cast<VirtualQSlider::QSlider_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_LeaveEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperLeaveEvent(QSlider* self, QEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnLeaveEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_leaveevent_callback = reinterpret_cast<VirtualQSlider::QSlider_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_MoveEvent(QSlider* self, QMoveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperMoveEvent(QSlider* self, QMoveEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMoveEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_moveevent_callback = reinterpret_cast<VirtualQSlider::QSlider_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ResizeEvent(QSlider* self, QResizeEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperResizeEvent(QSlider* self, QResizeEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnResizeEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_resizeevent_callback = reinterpret_cast<VirtualQSlider::QSlider_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_CloseEvent(QSlider* self, QCloseEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperCloseEvent(QSlider* self, QCloseEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnCloseEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_closeevent_callback = reinterpret_cast<VirtualQSlider::QSlider_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ContextMenuEvent(QSlider* self, QContextMenuEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperContextMenuEvent(QSlider* self, QContextMenuEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnContextMenuEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_contextmenuevent_callback = reinterpret_cast<VirtualQSlider::QSlider_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_TabletEvent(QSlider* self, QTabletEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperTabletEvent(QSlider* self, QTabletEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnTabletEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_tabletevent_callback = reinterpret_cast<VirtualQSlider::QSlider_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ActionEvent(QSlider* self, QActionEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperActionEvent(QSlider* self, QActionEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnActionEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_actionevent_callback = reinterpret_cast<VirtualQSlider::QSlider_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_DragEnterEvent(QSlider* self, QDragEnterEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperDragEnterEvent(QSlider* self, QDragEnterEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDragEnterEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_dragenterevent_callback = reinterpret_cast<VirtualQSlider::QSlider_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_DragMoveEvent(QSlider* self, QDragMoveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperDragMoveEvent(QSlider* self, QDragMoveEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDragMoveEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_dragmoveevent_callback = reinterpret_cast<VirtualQSlider::QSlider_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_DragLeaveEvent(QSlider* self, QDragLeaveEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperDragLeaveEvent(QSlider* self, QDragLeaveEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDragLeaveEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_dragleaveevent_callback = reinterpret_cast<VirtualQSlider::QSlider_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_DropEvent(QSlider* self, QDropEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperDropEvent(QSlider* self, QDropEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDropEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_dropevent_callback = reinterpret_cast<VirtualQSlider::QSlider_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ShowEvent(QSlider* self, QShowEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperShowEvent(QSlider* self, QShowEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnShowEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_showevent_callback = reinterpret_cast<VirtualQSlider::QSlider_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_HideEvent(QSlider* self, QHideEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperHideEvent(QSlider* self, QHideEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnHideEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_hideevent_callback = reinterpret_cast<VirtualQSlider::QSlider_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSlider_NativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        return vqslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSlider::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSlider_SuperNativeEvent(QSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        return vqslider->QSlider::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSlider::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnNativeEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_nativeevent_callback = reinterpret_cast<VirtualQSlider::QSlider_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSlider_Metric(const QSlider* self, int param1) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider) {
        return vqslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSlider::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSlider_SuperMetric(const QSlider* self, int param1) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->QSlider::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSlider::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnMetric(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_metric_callback = reinterpret_cast<VirtualQSlider::QSlider_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSlider_InitPainter(const QSlider* self, QPainter* painter) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider) {
        vqslider->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSlider::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperInitPainter(const QSlider* self, QPainter* painter) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        vqslider->QSlider::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSlider::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInitPainter(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_initpainter_callback = reinterpret_cast<VirtualQSlider::QSlider_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSlider_Redirected(const QSlider* self, QPoint* offset) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider) {
        return vqslider->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSlider::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSlider_SuperRedirected(const QSlider* self, QPoint* offset) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->QSlider::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSlider::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnRedirected(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_redirected_callback = reinterpret_cast<VirtualQSlider::QSlider_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSlider_SharedPainter(const QSlider* self) {
    auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self));
    if (vqslider) {
        return vqslider->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSlider::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSlider_SuperSharedPainter(const QSlider* self) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->QSlider::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSlider::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnSharedPainter(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_sharedpainter_callback = reinterpret_cast<VirtualQSlider::QSlider_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSlider_InputMethodEvent(QSlider* self, QInputMethodEvent* param1) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSlider::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperInputMethodEvent(QSlider* self, QInputMethodEvent* param1) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSlider::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInputMethodEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_inputmethodevent_callback = reinterpret_cast<VirtualQSlider::QSlider_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSlider_InputMethodQuery(const QSlider* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSlider_SuperInputMethodQuery(const QSlider* self, int param1) {
    return new QVariant(self->QSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnInputMethodQuery(QSlider* self, intptr_t slot) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self)))
        vqslider->qslider_inputmethodquery_callback = reinterpret_cast<VirtualQSlider::QSlider_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QSlider_FocusNextPrevChild(QSlider* self, bool next) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        return vqslider->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSlider::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSlider_SuperFocusNextPrevChild(QSlider* self, bool next) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        return vqslider->QSlider::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSlider::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnFocusNextPrevChild(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_focusnextprevchild_callback = reinterpret_cast<VirtualQSlider::QSlider_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QSlider_EventFilter(QSlider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSlider_SuperEventFilter(QSlider* self, QObject* watched, QEvent* event) {
    return self->QSlider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnEventFilter(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_eventfilter_callback = reinterpret_cast<VirtualQSlider::QSlider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ChildEvent(QSlider* self, QChildEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperChildEvent(QSlider* self, QChildEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnChildEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_childevent_callback = reinterpret_cast<VirtualQSlider::QSlider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_CustomEvent(QSlider* self, QEvent* event) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSlider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperCustomEvent(QSlider* self, QEvent* event) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSlider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnCustomEvent(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_customevent_callback = reinterpret_cast<VirtualQSlider::QSlider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSlider_ConnectNotify(QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSlider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperConnectNotify(QSlider* self, const QMetaMethod* signal) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSlider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnConnectNotify(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_connectnotify_callback = reinterpret_cast<VirtualQSlider::QSlider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSlider_DisconnectNotify(QSlider* self, const QMetaMethod* signal) {
    auto* vqslider = dynamic_cast<VirtualQSlider*>(self);
    if (vqslider) {
        vqslider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSlider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSlider_SuperDisconnectNotify(QSlider* self, const QMetaMethod* signal) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->QSlider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSlider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSlider_OnDisconnectNotify(QSlider* self, intptr_t slot) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self))
        vqslider->qslider_disconnectnotify_callback = reinterpret_cast<VirtualQSlider::QSlider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSlider_SetRepeatAction(QSlider* self, int action) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->VirtualQSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method QSlider::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int QSlider_RepeatAction(const QSlider* self) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return static_cast<int>(vqslider->VirtualQSlider::repeatAction());
    } else
        qFatal("Error: Protected method QSlider::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void QSlider_UpdateMicroFocus(QSlider* self) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->VirtualQSlider::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSlider::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSlider_Create(QSlider* self) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->VirtualQSlider::create();
    } else
        qFatal("Error: Protected method QSlider::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSlider_Destroy(QSlider* self) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        vqslider->VirtualQSlider::destroy();
    } else
        qFatal("Error: Protected method QSlider::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSlider_FocusNextChild(QSlider* self) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        return vqslider->VirtualQSlider::focusNextChild();
    } else
        qFatal("Error: Protected method QSlider::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSlider_FocusPreviousChild(QSlider* self) {
    if (auto* vqslider = dynamic_cast<VirtualQSlider*>(self)) {
        return vqslider->VirtualQSlider::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSlider::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSlider_Sender(const QSlider* self) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->VirtualQSlider::sender();
    } else
        qFatal("Error: Protected method QSlider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSlider_SenderSignalIndex(const QSlider* self) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->VirtualQSlider::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSlider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSlider_Receivers(const QSlider* self, const char* signal) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->VirtualQSlider::receivers(signal);
    } else
        qFatal("Error: Protected method QSlider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSlider_IsSignalConnected(const QSlider* self, const QMetaMethod* signal) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->VirtualQSlider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSlider::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSlider_GetDecodedMetricF(const QSlider* self, int metricA, int metricB) {
    if (auto* vqslider = const_cast<VirtualQSlider*>(dynamic_cast<const VirtualQSlider*>(self))) {
        return vqslider->VirtualQSlider::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSlider::getDecodedMetricF called without a directly constructed type");
}

void QSlider_Delete(QSlider* self) {
    delete self;
}
