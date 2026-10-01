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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDial_Tr(const char* s) {
    auto _ret = QDial::tr(s);
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
    return new QSize(self->sizeHint());
}

QSize* QDial_MinimumSizeHint(const QDial* self) {
    return new QSize(self->minimumSizeHint());
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
    self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
    self->setWrapping(on);
}

bool QDial_Event(QDial* self, QEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        return vqdial->event(e);
    }
    qFatal("Error: Protected method QDial::event called without a directly constructed type");
}

void QDial_ResizeEvent(QDial* self, QResizeEvent* re) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->resizeEvent(re);
    }
}

void QDial_PaintEvent(QDial* self, QPaintEvent* pe) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->paintEvent(pe);
    }
}

void QDial_MousePressEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->mousePressEvent(me);
    }
}

void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->mouseReleaseEvent(me);
    }
}

void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->mouseMoveEvent(me);
    }
}

void QDial_SliderChange(QDial* self, int change) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    }
}

void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option) {
    auto* vqdial = dynamic_cast<const VirtualQDial*>(self);
    if (vqdial) {
        vqdial->initStyleOption(option);
    }
}

libqt_string QDial_Tr2(const char* s, const char* c) {
    auto _ret = QDial::tr(s, c);
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
    auto _ret = QDial::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDial_SuperMetaObject(const QDial* self) {
    return (QMetaObject*)self->QDial::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMetaObject(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_metaobject_callback = reinterpret_cast<VirtualQDial::QDial_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDial_SuperMetacast(QDial* self, const char* param1) {
    return self->QDial::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMetacast(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_metacast_callback = reinterpret_cast<VirtualQDial::QDial_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDial_SuperMetacall(QDial* self, int param1, int param2, void** param3) {
    return self->QDial::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMetacall(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_metacall_callback = reinterpret_cast<VirtualQDial::QDial_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QDial_SuperSizeHint(const QDial* self) {
    return new QSize(self->QDial::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSizeHint(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_sizehint_callback = reinterpret_cast<VirtualQDial::QDial_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QDial_SuperMinimumSizeHint(const QDial* self) {
    return new QSize(self->QDial::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMinimumSizeHint(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_minimumsizehint_callback = reinterpret_cast<VirtualQDial::QDial_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QDial_SuperEvent(QDial* self, QEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->QDial::event(e);
    } else
        qFatal("Error: Protected virtual method QDial::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_event_callback = reinterpret_cast<VirtualQDial::QDial_Event_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperResizeEvent(QDial* self, QResizeEvent* re) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::resizeEvent(re);
    } else
        qFatal("Error: Protected virtual method QDial::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnResizeEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_resizeevent_callback = reinterpret_cast<VirtualQDial::QDial_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperPaintEvent(QDial* self, QPaintEvent* pe) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::paintEvent(pe);
    } else
        qFatal("Error: Protected virtual method QDial::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnPaintEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_paintevent_callback = reinterpret_cast<VirtualQDial::QDial_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperMousePressEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::mousePressEvent(me);
    } else
        qFatal("Error: Protected virtual method QDial::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMousePressEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_mousepressevent_callback = reinterpret_cast<VirtualQDial::QDial_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperMouseReleaseEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::mouseReleaseEvent(me);
    } else
        qFatal("Error: Protected virtual method QDial::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseReleaseEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_mousereleaseevent_callback = reinterpret_cast<VirtualQDial::QDial_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperMouseMoveEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::mouseMoveEvent(me);
    } else
        qFatal("Error: Protected virtual method QDial::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseMoveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_mousemoveevent_callback = reinterpret_cast<VirtualQDial::QDial_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperSliderChange(QDial* self, int change) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method QDial::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSliderChange(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_sliderchange_callback = reinterpret_cast<VirtualQDial::QDial_SliderChange_Callback>(slot);
}

// Base class handler implementation
void QDial_SuperInitStyleOption(const QDial* self, QStyleOptionSlider* option) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->QDial::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QDial::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInitStyleOption(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_initstyleoption_callback = reinterpret_cast<VirtualQDial::QDial_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QDial_KeyPressEvent(QDial* self, QKeyEvent* ev) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method QDial::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperKeyPressEvent(QDial* self, QKeyEvent* ev) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QDial::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnKeyPressEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_keypressevent_callback = reinterpret_cast<VirtualQDial::QDial_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_TimerEvent(QDial* self, QTimerEvent* param1) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDial::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperTimerEvent(QDial* self, QTimerEvent* param1) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDial::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnTimerEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_timerevent_callback = reinterpret_cast<VirtualQDial::QDial_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_WheelEvent(QDial* self, QWheelEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method QDial::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperWheelEvent(QDial* self, QWheelEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QDial::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnWheelEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_wheelevent_callback = reinterpret_cast<VirtualQDial::QDial_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_ChangeEvent(QDial* self, QEvent* e) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QDial::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperChangeEvent(QDial* self, QEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QDial::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnChangeEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_changeevent_callback = reinterpret_cast<VirtualQDial::QDial_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDial_DevType(const QDial* self) {
    return self->devType();
}

// Base class handler implementation
int QDial_SuperDevType(const QDial* self) {
    return self->QDial::devType();
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDevType(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_devtype_callback = reinterpret_cast<VirtualQDial::QDial_DevType_Callback>(slot);
}

// Derived class handler implementation
void QDial_SetVisible(QDial* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QDial_SuperSetVisible(QDial* self, bool visible) {
    self->QDial::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSetVisible(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_setvisible_callback = reinterpret_cast<VirtualQDial::QDial_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QDial_HeightForWidth(const QDial* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QDial_SuperHeightForWidth(const QDial* self, int param1) {
    return self->QDial::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHeightForWidth(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_heightforwidth_callback = reinterpret_cast<VirtualQDial::QDial_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QDial_HasHeightForWidth(const QDial* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QDial_SuperHasHeightForWidth(const QDial* self) {
    return self->QDial::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHasHeightForWidth(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_hasheightforwidth_callback = reinterpret_cast<VirtualQDial::QDial_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QDial_PaintEngine(const QDial* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QDial_SuperPaintEngine(const QDial* self) {
    return self->QDial::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QDial_OnPaintEngine(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_paintengine_callback = reinterpret_cast<VirtualQDial::QDial_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QDial_MouseDoubleClickEvent(QDial* self, QMouseEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperMouseDoubleClickEvent(QDial* self, QMouseEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseDoubleClickEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_mousedoubleclickevent_callback = reinterpret_cast<VirtualQDial::QDial_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_KeyReleaseEvent(QDial* self, QKeyEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperKeyReleaseEvent(QDial* self, QKeyEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnKeyReleaseEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_keyreleaseevent_callback = reinterpret_cast<VirtualQDial::QDial_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_FocusInEvent(QDial* self, QFocusEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperFocusInEvent(QDial* self, QFocusEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusInEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_focusinevent_callback = reinterpret_cast<VirtualQDial::QDial_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_FocusOutEvent(QDial* self, QFocusEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperFocusOutEvent(QDial* self, QFocusEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusOutEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_focusoutevent_callback = reinterpret_cast<VirtualQDial::QDial_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_EnterEvent(QDial* self, QEnterEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperEnterEvent(QDial* self, QEnterEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEnterEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_enterevent_callback = reinterpret_cast<VirtualQDial::QDial_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_LeaveEvent(QDial* self, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperLeaveEvent(QDial* self, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnLeaveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_leaveevent_callback = reinterpret_cast<VirtualQDial::QDial_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_MoveEvent(QDial* self, QMoveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperMoveEvent(QDial* self, QMoveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMoveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_moveevent_callback = reinterpret_cast<VirtualQDial::QDial_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_CloseEvent(QDial* self, QCloseEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperCloseEvent(QDial* self, QCloseEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCloseEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_closeevent_callback = reinterpret_cast<VirtualQDial::QDial_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_ContextMenuEvent(QDial* self, QContextMenuEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperContextMenuEvent(QDial* self, QContextMenuEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnContextMenuEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_contextmenuevent_callback = reinterpret_cast<VirtualQDial::QDial_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_TabletEvent(QDial* self, QTabletEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperTabletEvent(QDial* self, QTabletEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnTabletEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_tabletevent_callback = reinterpret_cast<VirtualQDial::QDial_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_ActionEvent(QDial* self, QActionEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperActionEvent(QDial* self, QActionEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnActionEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_actionevent_callback = reinterpret_cast<VirtualQDial::QDial_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_DragEnterEvent(QDial* self, QDragEnterEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperDragEnterEvent(QDial* self, QDragEnterEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragEnterEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_dragenterevent_callback = reinterpret_cast<VirtualQDial::QDial_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_DragMoveEvent(QDial* self, QDragMoveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperDragMoveEvent(QDial* self, QDragMoveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragMoveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_dragmoveevent_callback = reinterpret_cast<VirtualQDial::QDial_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_DragLeaveEvent(QDial* self, QDragLeaveEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperDragLeaveEvent(QDial* self, QDragLeaveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragLeaveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_dragleaveevent_callback = reinterpret_cast<VirtualQDial::QDial_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_DropEvent(QDial* self, QDropEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperDropEvent(QDial* self, QDropEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDropEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_dropevent_callback = reinterpret_cast<VirtualQDial::QDial_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_ShowEvent(QDial* self, QShowEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperShowEvent(QDial* self, QShowEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnShowEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_showevent_callback = reinterpret_cast<VirtualQDial::QDial_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_HideEvent(QDial* self, QHideEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperHideEvent(QDial* self, QHideEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHideEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_hideevent_callback = reinterpret_cast<VirtualQDial::QDial_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QDial_NativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QDial::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDial_SuperNativeEvent(QDial* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->QDial::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QDial::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnNativeEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_nativeevent_callback = reinterpret_cast<VirtualQDial::QDial_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QDial_Metric(const QDial* self, int param1) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial) {
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QDial::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QDial_SuperMetric(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->QDial::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QDial::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMetric(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_metric_callback = reinterpret_cast<VirtualQDial::QDial_Metric_Callback>(slot);
}

// Derived class handler implementation
void QDial_InitPainter(const QDial* self, QPainter* painter) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial) {
        vqdial->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QDial::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperInitPainter(const QDial* self, QPainter* painter) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->QDial::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QDial::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInitPainter(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_initpainter_callback = reinterpret_cast<VirtualQDial::QDial_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QDial_Redirected(const QDial* self, QPoint* offset) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial) {
        return vqdial->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QDial::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QDial_SuperRedirected(const QDial* self, QPoint* offset) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->QDial::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QDial::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnRedirected(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_redirected_callback = reinterpret_cast<VirtualQDial::QDial_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QDial_SharedPainter(const QDial* self) {
    auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self));
    if (vqdial) {
        return vqdial->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QDial::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QDial_SuperSharedPainter(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->QDial::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QDial::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSharedPainter(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_sharedpainter_callback = reinterpret_cast<VirtualQDial::QDial_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QDial_InputMethodEvent(QDial* self, QInputMethodEvent* param1) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QDial::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperInputMethodEvent(QDial* self, QInputMethodEvent* param1) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QDial::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInputMethodEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_inputmethodevent_callback = reinterpret_cast<VirtualQDial::QDial_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QDial_InputMethodQuery(const QDial* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QDial_SuperInputMethodQuery(const QDial* self, int param1) {
    return new QVariant(self->QDial::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInputMethodQuery(QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self)))
        vqdial->qdial_inputmethodquery_callback = reinterpret_cast<VirtualQDial::QDial_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QDial_FocusNextPrevChild(QDial* self, bool next) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        return vqdial->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QDial::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QDial_SuperFocusNextPrevChild(QDial* self, bool next) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->QDial::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QDial::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusNextPrevChild(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_focusnextprevchild_callback = reinterpret_cast<VirtualQDial::QDial_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QDial_EventFilter(QDial* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDial_SuperEventFilter(QDial* self, QObject* watched, QEvent* event) {
    return self->QDial::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEventFilter(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_eventfilter_callback = reinterpret_cast<VirtualQDial::QDial_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDial_ChildEvent(QDial* self, QChildEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperChildEvent(QDial* self, QChildEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnChildEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_childevent_callback = reinterpret_cast<VirtualQDial::QDial_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_CustomEvent(QDial* self, QEvent* event) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDial::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperCustomEvent(QDial* self, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDial::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCustomEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_customevent_callback = reinterpret_cast<VirtualQDial::QDial_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDial_ConnectNotify(QDial* self, const QMetaMethod* signal) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDial::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperConnectNotify(QDial* self, const QMetaMethod* signal) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDial::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnConnectNotify(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_connectnotify_callback = reinterpret_cast<VirtualQDial::QDial_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDial_DisconnectNotify(QDial* self, const QMetaMethod* signal) {
    auto* vqdial = dynamic_cast<VirtualQDial*>(self);
    if (vqdial) {
        vqdial->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDial::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDial_SuperDisconnectNotify(QDial* self, const QMetaMethod* signal) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->QDial::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDial::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDisconnectNotify(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self))
        vqdial->qdial_disconnectnotify_callback = reinterpret_cast<VirtualQDial::QDial_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QDial_SetRepeatAction(QDial* self, int action) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->VirtualQDial::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method QDial::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int QDial_RepeatAction(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return static_cast<int>(vqdial->VirtualQDial::repeatAction());
    } else
        qFatal("Error: Protected method QDial::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void QDial_UpdateMicroFocus(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->VirtualQDial::updateMicroFocus();
    } else
        qFatal("Error: Protected method QDial::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QDial_Create(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->VirtualQDial::create();
    } else
        qFatal("Error: Protected method QDial::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QDial_Destroy(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->VirtualQDial::destroy();
    } else
        qFatal("Error: Protected method QDial::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDial_FocusNextChild(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->VirtualQDial::focusNextChild();
    } else
        qFatal("Error: Protected method QDial::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDial_FocusPreviousChild(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->VirtualQDial::focusPreviousChild();
    } else
        qFatal("Error: Protected method QDial::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QDial_Sender(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->VirtualQDial::sender();
    } else
        qFatal("Error: Protected method QDial::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDial_SenderSignalIndex(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->VirtualQDial::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDial::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDial_Receivers(const QDial* self, const char* signal) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->VirtualQDial::receivers(signal);
    } else
        qFatal("Error: Protected method QDial::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDial_IsSignalConnected(const QDial* self, const QMetaMethod* signal) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->VirtualQDial::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDial::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QDial_GetDecodedMetricF(const QDial* self, int metricA, int metricB) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->VirtualQDial::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QDial::getDecodedMetricF called without a directly constructed type");
}

void QDial_Delete(QDial* self) {
    delete self;
}
