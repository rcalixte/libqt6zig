#include <KNewPasswordWidget>
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
#include <knewpasswordwidget.h>
#include "libknewpasswordwidget.h"
#include "libknewpasswordwidget.hxx"

KNewPasswordWidget* KNewPasswordWidget_new(QWidget* parent) {
    return new VirtualKNewPasswordWidget(parent);
}

KNewPasswordWidget* KNewPasswordWidget_new2() {
    return new VirtualKNewPasswordWidget();
}

QMetaObject* KNewPasswordWidget_MetaObject(const KNewPasswordWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNewPasswordWidget_Metacast(KNewPasswordWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNewPasswordWidget_Metacall(KNewPasswordWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNewPasswordWidget_Tr(const char* s) {
    auto _ret = KNewPasswordWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KNewPasswordWidget_PasswordStatus(const KNewPasswordWidget* self) {
    return static_cast<int>(self->passwordStatus());
}

bool KNewPasswordWidget_AllowEmptyPasswords(const KNewPasswordWidget* self) {
    return self->allowEmptyPasswords();
}

int KNewPasswordWidget_MinimumPasswordLength(const KNewPasswordWidget* self) {
    return self->minimumPasswordLength();
}

int KNewPasswordWidget_MaximumPasswordLength(const KNewPasswordWidget* self) {
    return self->maximumPasswordLength();
}

int KNewPasswordWidget_ReasonablePasswordLength(const KNewPasswordWidget* self) {
    return self->reasonablePasswordLength();
}

int KNewPasswordWidget_PasswordStrengthWarningLevel(const KNewPasswordWidget* self) {
    return self->passwordStrengthWarningLevel();
}

QColor* KNewPasswordWidget_BackgroundWarningColor(const KNewPasswordWidget* self) {
    return new QColor(self->backgroundWarningColor());
}

bool KNewPasswordWidget_IsPasswordStrengthMeterVisible(const KNewPasswordWidget* self) {
    return self->isPasswordStrengthMeterVisible();
}

bool KNewPasswordWidget_IsRevealPasswordAvailable(const KNewPasswordWidget* self) {
    return self->isRevealPasswordAvailable();
}

int KNewPasswordWidget_RevealPasswordMode(const KNewPasswordWidget* self) {
    return static_cast<int>(self->revealPasswordMode());
}

libqt_string KNewPasswordWidget_Password(const KNewPasswordWidget* self) {
    auto _ret = self->password();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNewPasswordWidget_SetAllowEmptyPasswords(KNewPasswordWidget* self, bool allowed) {
    self->setAllowEmptyPasswords(allowed);
}

void KNewPasswordWidget_SetMinimumPasswordLength(KNewPasswordWidget* self, int minLength) {
    self->setMinimumPasswordLength(static_cast<int>(minLength));
}

void KNewPasswordWidget_SetMaximumPasswordLength(KNewPasswordWidget* self, int maxLength) {
    self->setMaximumPasswordLength(static_cast<int>(maxLength));
}

void KNewPasswordWidget_SetReasonablePasswordLength(KNewPasswordWidget* self, int reasonableLength) {
    self->setReasonablePasswordLength(static_cast<int>(reasonableLength));
}

void KNewPasswordWidget_SetPasswordStrengthWarningLevel(KNewPasswordWidget* self, int warningLevel) {
    self->setPasswordStrengthWarningLevel(static_cast<int>(warningLevel));
}

void KNewPasswordWidget_SetBackgroundWarningColor(KNewPasswordWidget* self, const QColor* color) {
    self->setBackgroundWarningColor(*color);
}

void KNewPasswordWidget_SetPasswordStrengthMeterVisible(KNewPasswordWidget* self, bool visible) {
    self->setPasswordStrengthMeterVisible(visible);
}

void KNewPasswordWidget_SetRevealPasswordAvailable(KNewPasswordWidget* self, bool reveal) {
    self->setRevealPasswordAvailable(reveal);
}

void KNewPasswordWidget_SetRevealPasswordMode(KNewPasswordWidget* self, int revealPasswordMode) {
    self->setRevealPasswordMode(static_cast<KPassword::RevealMode>(revealPasswordMode));
}

void KNewPasswordWidget_PasswordStatusChanged(KNewPasswordWidget* self) {
    self->passwordStatusChanged();
}

void KNewPasswordWidget_Connect_PasswordStatusChanged(KNewPasswordWidget* self, intptr_t slot) {
    void (*slotFunc)(KNewPasswordWidget*) = reinterpret_cast<void (*)(KNewPasswordWidget*)>(slot);
    KNewPasswordWidget::connect(self,
                                static_cast<void (KNewPasswordWidget::*)()>(&KNewPasswordWidget::passwordStatusChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

libqt_string KNewPasswordWidget_Tr2(const char* s, const char* c) {
    auto _ret = KNewPasswordWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNewPasswordWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNewPasswordWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNewPasswordWidget_SuperMetaObject(const KNewPasswordWidget* self) {
    return (QMetaObject*)self->KNewPasswordWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMetaObject(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_metaobject_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNewPasswordWidget_SuperMetacast(KNewPasswordWidget* self, const char* param1) {
    return self->KNewPasswordWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMetacast(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_metacast_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNewPasswordWidget_SuperMetacall(KNewPasswordWidget* self, int param1, int param2, void** param3) {
    return self->KNewPasswordWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMetacall(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_metacall_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordWidget_DevType(const KNewPasswordWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KNewPasswordWidget_SuperDevType(const KNewPasswordWidget* self) {
    return self->KNewPasswordWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDevType(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_devtype_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_SetVisible(KNewPasswordWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KNewPasswordWidget_SuperSetVisible(KNewPasswordWidget* self, bool visible) {
    self->KNewPasswordWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSetVisible(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_setvisible_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KNewPasswordWidget_SizeHint(const KNewPasswordWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KNewPasswordWidget_SuperSizeHint(const KNewPasswordWidget* self) {
    return new QSize(self->KNewPasswordWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSizeHint(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_sizehint_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KNewPasswordWidget_MinimumSizeHint(const KNewPasswordWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KNewPasswordWidget_SuperMinimumSizeHint(const KNewPasswordWidget* self) {
    return new QSize(self->KNewPasswordWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMinimumSizeHint(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_minimumsizehint_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordWidget_HeightForWidth(const KNewPasswordWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KNewPasswordWidget_SuperHeightForWidth(const KNewPasswordWidget* self, int param1) {
    return self->KNewPasswordWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnHeightForWidth(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_heightforwidth_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordWidget_HasHeightForWidth(const KNewPasswordWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KNewPasswordWidget_SuperHasHeightForWidth(const KNewPasswordWidget* self) {
    return self->KNewPasswordWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnHasHeightForWidth(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KNewPasswordWidget_PaintEngine(const KNewPasswordWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KNewPasswordWidget_SuperPaintEngine(const KNewPasswordWidget* self) {
    return self->KNewPasswordWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnPaintEngine(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_paintengine_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordWidget_Event(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        return vknewpasswordwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordWidget_SuperEvent(KNewPasswordWidget* self, QEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        return vknewpasswordwidget->KNewPasswordWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_event_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_MousePressEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperMousePressEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMousePressEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_mousepressevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_MouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperMouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMouseReleaseEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_MouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperMouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMouseDoubleClickEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_MouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperMouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMouseMoveEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_mousemoveevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_WheelEvent(KNewPasswordWidget* self, QWheelEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperWheelEvent(KNewPasswordWidget* self, QWheelEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnWheelEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_wheelevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_KeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperKeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnKeyPressEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_keypressevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_KeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperKeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnKeyReleaseEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_FocusInEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperFocusInEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusInEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_focusinevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_FocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperFocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusOutEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_focusoutevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_EnterEvent(KNewPasswordWidget* self, QEnterEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperEnterEvent(KNewPasswordWidget* self, QEnterEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnEnterEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_enterevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_LeaveEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperLeaveEvent(KNewPasswordWidget* self, QEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnLeaveEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_leaveevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_PaintEvent(KNewPasswordWidget* self, QPaintEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperPaintEvent(KNewPasswordWidget* self, QPaintEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnPaintEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_paintevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_MoveEvent(KNewPasswordWidget* self, QMoveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperMoveEvent(KNewPasswordWidget* self, QMoveEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMoveEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_moveevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ResizeEvent(KNewPasswordWidget* self, QResizeEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperResizeEvent(KNewPasswordWidget* self, QResizeEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnResizeEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_resizeevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_CloseEvent(KNewPasswordWidget* self, QCloseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperCloseEvent(KNewPasswordWidget* self, QCloseEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnCloseEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_closeevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnContextMenuEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_contextmenuevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_TabletEvent(KNewPasswordWidget* self, QTabletEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperTabletEvent(KNewPasswordWidget* self, QTabletEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnTabletEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_tabletevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ActionEvent(KNewPasswordWidget* self, QActionEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperActionEvent(KNewPasswordWidget* self, QActionEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnActionEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_actionevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_DragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperDragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDragEnterEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_dragenterevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_DragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperDragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDragMoveEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_dragmoveevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_DragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperDragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDragLeaveEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_dragleaveevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_DropEvent(KNewPasswordWidget* self, QDropEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperDropEvent(KNewPasswordWidget* self, QDropEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDropEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_dropevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ShowEvent(KNewPasswordWidget* self, QShowEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperShowEvent(KNewPasswordWidget* self, QShowEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnShowEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_showevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_HideEvent(KNewPasswordWidget* self, QHideEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperHideEvent(KNewPasswordWidget* self, QHideEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnHideEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_hideevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordWidget_NativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        return vknewpasswordwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordWidget_SuperNativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        return vknewpasswordwidget->KNewPasswordWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnNativeEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_nativeevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ChangeEvent(KNewPasswordWidget* self, QEvent* param1) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperChangeEvent(KNewPasswordWidget* self, QEvent* param1) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnChangeEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_changeevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KNewPasswordWidget_Metric(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget) {
        return vknewpasswordwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KNewPasswordWidget_SuperMetric(const KNewPasswordWidget* self, int param1) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->KNewPasswordWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMetric(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_metric_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_InitPainter(const KNewPasswordWidget* self, QPainter* painter) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget) {
        vknewpasswordwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperInitPainter(const KNewPasswordWidget* self, QPainter* painter) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        vknewpasswordwidget->KNewPasswordWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnInitPainter(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_initpainter_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KNewPasswordWidget_Redirected(const KNewPasswordWidget* self, QPoint* offset) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget) {
        return vknewpasswordwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KNewPasswordWidget_SuperRedirected(const KNewPasswordWidget* self, QPoint* offset) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->KNewPasswordWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnRedirected(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_redirected_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KNewPasswordWidget_SharedPainter(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget) {
        return vknewpasswordwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KNewPasswordWidget_SuperSharedPainter(const KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->KNewPasswordWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSharedPainter(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_sharedpainter_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_InputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperInputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnInputMethodEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_inputmethodevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNewPasswordWidget_InputMethodQuery(const KNewPasswordWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KNewPasswordWidget_SuperInputMethodQuery(const KNewPasswordWidget* self, int param1) {
    return new QVariant(self->KNewPasswordWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnInputMethodQuery(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self)))
        vknewpasswordwidget->knewpasswordwidget_inputmethodquery_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordWidget_FocusNextPrevChild(KNewPasswordWidget* self, bool next) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        return vknewpasswordwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNewPasswordWidget_SuperFocusNextPrevChild(KNewPasswordWidget* self, bool next) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        return vknewpasswordwidget->KNewPasswordWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusNextPrevChild(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KNewPasswordWidget_EventFilter(KNewPasswordWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KNewPasswordWidget_SuperEventFilter(KNewPasswordWidget* self, QObject* watched, QEvent* event) {
    return self->KNewPasswordWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnEventFilter(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_eventfilter_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_TimerEvent(KNewPasswordWidget* self, QTimerEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperTimerEvent(KNewPasswordWidget* self, QTimerEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnTimerEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_timerevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ChildEvent(KNewPasswordWidget* self, QChildEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperChildEvent(KNewPasswordWidget* self, QChildEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnChildEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_childevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_CustomEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperCustomEvent(KNewPasswordWidget* self, QEvent* event) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnCustomEvent(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_customevent_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_ConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnConnectNotify(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_connectnotify_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNewPasswordWidget_DisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget) {
        vknewpasswordwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNewPasswordWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNewPasswordWidget_SuperDisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->KNewPasswordWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNewPasswordWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDisconnectNotify(KNewPasswordWidget* self, intptr_t slot) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self))
        vknewpasswordwidget->knewpasswordwidget_disconnectnotify_callback = reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KNewPasswordWidget_UpdateMicroFocus(KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->VirtualKNewPasswordWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KNewPasswordWidget_Create(KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->VirtualKNewPasswordWidget::create();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KNewPasswordWidget_Destroy(KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        vknewpasswordwidget->VirtualKNewPasswordWidget::destroy();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewPasswordWidget_FocusNextChild(KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewPasswordWidget_FocusPreviousChild(KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self)) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNewPasswordWidget_Sender(const KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::sender();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNewPasswordWidget_SenderSignalIndex(const KNewPasswordWidget* self) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNewPasswordWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNewPasswordWidget_Receivers(const KNewPasswordWidget* self, const char* signal) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KNewPasswordWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNewPasswordWidget_IsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNewPasswordWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KNewPasswordWidget_GetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB) {
    if (auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self))) {
        return vknewpasswordwidget->VirtualKNewPasswordWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KNewPasswordWidget::getDecodedMetricF called without a directly constructed type");
}

void KNewPasswordWidget_Delete(KNewPasswordWidget* self) {
    delete self;
}
