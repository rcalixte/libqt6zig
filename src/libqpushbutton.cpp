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
#include <QIcon>
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
#include <QPushButton>
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
#include <qpushbutton.h>
#include "libqpushbutton.h"
#include "libqpushbutton.hxx"

QPushButton* QPushButton_new(QWidget* parent) {
    return new VirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
    return new VirtualQPushButton();
}

QPushButton* QPushButton_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(const QIcon* icon, const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(*icon, text_QString, parent);
}

QMetaObject* QPushButton_MetaObject(const QPushButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPushButton_Metacast(QPushButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPushButton_Metacall(QPushButton* self, int param1, int param2, void** param3) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPushButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPushButton_Tr(const char* s) {
    QString _ret = QPushButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQPushButton*)self)->sizeHint());
    }
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPushButton*)self)->minimumSizeHint());
    }
}

bool QPushButton_AutoDefault(const QPushButton* self) {
    return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
    self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
    return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
    self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
    self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
    return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
    self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
    return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
    self->showMenu();
}

bool QPushButton_Event(QPushButton* self, QEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->event(e);
    }
    return {};
}

void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->paintEvent(param1);
    }
}

void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->keyPressEvent(param1);
    }
}

void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->focusInEvent(param1);
    }
}

void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->focusOutEvent(param1);
    }
}

void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->mouseMoveEvent(param1);
    }
}

void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
    auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->initStyleOption(option);
    }
}

bool QPushButton_HitButton(const QPushButton* self, const QPoint* pos) {
    auto* vqpushbutton = dynamic_cast<const VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->hitButton(*pos);
    }
    return {};
}

libqt_string QPushButton_Tr2(const char* s, const char* c) {
    QString _ret = QPushButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
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
int QPushButton_QBaseMetacall(QPushButton* self, int param1, int param2, void** param3) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Metacall_IsBase(true);
        return vqpushbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPushButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetacall(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Metacall_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QPushButton_QBaseSizeHint(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SizeHint_IsBase(true);
        return new QSize(vqpushbutton->sizeHint());
    } else {
        return new QSize(((VirtualQPushButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSizeHint(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QPushButton_QBaseMinimumSizeHint(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqpushbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPushButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMinimumSizeHint(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Event_IsBase(true);
        return vqpushbutton->event(e);
    } else {
        return ((VirtualQPushButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Event_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Event_Callback>(slot));
    }
}

// Base class handler implementation
void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_PaintEvent_IsBase(true);
        vqpushbutton->paintEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_PaintEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_KeyPressEvent_IsBase(true);
        vqpushbutton->keyPressEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyPressEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusInEvent_IsBase(true);
        vqpushbutton->focusInEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusInEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusInEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusInEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusOutEvent_IsBase(true);
        vqpushbutton->focusOutEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusOutEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusOutEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MouseMoveEvent_IsBase(true);
        vqpushbutton->mouseMoveEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseMoveEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InitStyleOption_IsBase(true);
        vqpushbutton->initStyleOption(option);
    } else {
        ((VirtualQPushButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitStyleOption(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InitStyleOption_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InitStyleOption_Callback>(slot));
    }
}

// Base class handler implementation
bool QPushButton_QBaseHitButton(const QPushButton* self, const QPoint* pos) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HitButton_IsBase(true);
        return vqpushbutton->hitButton(*pos);
    } else {
        return ((VirtualQPushButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHitButton(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HitButton_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_CheckStateSet(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->checkStateSet();
    } else {
        ((VirtualQPushButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void QPushButton_QBaseCheckStateSet(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_CheckStateSet_IsBase(true);
        vqpushbutton->checkStateSet();
    } else {
        ((VirtualQPushButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCheckStateSet(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_CheckStateSet_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_NextCheckState(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->nextCheckState();
    } else {
        ((VirtualQPushButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void QPushButton_QBaseNextCheckState(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_NextCheckState_IsBase(true);
        vqpushbutton->nextCheckState();
    } else {
        ((VirtualQPushButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnNextCheckState(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_NextCheckState_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_KeyReleaseEvent(QPushButton* self, QKeyEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->keyReleaseEvent(e);
    } else {
        ((VirtualQPushButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseKeyReleaseEvent(QPushButton* self, QKeyEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_KeyReleaseEvent_IsBase(true);
        vqpushbutton->keyReleaseEvent(e);
    } else {
        ((VirtualQPushButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyReleaseEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MousePressEvent(QPushButton* self, QMouseEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->mousePressEvent(e);
    } else {
        ((VirtualQPushButton*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseMousePressEvent(QPushButton* self, QMouseEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MousePressEvent_IsBase(true);
        vqpushbutton->mousePressEvent(e);
    } else {
        ((VirtualQPushButton*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMousePressEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MousePressEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MouseReleaseEvent(QPushButton* self, QMouseEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQPushButton*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseMouseReleaseEvent(QPushButton* self, QMouseEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MouseReleaseEvent_IsBase(true);
        vqpushbutton->mouseReleaseEvent(e);
    } else {
        ((VirtualQPushButton*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseReleaseEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ChangeEvent(QPushButton* self, QEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->changeEvent(e);
    } else {
        ((VirtualQPushButton*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseChangeEvent(QPushButton* self, QEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ChangeEvent_IsBase(true);
        vqpushbutton->changeEvent(e);
    } else {
        ((VirtualQPushButton*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnChangeEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ChangeEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_TimerEvent(QPushButton* self, QTimerEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->timerEvent(e);
    } else {
        ((VirtualQPushButton*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseTimerEvent(QPushButton* self, QTimerEvent* e) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_TimerEvent_IsBase(true);
        vqpushbutton->timerEvent(e);
    } else {
        ((VirtualQPushButton*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnTimerEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_TimerEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_DevType(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->devType();
    } else {
        return self->QPushButton::devType();
    }
}

// Base class handler implementation
int QPushButton_QBaseDevType(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DevType_IsBase(true);
        return vqpushbutton->devType();
    } else {
        return self->QPushButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDevType(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DevType_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_SetVisible(QPushButton* self, bool visible) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setVisible(visible);
    } else {
        self->QPushButton::setVisible(visible);
    }
}

// Base class handler implementation
void QPushButton_QBaseSetVisible(QPushButton* self, bool visible) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SetVisible_IsBase(true);
        vqpushbutton->setVisible(visible);
    } else {
        self->QPushButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSetVisible(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SetVisible_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_HeightForWidth(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPushButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPushButton_QBaseHeightForWidth(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HeightForWidth_IsBase(true);
        return vqpushbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPushButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHeightForWidth(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HeightForWidth_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_HasHeightForWidth(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->hasHeightForWidth();
    } else {
        return self->QPushButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPushButton_QBaseHasHeightForWidth(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HasHeightForWidth_IsBase(true);
        return vqpushbutton->hasHeightForWidth();
    } else {
        return self->QPushButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHasHeightForWidth(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPushButton_PaintEngine(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->paintEngine();
    } else {
        return self->QPushButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPushButton_QBasePaintEngine(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_PaintEngine_IsBase(true);
        return vqpushbutton->paintEngine();
    } else {
        return self->QPushButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEngine(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_PaintEngine_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MouseDoubleClickEvent(QPushButton* self, QMouseEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPushButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MouseDoubleClickEvent_IsBase(true);
        vqpushbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPushButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseDoubleClickEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_WheelEvent(QPushButton* self, QWheelEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->wheelEvent(event);
    } else {
        ((VirtualQPushButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseWheelEvent(QPushButton* self, QWheelEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_WheelEvent_IsBase(true);
        vqpushbutton->wheelEvent(event);
    } else {
        ((VirtualQPushButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnWheelEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_WheelEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_EnterEvent(QPushButton* self, QEnterEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->enterEvent(event);
    } else {
        ((VirtualQPushButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseEnterEvent(QPushButton* self, QEnterEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_EnterEvent_IsBase(true);
        vqpushbutton->enterEvent(event);
    } else {
        ((VirtualQPushButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEnterEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_EnterEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_LeaveEvent(QPushButton* self, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->leaveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseLeaveEvent(QPushButton* self, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_LeaveEvent_IsBase(true);
        vqpushbutton->leaveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnLeaveEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_LeaveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MoveEvent(QPushButton* self, QMoveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->moveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseMoveEvent(QPushButton* self, QMoveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MoveEvent_IsBase(true);
        vqpushbutton->moveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMoveEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_MoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ResizeEvent(QPushButton* self, QResizeEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->resizeEvent(event);
    } else {
        ((VirtualQPushButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseResizeEvent(QPushButton* self, QResizeEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ResizeEvent_IsBase(true);
        vqpushbutton->resizeEvent(event);
    } else {
        ((VirtualQPushButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnResizeEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ResizeEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_CloseEvent(QPushButton* self, QCloseEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->closeEvent(event);
    } else {
        ((VirtualQPushButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseCloseEvent(QPushButton* self, QCloseEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_CloseEvent_IsBase(true);
        vqpushbutton->closeEvent(event);
    } else {
        ((VirtualQPushButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCloseEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_CloseEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ContextMenuEvent(QPushButton* self, QContextMenuEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->contextMenuEvent(event);
    } else {
        ((VirtualQPushButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseContextMenuEvent(QPushButton* self, QContextMenuEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ContextMenuEvent_IsBase(true);
        vqpushbutton->contextMenuEvent(event);
    } else {
        ((VirtualQPushButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnContextMenuEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_TabletEvent(QPushButton* self, QTabletEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->tabletEvent(event);
    } else {
        ((VirtualQPushButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseTabletEvent(QPushButton* self, QTabletEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_TabletEvent_IsBase(true);
        vqpushbutton->tabletEvent(event);
    } else {
        ((VirtualQPushButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnTabletEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_TabletEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ActionEvent(QPushButton* self, QActionEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->actionEvent(event);
    } else {
        ((VirtualQPushButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseActionEvent(QPushButton* self, QActionEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ActionEvent_IsBase(true);
        vqpushbutton->actionEvent(event);
    } else {
        ((VirtualQPushButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnActionEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ActionEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DragEnterEvent(QPushButton* self, QDragEnterEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->dragEnterEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDragEnterEvent(QPushButton* self, QDragEnterEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DragEnterEvent_IsBase(true);
        vqpushbutton->dragEnterEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragEnterEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DragMoveEvent(QPushButton* self, QDragMoveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->dragMoveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDragMoveEvent(QPushButton* self, QDragMoveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DragMoveEvent_IsBase(true);
        vqpushbutton->dragMoveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragMoveEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DragLeaveEvent(QPushButton* self, QDragLeaveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->dragLeaveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DragLeaveEvent_IsBase(true);
        vqpushbutton->dragLeaveEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragLeaveEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DropEvent(QPushButton* self, QDropEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->dropEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDropEvent(QPushButton* self, QDropEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DropEvent_IsBase(true);
        vqpushbutton->dropEvent(event);
    } else {
        ((VirtualQPushButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDropEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DropEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ShowEvent(QPushButton* self, QShowEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->showEvent(event);
    } else {
        ((VirtualQPushButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseShowEvent(QPushButton* self, QShowEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ShowEvent_IsBase(true);
        vqpushbutton->showEvent(event);
    } else {
        ((VirtualQPushButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnShowEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ShowEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_HideEvent(QPushButton* self, QHideEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->hideEvent(event);
    } else {
        ((VirtualQPushButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseHideEvent(QPushButton* self, QHideEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HideEvent_IsBase(true);
        vqpushbutton->hideEvent(event);
    } else {
        ((VirtualQPushButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHideEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_HideEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_NativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPushButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPushButton_QBaseNativeEvent(QPushButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_NativeEvent_IsBase(true);
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPushButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnNativeEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_NativeEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_Metric(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPushButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPushButton_QBaseMetric(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Metric_IsBase(true);
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPushButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetric(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Metric_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_InitPainter(const QPushButton* self, QPainter* painter) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->initPainter(painter);
    } else {
        ((VirtualQPushButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPushButton_QBaseInitPainter(const QPushButton* self, QPainter* painter) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InitPainter_IsBase(true);
        vqpushbutton->initPainter(painter);
    } else {
        ((VirtualQPushButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitPainter(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InitPainter_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPushButton_Redirected(const QPushButton* self, QPoint* offset) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->redirected(offset);
    } else {
        return ((VirtualQPushButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPushButton_QBaseRedirected(const QPushButton* self, QPoint* offset) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Redirected_IsBase(true);
        return vqpushbutton->redirected(offset);
    } else {
        return ((VirtualQPushButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnRedirected(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Redirected_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPushButton_SharedPainter(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->sharedPainter();
    } else {
        return ((VirtualQPushButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPushButton_QBaseSharedPainter(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SharedPainter_IsBase(true);
        return vqpushbutton->sharedPainter();
    } else {
        return ((VirtualQPushButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSharedPainter(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SharedPainter_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_InputMethodEvent(QPushButton* self, QInputMethodEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->inputMethodEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBaseInputMethodEvent(QPushButton* self, QInputMethodEvent* param1) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InputMethodEvent_IsBase(true);
        vqpushbutton->inputMethodEvent(param1);
    } else {
        ((VirtualQPushButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInputMethodEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPushButton_InputMethodQuery(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return new QVariant(vqpushbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPushButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPushButton_QBaseInputMethodQuery(const QPushButton* self, int param1) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqpushbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPushButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInputMethodQuery(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_FocusNextPrevChild(QPushButton* self, bool next) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQPushButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPushButton_QBaseFocusNextPrevChild(QPushButton* self, bool next) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusNextPrevChild_IsBase(true);
        return vqpushbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualQPushButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusNextPrevChild(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_EventFilter(QPushButton* self, QObject* watched, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->eventFilter(watched, event);
    } else {
        return self->QPushButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPushButton_QBaseEventFilter(QPushButton* self, QObject* watched, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_EventFilter_IsBase(true);
        return vqpushbutton->eventFilter(watched, event);
    } else {
        return self->QPushButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEventFilter(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_EventFilter_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ChildEvent(QPushButton* self, QChildEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->childEvent(event);
    } else {
        ((VirtualQPushButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseChildEvent(QPushButton* self, QChildEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ChildEvent_IsBase(true);
        vqpushbutton->childEvent(event);
    } else {
        ((VirtualQPushButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnChildEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ChildEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_CustomEvent(QPushButton* self, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->customEvent(event);
    } else {
        ((VirtualQPushButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseCustomEvent(QPushButton* self, QEvent* event) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_CustomEvent_IsBase(true);
        vqpushbutton->customEvent(event);
    } else {
        ((VirtualQPushButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCustomEvent(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_CustomEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ConnectNotify(QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->connectNotify(*signal);
    } else {
        ((VirtualQPushButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPushButton_QBaseConnectNotify(QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ConnectNotify_IsBase(true);
        vqpushbutton->connectNotify(*signal);
    } else {
        ((VirtualQPushButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnConnectNotify(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_ConnectNotify_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DisconnectNotify(QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->disconnectNotify(*signal);
    } else {
        ((VirtualQPushButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPushButton_QBaseDisconnectNotify(QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DisconnectNotify_IsBase(true);
        vqpushbutton->disconnectNotify(*signal);
    } else {
        ((VirtualQPushButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDisconnectNotify(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_UpdateMicroFocus(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->updateMicroFocus();
    } else {
        ((VirtualQPushButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPushButton_QBaseUpdateMicroFocus(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_UpdateMicroFocus_IsBase(true);
        vqpushbutton->updateMicroFocus();
    } else {
        ((VirtualQPushButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnUpdateMicroFocus(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_Create(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->create();
    } else {
        ((VirtualQPushButton*)self)->create();
    }
}

// Base class handler implementation
void QPushButton_QBaseCreate(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Create_IsBase(true);
        vqpushbutton->create();
    } else {
        ((VirtualQPushButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCreate(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Create_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_Destroy(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->destroy();
    } else {
        ((VirtualQPushButton*)self)->destroy();
    }
}

// Base class handler implementation
void QPushButton_QBaseDestroy(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Destroy_IsBase(true);
        vqpushbutton->destroy();
    } else {
        ((VirtualQPushButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDestroy(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Destroy_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_FocusNextChild(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->focusNextChild();
    } else {
        return ((VirtualQPushButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPushButton_QBaseFocusNextChild(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusNextChild_IsBase(true);
        return vqpushbutton->focusNextChild();
    } else {
        return ((VirtualQPushButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusNextChild(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusNextChild_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_FocusPreviousChild(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->focusPreviousChild();
    } else {
        return ((VirtualQPushButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPushButton_QBaseFocusPreviousChild(QPushButton* self) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusPreviousChild_IsBase(true);
        return vqpushbutton->focusPreviousChild();
    } else {
        return ((VirtualQPushButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusPreviousChild(QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self);
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPushButton_Sender(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->sender();
    } else {
        return ((VirtualQPushButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPushButton_QBaseSender(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Sender_IsBase(true);
        return vqpushbutton->sender();
    } else {
        return ((VirtualQPushButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSender(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Sender_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_SenderSignalIndex(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->senderSignalIndex();
    } else {
        return ((VirtualQPushButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPushButton_QBaseSenderSignalIndex(const QPushButton* self) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SenderSignalIndex_IsBase(true);
        return vqpushbutton->senderSignalIndex();
    } else {
        return ((VirtualQPushButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSenderSignalIndex(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_Receivers(const QPushButton* self, const char* signal) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->receivers(signal);
    } else {
        return ((VirtualQPushButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPushButton_QBaseReceivers(const QPushButton* self, const char* signal) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Receivers_IsBase(true);
        return vqpushbutton->receivers(signal);
    } else {
        return ((VirtualQPushButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnReceivers(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_Receivers_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_IsSignalConnected(const QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQPushButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPushButton_QBaseIsSignalConnected(const QPushButton* self, const QMetaMethod* signal) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_IsSignalConnected_IsBase(true);
        return vqpushbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualQPushButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnIsSignalConnected(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QPushButton_GetDecodedMetricF(const QPushButton* self, int metricA, int metricB) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        return vqpushbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPushButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPushButton_QBaseGetDecodedMetricF(const QPushButton* self, int metricA, int metricB) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_GetDecodedMetricF_IsBase(true);
        return vqpushbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPushButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnGetDecodedMetricF(const QPushButton* self, intptr_t slot) {
    auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self));
    if (vqpushbutton && vqpushbutton->isVirtualQPushButton) {
        vqpushbutton->setQPushButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_GetDecodedMetricF_Callback>(slot));
    }
}

void QPushButton_Delete(QPushButton* self) {
    delete self;
}
