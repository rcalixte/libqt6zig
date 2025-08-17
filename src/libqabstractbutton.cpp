#include <QAbstractButton>
#include <QActionEvent>
#include <QButtonGroup>
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
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
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
#include <qabstractbutton.h>
#include "libqabstractbutton.h"
#include "libqabstractbutton.hxx"

QAbstractButton* QAbstractButton_new(QWidget* parent) {
    return new VirtualQAbstractButton(parent);
}

QAbstractButton* QAbstractButton_new2() {
    return new VirtualQAbstractButton();
}

QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractButton_Metacall(QAbstractButton* self, int param1, int param2, void** param3) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractButton_OnMetacall(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Metacall_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractButton_QBaseMetacall(QAbstractButton* self, int param1, int param2, void** param3) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Metacall_IsBase(true);
        return vqabstractbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractButton_Tr(const char* s) {
    QString _ret = QAbstractButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractButton_SetText(QAbstractButton* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QAbstractButton_Text(const QAbstractButton* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractButton_SetIcon(QAbstractButton* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* QAbstractButton_Icon(const QAbstractButton* self) {
    return new QIcon(self->icon());
}

QSize* QAbstractButton_IconSize(const QAbstractButton* self) {
    return new QSize(self->iconSize());
}

void QAbstractButton_SetShortcut(QAbstractButton* self, const QKeySequence* key) {
    self->setShortcut(*key);
}

QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self) {
    return new QKeySequence(self->shortcut());
}

void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QAbstractButton_IsCheckable(const QAbstractButton* self) {
    return self->isCheckable();
}

bool QAbstractButton_IsChecked(const QAbstractButton* self) {
    return self->isChecked();
}

void QAbstractButton_SetDown(QAbstractButton* self, bool down) {
    self->setDown(down);
}

bool QAbstractButton_IsDown(const QAbstractButton* self) {
    return self->isDown();
}

void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat) {
    self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_AutoRepeat(const QAbstractButton* self) {
    return self->autoRepeat();
}

void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
    self->setAutoRepeatDelay(static_cast<int>(autoRepeatDelay));
}

int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self) {
    return self->autoRepeatDelay();
}

void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
    self->setAutoRepeatInterval(static_cast<int>(autoRepeatInterval));
}

int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self) {
    return self->autoRepeatInterval();
}

void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive) {
    self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_AutoExclusive(const QAbstractButton* self) {
    return self->autoExclusive();
}

QButtonGroup* QAbstractButton_Group(const QAbstractButton* self) {
    return self->group();
}

void QAbstractButton_SetIconSize(QAbstractButton* self, const QSize* size) {
    self->setIconSize(*size);
}

void QAbstractButton_AnimateClick(QAbstractButton* self) {
    self->animateClick();
}

void QAbstractButton_Click(QAbstractButton* self) {
    self->click();
}

void QAbstractButton_Toggle(QAbstractButton* self) {
    self->toggle();
}

void QAbstractButton_SetChecked(QAbstractButton* self, bool checked) {
    self->setChecked(checked);
}

void QAbstractButton_Pressed(QAbstractButton* self) {
    self->pressed();
}

void QAbstractButton_Connect_Pressed(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::pressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractButton_Released(QAbstractButton* self) {
    self->released();
}

void QAbstractButton_Connect_Released(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::released, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractButton_Clicked(QAbstractButton* self) {
    self->clicked();
}

void QAbstractButton_Connect_Clicked(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractButton_Toggled(QAbstractButton* self, bool checked) {
    self->toggled(checked);
}

void QAbstractButton_Connect_Toggled(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::toggled, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractButton_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractButton_Clicked1(QAbstractButton* self, bool checked) {
    self->clicked(checked);
}

void QAbstractButton_Connect_Clicked1(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::clicked, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

// Derived class handler implementation
void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->paintEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_PaintEvent_IsBase(true);
        vqabstractbutton->paintEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_HitButton(const QAbstractButton* self, const QPoint* pos) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->hitButton(*pos);
    } else {
        return ((VirtualQAbstractButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, const QPoint* pos) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HitButton_IsBase(true);
        return vqabstractbutton->hitButton(*pos);
    } else {
        return ((VirtualQAbstractButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHitButton(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HitButton_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_CheckStateSet(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->checkStateSet();
    } else {
        ((VirtualQAbstractButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_CheckStateSet_IsBase(true);
        vqabstractbutton->checkStateSet();
    } else {
        ((VirtualQAbstractButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCheckStateSet(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_CheckStateSet_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_NextCheckState(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->nextCheckState();
    } else {
        ((VirtualQAbstractButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseNextCheckState(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_NextCheckState_IsBase(true);
        vqabstractbutton->nextCheckState();
    } else {
        ((VirtualQAbstractButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNextCheckState(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_NextCheckState_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_Event(QAbstractButton* self, QEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->event(e);
    } else {
        return ((VirtualQAbstractButton*)self)->event(e);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Event_IsBase(true);
        return vqabstractbutton->event(e);
    } else {
        return ((VirtualQAbstractButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Event_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->keyPressEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_KeyPressEvent_IsBase(true);
        vqabstractbutton->keyPressEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyPressEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->keyReleaseEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_KeyReleaseEvent_IsBase(true);
        vqabstractbutton->keyReleaseEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyReleaseEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->mousePressEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MousePressEvent_IsBase(true);
        vqabstractbutton->mousePressEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMousePressEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MouseReleaseEvent_IsBase(true);
        vqabstractbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseReleaseEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->mouseMoveEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MouseMoveEvent_IsBase(true);
        vqabstractbutton->mouseMoveEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseMoveEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->focusInEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusInEvent_IsBase(true);
        vqabstractbutton->focusInEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusInEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->focusOutEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusOutEvent_IsBase(true);
        vqabstractbutton->focusOutEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusOutEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->changeEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ChangeEvent_IsBase(true);
        vqabstractbutton->changeEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChangeEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->timerEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_TimerEvent_IsBase(true);
        vqabstractbutton->timerEvent(e);
    } else {
        ((VirtualQAbstractButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTimerEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_DevType(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->devType();
    } else {
        return self->QAbstractButton::devType();
    }
}

// Base class handler implementation
int QAbstractButton_QBaseDevType(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DevType_IsBase(true);
        return vqabstractbutton->devType();
    } else {
        return self->QAbstractButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDevType(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DevType_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_SetVisible(QAbstractButton* self, bool visible) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setVisible(visible);
    } else {
        self->QAbstractButton::setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseSetVisible(QAbstractButton* self, bool visible) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SetVisible_IsBase(true);
        vqabstractbutton->setVisible(visible);
    } else {
        self->QAbstractButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSetVisible(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SetVisible_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractButton_SizeHint(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return new QSize(vqabstractbutton->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractButton_QBaseSizeHint(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SizeHint_IsBase(true);
        return new QSize(vqabstractbutton->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSizeHint(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SizeHint_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractButton_MinimumSizeHint(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return new QSize(vqabstractbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractButton_QBaseMinimumSizeHint(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMinimumSizeHint(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_HeightForWidth(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractButton_QBaseHeightForWidth(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HeightForWidth_IsBase(true);
        return vqabstractbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHeightForWidth(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_HasHeightForWidth(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->hasHeightForWidth();
    } else {
        return self->QAbstractButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseHasHeightForWidth(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HasHeightForWidth_IsBase(true);
        return vqabstractbutton->hasHeightForWidth();
    } else {
        return self->QAbstractButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHasHeightForWidth(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractButton_PaintEngine(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->paintEngine();
    } else {
        return self->QAbstractButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractButton_QBasePaintEngine(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_PaintEngine_IsBase(true);
        return vqabstractbutton->paintEngine();
    } else {
        return self->QAbstractButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEngine(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MouseDoubleClickEvent_IsBase(true);
        vqabstractbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseDoubleClickEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_WheelEvent(QAbstractButton* self, QWheelEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->wheelEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseWheelEvent(QAbstractButton* self, QWheelEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_WheelEvent_IsBase(true);
        vqabstractbutton->wheelEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnWheelEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_EnterEvent(QAbstractButton* self, QEnterEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->enterEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseEnterEvent(QAbstractButton* self, QEnterEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_EnterEvent_IsBase(true);
        vqabstractbutton->enterEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEnterEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_LeaveEvent(QAbstractButton* self, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->leaveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseLeaveEvent(QAbstractButton* self, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_LeaveEvent_IsBase(true);
        vqabstractbutton->leaveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnLeaveEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MoveEvent(QAbstractButton* self, QMoveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->moveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMoveEvent(QAbstractButton* self, QMoveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MoveEvent_IsBase(true);
        vqabstractbutton->moveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMoveEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ResizeEvent(QAbstractButton* self, QResizeEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->resizeEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseResizeEvent(QAbstractButton* self, QResizeEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ResizeEvent_IsBase(true);
        vqabstractbutton->resizeEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnResizeEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_CloseEvent(QAbstractButton* self, QCloseEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->closeEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCloseEvent(QAbstractButton* self, QCloseEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_CloseEvent_IsBase(true);
        vqabstractbutton->closeEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCloseEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->contextMenuEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ContextMenuEvent_IsBase(true);
        vqabstractbutton->contextMenuEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnContextMenuEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_TabletEvent(QAbstractButton* self, QTabletEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->tabletEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseTabletEvent(QAbstractButton* self, QTabletEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_TabletEvent_IsBase(true);
        vqabstractbutton->tabletEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTabletEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ActionEvent(QAbstractButton* self, QActionEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->actionEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseActionEvent(QAbstractButton* self, QActionEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ActionEvent_IsBase(true);
        vqabstractbutton->actionEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnActionEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DragEnterEvent(QAbstractButton* self, QDragEnterEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDragEnterEvent(QAbstractButton* self, QDragEnterEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DragEnterEvent_IsBase(true);
        vqabstractbutton->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragEnterEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DragMoveEvent(QAbstractButton* self, QDragMoveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDragMoveEvent(QAbstractButton* self, QDragMoveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DragMoveEvent_IsBase(true);
        vqabstractbutton->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragMoveEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DragLeaveEvent_IsBase(true);
        vqabstractbutton->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragLeaveEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DropEvent(QAbstractButton* self, QDropEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->dropEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDropEvent(QAbstractButton* self, QDropEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DropEvent_IsBase(true);
        vqabstractbutton->dropEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDropEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DropEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ShowEvent(QAbstractButton* self, QShowEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->showEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseShowEvent(QAbstractButton* self, QShowEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ShowEvent_IsBase(true);
        vqabstractbutton->showEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnShowEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_HideEvent(QAbstractButton* self, QHideEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->hideEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseHideEvent(QAbstractButton* self, QHideEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HideEvent_IsBase(true);
        vqabstractbutton->hideEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHideEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_HideEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_NativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseNativeEvent(QAbstractButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_NativeEvent_IsBase(true);
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNativeEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_Metric(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractButton_QBaseMetric(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Metric_IsBase(true);
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMetric(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Metric_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_InitPainter(const QAbstractButton* self, QPainter* painter) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->initPainter(painter);
    } else {
        ((VirtualQAbstractButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseInitPainter(const QAbstractButton* self, QPainter* painter) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_InitPainter_IsBase(true);
        vqabstractbutton->initPainter(painter);
    } else {
        ((VirtualQAbstractButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInitPainter(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_InitPainter_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractButton_Redirected(const QAbstractButton* self, QPoint* offset) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->redirected(offset);
    } else {
        return ((VirtualQAbstractButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractButton_QBaseRedirected(const QAbstractButton* self, QPoint* offset) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Redirected_IsBase(true);
        return vqabstractbutton->redirected(offset);
    } else {
        return ((VirtualQAbstractButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnRedirected(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Redirected_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractButton_SharedPainter(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->sharedPainter();
    } else {
        return ((VirtualQAbstractButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractButton_QBaseSharedPainter(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SharedPainter_IsBase(true);
        return vqabstractbutton->sharedPainter();
    } else {
        return ((VirtualQAbstractButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSharedPainter(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_InputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseInputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_InputMethodEvent_IsBase(true);
        vqabstractbutton->inputMethodEvent(param1);
    } else {
        ((VirtualQAbstractButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInputMethodEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractButton_InputMethodQuery(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return new QVariant(vqabstractbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractButton_QBaseInputMethodQuery(const QAbstractButton* self, int param1) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQAbstractButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInputMethodQuery(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_FocusNextPrevChild(QAbstractButton* self, bool next) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseFocusNextPrevChild(QAbstractButton* self, bool next) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusNextPrevChild_IsBase(true);
        return vqabstractbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusNextPrevChild(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_EventFilter(QAbstractButton* self, QObject* watched, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->eventFilter(watched, event);
    } else {
        return self->QAbstractButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseEventFilter(QAbstractButton* self, QObject* watched, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_EventFilter_IsBase(true);
        return vqabstractbutton->eventFilter(watched, event);
    } else {
        return self->QAbstractButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEventFilter(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_EventFilter_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ChildEvent(QAbstractButton* self, QChildEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->childEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseChildEvent(QAbstractButton* self, QChildEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ChildEvent_IsBase(true);
        vqabstractbutton->childEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChildEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_CustomEvent(QAbstractButton* self, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->customEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCustomEvent(QAbstractButton* self, QEvent* event) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_CustomEvent_IsBase(true);
        vqabstractbutton->customEvent(event);
    } else {
        ((VirtualQAbstractButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCustomEvent(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ConnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->connectNotify(*signal);
    } else {
        ((VirtualQAbstractButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseConnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ConnectNotify_IsBase(true);
        vqabstractbutton->connectNotify(*signal);
    } else {
        ((VirtualQAbstractButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnConnectNotify(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DisconnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDisconnectNotify(QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DisconnectNotify_IsBase(true);
        vqabstractbutton->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDisconnectNotify(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_UpdateMicroFocus(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->updateMicroFocus();
    } else {
        ((VirtualQAbstractButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseUpdateMicroFocus(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_UpdateMicroFocus_IsBase(true);
        vqabstractbutton->updateMicroFocus();
    } else {
        ((VirtualQAbstractButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnUpdateMicroFocus(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_Create(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->create();
    } else {
        ((VirtualQAbstractButton*)self)->create();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCreate(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Create_IsBase(true);
        vqabstractbutton->create();
    } else {
        ((VirtualQAbstractButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCreate(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Create_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_Destroy(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->destroy();
    } else {
        ((VirtualQAbstractButton*)self)->destroy();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDestroy(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Destroy_IsBase(true);
        vqabstractbutton->destroy();
    } else {
        ((VirtualQAbstractButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDestroy(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Destroy_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_FocusNextChild(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->focusNextChild();
    } else {
        return ((VirtualQAbstractButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseFocusNextChild(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusNextChild_IsBase(true);
        return vqabstractbutton->focusNextChild();
    } else {
        return ((VirtualQAbstractButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusNextChild(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_FocusPreviousChild(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->focusPreviousChild();
    } else {
        return ((VirtualQAbstractButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseFocusPreviousChild(QAbstractButton* self) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusPreviousChild_IsBase(true);
        return vqabstractbutton->focusPreviousChild();
    } else {
        return ((VirtualQAbstractButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusPreviousChild(QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self);
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractButton_Sender(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->sender();
    } else {
        return ((VirtualQAbstractButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractButton_QBaseSender(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Sender_IsBase(true);
        return vqabstractbutton->sender();
    } else {
        return ((VirtualQAbstractButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSender(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Sender_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_SenderSignalIndex(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->senderSignalIndex();
    } else {
        return ((VirtualQAbstractButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractButton_QBaseSenderSignalIndex(const QAbstractButton* self) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SenderSignalIndex_IsBase(true);
        return vqabstractbutton->senderSignalIndex();
    } else {
        return ((VirtualQAbstractButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSenderSignalIndex(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_Receivers(const QAbstractButton* self, const char* signal) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->receivers(signal);
    } else {
        return ((VirtualQAbstractButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractButton_QBaseReceivers(const QAbstractButton* self, const char* signal) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Receivers_IsBase(true);
        return vqabstractbutton->receivers(signal);
    } else {
        return ((VirtualQAbstractButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnReceivers(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_Receivers_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_IsSignalConnected(const QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseIsSignalConnected(const QAbstractButton* self, const QMetaMethod* signal) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_IsSignalConnected_IsBase(true);
        return vqabstractbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnIsSignalConnected(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QAbstractButton_GetDecodedMetricF(const QAbstractButton* self, int metricA, int metricB) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        return vqabstractbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QAbstractButton_QBaseGetDecodedMetricF(const QAbstractButton* self, int metricA, int metricB) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_GetDecodedMetricF_IsBase(true);
        return vqabstractbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnGetDecodedMetricF(const QAbstractButton* self, intptr_t slot) {
    auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self));
    if (vqabstractbutton && vqabstractbutton->isVirtualQAbstractButton) {
        vqabstractbutton->setQAbstractButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_GetDecodedMetricF_Callback>(slot));
    }
}

void QAbstractButton_Delete(QAbstractButton* self) {
    delete self;
}
