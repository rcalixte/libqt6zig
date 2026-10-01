#include <KLed>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kled.h>
#include "libkled.h"
#include "libkled.hxx"

KLed* KLed_new(QWidget* parent) {
    return new VirtualKLed(parent);
}

KLed* KLed_new2() {
    return new VirtualKLed();
}

KLed* KLed_new3(const QColor* color) {
    return new VirtualKLed(*color);
}

KLed* KLed_new4(const QColor* color, int state, int look, int shape) {
    return new VirtualKLed(*color, static_cast<KLed::State>(state), static_cast<KLed::Look>(look), static_cast<KLed::Shape>(shape));
}

KLed* KLed_new5(const QColor* color, QWidget* parent) {
    return new VirtualKLed(*color, parent);
}

KLed* KLed_new6(const QColor* color, int state, int look, int shape, QWidget* parent) {
    return new VirtualKLed(*color, static_cast<KLed::State>(state), static_cast<KLed::Look>(look), static_cast<KLed::Shape>(shape), parent);
}

QMetaObject* KLed_MetaObject(const KLed* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLed_Metacast(KLed* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLed_Metacall(KLed* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KLed_Tr(const char* s) {
    auto _ret = KLed::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* KLed_Color(const KLed* self) {
    return new QColor(self->color());
}

int KLed_State(const KLed* self) {
    return static_cast<int>(self->state());
}

int KLed_Look(const KLed* self) {
    return static_cast<int>(self->look());
}

int KLed_Shape(const KLed* self) {
    return static_cast<int>(self->shape());
}

int KLed_DarkFactor(const KLed* self) {
    return self->darkFactor();
}

void KLed_SetColor(KLed* self, const QColor* color) {
    self->setColor(*color);
}

void KLed_SetState(KLed* self, int state) {
    self->setState(static_cast<KLed::State>(state));
}

void KLed_SetLook(KLed* self, int look) {
    self->setLook(static_cast<KLed::Look>(look));
}

void KLed_SetShape(KLed* self, int shape) {
    self->setShape(static_cast<KLed::Shape>(shape));
}

void KLed_SetDarkFactor(KLed* self, int darkFactor) {
    self->setDarkFactor(static_cast<int>(darkFactor));
}

QSize* KLed_SizeHint(const KLed* self) {
    return new QSize(self->sizeHint());
}

QSize* KLed_MinimumSizeHint(const KLed* self) {
    return new QSize(self->minimumSizeHint());
}

void KLed_Toggle(KLed* self) {
    self->toggle();
}

void KLed_On(KLed* self) {
    self->on();
}

void KLed_Off(KLed* self) {
    self->off();
}

void KLed_PaintEvent(KLed* self, QPaintEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->paintEvent(param1);
    }
}

void KLed_ResizeEvent(KLed* self, QResizeEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->resizeEvent(param1);
    }
}

libqt_string KLed_Tr2(const char* s, const char* c) {
    auto _ret = KLed::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLed_Tr3(const char* s, const char* c, int n) {
    auto _ret = KLed::tr(s, c, static_cast<int>(n));
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
QMetaObject* KLed_SuperMetaObject(const KLed* self) {
    return (QMetaObject*)self->KLed::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMetaObject(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_metaobject_callback = reinterpret_cast<VirtualKLed::KLed_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KLed_SuperMetacast(KLed* self, const char* param1) {
    return self->KLed::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMetacast(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_metacast_callback = reinterpret_cast<VirtualKLed::KLed_Metacast_Callback>(slot);
}

// Base class handler implementation
int KLed_SuperMetacall(KLed* self, int param1, int param2, void** param3) {
    return self->KLed::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMetacall(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_metacall_callback = reinterpret_cast<VirtualKLed::KLed_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KLed_SuperSizeHint(const KLed* self) {
    return new QSize(self->KLed::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSizeHint(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_sizehint_callback = reinterpret_cast<VirtualKLed::KLed_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KLed_SuperMinimumSizeHint(const KLed* self) {
    return new QSize(self->KLed::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMinimumSizeHint(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_minimumsizehint_callback = reinterpret_cast<VirtualKLed::KLed_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KLed_SuperPaintEvent(KLed* self, QPaintEvent* param1) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLed::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnPaintEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_paintevent_callback = reinterpret_cast<VirtualKLed::KLed_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KLed_SuperResizeEvent(KLed* self, QResizeEvent* param1) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLed::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnResizeEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_resizeevent_callback = reinterpret_cast<VirtualKLed::KLed_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
int KLed_DevType(const KLed* self) {
    return self->devType();
}

// Base class handler implementation
int KLed_SuperDevType(const KLed* self) {
    return self->KLed::devType();
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDevType(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_devtype_callback = reinterpret_cast<VirtualKLed::KLed_DevType_Callback>(slot);
}

// Derived class handler implementation
void KLed_SetVisible(KLed* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KLed_SuperSetVisible(KLed* self, bool visible) {
    self->KLed::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSetVisible(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_setvisible_callback = reinterpret_cast<VirtualKLed::KLed_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KLed_HeightForWidth(const KLed* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KLed_SuperHeightForWidth(const KLed* self, int param1) {
    return self->KLed::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KLed_OnHeightForWidth(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_heightforwidth_callback = reinterpret_cast<VirtualKLed::KLed_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KLed_HasHeightForWidth(const KLed* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KLed_SuperHasHeightForWidth(const KLed* self) {
    return self->KLed::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KLed_OnHasHeightForWidth(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_hasheightforwidth_callback = reinterpret_cast<VirtualKLed::KLed_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KLed_PaintEngine(const KLed* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KLed_SuperPaintEngine(const KLed* self) {
    return self->KLed::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KLed_OnPaintEngine(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_paintengine_callback = reinterpret_cast<VirtualKLed::KLed_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KLed_Event(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        return vkled->event(event);
    } else {
        qFatal("Error: Protected virtual method KLed::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLed_SuperEvent(KLed* self, QEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        return vkled->KLed::event(event);
    } else
        qFatal("Error: Protected virtual method KLed::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_event_callback = reinterpret_cast<VirtualKLed::KLed_Event_Callback>(slot);
}

// Derived class handler implementation
void KLed_MousePressEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperMousePressEvent(KLed* self, QMouseEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMousePressEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_mousepressevent_callback = reinterpret_cast<VirtualKLed::KLed_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_MouseReleaseEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperMouseReleaseEvent(KLed* self, QMouseEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMouseReleaseEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_mousereleaseevent_callback = reinterpret_cast<VirtualKLed::KLed_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_MouseDoubleClickEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperMouseDoubleClickEvent(KLed* self, QMouseEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMouseDoubleClickEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_mousedoubleclickevent_callback = reinterpret_cast<VirtualKLed::KLed_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_MouseMoveEvent(KLed* self, QMouseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperMouseMoveEvent(KLed* self, QMouseEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMouseMoveEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_mousemoveevent_callback = reinterpret_cast<VirtualKLed::KLed_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_WheelEvent(KLed* self, QWheelEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperWheelEvent(KLed* self, QWheelEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnWheelEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_wheelevent_callback = reinterpret_cast<VirtualKLed::KLed_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_KeyPressEvent(KLed* self, QKeyEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperKeyPressEvent(KLed* self, QKeyEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnKeyPressEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_keypressevent_callback = reinterpret_cast<VirtualKLed::KLed_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_KeyReleaseEvent(KLed* self, QKeyEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperKeyReleaseEvent(KLed* self, QKeyEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnKeyReleaseEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_keyreleaseevent_callback = reinterpret_cast<VirtualKLed::KLed_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_FocusInEvent(KLed* self, QFocusEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperFocusInEvent(KLed* self, QFocusEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusInEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_focusinevent_callback = reinterpret_cast<VirtualKLed::KLed_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_FocusOutEvent(KLed* self, QFocusEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperFocusOutEvent(KLed* self, QFocusEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusOutEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_focusoutevent_callback = reinterpret_cast<VirtualKLed::KLed_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_EnterEvent(KLed* self, QEnterEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperEnterEvent(KLed* self, QEnterEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnEnterEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_enterevent_callback = reinterpret_cast<VirtualKLed::KLed_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_LeaveEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperLeaveEvent(KLed* self, QEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnLeaveEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_leaveevent_callback = reinterpret_cast<VirtualKLed::KLed_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_MoveEvent(KLed* self, QMoveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperMoveEvent(KLed* self, QMoveEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMoveEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_moveevent_callback = reinterpret_cast<VirtualKLed::KLed_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_CloseEvent(KLed* self, QCloseEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperCloseEvent(KLed* self, QCloseEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnCloseEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_closeevent_callback = reinterpret_cast<VirtualKLed::KLed_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_ContextMenuEvent(KLed* self, QContextMenuEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperContextMenuEvent(KLed* self, QContextMenuEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnContextMenuEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_contextmenuevent_callback = reinterpret_cast<VirtualKLed::KLed_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_TabletEvent(KLed* self, QTabletEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperTabletEvent(KLed* self, QTabletEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnTabletEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_tabletevent_callback = reinterpret_cast<VirtualKLed::KLed_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_ActionEvent(KLed* self, QActionEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperActionEvent(KLed* self, QActionEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnActionEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_actionevent_callback = reinterpret_cast<VirtualKLed::KLed_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_DragEnterEvent(KLed* self, QDragEnterEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperDragEnterEvent(KLed* self, QDragEnterEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDragEnterEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_dragenterevent_callback = reinterpret_cast<VirtualKLed::KLed_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_DragMoveEvent(KLed* self, QDragMoveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperDragMoveEvent(KLed* self, QDragMoveEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDragMoveEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_dragmoveevent_callback = reinterpret_cast<VirtualKLed::KLed_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_DragLeaveEvent(KLed* self, QDragLeaveEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperDragLeaveEvent(KLed* self, QDragLeaveEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDragLeaveEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_dragleaveevent_callback = reinterpret_cast<VirtualKLed::KLed_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_DropEvent(KLed* self, QDropEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperDropEvent(KLed* self, QDropEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDropEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_dropevent_callback = reinterpret_cast<VirtualKLed::KLed_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_ShowEvent(KLed* self, QShowEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperShowEvent(KLed* self, QShowEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnShowEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_showevent_callback = reinterpret_cast<VirtualKLed::KLed_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_HideEvent(KLed* self, QHideEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperHideEvent(KLed* self, QHideEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnHideEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_hideevent_callback = reinterpret_cast<VirtualKLed::KLed_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KLed_NativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        return vkled->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KLed::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLed_SuperNativeEvent(KLed* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        return vkled->KLed::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KLed::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnNativeEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_nativeevent_callback = reinterpret_cast<VirtualKLed::KLed_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_ChangeEvent(KLed* self, QEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLed::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperChangeEvent(KLed* self, QEvent* param1) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLed::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnChangeEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_changeevent_callback = reinterpret_cast<VirtualKLed::KLed_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KLed_Metric(const KLed* self, int param1) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled) {
        return vkled->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KLed::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KLed_SuperMetric(const KLed* self, int param1) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->KLed::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KLed::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnMetric(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_metric_callback = reinterpret_cast<VirtualKLed::KLed_Metric_Callback>(slot);
}

// Derived class handler implementation
void KLed_InitPainter(const KLed* self, QPainter* painter) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled) {
        vkled->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KLed::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperInitPainter(const KLed* self, QPainter* painter) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        vkled->KLed::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KLed::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnInitPainter(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_initpainter_callback = reinterpret_cast<VirtualKLed::KLed_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KLed_Redirected(const KLed* self, QPoint* offset) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled) {
        return vkled->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KLed::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KLed_SuperRedirected(const KLed* self, QPoint* offset) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->KLed::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KLed::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnRedirected(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_redirected_callback = reinterpret_cast<VirtualKLed::KLed_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KLed_SharedPainter(const KLed* self) {
    auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self));
    if (vkled) {
        return vkled->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KLed::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KLed_SuperSharedPainter(const KLed* self) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->KLed::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KLed::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnSharedPainter(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_sharedpainter_callback = reinterpret_cast<VirtualKLed::KLed_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KLed_InputMethodEvent(KLed* self, QInputMethodEvent* param1) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLed::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperInputMethodEvent(KLed* self, QInputMethodEvent* param1) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLed::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnInputMethodEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_inputmethodevent_callback = reinterpret_cast<VirtualKLed::KLed_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KLed_InputMethodQuery(const KLed* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KLed_SuperInputMethodQuery(const KLed* self, int param1) {
    return new QVariant(self->KLed::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KLed_OnInputMethodQuery(KLed* self, intptr_t slot) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self)))
        vkled->kled_inputmethodquery_callback = reinterpret_cast<VirtualKLed::KLed_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KLed_FocusNextPrevChild(KLed* self, bool next) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        return vkled->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KLed::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLed_SuperFocusNextPrevChild(KLed* self, bool next) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        return vkled->KLed::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KLed::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnFocusNextPrevChild(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_focusnextprevchild_callback = reinterpret_cast<VirtualKLed::KLed_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KLed_EventFilter(KLed* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KLed_SuperEventFilter(KLed* self, QObject* watched, QEvent* event) {
    return self->KLed::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KLed_OnEventFilter(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_eventfilter_callback = reinterpret_cast<VirtualKLed::KLed_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KLed_TimerEvent(KLed* self, QTimerEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperTimerEvent(KLed* self, QTimerEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnTimerEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_timerevent_callback = reinterpret_cast<VirtualKLed::KLed_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_ChildEvent(KLed* self, QChildEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperChildEvent(KLed* self, QChildEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnChildEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_childevent_callback = reinterpret_cast<VirtualKLed::KLed_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_CustomEvent(KLed* self, QEvent* event) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLed::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperCustomEvent(KLed* self, QEvent* event) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KLed::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnCustomEvent(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_customevent_callback = reinterpret_cast<VirtualKLed::KLed_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KLed_ConnectNotify(KLed* self, const QMetaMethod* signal) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLed::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperConnectNotify(KLed* self, const QMetaMethod* signal) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLed::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnConnectNotify(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_connectnotify_callback = reinterpret_cast<VirtualKLed::KLed_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLed_DisconnectNotify(KLed* self, const QMetaMethod* signal) {
    auto* vkled = dynamic_cast<VirtualKLed*>(self);
    if (vkled) {
        vkled->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLed::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLed_SuperDisconnectNotify(KLed* self, const QMetaMethod* signal) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->KLed::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLed::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLed_OnDisconnectNotify(KLed* self, intptr_t slot) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self))
        vkled->kled_disconnectnotify_callback = reinterpret_cast<VirtualKLed::KLed_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KLed_UpdateMicroFocus(KLed* self) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->VirtualKLed::updateMicroFocus();
    } else
        qFatal("Error: Protected method KLed::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KLed_Create(KLed* self) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->VirtualKLed::create();
    } else
        qFatal("Error: Protected method KLed::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KLed_Destroy(KLed* self) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        vkled->VirtualKLed::destroy();
    } else
        qFatal("Error: Protected method KLed::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLed_FocusNextChild(KLed* self) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        return vkled->VirtualKLed::focusNextChild();
    } else
        qFatal("Error: Protected method KLed::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLed_FocusPreviousChild(KLed* self) {
    if (auto* vkled = dynamic_cast<VirtualKLed*>(self)) {
        return vkled->VirtualKLed::focusPreviousChild();
    } else
        qFatal("Error: Protected method KLed::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KLed_Sender(const KLed* self) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->VirtualKLed::sender();
    } else
        qFatal("Error: Protected method KLed::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KLed_SenderSignalIndex(const KLed* self) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->VirtualKLed::senderSignalIndex();
    } else
        qFatal("Error: Protected method KLed::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KLed_Receivers(const KLed* self, const char* signal) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->VirtualKLed::receivers(signal);
    } else
        qFatal("Error: Protected method KLed::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLed_IsSignalConnected(const KLed* self, const QMetaMethod* signal) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->VirtualKLed::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KLed::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KLed_GetDecodedMetricF(const KLed* self, int metricA, int metricB) {
    if (auto* vkled = const_cast<VirtualKLed*>(dynamic_cast<const VirtualKLed*>(self))) {
        return vkled->VirtualKLed::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KLed::getDecodedMetricF called without a directly constructed type");
}

void KLed_Delete(KLed* self) {
    delete self;
}
