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
#include <QByteArray>
#include <cstring>
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
    auto* vkcontextualhelpbutton = dynamic_cast<const VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKContextualHelpButton*)self)->metaObject();
    }
}

void* KContextualHelpButton_Metacast(KContextualHelpButton* self, const char* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKContextualHelpButton*)self)->qt_metacast(param1);
    }
}

int KContextualHelpButton_Metacall(KContextualHelpButton* self, int param1, int param2, void** param3) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKContextualHelpButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void KContextualHelpButton_SetContextualHelpText(KContextualHelpButton* self, const libqt_string contextualHelpText) {
    QString contextualHelpText_QString = QString::fromUtf8(contextualHelpText.data, contextualHelpText.len);
    self->setContextualHelpText(contextualHelpText_QString);
}

libqt_string KContextualHelpButton_ContextualHelpText(const KContextualHelpButton* self) {
    QString _ret = self->contextualHelpText();
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
    auto* vkcontextualhelpbutton = dynamic_cast<const VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKContextualHelpButton*)self)->sizeHint());
    }
}

void KContextualHelpButton_ContextualHelpTextChanged(KContextualHelpButton* self, const libqt_string newContextualHelpText) {
    QString newContextualHelpText_QString = QString::fromUtf8(newContextualHelpText.data, newContextualHelpText.len);
    self->contextualHelpTextChanged(newContextualHelpText_QString);
}

void KContextualHelpButton_Connect_ContextualHelpTextChanged(KContextualHelpButton* self, intptr_t slot) {
    void (*slotFunc)(KContextualHelpButton*, const char*) = reinterpret_cast<void (*)(KContextualHelpButton*, const char*)>(slot);
    KContextualHelpButton::connect(self, &KContextualHelpButton::contextualHelpTextChanged, [self, slotFunc](const QString& newContextualHelpText) {
        const QString newContextualHelpText_ret = newContextualHelpText;
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

// Base class handler implementation
QMetaObject* KContextualHelpButton_SuperMetaObject(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MetaObject_IsBase(true);
        return (QMetaObject*)vkcontextualhelpbutton->metaObject();
    } else {
        return (QMetaObject*)self->KContextualHelpButton::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetaObject(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MetaObject_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KContextualHelpButton_SuperMetacast(KContextualHelpButton* self, const char* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Metacast_IsBase(true);
        return vkcontextualhelpbutton->qt_metacast(param1);
    } else {
        return self->KContextualHelpButton::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetacast(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Metacast_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperMetacall(KContextualHelpButton* self, int param1, int param2, void** param3) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Metacall_IsBase(true);
        return vkcontextualhelpbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KContextualHelpButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetacall(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Metacall_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KContextualHelpButton_SuperSizeHint(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SizeHint_IsBase(true);
        return new QSize(vkcontextualhelpbutton->sizeHint());
    } else {
        return new QSize(((VirtualKContextualHelpButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSizeHint(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SizeHint_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KContextualHelpButton_MinimumSizeHint(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return new QSize(vkcontextualhelpbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKContextualHelpButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KContextualHelpButton_SuperMinimumSizeHint(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MinimumSizeHint_IsBase(true);
        return new QSize(vkcontextualhelpbutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKContextualHelpButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMinimumSizeHint(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_Event(KContextualHelpButton* self, QEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->event(e);
    } else {
        return ((VirtualKContextualHelpButton*)self)->event(e);
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperEvent(KContextualHelpButton* self, QEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Event_IsBase(true);
        return vkcontextualhelpbutton->event(e);
    } else {
        return ((VirtualKContextualHelpButton*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Event_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_MousePressEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->mousePressEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMousePressEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MousePressEvent_IsBase(true);
        vkcontextualhelpbutton->mousePressEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMousePressEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MousePressEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_MouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->mouseReleaseEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMouseReleaseEvent(KContextualHelpButton* self, QMouseEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MouseReleaseEvent_IsBase(true);
        vkcontextualhelpbutton->mouseReleaseEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMouseReleaseEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_PaintEvent(KContextualHelpButton* self, QPaintEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->paintEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperPaintEvent(KContextualHelpButton* self, QPaintEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_PaintEvent_IsBase(true);
        vkcontextualhelpbutton->paintEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnPaintEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_PaintEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ActionEvent(KContextualHelpButton* self, QActionEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->actionEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->actionEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperActionEvent(KContextualHelpButton* self, QActionEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ActionEvent_IsBase(true);
        vkcontextualhelpbutton->actionEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnActionEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ActionEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_EnterEvent(KContextualHelpButton* self, QEnterEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->enterEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->enterEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperEnterEvent(KContextualHelpButton* self, QEnterEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_EnterEvent_IsBase(true);
        vkcontextualhelpbutton->enterEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnEnterEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_EnterEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_LeaveEvent(KContextualHelpButton* self, QEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->leaveEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->leaveEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperLeaveEvent(KContextualHelpButton* self, QEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_LeaveEvent_IsBase(true);
        vkcontextualhelpbutton->leaveEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnLeaveEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_LeaveEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_TimerEvent(KContextualHelpButton* self, QTimerEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->timerEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperTimerEvent(KContextualHelpButton* self, QTimerEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_TimerEvent_IsBase(true);
        vkcontextualhelpbutton->timerEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnTimerEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_TimerEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ChangeEvent(KContextualHelpButton* self, QEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->changeEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperChangeEvent(KContextualHelpButton* self, QEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ChangeEvent_IsBase(true);
        vkcontextualhelpbutton->changeEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnChangeEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ChangeEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_HitButton(const KContextualHelpButton* self, const QPoint* pos) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->hitButton(*pos);
    } else {
        return ((VirtualKContextualHelpButton*)self)->hitButton(*pos);
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperHitButton(const KContextualHelpButton* self, const QPoint* pos) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HitButton_IsBase(true);
        return vkcontextualhelpbutton->hitButton(*pos);
    } else {
        return ((VirtualKContextualHelpButton*)self)->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHitButton(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HitButton_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_CheckStateSet(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->checkStateSet();
    } else {
        ((VirtualKContextualHelpButton*)self)->checkStateSet();
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCheckStateSet(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_CheckStateSet_IsBase(true);
        vkcontextualhelpbutton->checkStateSet();
    } else {
        ((VirtualKContextualHelpButton*)self)->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCheckStateSet(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_CheckStateSet_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_NextCheckState(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->nextCheckState();
    } else {
        ((VirtualKContextualHelpButton*)self)->nextCheckState();
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperNextCheckState(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_NextCheckState_IsBase(true);
        vkcontextualhelpbutton->nextCheckState();
    } else {
        ((VirtualKContextualHelpButton*)self)->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnNextCheckState(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_NextCheckState_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_InitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->initStyleOption(option);
    } else {
        ((VirtualKContextualHelpButton*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperInitStyleOption(const KContextualHelpButton* self, QStyleOptionToolButton* option) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InitStyleOption_IsBase(true);
        vkcontextualhelpbutton->initStyleOption(option);
    } else {
        ((VirtualKContextualHelpButton*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInitStyleOption(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InitStyleOption_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_KeyPressEvent(KContextualHelpButton* self, QKeyEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->keyPressEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperKeyPressEvent(KContextualHelpButton* self, QKeyEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_KeyPressEvent_IsBase(true);
        vkcontextualhelpbutton->keyPressEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnKeyPressEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_KeyPressEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_KeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperKeyReleaseEvent(KContextualHelpButton* self, QKeyEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_KeyReleaseEvent_IsBase(true);
        vkcontextualhelpbutton->keyReleaseEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnKeyReleaseEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_MouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMouseMoveEvent(KContextualHelpButton* self, QMouseEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MouseMoveEvent_IsBase(true);
        vkcontextualhelpbutton->mouseMoveEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMouseMoveEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_FocusInEvent(KContextualHelpButton* self, QFocusEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->focusInEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperFocusInEvent(KContextualHelpButton* self, QFocusEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusInEvent_IsBase(true);
        vkcontextualhelpbutton->focusInEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusInEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusInEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_FocusOutEvent(KContextualHelpButton* self, QFocusEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->focusOutEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperFocusOutEvent(KContextualHelpButton* self, QFocusEvent* e) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusOutEvent_IsBase(true);
        vkcontextualhelpbutton->focusOutEvent(e);
    } else {
        ((VirtualKContextualHelpButton*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusOutEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusOutEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KContextualHelpButton_DevType(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->devType();
    } else {
        return self->KContextualHelpButton::devType();
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperDevType(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DevType_IsBase(true);
        return vkcontextualhelpbutton->devType();
    } else {
        return self->KContextualHelpButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDevType(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DevType_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_SetVisible(KContextualHelpButton* self, bool visible) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setVisible(visible);
    } else {
        self->KContextualHelpButton::setVisible(visible);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperSetVisible(KContextualHelpButton* self, bool visible) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SetVisible_IsBase(true);
        vkcontextualhelpbutton->setVisible(visible);
    } else {
        self->KContextualHelpButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSetVisible(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SetVisible_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KContextualHelpButton_HeightForWidth(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KContextualHelpButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperHeightForWidth(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HeightForWidth_IsBase(true);
        return vkcontextualhelpbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KContextualHelpButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHeightForWidth(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HeightForWidth_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_HasHeightForWidth(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->hasHeightForWidth();
    } else {
        return self->KContextualHelpButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperHasHeightForWidth(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HasHeightForWidth_IsBase(true);
        return vkcontextualhelpbutton->hasHeightForWidth();
    } else {
        return self->KContextualHelpButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHasHeightForWidth(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KContextualHelpButton_PaintEngine(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->paintEngine();
    } else {
        return self->KContextualHelpButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KContextualHelpButton_SuperPaintEngine(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_PaintEngine_IsBase(true);
        return vkcontextualhelpbutton->paintEngine();
    } else {
        return self->KContextualHelpButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnPaintEngine(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_PaintEngine_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_MouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMouseDoubleClickEvent(KContextualHelpButton* self, QMouseEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MouseDoubleClickEvent_IsBase(true);
        vkcontextualhelpbutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMouseDoubleClickEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_WheelEvent(KContextualHelpButton* self, QWheelEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->wheelEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperWheelEvent(KContextualHelpButton* self, QWheelEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_WheelEvent_IsBase(true);
        vkcontextualhelpbutton->wheelEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnWheelEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_WheelEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_MoveEvent(KContextualHelpButton* self, QMoveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->moveEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperMoveEvent(KContextualHelpButton* self, QMoveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MoveEvent_IsBase(true);
        vkcontextualhelpbutton->moveEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMoveEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_MoveEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ResizeEvent(KContextualHelpButton* self, QResizeEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->resizeEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperResizeEvent(KContextualHelpButton* self, QResizeEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ResizeEvent_IsBase(true);
        vkcontextualhelpbutton->resizeEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnResizeEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ResizeEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_CloseEvent(KContextualHelpButton* self, QCloseEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->closeEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCloseEvent(KContextualHelpButton* self, QCloseEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_CloseEvent_IsBase(true);
        vkcontextualhelpbutton->closeEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCloseEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_CloseEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->contextMenuEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperContextMenuEvent(KContextualHelpButton* self, QContextMenuEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ContextMenuEvent_IsBase(true);
        vkcontextualhelpbutton->contextMenuEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnContextMenuEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_TabletEvent(KContextualHelpButton* self, QTabletEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->tabletEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperTabletEvent(KContextualHelpButton* self, QTabletEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_TabletEvent_IsBase(true);
        vkcontextualhelpbutton->tabletEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnTabletEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_TabletEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_DragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->dragEnterEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDragEnterEvent(KContextualHelpButton* self, QDragEnterEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DragEnterEvent_IsBase(true);
        vkcontextualhelpbutton->dragEnterEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDragEnterEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DragEnterEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_DragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->dragMoveEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDragMoveEvent(KContextualHelpButton* self, QDragMoveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DragMoveEvent_IsBase(true);
        vkcontextualhelpbutton->dragMoveEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDragMoveEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DragMoveEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_DragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDragLeaveEvent(KContextualHelpButton* self, QDragLeaveEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DragLeaveEvent_IsBase(true);
        vkcontextualhelpbutton->dragLeaveEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDragLeaveEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_DropEvent(KContextualHelpButton* self, QDropEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->dropEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDropEvent(KContextualHelpButton* self, QDropEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DropEvent_IsBase(true);
        vkcontextualhelpbutton->dropEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDropEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DropEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ShowEvent(KContextualHelpButton* self, QShowEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->showEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperShowEvent(KContextualHelpButton* self, QShowEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ShowEvent_IsBase(true);
        vkcontextualhelpbutton->showEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnShowEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ShowEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_HideEvent(KContextualHelpButton* self, QHideEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->hideEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperHideEvent(KContextualHelpButton* self, QHideEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HideEvent_IsBase(true);
        vkcontextualhelpbutton->hideEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnHideEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_HideEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_NativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKContextualHelpButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperNativeEvent(KContextualHelpButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_NativeEvent_IsBase(true);
        return vkcontextualhelpbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKContextualHelpButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnNativeEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_NativeEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KContextualHelpButton_Metric(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKContextualHelpButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperMetric(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Metric_IsBase(true);
        return vkcontextualhelpbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKContextualHelpButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnMetric(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Metric_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_InitPainter(const KContextualHelpButton* self, QPainter* painter) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->initPainter(painter);
    } else {
        ((VirtualKContextualHelpButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperInitPainter(const KContextualHelpButton* self, QPainter* painter) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InitPainter_IsBase(true);
        vkcontextualhelpbutton->initPainter(painter);
    } else {
        ((VirtualKContextualHelpButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInitPainter(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InitPainter_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KContextualHelpButton_Redirected(const KContextualHelpButton* self, QPoint* offset) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->redirected(offset);
    } else {
        return ((VirtualKContextualHelpButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KContextualHelpButton_SuperRedirected(const KContextualHelpButton* self, QPoint* offset) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Redirected_IsBase(true);
        return vkcontextualhelpbutton->redirected(offset);
    } else {
        return ((VirtualKContextualHelpButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnRedirected(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Redirected_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KContextualHelpButton_SharedPainter(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->sharedPainter();
    } else {
        return ((VirtualKContextualHelpButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KContextualHelpButton_SuperSharedPainter(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SharedPainter_IsBase(true);
        return vkcontextualhelpbutton->sharedPainter();
    } else {
        return ((VirtualKContextualHelpButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSharedPainter(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SharedPainter_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_InputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperInputMethodEvent(KContextualHelpButton* self, QInputMethodEvent* param1) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InputMethodEvent_IsBase(true);
        vkcontextualhelpbutton->inputMethodEvent(param1);
    } else {
        ((VirtualKContextualHelpButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInputMethodEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InputMethodEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KContextualHelpButton_InputMethodQuery(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return new QVariant(vkcontextualhelpbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKContextualHelpButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KContextualHelpButton_SuperInputMethodQuery(const KContextualHelpButton* self, int param1) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InputMethodQuery_IsBase(true);
        return new QVariant(vkcontextualhelpbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKContextualHelpButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnInputMethodQuery(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_InputMethodQuery_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_FocusNextPrevChild(KContextualHelpButton* self, bool next) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKContextualHelpButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperFocusNextPrevChild(KContextualHelpButton* self, bool next) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusNextPrevChild_IsBase(true);
        return vkcontextualhelpbutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKContextualHelpButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusNextPrevChild(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_EventFilter(KContextualHelpButton* self, QObject* watched, QEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->eventFilter(watched, event);
    } else {
        return self->KContextualHelpButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperEventFilter(KContextualHelpButton* self, QObject* watched, QEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_EventFilter_IsBase(true);
        return vkcontextualhelpbutton->eventFilter(watched, event);
    } else {
        return self->KContextualHelpButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnEventFilter(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_EventFilter_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ChildEvent(KContextualHelpButton* self, QChildEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->childEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperChildEvent(KContextualHelpButton* self, QChildEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ChildEvent_IsBase(true);
        vkcontextualhelpbutton->childEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnChildEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ChildEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_CustomEvent(KContextualHelpButton* self, QEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->customEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCustomEvent(KContextualHelpButton* self, QEvent* event) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_CustomEvent_IsBase(true);
        vkcontextualhelpbutton->customEvent(event);
    } else {
        ((VirtualKContextualHelpButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCustomEvent(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_CustomEvent_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_ConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->connectNotify(*signal);
    } else {
        ((VirtualKContextualHelpButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperConnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ConnectNotify_IsBase(true);
        vkcontextualhelpbutton->connectNotify(*signal);
    } else {
        ((VirtualKContextualHelpButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnConnectNotify(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_ConnectNotify_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_DisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKContextualHelpButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDisconnectNotify(KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DisconnectNotify_IsBase(true);
        vkcontextualhelpbutton->disconnectNotify(*signal);
    } else {
        ((VirtualKContextualHelpButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDisconnectNotify(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_DisconnectNotify_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_UpdateMicroFocus(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->updateMicroFocus();
    } else {
        ((VirtualKContextualHelpButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperUpdateMicroFocus(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_UpdateMicroFocus_IsBase(true);
        vkcontextualhelpbutton->updateMicroFocus();
    } else {
        ((VirtualKContextualHelpButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnUpdateMicroFocus(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_Create(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->create();
    } else {
        ((VirtualKContextualHelpButton*)self)->create();
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperCreate(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Create_IsBase(true);
        vkcontextualhelpbutton->create();
    } else {
        ((VirtualKContextualHelpButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnCreate(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Create_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KContextualHelpButton_Destroy(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->destroy();
    } else {
        ((VirtualKContextualHelpButton*)self)->destroy();
    }
}

// Base class handler implementation
void KContextualHelpButton_SuperDestroy(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Destroy_IsBase(true);
        vkcontextualhelpbutton->destroy();
    } else {
        ((VirtualKContextualHelpButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnDestroy(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Destroy_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_FocusNextChild(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->focusNextChild();
    } else {
        return ((VirtualKContextualHelpButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperFocusNextChild(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusNextChild_IsBase(true);
        return vkcontextualhelpbutton->focusNextChild();
    } else {
        return ((VirtualKContextualHelpButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusNextChild(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusNextChild_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_FocusPreviousChild(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->focusPreviousChild();
    } else {
        return ((VirtualKContextualHelpButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperFocusPreviousChild(KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusPreviousChild_IsBase(true);
        return vkcontextualhelpbutton->focusPreviousChild();
    } else {
        return ((VirtualKContextualHelpButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnFocusPreviousChild(KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = dynamic_cast<VirtualKContextualHelpButton*>(self);
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KContextualHelpButton_Sender(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->sender();
    } else {
        return ((VirtualKContextualHelpButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KContextualHelpButton_SuperSender(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Sender_IsBase(true);
        return vkcontextualhelpbutton->sender();
    } else {
        return ((VirtualKContextualHelpButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSender(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Sender_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KContextualHelpButton_SenderSignalIndex(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->senderSignalIndex();
    } else {
        return ((VirtualKContextualHelpButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperSenderSignalIndex(const KContextualHelpButton* self) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SenderSignalIndex_IsBase(true);
        return vkcontextualhelpbutton->senderSignalIndex();
    } else {
        return ((VirtualKContextualHelpButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnSenderSignalIndex(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KContextualHelpButton_Receivers(const KContextualHelpButton* self, const char* signal) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->receivers(signal);
    } else {
        return ((VirtualKContextualHelpButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KContextualHelpButton_SuperReceivers(const KContextualHelpButton* self, const char* signal) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Receivers_IsBase(true);
        return vkcontextualhelpbutton->receivers(signal);
    } else {
        return ((VirtualKContextualHelpButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnReceivers(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_Receivers_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KContextualHelpButton_IsSignalConnected(const KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKContextualHelpButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KContextualHelpButton_SuperIsSignalConnected(const KContextualHelpButton* self, const QMetaMethod* signal) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_IsSignalConnected_IsBase(true);
        return vkcontextualhelpbutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKContextualHelpButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnIsSignalConnected(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_IsSignalConnected_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KContextualHelpButton_GetDecodedMetricF(const KContextualHelpButton* self, int metricA, int metricB) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        return vkcontextualhelpbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKContextualHelpButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KContextualHelpButton_SuperGetDecodedMetricF(const KContextualHelpButton* self, int metricA, int metricB) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_GetDecodedMetricF_IsBase(true);
        return vkcontextualhelpbutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKContextualHelpButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KContextualHelpButton_OnGetDecodedMetricF(const KContextualHelpButton* self, intptr_t slot) {
    auto* vkcontextualhelpbutton = const_cast<VirtualKContextualHelpButton*>(dynamic_cast<const VirtualKContextualHelpButton*>(self));
    if (vkcontextualhelpbutton && vkcontextualhelpbutton->isVirtualKContextualHelpButton) {
        vkcontextualhelpbutton->setKContextualHelpButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKContextualHelpButton::KContextualHelpButton_GetDecodedMetricF_Callback>(slot));
    }
}

void KContextualHelpButton_Delete(KContextualHelpButton* self) {
    delete self;
}
