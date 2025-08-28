#include <KAnimatedButton>
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
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kanimatedbutton.h>
#include "libkanimatedbutton.h"
#include "libkanimatedbutton.hxx"

KAnimatedButton* KAnimatedButton_new(QWidget* parent) {
    return new VirtualKAnimatedButton(parent);
}

KAnimatedButton* KAnimatedButton_new2() {
    return new VirtualKAnimatedButton();
}

QMetaObject* KAnimatedButton_MetaObject(const KAnimatedButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAnimatedButton_Metacast(KAnimatedButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAnimatedButton_Metacall(KAnimatedButton* self, int param1, int param2, void** param3) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAnimatedButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAnimatedButton_Tr(const char* s) {
    QString _ret = KAnimatedButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAnimatedButton_AnimationPath(const KAnimatedButton* self) {
    QString _ret = self->animationPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KAnimatedButton_SetAnimationPath(KAnimatedButton* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setAnimationPath(path_QString);
}

void KAnimatedButton_Start(KAnimatedButton* self) {
    self->start();
}

void KAnimatedButton_Stop(KAnimatedButton* self) {
    self->stop();
}

libqt_string KAnimatedButton_Tr2(const char* s, const char* c) {
    QString _ret = KAnimatedButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAnimatedButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = KAnimatedButton::tr(s, c, static_cast<int>(n));
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
int KAnimatedButton_QBaseMetacall(KAnimatedButton* self, int param1, int param2, void** param3) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Metacall_IsBase(true);
        return vkanimatedbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAnimatedButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMetacall(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Metacall_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAnimatedButton_SizeHint(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return new QSize(vkanimatedbutton->sizeHint());
    } else {
        return new QSize(((VirtualKAnimatedButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KAnimatedButton_QBaseSizeHint(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SizeHint_IsBase(true);
        return new QSize(vkanimatedbutton->sizeHint());
    } else {
        return new QSize(((VirtualKAnimatedButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSizeHint(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SizeHint_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAnimatedButton_MinimumSizeHint(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return new QSize(vkanimatedbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAnimatedButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KAnimatedButton_QBaseMinimumSizeHint(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MinimumSizeHint_IsBase(true);
        return new QSize(vkanimatedbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAnimatedButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMinimumSizeHint(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_Event(KAnimatedButton* self, QEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->event(e);
    } else {
        return ((VirtualKAnimatedButton*)self)->event(e);
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseEvent(KAnimatedButton* self, QEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Event_IsBase(true);
        return vkanimatedbutton->event(e);
    } else {
        return ((VirtualKAnimatedButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Event_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_MousePressEvent(KAnimatedButton* self, QMouseEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->mousePressEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseMousePressEvent(KAnimatedButton* self, QMouseEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MousePressEvent_IsBase(true);
        vkanimatedbutton->mousePressEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMousePressEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MousePressEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_MouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->mouseReleaseEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseMouseReleaseEvent(KAnimatedButton* self, QMouseEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MouseReleaseEvent_IsBase(true);
        vkanimatedbutton->mouseReleaseEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMouseReleaseEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_PaintEvent(KAnimatedButton* self, QPaintEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->paintEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBasePaintEvent(KAnimatedButton* self, QPaintEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_PaintEvent_IsBase(true);
        vkanimatedbutton->paintEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnPaintEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_PaintEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ActionEvent(KAnimatedButton* self, QActionEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->actionEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseActionEvent(KAnimatedButton* self, QActionEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ActionEvent_IsBase(true);
        vkanimatedbutton->actionEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnActionEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ActionEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_EnterEvent(KAnimatedButton* self, QEnterEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->enterEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseEnterEvent(KAnimatedButton* self, QEnterEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_EnterEvent_IsBase(true);
        vkanimatedbutton->enterEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnEnterEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_EnterEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_LeaveEvent(KAnimatedButton* self, QEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->leaveEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseLeaveEvent(KAnimatedButton* self, QEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_LeaveEvent_IsBase(true);
        vkanimatedbutton->leaveEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnLeaveEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_LeaveEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_TimerEvent(KAnimatedButton* self, QTimerEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->timerEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseTimerEvent(KAnimatedButton* self, QTimerEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_TimerEvent_IsBase(true);
        vkanimatedbutton->timerEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnTimerEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_TimerEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ChangeEvent(KAnimatedButton* self, QEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->changeEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseChangeEvent(KAnimatedButton* self, QEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ChangeEvent_IsBase(true);
        vkanimatedbutton->changeEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnChangeEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ChangeEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_HitButton(const KAnimatedButton* self, const QPoint* pos) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->hitButton(*pos);
    } else {
        return ((VirtualKAnimatedButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseHitButton(const KAnimatedButton* self, const QPoint* pos) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HitButton_IsBase(true);
        return vkanimatedbutton->hitButton(*pos);
    } else {
        return ((VirtualKAnimatedButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHitButton(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HitButton_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_CheckStateSet(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->checkStateSet();
    } else {
        ((VirtualKAnimatedButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseCheckStateSet(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_CheckStateSet_IsBase(true);
        vkanimatedbutton->checkStateSet();
    } else {
        ((VirtualKAnimatedButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCheckStateSet(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_CheckStateSet_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_NextCheckState(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->nextCheckState();
    } else {
        ((VirtualKAnimatedButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseNextCheckState(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_NextCheckState_IsBase(true);
        vkanimatedbutton->nextCheckState();
    } else {
        ((VirtualKAnimatedButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnNextCheckState(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_NextCheckState_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_InitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->initStyleOption(option);
    } else {
        ((VirtualKAnimatedButton*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseInitStyleOption(const KAnimatedButton* self, QStyleOptionToolButton* option) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InitStyleOption_IsBase(true);
        vkanimatedbutton->initStyleOption(option);
    } else {
        ((VirtualKAnimatedButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInitStyleOption(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InitStyleOption_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_KeyPressEvent(KAnimatedButton* self, QKeyEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->keyPressEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseKeyPressEvent(KAnimatedButton* self, QKeyEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_KeyPressEvent_IsBase(true);
        vkanimatedbutton->keyPressEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnKeyPressEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_KeyPressEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_KeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseKeyReleaseEvent(KAnimatedButton* self, QKeyEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_KeyReleaseEvent_IsBase(true);
        vkanimatedbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnKeyReleaseEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_MouseMoveEvent(KAnimatedButton* self, QMouseEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseMouseMoveEvent(KAnimatedButton* self, QMouseEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MouseMoveEvent_IsBase(true);
        vkanimatedbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMouseMoveEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_FocusInEvent(KAnimatedButton* self, QFocusEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->focusInEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseFocusInEvent(KAnimatedButton* self, QFocusEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusInEvent_IsBase(true);
        vkanimatedbutton->focusInEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusInEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusInEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_FocusOutEvent(KAnimatedButton* self, QFocusEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->focusOutEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseFocusOutEvent(KAnimatedButton* self, QFocusEvent* e) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusOutEvent_IsBase(true);
        vkanimatedbutton->focusOutEvent(e);
    } else {
        ((VirtualKAnimatedButton*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusOutEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusOutEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KAnimatedButton_DevType(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->devType();
    } else {
        return self->KAnimatedButton::devType();
    }
}

// Base class handler implementation
int KAnimatedButton_QBaseDevType(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DevType_IsBase(true);
        return vkanimatedbutton->devType();
    } else {
        return self->KAnimatedButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDevType(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DevType_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_SetVisible(KAnimatedButton* self, bool visible) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setVisible(visible);
    } else {
        self->KAnimatedButton::setVisible(visible);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseSetVisible(KAnimatedButton* self, bool visible) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SetVisible_IsBase(true);
        vkanimatedbutton->setVisible(visible);
    } else {
        self->KAnimatedButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSetVisible(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SetVisible_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KAnimatedButton_HeightForWidth(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAnimatedButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KAnimatedButton_QBaseHeightForWidth(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HeightForWidth_IsBase(true);
        return vkanimatedbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAnimatedButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHeightForWidth(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HeightForWidth_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_HasHeightForWidth(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->hasHeightForWidth();
    } else {
        return self->KAnimatedButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseHasHeightForWidth(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HasHeightForWidth_IsBase(true);
        return vkanimatedbutton->hasHeightForWidth();
    } else {
        return self->KAnimatedButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHasHeightForWidth(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KAnimatedButton_PaintEngine(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->paintEngine();
    } else {
        return self->KAnimatedButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KAnimatedButton_QBasePaintEngine(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_PaintEngine_IsBase(true);
        return vkanimatedbutton->paintEngine();
    } else {
        return self->KAnimatedButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnPaintEngine(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_PaintEngine_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_MouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseMouseDoubleClickEvent(KAnimatedButton* self, QMouseEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MouseDoubleClickEvent_IsBase(true);
        vkanimatedbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMouseDoubleClickEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_WheelEvent(KAnimatedButton* self, QWheelEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->wheelEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseWheelEvent(KAnimatedButton* self, QWheelEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_WheelEvent_IsBase(true);
        vkanimatedbutton->wheelEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnWheelEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_WheelEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_MoveEvent(KAnimatedButton* self, QMoveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->moveEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseMoveEvent(KAnimatedButton* self, QMoveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MoveEvent_IsBase(true);
        vkanimatedbutton->moveEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMoveEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_MoveEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ResizeEvent(KAnimatedButton* self, QResizeEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->resizeEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseResizeEvent(KAnimatedButton* self, QResizeEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ResizeEvent_IsBase(true);
        vkanimatedbutton->resizeEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnResizeEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ResizeEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_CloseEvent(KAnimatedButton* self, QCloseEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->closeEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseCloseEvent(KAnimatedButton* self, QCloseEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_CloseEvent_IsBase(true);
        vkanimatedbutton->closeEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCloseEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_CloseEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->contextMenuEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseContextMenuEvent(KAnimatedButton* self, QContextMenuEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ContextMenuEvent_IsBase(true);
        vkanimatedbutton->contextMenuEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnContextMenuEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_TabletEvent(KAnimatedButton* self, QTabletEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->tabletEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseTabletEvent(KAnimatedButton* self, QTabletEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_TabletEvent_IsBase(true);
        vkanimatedbutton->tabletEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnTabletEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_TabletEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_DragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->dragEnterEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseDragEnterEvent(KAnimatedButton* self, QDragEnterEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DragEnterEvent_IsBase(true);
        vkanimatedbutton->dragEnterEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDragEnterEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DragEnterEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_DragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->dragMoveEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseDragMoveEvent(KAnimatedButton* self, QDragMoveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DragMoveEvent_IsBase(true);
        vkanimatedbutton->dragMoveEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDragMoveEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DragMoveEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_DragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseDragLeaveEvent(KAnimatedButton* self, QDragLeaveEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DragLeaveEvent_IsBase(true);
        vkanimatedbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDragLeaveEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_DropEvent(KAnimatedButton* self, QDropEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->dropEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseDropEvent(KAnimatedButton* self, QDropEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DropEvent_IsBase(true);
        vkanimatedbutton->dropEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDropEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DropEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ShowEvent(KAnimatedButton* self, QShowEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->showEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseShowEvent(KAnimatedButton* self, QShowEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ShowEvent_IsBase(true);
        vkanimatedbutton->showEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnShowEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ShowEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_HideEvent(KAnimatedButton* self, QHideEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->hideEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseHideEvent(KAnimatedButton* self, QHideEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HideEvent_IsBase(true);
        vkanimatedbutton->hideEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnHideEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_HideEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_NativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAnimatedButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseNativeEvent(KAnimatedButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_NativeEvent_IsBase(true);
        return vkanimatedbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAnimatedButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnNativeEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_NativeEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KAnimatedButton_Metric(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAnimatedButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KAnimatedButton_QBaseMetric(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Metric_IsBase(true);
        return vkanimatedbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAnimatedButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnMetric(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Metric_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_InitPainter(const KAnimatedButton* self, QPainter* painter) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->initPainter(painter);
    } else {
        ((VirtualKAnimatedButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseInitPainter(const KAnimatedButton* self, QPainter* painter) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InitPainter_IsBase(true);
        vkanimatedbutton->initPainter(painter);
    } else {
        ((VirtualKAnimatedButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInitPainter(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InitPainter_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KAnimatedButton_Redirected(const KAnimatedButton* self, QPoint* offset) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->redirected(offset);
    } else {
        return ((VirtualKAnimatedButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KAnimatedButton_QBaseRedirected(const KAnimatedButton* self, QPoint* offset) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Redirected_IsBase(true);
        return vkanimatedbutton->redirected(offset);
    } else {
        return ((VirtualKAnimatedButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnRedirected(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Redirected_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KAnimatedButton_SharedPainter(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->sharedPainter();
    } else {
        return ((VirtualKAnimatedButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KAnimatedButton_QBaseSharedPainter(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SharedPainter_IsBase(true);
        return vkanimatedbutton->sharedPainter();
    } else {
        return ((VirtualKAnimatedButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSharedPainter(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SharedPainter_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_InputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseInputMethodEvent(KAnimatedButton* self, QInputMethodEvent* param1) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InputMethodEvent_IsBase(true);
        vkanimatedbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKAnimatedButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInputMethodEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InputMethodEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KAnimatedButton_InputMethodQuery(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return new QVariant(vkanimatedbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAnimatedButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KAnimatedButton_QBaseInputMethodQuery(const KAnimatedButton* self, int param1) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InputMethodQuery_IsBase(true);
        return new QVariant(vkanimatedbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAnimatedButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnInputMethodQuery(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_InputMethodQuery_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_FocusNextPrevChild(KAnimatedButton* self, bool next) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKAnimatedButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseFocusNextPrevChild(KAnimatedButton* self, bool next) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusNextPrevChild_IsBase(true);
        return vkanimatedbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKAnimatedButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusNextPrevChild(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_EventFilter(KAnimatedButton* self, QObject* watched, QEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->eventFilter(watched, event);
    } else {
        return self->KAnimatedButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseEventFilter(KAnimatedButton* self, QObject* watched, QEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_EventFilter_IsBase(true);
        return vkanimatedbutton->eventFilter(watched, event);
    } else {
        return self->KAnimatedButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnEventFilter(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_EventFilter_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ChildEvent(KAnimatedButton* self, QChildEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->childEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseChildEvent(KAnimatedButton* self, QChildEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ChildEvent_IsBase(true);
        vkanimatedbutton->childEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnChildEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ChildEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_CustomEvent(KAnimatedButton* self, QEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->customEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseCustomEvent(KAnimatedButton* self, QEvent* event) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_CustomEvent_IsBase(true);
        vkanimatedbutton->customEvent(event);
    } else {
        ((VirtualKAnimatedButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCustomEvent(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_CustomEvent_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_ConnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->connectNotify(*signal);
    } else {
        ((VirtualKAnimatedButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseConnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ConnectNotify_IsBase(true);
        vkanimatedbutton->connectNotify(*signal);
    } else {
        ((VirtualKAnimatedButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnConnectNotify(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_ConnectNotify_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_DisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKAnimatedButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseDisconnectNotify(KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DisconnectNotify_IsBase(true);
        vkanimatedbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKAnimatedButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDisconnectNotify(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_DisconnectNotify_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_UpdateMicroFocus(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->updateMicroFocus();
    } else {
        ((VirtualKAnimatedButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseUpdateMicroFocus(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_UpdateMicroFocus_IsBase(true);
        vkanimatedbutton->updateMicroFocus();
    } else {
        ((VirtualKAnimatedButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnUpdateMicroFocus(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_Create(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->create();
    } else {
        ((VirtualKAnimatedButton*)self)->create();
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseCreate(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Create_IsBase(true);
        vkanimatedbutton->create();
    } else {
        ((VirtualKAnimatedButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnCreate(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Create_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KAnimatedButton_Destroy(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->destroy();
    } else {
        ((VirtualKAnimatedButton*)self)->destroy();
    }
}

// Base class handler implementation
void KAnimatedButton_QBaseDestroy(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Destroy_IsBase(true);
        vkanimatedbutton->destroy();
    } else {
        ((VirtualKAnimatedButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnDestroy(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Destroy_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_FocusNextChild(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->focusNextChild();
    } else {
        return ((VirtualKAnimatedButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseFocusNextChild(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusNextChild_IsBase(true);
        return vkanimatedbutton->focusNextChild();
    } else {
        return ((VirtualKAnimatedButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusNextChild(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusNextChild_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_FocusPreviousChild(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->focusPreviousChild();
    } else {
        return ((VirtualKAnimatedButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseFocusPreviousChild(KAnimatedButton* self) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusPreviousChild_IsBase(true);
        return vkanimatedbutton->focusPreviousChild();
    } else {
        return ((VirtualKAnimatedButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnFocusPreviousChild(KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = dynamic_cast<VirtualKAnimatedButton*>(self);
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAnimatedButton_Sender(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->sender();
    } else {
        return ((VirtualKAnimatedButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAnimatedButton_QBaseSender(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Sender_IsBase(true);
        return vkanimatedbutton->sender();
    } else {
        return ((VirtualKAnimatedButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSender(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Sender_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAnimatedButton_SenderSignalIndex(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->senderSignalIndex();
    } else {
        return ((VirtualKAnimatedButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAnimatedButton_QBaseSenderSignalIndex(const KAnimatedButton* self) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SenderSignalIndex_IsBase(true);
        return vkanimatedbutton->senderSignalIndex();
    } else {
        return ((VirtualKAnimatedButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnSenderSignalIndex(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAnimatedButton_Receivers(const KAnimatedButton* self, const char* signal) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->receivers(signal);
    } else {
        return ((VirtualKAnimatedButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAnimatedButton_QBaseReceivers(const KAnimatedButton* self, const char* signal) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Receivers_IsBase(true);
        return vkanimatedbutton->receivers(signal);
    } else {
        return ((VirtualKAnimatedButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnReceivers(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_Receivers_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAnimatedButton_IsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKAnimatedButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAnimatedButton_QBaseIsSignalConnected(const KAnimatedButton* self, const QMetaMethod* signal) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_IsSignalConnected_IsBase(true);
        return vkanimatedbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKAnimatedButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnIsSignalConnected(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_IsSignalConnected_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KAnimatedButton_GetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        return vkanimatedbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAnimatedButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KAnimatedButton_QBaseGetDecodedMetricF(const KAnimatedButton* self, int metricA, int metricB) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_GetDecodedMetricF_IsBase(true);
        return vkanimatedbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAnimatedButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KAnimatedButton_OnGetDecodedMetricF(const KAnimatedButton* self, intptr_t slot) {
    auto* vkanimatedbutton = const_cast<VirtualKAnimatedButton*>(dynamic_cast<const VirtualKAnimatedButton*>(self));
    if (vkanimatedbutton && vkanimatedbutton->isVirtualKAnimatedButton) {
        vkanimatedbutton->setKAnimatedButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKAnimatedButton::KAnimatedButton_GetDecodedMetricF_Callback>(slot));
    }
}

void KAnimatedButton_Delete(KAnimatedButton* self) {
    delete self;
}
