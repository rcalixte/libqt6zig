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
#include <QRadioButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qradiobutton.h>
#include "libqradiobutton.h"
#include "libqradiobutton.hxx"

QRadioButton* QRadioButton_new(QWidget* parent) {
    return new VirtualQRadioButton(parent);
}

QRadioButton* QRadioButton_new2() {
    return new VirtualQRadioButton();
}

QRadioButton* QRadioButton_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQRadioButton(text_QString);
}

QRadioButton* QRadioButton_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQRadioButton(text_QString, parent);
}

QMetaObject* QRadioButton_MetaObject(const QRadioButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRadioButton_Metacast(QRadioButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRadioButton_Metacall(QRadioButton* self, int param1, int param2, void** param3) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRadioButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnMetacall(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Metacall_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRadioButton_QBaseMetacall(QRadioButton* self, int param1, int param2, void** param3) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Metacall_IsBase(true);
        return vqradiobutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRadioButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRadioButton_Tr(const char* s) {
    QString _ret = QRadioButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QRadioButton_SizeHint(const QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQRadioButton*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnSizeHint(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SizeHint_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QRadioButton_QBaseSizeHint(const QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SizeHint_IsBase(true);
        return new QSize(vqradiobutton->sizeHint());
    } else {
        return new QSize(((VirtualQRadioButton*)self)->sizeHint());
    }
}

QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQRadioButton*)self)->minimumSizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnMinimumSizeHint(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MinimumSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QRadioButton_QBaseMinimumSizeHint(const QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqradiobutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualQRadioButton*)self)->minimumSizeHint());
    }
}

bool QRadioButton_Event(QRadioButton* self, QEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->event(e);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Event_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QRadioButton_QBaseEvent(QRadioButton* self, QEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Event_IsBase(true);
        return vqradiobutton->event(e);
    }
    return {};
}

bool QRadioButton_HitButton(const QRadioButton* self, const QPoint* param1) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->hitButton(*param1);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnHitButton(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HitButton_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HitButton_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QRadioButton_QBaseHitButton(const QRadioButton* self, const QPoint* param1) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HitButton_IsBase(true);
        return vqradiobutton->hitButton(*param1);
    }
    return {};
}

void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnPaintEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_PaintEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRadioButton_QBasePaintEvent(QRadioButton* self, QPaintEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_PaintEvent_IsBase(true);
        vqradiobutton->paintEvent(param1);
    }
}

void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->mouseMoveEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnMouseMoveEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseMoveEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRadioButton_QBaseMouseMoveEvent(QRadioButton* self, QMouseEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MouseMoveEvent_IsBase(true);
        vqradiobutton->mouseMoveEvent(param1);
    }
}

void QRadioButton_InitStyleOption(const QRadioButton* self, QStyleOptionButton* button) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->initStyleOption(button);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnInitStyleOption(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InitStyleOption_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QRadioButton_QBaseInitStyleOption(const QRadioButton* self, QStyleOptionButton* button) {
    auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InitStyleOption_IsBase(true);
        vqradiobutton->initStyleOption(button);
    }
}

libqt_string QRadioButton_Tr2(const char* s, const char* c) {
    QString _ret = QRadioButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRadioButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRadioButton::tr(s, c, static_cast<int>(n));
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
void QRadioButton_CheckStateSet(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->checkStateSet();
    } else {
        ((VirtualQRadioButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void QRadioButton_QBaseCheckStateSet(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_CheckStateSet_IsBase(true);
        vqradiobutton->checkStateSet();
    } else {
        ((VirtualQRadioButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCheckStateSet(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_CheckStateSet_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_NextCheckState(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->nextCheckState();
    } else {
        ((VirtualQRadioButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void QRadioButton_QBaseNextCheckState(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_NextCheckState_IsBase(true);
        vqradiobutton->nextCheckState();
    } else {
        ((VirtualQRadioButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnNextCheckState(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_NextCheckState_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_KeyPressEvent(QRadioButton* self, QKeyEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->keyPressEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseKeyPressEvent(QRadioButton* self, QKeyEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_KeyPressEvent_IsBase(true);
        vqradiobutton->keyPressEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnKeyPressEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_KeyReleaseEvent(QRadioButton* self, QKeyEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->keyReleaseEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseKeyReleaseEvent(QRadioButton* self, QKeyEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_KeyReleaseEvent_IsBase(true);
        vqradiobutton->keyReleaseEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnKeyReleaseEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MousePressEvent(QRadioButton* self, QMouseEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->mousePressEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMousePressEvent(QRadioButton* self, QMouseEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MousePressEvent_IsBase(true);
        vqradiobutton->mousePressEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMousePressEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MousePressEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MouseReleaseEvent(QRadioButton* self, QMouseEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMouseReleaseEvent(QRadioButton* self, QMouseEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MouseReleaseEvent_IsBase(true);
        vqradiobutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseReleaseEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_FocusInEvent(QRadioButton* self, QFocusEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->focusInEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseFocusInEvent(QRadioButton* self, QFocusEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusInEvent_IsBase(true);
        vqradiobutton->focusInEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusInEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusInEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_FocusOutEvent(QRadioButton* self, QFocusEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->focusOutEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseFocusOutEvent(QRadioButton* self, QFocusEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusOutEvent_IsBase(true);
        vqradiobutton->focusOutEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusOutEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ChangeEvent(QRadioButton* self, QEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->changeEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseChangeEvent(QRadioButton* self, QEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ChangeEvent_IsBase(true);
        vqradiobutton->changeEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnChangeEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ChangeEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_TimerEvent(QRadioButton* self, QTimerEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->timerEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseTimerEvent(QRadioButton* self, QTimerEvent* e) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_TimerEvent_IsBase(true);
        vqradiobutton->timerEvent(e);
    } else {
        ((VirtualQRadioButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnTimerEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_TimerEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_DevType(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->devType();
    } else {
        return self->QRadioButton::devType();
    }
}

// Base class handler implementation
int QRadioButton_QBaseDevType(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DevType_IsBase(true);
        return vqradiobutton->devType();
    } else {
        return self->QRadioButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDevType(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DevType_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_SetVisible(QRadioButton* self, bool visible) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setVisible(visible);
    } else {
        self->QRadioButton::setVisible(visible);
    }
}

// Base class handler implementation
void QRadioButton_QBaseSetVisible(QRadioButton* self, bool visible) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SetVisible_IsBase(true);
        vqradiobutton->setVisible(visible);
    } else {
        self->QRadioButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSetVisible(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SetVisible_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_HeightForWidth(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QRadioButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QRadioButton_QBaseHeightForWidth(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HeightForWidth_IsBase(true);
        return vqradiobutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QRadioButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHeightForWidth(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HeightForWidth_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_HasHeightForWidth(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->hasHeightForWidth();
    } else {
        return self->QRadioButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QRadioButton_QBaseHasHeightForWidth(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HasHeightForWidth_IsBase(true);
        return vqradiobutton->hasHeightForWidth();
    } else {
        return self->QRadioButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHasHeightForWidth(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QRadioButton_PaintEngine(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->paintEngine();
    } else {
        return self->QRadioButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QRadioButton_QBasePaintEngine(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_PaintEngine_IsBase(true);
        return vqradiobutton->paintEngine();
    } else {
        return self->QRadioButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnPaintEngine(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_PaintEngine_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MouseDoubleClickEvent_IsBase(true);
        vqradiobutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseDoubleClickEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_WheelEvent(QRadioButton* self, QWheelEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->wheelEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseWheelEvent(QRadioButton* self, QWheelEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_WheelEvent_IsBase(true);
        vqradiobutton->wheelEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnWheelEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_WheelEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_EnterEvent(QRadioButton* self, QEnterEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->enterEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseEnterEvent(QRadioButton* self, QEnterEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_EnterEvent_IsBase(true);
        vqradiobutton->enterEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEnterEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_EnterEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_LeaveEvent(QRadioButton* self, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->leaveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseLeaveEvent(QRadioButton* self, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_LeaveEvent_IsBase(true);
        vqradiobutton->leaveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnLeaveEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_LeaveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MoveEvent(QRadioButton* self, QMoveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->moveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMoveEvent(QRadioButton* self, QMoveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MoveEvent_IsBase(true);
        vqradiobutton->moveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMoveEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_MoveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ResizeEvent(QRadioButton* self, QResizeEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->resizeEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseResizeEvent(QRadioButton* self, QResizeEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ResizeEvent_IsBase(true);
        vqradiobutton->resizeEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnResizeEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ResizeEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_CloseEvent(QRadioButton* self, QCloseEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->closeEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseCloseEvent(QRadioButton* self, QCloseEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_CloseEvent_IsBase(true);
        vqradiobutton->closeEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCloseEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_CloseEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ContextMenuEvent(QRadioButton* self, QContextMenuEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->contextMenuEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseContextMenuEvent(QRadioButton* self, QContextMenuEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ContextMenuEvent_IsBase(true);
        vqradiobutton->contextMenuEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnContextMenuEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_TabletEvent(QRadioButton* self, QTabletEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->tabletEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseTabletEvent(QRadioButton* self, QTabletEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_TabletEvent_IsBase(true);
        vqradiobutton->tabletEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnTabletEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_TabletEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ActionEvent(QRadioButton* self, QActionEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->actionEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseActionEvent(QRadioButton* self, QActionEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ActionEvent_IsBase(true);
        vqradiobutton->actionEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnActionEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ActionEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DragEnterEvent(QRadioButton* self, QDragEnterEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->dragEnterEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDragEnterEvent(QRadioButton* self, QDragEnterEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DragEnterEvent_IsBase(true);
        vqradiobutton->dragEnterEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragEnterEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DragMoveEvent(QRadioButton* self, QDragMoveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->dragMoveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDragMoveEvent(QRadioButton* self, QDragMoveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DragMoveEvent_IsBase(true);
        vqradiobutton->dragMoveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragMoveEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->dragLeaveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DragLeaveEvent_IsBase(true);
        vqradiobutton->dragLeaveEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragLeaveEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DropEvent(QRadioButton* self, QDropEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->dropEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDropEvent(QRadioButton* self, QDropEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DropEvent_IsBase(true);
        vqradiobutton->dropEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDropEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DropEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ShowEvent(QRadioButton* self, QShowEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->showEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseShowEvent(QRadioButton* self, QShowEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ShowEvent_IsBase(true);
        vqradiobutton->showEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnShowEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ShowEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_HideEvent(QRadioButton* self, QHideEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->hideEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseHideEvent(QRadioButton* self, QHideEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HideEvent_IsBase(true);
        vqradiobutton->hideEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHideEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_HideEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_NativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQRadioButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QRadioButton_QBaseNativeEvent(QRadioButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_NativeEvent_IsBase(true);
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQRadioButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnNativeEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_NativeEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_Metric(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQRadioButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QRadioButton_QBaseMetric(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Metric_IsBase(true);
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQRadioButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMetric(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Metric_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_InitPainter(const QRadioButton* self, QPainter* painter) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->initPainter(painter);
    } else {
        ((VirtualQRadioButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QRadioButton_QBaseInitPainter(const QRadioButton* self, QPainter* painter) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InitPainter_IsBase(true);
        vqradiobutton->initPainter(painter);
    } else {
        ((VirtualQRadioButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInitPainter(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InitPainter_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QRadioButton_Redirected(const QRadioButton* self, QPoint* offset) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->redirected(offset);
    } else {
        return ((VirtualQRadioButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QRadioButton_QBaseRedirected(const QRadioButton* self, QPoint* offset) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Redirected_IsBase(true);
        return vqradiobutton->redirected(offset);
    } else {
        return ((VirtualQRadioButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnRedirected(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Redirected_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QRadioButton_SharedPainter(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->sharedPainter();
    } else {
        return ((VirtualQRadioButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QRadioButton_QBaseSharedPainter(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SharedPainter_IsBase(true);
        return vqradiobutton->sharedPainter();
    } else {
        return ((VirtualQRadioButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSharedPainter(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SharedPainter_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_InputMethodEvent(QRadioButton* self, QInputMethodEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->inputMethodEvent(param1);
    } else {
        ((VirtualQRadioButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QRadioButton_QBaseInputMethodEvent(QRadioButton* self, QInputMethodEvent* param1) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InputMethodEvent_IsBase(true);
        vqradiobutton->inputMethodEvent(param1);
    } else {
        ((VirtualQRadioButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInputMethodEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QRadioButton_InputMethodQuery(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return new QVariant(vqradiobutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQRadioButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QRadioButton_QBaseInputMethodQuery(const QRadioButton* self, int param1) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqradiobutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQRadioButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInputMethodQuery(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_FocusNextPrevChild(QRadioButton* self, bool next) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQRadioButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseFocusNextPrevChild(QRadioButton* self, bool next) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusNextPrevChild_IsBase(true);
        return vqradiobutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQRadioButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusNextPrevChild(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_EventFilter(QRadioButton* self, QObject* watched, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->eventFilter(watched, event);
    } else {
        return self->QRadioButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseEventFilter(QRadioButton* self, QObject* watched, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_EventFilter_IsBase(true);
        return vqradiobutton->eventFilter(watched, event);
    } else {
        return self->QRadioButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEventFilter(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_EventFilter_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ChildEvent(QRadioButton* self, QChildEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->childEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseChildEvent(QRadioButton* self, QChildEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ChildEvent_IsBase(true);
        vqradiobutton->childEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnChildEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ChildEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_CustomEvent(QRadioButton* self, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->customEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseCustomEvent(QRadioButton* self, QEvent* event) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_CustomEvent_IsBase(true);
        vqradiobutton->customEvent(event);
    } else {
        ((VirtualQRadioButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCustomEvent(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_CustomEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ConnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->connectNotify(*signal);
    } else {
        ((VirtualQRadioButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRadioButton_QBaseConnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ConnectNotify_IsBase(true);
        vqradiobutton->connectNotify(*signal);
    } else {
        ((VirtualQRadioButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnConnectNotify(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_ConnectNotify_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DisconnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->disconnectNotify(*signal);
    } else {
        ((VirtualQRadioButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDisconnectNotify(QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DisconnectNotify_IsBase(true);
        vqradiobutton->disconnectNotify(*signal);
    } else {
        ((VirtualQRadioButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDisconnectNotify(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_UpdateMicroFocus(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->updateMicroFocus();
    } else {
        ((VirtualQRadioButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QRadioButton_QBaseUpdateMicroFocus(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_UpdateMicroFocus_IsBase(true);
        vqradiobutton->updateMicroFocus();
    } else {
        ((VirtualQRadioButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnUpdateMicroFocus(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_Create(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->create();
    } else {
        ((VirtualQRadioButton*)self)->create();
    }
}

// Base class handler implementation
void QRadioButton_QBaseCreate(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Create_IsBase(true);
        vqradiobutton->create();
    } else {
        ((VirtualQRadioButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCreate(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Create_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_Destroy(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->destroy();
    } else {
        ((VirtualQRadioButton*)self)->destroy();
    }
}

// Base class handler implementation
void QRadioButton_QBaseDestroy(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Destroy_IsBase(true);
        vqradiobutton->destroy();
    } else {
        ((VirtualQRadioButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDestroy(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Destroy_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_FocusNextChild(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->focusNextChild();
    } else {
        return ((VirtualQRadioButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QRadioButton_QBaseFocusNextChild(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusNextChild_IsBase(true);
        return vqradiobutton->focusNextChild();
    } else {
        return ((VirtualQRadioButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusNextChild(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusNextChild_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_FocusPreviousChild(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->focusPreviousChild();
    } else {
        return ((VirtualQRadioButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QRadioButton_QBaseFocusPreviousChild(QRadioButton* self) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusPreviousChild_IsBase(true);
        return vqradiobutton->focusPreviousChild();
    } else {
        return ((VirtualQRadioButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusPreviousChild(QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self);
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRadioButton_Sender(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->sender();
    } else {
        return ((VirtualQRadioButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* QRadioButton_QBaseSender(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Sender_IsBase(true);
        return vqradiobutton->sender();
    } else {
        return ((VirtualQRadioButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSender(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Sender_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_SenderSignalIndex(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->senderSignalIndex();
    } else {
        return ((VirtualQRadioButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QRadioButton_QBaseSenderSignalIndex(const QRadioButton* self) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SenderSignalIndex_IsBase(true);
        return vqradiobutton->senderSignalIndex();
    } else {
        return ((VirtualQRadioButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSenderSignalIndex(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_Receivers(const QRadioButton* self, const char* signal) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->receivers(signal);
    } else {
        return ((VirtualQRadioButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QRadioButton_QBaseReceivers(const QRadioButton* self, const char* signal) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Receivers_IsBase(true);
        return vqradiobutton->receivers(signal);
    } else {
        return ((VirtualQRadioButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnReceivers(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_Receivers_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_IsSignalConnected(const QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQRadioButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseIsSignalConnected(const QRadioButton* self, const QMetaMethod* signal) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_IsSignalConnected_IsBase(true);
        return vqradiobutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQRadioButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnIsSignalConnected(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QRadioButton_GetDecodedMetricF(const QRadioButton* self, int metricA, int metricB) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        return vqradiobutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQRadioButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QRadioButton_QBaseGetDecodedMetricF(const QRadioButton* self, int metricA, int metricB) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_GetDecodedMetricF_IsBase(true);
        return vqradiobutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQRadioButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnGetDecodedMetricF(const QRadioButton* self, intptr_t slot) {
    auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self));
    if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
        vqradiobutton->setQRadioButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_GetDecodedMetricF_Callback>(slot));
    }
}

void QRadioButton_Delete(QRadioButton* self) {
    delete self;
}
