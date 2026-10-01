#include <KColorButton>
#include <QAbstractButton>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcolorbutton.h>
#include "libkcolorbutton.h"
#include "libkcolorbutton.hxx"

KColorButton* KColorButton_new(QWidget* parent) {
    return new VirtualKColorButton(parent);
}

KColorButton* KColorButton_new2() {
    return new VirtualKColorButton();
}

KColorButton* KColorButton_new3(const QColor* c) {
    return new VirtualKColorButton(*c);
}

KColorButton* KColorButton_new4(const QColor* c, const QColor* defaultColor) {
    return new VirtualKColorButton(*c, *defaultColor);
}

KColorButton* KColorButton_new5(const QColor* c, QWidget* parent) {
    return new VirtualKColorButton(*c, parent);
}

KColorButton* KColorButton_new6(const QColor* c, const QColor* defaultColor, QWidget* parent) {
    return new VirtualKColorButton(*c, *defaultColor, parent);
}

QMetaObject* KColorButton_MetaObject(const KColorButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorButton_Metacast(KColorButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorButton_Metacall(KColorButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColorButton_Tr(const char* s) {
    auto _ret = KColorButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* KColorButton_Color(const KColorButton* self) {
    return new QColor(self->color());
}

void KColorButton_SetColor(KColorButton* self, const QColor* c) {
    self->setColor(*c);
}

void KColorButton_SetAlphaChannelEnabled(KColorButton* self, bool alpha) {
    self->setAlphaChannelEnabled(alpha);
}

bool KColorButton_IsAlphaChannelEnabled(const KColorButton* self) {
    return self->isAlphaChannelEnabled();
}

QColor* KColorButton_DefaultColor(const KColorButton* self) {
    return new QColor(self->defaultColor());
}

void KColorButton_SetDefaultColor(KColorButton* self, const QColor* c) {
    self->setDefaultColor(*c);
}

QSize* KColorButton_SizeHint(const KColorButton* self) {
    return new QSize(self->sizeHint());
}

QSize* KColorButton_MinimumSizeHint(const KColorButton* self) {
    return new QSize(self->minimumSizeHint());
}

void KColorButton_Changed(KColorButton* self, const QColor* newColor) {
    self->changed(*newColor);
}

void KColorButton_Connect_Changed(KColorButton* self, intptr_t slot) {
    void (*slotFunc)(KColorButton*, QColor*) = reinterpret_cast<void (*)(KColorButton*, QColor*)>(slot);
    KColorButton::connect(self,
                          static_cast<void (KColorButton::*)(const QColor&)>(&KColorButton::changed),
                          [self, slotFunc](const QColor& newColor) {
                              const QColor& newColor_ret = newColor;
                              // Cast returned reference into pointer
                              QColor* sigval1 = const_cast<QColor*>(&newColor_ret);
                              slotFunc(self, sigval1);
                          });
}

void KColorButton_PaintEvent(KColorButton* self, QPaintEvent* pe) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->paintEvent(pe);
    }
}

void KColorButton_DragEnterEvent(KColorButton* self, QDragEnterEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->dragEnterEvent(param1);
    }
}

void KColorButton_DropEvent(KColorButton* self, QDropEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->dropEvent(param1);
    }
}

void KColorButton_MousePressEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->mousePressEvent(e);
    }
}

void KColorButton_MouseMoveEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->mouseMoveEvent(e);
    }
}

void KColorButton_KeyPressEvent(KColorButton* self, QKeyEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->keyPressEvent(e);
    }
}

libqt_string KColorButton_Tr2(const char* s, const char* c) {
    auto _ret = KColorButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KColorButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColorButton_SuperMetaObject(const KColorButton* self) {
    return (QMetaObject*)self->KColorButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMetaObject(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_metaobject_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColorButton_SuperMetacast(KColorButton* self, const char* param1) {
    return self->KColorButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMetacast(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_metacast_callback = reinterpret_cast<VirtualKColorButton::KColorButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColorButton_SuperMetacall(KColorButton* self, int param1, int param2, void** param3) {
    return self->KColorButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMetacall(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_metacall_callback = reinterpret_cast<VirtualKColorButton::KColorButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KColorButton_SuperSizeHint(const KColorButton* self) {
    return new QSize(self->KColorButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSizeHint(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_sizehint_callback = reinterpret_cast<VirtualKColorButton::KColorButton_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KColorButton_SuperMinimumSizeHint(const KColorButton* self) {
    return new QSize(self->KColorButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMinimumSizeHint(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_minimumsizehint_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KColorButton_SuperPaintEvent(KColorButton* self, QPaintEvent* pe) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::paintEvent(pe);
    } else
        qFatal("Error: Protected virtual method KColorButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnPaintEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_paintevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KColorButton_SuperDragEnterEvent(KColorButton* self, QDragEnterEvent* param1) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KColorButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDragEnterEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_dragenterevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void KColorButton_SuperDropEvent(KColorButton* self, QDropEvent* param1) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method KColorButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDropEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_dropevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_DropEvent_Callback>(slot);
}

// Base class handler implementation
void KColorButton_SuperMousePressEvent(KColorButton* self, QMouseEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMousePressEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_mousepressevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KColorButton_SuperMouseMoveEvent(KColorButton* self, QMouseEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMouseMoveEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_mousemoveevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KColorButton_SuperKeyPressEvent(KColorButton* self, QKeyEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnKeyPressEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_keypressevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
bool KColorButton_Event(KColorButton* self, QEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        return vkcolorbutton->event(e);
    } else {
        qFatal("Error: Protected virtual method KColorButton::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KColorButton_SuperEvent(KColorButton* self, QEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        return vkcolorbutton->KColorButton::event(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_event_callback = reinterpret_cast<VirtualKColorButton::KColorButton_Event_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_FocusInEvent(KColorButton* self, QFocusEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KColorButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperFocusInEvent(KColorButton* self, QFocusEvent* param1) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KColorButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusInEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_focusinevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_FocusOutEvent(KColorButton* self, QFocusEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KColorButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperFocusOutEvent(KColorButton* self, QFocusEvent* param1) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method KColorButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusOutEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_focusoutevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_InitStyleOption(const KColorButton* self, QStyleOptionButton* option) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton) {
        vkcolorbutton->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KColorButton::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperInitStyleOption(const KColorButton* self, QStyleOptionButton* option) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        vkcolorbutton->KColorButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KColorButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInitStyleOption(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_initstyleoption_callback = reinterpret_cast<VirtualKColorButton::KColorButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
bool KColorButton_HitButton(const KColorButton* self, const QPoint* pos) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton) {
        return vkcolorbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method KColorButton::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool KColorButton_SuperHitButton(const KColorButton* self, const QPoint* pos) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->KColorButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method KColorButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHitButton(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_hitbutton_callback = reinterpret_cast<VirtualKColorButton::KColorButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_CheckStateSet(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method KColorButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperCheckStateSet(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method KColorButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCheckStateSet(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_checkstateset_callback = reinterpret_cast<VirtualKColorButton::KColorButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_NextCheckState(KColorButton* self) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method KColorButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperNextCheckState(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method KColorButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnNextCheckState(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_nextcheckstate_callback = reinterpret_cast<VirtualKColorButton::KColorButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_KeyReleaseEvent(KColorButton* self, QKeyEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperKeyReleaseEvent(KColorButton* self, QKeyEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnKeyReleaseEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_keyreleaseevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_MouseReleaseEvent(KColorButton* self, QMouseEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperMouseReleaseEvent(KColorButton* self, QMouseEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMouseReleaseEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_mousereleaseevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ChangeEvent(KColorButton* self, QEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperChangeEvent(KColorButton* self, QEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnChangeEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_changeevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_TimerEvent(KColorButton* self, QTimerEvent* e) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperTimerEvent(KColorButton* self, QTimerEvent* e) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnTimerEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_timerevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int KColorButton_DevType(const KColorButton* self) {
    return self->devType();
}

// Base class handler implementation
int KColorButton_SuperDevType(const KColorButton* self) {
    return self->KColorButton::devType();
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDevType(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_devtype_callback = reinterpret_cast<VirtualKColorButton::KColorButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_SetVisible(KColorButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KColorButton_SuperSetVisible(KColorButton* self, bool visible) {
    self->KColorButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSetVisible(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_setvisible_callback = reinterpret_cast<VirtualKColorButton::KColorButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KColorButton_HeightForWidth(const KColorButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KColorButton_SuperHeightForWidth(const KColorButton* self, int param1) {
    return self->KColorButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHeightForWidth(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_heightforwidth_callback = reinterpret_cast<VirtualKColorButton::KColorButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KColorButton_HasHeightForWidth(const KColorButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KColorButton_SuperHasHeightForWidth(const KColorButton* self) {
    return self->KColorButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHasHeightForWidth(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_hasheightforwidth_callback = reinterpret_cast<VirtualKColorButton::KColorButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KColorButton_PaintEngine(const KColorButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KColorButton_SuperPaintEngine(const KColorButton* self) {
    return self->KColorButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnPaintEngine(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_paintengine_callback = reinterpret_cast<VirtualKColorButton::KColorButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_MouseDoubleClickEvent(KColorButton* self, QMouseEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperMouseDoubleClickEvent(KColorButton* self, QMouseEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMouseDoubleClickEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_WheelEvent(KColorButton* self, QWheelEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperWheelEvent(KColorButton* self, QWheelEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnWheelEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_wheelevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_EnterEvent(KColorButton* self, QEnterEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperEnterEvent(KColorButton* self, QEnterEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnEnterEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_enterevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_LeaveEvent(KColorButton* self, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperLeaveEvent(KColorButton* self, QEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnLeaveEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_leaveevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_MoveEvent(KColorButton* self, QMoveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperMoveEvent(KColorButton* self, QMoveEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMoveEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_moveevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ResizeEvent(KColorButton* self, QResizeEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperResizeEvent(KColorButton* self, QResizeEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnResizeEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_resizeevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_CloseEvent(KColorButton* self, QCloseEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperCloseEvent(KColorButton* self, QCloseEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCloseEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_closeevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ContextMenuEvent(KColorButton* self, QContextMenuEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperContextMenuEvent(KColorButton* self, QContextMenuEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnContextMenuEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_contextmenuevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_TabletEvent(KColorButton* self, QTabletEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperTabletEvent(KColorButton* self, QTabletEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnTabletEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_tabletevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ActionEvent(KColorButton* self, QActionEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperActionEvent(KColorButton* self, QActionEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnActionEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_actionevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_DragMoveEvent(KColorButton* self, QDragMoveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperDragMoveEvent(KColorButton* self, QDragMoveEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDragMoveEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_dragmoveevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_DragLeaveEvent(KColorButton* self, QDragLeaveEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperDragLeaveEvent(KColorButton* self, QDragLeaveEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDragLeaveEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_dragleaveevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ShowEvent(KColorButton* self, QShowEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperShowEvent(KColorButton* self, QShowEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnShowEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_showevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_HideEvent(KColorButton* self, QHideEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperHideEvent(KColorButton* self, QHideEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnHideEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_hideevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KColorButton_NativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        return vkcolorbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KColorButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KColorButton_SuperNativeEvent(KColorButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        return vkcolorbutton->KColorButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KColorButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnNativeEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_nativeevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KColorButton_Metric(const KColorButton* self, int param1) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton) {
        return vkcolorbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KColorButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KColorButton_SuperMetric(const KColorButton* self, int param1) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->KColorButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KColorButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnMetric(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_metric_callback = reinterpret_cast<VirtualKColorButton::KColorButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_InitPainter(const KColorButton* self, QPainter* painter) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton) {
        vkcolorbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KColorButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperInitPainter(const KColorButton* self, QPainter* painter) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        vkcolorbutton->KColorButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KColorButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInitPainter(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_initpainter_callback = reinterpret_cast<VirtualKColorButton::KColorButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KColorButton_Redirected(const KColorButton* self, QPoint* offset) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton) {
        return vkcolorbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KColorButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KColorButton_SuperRedirected(const KColorButton* self, QPoint* offset) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->KColorButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KColorButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnRedirected(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_redirected_callback = reinterpret_cast<VirtualKColorButton::KColorButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KColorButton_SharedPainter(const KColorButton* self) {
    auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self));
    if (vkcolorbutton) {
        return vkcolorbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KColorButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KColorButton_SuperSharedPainter(const KColorButton* self) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->KColorButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KColorButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnSharedPainter(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_sharedpainter_callback = reinterpret_cast<VirtualKColorButton::KColorButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_InputMethodEvent(KColorButton* self, QInputMethodEvent* param1) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KColorButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperInputMethodEvent(KColorButton* self, QInputMethodEvent* param1) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KColorButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInputMethodEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_inputmethodevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KColorButton_InputMethodQuery(const KColorButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KColorButton_SuperInputMethodQuery(const KColorButton* self, int param1) {
    return new QVariant(self->KColorButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnInputMethodQuery(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self)))
        vkcolorbutton->kcolorbutton_inputmethodquery_callback = reinterpret_cast<VirtualKColorButton::KColorButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KColorButton_FocusNextPrevChild(KColorButton* self, bool next) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        return vkcolorbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KColorButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KColorButton_SuperFocusNextPrevChild(KColorButton* self, bool next) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        return vkcolorbutton->KColorButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KColorButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnFocusNextPrevChild(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_focusnextprevchild_callback = reinterpret_cast<VirtualKColorButton::KColorButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KColorButton_EventFilter(KColorButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KColorButton_SuperEventFilter(KColorButton* self, QObject* watched, QEvent* event) {
    return self->KColorButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnEventFilter(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_eventfilter_callback = reinterpret_cast<VirtualKColorButton::KColorButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ChildEvent(KColorButton* self, QChildEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperChildEvent(KColorButton* self, QChildEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnChildEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_childevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_CustomEvent(KColorButton* self, QEvent* event) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperCustomEvent(KColorButton* self, QEvent* event) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnCustomEvent(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_customevent_callback = reinterpret_cast<VirtualKColorButton::KColorButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_ConnectNotify(KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperConnectNotify(KColorButton* self, const QMetaMethod* signal) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnConnectNotify(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_connectnotify_callback = reinterpret_cast<VirtualKColorButton::KColorButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColorButton_DisconnectNotify(KColorButton* self, const QMetaMethod* signal) {
    auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self);
    if (vkcolorbutton) {
        vkcolorbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorButton_SuperDisconnectNotify(KColorButton* self, const QMetaMethod* signal) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->KColorButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorButton_OnDisconnectNotify(KColorButton* self, intptr_t slot) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self))
        vkcolorbutton->kcolorbutton_disconnectnotify_callback = reinterpret_cast<VirtualKColorButton::KColorButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KColorButton_UpdateMicroFocus(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->VirtualKColorButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KColorButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorButton_Create(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->VirtualKColorButton::create();
    } else
        qFatal("Error: Protected method KColorButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorButton_Destroy(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        vkcolorbutton->VirtualKColorButton::destroy();
    } else
        qFatal("Error: Protected method KColorButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorButton_FocusNextChild(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        return vkcolorbutton->VirtualKColorButton::focusNextChild();
    } else
        qFatal("Error: Protected method KColorButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorButton_FocusPreviousChild(KColorButton* self) {
    if (auto* vkcolorbutton = dynamic_cast<VirtualKColorButton*>(self)) {
        return vkcolorbutton->VirtualKColorButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KColorButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KColorButton_Sender(const KColorButton* self) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->VirtualKColorButton::sender();
    } else
        qFatal("Error: Protected method KColorButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorButton_SenderSignalIndex(const KColorButton* self) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->VirtualKColorButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColorButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorButton_Receivers(const KColorButton* self, const char* signal) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->VirtualKColorButton::receivers(signal);
    } else
        qFatal("Error: Protected method KColorButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorButton_IsSignalConnected(const KColorButton* self, const QMetaMethod* signal) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->VirtualKColorButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColorButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KColorButton_GetDecodedMetricF(const KColorButton* self, int metricA, int metricB) {
    if (auto* vkcolorbutton = const_cast<VirtualKColorButton*>(dynamic_cast<const VirtualKColorButton*>(self))) {
        return vkcolorbutton->VirtualKColorButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KColorButton::getDecodedMetricF called without a directly constructed type");
}

void KColorButton_Delete(KColorButton* self) {
    delete self;
}
