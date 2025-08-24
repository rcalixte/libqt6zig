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
#include <QByteArray>
#include <cstring>
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
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KPasswordLineEdit_OnMetacall(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Metacall_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KPasswordLineEdit_QBaseMetacall(KPasswordLineEdit* self, int param1, int param2, void** param3) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Metacall_IsBase(true);
        return vkpasswordlineedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPasswordLineEdit_Tr(const char* s) {
    QString _ret = KPasswordLineEdit::tr(s);
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
    KPasswordLineEdit::connect(self, &KPasswordLineEdit::echoModeChanged, [self, slotFunc](QLineEdit::EchoMode echoMode) {
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
    KPasswordLineEdit::connect(self, &KPasswordLineEdit::passwordChanged, [self, slotFunc](const QString& password) {
        const QString password_ret = password;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray password_b = password_ret.toUtf8();
        const char* password_str = static_cast<const char*>(malloc(password_b.length() + 1));
        memcpy((void*)password_str, password_b.data(), password_b.length());
        ((char*)password_str)[password_b.length()] = '\0';
        const char* sigval1 = password_str;
        slotFunc(self, sigval1);
        libqt_free(password_str);
    });
}

libqt_string KPasswordLineEdit_Tr2(const char* s, const char* c) {
    QString _ret = KPasswordLineEdit::tr(s, c);
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
    QString _ret = KPasswordLineEdit::tr(s, c, static_cast<int>(n));
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
int KPasswordLineEdit_DevType(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->devType();
    } else {
        return self->KPasswordLineEdit::devType();
    }
}

// Base class handler implementation
int KPasswordLineEdit_QBaseDevType(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DevType_IsBase(true);
        return vkpasswordlineedit->devType();
    } else {
        return self->KPasswordLineEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDevType(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DevType_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_SetVisible(KPasswordLineEdit* self, bool visible) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setVisible(visible);
    } else {
        self->KPasswordLineEdit::setVisible(visible);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseSetVisible(KPasswordLineEdit* self, bool visible) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SetVisible_IsBase(true);
        vkpasswordlineedit->setVisible(visible);
    } else {
        self->KPasswordLineEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSetVisible(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SetVisible_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPasswordLineEdit_SizeHint(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return new QSize(vkpasswordlineedit->sizeHint());
    } else {
        return new QSize(((VirtualKPasswordLineEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPasswordLineEdit_QBaseSizeHint(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SizeHint_IsBase(true);
        return new QSize(vkpasswordlineedit->sizeHint());
    } else {
        return new QSize(((VirtualKPasswordLineEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSizeHint(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SizeHint_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPasswordLineEdit_MinimumSizeHint(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return new QSize(vkpasswordlineedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPasswordLineEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPasswordLineEdit_QBaseMinimumSizeHint(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vkpasswordlineedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPasswordLineEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMinimumSizeHint(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordLineEdit_HeightForWidth(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPasswordLineEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPasswordLineEdit_QBaseHeightForWidth(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_HeightForWidth_IsBase(true);
        return vkpasswordlineedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPasswordLineEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnHeightForWidth(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_HeightForWidth_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_HasHeightForWidth(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->hasHeightForWidth();
    } else {
        return self->KPasswordLineEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseHasHeightForWidth(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_HasHeightForWidth_IsBase(true);
        return vkpasswordlineedit->hasHeightForWidth();
    } else {
        return self->KPasswordLineEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnHasHeightForWidth(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPasswordLineEdit_PaintEngine(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->paintEngine();
    } else {
        return self->KPasswordLineEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPasswordLineEdit_QBasePaintEngine(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_PaintEngine_IsBase(true);
        return vkpasswordlineedit->paintEngine();
    } else {
        return self->KPasswordLineEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnPaintEngine(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_PaintEngine_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_Event(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->event(event);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->event(event);
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Event_IsBase(true);
        return vkpasswordlineedit->event(event);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Event_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_MousePressEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->mousePressEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseMousePressEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MousePressEvent_IsBase(true);
        vkpasswordlineedit->mousePressEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMousePressEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MousePressEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_MouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->mouseReleaseEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseMouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MouseReleaseEvent_IsBase(true);
        vkpasswordlineedit->mouseReleaseEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMouseReleaseEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_MouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseMouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MouseDoubleClickEvent_IsBase(true);
        vkpasswordlineedit->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMouseDoubleClickEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_MouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->mouseMoveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseMouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MouseMoveEvent_IsBase(true);
        vkpasswordlineedit->mouseMoveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMouseMoveEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_WheelEvent(KPasswordLineEdit* self, QWheelEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->wheelEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseWheelEvent(KPasswordLineEdit* self, QWheelEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_WheelEvent_IsBase(true);
        vkpasswordlineedit->wheelEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnWheelEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_WheelEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_KeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->keyPressEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseKeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_KeyPressEvent_IsBase(true);
        vkpasswordlineedit->keyPressEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnKeyPressEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_KeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->keyReleaseEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseKeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_KeyReleaseEvent_IsBase(true);
        vkpasswordlineedit->keyReleaseEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnKeyReleaseEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_FocusInEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->focusInEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseFocusInEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusInEvent_IsBase(true);
        vkpasswordlineedit->focusInEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusInEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusInEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_FocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->focusOutEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseFocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusOutEvent_IsBase(true);
        vkpasswordlineedit->focusOutEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusOutEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_EnterEvent(KPasswordLineEdit* self, QEnterEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->enterEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseEnterEvent(KPasswordLineEdit* self, QEnterEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_EnterEvent_IsBase(true);
        vkpasswordlineedit->enterEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnEnterEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_EnterEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_LeaveEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->leaveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseLeaveEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_LeaveEvent_IsBase(true);
        vkpasswordlineedit->leaveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnLeaveEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_LeaveEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_PaintEvent(KPasswordLineEdit* self, QPaintEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->paintEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBasePaintEvent(KPasswordLineEdit* self, QPaintEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_PaintEvent_IsBase(true);
        vkpasswordlineedit->paintEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnPaintEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_PaintEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_MoveEvent(KPasswordLineEdit* self, QMoveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->moveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseMoveEvent(KPasswordLineEdit* self, QMoveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MoveEvent_IsBase(true);
        vkpasswordlineedit->moveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMoveEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_MoveEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ResizeEvent(KPasswordLineEdit* self, QResizeEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->resizeEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseResizeEvent(KPasswordLineEdit* self, QResizeEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ResizeEvent_IsBase(true);
        vkpasswordlineedit->resizeEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnResizeEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ResizeEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_CloseEvent(KPasswordLineEdit* self, QCloseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->closeEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseCloseEvent(KPasswordLineEdit* self, QCloseEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_CloseEvent_IsBase(true);
        vkpasswordlineedit->closeEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnCloseEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_CloseEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->contextMenuEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ContextMenuEvent_IsBase(true);
        vkpasswordlineedit->contextMenuEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnContextMenuEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_TabletEvent(KPasswordLineEdit* self, QTabletEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->tabletEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseTabletEvent(KPasswordLineEdit* self, QTabletEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_TabletEvent_IsBase(true);
        vkpasswordlineedit->tabletEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnTabletEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_TabletEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ActionEvent(KPasswordLineEdit* self, QActionEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->actionEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseActionEvent(KPasswordLineEdit* self, QActionEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ActionEvent_IsBase(true);
        vkpasswordlineedit->actionEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnActionEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ActionEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_DragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->dragEnterEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseDragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DragEnterEvent_IsBase(true);
        vkpasswordlineedit->dragEnterEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDragEnterEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_DragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->dragMoveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseDragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DragMoveEvent_IsBase(true);
        vkpasswordlineedit->dragMoveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDragMoveEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_DragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->dragLeaveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseDragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DragLeaveEvent_IsBase(true);
        vkpasswordlineedit->dragLeaveEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDragLeaveEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_DropEvent(KPasswordLineEdit* self, QDropEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->dropEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseDropEvent(KPasswordLineEdit* self, QDropEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DropEvent_IsBase(true);
        vkpasswordlineedit->dropEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDropEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DropEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ShowEvent(KPasswordLineEdit* self, QShowEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->showEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseShowEvent(KPasswordLineEdit* self, QShowEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ShowEvent_IsBase(true);
        vkpasswordlineedit->showEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnShowEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ShowEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_HideEvent(KPasswordLineEdit* self, QHideEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->hideEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseHideEvent(KPasswordLineEdit* self, QHideEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_HideEvent_IsBase(true);
        vkpasswordlineedit->hideEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnHideEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_HideEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_NativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPasswordLineEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseNativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_NativeEvent_IsBase(true);
        return vkpasswordlineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPasswordLineEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnNativeEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_NativeEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ChangeEvent(KPasswordLineEdit* self, QEvent* param1) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->changeEvent(param1);
    } else {
        ((VirtualKPasswordLineEdit*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseChangeEvent(KPasswordLineEdit* self, QEvent* param1) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ChangeEvent_IsBase(true);
        vkpasswordlineedit->changeEvent(param1);
    } else {
        ((VirtualKPasswordLineEdit*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnChangeEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ChangeEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordLineEdit_Metric(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPasswordLineEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPasswordLineEdit_QBaseMetric(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Metric_IsBase(true);
        return vkpasswordlineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPasswordLineEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnMetric(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Metric_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_InitPainter(const KPasswordLineEdit* self, QPainter* painter) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->initPainter(painter);
    } else {
        ((VirtualKPasswordLineEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseInitPainter(const KPasswordLineEdit* self, QPainter* painter) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_InitPainter_IsBase(true);
        vkpasswordlineedit->initPainter(painter);
    } else {
        ((VirtualKPasswordLineEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnInitPainter(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_InitPainter_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPasswordLineEdit_Redirected(const KPasswordLineEdit* self, QPoint* offset) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->redirected(offset);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPasswordLineEdit_QBaseRedirected(const KPasswordLineEdit* self, QPoint* offset) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Redirected_IsBase(true);
        return vkpasswordlineedit->redirected(offset);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnRedirected(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Redirected_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPasswordLineEdit_SharedPainter(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->sharedPainter();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPasswordLineEdit_QBaseSharedPainter(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SharedPainter_IsBase(true);
        return vkpasswordlineedit->sharedPainter();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSharedPainter(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SharedPainter_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_InputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->inputMethodEvent(param1);
    } else {
        ((VirtualKPasswordLineEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseInputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_InputMethodEvent_IsBase(true);
        vkpasswordlineedit->inputMethodEvent(param1);
    } else {
        ((VirtualKPasswordLineEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnInputMethodEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPasswordLineEdit_InputMethodQuery(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return new QVariant(vkpasswordlineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPasswordLineEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPasswordLineEdit_QBaseInputMethodQuery(const KPasswordLineEdit* self, int param1) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vkpasswordlineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPasswordLineEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnInputMethodQuery(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_FocusNextPrevChild(KPasswordLineEdit* self, bool next) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseFocusNextPrevChild(KPasswordLineEdit* self, bool next) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusNextPrevChild_IsBase(true);
        return vkpasswordlineedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusNextPrevChild(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_EventFilter(KPasswordLineEdit* self, QObject* watched, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->eventFilter(watched, event);
    } else {
        return self->KPasswordLineEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseEventFilter(KPasswordLineEdit* self, QObject* watched, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_EventFilter_IsBase(true);
        return vkpasswordlineedit->eventFilter(watched, event);
    } else {
        return self->KPasswordLineEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnEventFilter(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_EventFilter_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_TimerEvent(KPasswordLineEdit* self, QTimerEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->timerEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseTimerEvent(KPasswordLineEdit* self, QTimerEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_TimerEvent_IsBase(true);
        vkpasswordlineedit->timerEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnTimerEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_TimerEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ChildEvent(KPasswordLineEdit* self, QChildEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->childEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseChildEvent(KPasswordLineEdit* self, QChildEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ChildEvent_IsBase(true);
        vkpasswordlineedit->childEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnChildEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ChildEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_CustomEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->customEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseCustomEvent(KPasswordLineEdit* self, QEvent* event) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_CustomEvent_IsBase(true);
        vkpasswordlineedit->customEvent(event);
    } else {
        ((VirtualKPasswordLineEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnCustomEvent(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_CustomEvent_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_ConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->connectNotify(*signal);
    } else {
        ((VirtualKPasswordLineEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ConnectNotify_IsBase(true);
        vkpasswordlineedit->connectNotify(*signal);
    } else {
        ((VirtualKPasswordLineEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnConnectNotify(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_ConnectNotify_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_DisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->disconnectNotify(*signal);
    } else {
        ((VirtualKPasswordLineEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseDisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DisconnectNotify_IsBase(true);
        vkpasswordlineedit->disconnectNotify(*signal);
    } else {
        ((VirtualKPasswordLineEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDisconnectNotify(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_UpdateMicroFocus(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->updateMicroFocus();
    } else {
        ((VirtualKPasswordLineEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseUpdateMicroFocus(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_UpdateMicroFocus_IsBase(true);
        vkpasswordlineedit->updateMicroFocus();
    } else {
        ((VirtualKPasswordLineEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnUpdateMicroFocus(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_Create(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->create();
    } else {
        ((VirtualKPasswordLineEdit*)self)->create();
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseCreate(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Create_IsBase(true);
        vkpasswordlineedit->create();
    } else {
        ((VirtualKPasswordLineEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnCreate(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Create_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPasswordLineEdit_Destroy(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->destroy();
    } else {
        ((VirtualKPasswordLineEdit*)self)->destroy();
    }
}

// Base class handler implementation
void KPasswordLineEdit_QBaseDestroy(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Destroy_IsBase(true);
        vkpasswordlineedit->destroy();
    } else {
        ((VirtualKPasswordLineEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnDestroy(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Destroy_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_FocusNextChild(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->focusNextChild();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseFocusNextChild(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusNextChild_IsBase(true);
        return vkpasswordlineedit->focusNextChild();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusNextChild(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusNextChild_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_FocusPreviousChild(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->focusPreviousChild();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseFocusPreviousChild(KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusPreviousChild_IsBase(true);
        return vkpasswordlineedit->focusPreviousChild();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnFocusPreviousChild(KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = dynamic_cast<VirtualKPasswordLineEdit*>(self);
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPasswordLineEdit_Sender(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->sender();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPasswordLineEdit_QBaseSender(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Sender_IsBase(true);
        return vkpasswordlineedit->sender();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSender(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Sender_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordLineEdit_SenderSignalIndex(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->senderSignalIndex();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPasswordLineEdit_QBaseSenderSignalIndex(const KPasswordLineEdit* self) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SenderSignalIndex_IsBase(true);
        return vkpasswordlineedit->senderSignalIndex();
    } else {
        return ((VirtualKPasswordLineEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnSenderSignalIndex(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPasswordLineEdit_Receivers(const KPasswordLineEdit* self, const char* signal) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->receivers(signal);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPasswordLineEdit_QBaseReceivers(const KPasswordLineEdit* self, const char* signal) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Receivers_IsBase(true);
        return vkpasswordlineedit->receivers(signal);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnReceivers(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_Receivers_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPasswordLineEdit_IsSignalConnected(const KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPasswordLineEdit_QBaseIsSignalConnected(const KPasswordLineEdit* self, const QMetaMethod* signal) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_IsSignalConnected_IsBase(true);
        return vkpasswordlineedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKPasswordLineEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnIsSignalConnected(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPasswordLineEdit_GetDecodedMetricF(const KPasswordLineEdit* self, int metricA, int metricB) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        return vkpasswordlineedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPasswordLineEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPasswordLineEdit_QBaseGetDecodedMetricF(const KPasswordLineEdit* self, int metricA, int metricB) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_GetDecodedMetricF_IsBase(true);
        return vkpasswordlineedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPasswordLineEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPasswordLineEdit_OnGetDecodedMetricF(const KPasswordLineEdit* self, intptr_t slot) {
    auto* vkpasswordlineedit = const_cast<VirtualKPasswordLineEdit*>(dynamic_cast<const VirtualKPasswordLineEdit*>(self));
    if (vkpasswordlineedit && vkpasswordlineedit->isVirtualKPasswordLineEdit) {
        vkpasswordlineedit->setKPasswordLineEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPasswordLineEdit::KPasswordLineEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void KPasswordLineEdit_Delete(KPasswordLineEdit* self) {
    delete self;
}
