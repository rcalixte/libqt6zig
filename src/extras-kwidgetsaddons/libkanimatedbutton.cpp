#include <KAnimatedButton>
#include <QAbstractButton>
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
#include <QString>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kanimatedbutton.h>
#include "libkanimatedbutton.h"
#include "libkanimatedbutton.hxx"

KAnimatedButton* KAnimatedButton_new(QWidget* parent) {
    return new VirtualKAnimatedButton(parent);
}

KAnimatedButton* KAnimatedButton_new2() {
    return new VirtualKAnimatedButton();
}

QMetaObject* KAnimatedButton_MetaObject(const KAnimatedButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAnimatedButton_Metacast(KAnimatedButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAnimatedButton_Metacall(KAnimatedButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAnimatedButton_Tr(const char* s) {
    auto _ret = KAnimatedButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAnimatedButton_AnimationPath(const KAnimatedButton* self) {
    auto _ret = self->animationPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KAnimatedButton_SetAnimationPath(KAnimatedButton* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setAnimationPath(path_QString);
}

void KAnimatedButton_Start(KAnimatedButton* self) {
    self->start();
}

void KAnimatedButton_Stop(KAnimatedButton* self) {
    self->stop();
}

libqt_string KAnimatedButton_Tr2(const char* s, const char* c) {
    auto _ret = KAnimatedButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAnimatedButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAnimatedButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* KAnimatedButton_SuperMetaObject(const KAnimatedButton* self) {
    return (QMetaObject*)self->KAnimatedButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMetaObject(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_metaobject_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAnimatedButton_SuperMetacast(KAnimatedButton* self, const char* param1) {
    return self->KAnimatedButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMetacast(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_metacast_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAnimatedButton_SuperMetacall(KAnimatedButton* self, int param1, int param2, void** param3) {
    return self->KAnimatedButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMetacall(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_metacall_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Metacall_Callback>(slot);
}

// Derived class handler implementation
QSize* KAnimatedButton_SizeHint(const KAnimatedButton* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KAnimatedButton_SuperSizeHint(const KAnimatedButton* self) {
    return new QSize(self->KAnimatedButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSizeHint(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_sizehint_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KAnimatedButton_MinimumSizeHint(const KAnimatedButton* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KAnimatedButton_SuperMinimumSizeHint(const KAnimatedButton* self) {
    return new QSize(self->KAnimatedButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMinimumSizeHint(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_minimumsizehint_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KAnimatedButton_Event(KAnimatedButton* self, QEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        return vkanimatedbutton->event(e);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAnimatedButton_SuperEvent(KAnimatedButton* self, QEvent* e) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        return vkanimatedbutton->KAnimatedButton::event(e);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_event_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Event_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_MousePressEvent(KAnimatedButton* self, QMouseEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperMousePressEvent(KAnimatedButton* self, QMouseEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMousePressEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_mousepressevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_MouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperMouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMouseReleaseEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_mousereleaseevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_PaintEvent(KAnimatedButton* self, QPaintEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperPaintEvent(KAnimatedButton* self, QPaintEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnPaintEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_paintevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ActionEvent(KAnimatedButton* self, QActionEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->actionEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperActionEvent(KAnimatedButton* self, QActionEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnActionEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_actionevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_EnterEvent(KAnimatedButton* self, QEnterEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->enterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperEnterEvent(KAnimatedButton* self, QEnterEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnEnterEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_enterevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_LeaveEvent(KAnimatedButton* self, QEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->leaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperLeaveEvent(KAnimatedButton* self, QEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnLeaveEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_leaveevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_TimerEvent(KAnimatedButton* self, QTimerEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperTimerEvent(KAnimatedButton* self, QTimerEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnTimerEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_timerevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ChangeEvent(KAnimatedButton* self, QEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperChangeEvent(KAnimatedButton* self, QEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnChangeEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_changeevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAnimatedButton_HitButton(const KAnimatedButton* self, const QPoint* pos) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton) {
        return vkanimatedbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAnimatedButton_SuperHitButton(const KAnimatedButton* self, const QPoint* pos) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->KAnimatedButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHitButton(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_hitbutton_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_CheckStateSet(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperCheckStateSet(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCheckStateSet(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_checkstateset_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_NextCheckState(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperNextCheckState(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnNextCheckState(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_nextcheckstate_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_InitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton) {
        vkanimatedbutton->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperInitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        vkanimatedbutton->KAnimatedButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInitStyleOption(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_initstyleoption_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_KeyPressEvent(KAnimatedButton* self, QKeyEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperKeyPressEvent(KAnimatedButton* self, QKeyEvent* e) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnKeyPressEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_keypressevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_KeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperKeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnKeyReleaseEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_keyreleaseevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_MouseMoveEvent(KAnimatedButton* self, QMouseEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperMouseMoveEvent(KAnimatedButton* self, QMouseEvent* e) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMouseMoveEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_mousemoveevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_FocusInEvent(KAnimatedButton* self, QFocusEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperFocusInEvent(KAnimatedButton* self, QFocusEvent* e) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusInEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_focusinevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_FocusOutEvent(KAnimatedButton* self, QFocusEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperFocusOutEvent(KAnimatedButton* self, QFocusEvent* e) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusOutEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_focusoutevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
int KAnimatedButton_DevType(const KAnimatedButton* self) {
    return self->devType();
}

// Base class handler implementation
int KAnimatedButton_SuperDevType(const KAnimatedButton* self) {
    return self->KAnimatedButton::devType();
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDevType(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_devtype_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_SetVisible(KAnimatedButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KAnimatedButton_SuperSetVisible(KAnimatedButton* self, bool visible) {
    self->KAnimatedButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSetVisible(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_setvisible_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KAnimatedButton_HeightForWidth(const KAnimatedButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KAnimatedButton_SuperHeightForWidth(const KAnimatedButton* self, int param1) {
    return self->KAnimatedButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHeightForWidth(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_heightforwidth_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KAnimatedButton_HasHeightForWidth(const KAnimatedButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KAnimatedButton_SuperHasHeightForWidth(const KAnimatedButton* self) {
    return self->KAnimatedButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHasHeightForWidth(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_hasheightforwidth_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KAnimatedButton_PaintEngine(const KAnimatedButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KAnimatedButton_SuperPaintEngine(const KAnimatedButton* self) {
    return self->KAnimatedButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnPaintEngine(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_paintengine_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_MouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperMouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMouseDoubleClickEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_WheelEvent(KAnimatedButton* self, QWheelEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperWheelEvent(KAnimatedButton* self, QWheelEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnWheelEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_wheelevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_MoveEvent(KAnimatedButton* self, QMoveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperMoveEvent(KAnimatedButton* self, QMoveEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMoveEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_moveevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ResizeEvent(KAnimatedButton* self, QResizeEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperResizeEvent(KAnimatedButton* self, QResizeEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnResizeEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_resizeevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_CloseEvent(KAnimatedButton* self, QCloseEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperCloseEvent(KAnimatedButton* self, QCloseEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCloseEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_closeevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnContextMenuEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_contextmenuevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_TabletEvent(KAnimatedButton* self, QTabletEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperTabletEvent(KAnimatedButton* self, QTabletEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnTabletEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_tabletevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_DragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperDragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDragEnterEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_dragenterevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_DragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperDragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDragMoveEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_dragmoveevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_DragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperDragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDragLeaveEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_dragleaveevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_DropEvent(KAnimatedButton* self, QDropEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperDropEvent(KAnimatedButton* self, QDropEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDropEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_dropevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ShowEvent(KAnimatedButton* self, QShowEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperShowEvent(KAnimatedButton* self, QShowEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnShowEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_showevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_HideEvent(KAnimatedButton* self, QHideEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperHideEvent(KAnimatedButton* self, QHideEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHideEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_hideevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAnimatedButton_NativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        return vkanimatedbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAnimatedButton_SuperNativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        return vkanimatedbutton->KAnimatedButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnNativeEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_nativeevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KAnimatedButton_Metric(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton) {
        return vkanimatedbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KAnimatedButton_SuperMetric(const KAnimatedButton* self, int param1) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->KAnimatedButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMetric(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_metric_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_InitPainter(const KAnimatedButton* self, QPainter* painter) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton) {
        vkanimatedbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperInitPainter(const KAnimatedButton* self, QPainter* painter) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        vkanimatedbutton->KAnimatedButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInitPainter(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_initpainter_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KAnimatedButton_Redirected(const KAnimatedButton* self, QPoint* offset) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton) {
        return vkanimatedbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KAnimatedButton_SuperRedirected(const KAnimatedButton* self, QPoint* offset) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->KAnimatedButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnRedirected(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_redirected_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KAnimatedButton_SharedPainter(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton) {
        return vkanimatedbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KAnimatedButton_SuperSharedPainter(const KAnimatedButton* self) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->KAnimatedButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSharedPainter(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_sharedpainter_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_InputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperInputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInputMethodEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_inputmethodevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KAnimatedButton_InputMethodQuery(const KAnimatedButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KAnimatedButton_SuperInputMethodQuery(const KAnimatedButton* self, int param1) {
    return new QVariant(self->KAnimatedButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInputMethodQuery(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self)))
        vkanimatedbutton->kanimatedbutton_inputmethodquery_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KAnimatedButton_FocusNextPrevChild(KAnimatedButton* self, bool next) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        return vkanimatedbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAnimatedButton_SuperFocusNextPrevChild(KAnimatedButton* self, bool next) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        return vkanimatedbutton->KAnimatedButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusNextPrevChild(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_focusnextprevchild_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KAnimatedButton_EventFilter(KAnimatedButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KAnimatedButton_SuperEventFilter(KAnimatedButton* self, QObject* watched, QEvent* event) {
    return self->KAnimatedButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnEventFilter(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_eventfilter_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ChildEvent(KAnimatedButton* self, QChildEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperChildEvent(KAnimatedButton* self, QChildEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnChildEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_childevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_CustomEvent(KAnimatedButton* self, QEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperCustomEvent(KAnimatedButton* self, QEvent* event) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCustomEvent(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_customevent_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_ConnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperConnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnConnectNotify(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_connectnotify_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAnimatedButton_DisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton) {
        vkanimatedbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAnimatedButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAnimatedButton_SuperDisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->KAnimatedButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAnimatedButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDisconnectNotify(KAnimatedButton* self, intptr_t slot) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self))
        vkanimatedbutton->kanimatedbutton_disconnectnotify_callback = reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KAnimatedButton_UpdateMicroFocus(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->VirtualKAnimatedButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KAnimatedButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KAnimatedButton_Create(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->VirtualKAnimatedButton::create();
    } else
        qFatal("Error: Protected method KAnimatedButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KAnimatedButton_Destroy(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        vkanimatedbutton->VirtualKAnimatedButton::destroy();
    } else
        qFatal("Error: Protected method KAnimatedButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAnimatedButton_FocusNextChild(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        return vkanimatedbutton->VirtualKAnimatedButton::focusNextChild();
    } else
        qFatal("Error: Protected method KAnimatedButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAnimatedButton_FocusPreviousChild(KAnimatedButton* self) {
    if (auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self)) {
        return vkanimatedbutton->VirtualKAnimatedButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KAnimatedButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KAnimatedButton_Sender(const KAnimatedButton* self) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->VirtualKAnimatedButton::sender();
    } else
        qFatal("Error: Protected method KAnimatedButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAnimatedButton_SenderSignalIndex(const KAnimatedButton* self) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->VirtualKAnimatedButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAnimatedButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAnimatedButton_Receivers(const KAnimatedButton* self, const char* signal) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->VirtualKAnimatedButton::receivers(signal);
    } else
        qFatal("Error: Protected method KAnimatedButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAnimatedButton_IsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->VirtualKAnimatedButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAnimatedButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KAnimatedButton_GetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB) {
    if (auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self))) {
        return vkanimatedbutton->VirtualKAnimatedButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KAnimatedButton::getDecodedMetricF called without a directly constructed type");
}

void KAnimatedButton_Delete(KAnimatedButton* self) {
    delete self;
}
