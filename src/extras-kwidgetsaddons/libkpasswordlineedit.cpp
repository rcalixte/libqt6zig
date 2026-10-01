#include <KPasswordLineEdit>
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
#include <QLineEdit>
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
#include <kpasswordlineedit.h>
#include "libkpasswordlineedit.h"
#include "libkpasswordlineedit.hxx"

KPasswordLineEdit* KPasswordLineEdit_new(QWidget* parent) {
    return new VirtualKPasswordLineEdit(parent);
}

KPasswordLineEdit* KPasswordLineEdit_new2() {
    return new VirtualKPasswordLineEdit();
}

QMetaObject* KPasswordLineEdit_MetaObject(const KPasswordLineEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPasswordLineEdit_Metacast(KPasswordLineEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPasswordLineEdit_Metacall(KPasswordLineEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPasswordLineEdit_Tr(const char* s) {
    auto _ret = KPasswordLineEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPasswordLineEdit_SetPassword(KPasswordLineEdit* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->setPassword(password_QString);
}

libqt_string KPasswordLineEdit_Password(const KPasswordLineEdit* self) {
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

void KPasswordLineEdit_Clear(KPasswordLineEdit* self) {
    self->clear();
}

void KPasswordLineEdit_SetClearButtonEnabled(KPasswordLineEdit* self, bool clear) {
    self->setClearButtonEnabled(clear);
}

bool KPasswordLineEdit_IsClearButtonEnabled(const KPasswordLineEdit* self) {
    return self->isClearButtonEnabled();
}

void KPasswordLineEdit_SetEchoMode(KPasswordLineEdit* self, int mode) {
    self->setEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

int KPasswordLineEdit_EchoMode(const KPasswordLineEdit* self) {
    return static_cast<int>(self->echoMode());
}

void KPasswordLineEdit_SetReadOnly(KPasswordLineEdit* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

bool KPasswordLineEdit_IsReadOnly(const KPasswordLineEdit* self) {
    return self->isReadOnly();
}

int KPasswordLineEdit_RevealPasswordMode(const KPasswordLineEdit* self) {
    return static_cast<int>(self->revealPasswordMode());
}

void KPasswordLineEdit_SetRevealPasswordMode(KPasswordLineEdit* self, int revealPasswordMode) {
    self->setRevealPasswordMode(static_cast<KPassword::RevealMode>(revealPasswordMode));
}

void KPasswordLineEdit_SetRevealPasswordAvailable(KPasswordLineEdit* self, bool reveal) {
    self->setRevealPasswordAvailable(reveal);
}

bool KPasswordLineEdit_IsRevealPasswordAvailable(const KPasswordLineEdit* self) {
    return self->isRevealPasswordAvailable();
}

QAction* KPasswordLineEdit_ToggleEchoModeAction(const KPasswordLineEdit* self) {
    return self->toggleEchoModeAction();
}

QLineEdit* KPasswordLineEdit_LineEdit(const KPasswordLineEdit* self) {
    return self->lineEdit();
}

void KPasswordLineEdit_EchoModeChanged(KPasswordLineEdit* self, int echoMode) {
    self->echoModeChanged(static_cast<QLineEdit::EchoMode>(echoMode));
}

void KPasswordLineEdit_Connect_EchoModeChanged(KPasswordLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KPasswordLineEdit*, int) = reinterpret_cast<void (*)(KPasswordLineEdit*, int)>(slot);
    KPasswordLineEdit::connect(self,
                               static_cast<void (KPasswordLineEdit::*)(QLineEdit::EchoMode)>(&KPasswordLineEdit::echoModeChanged),
                               [self, slotFunc](QLineEdit::EchoMode echoMode) {
                                   int sigval1 = static_cast<int>(echoMode);
                                   slotFunc(self, sigval1);
                               });
}

void KPasswordLineEdit_PasswordChanged(KPasswordLineEdit* self, const libqt_string password) {
    QString password_QString = QString::fromUtf8(password.data, password.len);
    self->passwordChanged(password_QString);
}

void KPasswordLineEdit_Connect_PasswordChanged(KPasswordLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KPasswordLineEdit*, const char*) = reinterpret_cast<void (*)(KPasswordLineEdit*, const char*)>(slot);
    KPasswordLineEdit::connect(self,
                               static_cast<void (KPasswordLineEdit::*)(const QString&)>(&KPasswordLineEdit::passwordChanged),
                               [self, slotFunc](const QString& password) {
                                   const auto password_ret = password;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray password_b = password_ret.toUtf8();
                                   auto password_str_len = password_b.length();
                                   const char* password_str = static_cast<const char*>(malloc(password_str_len + 1));
                                   memcpy((void*)password_str, password_b.data(), password_str_len);
                                   ((char*)password_str)[password_str_len] = '\0';
                                   const char* sigval1 = password_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(password_str);
                               });
}

libqt_string KPasswordLineEdit_Tr2(const char* s, const char* c) {
    auto _ret = KPasswordLineEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPasswordLineEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPasswordLineEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPasswordLineEdit_SuperMetaObject(const KPasswordLineEdit* self) {
    return (QMetaObject*)self->KPasswordLineEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMetaObject(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_metaobject_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPasswordLineEdit_SuperMetacast(KPasswordLineEdit* self, const char* param1) {
    return self->KPasswordLineEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMetacast(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_metacast_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPasswordLineEdit_SuperMetacall(KPasswordLineEdit* self, int param1, int param2, void** param3) {
    return self->KPasswordLineEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMetacall(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_metacall_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KPasswordLineEdit_DevType(const KPasswordLineEdit* self) {
    return self->devType();
}

// Base class handler implementation
int KPasswordLineEdit_SuperDevType(const KPasswordLineEdit* self) {
    return self->KPasswordLineEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDevType(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_devtype_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_SetVisible(KPasswordLineEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPasswordLineEdit_SuperSetVisible(KPasswordLineEdit* self, bool visible) {
    self->KPasswordLineEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSetVisible(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_setvisible_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPasswordLineEdit_SizeHint(const KPasswordLineEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPasswordLineEdit_SuperSizeHint(const KPasswordLineEdit* self) {
    return new QSize(self->KPasswordLineEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSizeHint(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_sizehint_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPasswordLineEdit_MinimumSizeHint(const KPasswordLineEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPasswordLineEdit_SuperMinimumSizeHint(const KPasswordLineEdit* self) {
    return new QSize(self->KPasswordLineEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMinimumSizeHint(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_minimumsizehint_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KPasswordLineEdit_HeightForWidth(const KPasswordLineEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPasswordLineEdit_SuperHeightForWidth(const KPasswordLineEdit* self, int param1) {
    return self->KPasswordLineEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnHeightForWidth(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_heightforwidth_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordLineEdit_HasHeightForWidth(const KPasswordLineEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPasswordLineEdit_SuperHasHeightForWidth(const KPasswordLineEdit* self) {
    return self->KPasswordLineEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnHasHeightForWidth(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_hasheightforwidth_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPasswordLineEdit_PaintEngine(const KPasswordLineEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPasswordLineEdit_SuperPaintEngine(const KPasswordLineEdit* self) {
    return self->KPasswordLineEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnPaintEngine(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_paintengine_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordLineEdit_Event(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        return vkpasswordlineedit->event(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordLineEdit_SuperEvent(KPasswordLineEdit* self, QEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        return vkpasswordlineedit->KPasswordLineEdit::event(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_event_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_MousePressEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperMousePressEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMousePressEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_mousepressevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_MouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperMouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMouseReleaseEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_mousereleaseevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_MouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperMouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMouseDoubleClickEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_MouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperMouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMouseMoveEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_mousemoveevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_WheelEvent(KPasswordLineEdit* self, QWheelEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperWheelEvent(KPasswordLineEdit* self, QWheelEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnWheelEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_wheelevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_KeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperKeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnKeyPressEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_keypressevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_KeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperKeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnKeyReleaseEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_keyreleaseevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_FocusInEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperFocusInEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusInEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_focusinevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_FocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperFocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusOutEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_focusoutevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_EnterEvent(KPasswordLineEdit* self, QEnterEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperEnterEvent(KPasswordLineEdit* self, QEnterEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnEnterEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_enterevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_LeaveEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperLeaveEvent(KPasswordLineEdit* self, QEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnLeaveEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_leaveevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_PaintEvent(KPasswordLineEdit* self, QPaintEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperPaintEvent(KPasswordLineEdit* self, QPaintEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnPaintEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_paintevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_MoveEvent(KPasswordLineEdit* self, QMoveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperMoveEvent(KPasswordLineEdit* self, QMoveEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMoveEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_moveevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ResizeEvent(KPasswordLineEdit* self, QResizeEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperResizeEvent(KPasswordLineEdit* self, QResizeEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnResizeEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_resizeevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_CloseEvent(KPasswordLineEdit* self, QCloseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperCloseEvent(KPasswordLineEdit* self, QCloseEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnCloseEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_closeevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnContextMenuEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_contextmenuevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_TabletEvent(KPasswordLineEdit* self, QTabletEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperTabletEvent(KPasswordLineEdit* self, QTabletEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnTabletEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_tabletevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ActionEvent(KPasswordLineEdit* self, QActionEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperActionEvent(KPasswordLineEdit* self, QActionEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnActionEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_actionevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_DragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperDragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDragEnterEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_dragenterevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_DragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperDragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDragMoveEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_dragmoveevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_DragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperDragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDragLeaveEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_dragleaveevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_DropEvent(KPasswordLineEdit* self, QDropEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperDropEvent(KPasswordLineEdit* self, QDropEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDropEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_dropevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ShowEvent(KPasswordLineEdit* self, QShowEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperShowEvent(KPasswordLineEdit* self, QShowEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnShowEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_showevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_HideEvent(KPasswordLineEdit* self, QHideEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperHideEvent(KPasswordLineEdit* self, QHideEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnHideEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_hideevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordLineEdit_NativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        return vkpasswordlineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordLineEdit_SuperNativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        return vkpasswordlineedit->KPasswordLineEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnNativeEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_nativeevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ChangeEvent(KPasswordLineEdit* self, QEvent* param1) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperChangeEvent(KPasswordLineEdit* self, QEvent* param1) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnChangeEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_changeevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPasswordLineEdit_Metric(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit) {
        return vkpasswordlineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPasswordLineEdit_SuperMetric(const KPasswordLineEdit* self, int param1) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->KPasswordLineEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMetric(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_metric_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_InitPainter(const KPasswordLineEdit* self, QPainter* painter) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit) {
        vkpasswordlineedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperInitPainter(const KPasswordLineEdit* self, QPainter* painter) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        vkpasswordlineedit->KPasswordLineEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnInitPainter(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_initpainter_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPasswordLineEdit_Redirected(const KPasswordLineEdit* self, QPoint* offset) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit) {
        return vkpasswordlineedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPasswordLineEdit_SuperRedirected(const KPasswordLineEdit* self, QPoint* offset) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->KPasswordLineEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnRedirected(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_redirected_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPasswordLineEdit_SharedPainter(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit) {
        return vkpasswordlineedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPasswordLineEdit_SuperSharedPainter(const KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->KPasswordLineEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSharedPainter(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_sharedpainter_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_InputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperInputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnInputMethodEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_inputmethodevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPasswordLineEdit_InputMethodQuery(const KPasswordLineEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPasswordLineEdit_SuperInputMethodQuery(const KPasswordLineEdit* self, int param1) {
    return new QVariant(self->KPasswordLineEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnInputMethodQuery(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self)))
        vkpasswordlineedit->kpasswordlineedit_inputmethodquery_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordLineEdit_FocusNextPrevChild(KPasswordLineEdit* self, bool next) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        return vkpasswordlineedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPasswordLineEdit_SuperFocusNextPrevChild(KPasswordLineEdit* self, bool next) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        return vkpasswordlineedit->KPasswordLineEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusNextPrevChild(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_focusnextprevchild_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KPasswordLineEdit_EventFilter(KPasswordLineEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KPasswordLineEdit_SuperEventFilter(KPasswordLineEdit* self, QObject* watched, QEvent* event) {
    return self->KPasswordLineEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnEventFilter(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_eventfilter_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_TimerEvent(KPasswordLineEdit* self, QTimerEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperTimerEvent(KPasswordLineEdit* self, QTimerEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnTimerEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_timerevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ChildEvent(KPasswordLineEdit* self, QChildEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperChildEvent(KPasswordLineEdit* self, QChildEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnChildEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_childevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_CustomEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperCustomEvent(KPasswordLineEdit* self, QEvent* event) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnCustomEvent(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_customevent_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_ConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnConnectNotify(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_connectnotify_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPasswordLineEdit_DisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit) {
        vkpasswordlineedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPasswordLineEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPasswordLineEdit_SuperDisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->KPasswordLineEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPasswordLineEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDisconnectNotify(KPasswordLineEdit* self, intptr_t slot) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self))
        vkpasswordlineedit->kpasswordlineedit_disconnectnotify_callback = reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPasswordLineEdit_UpdateMicroFocus(KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->VirtualKPasswordLineEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPasswordLineEdit_Create(KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->VirtualKPasswordLineEdit::create();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPasswordLineEdit_Destroy(KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        vkpasswordlineedit->VirtualKPasswordLineEdit::destroy();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPasswordLineEdit_FocusNextChild(KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::focusNextChild();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPasswordLineEdit_FocusPreviousChild(KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self)) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPasswordLineEdit_Sender(const KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::sender();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPasswordLineEdit_SenderSignalIndex(const KPasswordLineEdit* self) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPasswordLineEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPasswordLineEdit_Receivers(const KPasswordLineEdit* self, const char* signal) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::receivers(signal);
    } else
        qFatal("Error: Protected method KPasswordLineEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPasswordLineEdit_IsSignalConnected(const KPasswordLineEdit* self, const QMetaMethod* signal) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPasswordLineEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPasswordLineEdit_GetDecodedMetricF(const KPasswordLineEdit* self, int metricA, int metricB) {
    if (auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self))) {
        return vkpasswordlineedit->VirtualKPasswordLineEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPasswordLineEdit::getDecodedMetricF called without a directly constructed type");
}

void KPasswordLineEdit_Delete(KPasswordLineEdit* self) {
    delete self;
}
