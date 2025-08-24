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
#include <QByteArray>
#include <cstring>
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
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KNewPasswordWidget_OnMetacall(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Metacall_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KNewPasswordWidget_QBaseMetacall(KNewPasswordWidget* self, int param1, int param2, void** param3) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Metacall_IsBase(true);
        return vknewpasswordwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNewPasswordWidget_Tr(const char* s) {
    QString _ret = KNewPasswordWidget::tr(s);
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
    QString _ret = self->password();
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
    KNewPasswordWidget::connect(self, &KNewPasswordWidget::passwordStatusChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KNewPasswordWidget_Tr2(const char* s, const char* c) {
    QString _ret = KNewPasswordWidget::tr(s, c);
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
    QString _ret = KNewPasswordWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int KNewPasswordWidget_DevType(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->devType();
    } else {
        return self->KNewPasswordWidget::devType();
    }
}

// Base class handler implementation
int KNewPasswordWidget_QBaseDevType(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DevType_IsBase(true);
        return vknewpasswordwidget->devType();
    } else {
        return self->KNewPasswordWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDevType(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DevType_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_SetVisible(KNewPasswordWidget* self, bool visible) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setVisible(visible);
    } else {
        self->KNewPasswordWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseSetVisible(KNewPasswordWidget* self, bool visible) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SetVisible_IsBase(true);
        vknewpasswordwidget->setVisible(visible);
    } else {
        self->KNewPasswordWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSetVisible(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SetVisible_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNewPasswordWidget_SizeHint(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return new QSize(vknewpasswordwidget->sizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KNewPasswordWidget_QBaseSizeHint(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SizeHint_IsBase(true);
        return new QSize(vknewpasswordwidget->sizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSizeHint(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SizeHint_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNewPasswordWidget_MinimumSizeHint(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return new QSize(vknewpasswordwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KNewPasswordWidget_QBaseMinimumSizeHint(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vknewpasswordwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNewPasswordWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMinimumSizeHint(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordWidget_HeightForWidth(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNewPasswordWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KNewPasswordWidget_QBaseHeightForWidth(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_HeightForWidth_IsBase(true);
        return vknewpasswordwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNewPasswordWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnHeightForWidth(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_HasHeightForWidth(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->hasHeightForWidth();
    } else {
        return self->KNewPasswordWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseHasHeightForWidth(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_HasHeightForWidth_IsBase(true);
        return vknewpasswordwidget->hasHeightForWidth();
    } else {
        return self->KNewPasswordWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnHasHeightForWidth(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KNewPasswordWidget_PaintEngine(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->paintEngine();
    } else {
        return self->KNewPasswordWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KNewPasswordWidget_QBasePaintEngine(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_PaintEngine_IsBase(true);
        return vknewpasswordwidget->paintEngine();
    } else {
        return self->KNewPasswordWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnPaintEngine(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_PaintEngine_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_Event(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->event(event);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Event_IsBase(true);
        return vknewpasswordwidget->event(event);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Event_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_MousePressEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->mousePressEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseMousePressEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MousePressEvent_IsBase(true);
        vknewpasswordwidget->mousePressEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMousePressEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_MouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseMouseReleaseEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MouseReleaseEvent_IsBase(true);
        vknewpasswordwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMouseReleaseEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_MouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseMouseDoubleClickEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MouseDoubleClickEvent_IsBase(true);
        vknewpasswordwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMouseDoubleClickEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_MouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseMouseMoveEvent(KNewPasswordWidget* self, QMouseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MouseMoveEvent_IsBase(true);
        vknewpasswordwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMouseMoveEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_WheelEvent(KNewPasswordWidget* self, QWheelEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->wheelEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseWheelEvent(KNewPasswordWidget* self, QWheelEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_WheelEvent_IsBase(true);
        vknewpasswordwidget->wheelEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnWheelEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_WheelEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_KeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->keyPressEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseKeyPressEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_KeyPressEvent_IsBase(true);
        vknewpasswordwidget->keyPressEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnKeyPressEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_KeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseKeyReleaseEvent(KNewPasswordWidget* self, QKeyEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_KeyReleaseEvent_IsBase(true);
        vknewpasswordwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnKeyReleaseEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_FocusInEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->focusInEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseFocusInEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusInEvent_IsBase(true);
        vknewpasswordwidget->focusInEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusInEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_FocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->focusOutEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseFocusOutEvent(KNewPasswordWidget* self, QFocusEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusOutEvent_IsBase(true);
        vknewpasswordwidget->focusOutEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusOutEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_EnterEvent(KNewPasswordWidget* self, QEnterEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->enterEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseEnterEvent(KNewPasswordWidget* self, QEnterEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_EnterEvent_IsBase(true);
        vknewpasswordwidget->enterEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnEnterEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_EnterEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_LeaveEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->leaveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseLeaveEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_LeaveEvent_IsBase(true);
        vknewpasswordwidget->leaveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnLeaveEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_PaintEvent(KNewPasswordWidget* self, QPaintEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->paintEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBasePaintEvent(KNewPasswordWidget* self, QPaintEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_PaintEvent_IsBase(true);
        vknewpasswordwidget->paintEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnPaintEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_PaintEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_MoveEvent(KNewPasswordWidget* self, QMoveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->moveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseMoveEvent(KNewPasswordWidget* self, QMoveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MoveEvent_IsBase(true);
        vknewpasswordwidget->moveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMoveEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_MoveEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ResizeEvent(KNewPasswordWidget* self, QResizeEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->resizeEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseResizeEvent(KNewPasswordWidget* self, QResizeEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ResizeEvent_IsBase(true);
        vknewpasswordwidget->resizeEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnResizeEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_CloseEvent(KNewPasswordWidget* self, QCloseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->closeEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseCloseEvent(KNewPasswordWidget* self, QCloseEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_CloseEvent_IsBase(true);
        vknewpasswordwidget->closeEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnCloseEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_CloseEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->contextMenuEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseContextMenuEvent(KNewPasswordWidget* self, QContextMenuEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ContextMenuEvent_IsBase(true);
        vknewpasswordwidget->contextMenuEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnContextMenuEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_TabletEvent(KNewPasswordWidget* self, QTabletEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->tabletEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseTabletEvent(KNewPasswordWidget* self, QTabletEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_TabletEvent_IsBase(true);
        vknewpasswordwidget->tabletEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnTabletEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_TabletEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ActionEvent(KNewPasswordWidget* self, QActionEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->actionEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseActionEvent(KNewPasswordWidget* self, QActionEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ActionEvent_IsBase(true);
        vknewpasswordwidget->actionEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnActionEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ActionEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_DragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->dragEnterEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseDragEnterEvent(KNewPasswordWidget* self, QDragEnterEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DragEnterEvent_IsBase(true);
        vknewpasswordwidget->dragEnterEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDragEnterEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_DragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->dragMoveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseDragMoveEvent(KNewPasswordWidget* self, QDragMoveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DragMoveEvent_IsBase(true);
        vknewpasswordwidget->dragMoveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDragMoveEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_DragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseDragLeaveEvent(KNewPasswordWidget* self, QDragLeaveEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DragLeaveEvent_IsBase(true);
        vknewpasswordwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDragLeaveEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_DropEvent(KNewPasswordWidget* self, QDropEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->dropEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseDropEvent(KNewPasswordWidget* self, QDropEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DropEvent_IsBase(true);
        vknewpasswordwidget->dropEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDropEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DropEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ShowEvent(KNewPasswordWidget* self, QShowEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->showEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseShowEvent(KNewPasswordWidget* self, QShowEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ShowEvent_IsBase(true);
        vknewpasswordwidget->showEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnShowEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ShowEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_HideEvent(KNewPasswordWidget* self, QHideEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->hideEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseHideEvent(KNewPasswordWidget* self, QHideEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_HideEvent_IsBase(true);
        vknewpasswordwidget->hideEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnHideEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_HideEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_NativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNewPasswordWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseNativeEvent(KNewPasswordWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_NativeEvent_IsBase(true);
        return vknewpasswordwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNewPasswordWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnNativeEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_NativeEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ChangeEvent(KNewPasswordWidget* self, QEvent* param1) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->changeEvent(param1);
    } else {
        ((VirtualKNewPasswordWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseChangeEvent(KNewPasswordWidget* self, QEvent* param1) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ChangeEvent_IsBase(true);
        vknewpasswordwidget->changeEvent(param1);
    } else {
        ((VirtualKNewPasswordWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnChangeEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordWidget_Metric(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNewPasswordWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KNewPasswordWidget_QBaseMetric(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Metric_IsBase(true);
        return vknewpasswordwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNewPasswordWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnMetric(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Metric_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_InitPainter(const KNewPasswordWidget* self, QPainter* painter) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->initPainter(painter);
    } else {
        ((VirtualKNewPasswordWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseInitPainter(const KNewPasswordWidget* self, QPainter* painter) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_InitPainter_IsBase(true);
        vknewpasswordwidget->initPainter(painter);
    } else {
        ((VirtualKNewPasswordWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnInitPainter(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_InitPainter_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KNewPasswordWidget_Redirected(const KNewPasswordWidget* self, QPoint* offset) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->redirected(offset);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KNewPasswordWidget_QBaseRedirected(const KNewPasswordWidget* self, QPoint* offset) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Redirected_IsBase(true);
        return vknewpasswordwidget->redirected(offset);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnRedirected(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Redirected_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KNewPasswordWidget_SharedPainter(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->sharedPainter();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KNewPasswordWidget_QBaseSharedPainter(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SharedPainter_IsBase(true);
        return vknewpasswordwidget->sharedPainter();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSharedPainter(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SharedPainter_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_InputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKNewPasswordWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseInputMethodEvent(KNewPasswordWidget* self, QInputMethodEvent* param1) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_InputMethodEvent_IsBase(true);
        vknewpasswordwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKNewPasswordWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnInputMethodEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNewPasswordWidget_InputMethodQuery(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return new QVariant(vknewpasswordwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNewPasswordWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KNewPasswordWidget_QBaseInputMethodQuery(const KNewPasswordWidget* self, int param1) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vknewpasswordwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNewPasswordWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnInputMethodQuery(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_FocusNextPrevChild(KNewPasswordWidget* self, bool next) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseFocusNextPrevChild(KNewPasswordWidget* self, bool next) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusNextPrevChild_IsBase(true);
        return vknewpasswordwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusNextPrevChild(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_EventFilter(KNewPasswordWidget* self, QObject* watched, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->eventFilter(watched, event);
    } else {
        return self->KNewPasswordWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseEventFilter(KNewPasswordWidget* self, QObject* watched, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_EventFilter_IsBase(true);
        return vknewpasswordwidget->eventFilter(watched, event);
    } else {
        return self->KNewPasswordWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnEventFilter(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_EventFilter_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_TimerEvent(KNewPasswordWidget* self, QTimerEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->timerEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseTimerEvent(KNewPasswordWidget* self, QTimerEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_TimerEvent_IsBase(true);
        vknewpasswordwidget->timerEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnTimerEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_TimerEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ChildEvent(KNewPasswordWidget* self, QChildEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->childEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseChildEvent(KNewPasswordWidget* self, QChildEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ChildEvent_IsBase(true);
        vknewpasswordwidget->childEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnChildEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ChildEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_CustomEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->customEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseCustomEvent(KNewPasswordWidget* self, QEvent* event) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_CustomEvent_IsBase(true);
        vknewpasswordwidget->customEvent(event);
    } else {
        ((VirtualKNewPasswordWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnCustomEvent(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_CustomEvent_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_ConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->connectNotify(*signal);
    } else {
        ((VirtualKNewPasswordWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseConnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ConnectNotify_IsBase(true);
        vknewpasswordwidget->connectNotify(*signal);
    } else {
        ((VirtualKNewPasswordWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnConnectNotify(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_DisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKNewPasswordWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseDisconnectNotify(KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DisconnectNotify_IsBase(true);
        vknewpasswordwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKNewPasswordWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDisconnectNotify(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_UpdateMicroFocus(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->updateMicroFocus();
    } else {
        ((VirtualKNewPasswordWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseUpdateMicroFocus(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_UpdateMicroFocus_IsBase(true);
        vknewpasswordwidget->updateMicroFocus();
    } else {
        ((VirtualKNewPasswordWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnUpdateMicroFocus(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_Create(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->create();
    } else {
        ((VirtualKNewPasswordWidget*)self)->create();
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseCreate(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Create_IsBase(true);
        vknewpasswordwidget->create();
    } else {
        ((VirtualKNewPasswordWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnCreate(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Create_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KNewPasswordWidget_Destroy(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->destroy();
    } else {
        ((VirtualKNewPasswordWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KNewPasswordWidget_QBaseDestroy(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Destroy_IsBase(true);
        vknewpasswordwidget->destroy();
    } else {
        ((VirtualKNewPasswordWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnDestroy(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Destroy_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_FocusNextChild(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->focusNextChild();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseFocusNextChild(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusNextChild_IsBase(true);
        return vknewpasswordwidget->focusNextChild();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusNextChild(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_FocusPreviousChild(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->focusPreviousChild();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseFocusPreviousChild(KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusPreviousChild_IsBase(true);
        return vknewpasswordwidget->focusPreviousChild();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnFocusPreviousChild(KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = dynamic_cast<VirtualKNewPasswordWidget*>(self);
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNewPasswordWidget_Sender(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->sender();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNewPasswordWidget_QBaseSender(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Sender_IsBase(true);
        return vknewpasswordwidget->sender();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSender(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Sender_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordWidget_SenderSignalIndex(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->senderSignalIndex();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNewPasswordWidget_QBaseSenderSignalIndex(const KNewPasswordWidget* self) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SenderSignalIndex_IsBase(true);
        return vknewpasswordwidget->senderSignalIndex();
    } else {
        return ((VirtualKNewPasswordWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnSenderSignalIndex(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNewPasswordWidget_Receivers(const KNewPasswordWidget* self, const char* signal) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->receivers(signal);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNewPasswordWidget_QBaseReceivers(const KNewPasswordWidget* self, const char* signal) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Receivers_IsBase(true);
        return vknewpasswordwidget->receivers(signal);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnReceivers(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_Receivers_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNewPasswordWidget_IsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNewPasswordWidget_QBaseIsSignalConnected(const KNewPasswordWidget* self, const QMetaMethod* signal) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_IsSignalConnected_IsBase(true);
        return vknewpasswordwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKNewPasswordWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnIsSignalConnected(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KNewPasswordWidget_GetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        return vknewpasswordwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNewPasswordWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KNewPasswordWidget_QBaseGetDecodedMetricF(const KNewPasswordWidget* self, int metricA, int metricB) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_GetDecodedMetricF_IsBase(true);
        return vknewpasswordwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNewPasswordWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KNewPasswordWidget_OnGetDecodedMetricF(const KNewPasswordWidget* self, intptr_t slot) {
    auto* vknewpasswordwidget = const_cast<VirtualKNewPasswordWidget*>(dynamic_cast<const VirtualKNewPasswordWidget*>(self));
    if (vknewpasswordwidget && vknewpasswordwidget->isVirtualKNewPasswordWidget) {
        vknewpasswordwidget->setKNewPasswordWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKNewPasswordWidget::KNewPasswordWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KNewPasswordWidget_Delete(KNewPasswordWidget* self) {
    delete self;
}
