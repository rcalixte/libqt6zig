#include <KSeparator>
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
#include <QFrame>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kseparator.h>
#include "libkseparator.h"
#include "libkseparator.hxx"

KSeparator* KSeparator_new(QWidget* parent) {
    return new VirtualKSeparator(parent);
}

KSeparator* KSeparator_new2() {
    return new VirtualKSeparator();
}

KSeparator* KSeparator_new3(int orientation) {
    return new VirtualKSeparator(static_cast<Qt::Orientation>(orientation));
}

KSeparator* KSeparator_new4(QWidget* parent, int f) {
    return new VirtualKSeparator(parent, static_cast<Qt::WindowFlags>(f));
}

KSeparator* KSeparator_new5(int orientation, QWidget* parent) {
    return new VirtualKSeparator(static_cast<Qt::Orientation>(orientation), parent);
}

KSeparator* KSeparator_new6(int orientation, QWidget* parent, int f) {
    return new VirtualKSeparator(static_cast<Qt::Orientation>(orientation), parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* KSeparator_MetaObject(const KSeparator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSeparator_Metacast(KSeparator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSeparator_Metacall(KSeparator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSeparator_Tr(const char* s) {
    auto _ret = KSeparator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KSeparator_Orientation(const KSeparator* self) {
    return static_cast<int>(self->orientation());
}

void KSeparator_SetOrientation(KSeparator* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

libqt_string KSeparator_Tr2(const char* s, const char* c) {
    auto _ret = KSeparator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSeparator_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSeparator::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSeparator_SuperMetaObject(const KSeparator* self) {
    return (QMetaObject*)self->KSeparator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMetaObject(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_metaobject_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSeparator_SuperMetacast(KSeparator* self, const char* param1) {
    return self->KSeparator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMetacast(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_metacast_callback = reinterpret_cast<VirtualKSeparator::KSeparator_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSeparator_SuperMetacall(KSeparator* self, int param1, int param2, void** param3) {
    return self->KSeparator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMetacall(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_metacall_callback = reinterpret_cast<VirtualKSeparator::KSeparator_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* KSeparator_SizeHint(const KSeparator* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KSeparator_SuperSizeHint(const KSeparator* self) {
    return new QSize(self->KSeparator::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSizeHint(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_sizehint_callback = reinterpret_cast<VirtualKSeparator::KSeparator_SizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KSeparator_Event(KSeparator* self, QEvent* e) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        return vkseparator->event(e);
    } else {
        qFatal("Error: Protected virtual method KSeparator::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSeparator_SuperEvent(KSeparator* self, QEvent* e) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        return vkseparator->KSeparator::event(e);
    } else
        qFatal("Error: Protected virtual method KSeparator::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_event_callback = reinterpret_cast<VirtualKSeparator::KSeparator_Event_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_PaintEvent(KSeparator* self, QPaintEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSeparator::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperPaintEvent(KSeparator* self, QPaintEvent* param1) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSeparator::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnPaintEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_paintevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ChangeEvent(KSeparator* self, QEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSeparator::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperChangeEvent(KSeparator* self, QEvent* param1) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSeparator::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnChangeEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_changeevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_InitStyleOption(const KSeparator* self, QStyleOptionFrame* option) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator) {
        vkseparator->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KSeparator::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperInitStyleOption(const KSeparator* self, QStyleOptionFrame* option) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        vkseparator->KSeparator::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KSeparator::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInitStyleOption(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_initstyleoption_callback = reinterpret_cast<VirtualKSeparator::KSeparator_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KSeparator_DevType(const KSeparator* self) {
    return self->devType();
}

// Base class handler implementation
int KSeparator_SuperDevType(const KSeparator* self) {
    return self->KSeparator::devType();
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDevType(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_devtype_callback = reinterpret_cast<VirtualKSeparator::KSeparator_DevType_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_SetVisible(KSeparator* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KSeparator_SuperSetVisible(KSeparator* self, bool visible) {
    self->KSeparator::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSetVisible(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_setvisible_callback = reinterpret_cast<VirtualKSeparator::KSeparator_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KSeparator_MinimumSizeHint(const KSeparator* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KSeparator_SuperMinimumSizeHint(const KSeparator* self) {
    return new QSize(self->KSeparator::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMinimumSizeHint(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_minimumsizehint_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KSeparator_HeightForWidth(const KSeparator* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KSeparator_SuperHeightForWidth(const KSeparator* self, int param1) {
    return self->KSeparator::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnHeightForWidth(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_heightforwidth_callback = reinterpret_cast<VirtualKSeparator::KSeparator_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KSeparator_HasHeightForWidth(const KSeparator* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KSeparator_SuperHasHeightForWidth(const KSeparator* self) {
    return self->KSeparator::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnHasHeightForWidth(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_hasheightforwidth_callback = reinterpret_cast<VirtualKSeparator::KSeparator_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KSeparator_PaintEngine(const KSeparator* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KSeparator_SuperPaintEngine(const KSeparator* self) {
    return self->KSeparator::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnPaintEngine(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_paintengine_callback = reinterpret_cast<VirtualKSeparator::KSeparator_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_MousePressEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperMousePressEvent(KSeparator* self, QMouseEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMousePressEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_mousepressevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_MouseReleaseEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperMouseReleaseEvent(KSeparator* self, QMouseEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMouseReleaseEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_mousereleaseevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_MouseDoubleClickEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperMouseDoubleClickEvent(KSeparator* self, QMouseEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMouseDoubleClickEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_mousedoubleclickevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_MouseMoveEvent(KSeparator* self, QMouseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperMouseMoveEvent(KSeparator* self, QMouseEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMouseMoveEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_mousemoveevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_WheelEvent(KSeparator* self, QWheelEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperWheelEvent(KSeparator* self, QWheelEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnWheelEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_wheelevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_KeyPressEvent(KSeparator* self, QKeyEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperKeyPressEvent(KSeparator* self, QKeyEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnKeyPressEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_keypressevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_KeyReleaseEvent(KSeparator* self, QKeyEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperKeyReleaseEvent(KSeparator* self, QKeyEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnKeyReleaseEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_keyreleaseevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_FocusInEvent(KSeparator* self, QFocusEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperFocusInEvent(KSeparator* self, QFocusEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusInEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_focusinevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_FocusOutEvent(KSeparator* self, QFocusEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperFocusOutEvent(KSeparator* self, QFocusEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusOutEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_focusoutevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_EnterEvent(KSeparator* self, QEnterEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperEnterEvent(KSeparator* self, QEnterEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnEnterEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_enterevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_LeaveEvent(KSeparator* self, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperLeaveEvent(KSeparator* self, QEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnLeaveEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_leaveevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_MoveEvent(KSeparator* self, QMoveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperMoveEvent(KSeparator* self, QMoveEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMoveEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_moveevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ResizeEvent(KSeparator* self, QResizeEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperResizeEvent(KSeparator* self, QResizeEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnResizeEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_resizeevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_CloseEvent(KSeparator* self, QCloseEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperCloseEvent(KSeparator* self, QCloseEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnCloseEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_closeevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ContextMenuEvent(KSeparator* self, QContextMenuEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperContextMenuEvent(KSeparator* self, QContextMenuEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnContextMenuEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_contextmenuevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_TabletEvent(KSeparator* self, QTabletEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperTabletEvent(KSeparator* self, QTabletEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnTabletEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_tabletevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ActionEvent(KSeparator* self, QActionEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperActionEvent(KSeparator* self, QActionEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnActionEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_actionevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_DragEnterEvent(KSeparator* self, QDragEnterEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperDragEnterEvent(KSeparator* self, QDragEnterEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDragEnterEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_dragenterevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_DragMoveEvent(KSeparator* self, QDragMoveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperDragMoveEvent(KSeparator* self, QDragMoveEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDragMoveEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_dragmoveevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_DragLeaveEvent(KSeparator* self, QDragLeaveEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperDragLeaveEvent(KSeparator* self, QDragLeaveEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDragLeaveEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_dragleaveevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_DropEvent(KSeparator* self, QDropEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperDropEvent(KSeparator* self, QDropEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDropEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_dropevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ShowEvent(KSeparator* self, QShowEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperShowEvent(KSeparator* self, QShowEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnShowEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_showevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_HideEvent(KSeparator* self, QHideEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperHideEvent(KSeparator* self, QHideEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnHideEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_hideevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSeparator_NativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        return vkseparator->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KSeparator::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSeparator_SuperNativeEvent(KSeparator* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        return vkseparator->KSeparator::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KSeparator::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnNativeEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_nativeevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSeparator_Metric(const KSeparator* self, int param1) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator) {
        return vkseparator->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KSeparator::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KSeparator_SuperMetric(const KSeparator* self, int param1) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->KSeparator::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KSeparator::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnMetric(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_metric_callback = reinterpret_cast<VirtualKSeparator::KSeparator_Metric_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_InitPainter(const KSeparator* self, QPainter* painter) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator) {
        vkseparator->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KSeparator::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperInitPainter(const KSeparator* self, QPainter* painter) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        vkseparator->KSeparator::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KSeparator::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInitPainter(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_initpainter_callback = reinterpret_cast<VirtualKSeparator::KSeparator_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KSeparator_Redirected(const KSeparator* self, QPoint* offset) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator) {
        return vkseparator->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KSeparator::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KSeparator_SuperRedirected(const KSeparator* self, QPoint* offset) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->KSeparator::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KSeparator::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnRedirected(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_redirected_callback = reinterpret_cast<VirtualKSeparator::KSeparator_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KSeparator_SharedPainter(const KSeparator* self) {
    auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self));
    if (vkseparator) {
        return vkseparator->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KSeparator::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KSeparator_SuperSharedPainter(const KSeparator* self) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->KSeparator::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KSeparator::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnSharedPainter(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_sharedpainter_callback = reinterpret_cast<VirtualKSeparator::KSeparator_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_InputMethodEvent(KSeparator* self, QInputMethodEvent* param1) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSeparator::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperInputMethodEvent(KSeparator* self, QInputMethodEvent* param1) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSeparator::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInputMethodEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_inputmethodevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KSeparator_InputMethodQuery(const KSeparator* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KSeparator_SuperInputMethodQuery(const KSeparator* self, int param1) {
    return new QVariant(self->KSeparator::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnInputMethodQuery(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self)))
        vkseparator->kseparator_inputmethodquery_callback = reinterpret_cast<VirtualKSeparator::KSeparator_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KSeparator_FocusNextPrevChild(KSeparator* self, bool next) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        return vkseparator->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KSeparator::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSeparator_SuperFocusNextPrevChild(KSeparator* self, bool next) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        return vkseparator->KSeparator::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KSeparator::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnFocusNextPrevChild(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_focusnextprevchild_callback = reinterpret_cast<VirtualKSeparator::KSeparator_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KSeparator_EventFilter(KSeparator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSeparator_SuperEventFilter(KSeparator* self, QObject* watched, QEvent* event) {
    return self->KSeparator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnEventFilter(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_eventfilter_callback = reinterpret_cast<VirtualKSeparator::KSeparator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_TimerEvent(KSeparator* self, QTimerEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperTimerEvent(KSeparator* self, QTimerEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnTimerEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_timerevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ChildEvent(KSeparator* self, QChildEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperChildEvent(KSeparator* self, QChildEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnChildEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_childevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_CustomEvent(KSeparator* self, QEvent* event) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSeparator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperCustomEvent(KSeparator* self, QEvent* event) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSeparator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnCustomEvent(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_customevent_callback = reinterpret_cast<VirtualKSeparator::KSeparator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_ConnectNotify(KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSeparator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperConnectNotify(KSeparator* self, const QMetaMethod* signal) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSeparator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnConnectNotify(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_connectnotify_callback = reinterpret_cast<VirtualKSeparator::KSeparator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSeparator_DisconnectNotify(KSeparator* self, const QMetaMethod* signal) {
    auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self);
    if (vkseparator) {
        vkseparator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSeparator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSeparator_SuperDisconnectNotify(KSeparator* self, const QMetaMethod* signal) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->KSeparator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSeparator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSeparator_OnDisconnectNotify(KSeparator* self, intptr_t slot) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self))
        vkseparator->kseparator_disconnectnotify_callback = reinterpret_cast<VirtualKSeparator::KSeparator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSeparator_DrawFrame(KSeparator* self, QPainter* param1) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->VirtualKSeparator::drawFrame(param1);
    } else
        qFatal("Error: Protected method KSeparator::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KSeparator_UpdateMicroFocus(KSeparator* self) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->VirtualKSeparator::updateMicroFocus();
    } else
        qFatal("Error: Protected method KSeparator::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KSeparator_Create(KSeparator* self) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->VirtualKSeparator::create();
    } else
        qFatal("Error: Protected method KSeparator::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KSeparator_Destroy(KSeparator* self) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        vkseparator->VirtualKSeparator::destroy();
    } else
        qFatal("Error: Protected method KSeparator::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSeparator_FocusNextChild(KSeparator* self) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        return vkseparator->VirtualKSeparator::focusNextChild();
    } else
        qFatal("Error: Protected method KSeparator::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSeparator_FocusPreviousChild(KSeparator* self) {
    if (auto* vkseparator = dynamic_cast<VirtualKSeparator*>(self)) {
        return vkseparator->VirtualKSeparator::focusPreviousChild();
    } else
        qFatal("Error: Protected method KSeparator::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSeparator_Sender(const KSeparator* self) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->VirtualKSeparator::sender();
    } else
        qFatal("Error: Protected method KSeparator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSeparator_SenderSignalIndex(const KSeparator* self) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->VirtualKSeparator::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSeparator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSeparator_Receivers(const KSeparator* self, const char* signal) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->VirtualKSeparator::receivers(signal);
    } else
        qFatal("Error: Protected method KSeparator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSeparator_IsSignalConnected(const KSeparator* self, const QMetaMethod* signal) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->VirtualKSeparator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSeparator::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KSeparator_GetDecodedMetricF(const KSeparator* self, int metricA, int metricB) {
    if (auto* vkseparator = const_cast<VirtualKSeparator*>(dynamic_cast<const VirtualKSeparator*>(self))) {
        return vkseparator->VirtualKSeparator::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KSeparator::getDecodedMetricF called without a directly constructed type");
}

void KSeparator_Delete(KSeparator* self) {
    delete self;
}
