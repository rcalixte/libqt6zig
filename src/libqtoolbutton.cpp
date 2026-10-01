#include <QAbstractButton>
#include <QAction>
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
#include <QMenu>
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
#include <qtoolbutton.h>
#include "libqtoolbutton.h"
#include "libqtoolbutton.hxx"

QToolButton* QToolButton_new(QWidget* parent) {
    return new VirtualQToolButton(parent);
}

QToolButton* QToolButton_new2() {
    return new VirtualQToolButton();
}

QMetaObject* QToolButton_MetaObject(const QToolButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QToolButton_Metacast(QToolButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QToolButton_Metacall(QToolButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QToolButton_Tr(const char* s) {
    auto _ret = QToolButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QToolButton_SizeHint(const QToolButton* self) {
    return new QSize(self->sizeHint());
}

QSize* QToolButton_MinimumSizeHint(const QToolButton* self) {
    return new QSize(self->minimumSizeHint());
}

int QToolButton_ToolButtonStyle(const QToolButton* self) {
    return static_cast<int>(self->toolButtonStyle());
}

int QToolButton_ArrowType(const QToolButton* self) {
    return static_cast<int>(self->arrowType());
}

void QToolButton_SetArrowType(QToolButton* self, int typeVal) {
    self->setArrowType(static_cast<Qt::ArrowType>(typeVal));
}

void QToolButton_SetMenu(QToolButton* self, QMenu* menu) {
    self->setMenu(menu);
}

QMenu* QToolButton_Menu(const QToolButton* self) {
    return self->menu();
}

void QToolButton_SetPopupMode(QToolButton* self, int mode) {
    self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

int QToolButton_PopupMode(const QToolButton* self) {
    return static_cast<int>(self->popupMode());
}

QAction* QToolButton_DefaultAction(const QToolButton* self) {
    return self->defaultAction();
}

void QToolButton_SetAutoRaise(QToolButton* self, bool enable) {
    self->setAutoRaise(enable);
}

bool QToolButton_AutoRaise(const QToolButton* self) {
    return self->autoRaise();
}

void QToolButton_ShowMenu(QToolButton* self) {
    self->showMenu();
}

void QToolButton_SetToolButtonStyle(QToolButton* self, int style) {
    self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction) {
    self->setDefaultAction(defaultAction);
}

void QToolButton_Triggered(QToolButton* self, QAction* param1) {
    self->triggered(param1);
}

void QToolButton_Connect_Triggered(QToolButton* self, intptr_t slot) {
    void (*slotFunc)(QToolButton*, QAction*) = reinterpret_cast<void (*)(QToolButton*, QAction*)>(slot);
    QToolButton::connect(self,
                         static_cast<void (QToolButton::*)(QAction*)>(&QToolButton::triggered),
                         [self, slotFunc](QAction* param1) {
                             QAction* sigval1 = param1;
                             slotFunc(self, sigval1);
                         });
}

bool QToolButton_Event(QToolButton* self, QEvent* e) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        return vqtoolbutton->event(e);
    }
    qFatal("Error: Protected method QToolButton::event called without a directly constructed type");
}

void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->mousePressEvent(param1);
    }
}

void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->mouseReleaseEvent(param1);
    }
}

void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->paintEvent(param1);
    }
}

void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->actionEvent(param1);
    }
}

void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->enterEvent(param1);
    }
}

void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->leaveEvent(param1);
    }
}

void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->timerEvent(param1);
    }
}

void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->changeEvent(param1);
    }
}

bool QToolButton_HitButton(const QToolButton* self, const QPoint* pos) {
    auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        return vqtoolbutton->hitButton(*pos);
    }
    qFatal("Error: Protected method QToolButton::hitButton called without a directly constructed type");
}

void QToolButton_CheckStateSet(QToolButton* self) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->checkStateSet();
    }
}

void QToolButton_NextCheckState(QToolButton* self) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->nextCheckState();
    }
}

void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option) {
    auto* vqtoolbutton = dynamic_cast<const VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->initStyleOption(option);
    }
}

libqt_string QToolButton_Tr2(const char* s, const char* c) {
    auto _ret = QToolButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QToolButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = QToolButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* QToolButton_SuperMetaObject(const QToolButton* self) {
    return (QMetaObject*)self->QToolButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMetaObject(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_metaobject_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QToolButton_SuperMetacast(QToolButton* self, const char* param1) {
    return self->QToolButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMetacast(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_metacast_callback = reinterpret_cast<VirtualQToolButton::QToolButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int QToolButton_SuperMetacall(QToolButton* self, int param1, int param2, void** param3) {
    return self->QToolButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMetacall(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_metacall_callback = reinterpret_cast<VirtualQToolButton::QToolButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QToolButton_SuperSizeHint(const QToolButton* self) {
    return new QSize(self->QToolButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSizeHint(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_sizehint_callback = reinterpret_cast<VirtualQToolButton::QToolButton_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QToolButton_SuperMinimumSizeHint(const QToolButton* self) {
    return new QSize(self->QToolButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMinimumSizeHint(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_minimumsizehint_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QToolButton_SuperEvent(QToolButton* self, QEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->QToolButton::event(e);
    } else
        qFatal("Error: Protected virtual method QToolButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_event_callback = reinterpret_cast<VirtualQToolButton::QToolButton_Event_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperMousePressEvent(QToolButton* self, QMouseEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMousePressEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_mousepressevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperMouseReleaseEvent(QToolButton* self, QMouseEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseReleaseEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_mousereleaseevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperPaintEvent(QToolButton* self, QPaintEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnPaintEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_paintevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperActionEvent(QToolButton* self, QActionEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnActionEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_actionevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ActionEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperEnterEvent(QToolButton* self, QEnterEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEnterEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_enterevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_EnterEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperLeaveEvent(QToolButton* self, QEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnLeaveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_leaveevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperTimerEvent(QToolButton* self, QTimerEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnTimerEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_timerevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperChangeEvent(QToolButton* self, QEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnChangeEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_changeevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
bool QToolButton_SuperHitButton(const QToolButton* self, const QPoint* pos) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->QToolButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method QToolButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHitButton(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_hitbutton_callback = reinterpret_cast<VirtualQToolButton::QToolButton_HitButton_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperCheckStateSet(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method QToolButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCheckStateSet(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_checkstateset_callback = reinterpret_cast<VirtualQToolButton::QToolButton_CheckStateSet_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperNextCheckState(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method QToolButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnNextCheckState(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_nextcheckstate_callback = reinterpret_cast<VirtualQToolButton::QToolButton_NextCheckState_Callback>(slot);
}

// Base class handler implementation
void QToolButton_SuperInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->QToolButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QToolButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInitStyleOption(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_initstyleoption_callback = reinterpret_cast<VirtualQToolButton::QToolButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_KeyPressEvent(QToolButton* self, QKeyEvent* e) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QToolButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperKeyPressEvent(QToolButton* self, QKeyEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QToolButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnKeyPressEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_keypressevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_KeyReleaseEvent(QToolButton* self, QKeyEvent* e) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QToolButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperKeyReleaseEvent(QToolButton* self, QKeyEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QToolButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnKeyReleaseEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_keyreleaseevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_MouseMoveEvent(QToolButton* self, QMouseEvent* e) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QToolButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperMouseMoveEvent(QToolButton* self, QMouseEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QToolButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseMoveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_mousemoveevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_FocusInEvent(QToolButton* self, QFocusEvent* e) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method QToolButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperFocusInEvent(QToolButton* self, QFocusEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QToolButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusInEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_focusinevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_FocusOutEvent(QToolButton* self, QFocusEvent* e) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method QToolButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperFocusOutEvent(QToolButton* self, QFocusEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QToolButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusOutEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_focusoutevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
int QToolButton_DevType(const QToolButton* self) {
    return self->devType();
}

// Base class handler implementation
int QToolButton_SuperDevType(const QToolButton* self) {
    return self->QToolButton::devType();
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDevType(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_devtype_callback = reinterpret_cast<VirtualQToolButton::QToolButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_SetVisible(QToolButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QToolButton_SuperSetVisible(QToolButton* self, bool visible) {
    self->QToolButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSetVisible(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_setvisible_callback = reinterpret_cast<VirtualQToolButton::QToolButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QToolButton_HeightForWidth(const QToolButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QToolButton_SuperHeightForWidth(const QToolButton* self, int param1) {
    return self->QToolButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHeightForWidth(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_heightforwidth_callback = reinterpret_cast<VirtualQToolButton::QToolButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QToolButton_HasHeightForWidth(const QToolButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QToolButton_SuperHasHeightForWidth(const QToolButton* self) {
    return self->QToolButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHasHeightForWidth(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_hasheightforwidth_callback = reinterpret_cast<VirtualQToolButton::QToolButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QToolButton_PaintEngine(const QToolButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QToolButton_SuperPaintEngine(const QToolButton* self) {
    return self->QToolButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnPaintEngine(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_paintengine_callback = reinterpret_cast<VirtualQToolButton::QToolButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_MouseDoubleClickEvent(QToolButton* self, QMouseEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperMouseDoubleClickEvent(QToolButton* self, QMouseEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseDoubleClickEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_WheelEvent(QToolButton* self, QWheelEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperWheelEvent(QToolButton* self, QWheelEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnWheelEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_wheelevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_MoveEvent(QToolButton* self, QMoveEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperMoveEvent(QToolButton* self, QMoveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMoveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_moveevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_ResizeEvent(QToolButton* self, QResizeEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperResizeEvent(QToolButton* self, QResizeEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnResizeEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_resizeevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_CloseEvent(QToolButton* self, QCloseEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperCloseEvent(QToolButton* self, QCloseEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCloseEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_closeevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_ContextMenuEvent(QToolButton* self, QContextMenuEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperContextMenuEvent(QToolButton* self, QContextMenuEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnContextMenuEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_contextmenuevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_TabletEvent(QToolButton* self, QTabletEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperTabletEvent(QToolButton* self, QTabletEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnTabletEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_tabletevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_DragEnterEvent(QToolButton* self, QDragEnterEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperDragEnterEvent(QToolButton* self, QDragEnterEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDragEnterEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_dragenterevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_DragMoveEvent(QToolButton* self, QDragMoveEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperDragMoveEvent(QToolButton* self, QDragMoveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDragMoveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_dragmoveevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_DragLeaveEvent(QToolButton* self, QDragLeaveEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperDragLeaveEvent(QToolButton* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDragLeaveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_dragleaveevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_DropEvent(QToolButton* self, QDropEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperDropEvent(QToolButton* self, QDropEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDropEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_dropevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_ShowEvent(QToolButton* self, QShowEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperShowEvent(QToolButton* self, QShowEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnShowEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_showevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_HideEvent(QToolButton* self, QHideEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperHideEvent(QToolButton* self, QHideEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHideEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_hideevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QToolButton_NativeEvent(QToolButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        return vqtoolbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QToolButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QToolButton_SuperNativeEvent(QToolButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->QToolButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QToolButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnNativeEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_nativeevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QToolButton_Metric(const QToolButton* self, int param1) {
    auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self));
    if (vqtoolbutton) {
        return vqtoolbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QToolButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QToolButton_SuperMetric(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->QToolButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QToolButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMetric(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_metric_callback = reinterpret_cast<VirtualQToolButton::QToolButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_InitPainter(const QToolButton* self, QPainter* painter) {
    auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self));
    if (vqtoolbutton) {
        vqtoolbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QToolButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperInitPainter(const QToolButton* self, QPainter* painter) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->QToolButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QToolButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInitPainter(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_initpainter_callback = reinterpret_cast<VirtualQToolButton::QToolButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QToolButton_Redirected(const QToolButton* self, QPoint* offset) {
    auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self));
    if (vqtoolbutton) {
        return vqtoolbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QToolButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QToolButton_SuperRedirected(const QToolButton* self, QPoint* offset) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->QToolButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QToolButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnRedirected(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_redirected_callback = reinterpret_cast<VirtualQToolButton::QToolButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QToolButton_SharedPainter(const QToolButton* self) {
    auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self));
    if (vqtoolbutton) {
        return vqtoolbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QToolButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QToolButton_SuperSharedPainter(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->QToolButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QToolButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSharedPainter(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_sharedpainter_callback = reinterpret_cast<VirtualQToolButton::QToolButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_InputMethodEvent(QToolButton* self, QInputMethodEvent* param1) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QToolButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperInputMethodEvent(QToolButton* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QToolButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInputMethodEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_inputmethodevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QToolButton_InputMethodQuery(const QToolButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QToolButton_SuperInputMethodQuery(const QToolButton* self, int param1) {
    return new QVariant(self->QToolButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInputMethodQuery(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self)))
        vqtoolbutton->qtoolbutton_inputmethodquery_callback = reinterpret_cast<VirtualQToolButton::QToolButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QToolButton_FocusNextPrevChild(QToolButton* self, bool next) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        return vqtoolbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QToolButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QToolButton_SuperFocusNextPrevChild(QToolButton* self, bool next) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->QToolButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QToolButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusNextPrevChild(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_focusnextprevchild_callback = reinterpret_cast<VirtualQToolButton::QToolButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QToolButton_EventFilter(QToolButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QToolButton_SuperEventFilter(QToolButton* self, QObject* watched, QEvent* event) {
    return self->QToolButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEventFilter(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_eventfilter_callback = reinterpret_cast<VirtualQToolButton::QToolButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_ChildEvent(QToolButton* self, QChildEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperChildEvent(QToolButton* self, QChildEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnChildEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_childevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_CustomEvent(QToolButton* self, QEvent* event) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QToolButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperCustomEvent(QToolButton* self, QEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QToolButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCustomEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_customevent_callback = reinterpret_cast<VirtualQToolButton::QToolButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_ConnectNotify(QToolButton* self, const QMetaMethod* signal) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QToolButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperConnectNotify(QToolButton* self, const QMetaMethod* signal) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QToolButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnConnectNotify(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_connectnotify_callback = reinterpret_cast<VirtualQToolButton::QToolButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QToolButton_DisconnectNotify(QToolButton* self, const QMetaMethod* signal) {
    auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self);
    if (vqtoolbutton) {
        vqtoolbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QToolButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QToolButton_SuperDisconnectNotify(QToolButton* self, const QMetaMethod* signal) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->QToolButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QToolButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDisconnectNotify(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self))
        vqtoolbutton->qtoolbutton_disconnectnotify_callback = reinterpret_cast<VirtualQToolButton::QToolButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QToolButton_UpdateMicroFocus(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->VirtualQToolButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method QToolButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolButton_Create(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->VirtualQToolButton::create();
    } else
        qFatal("Error: Protected method QToolButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QToolButton_Destroy(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->VirtualQToolButton::destroy();
    } else
        qFatal("Error: Protected method QToolButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolButton_FocusNextChild(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->VirtualQToolButton::focusNextChild();
    } else
        qFatal("Error: Protected method QToolButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolButton_FocusPreviousChild(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->VirtualQToolButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method QToolButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QToolButton_Sender(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->VirtualQToolButton::sender();
    } else
        qFatal("Error: Protected method QToolButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QToolButton_SenderSignalIndex(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->VirtualQToolButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method QToolButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QToolButton_Receivers(const QToolButton* self, const char* signal) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->VirtualQToolButton::receivers(signal);
    } else
        qFatal("Error: Protected method QToolButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QToolButton_IsSignalConnected(const QToolButton* self, const QMetaMethod* signal) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->VirtualQToolButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QToolButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QToolButton_GetDecodedMetricF(const QToolButton* self, int metricA, int metricB) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->VirtualQToolButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QToolButton::getDecodedMetricF called without a directly constructed type");
}

void QToolButton_Delete(QToolButton* self) {
    delete self;
}
