#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
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
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcheckbox.h>
#include "libqcheckbox.h"
#include "libqcheckbox.hxx"

QCheckBox* QCheckBox_new(QWidget* parent) {
    return new VirtualQCheckBox(parent);
}

QCheckBox* QCheckBox_new2() {
    return new VirtualQCheckBox();
}

QCheckBox* QCheckBox_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCheckBox(text_QString);
}

QCheckBox* QCheckBox_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQCheckBox(text_QString, parent);
}

QMetaObject* QCheckBox_MetaObject(const QCheckBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCheckBox_Metacast(QCheckBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCheckBox_Metacall(QCheckBox* self, int param1, int param2, void** param3) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCheckBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCheckBox_OnMetacall(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Metacall_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCheckBox_QBaseMetacall(QCheckBox* self, int param1, int param2, void** param3) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Metacall_IsBase(true);
        return vqcheckbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQCheckBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCheckBox_Tr(const char* s) {
    QString _ret = QCheckBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCheckBox_SetTristate(QCheckBox* self) {
    self->setTristate();
}

bool QCheckBox_IsTristate(const QCheckBox* self) {
    return self->isTristate();
}

int QCheckBox_CheckState(const QCheckBox* self) {
    return static_cast<int>(self->checkState());
}

void QCheckBox_SetCheckState(QCheckBox* self, int state) {
    self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
    self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_Connect_StateChanged(QCheckBox* self, intptr_t slot) {
    void (*slotFunc)(QCheckBox*, int) = reinterpret_cast<void (*)(QCheckBox*, int)>(slot);
    QCheckBox::connect(self, &QCheckBox::stateChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QCheckBox_Tr2(const char* s, const char* c) {
    QString _ret = QCheckBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCheckBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCheckBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
    self->setTristate(y);
}

// Derived class handler implementation
QSize* QCheckBox_SizeHint(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return new QSize(vqcheckbox->sizeHint());
    } else {
        return new QSize(((VirtualQCheckBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QCheckBox_QBaseSizeHint(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SizeHint_IsBase(true);
        return new QSize(vqcheckbox->sizeHint());
    } else {
        return new QSize(((VirtualQCheckBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSizeHint(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SizeHint_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return new QSize(vqcheckbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQCheckBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QCheckBox_QBaseMinimumSizeHint(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqcheckbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualQCheckBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMinimumSizeHint(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_Event(QCheckBox* self, QEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->event(e);
    } else {
        return ((VirtualQCheckBox*)self)->event(e);
    }
}

// Base class handler implementation
bool QCheckBox_QBaseEvent(QCheckBox* self, QEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Event_IsBase(true);
        return vqcheckbox->event(e);
    } else {
        return ((VirtualQCheckBox*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Event_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->hitButton(*pos);
    } else {
        return ((VirtualQCheckBox*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool QCheckBox_QBaseHitButton(const QCheckBox* self, const QPoint* pos) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HitButton_IsBase(true);
        return vqcheckbox->hitButton(*pos);
    } else {
        return ((VirtualQCheckBox*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHitButton(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HitButton_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_CheckStateSet(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->checkStateSet();
    } else {
        ((VirtualQCheckBox*)self)->checkStateSet();
    }
}

// Base class handler implementation
void QCheckBox_QBaseCheckStateSet(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_CheckStateSet_IsBase(true);
        vqcheckbox->checkStateSet();
    } else {
        ((VirtualQCheckBox*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCheckStateSet(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_CheckStateSet_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_NextCheckState(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->nextCheckState();
    } else {
        ((VirtualQCheckBox*)self)->nextCheckState();
    }
}

// Base class handler implementation
void QCheckBox_QBaseNextCheckState(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_NextCheckState_IsBase(true);
        vqcheckbox->nextCheckState();
    } else {
        ((VirtualQCheckBox*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnNextCheckState(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_NextCheckState_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->paintEvent(param1);
    } else {
        ((VirtualQCheckBox*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QCheckBox_QBasePaintEvent(QCheckBox* self, QPaintEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_PaintEvent_IsBase(true);
        vqcheckbox->paintEvent(param1);
    } else {
        ((VirtualQCheckBox*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnPaintEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_PaintEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->mouseMoveEvent(param1);
    } else {
        ((VirtualQCheckBox*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QCheckBox_QBaseMouseMoveEvent(QCheckBox* self, QMouseEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MouseMoveEvent_IsBase(true);
        vqcheckbox->mouseMoveEvent(param1);
    } else {
        ((VirtualQCheckBox*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMouseMoveEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->initStyleOption(option);
    } else {
        ((VirtualQCheckBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QCheckBox_QBaseInitStyleOption(const QCheckBox* self, QStyleOptionButton* option) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InitStyleOption_IsBase(true);
        vqcheckbox->initStyleOption(option);
    } else {
        ((VirtualQCheckBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInitStyleOption(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InitStyleOption_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_KeyPressEvent(QCheckBox* self, QKeyEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->keyPressEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseKeyPressEvent(QCheckBox* self, QKeyEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_KeyPressEvent_IsBase(true);
        vqcheckbox->keyPressEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnKeyPressEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_KeyReleaseEvent(QCheckBox* self, QKeyEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->keyReleaseEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseKeyReleaseEvent(QCheckBox* self, QKeyEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_KeyReleaseEvent_IsBase(true);
        vqcheckbox->keyReleaseEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnKeyReleaseEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_MousePressEvent(QCheckBox* self, QMouseEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->mousePressEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseMousePressEvent(QCheckBox* self, QMouseEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MousePressEvent_IsBase(true);
        vqcheckbox->mousePressEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMousePressEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MousePressEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_MouseReleaseEvent(QCheckBox* self, QMouseEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->mouseReleaseEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseMouseReleaseEvent(QCheckBox* self, QMouseEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MouseReleaseEvent_IsBase(true);
        vqcheckbox->mouseReleaseEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMouseReleaseEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_FocusInEvent(QCheckBox* self, QFocusEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->focusInEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseFocusInEvent(QCheckBox* self, QFocusEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusInEvent_IsBase(true);
        vqcheckbox->focusInEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusInEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusInEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_FocusOutEvent(QCheckBox* self, QFocusEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->focusOutEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseFocusOutEvent(QCheckBox* self, QFocusEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusOutEvent_IsBase(true);
        vqcheckbox->focusOutEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusOutEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ChangeEvent(QCheckBox* self, QEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->changeEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseChangeEvent(QCheckBox* self, QEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ChangeEvent_IsBase(true);
        vqcheckbox->changeEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnChangeEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ChangeEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_TimerEvent(QCheckBox* self, QTimerEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->timerEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QCheckBox_QBaseTimerEvent(QCheckBox* self, QTimerEvent* e) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_TimerEvent_IsBase(true);
        vqcheckbox->timerEvent(e);
    } else {
        ((VirtualQCheckBox*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnTimerEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_TimerEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QCheckBox_DevType(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->devType();
    } else {
        return self->QCheckBox::devType();
    }
}

// Base class handler implementation
int QCheckBox_QBaseDevType(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DevType_IsBase(true);
        return vqcheckbox->devType();
    } else {
        return self->QCheckBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDevType(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DevType_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_SetVisible(QCheckBox* self, bool visible) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setVisible(visible);
    } else {
        self->QCheckBox::setVisible(visible);
    }
}

// Base class handler implementation
void QCheckBox_QBaseSetVisible(QCheckBox* self, bool visible) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SetVisible_IsBase(true);
        vqcheckbox->setVisible(visible);
    } else {
        self->QCheckBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSetVisible(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SetVisible_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QCheckBox_HeightForWidth(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QCheckBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QCheckBox_QBaseHeightForWidth(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HeightForWidth_IsBase(true);
        return vqcheckbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QCheckBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHeightForWidth(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HeightForWidth_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_HasHeightForWidth(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->hasHeightForWidth();
    } else {
        return self->QCheckBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QCheckBox_QBaseHasHeightForWidth(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HasHeightForWidth_IsBase(true);
        return vqcheckbox->hasHeightForWidth();
    } else {
        return self->QCheckBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHasHeightForWidth(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QCheckBox_PaintEngine(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->paintEngine();
    } else {
        return self->QCheckBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QCheckBox_QBasePaintEngine(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_PaintEngine_IsBase(true);
        return vqcheckbox->paintEngine();
    } else {
        return self->QCheckBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnPaintEngine(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_PaintEngine_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_MouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseMouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MouseDoubleClickEvent_IsBase(true);
        vqcheckbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMouseDoubleClickEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_WheelEvent(QCheckBox* self, QWheelEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->wheelEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseWheelEvent(QCheckBox* self, QWheelEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_WheelEvent_IsBase(true);
        vqcheckbox->wheelEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnWheelEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_WheelEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_EnterEvent(QCheckBox* self, QEnterEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->enterEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseEnterEvent(QCheckBox* self, QEnterEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_EnterEvent_IsBase(true);
        vqcheckbox->enterEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnEnterEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_EnterEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_LeaveEvent(QCheckBox* self, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->leaveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseLeaveEvent(QCheckBox* self, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_LeaveEvent_IsBase(true);
        vqcheckbox->leaveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnLeaveEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_LeaveEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_MoveEvent(QCheckBox* self, QMoveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->moveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseMoveEvent(QCheckBox* self, QMoveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MoveEvent_IsBase(true);
        vqcheckbox->moveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMoveEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_MoveEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ResizeEvent(QCheckBox* self, QResizeEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->resizeEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseResizeEvent(QCheckBox* self, QResizeEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ResizeEvent_IsBase(true);
        vqcheckbox->resizeEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnResizeEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ResizeEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_CloseEvent(QCheckBox* self, QCloseEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->closeEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseCloseEvent(QCheckBox* self, QCloseEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_CloseEvent_IsBase(true);
        vqcheckbox->closeEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCloseEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_CloseEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ContextMenuEvent(QCheckBox* self, QContextMenuEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->contextMenuEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseContextMenuEvent(QCheckBox* self, QContextMenuEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ContextMenuEvent_IsBase(true);
        vqcheckbox->contextMenuEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnContextMenuEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_TabletEvent(QCheckBox* self, QTabletEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->tabletEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseTabletEvent(QCheckBox* self, QTabletEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_TabletEvent_IsBase(true);
        vqcheckbox->tabletEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnTabletEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_TabletEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ActionEvent(QCheckBox* self, QActionEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->actionEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseActionEvent(QCheckBox* self, QActionEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ActionEvent_IsBase(true);
        vqcheckbox->actionEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnActionEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ActionEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_DragEnterEvent(QCheckBox* self, QDragEnterEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->dragEnterEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseDragEnterEvent(QCheckBox* self, QDragEnterEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DragEnterEvent_IsBase(true);
        vqcheckbox->dragEnterEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDragEnterEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_DragMoveEvent(QCheckBox* self, QDragMoveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->dragMoveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseDragMoveEvent(QCheckBox* self, QDragMoveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DragMoveEvent_IsBase(true);
        vqcheckbox->dragMoveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDragMoveEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_DragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->dragLeaveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseDragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DragLeaveEvent_IsBase(true);
        vqcheckbox->dragLeaveEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDragLeaveEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_DropEvent(QCheckBox* self, QDropEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->dropEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseDropEvent(QCheckBox* self, QDropEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DropEvent_IsBase(true);
        vqcheckbox->dropEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDropEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DropEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ShowEvent(QCheckBox* self, QShowEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->showEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseShowEvent(QCheckBox* self, QShowEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ShowEvent_IsBase(true);
        vqcheckbox->showEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnShowEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ShowEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_HideEvent(QCheckBox* self, QHideEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->hideEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseHideEvent(QCheckBox* self, QHideEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HideEvent_IsBase(true);
        vqcheckbox->hideEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnHideEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_HideEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_NativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQCheckBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QCheckBox_QBaseNativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_NativeEvent_IsBase(true);
        return vqcheckbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQCheckBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnNativeEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_NativeEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QCheckBox_Metric(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQCheckBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QCheckBox_QBaseMetric(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Metric_IsBase(true);
        return vqcheckbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQCheckBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMetric(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Metric_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_InitPainter(const QCheckBox* self, QPainter* painter) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->initPainter(painter);
    } else {
        ((VirtualQCheckBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QCheckBox_QBaseInitPainter(const QCheckBox* self, QPainter* painter) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InitPainter_IsBase(true);
        vqcheckbox->initPainter(painter);
    } else {
        ((VirtualQCheckBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInitPainter(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InitPainter_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QCheckBox_Redirected(const QCheckBox* self, QPoint* offset) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->redirected(offset);
    } else {
        return ((VirtualQCheckBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QCheckBox_QBaseRedirected(const QCheckBox* self, QPoint* offset) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Redirected_IsBase(true);
        return vqcheckbox->redirected(offset);
    } else {
        return ((VirtualQCheckBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnRedirected(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Redirected_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QCheckBox_SharedPainter(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->sharedPainter();
    } else {
        return ((VirtualQCheckBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QCheckBox_QBaseSharedPainter(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SharedPainter_IsBase(true);
        return vqcheckbox->sharedPainter();
    } else {
        return ((VirtualQCheckBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSharedPainter(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SharedPainter_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_InputMethodEvent(QCheckBox* self, QInputMethodEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->inputMethodEvent(param1);
    } else {
        ((VirtualQCheckBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QCheckBox_QBaseInputMethodEvent(QCheckBox* self, QInputMethodEvent* param1) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InputMethodEvent_IsBase(true);
        vqcheckbox->inputMethodEvent(param1);
    } else {
        ((VirtualQCheckBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInputMethodEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QCheckBox_InputMethodQuery(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return new QVariant(vqcheckbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQCheckBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QCheckBox_QBaseInputMethodQuery(const QCheckBox* self, int param1) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqcheckbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQCheckBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnInputMethodQuery(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_FocusNextPrevChild(QCheckBox* self, bool next) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQCheckBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QCheckBox_QBaseFocusNextPrevChild(QCheckBox* self, bool next) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusNextPrevChild_IsBase(true);
        return vqcheckbox->focusNextPrevChild(next);
    } else {
        return ((VirtualQCheckBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusNextPrevChild(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_EventFilter(QCheckBox* self, QObject* watched, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->eventFilter(watched, event);
    } else {
        return self->QCheckBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCheckBox_QBaseEventFilter(QCheckBox* self, QObject* watched, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_EventFilter_IsBase(true);
        return vqcheckbox->eventFilter(watched, event);
    } else {
        return self->QCheckBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnEventFilter(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_EventFilter_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ChildEvent(QCheckBox* self, QChildEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->childEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseChildEvent(QCheckBox* self, QChildEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ChildEvent_IsBase(true);
        vqcheckbox->childEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnChildEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ChildEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_CustomEvent(QCheckBox* self, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->customEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QCheckBox_QBaseCustomEvent(QCheckBox* self, QEvent* event) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_CustomEvent_IsBase(true);
        vqcheckbox->customEvent(event);
    } else {
        ((VirtualQCheckBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCustomEvent(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_CustomEvent_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_ConnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->connectNotify(*signal);
    } else {
        ((VirtualQCheckBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCheckBox_QBaseConnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ConnectNotify_IsBase(true);
        vqcheckbox->connectNotify(*signal);
    } else {
        ((VirtualQCheckBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnConnectNotify(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_ConnectNotify_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_DisconnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->disconnectNotify(*signal);
    } else {
        ((VirtualQCheckBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCheckBox_QBaseDisconnectNotify(QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DisconnectNotify_IsBase(true);
        vqcheckbox->disconnectNotify(*signal);
    } else {
        ((VirtualQCheckBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDisconnectNotify(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_UpdateMicroFocus(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->updateMicroFocus();
    } else {
        ((VirtualQCheckBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QCheckBox_QBaseUpdateMicroFocus(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_UpdateMicroFocus_IsBase(true);
        vqcheckbox->updateMicroFocus();
    } else {
        ((VirtualQCheckBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnUpdateMicroFocus(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_Create(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->create();
    } else {
        ((VirtualQCheckBox*)self)->create();
    }
}

// Base class handler implementation
void QCheckBox_QBaseCreate(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Create_IsBase(true);
        vqcheckbox->create();
    } else {
        ((VirtualQCheckBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnCreate(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Create_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QCheckBox_Destroy(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->destroy();
    } else {
        ((VirtualQCheckBox*)self)->destroy();
    }
}

// Base class handler implementation
void QCheckBox_QBaseDestroy(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Destroy_IsBase(true);
        vqcheckbox->destroy();
    } else {
        ((VirtualQCheckBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnDestroy(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Destroy_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_FocusNextChild(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->focusNextChild();
    } else {
        return ((VirtualQCheckBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QCheckBox_QBaseFocusNextChild(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusNextChild_IsBase(true);
        return vqcheckbox->focusNextChild();
    } else {
        return ((VirtualQCheckBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusNextChild(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusNextChild_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_FocusPreviousChild(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->focusPreviousChild();
    } else {
        return ((VirtualQCheckBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QCheckBox_QBaseFocusPreviousChild(QCheckBox* self) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusPreviousChild_IsBase(true);
        return vqcheckbox->focusPreviousChild();
    } else {
        return ((VirtualQCheckBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnFocusPreviousChild(QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = dynamic_cast<VirtualQCheckBox*>(self);
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCheckBox_Sender(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->sender();
    } else {
        return ((VirtualQCheckBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* QCheckBox_QBaseSender(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Sender_IsBase(true);
        return vqcheckbox->sender();
    } else {
        return ((VirtualQCheckBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSender(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Sender_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCheckBox_SenderSignalIndex(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->senderSignalIndex();
    } else {
        return ((VirtualQCheckBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QCheckBox_QBaseSenderSignalIndex(const QCheckBox* self) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SenderSignalIndex_IsBase(true);
        return vqcheckbox->senderSignalIndex();
    } else {
        return ((VirtualQCheckBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSenderSignalIndex(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCheckBox_Receivers(const QCheckBox* self, const char* signal) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->receivers(signal);
    } else {
        return ((VirtualQCheckBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QCheckBox_QBaseReceivers(const QCheckBox* self, const char* signal) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Receivers_IsBase(true);
        return vqcheckbox->receivers(signal);
    } else {
        return ((VirtualQCheckBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnReceivers(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_Receivers_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCheckBox_IsSignalConnected(const QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        return vqcheckbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQCheckBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCheckBox_QBaseIsSignalConnected(const QCheckBox* self, const QMetaMethod* signal) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_IsSignalConnected_IsBase(true);
        return vqcheckbox->isSignalConnected(*signal);
    } else {
        return ((VirtualQCheckBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnIsSignalConnected(const QCheckBox* self, intptr_t slot) {
    auto* vqcheckbox = const_cast<VirtualQCheckBox*>(dynamic_cast<const VirtualQCheckBox*>(self));
    if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
        vqcheckbox->setQCheckBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_IsSignalConnected_Callback>(slot));
    }
}

void QCheckBox_Delete(QCheckBox* self) {
    delete self;
}
