#include <KContextualHelpButton>
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
#include <kcontextualhelpbutton.h>
#include "libkcontextualhelpbutton.h"
#include "libkcontextualhelpbutton.hxx"

KContextualHelpButton* KContextualHelpButton_new(QWidget* parent) {
    return new VirtualKContextualHelpButton(parent);
}

KContextualHelpButton* KContextualHelpButton_new2(const libqt_string contextualHelpText, const QWidget* heightHintWidget, QWidget* parent) {
    QString contextualHelpText_QString = QString::fromUtf8(contextualHelpText.data, contextualHelpText.len);
    return new VirtualKContextualHelpButton(contextualHelpText_QString, heightHintWidget, parent);
}

KContextualHelpButton* KContextualHelpButton_new3() {
    return new VirtualKContextualHelpButton();
}

QMetaObject* KContextualHelpButton_MetaObject(const KContextualHelpButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KContextualHelpButton_Metacast(KContextualHelpButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KContextualHelpButton_Metacall(KContextualHelpButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KContextualHelpButton_Tr(const char* s) {
    auto _ret = KContextualHelpButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KContextualHelpButton_SetContextualHelpText(KContextualHelpButton* self, const libqt_string contextualHelpText) {
    QString contextualHelpText_QString = QString::fromUtf8(contextualHelpText.data, contextualHelpText.len);
    self->setContextualHelpText(contextualHelpText_QString);
}

libqt_string KContextualHelpButton_ContextualHelpText(const KContextualHelpButton* self) {
    auto _ret = self->contextualHelpText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KContextualHelpButton_SetHeightHintWidget(KContextualHelpButton* self, const QWidget* heightHintWidget) {
    self->setHeightHintWidget(heightHintWidget);
}

QWidget* KContextualHelpButton_HeightHintWidget(const KContextualHelpButton* self) {
    return (QWidget*)self->heightHintWidget();
}

QSize* KContextualHelpButton_SizeHint(const KContextualHelpButton* self) {
    return new QSize(self->sizeHint());
}

void KContextualHelpButton_ContextualHelpTextChanged(KContextualHelpButton* self, const libqt_string newContextualHelpText) {
    QString newContextualHelpText_QString = QString::fromUtf8(newContextualHelpText.data, newContextualHelpText.len);
    self->contextualHelpTextChanged(newContextualHelpText_QString);
}

void KContextualHelpButton_Connect_ContextualHelpTextChanged(KContextualHelpButton* self, intptr_t slot) {
    void (*slotFunc)(KContextualHelpButton*, const char*) = reinterpret_cast<void (*)(KContextualHelpButton*, const char*)>(slot);
    KContextualHelpButton::connect(self,
                                   static_cast<void (KContextualHelpButton::*)(const QString&)>(&KContextualHelpButton::contextualHelpTextChanged),
                                   [self, slotFunc](const QString& newContextualHelpText) {
                                       const auto newContextualHelpText_ret = newContextualHelpText;
                                       // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                       QByteArray newContextualHelpText_b = newContextualHelpText_ret.toUtf8();
                                       auto newContextualHelpText_str_len = newContextualHelpText_b.length();
                                       const char* newContextualHelpText_str = static_cast<const char*>(malloc(newContextualHelpText_str_len + 1));
                                       memcpy((void*)newContextualHelpText_str, newContextualHelpText_b.data(), newContextualHelpText_str_len);
                                       ((char*)newContextualHelpText_str)[newContextualHelpText_str_len] = '\0';
                                       const char* sigval1 = newContextualHelpText_str;
                                       slotFunc(self, sigval1);
                                       libqt_free(newContextualHelpText_str);
                                   });
}

libqt_string KContextualHelpButton_Tr2(const char* s, const char* c) {
    auto _ret = KContextualHelpButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KContextualHelpButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KContextualHelpButton::tr(s, c, static_cast<int>(n));
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
QMetaObject* KContextualHelpButton_SuperMetaObject(const KContextualHelpButton* self) {
    return (QMetaObject*)self->KContextualHelpButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetaObject(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_metaobject_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KContextualHelpButton_SuperMetacast(KContextualHelpButton* self, const char* param1) {
    return self->KContextualHelpButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetacast(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_metacast_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KContextualHelpButton_SuperMetacall(KContextualHelpButton* self, int param1, int param2, void** param3) {
    return self->KContextualHelpButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetacall(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_metacall_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KContextualHelpButton_SuperSizeHint(const KContextualHelpButton* self) {
    return new QSize(self->KContextualHelpButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSizeHint(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_sizehint_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KContextualHelpButton_MinimumSizeHint(const KContextualHelpButton* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KContextualHelpButton_SuperMinimumSizeHint(const KContextualHelpButton* self) {
    return new QSize(self->KContextualHelpButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMinimumSizeHint(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_minimumsizehint_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
bool KContextualHelpButton_Event(KContextualHelpButton* self, QEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->event(e);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperEvent(KContextualHelpButton* self, QEvent* e) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        return vkcontextualhelpbutton->KContextualHelpButton::event(e);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_event_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Event_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_MousePressEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->mousePressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMousePressEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMousePressEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_mousepressevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_MouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->mouseReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMouseReleaseEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_mousereleaseevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_PaintEvent(KContextualHelpButton* self, QPaintEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperPaintEvent(KContextualHelpButton* self, QPaintEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnPaintEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_paintevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ActionEvent(KContextualHelpButton* self, QActionEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->actionEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperActionEvent(KContextualHelpButton* self, QActionEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::actionEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnActionEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_actionevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_EnterEvent(KContextualHelpButton* self, QEnterEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->enterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperEnterEvent(KContextualHelpButton* self, QEnterEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::enterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnEnterEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_enterevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_LeaveEvent(KContextualHelpButton* self, QEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->leaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperLeaveEvent(KContextualHelpButton* self, QEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnLeaveEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_leaveevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_TimerEvent(KContextualHelpButton* self, QTimerEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperTimerEvent(KContextualHelpButton* self, QTimerEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnTimerEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_timerevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ChangeEvent(KContextualHelpButton* self, QEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperChangeEvent(KContextualHelpButton* self, QEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnChangeEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_changeevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
bool KContextualHelpButton_HitButton(const KContextualHelpButton* self, const QPoint* pos) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->hitButton(*pos);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::hitButton called without a directly constructed type");
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperHitButton(const KContextualHelpButton* self, const QPoint* pos) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->KContextualHelpButton::hitButton(*pos);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::hitButton called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHitButton(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_hitbutton_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HitButton_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_CheckStateSet(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->checkStateSet();
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::checkStateSet called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCheckStateSet(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::checkStateSet();
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::checkStateSet called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCheckStateSet(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_checkstateset_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_CheckStateSet_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_NextCheckState(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->nextCheckState();
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::nextCheckState called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperNextCheckState(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::nextCheckState();
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::nextCheckState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnNextCheckState(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_nextcheckstate_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_NextCheckState_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_InitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperInitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        vkcontextualhelpbutton->KContextualHelpButton::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInitStyleOption(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_initstyleoption_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_KeyPressEvent(KContextualHelpButton* self, QKeyEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperKeyPressEvent(KContextualHelpButton* self, QKeyEvent* e) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnKeyPressEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_keypressevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_KeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperKeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnKeyReleaseEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_keyreleaseevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_MouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMouseMoveEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_mousemoveevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_FocusInEvent(KContextualHelpButton* self, QFocusEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperFocusInEvent(KContextualHelpButton* self, QFocusEvent* e) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusInEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_focusinevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_FocusOutEvent(KContextualHelpButton* self, QFocusEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperFocusOutEvent(KContextualHelpButton* self, QFocusEvent* e) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusOutEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_focusoutevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
int KContextualHelpButton_DevType(const KContextualHelpButton* self) {
    return self->devType();
}

// Base class handler implementation
int KContextualHelpButton_SuperDevType(const KContextualHelpButton* self) {
    return self->KContextualHelpButton::devType();
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDevType(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_devtype_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_SetVisible(KContextualHelpButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KContextualHelpButton_SuperSetVisible(KContextualHelpButton* self, bool visible) {
    self->KContextualHelpButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSetVisible(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_setvisible_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KContextualHelpButton_HeightForWidth(const KContextualHelpButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KContextualHelpButton_SuperHeightForWidth(const KContextualHelpButton* self, int param1) {
    return self->KContextualHelpButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHeightForWidth(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_heightforwidth_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KContextualHelpButton_HasHeightForWidth(const KContextualHelpButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KContextualHelpButton_SuperHasHeightForWidth(const KContextualHelpButton* self) {
    return self->KContextualHelpButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHasHeightForWidth(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_hasheightforwidth_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KContextualHelpButton_PaintEngine(const KContextualHelpButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KContextualHelpButton_SuperPaintEngine(const KContextualHelpButton* self) {
    return self->KContextualHelpButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnPaintEngine(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_paintengine_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_MouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMouseDoubleClickEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_WheelEvent(KContextualHelpButton* self, QWheelEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperWheelEvent(KContextualHelpButton* self, QWheelEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnWheelEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_wheelevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_MoveEvent(KContextualHelpButton* self, QMoveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMoveEvent(KContextualHelpButton* self, QMoveEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMoveEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_moveevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ResizeEvent(KContextualHelpButton* self, QResizeEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperResizeEvent(KContextualHelpButton* self, QResizeEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnResizeEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_resizeevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_CloseEvent(KContextualHelpButton* self, QCloseEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCloseEvent(KContextualHelpButton* self, QCloseEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCloseEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_closeevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnContextMenuEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_contextmenuevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_TabletEvent(KContextualHelpButton* self, QTabletEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperTabletEvent(KContextualHelpButton* self, QTabletEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnTabletEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_tabletevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_DragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDragEnterEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_dragenterevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_DragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDragMoveEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_dragmoveevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_DragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDragLeaveEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_dragleaveevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_DropEvent(KContextualHelpButton* self, QDropEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDropEvent(KContextualHelpButton* self, QDropEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDropEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_dropevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ShowEvent(KContextualHelpButton* self, QShowEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperShowEvent(KContextualHelpButton* self, QShowEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnShowEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_showevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_HideEvent(KContextualHelpButton* self, QHideEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperHideEvent(KContextualHelpButton* self, QHideEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHideEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_hideevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KContextualHelpButton_NativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperNativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        return vkcontextualhelpbutton->KContextualHelpButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnNativeEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_nativeevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KContextualHelpButton_Metric(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperMetric(const KContextualHelpButton* self, int param1) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->KContextualHelpButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetric(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_metric_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_InitPainter(const KContextualHelpButton* self, QPainter* painter) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperInitPainter(const KContextualHelpButton* self, QPainter* painter) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        vkcontextualhelpbutton->KContextualHelpButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInitPainter(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_initpainter_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KContextualHelpButton_Redirected(const KContextualHelpButton* self, QPoint* offset) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KContextualHelpButton_SuperRedirected(const KContextualHelpButton* self, QPoint* offset) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->KContextualHelpButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnRedirected(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_redirected_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KContextualHelpButton_SharedPainter(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KContextualHelpButton_SuperSharedPainter(const KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->KContextualHelpButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSharedPainter(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_sharedpainter_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_InputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperInputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInputMethodEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_inputmethodevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KContextualHelpButton_InputMethodQuery(const KContextualHelpButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KContextualHelpButton_SuperInputMethodQuery(const KContextualHelpButton* self, int param1) {
    return new QVariant(self->KContextualHelpButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInputMethodQuery(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self)))
        vkcontextualhelpbutton->kcontextualhelpbutton_inputmethodquery_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KContextualHelpButton_FocusNextPrevChild(KContextualHelpButton* self, bool next) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        return vkcontextualhelpbutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperFocusNextPrevChild(KContextualHelpButton* self, bool next) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        return vkcontextualhelpbutton->KContextualHelpButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusNextPrevChild(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_focusnextprevchild_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KContextualHelpButton_EventFilter(KContextualHelpButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KContextualHelpButton_SuperEventFilter(KContextualHelpButton* self, QObject* watched, QEvent* event) {
    return self->KContextualHelpButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnEventFilter(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_eventfilter_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ChildEvent(KContextualHelpButton* self, QChildEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperChildEvent(KContextualHelpButton* self, QChildEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnChildEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_childevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_CustomEvent(KContextualHelpButton* self, QEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCustomEvent(KContextualHelpButton* self, QEvent* event) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCustomEvent(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_customevent_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_ConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnConnectNotify(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_connectnotify_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KContextualHelpButton_DisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton) {
        vkcontextualhelpbutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KContextualHelpButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->KContextualHelpButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KContextualHelpButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDisconnectNotify(KContextualHelpButton* self, intptr_t slot) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self))
        vkcontextualhelpbutton->kcontextualhelpbutton_disconnectnotify_callback = reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KContextualHelpButton_UpdateMicroFocus(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->VirtualKContextualHelpButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KContextualHelpButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KContextualHelpButton_Create(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->VirtualKContextualHelpButton::create();
    } else
        qFatal("Error: Protected method KContextualHelpButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KContextualHelpButton_Destroy(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        vkcontextualhelpbutton->VirtualKContextualHelpButton::destroy();
    } else
        qFatal("Error: Protected method KContextualHelpButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KContextualHelpButton_FocusNextChild(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::focusNextChild();
    } else
        qFatal("Error: Protected method KContextualHelpButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KContextualHelpButton_FocusPreviousChild(KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self)) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KContextualHelpButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KContextualHelpButton_Sender(const KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::sender();
    } else
        qFatal("Error: Protected method KContextualHelpButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KContextualHelpButton_SenderSignalIndex(const KContextualHelpButton* self) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KContextualHelpButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KContextualHelpButton_Receivers(const KContextualHelpButton* self, const char* signal) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::receivers(signal);
    } else
        qFatal("Error: Protected method KContextualHelpButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KContextualHelpButton_IsSignalConnected(const KContextualHelpButton* self, const QMetaMethod* signal) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KContextualHelpButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KContextualHelpButton_GetDecodedMetricF(const KContextualHelpButton* self, int metricA, int metricB) {
    if (auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self))) {
        return vkcontextualhelpbutton->VirtualKContextualHelpButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KContextualHelpButton::getDecodedMetricF called without a directly constructed type");
}

void KContextualHelpButton_Delete(KContextualHelpButton* self) {
    delete self;
}
